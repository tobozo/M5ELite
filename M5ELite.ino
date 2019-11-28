/*
 * M5 Elite: a model viewer 3D ships
 * Copyright 2019 Mystereon https://github.com/mystereon
 * Based on an idea of https://www.reddit.com/r/EliteDangerous/comments/bjdg54/old_school_elite_ship_viewer/
 * 
 * Code base on http://colinord.blogspot.com/2015/01/arduino-oled-module-with-3d-demo.html
 * Models from http://www.elitehomepage.org/index.htm and https://www.thingiverse.com
 *
 * Halloween 2019 Changes by tobozo:
 * - Added TFT_eSprite for smoother rendering
 * - Added stl to .h converter (see /models/ folder, adding your own models requires some python modules and php)
 * - Model coords are now using int8_t instead of int32_t
 * - Models are stored more conveniently in 'ShipAnimation' struct
 * - Models can have up to 2048 faces, rendered in 16 bit gradients if applicable
 * - Models relative centering (cancels absolute centering)
 * - Line drawing with gradients (requires ESP32-Chimera-Core)
 * 
 */

#include "Free_Fonts.h"
#include <M5Stack.h> // **required *** https://github.com/tobozo/ESP32-Chimera-Core
#include <M5StackUpdater.h> // https://github.com/tobozo/M5Stack-SD-Updater
#include <JPEGDecoder.h> // used to drap jpeg images into sprites
#include "ships.h"

#define tft M5.Lcd

TFT_eSprite ModelSprite = TFT_eSprite( &tft );
//TFT_eSprite TopBGSprite = TFT_eSprite( &tft );
TFT_eSprite BGSprite = TFT_eSprite( &tft );

float maxrot = INT_MIN;
float minrot = INT_MAX;

// With 1024 stars the update rate is ~65 frames per second
#define NSTARS 128
uint8_t sx[NSTARS] = {};
uint8_t sy[NSTARS] = {};
uint8_t sz[NSTARS] = {};

uint8_t za, zb, zc, zx;

// Fast 0-255 random number generator from http://eternityforest.com/Projects/rng.php:
uint8_t __attribute__((always_inline)) rng() {
  zx++;
  za = (za^zc^zx);
  zb = (zb+za);
  zc = (zc+(zb>>1)^za);
  return zc;
}

//float tx, nx, p;
//float ty, ny, py;
float rot, rotx, roty, rotz, rotxx, rotyy, rotzz, rotxxx, rotyyy, rotzzz;
int i; //0 to 360
int fl;

int originx = 160; // will be recalculated
int originy = 70; // will be recalculated

int front_depth = 20;
int back_depth = -20;

float vector;
int fd = 0; //0=orthographic
float scalefactor = 0;

unsigned long framenum = 0;
bool capture = true;


void setupUI() {

  // color holders for the gradient
  RGBColor colorstart;
  RGBColor colorend;
  colorstart.set( 40, 40, 192 ); // blueish
  colorend.set( 128, 128, 255) ; // lighter blue

  // where the wireframe is drawn
  ModelSprite.setColorDepth(16);
  ModelSprite.createSprite(318, 178);
  ModelSprite.fillSprite(TFT_BLACK);
  originx = ModelSprite.width() / 2;
  originy = ModelSprite.height() / 2;

  // header/footer background frame
  BGSprite.setColorDepth(16);
  BGSprite.createSprite( tft.width(), 20 );
  for(byte y=0;y<20;y++) {
    // make sure you're using https://github.com/tobozo/ESP32-Chimera-Core 
    // otherwise drawGradient won't work
    BGSprite.drawGradientHLine( 0, y, (tft.width()/2), colorstart, colorend);
    BGSprite.drawGradientHLine( (tft.width()/2), y, (tft.width()/2), colorend, colorstart);
  }

  // draw header but keep BGSPrite intact for re-use
  BGSprite.pushSprite( 0, 0 );
  tft.setTextFont(1);
  tft.setFreeFont(FF5);
  tft.setTextColor(WHITE, BLACK);
  String appName = "E L I T E - SHIP VIEWER M5";
  uint16_t w = tft.textWidth( appName );
  tft.setCursor( tft.width()/2 - w/2, 14, 2);  
  tft.print( appName );

  // draw footer
  BGSprite.pushSprite( 0, 200 );
  BGSprite.pushSprite( 0, 220 );
}


