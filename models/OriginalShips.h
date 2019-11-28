
const int cobra_scale = 2;
const int8_t cobra_vertices[28][3] = {
  { 32 , 0 , 76 },   //  0
  { -32 , 0 , 76 },  //  1
  { 0 , 26 , 24 },   //  2
  { -120 , -3 , -8 },  //  3
  { 120 , -3 , -8 },   //  4
  { -88 , 16 , -40 },  //  5
  { 88 , 16 , -40 },   //  6
  { 127 , -8 , -40 },  //  7
  { -127 , -8 , -40 },   //  8
  { 0 , 26 , -40 },  //  9
  { -32 , -24 , -40 },   //  10
  { 32 , -24 , -40 },  //  11
  { -36 , 8 , -40 },   //  12
  { -8 , 12 , -40 },   //  13
  { 8 , 12 , -40 },  //  14
  { 36 , 8 , -40 },  //  15
  { 36 , -12 , -40 },  //  16
  { 8 , -16 , -40 },   //  17
  { -8 , -16 , -40 },  //  18
  { -36 , -12 , -40 },   //  19
  { 0 , 0 , 76 },  //  20
  { 0 , 0 , 90 },  //  21
  { -80 , -6 , -40 },  //  22
  { -80 , 6 , -40 },   //  23
  { -88 , 0 , -40 },   //  24
  { 80 , 6 , -40 },  //  25
  { 88 , 0 , -40 },  //  26
  { 80 , -6 , -40 }  //  27
};


const uint16_t cobra_faces[17][9] = {
  { 3, 0, 1, 2, 0, 0, 0, 0, 0 },     //0
  { 3, 2, 1, 5, 0, 0, 0, 0, 0 },     //1
  { 3, 0, 2, 6, 0, 0, 0, 0, 0 },     //2
  { 3, 5, 1, 3, 0, 0, 0, 0, 0 },     //3
  { 3, 0, 6, 4, 0, 0, 0, 0, 0 },     //4
  { 3, 9, 2, 5, 0, 0, 0, 0, 0 },     //5
  { 3, 9, 6, 2, 0, 0, 0, 0, 0 },     //6
  { 3, 8, 5, 3, 0, 0, 0, 0, 0 },     //7
  { 3, 4, 6, 7, 0, 0, 0, 0, 0 },     //8
  { 7, 6, 9, 5, 8, 10, 11, 7, 0 },   //9
  { 4, 10, 8, 3, 1, 0, 0, 0, 0 },    //10
  { 4, 10, 1, 0, 11, 0, 0, 0, 0 },   //11
  { 4, 11, 0, 4, 7, 0, 0, 0, 0 },    //12
  { 4, 17, 16, 15, 14, 0, 0, 0, 0 }, //13
  { 4, 19, 18, 13, 12, 0, 0, 0, 0 }, //14
  { 3, 22, 23, 24, 0, 0, 0, 0, 0 },  //15
  { 3, 26, 25, 27, 0, 0, 0, 0, 0 }   //16
};

void getcobraShip() {
  memcpy(ship_vertices, cobra_vertices, sizeof(cobra_vertices));
  ship_vertices_cnt = 28;
  scale = cobra_scale;
  memcpy(ship_faces, cobra_faces, sizeof(cobra_faces));
  ship_faces_cnt = 17;
}

ShipAnimation cobraAnimation {
  "Cobra",
  *getcobraShip
};




const int adder_scale = 1;
const int8_t adder_vertices[18][3] = {
  { -18 , 0 , 40 },   //  0
  { 18 , 0 , 40 },   //  1
  { 30 , 0 , -24 },  //  2
  { 30 , 0 , -40 },  //  3
  { 18 , -7 , -40 },   //  4
  { -18 , -7 , -40 },  //  5
  { -30 , 0 , -40 },   //  6
  { -30 , 0 , -24 },   //  7
  { -18 , 7 , -40 },   //  8
  { 18 , 7 , -40 },  //  9
  { -18 , 7 , 13 },  //  10
  { 18 , 7 , 13 },   //  11
  { -18 , -7 , 13 },   //  12
  { 18 , -7 , 13 },  //  13
  { -11 , 3 , 29 },  //  14
  { 11 , 3 , 29 },   //  15
  { 11 , 4 , 24 },   //  16
  { -11 , 4 , 24 }  //  17
};

