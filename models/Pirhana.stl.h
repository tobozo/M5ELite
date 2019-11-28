#ifndef __Pirhana_H__
#define __Pirhana_H__

const float Pirhana_scale = 1.5875;
const int8_t Pirhana_vertices[136][3] = {
 { 4,99,11},   // 0
 { 4,105,10},   // 1
 { 0,105,12},   // 2
 { 0,99,12},   // 3
 { 6,100,7},   // 4
 { 5,105,7},   // 5
 { 4,100,3},   // 6
 { 4,105,3},   // 7
 { 0,100,1},   // 8
 { 0,105,2},   // 9
 { 0,116,3},   // 10
 { 3,116,4},   // 11
 { 4,116,7},   // 12
 { 3,116,9},   // 13
 { 0,116,10},   // 14
 { 0,-127,-15},   // 15
 { 5,-127,-14},   // 16
 { 5,-87,4},   // 17
 { 0,-87,4},   // 18
 { 18,-69,-11},   // 19
 { 15,-51,4},   // 20
 { 14,-127,-26},   // 21
 { 4,-34,22},   // 22
 { 0,-34,22},   // 23
 { 32,21,-2},   // 24
 { 13,3,18},   // 25
 { 5,-4,28},   // 26
 { 0,-4,28},   // 27
 { 5,19,28},   // 28
 { 0,19,28},   // 29
 { 11,14,19},   // 30
 { 11,42,19},   // 31
 { 5,48,27},   // 32
 { 0,48,27},   // 33
 { 6,31,11},   // 34
 { 0,31,12},   // 35
 { 27,23,-3},   // 36
 { 10,26,5},   // 37
 { 6,51,11},   // 38
 { 0,51,12},   // 39
 { 10,40,7},   // 40
 { 25,55,-1},   // 41
 { 6,99,11},   // 42
 { 12,58,18},   // 43
 { 12,98,22},   // 44
 { 23,60,9},   // 45
 { 23,124,9},   // 46
 { 55,84,-24},   // 47
 { 56,55,-27},   // 48
 { 25,126,6},   // 49
 { 22,127,7},   // 50
 { 0,-126,-16},   // 51
 { 2,-126,-16},   // 52
 { 22,-87,-21},   // 53
 { 27,-88,-22},   // 54
 { 12,-126,-28},   // 55
 { 15,-69,-11},   // 56
 { 0,-70,-11},   // 57
 { 0,22,-4},   // 58
 { 10,22,-3},   // 59
 { 4,53,-8},   // 60
 { 10,52,5},   // 61
 { 10,40,6},   // 62
 { 32,123,-2},   // 63
 { 53,84,-25},   // 64
 { 31,123,-3},   // 65
 { 2,116,5},   // 66
 { 3,116,7},   // 67
 { 2,116,8},   // 68
 { 0,116,9},   // 69
 { 0,116,4},   // 70
 { 3,105,7},   // 71
 { 2,105,9},   // 72
 { 2,105,5},   // 73
 { -0,105,10},   // 74
 { -0,105,4},   // 75
 { 55,54,-28},   // 76
 { -4,105,10},   // 77
 { -4,99,11},   // 78
 { -5,105,7},   // 79
 { -6,100,7},   // 80
 { -4,105,3},   // 81
 { -4,100,3},   // 82
 { -3,116,4},   // 83
 { -4,116,7},   // 84
 { -3,116,9},   // 85
 { -5,-87,4},   // 86
 { -5,-127,-14},   // 87
 { -15,-51,4},   // 88
 { -18,-69,-11},   // 89
 { -14,-127,-26},   // 90
 { -4,-34,22},   // 91
 { -13,3,18},   // 92
 { -32,21,-2},   // 93
 { -5,-4,28},   // 94
 { -5,19,28},   // 95
 { -11,14,19},   // 96
 { -5,48,27},   // 97
 { -11,42,19},   // 98
 { -6,31,11},   // 99
 { -10,26,5},   // 100
 { -27,23,-3},   // 101
 { -6,51,11},   // 102
 { -10,40,7},   // 103
 { -25,55,-1},   // 104
 { -6,99,11},   // 105
 { -12,98,22},   // 106
 { -12,58,18},   // 107
 { -23,124,9},   // 108
 { -23,60,9},   // 109
 { -55,84,-24},   // 110
 { -56,55,-27},   // 111
 { -25,126,6},   // 112
 { -22,127,7},   // 113
 { -2,-126,-16},   // 114
 { -22,-87,-21},   // 115
 { -12,-126,-28},   // 116
 { -27,-88,-22},   // 117
 { -15,-69,-11},   // 118
 { -10,22,-3},   // 119
 { -10,52,5},   // 120
 { -4,53,-8},   // 121
 { -10,40,6},   // 122
 { -32,123,-2},   // 123
 { -31,123,-3},   // 124
 { -53,84,-25},   // 125
 { 0,112,3},   // 126
 { -3,116,7},   // 127
 { -2,116,5},   // 128
 { -2,116,8},   // 129
 { -2,105,9},   // 130
 { -3,105,7},   // 131
 { -2,105,5},   // 132
 { 0,105,10},   // 133
 { 0,105,4},   // 134
 { -55,54,-28},   // 135
};