void drawShipName( String modelName ) {
  uint8_t voffset = 0;
  BGSprite.pushSprite( 0, 200 );
  BGSprite.pushSprite( 0, 220 );
  tft.setFreeFont(FF5);
  tft.setTextSize(2);
  uint16_t w = tft.textWidth( modelName );
  if( w > tft.width() ) {
    tft.setTextSize(1);
    w = tft.textWidth( modelName );
    voffset = 8;
  }
  // drop shadow
  tft.setTextColor(tft.color565(24,24,24));  
  tft.drawString( modelName, (tft.width()/2 - w/2)+4, 208 + voffset );
  tft.setTextColor(WHITE);  
  tft.drawString( modelName, tft.width()/2 - w/2, 204 + voffset );
}


void drawWireframeShip( TFT_eSprite &sprite ) {
  int face, f_line, wf_f_1, wf_f_2;
  uint8_t basecolor1;
  uint8_t basecolor2;
  uint16_t color;
  RGBColor color1;
  RGBColor color2;
  for ( face = 0; face < ship_faces_cnt; face++) {
    vector = 0;
    for ( f_line = 1; f_line < ship_faces[face][0]; f_line++) {
      wf_f_1 = ship_faces[face][f_line];
      wf_f_2 = ship_faces[face][f_line + 1];
      vector += wireframe[wf_f_1][0] * wireframe[wf_f_2][1] - wireframe[wf_f_1][1] * wireframe[wf_f_2][0];
    };
    wf_f_1 = ship_faces[face][f_line];
    wf_f_2 = ship_faces[face][1];
    vector += wireframe[wf_f_1][0] * wireframe[wf_f_2][1] - wireframe[wf_f_1][1] * wireframe[wf_f_2][0];
    if ( vector >= 0 ) {
      for ( f_line = 1; f_line < ship_faces[face][0]; f_line++) {
        wf_f_1 = ship_faces[face][f_line];
        wf_f_2 = ship_faces[face][f_line + 1];
        switch( renderingMethod ) {
          case R_LINE_COLOR:
            color = map( wireframecolors[wf_f_2], (int)minrot, (int)maxrot, 128, 255 );
            sprite.drawLine(wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], tft.color565( color, color, color) );
          break;
          case R_LINE_GRADIENT:
            basecolor1 = map( wireframecolors[wf_f_1], (int)minrot, (int)maxrot, 128, 255 );
            basecolor2 = map( wireframecolors[wf_f_2], (int)minrot, (int)maxrot, 128, 255 );
            color1.set( basecolor1, basecolor1, 128 );
            color2.set( basecolor2, basecolor2, 128 );
            sprite.drawGradientLine( wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], color1, color2 );
          break;
          default:
          case R_SINGLE_COLOR:
            sprite.drawLine(wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], YELLOW );
          break;
        }
      }
      wf_f_1 = ship_faces[face][f_line];
      wf_f_2 = ship_faces[face][1];
      switch( renderingMethod ) {
        case R_LINE_COLOR:
          color = map( wireframecolors[wf_f_2], (int)minrot, (int)maxrot, 128, 255 );
          sprite.drawLine(wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], tft.color565( color, color, color) );
        break;
        case R_LINE_GRADIENT:
          sprite.drawGradientLine( wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], color1, color2 );
        break;
        default:
        case R_SINGLE_COLOR:
          sprite.drawLine(wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], YELLOW );
        break;
      }
    }
  }
}