const uint16_t adder_faces[14][9] = {
  { 4, 11, 1, 0, 10, 0, 0, 0, 0 }, //  0
  { 4, 13, 12, 0, 1, 0, 0, 0, 0 }, //  1
  { 3, 2, 1, 11, 0, 0, 0, 0, 0 }, //  2
  { 3, 13, 1, 2, 0, 0, 0, 0, 0 }, //  3
  { 4, 2, 11, 9, 3, 0, 0, 0, 0 }, //  4
  { 4, 4, 13, 2, 3, 0, 0, 0, 0 }, //  5
  { 6, 9, 8, 6, 5, 4, 3, 0, 0 }, // 6
  { 4, 10, 7, 6, 8, 0, 0, 0, 0 }, //  7
  { 4, 12, 5, 6, 7, 0, 0, 0, 0 }, //  8
  { 3, 10, 0, 7, 0, 0, 0, 0, 0 }, //  9
  { 3, 12, 7, 0, 0, 0, 0, 0, 0 }, //  10
  { 4, 10, 8, 9, 11, 0, 0, 0, 0 }, //  11
  { 4, 12, 13, 4, 5, 0, 0, 0, 0 }, //  12
  { 4, 17, 16, 15, 14, 0, 0, 0, 0 } //  13
};

void getadderShip() {
  memcpy(ship_vertices, adder_vertices, sizeof(adder_vertices));
  ship_vertices_cnt = 18;
  scale = adder_scale;
  memcpy(ship_faces, adder_faces, sizeof(adder_faces));
  ship_faces_cnt = 14;
}

ShipAnimation adderAnimation {
  "Adder",
  *getadderShip
};




const int asp_scale = 1;
const int8_t asp_vertices[17 ][3] = {
  { 0, -18, 0 }, //  0
  { 0, -9, -45 }, //  1
  { 43, 0, -45 }, //  2
  { 69, -3, 0 }, //  3
  { 43, -14, 28 }, //  4
  { -43, 0, -45 }, //  5
  { -69, -3, 0 }, //  6
  { -43, -14, 28 }, //  7
  { 26, -7, 73 }, //  8
  { -26, -7, 73 }, //  9
  { 43, 14, 28 }, //  10
  { -43, 14, 28 }, //  11
  { 0, 9, -45 }, //  12
  { -17, 0, -45 }, //  13
  { 17, 0, -45 }, //  14
  { 0, -4, -45 }, //  15
  { 0, 4, -45 }, //  16
};


const uint16_t asp_faces[13][9] = {
  { 5, 4, 0, 7, 9, 8, 0, 0, 0 }, //  0
  { 5, 2, 1, 0, 4, 3, 0, 0, 0 }, //  1
  { 5, 5, 6, 7, 0, 1, 0, 0, 0 }, //  2
  { 3, 12, 10, 11, 0, 0, 0, 0, 0 }, //  3
  { 4, 11, 10, 8, 9, 0, 0, 0, 0 }, //  4
  { 4, 6, 5, 12, 11, 0, 0, 0, 0 }, //  5
  { 4, 3, 10, 12, 2, 0, 0, 0, 0 }, //  6
  { 3, 3, 4, 8, 0, 0, 0, 0, 0 }, //  7
  { 3, 9, 7, 6, 0, 0, 0, 0, 0 }, //  8
  { 3, 8, 10, 3, 0, 0, 0, 0, 0 }, //  9
  { 3, 6, 11, 9, 0, 0, 0, 0, 0 }, //  10
  { 4, 12, 5, 1, 2, 0, 0, 0, 0 }, //  11
  { 4, 16, 13, 15, 14, 0, 0, 0, 0 }  //  12
};

void getaspShip() {
  memcpy(ship_vertices, asp_vertices, sizeof(asp_vertices));
  ship_vertices_cnt = 17;
  scale = asp_scale;
  memcpy(ship_faces, asp_faces, sizeof(asp_faces));
  ship_faces_cnt = 13;
}

ShipAnimation aspAnimation {
  "ASP",
  *getaspShip
};




