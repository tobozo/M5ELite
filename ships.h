// up to 2048 vertices / faces !!

float scale; //focal length
int16_t wireframe[2048][3];
uint8_t wireframecolors[2048];

unsigned int ship_vertices_cnt, ship_faces_cnt;
int8_t ship_vertices[2048][3];
uint16_t ship_faces[2048][9];

// syntax sugar for easy ship addition

typedef void (*ShipAnimation_cb)();

enum RenderingMethod {
  R_SINGLE_COLOR = 0,
  R_LINE_COLOR = 1,
  R_LINE_GRADIENT = 2
};

RenderingMethod renderingMethod = R_SINGLE_COLOR;

struct ShipAnimation {
  const char* name;
  ShipAnimation_cb cb;
  RenderingMethod renderingMethod;
};


// include your own ships starting from here, 
// then add them to ShipAnimation and increase
// the SHIPS_ARRAY_SIZE

#include "models/OriginalShips.h" // 9 ships here, from the original sketch ( http://www.elitehomepage.org/index.htm )
// generated ships
#include "models/Xwing.stl.h"
#include "models/Firefly.stl.h"
#include "models/Rocket.stl.h"
#include "models/MilleniumFalcon.stl.h"
#include "models/PlanetExpress.stl.h"
#include "models/Narcissus.stl.h"
#include "models/TronRecognizer.stl.h"
#include "models/ImperialCruiser.stl.h"
#include "models/ImperialDestroyer.stl.h"
#include "models/Liberator.stl.h"
#include "models/Pirhana.stl.h"
#include "models/TieFighter.stl.h"

#define SHIPS_ARRAY_SIZE 21 // adjust this value to the number of ships
ShipAnimation ShipAnimations[SHIPS_ARRAY_SIZE] = {
  PirhanaAnimation,
  thargoidAnimation,
  TieFighterAnimation,
  coriolisAnimation,
  dodoAnimation,
  sidewinderAnimation,
  viperAnimation,
  anacondaAnimation,
  aspAnimation,
  adderAnimation,
  cobraAnimation,
  LiberatorAnimation,
  MilleniumFalconAnimation,
  ImperialDestroyerAnimation,
  ImperialCruiserAnimation,
  PlanetExpressAnimation,
  NarcissusAnimation,
  FireflyAnimation,
  TronRecognizerAnimation,
  XwingAnimation,
  RocketAnimation,
};