void drawStars( TFT_eSprite &sprite ) {
  uint16_t _width   = sprite.width();
  uint16_t _hwidth  = _width/2;
  uint16_t _height  = sprite.height();
  uint16_t _hheight = _height/2;
  
  uint8_t spawnDepthVariation = 255;
  for(int i = 0; i < NSTARS; ++i) {
    if (sz[i] <= 1) {
      sx[i] = _hwidth - _hheight + rng();
      sy[i] = rng();
      sz[i] = spawnDepthVariation--;
    } else {
      sz[i] -= 2;
      if (sz[i] > 1) {
        int screen_x = ((int)sx[i] - _hwidth) * 256 / sz[i] + _hwidth;
        int screen_y = ((int)sy[i] - _hheight) * 256 / sz[i] + _hheight;
        if (screen_x >= 0 && screen_y >= 0 && screen_x < _width && screen_y < _height) {
          uint8_t r, g, b;
          r = g = b = 255 - (sz[i]/2); // brighter stars !
          sprite.drawPixel(screen_x, screen_y, tft.color565(r,g,b));
        } else {
          sz[i] = 0; // Out of screen, die.
        }
      }
    }
  }
}


void rotateShip(void) {
  scalefactor = 0;
  bool scalingup = true;
  for (int cnt = 0; cnt < 3; cnt ++) {
    for (int angle = 0; angle <= 360; angle = angle + 3) {
      for (int i = 0; i < ship_vertices_cnt; i++) {
        rot = angle * 0.0174532; //0.0174532 = one degree
        //rotateY
        rotz = ship_vertices[i][2] / scale * sin(rot) - ship_vertices[i][0] / scale * cos(rot);
        rotx = ship_vertices[i][2] / scale * cos(rot) + ship_vertices[i][0] / scale * sin(rot);
        roty = ship_vertices[i][1] / scale;
        //rotateX
        rotyy = roty * sin(rot) - rotz * cos(rot);
        rotzz = roty * cos(rot) + rotz * sin(rot);
        rotxx = rotx;
        //rotateZ
        rotxxx = rotxx * sin(rot) - rotyy * cos(rot);
        rotyyy = rotxx * cos(rot) + rotyy * sin(rot);
        rotzzz = rotzz;
        //orthographic projection
        //rotxxx = rotxxx + originx;
        //rotyyy = rotyyy + originy;
        rotxxx = rotxxx * scalefactor + originx;
        rotyyy = rotyyy * scalefactor + originy;
        //store new vertices values for wireframe drawing
        wireframe[i][0] = rotxxx;
        wireframe[i][1] = rotyyy;
        wireframe[i][2] = rotzzz;
        wireframecolors[i] = rotzzz;

        if( rotzzz > maxrot ) maxrot = rotzzz;
        if( rotzzz < minrot ) minrot = rotzzz;
        //draw_vertices();
      }
      ModelSprite.fillSprite( TFT_BLACK );
      drawStars( ModelSprite );
      drawWireframeShip( ModelSprite );
      ModelSprite.pushSprite( 1, 21 );

      if( scalingup ) {
        if (scalefactor < 1) {
          scalefactor += 0.02; // 1/50
        } else {
          scalingup = false;
        }
      } else {
        if( cnt == 2 && angle > 285 ) { // fade later, fade faster
          scalefactor -= 0.04;
        }
      }
    }
  }
}



void setup(void) {
  za = random(256);
  zb = random(256);
  zc = random(256);
  zx = random(256);
  //Serial.begin(115200);
  M5.begin();

  tft.fillScreen(BLACK);

  if(digitalRead(BUTTON_A_PIN)==0){
    updateFromFS(); //SD UPdate
    ESP.restart();
  }
  setupUI();
  tft.fillRect(1, 21, 318, 178, BLACK);
  tft.drawRect(0, 20, 320, 180, WHITE);

}


void loop(void) {

  for( uint8_t shipindex=0; shipindex<SHIPS_ARRAY_SIZE; shipindex++) {
    Serial.printf("Animation #%d : %s\n", framenum, ShipAnimations[shipindex].name);
    drawShipName( ShipAnimations[shipindex].name );
    ShipAnimations[shipindex].cb();
    renderingMethod = ShipAnimations[shipindex].renderingMethod;
    rotateShip();
    Serial.printf("Maxrot: %.2f, Minrot: %.2f\n", maxrot, minrot);
    maxrot = INT_MIN;
    minrot = INT_MAX;
  }
  capture = false;
  
}