const int anaconda_scale = 2;
const int8_t anaconda_vertices[15][3] = {
  { 0 , 4 , -29 },   //  0
  { -22 , -7 , -19 },   //  1
  { -13 , -24 , -2 },   //  2
  { 13 , -24 , -2 },   //  3
  { 22 , -7 , -19 },   //  4
  { 0 , 24 , -25 },   //  5
  { -35 , 8 , -8 },   //  6
  { -22 , -20 , 20 },   //  7
  { 22 , -20 , 20 },   //  8
  { 35 , 8 , -8 },   //  9
  { -22 , 27 , -12 },   //  10
  { -35 , -1 , 16 },   //  11
  { 0 , 0 , 127 },   //  12
  { 35 , -1 , 16 },   //  13
  { 22 , 27 , -12 }   //  14
};


const uint16_t anaconda_faces[12][9] = {
  { 5, 4, 0, 1, 2, 3, 0, 0, 0 },  //  0
  //{ 5, 6, 10, 5, 0, 1, 0, 0, 0 },  //  1
  { 5, 1, 0, 5, 10, 6, 0, 0, 0 },  //  1
  { 5, 2, 1, 6, 11, 7, 0, 0, 0 },  //  2
  { 5, 3, 2, 7, 12, 8, 0, 0, 0 },  //  3
  { 5, 4, 3, 8, 13, 9, 0, 0, 0 },  //  4
  { 5, 14, 5, 0, 4, 9, 0, 0, 0 },  //  5
  { 3, 5, 14, 10, 0, 0, 0, 0, 0 },  //  6
  { 4, 12, 11, 6, 10, 0, 0, 0, 0 },  //  7
  { 3, 11, 12, 7, 0, 0, 0, 0, 0 },  //  8
  { 3, 12, 13, 8, 0, 0, 0, 0, 0 },  //  9
  { 4, 12, 14, 9, 13, 0, 0, 0, 0 },  //  10
  { 3, 14, 12, 10, 0, 0, 0, 0, 0 }  //  11
};

void getanacondaShip() {
  memcpy(ship_vertices, anaconda_vertices, sizeof(anaconda_vertices));
  ship_vertices_cnt = 15;
  scale = anaconda_scale;
  memcpy(ship_faces, anaconda_faces, sizeof(anaconda_faces));
  ship_faces_cnt = 12;
}

ShipAnimation anacondaAnimation {
  "Anaconda",
  *getanacondaShip
};





const int viper_scale = 1;
const int8_t viper_vertices[15][3] = {
  { 0 , 0 , 72 },   //  0
  { 0 , 16 , 24 },   //  1
  { 0 , -16 , 24 },  //  2
  { 48 , 0 , -24 },  //  3
  { -48 , 0 , -24 },   //  4
  { 24 , -16 , -24 },  //  5
  { -24 , -16 , -24 },   //  6
  { 24 , 16 , -24 },   //  7
  { -24 , 16 , -24 },  //  8
  { -32 , 0 , -24 },   //  9
  { 32 , 0 , -24 },  //  10
  { 8 , 8 , -24 },   //  11
  { -8 , 8 , -24 },  //  12
  { -8 , -8 , -24 },   //  13
  { 8 , -8 , -24 }  //  14
};


const uint16_t viper_faces[9][9] = {
  { 3, 7, 1, 8, 0, 0, 0, 0, 0 },
  { 4, 0, 4, 8, 1, 0, 0, 0, 0 },
  { 4, 1, 7, 3, 0, 0, 0, 0, 0 },
  { 4, 6, 4, 0, 2, 0, 0, 0, 0 },
  { 4, 3, 5, 2, 0, 0, 0, 0, 0 },
  { 3, 5, 6, 2, 0, 0, 0, 0, 0 },
  { 6, 6, 5, 3, 7, 8, 4, 0, 0 },
  { 3, 13, 12, 9, 0, 0, 0, 0, 0 },
  { 3, 11, 14, 10, 0, 0, 0, 0, 0 }
};

void getviperShip() {
  memcpy(ship_vertices, viper_vertices, sizeof(viper_vertices));
  ship_vertices_cnt = 15;
  scale = viper_scale;
  memcpy(ship_faces, viper_faces, sizeof(viper_faces));
  ship_faces_cnt = 9;
}

ShipAnimation viperAnimation {
  "Viper",
  *getviperShip
};





