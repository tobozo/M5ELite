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
 * - Models can have up to 2048 faces
 * - Models relative centering (cancels absolute centering)
 * 
 */

#include "Free_Fonts.h"
#include <M5Stack.h>
#include "M5StackUpdater.h"
#include <JPEGDecoder.h> // used to drap jpeg images into sprites
#include "ships.h"
#include "asset.h" // jpeg image data, procuced with 'xxd' command line utility

// With 1024 stars the update rate is ~65 frames per second
#define NSTARS 128
uint8_t sx[NSTARS] = {};
uint8_t sy[NSTARS] = {};
uint8_t sz[NSTARS] = {};

uint8_t za, zb, zc, zx;

// Fast 0-255 random number generator from http://eternityforest.com/Projects/rng.php:
uint8_t __attribute__((always_inline)) rng()
{
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

#define tft M5.Lcd
TFT_eSprite ModelSprite = TFT_eSprite( &tft );
TFT_eSprite TopBGSprite = TFT_eSprite( &tft );
TFT_eSprite BottomBGSprite = TFT_eSprite( &tft );


// helper function to render jpeg into sprite
uint32_t sprite_jpegRender( TFT_eSprite &spr, int xpos, int ypos ) {
  uint16_t *pImg;
  uint16_t mcu_w = JpegDec.MCUWidth;
  uint16_t mcu_h = JpegDec.MCUHeight;
  uint32_t max_x = JpegDec.width;
  uint32_t max_y = JpegDec.height;
  // Jpeg images are draw as a set of image block (tiles) called Minimum Coding Units (MCUs)
  // Typically these MCUs are 16x16 pixel blocks
  // Determine the width and height of the right and bottom edge image blocks
  uint32_t min_w = min( mcu_w, max_x % mcu_w );
  uint32_t min_h = min( mcu_h, max_y % mcu_h );
  // save the current image block size
  uint32_t win_w = mcu_w;
  uint32_t win_h = mcu_h;
  // record the current time so we can measure how long it takes to draw an image
  uint32_t drawTime = millis();
  // save the coordinate of the right and bottom edges to assist image cropping
  // to the screen size
  max_x += xpos;
  max_y += ypos;
  // Fetch data from the file, decode and display
  while ( JpegDec.read() ) {    // While there is more data in the file
    pImg = JpegDec.pImage ;   // Decode a MCU (Minimum Coding Unit, typically a 8x8 or 16x16 pixel block)
    // Calculate coordinates of top left corner of current MCU
    int mcu_x = JpegDec.MCUx * mcu_w + xpos;
    int mcu_y = JpegDec.MCUy * mcu_h + ypos;
    // check if the image block size needs to be changed for the right edge
    if ( mcu_x + mcu_w <= max_x ) win_w = mcu_w;
    else win_w = min_w;
    // check if the image block size needs to be changed for the bottom edge
    if ( mcu_y + mcu_h <= max_y ) win_h = mcu_h;
    else win_h = min_h;
    // copy pixels into a contiguous block
    if ( win_w != mcu_w ) {
      uint16_t *cImg;
      int p = 0;
      cImg = pImg + win_w;
      for ( int h = 1; h < win_h; h++ ) {
        p += mcu_w;
        for ( int w = 0; w < win_w; w++ ) {
          *cImg = *( pImg + w + p );
          cImg++;
        }
      }
    }
    // calculate how many pixels must be drawn
    uint32_t mcu_pixels = win_w * win_h;
    // draw image MCU block only if it will fit on the screen
    if ( ( mcu_x + win_w ) <= spr.width() && ( mcu_y + win_h ) <= spr.height() )
      spr.pushImage( mcu_x, mcu_y, win_w, win_h, pImg );
    else if ( (mcu_y + win_h) >= spr.height() )
      JpegDec.abort(); // Image has run off bottom of screen so abort decoding
  }
  return millis() - drawTime;
}


// wrapper to the helper function
void sprite_drawJpg( TFT_eSprite &spr, int16_t x, int16_t y, const uint8_t * jpg_data, size_t jpg_len, uint16_t maxWidth, uint16_t maxHeight ) {
  boolean decoded = JpegDec.decodeArray( jpg_data, jpg_len );
  if ( decoded ) {
    sprite_jpegRender( spr, x, y );
  } else {
    Serial.println( "Jpeg file format not supported!" );
  }
}


void setupSprites() {
  // where the wireframe is drawn
  ModelSprite.setColorDepth(8);
  ModelSprite.createSprite(318, 178);
  ModelSprite.fillSprite(TFT_BLACK);
  originx = ModelSprite.width() / 2;
  originy = ModelSprite.height() / 2;
  // header frame
  TopBGSprite.setColorDepth(16);
  TopBGSprite.createSprite( tft.width(), 24 );
  sprite_drawJpg( TopBGSprite, 0, 0, background_top_jpg, background_top_jpg_len, 320, 40 );
  TopBGSprite.setTextColor(WHITE, BLACK); 
  TopBGSprite.setTextFont(1);
  TopBGSprite.setFreeFont(FF5);
  String appName = "E L I T E - SHIP VIEWER M5";
  uint16_t w = TopBGSprite.textWidth( appName );
  TopBGSprite.setCursor( tft.width()/2 - w/2, 14, 2);  
  TopBGSprite.print( appName );
  // footer frame
  BottomBGSprite.setColorDepth(16);
  BottomBGSprite.createSprite( tft.width(), 60 );
  sprite_drawJpg( BottomBGSprite, 0, 0, background_bottom_jpg, background_bottom_jpg_len, 320, 60 );
  // render sprites
  TopBGSprite.pushSprite( 0, 0 ); // rendered once
  BottomBGSprite.pushSprite( 0, 200 ); // rendered every time the ship name changes
}


void drawShipName( String modelName ) {
  BottomBGSprite.pushSprite( 0, 200 );
  tft.setFreeFont(FF5);
  tft.setTextSize(2);
  uint16_t w = tft.textWidth( modelName );
  if( w > tft.width() ) {
    tft.setTextSize(1);
    w = tft.textWidth( modelName );
  }
  // drop shadow
  tft.setTextColor(tft.color565(24,24,24));  
  tft.drawString( modelName, (tft.width()/2 - w/2)+4, 208 );
  tft.setTextColor(WHITE);  
  tft.drawString( modelName, tft.width()/2 - w/2, 204 );
}


void draw_wireframe_ship( TFT_eSprite &sprite ) {
  int face, f_line, wf_f_1, wf_f_2;
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
        sprite.drawLine(wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], YELLOW);
      }
      wf_f_1 = ship_faces[face][f_line];
      wf_f_2 = ship_faces[face][1];
      sprite.drawLine(wireframe[wf_f_1][0], wireframe[wf_f_1][1], wireframe[wf_f_2][0], wireframe[wf_f_2][1], YELLOW);
    }
  }
  Serial.print(".");
}