const uint16_t Pirhana_faces[264][9] = {
 { 3,0,1,2},   // 0
 { 3,2,3,0},   // 1
 { 3,1,0,4},   // 2
 { 3,4,5,1},   // 3
 { 3,5,4,6},   // 4
 { 3,6,7,5},   // 5
 { 3,7,6,8},   // 6
 { 3,8,9,7},   // 7
 { 3,7,9,10},   // 8
 { 3,10,11,7},   // 9
 { 3,5,7,11},   // 10
 { 3,11,12,5},   // 11
 { 3,1,5,12},   // 12
 { 3,12,13,1},   // 13
 { 3,2,1,13},   // 14
 { 3,13,14,2},   // 15
 { 3,15,16,17},   // 16
 { 3,17,18,15},   // 17
 { 3,17,16,19},   // 18
 { 3,19,20,17},   // 19
 { 3,19,16,21},   // 20
 { 3,18,17,22},   // 21
 { 3,22,23,18},   // 22
 { 3,17,20,22},   // 23
 { 3,22,20,24},   // 24
 { 3,24,25,22},   // 25
 { 3,20,19,24},   // 26
 { 3,22,25,26},   // 27
 { 3,23,22,26},   // 28
 { 3,26,27,23},   // 29
 { 3,27,26,28},   // 30
 { 3,28,29,27},   // 31
 { 3,26,25,30},   // 32
 { 3,30,28,26},   // 33
 { 3,28,30,31},   // 34
 { 3,31,32,28},   // 35
 { 3,25,24,30},   // 36
 { 3,33,32,34},   // 37
 { 3,34,35,33},   // 38
 { 3,29,28,32},   // 39
 { 3,32,33,29},   // 40
 { 3,31,24,36},   // 41
 { 3,36,37,31},   // 42
 { 3,32,31,37},   // 43
 { 3,37,34,32},   // 44
 { 3,35,34,38},   // 45
 { 3,38,39,35},   // 46
 { 3,37,40,38},   // 47
 { 3,38,34,37},   // 48
 { 3,38,40,41},   // 49
 { 3,3,42,0},   // 50
 { 3,42,38,43},   // 51
 { 3,43,44,42},   // 52
 { 3,44,43,45},   // 53
 { 3,45,46,44},   // 54
 { 3,47,41,48},   // 55
 { 3,49,50,46},   // 56
 { 3,45,41,49},   // 57
 { 3,49,46,45},   // 58
 { 3,38,41,45},   // 59
 { 3,45,43,38},   // 60
 { 3,16,15,51},   // 61
 { 3,51,52,16},   // 62
 { 3,53,54,55},   // 63
 { 3,21,16,52},   // 64
 { 3,52,55,21},   // 65
 { 3,54,53,56},   // 66
 { 3,56,19,54},   // 67
 { 3,19,56,36},   // 68
 { 3,36,24,19},   // 69
 { 3,36,56,57},   // 70
 { 3,57,58,59},   // 71
 { 3,57,59,36},   // 72
 { 3,36,59,37},   // 73
 { 3,59,60,61},   // 74
 { 3,62,40,37},   // 75
 { 3,59,61,62},   // 76
 { 3,62,37,59},   // 77
 { 3,63,47,64},   // 78
 { 3,64,65,63},   // 79
 { 3,39,38,42},   // 80
 { 3,42,3,39},   // 81
 { 3,0,42,4},   // 82
 { 3,42,61,4},   // 83
 { 3,4,61,60},   // 84
 { 3,60,6,4},   // 85
 { 3,6,60,8},   // 86
 { 3,12,11,66},   // 87
 { 3,66,67,12},   // 88
 { 3,14,13,68},   // 89
 { 3,68,69,14},   // 90
 { 3,11,10,70},   // 91
 { 3,70,66,11},   // 92
 { 3,13,12,67},   // 93
 { 3,67,68,13},   // 94
 { 3,68,67,71},   // 95
 { 3,71,72,68},   // 96
 { 3,67,66,73},   // 97
 { 3,73,71,67},   // 98
 { 3,69,68,72},   // 99
 { 3,72,74,69},   // 100
 { 3,66,70,75},   // 101
 { 3,75,73,66},   // 102
 { 3,48,41,40},   // 103
 { 3,21,54,19},   // 104
 { 3,47,63,41},   // 105
 { 3,63,49,41},   // 106
 { 3,30,24,31},   // 107
 { 3,57,56,52},   // 108
 { 3,53,55,52},   // 109
 { 3,52,56,53},   // 110
 { 3,63,65,50},   // 111
 { 3,50,49,63},   // 112
 { 3,47,48,76},   // 113
 { 3,76,64,47},   // 114
 { 3,48,40,62},   // 115
 { 3,62,76,48},   // 116
 { 3,61,76,62},   // 117
 { 3,76,61,64},   // 118
 { 3,64,61,65},   // 119
 { 3,61,42,65},   // 120
 { 3,50,65,42},   // 121
 { 3,44,46,50},   // 122
 { 3,42,44,50},   // 123
 { 3,75,74,72},   // 124
 { 3,72,71,73},   // 125
 { 3,72,73,75},   // 126
 { 3,21,55,54},   // 127
 { 3,2,77,78},   // 128
 { 3,78,3,2},   // 129
 { 3,77,79,80},   // 130
 { 3,80,78,77},   // 131
 { 3,79,81,82},   // 132
 { 3,82,80,79},   // 133
 { 3,81,9,8},   // 134
 { 3,8,82,81},   // 135
 { 3,81,83,10},   // 136
 { 3,10,9,81},   // 137
 { 3,79,84,83},   // 138
 { 3,83,81,79},   // 139
 { 3,77,85,84},   // 140
 { 3,84,79,77},   // 141
 { 3,2,14,85},   // 142
 { 3,85,77,2},   // 143
 { 3,15,18,86},   // 144
 { 3,86,87,15},   // 145
 { 3,86,88,89},   // 146
 { 3,89,87,86},   // 147
 { 3,89,90,87},   // 148
 { 3,18,23,91},   // 149
 { 3,91,86,18},   // 150
 { 3,86,91,88},   // 151
 { 3,91,92,93},   // 152
 { 3,93,88,91},   // 153
 { 3,88,93,89},   // 154
 { 3,91,94,92},   // 155
 { 3,23,27,94},   // 156
 { 3,94,91,23},   // 157
 { 3,27,29,95},   // 158
 { 3,95,94,27},   // 159
 { 3,94,95,96},   // 160
 { 3,96,92,94},   // 161
 { 3,95,97,98},   // 162
 { 3,98,96,95},   // 163
 { 3,92,96,93},   // 164
 { 3,33,35,99},   // 165
 { 3,99,97,33},   // 166
 { 3,29,33,97},   // 167
 { 3,97,95,29},   // 168
 { 3,98,100,101},   // 169
 { 3,101,93,98},   // 170
 { 3,97,99,100},   // 171
 { 3,100,98,97},   // 172
 { 3,35,39,102},   // 173
 { 3,102,99,35},   // 174
 { 3,100,99,102},   // 175
 { 3,102,103,100},   // 176
 { 3,102,104,103},   // 177
 { 3,3,78,105},   // 178
 { 3,105,106,107},   // 179
 { 3,107,102,105},   // 180
 { 3,106,108,109},   // 181
 { 3,109,107,106},   // 182
 { 3,110,111,104},   // 183
 { 3,112,108,113},   // 184
 { 3,109,108,112},   // 185
 { 3,112,104,109},   // 186
 { 3,102,107,109},   // 187
 { 3,109,104,102},   // 188
 { 3,87,114,51},   // 189
 { 3,51,15,87},   // 190
 { 3,115,116,117},   // 191
 { 3,90,116,114},   // 192
 { 3,114,87,90},   // 193
 { 3,117,89,118},   // 194
 { 3,118,115,117},   // 195
 { 3,89,93,101},   // 196
 { 3,101,118,89},   // 197
 { 3,57,118,101},   // 198
 { 3,119,58,57},   // 199
 { 3,101,119,57},   // 200
 { 3,101,100,119},   // 201
 { 3,120,121,119},   // 202
 { 3,119,100,103},   // 203
 { 3,122,120,119},   // 204
 { 3,119,103,122},   // 205
 { 3,123,124,125},   // 206
 { 3,125,110,123},   // 207
 { 3,39,3,105},   // 208
 { 3,105,102,39},   // 209
 { 3,78,80,105},   // 210
 { 3,105,80,120},   // 211
 { 3,80,82,121},   // 212
 { 3,121,120,80},   // 213
 { 3,82,8,121},   // 214
 { 3,8,9,10},   // 215
 { 3,10,126,8},   // 216
 { 3,84,127,128},   // 217
 { 3,128,83,84},   // 218
 { 3,14,69,129},   // 219
 { 3,129,85,14},   // 220
 { 3,83,128,70},   // 221
 { 3,70,10,83},   // 222
 { 3,85,129,127},   // 223
 { 3,127,84,85},   // 224
 { 3,129,130,131},   // 225
 { 3,131,127,129},   // 226
 { 3,127,131,132},   // 227
 { 3,132,128,127},   // 228
 { 3,69,133,130},   // 229
 { 3,130,129,69},   // 230
 { 3,128,132,134},   // 231
 { 3,134,70,128},   // 232
 { 3,111,103,104},   // 233
 { 3,90,89,117},   // 234
 { 3,110,104,123},   // 235
 { 3,123,104,112},   // 236
 { 3,96,98,93},   // 237
 { 3,57,114,118},   // 238
 { 3,115,118,114},   // 239
 { 3,114,116,115},   // 240
 { 3,123,112,113},   // 241
 { 3,113,124,123},   // 242
 { 3,110,125,135},   // 243
 { 3,135,111,110},   // 244
 { 3,111,135,122},   // 245
 { 3,122,103,111},   // 246
 { 3,120,122,135},   // 247
 { 3,135,125,120},   // 248
 { 3,125,124,120},   // 249
 { 3,120,124,105},   // 250
 { 3,113,105,124},   // 251
 { 3,106,113,108},   // 252
 { 3,105,113,106},   // 253
 { 3,130,133,134},   // 254
 { 3,134,132,131},   // 255
 { 3,134,131,130},   // 256
 { 3,90,117,116},   // 257
 { 3,60,121,8},   // 258
 { 3,59,58,60},   // 259
 { 3,119,121,58},   // 260
 { 3,121,60,58},   // 261
 { 3,51,114,57},   // 262
 { 3,57,52,51},   // 263
};

void getPirhanaShip() {
  memcpy(ship_vertices, Pirhana_vertices, sizeof(Pirhana_vertices));
  ship_vertices_cnt = 136;
  scale = Pirhana_scale;
  memcpy(ship_faces, Pirhana_faces, sizeof(Pirhana_faces));
  ship_faces_cnt = 264;
}

ShipAnimation PirhanaAnimation {
  "Pirhana",
  *getPirhanaShip,
  R_LINE_COLOR
};

#endif