const int sidewinder_scale = 1;
const int8_t sidewinder_vertices[10][3] = {
  { -32 , 0 , 36 },   //  0
  { 32 , 0 , 36 },   //  1
  { 64 , 0 , -28 },  //  2
  { -64 , 0 , -28 },   //  3
  { 0 , 16 , -28 },  //  4
  { 0 , -16 , -28 },   //  5
  { -12 , 6 , -28 },   //  6
  { 12 , 6 , -28 },  //  7
  { 12 , -6 , -28 },   //  8
  { -12 , -6 , -28 }  //  9
};


const uint16_t sidewinder_faces[8][9] = {
  { 3, 1, 0, 4, 0, 0, 0, 0, 0 }, //  0
  { 3, 0, 3, 4, 0, 0, 0, 0, 0 }, //  1
  { 3, 1, 4, 2, 0, 0, 0, 0, 0 }, //  2
  { 4, 2, 4, 3, 5, 0, 0, 0, 0 }, //  3
  { 3, 3, 0, 5, 0, 0, 0, 0, 0 }, //  4
  { 3, 5, 0, 1, 0, 0, 0, 0, 0 }, //  5
  { 3, 5, 1, 2, 0, 0, 0, 0, 0 }, //  6
  { 4, 8, 7, 6, 9, 0, 0, 0, 0 }  //  7
};
void getsidewinderShip() {
  memcpy(ship_vertices, sidewinder_vertices, sizeof(sidewinder_vertices));
  ship_vertices_cnt = 10;
  scale = sidewinder_scale;
  memcpy(ship_faces, sidewinder_faces, sizeof(sidewinder_faces));
  ship_faces_cnt = 8;
}

ShipAnimation sidewinderAnimation {
  "Sidewinder",
  *getsidewinderShip
};



const int dodo_scale = 2;
const int8_t dodo_vertices[24][3] = {
  { 0, 75, 98 },
  { 71, 23, 98 },
  { 44, -60, 98 },
  { -44, -60, 98 },
  { -71, 23, 98 },
  { 0, 121, 23 },
  { 115, 37, 23 },
  { 71, -98, 23 },
  { -71, -98, 23 },
  { -115, 37, 23 },
  { 71, 98, -23 },
  { 115, -37, -23 },
  { 0, -121, -23 },
  { -115, -37, -23 },
  { -71, 98, -23 },
  { 44, 60, -98 },
  { 71, -23, -98 },
  { 0, -75, -98 },
  { -71, -23, -98 },
  { -44, 60, -98 },
  { -8, 16, 98 }, 
  { -8, -16, 98 },
  { 8, 16, 98 },
  { 8, -16, 98 }
};


const uint16_t dodo_faces[13][9] = {
  { 5, 3, 2, 1, 0, 4, 0, 0, 0 },  //  0
  { 5, 6, 10, 5, 0, 1, 0, 0, 0 },  //  1
  { 5, 7, 11, 6, 1, 2, 0, 0, 0 },  //  2
  { 5, 8, 12, 7, 2, 3, 0, 0, 0 },  //  3
  { 5, 9, 13, 8, 3, 4, 0, 0, 0 },  //  4
  { 5, 5, 14, 9, 4, 0, 0, 0, 0 },  //  5
  { 5, 15, 19, 14, 5, 10, 0, 0, 0 }, //  6
  { 5, 16, 15, 10, 6, 11, 0, 0, 0 }, //  7
  { 5, 17, 16, 11, 7, 12, 0, 0, 0 }, //  8
  { 5, 18, 17, 12, 8, 13, 0, 0, 0 }, //  9
  { 5, 19, 18, 13, 9, 14, 0, 0, 0 }, //  10
  { 5, 19, 15, 16, 17, 18, 0, 0, 0 },  //  11
  { 4, 21, 23, 22, 20, 0, 0, 0, 0 }   //  12
};

void getdodoShip() {
  memcpy(ship_vertices, dodo_vertices, sizeof(dodo_vertices));
  ship_vertices_cnt = 24;
  scale = dodo_scale;
  memcpy(ship_faces, dodo_faces, sizeof(dodo_faces));
  ship_faces_cnt = 13;
}

ShipAnimation dodoAnimation {
  "Dodo",
  *getdodoShip,
  R_LINE_GRADIENT
};