void stars( TFT_eSprite &sprite ) {
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
      int old_screen_x = ((int)sx[i] - _hwidth) * 256 / sz[i] + _hwidth;
      int old_screen_y = ((int)sy[i] - _hheight) * 256 / sz[i] + _hheight;

      if (old_screen_x >= 0 && old_screen_y >= 0 && old_screen_x < _width && old_screen_y < _height) {
        // This is a faster pixel drawing function for occassions where many single pixels must be drawn
        sprite.drawPixel(old_screen_x, old_screen_y,TFT_BLACK);
      }
      sz[i] -= 2;
      if (sz[i] > 1) {
        int screen_x = ((int)sx[i] - _hwidth) * 256 / sz[i] + _hwidth;
        int screen_y = ((int)sy[i] - _hheight) * 256 / sz[i] + _hheight;
  
        if (screen_x >= 0 && screen_y >= 0 && screen_x < _width && screen_y < _height) {
          uint8_t r, g, b;
          r = g = b = 255 - sz[i];
          sprite.drawPixel(screen_x, screen_y, tft.color565(r,g,b));
        } else {
          sz[i] = 0; // Out of screen, die.
        }
      }
    }
  }
}


void rotate_ship(void) {
  scalefactor = 0;
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
        //draw_vertices();
      }
      ModelSprite.fillSprite( TFT_BLACK );
      stars( ModelSprite );
      draw_wireframe_ship( ModelSprite );
      ModelSprite.pushSprite( 1, 21 );
      if (scalefactor < 1) scalefactor = scalefactor + 0.02;
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
  setupSprites();
  tft.fillRect(1, 21, 318, 178, BLACK);
  tft.drawRect(0, 20, 320, 180, WHITE);
}


void loop(void) {

  for( uint8_t shipindex=0; shipindex<SHIPS_ARRAY_SIZE; shipindex++) {
    Serial.printf("Animating %s\n", ShipAnimations[shipindex].name);
    drawShipName( ShipAnimations[shipindex].name );
    ShipAnimations[shipindex].cb();
    rotate_ship();
  }
}
