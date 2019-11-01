/*
 * Based on an idea of https://www.reddit.com/r/EliteDangerous/comments/bjdg54/old_school_elite_ship_viewer/
 * 
 * Code base on http://colinord.blogspot.com/2015/01/arduino-oled-module-with-3d-demo.html
 *
 * Halloween 2019 Changes: Added TFT_eSprite for smoother rendering, courtesy of tobozo
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

#define BITS_PER_PIXEL 1              // How many bits per pixel in Sprite

//float tx, nx, p;
//float ty, ny, py;
float rot, rotx, roty, rotz, rotxx, rotyy, rotzz, rotxxx, rotyyy, rotzzz;
int i; //0 to 360
int fl, scale; //focal length
int wireframe[32][3];

int ship_vertices_cnt, ship_faces_cnt;
int ship_vertices[32][3];
int ship_faces[32][9];


int originx = 120;
int originy = 70;

int front_depth = 20;
int back_depth = -20;

float vector;

int fd = 0; //0=orthographic

float scalefactor = 0;

TFT_eSprite MainSprite = TFT_eSprite( &M5.Lcd );
TFT_eSprite TopBGSprite = TFT_eSprite( &M5.Lcd );
TFT_eSprite BottomBGSprite = TFT_eSprite( &M5.Lcd );

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
  // main sprite, renders the white frame and its contents
  MainSprite.setColorDepth(8);
  MainSprite.createSprite( M5.Lcd.width(), M5.Lcd.height() );
  MainSprite.fillSprite( TFT_TRANSPARENT );
  MainSprite.fillRect(1, 21, 318, 178, BLACK);
  MainSprite.drawRect(0, 20, 320, 180, WHITE);
  // top header
  TopBGSprite.setColorDepth(16);
  TopBGSprite.createSprite( M5.Lcd.width(), 24 );
  sprite_drawJpg( TopBGSprite, 0, 0, background_top_jpg, background_top_jpg_len, 320, 40 );
  TopBGSprite.setTextColor(WHITE, BLACK); 
  TopBGSprite.setTextFont(1);
  TopBGSprite.setFreeFont(FF5);
  String appName = "E L I T E - SHIP VIEWER M5";
  uint16_t w = TopBGSprite.textWidth( appName );
  TopBGSprite.setCursor( M5.Lcd.width()/2 - w/2, 14, 2);  
  TopBGSprite.print( appName );

  // footer
  BottomBGSprite.setColorDepth(16);
  BottomBGSprite.createSprite( M5.Lcd.width(), 60 );
  sprite_drawJpg( BottomBGSprite, 0, 0, background_bottom_jpg, background_bottom_jpg_len, 320, 60 );

  TopBGSprite.pushSprite( 0, 0 ); // rendered once
  BottomBGSprite.pushSprite( 0, 200 ); // rendered every time the ship name changes
  MainSprite.pushSprite( 0, 0, TFT_TRANSPARENT ); // rendered as often as possible
}


void drawShipName( String modelName ) {
  BottomBGSprite.pushSprite( 0, 200 );
  M5.Lcd.setFreeFont(FF5);

  M5.Lcd.setTextSize(2);
  uint16_t w = M5.Lcd.textWidth( modelName );
  if( w > M5.Lcd.width() ) {
    M5.Lcd.setTextSize(1);
    w = M5.Lcd.textWidth( modelName );
  }

  // drop shadow
  M5.Lcd.setTextColor(M5.Lcd.color565(24,24,24));  
  M5.Lcd.drawString( modelName, (M5.Lcd.width()/2 - w/2)+4, 208 );
  
  M5.Lcd.setTextColor(WHITE);  
  M5.Lcd.drawString( modelName, M5.Lcd.width()/2 - w/2, 204 );
}


void draw_wireframe_ship(void) {
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
        MainSprite.drawLine(wireframe[wf_f_1][0]+35, wireframe[wf_f_1][1]+35, wireframe[wf_f_2][0]+35, wireframe[wf_f_2][1]+35, YELLOW);
      }
      wf_f_1 = ship_faces[face][f_line];
      wf_f_2 = ship_faces[face][1];
      MainSprite.drawLine(wireframe[wf_f_1][0]+35, wireframe[wf_f_1][1]+35, wireframe[wf_f_2][0]+35, wireframe[wf_f_2][1]+35, YELLOW);
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
      MainSprite.fillRect(1, 21, 318, 178, BLACK);
      stars();
      draw_wireframe_ship();
      MainSprite.pushSprite( 0, 0, TFT_TRANSPARENT );
      if (scalefactor < 1) scalefactor = scalefactor + 0.02;
    }
  }
}


void stars() {
  uint8_t spawnDepthVariation = 255;
  for(int i = 0; i < NSTARS; ++i) {
    if (sz[i] <= 1) {
      sx[i] = 160 - 120 + rng();
      sy[i] = rng();
      sz[i] = spawnDepthVariation--;
    } else {
      int old_screen_x = ((int)sx[i] - 160) * 256 / sz[i] + 160;
      int old_screen_y = ((int)sy[i] - 120) * 256 / sz[i] + 120;

      if (old_screen_x >= 1 && old_screen_y >= 21 && old_screen_x < 319 && old_screen_y < 179) {
        // This is a faster pixel drawing function for occassions where many single pixels must be drawn
        MainSprite.drawPixel(old_screen_x, old_screen_y,TFT_BLACK);
      }
      sz[i] -= 2;
      if (sz[i] > 1) {
        int screen_x = ((int)sx[i] - 160) * 256 / sz[i] + 160;
        int screen_y = ((int)sy[i] - 120) * 256 / sz[i] + 120;
  
        if (screen_x >= 1 && screen_y >= 21 && screen_x < 319 && screen_y < 179) {
          uint8_t r, g, b;
          r = g = b = 255 - sz[i];
          MainSprite.drawPixel(screen_x, screen_y, M5.Lcd.color565(r,g,b));
        } else {
          sz[i] = 0; // Out of screen, die.
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
  Serial.begin(115200);
  M5.begin();
  Wire.begin();if(digitalRead(39)==0){updateFromFS(SD);ESP.restart();}//SD UPdate
  //M5.Lcd.init();   // initialize a ST7789 chip, 240x240 pixels
  M5.Lcd.setRotation(1);
  M5.Lcd.fillScreen(BLACK);

  setupSprites();
}


void loop(void) {
  int i, j;

  drawShipName("Cobra MK I");
  memcpy(ship_vertices, cobra_vertices, sizeof(cobra_vertices));
  ship_vertices_cnt = cobra_vertices_cnt;
  scale = cobra_scale;
  memcpy(ship_faces, cobra_faces, sizeof(cobra_faces));
  ship_faces_cnt = cobra_faces_cnt;
  rotate_ship();

  drawShipName("Adder");
  memcpy(ship_vertices, adder_vertices, sizeof(adder_vertices));
  ship_vertices_cnt = adder_vertices_cnt;
  scale = adder_scale;
  memcpy(ship_faces, adder_faces, sizeof(adder_faces));
  ship_faces_cnt = adder_faces_cnt;
  rotate_ship();

  drawShipName("ASP");
  memcpy(ship_vertices, asp_vertices, sizeof(asp_vertices));
  ship_vertices_cnt = asp_vertices_cnt;
  scale = asp_scale;
  memcpy(ship_faces, asp_faces, sizeof(asp_faces));
  ship_faces_cnt = asp_faces_cnt;
  rotate_ship();

  drawShipName("Anaconda");
  memcpy(ship_vertices, anaconda_vertices, sizeof(anaconda_vertices));
  ship_vertices_cnt = anaconda_vertices_cnt;
  scale = anaconda_scale;
  memcpy(ship_faces, anaconda_faces, sizeof(anaconda_faces));
  ship_faces_cnt = anaconda_faces_cnt;
  rotate_ship();

  drawShipName("Viper");
  memcpy(ship_vertices, viper_vertices, sizeof(viper_vertices));
  ship_vertices_cnt = viper_vertices_cnt;
  scale = viper_scale;
  memcpy(ship_faces, viper_faces, sizeof(viper_faces));
  ship_faces_cnt = viper_faces_cnt;
  rotate_ship();

  drawShipName("Sidewinder");
  memcpy(ship_vertices, sidewinder_vertices, sizeof(sidewinder_vertices));
  ship_vertices_cnt = sidewinder_vertices_cnt;
  scale = sidewinder_scale;
  memcpy(ship_faces, sidewinder_faces, sizeof(sidewinder_faces));
  ship_faces_cnt = sidewinder_faces_cnt;
  rotate_ship();

  drawShipName("Coriolis Station");
  memcpy(ship_vertices, coriolis_vertices, sizeof(coriolis_vertices));
  ship_vertices_cnt = coriolis_vertices_cnt;
  scale = coriolis_scale;
  memcpy(ship_faces, coriolis_faces, sizeof(coriolis_faces));
  ship_faces_cnt = coriolis_faces_cnt;
  rotate_ship();

  drawShipName("Dodo Station");
  memcpy(ship_vertices, dodo_vertices, sizeof(dodo_vertices));
  ship_vertices_cnt = dodo_vertices_cnt;
  scale = dodo_scale;
  memcpy(ship_faces, dodo_faces, sizeof(dodo_faces));
  ship_faces_cnt = dodo_faces_cnt;
  rotate_ship();

  drawShipName("Thargoid");
  memcpy(ship_vertices, thargoid_vertices, sizeof(thargoid_vertices));
  ship_vertices_cnt = thargoid_vertices_cnt;
  scale = thargoid_scale;
  memcpy(ship_faces, thargoid_faces, sizeof(thargoid_faces));
  ship_faces_cnt = thargoid_faces_cnt;
  rotate_ship();
}