const int coriolis_scale = 2;
const int8_t coriolis_vertices[16][3] = {
  {80,0,80},
  {0,80,80},
  {-80,0,80},
  {0,-80,80},
  {80,-80,0},
  {80,80,0},
  {-80,80,0},
  {-80,-80,0},
  {80,0,-80},
  {0,80,-80},
  {-80,0,-80},
  {0,-80,-80},
  {5,-15,80},
  {5,15,80},
  {-5,15,80},
  {-5,-15,80}
};


const uint16_t coriolis_faces[15][9] = {
  { 4, 1, 2, 3, 0, 0, 0, 0, 0 },  //  0
  { 3, 4, 0, 3, 0, 0, 0, 0, 0 }, //  1
  { 3, 5, 1, 0, 0, 0, 0, 0, 0 }, //  2
  { 3, 1, 6, 2, 0, 0, 0, 0, 0 }, //  3
  { 3, 2, 7, 3, 0, 0, 0, 0, 0 }, //  4
  { 4, 11, 4, 3, 7, 0, 0, 0, 0 },  //  5
  { 4, 8, 5, 0, 4, 0, 0, 0, 0 }, //  6
  { 4, 10, 7, 2, 6, 0, 0, 0, 0 },  //  7
  { 4, 6, 1, 5, 9, 0, 0, 0, 0 }, //  8
  { 3, 11, 7, 10, 8, 5, 9, 6, 0 }, //  9
  { 3, 8, 4, 11, 8, 0, 0, 0, 0 },  //  10
  { 3, 9, 5, 8, 1, 0, 0, 0, 0 }, //  11
  { 3, 10, 6, 9, 7, 0, 0, 0, 0 },  //  12
  { 4, 11, 10, 9, 8, 0, 0, 0, 0 }, //  13
  { 4, 15, 12, 13, 14, 0, 0, 0, 0 } //  14
};

void getcoriolisShip() {
  memcpy(ship_vertices, coriolis_vertices, sizeof(coriolis_vertices));
  ship_vertices_cnt = 16;
  scale = coriolis_scale;
  memcpy(ship_faces, coriolis_faces, sizeof(coriolis_faces));
  ship_faces_cnt = 15;
}

ShipAnimation coriolisAnimation {
  "Coriolis",
  *getcoriolisShip,
  R_LINE_GRADIENT
};



const int thargoid_scale = 2;
const int8_t thargoid_vertices[20][3] = {
  {-25,35,-37},
  {-25,51,-1},
  {-25,35,35},
  {-25,-1,51},
  {-25,-37,35},
  {-25,-53,-1},
  {-25,-37,-37},
  {-25,-1,-53},
  {17,88,-90},
  {17,125,-1},
  {17,88,88},
  {17,-1,125},
  {17,-90,88},
  {17,-127,-1},
  {17,-90,-90},
  {17,-1,-127},
  {17,-50,-62},
  {17,-50,60},
  {17,48,60},
  {17,48,-62}
};


const uint16_t thargoid_faces[10][9] = {
  { 4, 9, 8, 0, 1, 0, 0, 0, 0 },  //  0
  { 4, 10, 9, 1, 2, 0, 0, 0, 0 },  //  1
  { 4, 11, 10, 2, 3, 0, 0, 0, 0 },  //  2
  { 4, 12, 11, 3, 4, 0, 0, 0, 0 },  //  3
  { 8, 7, 6, 5, 4, 3, 2, 1, 0 },  //  4
  { 4, 13, 12, 4, 5, 0, 0, 0, 0 },  //  5
  { 4, 14, 13, 5, 6, 0, 0, 0, 0 },  //  6
  { 4, 15, 14, 6, 7, 0, 0, 0, 0 },  //  7
  { 4, 15, 7, 0, 8, 0, 0, 0, 0 },  //  8
  { 8, 8, 9, 10, 11, 12, 13, 14, 15 }  //  9
};

void getthargoidShip() {
  memcpy(ship_vertices, thargoid_vertices, sizeof(thargoid_vertices));
  ship_vertices_cnt = 20;
  scale = thargoid_scale;
  memcpy(ship_faces, thargoid_faces, sizeof(thargoid_faces));
  ship_faces_cnt = 10;
}

ShipAnimation thargoidAnimation {
  "Thargoid",
  *getthargoidShip,
  R_LINE_GRADIENT
};
 
