#ifndef __TieFighter_H__
#define __TieFighter_H__

const float TieFighter_scale = 1.5875;
const int8_t TieFighter_vertices[396][3] = {
 { -32,-20,-1},   // 0
 { -32,-15,-13},   // 1
 { -22,-32,-3},   // 2
 { -16,-32,-16},   // 3
 { -23,-19,-23},   // 4
 { 0,-33,-23},   // 5
 { -8,-14,-35},   // 6
 { 0,-26,-29},   // 7
 { 13,-15,-32},   // 8
 { -38,0,0},   // 9
 { -35,0,-14},   // 10
 { -27,0,-27},   // 11
 { -14,0,-35},   // 12
 { -32,17,-13},   // 13
 { -24,17,-24},   // 14
 { -13,17,-32},   // 15
 { 0,1,-38},   // 16
 { 14,0,-35},   // 17
 { -32,21,-0},   // 18
 { 0,22,-31},   // 19
 { 13,17,-32},   // 20
 { -22,32,1},   // 21
 { -14,32,-16},   // 22
 { 1,39,-13},   // 23
 { 14,32,-16},   // 24
 { 24,17,-24},   // 25
 { 27,0,-27},   // 26
 { 23,-19,-23},   // 27
 { 32,17,-13},   // 28
 { 35,0,-14},   // 29
 { 32,-15,-13},   // 30
 { 21,32,-3},   // 31
 { 32,21,-0},   // 32
 { 38,0,0},   // 33
 { 32,-20,-1},   // 34
 { 22,-32,-3},   // 35
 { 16,-31,-16},   // 36
 { -6,19,34},   // 37
 { 0,0,38},   // 38
 { 14,-0,35},   // 39
 { 13,18,31},   // 40
 { -32,-15,13},   // 41
 { -17,-32,15},   // 42
 { -35,6,14},   // 43
 { -25,-15,25},   // 44
 { -14,-16,32},   // 45
 { 0,-31,24},   // 46
 { 8,-15,35},   // 47
 { 17,-32,15},   // 48
 { 25,-15,25},   // 49
 { 32,-15,13},   // 50
 { 35,6,14},   // 51
 { 27,0,27},   // 52
 { 25,12,25},   // 53
 { 28,22,12},   // 54
 { 22,22,22},   // 55
 { 16,32,14},   // 56
 { 8,37,14},   // 57
 { -2,39,14},   // 58
 { -14,32,16},   // 59
 { -22,22,22},   // 60
 { -28,22,12},   // 61
 { -25,12,25},   // 62
 { -14,-0,35},   // 63
 { -27,0,27},   // 64
 { 0,-40,-0},   // 65
 { 13,40,5},   // 66
 { -13,40,-5},   // 67
 { 71,10,6},   // 68
 { 69,-10,6},   // 69
 { 72,-4,-11},   // 70
 { 68,4,-11},   // 71
 { 59,3,12},   // 72
 { 57,7,-8},   // 73
 { 55,-12,0},   // 74
 { 60,-11,-2},   // 75
 { -72,10,4},   // 76
 { -68,4,-11},   // 77
 { -72,-11,4},   // 78
 { -60,10,4},   // 79
 { -56,4,-11},   // 80
 { -60,-11,4},   // 81
 { -80,0,9},   // 82
 { -80,-6,7},   // 83
 { -48,0,9},   // 84
 { -51,-7,6},   // 85
 { -80,-9,0},   // 86
 { -50,-9,0},   // 87
 { -80,-7,-6},   // 88
 { -51,-6,-7},   // 89
 { -80,-0,-9},   // 90
 { -48,-0,-9},   // 91
 { -80,6,-7},   // 92
 { -51,7,-6},   // 93
 { -80,9,-1},   // 94
 { -50,9,-0},   // 95
 { -80,7,6},   // 96
 { -51,7,7},   // 97
 { -85,-11,1},   // 98
 { -80,7,-8},   // 99
 { -80,-7,9},   // 100
 { -85,11,-4},   // 101
 { -68,-4,11},   // 102
 { -55,-4,11},   // 103
 { 64,-12,-2},   // 104
 { 66,13,2},   // 105
 { 87,18,-3},   // 106
 { 65,-13,2},   // 107
 { 55,9,-1},   // 108
 { 60,-7,0},   // 109
 { 45,12,-4},   // 110
 { 46,-12,-4},   // 111
 { 47,11,4},   // 112
 { 45,-12,4},   // 113
 { 62,1,13},   // 114
 { 63,-1,-12},   // 115
 { 62,1,-13},   // 116
 { 62,-1,13},   // 117
 { 41,2,19},   // 118
 { 41,2,-19},   // 119
 { 28,3,-22},   // 120
 { 41,-2,19},   // 121
 { 29,-3,-22},   // 122
 { -62,11,-2},   // 123
 { -65,-13,2},   // 124
 { -86,-18,-3},   // 125
 { -86,18,3},   // 126
 { -60,7,-0},   // 127
 { -45,12,-4},   // 128
 { -60,-7,0},   // 129
 { -46,-12,-4},   // 130
 { -47,-11,4},   // 131
 { -46,12,4},   // 132
 { -62,-1,13},   // 133
 { -63,1,-12},   // 134
 { -62,-1,-13},   // 135
 { -28,3,22},   // 136
 { -41,2,-19},   // 137
 { -41,2,19},   // 138
 { -41,-2,19},   // 139
 { -41,-2,-19},   // 140
 { -28,-3,22},   // 141
 { 33,-10,11},   // 142
 { 52,-7,6},   // 143
 { 49,0,9},   // 144
 { 51,-9,0},   // 145
 { 33,10,11},   // 146
 { 52,6,7},   // 147
 { 51,9,-0},   // 148
 { 33,10,-11},   // 149
 { 52,7,-6},   // 150
 { 46,-0,-9},   // 151
 { 39,1,-13},   // 152
 { 52,-6,-7},   // 153
 { 33,-10,-12},   // 154
 { 33,15,1},   // 155
 { 33,-15,-1},   // 156
 { -33,-15,6},   // 157
 { -33,10,11},   // 158
 { -33,15,-6},   // 159
 { -33,-10,-11},   // 160
 { 96,11,-20},   // 161
 { 96,-23,0},   // 162
 { 96,-11,-20},   // 163
 { 96,23,0},   // 164
 { 116,0,1},   // 165
 { 85,-11,-20},   // 166
 { 85,23,0},   // 167
 { 85,11,-20},   // 168
 { 85,-23,0},   // 169
 { -96,11,-20},   // 170
 { -96,-22,6},   // 171
 { -96,23,0},   // 172
 { -96,-11,-20},   // 173
 { -116,0,1},   // 174
 { -85,-11,-20},   // 175
 { -85,23,0},   // 176
 { -85,-23,0},   // 177
 { -85,11,-20},   // 178
 { 87,-31,-6},   // 179
 { 87,-31,6},   // 180
 { 87,31,-6},   // 181
 { 87,-99,-2},   // 182
 { 87,-103,0},   // 183
 { 88,-68,-121},   // 184
 { 88,-70,-127},   // 185
 { 88,-65,-124},   // 186
 { 88,70,-127},   // 187
 { 87,-21,-24},   // 188
 { 87,21,-24},   // 189
 { 87,-11,-30},   // 190
 { 87,103,0},   // 191
 { 87,99,-2},   // 192
 { 88,68,-121},   // 193
 { 88,65,-124},   // 194
 { 87,11,-30},   // 195
 { 94,99,-2},   // 196
 { 94,103,0},   // 197
 { 94,31,-6},   // 198
 { 93,70,-127},   // 199
 { 94,21,-24},   // 200
 { 94,-31,-6},   // 201
 { 94,-21,-24},   // 202
 { 94,11,-30},   // 203
 { 93,65,-124},   // 204
 { 93,68,-121},   // 205
 { 94,-103,0},   // 206
 { 94,-99,-2},   // 207
 { 93,-70,-127},   // 208
 { 93,-68,-121},   // 209
 { 93,-65,-124},   // 210
 { 94,-11,-30},   // 211
 { -87,-31,-6},   // 212
 { -87,31,-6},   // 213
 { -87,-31,6},   // 214
 { -87,99,-2},   // 215
 { -87,103,0},   // 216
 { -88,68,-121},   // 217
 { -88,70,-127},   // 218
 { -87,-99,-2},   // 219
 { -87,-103,0},   // 220
 { -88,-68,-121},   // 221
 { -88,-70,-127},   // 222
 { -88,-65,-124},   // 223
 { -87,-21,-24},   // 224
 { -87,-11,-30},   // 225
 { -87,21,-24},   // 226
 { -88,65,-124},   // 227
 { -87,11,-30},   // 228
 { -94,31,-6},   // 229
 { -94,-31,-6},   // 230
 { -94,-31,6},   // 231
 { -94,-103,0},   // 232
 { -94,-99,-2},   // 233
 { -93,-70,-127},   // 234
 { -94,99,-2},   // 235
 { -94,103,0},   // 236
 { -93,70,-127},   // 237
 { -93,68,-121},   // 238
 { -93,65,-124},   // 239
 { -94,21,-24},   // 240
 { -94,11,-30},   // 241
 { -94,-21,-24},   // 242
 { -93,-65,-124},   // 243
 { -93,-68,-121},   // 244
 { -94,-11,-30},   // 245
 { 87,99,2},   // 246
 { 94,31,6},   // 247
 { 94,99,2},   // 248
 { 87,31,6},   // 249
 { 94,-99,2},   // 250
 { 94,-31,6},   // 251
 { 87,-99,2},   // 252
 { 88,70,127},   // 253
 { 93,70,127},   // 254
 { 88,-70,127},   // 255
 { 93,-70,127},   // 256
 { 93,68,121},   // 257
 { 88,68,121},   // 258
 { 93,-68,121},   // 259
 { 88,-68,121},   // 260
 { 88,-65,124},   // 261
 { 94,-11,30},   // 262
 { 87,-11,30},   // 263
 { 93,-65,124},   // 264
 { 88,65,124},   // 265
 { 94,11,30},   // 266
 { 93,65,124},   // 267
 { 87,11,30},   // 268
 { 94,21,24},   // 269
 { 87,21,24},   // 270
 { 94,-21,24},   // 271
 { 87,-21,24},   // 272
 { -87,99,2},   // 273
 { -94,31,6},   // 274
 { -87,31,6},   // 275
 { -94,99,2},   // 276
 { -94,-99,2},   // 277
 { -87,-99,2},   // 278
 { -88,70,127},   // 279
 { -93,70,127},   // 280
 { -88,-70,127},   // 281
 { -93,-70,127},   // 282
 { -93,68,121},   // 283
 { -88,68,121},   // 284
 { -93,-68,121},   // 285
 { -88,-68,121},   // 286
 { -88,-65,124},   // 287
 { -94,-11,30},   // 288
 { -93,-65,124},   // 289
 { -87,-11,30},   // 290
 { -88,65,124},   // 291
 { -94,11,30},   // 292
 { -87,11,30},   // 293
 { -93,65,124},   // 294
 { -94,21,24},   // 295
 { -87,21,24},   // 296
 { -94,-21,24},   // 297
 { -87,-21,24},   // 298
 { 96,11,20},   // 299
 { 96,-11,20},   // 300
 { 85,-11,20},   // 301
 { 85,11,20},   // 302
 { 89,-12,29},   // 303
 { 89,-66,124},   // 304
 { 89,12,29},   // 305
 { 92,-12,29},   // 306
 { 92,12,29},   // 307
 { 92,-66,124},   // 308
 { -96,11,20},   // 309
 { -116,0,-1},   // 310
 { -85,-11,20},   // 311
 { -85,11,20},   // 312
 { -89,-12,29},   // 313
 { -89,12,29},   // 314
 { -89,-66,124},   // 315
 { -92,-12,29},   // 316
 { -92,-66,124},   // 317
 { -92,12,29},   // 318
 { -0,34,0},   // 319
 { 58,8,8},   // 320
 { 31,-11,11},   // 321
 { 94,103,0},   // 322
 { 94,-103,0},   // 323
 { 87,-103,0},   // 324
 { 87,103,0},   // 325
 { -93,-70,-127},   // 326
 { -94,-103,0},   // 327
 { -94,103,0},   // 328
 { -93,70,-127},   // 329
 { -88,70,-127},   // 330
 { -87,103,0},   // 331
 { -87,-103,0},   // 332
 { -88,-70,-127},   // 333
 { 88,70,127},   // 334
 { 93,70,127},   // 335
 { 88,-70,127},   // 336
 { 93,-70,127},   // 337
 { -88,70,127},   // 338
 { -93,70,127},   // 339
 { -88,-70,127},   // 340
 { -93,-70,127},   // 341
 { -23,-31,0},   // 342
 { 23,-31,0},   // 343
 { -22,22,-22},   // 344
 { 22,22,-22},   // 345
 { -22,-22,22},   // 346
 { 0,-22,31},   // 347
 { 22,-22,22},   // 348
 { 0,22,31},   // 349
 { -87,-5,7},   // 350
 { -87,5,-7},   // 351
 { -28,-15,5},   // 352
 { -29,-10,-13},   // 353
 { -28,15,-5},   // 354
 { -29,10,13},   // 355
 { -87,-7,-5},   // 356
 { -87,7,5},   // 357
 { 87,5,-7},   // 358
 { 87,7,5},   // 359
 { 87,-7,-5},   // 360
 { 87,-5,7},   // 361
 { 87,-18,3},   // 362
 { 87,-18,-3},   // 363
 { 87,18,3},   // 364
 { 28,-17,5},   // 365
 { 28,-17,-5},   // 366
 { 28,17,5},   // 367
 { 28,17,-5},   // 368
 { 62,1,-13},   // 369
 { 28,3,22},   // 370
 { 62,-1,13},   // 371
 { 28,-3,22},   // 372
 { -87,-18,3},   // 373
 { -87,18,-3},   // 374
 { -28,-17,5},   // 375
 { -28,-17,-5},   // 376
 { -28,17,-5},   // 377
 { -28,17,5},   // 378
 { -28,3,-22},   // 379
 { -64,1,-12},   // 380
 { -63,1,12},   // 381
 { -28,-3,-22},   // 382
 { -63,-1,12},   // 383
 { 29,10,13},   // 384
 { 28,15,-5},   // 385
 { 29,-10,-13},   // 386
 { 28,-16,0},   // 387
 { -8,-39,-1},   // 388
 { 8,-39,1},   // 389
 { 92,12,-29},   // 390
 { 92,-12,-29},   // 391
 { 92,-66,-124},   // 392
 { -92,-66,-124},   // 393
 { -92,-12,-29},   // 394
 { -92,12,-29},   // 395
};

const uint16_t TieFighter_faces[1023][9] = {
 { 3,0,1,2},   // 0
 { 3,1,3,2},   // 1
 { 3,1,4,3},   // 2
 { 3,4,5,3},   // 3
 { 3,4,6,5},   // 4
 { 3,6,7,5},   // 5
 { 3,8,5,7},   // 6
 { 3,9,1,0},   // 7
 { 3,9,10,1},   // 8
 { 3,10,4,1},   // 9
 { 3,10,11,4},   // 10
 { 3,11,6,4},   // 11
 { 3,11,12,6},   // 12
 { 3,8,7,6},   // 13
 { 3,9,13,10},   // 14
 { 3,10,13,14},   // 15
 { 3,10,14,11},   // 16
 { 3,11,14,15},   // 17
 { 3,11,15,12},   // 18
 { 3,12,15,16},   // 19
 { 3,12,16,6},   // 20
 { 3,17,6,16},   // 21
 { 3,17,8,6},   // 22
 { 3,9,18,13},   // 23
 { 3,15,19,16},   // 24
 { 3,20,16,19},   // 25
 { 3,17,16,20},   // 26
 { 3,18,21,13},   // 27
 { 3,13,21,22},   // 28
 { 3,13,22,14},   // 29
 { 3,14,22,15},   // 30
 { 3,15,22,23},   // 31
 { 3,15,23,19},   // 32
 { 3,20,19,23},   // 33
 { 3,20,23,24},   // 34
 { 3,25,20,24},   // 35
 { 3,26,20,25},   // 36
 { 3,26,17,20},   // 37
 { 3,26,8,17},   // 38
 { 3,26,27,8},   // 39
 { 3,28,25,24},   // 40
 { 3,29,25,28},   // 41
 { 3,29,26,25},   // 42
 { 3,29,27,26},   // 43
 { 3,29,30,27},   // 44
 { 3,28,24,31},   // 45
 { 3,32,28,31},   // 46
 { 3,33,28,32},   // 47
 { 3,33,29,28},   // 48
 { 3,33,30,29},   // 49
 { 3,33,34,30},   // 50
 { 3,34,35,30},   // 51
 { 3,30,35,36},   // 52
 { 3,30,36,27},   // 53
 { 3,27,36,5},   // 54
 { 3,27,5,8},   // 55
 { 3,37,38,39},   // 56
 { 3,37,39,40},   // 57
 { 3,41,2,42},   // 58
 { 3,41,0,2},   // 59
 { 3,43,0,41},   // 60
 { 3,44,41,42},   // 61
 { 3,45,44,42},   // 62
 { 3,45,42,46},   // 63
 { 3,47,45,46},   // 64
 { 3,47,46,48},   // 65
 { 3,47,48,49},   // 66
 { 3,49,48,50},   // 67
 { 3,50,48,35},   // 68
 { 3,50,35,34},   // 69
 { 3,51,50,34},   // 70
 { 3,52,50,51},   // 71
 { 3,52,49,50},   // 72
 { 3,39,49,52},   // 73
 { 3,39,47,49},   // 74
 { 3,52,51,53},   // 75
 { 3,53,40,52},   // 76
 { 3,40,39,52},   // 77
 { 3,51,32,54},   // 78
 { 3,53,51,54},   // 79
 { 3,53,54,55},   // 80
 { 3,40,53,55},   // 81
 { 3,54,32,31},   // 82
 { 3,54,31,56},   // 83
 { 3,55,54,56},   // 84
 { 3,40,55,56},   // 85
 { 3,40,56,57},   // 86
 { 3,37,40,57},   // 87
 { 3,37,57,58},   // 88
 { 3,37,58,59},   // 89
 { 3,37,59,60},   // 90
 { 3,60,59,21},   // 91
 { 3,60,21,61},   // 92
 { 3,62,60,61},   // 93
 { 3,37,60,62},   // 94
 { 3,37,62,63},   // 95
 { 3,61,21,18},   // 96
 { 3,43,61,18},   // 97
 { 3,62,61,43},   // 98
 { 3,64,62,43},   // 99
 { 3,63,62,64},   // 100
 { 3,64,43,41},   // 101
 { 3,64,41,44},   // 102
 { 3,63,64,44},   // 103
 { 3,63,44,45},   // 104
 { 3,63,45,47},   // 105
 { 3,38,63,47},   // 106
 { 3,37,63,38},   // 107
 { 3,39,38,47},   // 108
 { 3,36,35,65},   // 109
 { 3,42,2,65},   // 110
 { 3,48,65,35},   // 111
 { 3,46,42,65},   // 112
 { 3,5,36,65},   // 113
 { 3,2,3,65},   // 114
 { 3,65,3,5},   // 115
 { 3,46,65,48},   // 116
 { 3,66,56,31},   // 117
 { 3,57,56,66},   // 118
 { 3,67,59,58},   // 119
 { 3,67,21,59},   // 120
 { 3,67,22,21},   // 121
 { 3,23,22,67},   // 122
 { 3,66,24,23},   // 123
 { 3,66,31,24},   // 124
 { 3,59,58,57},   // 125
 { 3,59,57,56},   // 126
 { 3,59,56,21},   // 127
 { 3,21,56,31},   // 128
 { 3,21,31,24},   // 129
 { 3,21,24,22},   // 130
 { 3,22,24,23},   // 131
 { 3,57,66,23},   // 132
 { 3,57,67,58},   // 133
 { 3,57,23,67},   // 134
 { 3,68,69,70},   // 135
 { 3,69,68,71},   // 136
 { 3,72,73,74},   // 137
 { 3,72,75,73},   // 138
 { 3,76,77,78},   // 139
 { 3,79,80,81},   // 140
 { 3,70,71,68},   // 141
 { 3,69,71,70},   // 142
 { 3,72,74,75},   // 143
 { 3,75,74,73},   // 144
 { 3,82,83,84},   // 145
 { 3,83,85,84},   // 146
 { 3,83,86,85},   // 147
 { 3,86,87,85},   // 148
 { 3,86,88,87},   // 149
 { 3,88,89,87},   // 150
 { 3,88,90,89},   // 151
 { 3,90,91,89},   // 152
 { 3,90,92,91},   // 153
 { 3,92,93,91},   // 154
 { 3,92,94,93},   // 155
 { 3,94,95,93},   // 156
 { 3,94,96,97},   // 157
 { 3,96,82,97},   // 158
 { 3,82,84,97},   // 159
 { 3,98,99,100},   // 160
 { 3,98,101,99},   // 161
 { 3,101,100,99},   // 162
 { 3,76,78,102},   // 163
 { 3,76,102,77},   // 164
 { 3,78,77,102},   // 165
 { 3,81,80,103},   // 166
 { 3,79,103,80},   // 167
 { 3,79,81,103},   // 168
 { 3,104,105,106},   // 169
 { 3,107,105,104},   // 170
 { 3,108,109,110},   // 171
 { 3,110,109,111},   // 172
 { 3,112,113,109},   // 173
 { 3,109,108,110},   // 174
 { 3,111,109,113},   // 175
 { 3,112,109,110},   // 176
 { 3,114,115,116},   // 177
 { 3,117,115,114},   // 178
 { 3,118,119,120},   // 179
 { 3,121,122,119},   // 180
 { 3,120,119,122},   // 181
 { 3,123,124,125},   // 182
 { 3,124,123,126},   // 183
 { 3,127,128,129},   // 184
 { 3,128,130,129},   // 185
 { 3,127,129,131},   // 186
 { 3,132,127,131},   // 187
 { 3,130,131,129},   // 188
 { 3,132,128,127},   // 189
 { 3,133,134,135},   // 190
 { 3,136,137,138},   // 191
 { 3,139,137,140},   // 192
 { 3,139,140,141},   // 193
 { 3,141,138,139},   // 194
 { 3,141,136,138},   // 195
 { 3,142,143,144},   // 196
 { 3,142,145,143},   // 197
 { 3,146,144,147},   // 198
 { 3,146,147,148},   // 199
 { 3,149,148,150},   // 200
 { 3,149,150,151},   // 201
 { 3,152,149,151},   // 202
 { 3,152,151,153},   // 203
 { 3,154,152,153},   // 204
 { 3,154,153,145},   // 205
 { 3,148,155,146},   // 206
 { 3,148,149,155},   // 207
 { 3,145,156,154},   // 208
 { 3,145,142,156},   // 209
 { 3,84,85,157},   // 210
 { 3,85,87,157},   // 211
 { 3,97,84,158},   // 212
 { 3,97,158,159},   // 213
 { 3,95,97,159},   // 214
 { 3,93,95,159},   // 215
 { 3,91,93,159},   // 216
 { 3,89,91,160},   // 217
 { 3,89,160,157},   // 218
 { 3,87,89,157},   // 219
 { 3,161,162,163},   // 220
 { 3,161,164,162},   // 221
 { 3,165,161,163},   // 222
 { 3,163,162,165},   // 223
 { 3,161,165,164},   // 224
 { 3,166,167,168},   // 225
 { 3,166,169,167},   // 226
 { 3,170,171,172},   // 227
 { 3,170,173,171},   // 228
 { 3,174,173,170},   // 229
 { 3,173,174,171},   // 230
 { 3,170,172,174},   // 231
 { 3,175,176,177},   // 232
 { 3,175,178,176},   // 233
 { 3,179,180,181},   // 234
 { 3,182,180,179},   // 235
 { 3,182,183,180},   // 236
 { 3,184,183,182},   // 237
 { 3,184,185,183},   // 238
 { 3,186,185,184},   // 239
 { 3,187,185,186},   // 240
 { 3,188,179,181},   // 241
 { 3,188,181,189},   // 242
 { 3,190,188,189},   // 243
 { 3,186,188,190},   // 244
 { 3,186,184,188},   // 245
 { 3,181,191,192},   // 246
 { 3,193,192,191},   // 247
 { 3,193,191,187},   // 248
 { 3,187,194,193},   // 249
 { 3,194,189,193},   // 250
 { 3,194,195,189},   // 251
 { 3,190,189,195},   // 252
 { 3,187,186,194},   // 253
 { 3,196,197,198},   // 254
 { 3,199,197,196},   // 255
 { 3,200,198,201},   // 256
 { 3,200,201,202},   // 257
 { 3,203,200,202},   // 258
 { 3,204,200,203},   // 259
 { 3,204,205,200},   // 260
 { 3,201,206,207},   // 261
 { 3,208,207,206},   // 262
 { 3,208,209,207},   // 263
 { 3,208,210,209},   // 264
 { 3,210,202,209},   // 265
 { 3,210,211,202},   // 266
 { 3,203,202,211},   // 267
 { 3,199,210,208},   // 268
 { 3,199,204,210},   // 269
 { 3,204,199,205},   // 270
 { 3,199,196,205},   // 271
 { 3,212,213,214},   // 272
 { 3,213,215,216},   // 273
 { 3,217,216,215},   // 274
 { 3,217,218,216},   // 275
 { 3,219,212,214},   // 276
 { 3,219,214,220},   // 277
 { 3,221,219,220},   // 278
 { 3,221,220,222},   // 279
 { 3,222,223,221},   // 280
 { 3,223,224,221},   // 281
 { 3,223,225,224},   // 282
 { 3,225,226,224},   // 283
 { 3,224,226,213},   // 284
 { 3,224,213,212},   // 285
 { 3,218,223,222},   // 286
 { 3,218,227,223},   // 287
 { 3,227,218,217},   // 288
 { 3,227,217,226},   // 289
 { 3,227,226,228},   // 290
 { 3,225,228,226},   // 291
 { 3,229,230,231},   // 292
 { 3,230,232,231},   // 293
 { 3,230,233,232},   // 294
 { 3,234,232,233},   // 295
 { 3,235,229,236},   // 296
 { 3,237,235,236},   // 297
 { 3,237,238,235},   // 298
 { 3,237,239,238},   // 299
 { 3,239,240,238},   // 300
 { 3,239,241,240},   // 301
 { 3,241,242,240},   // 302
 { 3,240,242,230},   // 303
 { 3,240,230,229},   // 304
 { 3,237,243,239},   // 305
 { 3,237,234,243},   // 306
 { 3,243,234,244},   // 307
 { 3,243,244,242},   // 308
 { 3,243,242,245},   // 309
 { 3,241,245,242},   // 310
 { 3,234,233,244},   // 311
 { 3,246,247,248},   // 312
 { 3,246,249,247},   // 313
 { 3,180,250,251},   // 314
 { 3,180,252,250},   // 315
 { 3,253,197,191},   // 316
 { 3,253,254,197},   // 317
 { 3,255,206,256},   // 318
 { 3,255,183,206},   // 319
 { 3,257,246,248},   // 320
 { 3,257,258,246},   // 321
 { 3,259,252,260},   // 322
 { 3,259,250,252},   // 323
 { 3,261,262,263},   // 324
 { 3,261,264,262},   // 325
 { 3,265,266,267},   // 326
 { 3,265,268,266},   // 327
 { 3,264,265,267},   // 328
 { 3,264,261,265},   // 329
 { 3,255,254,253},   // 330
 { 3,255,256,254},   // 331
 { 3,258,269,270},   // 332
 { 3,258,257,269},   // 333
 { 3,260,271,259},   // 334
 { 3,260,272,271},   // 335
 { 3,263,266,268},   // 336
 { 3,263,262,266},   // 337
 { 3,249,269,247},   // 338
 { 3,249,270,269},   // 339
 { 3,180,271,272},   // 340
 { 3,180,251,271},   // 341
 { 3,192,198,181},   // 342
 { 3,192,196,198},   // 343
 { 3,179,207,182},   // 344
 { 3,179,201,207},   // 345
 { 3,187,197,199},   // 346
 { 3,187,191,197},   // 347
 { 3,185,206,183},   // 348
 { 3,185,208,206},   // 349
 { 3,205,192,193},   // 350
 { 3,205,196,192},   // 351
 { 3,209,182,207},   // 352
 { 3,209,184,182},   // 353
 { 3,186,211,210},   // 354
 { 3,186,190,211},   // 355
 { 3,194,203,195},   // 356
 { 3,194,204,203},   // 357
 { 3,210,194,186},   // 358
 { 3,210,204,194},   // 359
 { 3,185,199,208},   // 360
 { 3,185,187,199},   // 361
 { 3,193,200,205},   // 362
 { 3,193,189,200},   // 363
 { 3,184,202,188},   // 364
 { 3,184,209,202},   // 365
 { 3,190,203,211},   // 366
 { 3,190,195,203},   // 367
 { 3,181,200,189},   // 368
 { 3,181,198,200},   // 369
 { 3,179,202,201},   // 370
 { 3,179,188,202},   // 371
 { 3,273,274,275},   // 372
 { 3,273,276,274},   // 373
 { 3,214,277,278},   // 374
 { 3,214,231,277},   // 375
 { 3,279,236,280},   // 376
 { 3,279,216,236},   // 377
 { 3,281,232,220},   // 378
 { 3,281,282,232},   // 379
 { 3,283,273,284},   // 380
 { 3,283,276,273},   // 381
 { 3,285,278,277},   // 382
 { 3,285,286,278},   // 383
 { 3,287,288,289},   // 384
 { 3,287,290,288},   // 385
 { 3,291,292,293},   // 386
 { 3,291,294,292},   // 387
 { 3,289,291,287},   // 388
 { 3,289,294,291},   // 389
 { 3,281,280,282},   // 390
 { 3,281,279,280},   // 391
 { 3,284,295,283},   // 392
 { 3,284,296,295},   // 393
 { 3,286,297,298},   // 394
 { 3,286,285,297},   // 395
 { 3,290,292,288},   // 396
 { 3,290,293,292},   // 397
 { 3,275,295,296},   // 398
 { 3,275,274,295},   // 399
 { 3,214,297,231},   // 400
 { 3,214,298,297},   // 401
 { 3,215,229,235},   // 402
 { 3,215,213,229},   // 403
 { 3,212,233,230},   // 404
 { 3,212,219,233},   // 405
 { 3,218,236,216},   // 406
 { 3,218,237,236},   // 407
 { 3,222,232,234},   // 408
 { 3,222,220,232},   // 409
 { 3,238,215,235},   // 410
 { 3,238,217,215},   // 411
 { 3,244,219,221},   // 412
 { 3,244,233,219},   // 413
 { 3,223,245,225},   // 414
 { 3,223,243,245},   // 415
 { 3,227,241,239},   // 416
 { 3,227,228,241},   // 417
 { 3,243,227,239},   // 418
 { 3,243,223,227},   // 419
 { 3,222,237,218},   // 420
 { 3,222,234,237},   // 421
 { 3,217,240,226},   // 422
 { 3,217,238,240},   // 423
 { 3,221,242,244},   // 424
 { 3,221,224,242},   // 425
 { 3,225,241,228},   // 426
 { 3,225,245,241},   // 427
 { 3,213,240,229},   // 428
 { 3,213,226,240},   // 429
 { 3,212,242,224},   // 430
 { 3,212,230,242},   // 431
 { 3,299,162,164},   // 432
 { 3,299,300,162},   // 433
 { 3,301,167,169},   // 434
 { 3,301,302,167},   // 435
 { 3,303,304,305},   // 436
 { 3,306,307,308},   // 437
 { 3,309,172,171},   // 438
 { 3,310,309,171},   // 439
 { 3,309,310,172},   // 440
 { 3,311,176,312},   // 441
 { 3,311,177,176},   // 442
 { 3,313,314,315},   // 443
 { 3,316,317,318},   // 444
 { 3,180,249,181},   // 445
 { 3,249,191,181},   // 446
 { 3,249,246,191},   // 447
 { 3,258,191,246},   // 448
 { 3,258,253,191},   // 449
 { 3,252,180,183},   // 450
 { 3,260,252,183},   // 451
 { 3,260,183,255},   // 452
 { 3,255,261,260},   // 453
 { 3,261,272,260},   // 454
 { 3,261,263,272},   // 455
 { 3,263,270,272},   // 456
 { 3,272,270,249},   // 457
 { 3,272,249,180},   // 458
 { 3,253,261,255},   // 459
 { 3,253,265,261},   // 460
 { 3,265,253,258},   // 461
 { 3,265,258,270},   // 462
 { 3,265,270,268},   // 463
 { 3,263,268,270},   // 464
 { 3,247,201,198},   // 465
 { 3,247,251,201},   // 466
 { 3,251,206,201},   // 467
 { 3,251,250,206},   // 468
 { 3,256,206,250},   // 469
 { 3,248,247,198},   // 470
 { 3,248,198,197},   // 471
 { 3,254,248,197},   // 472
 { 3,254,257,248},   // 473
 { 3,254,267,257},   // 474
 { 3,267,269,257},   // 475
 { 3,267,266,269},   // 476
 { 3,266,271,269},   // 477
 { 3,269,271,251},   // 478
 { 3,269,251,247},   // 479
 { 3,254,264,267},   // 480
 { 3,254,256,264},   // 481
 { 3,264,256,259},   // 482
 { 3,264,259,271},   // 483
 { 3,264,271,262},   // 484
 { 3,266,262,271},   // 485
 { 3,256,250,259},   // 486
 { 3,278,220,214},   // 487
 { 3,286,220,278},   // 488
 { 3,286,281,220},   // 489
 { 3,287,281,286},   // 490
 { 3,279,281,287},   // 491
 { 3,214,213,275},   // 492
 { 3,298,214,275},   // 493
 { 3,298,275,296},   // 494
 { 3,290,298,296},   // 495
 { 3,287,298,290},   // 496
 { 3,287,286,298},   // 497
 { 3,275,213,216},   // 498
 { 3,275,216,273},   // 499
 { 3,284,273,216},   // 500
 { 3,284,216,279},   // 501
 { 3,279,291,284},   // 502
 { 3,291,296,284},   // 503
 { 3,291,293,296},   // 504
 { 3,290,296,293},   // 505
 { 3,279,287,291},   // 506
 { 3,274,229,231},   // 507
 { 3,276,229,274},   // 508
 { 3,276,236,229},   // 509
 { 3,280,236,276},   // 510
 { 3,295,274,231},   // 511
 { 3,295,231,297},   // 512
 { 3,292,295,297},   // 513
 { 3,294,295,292},   // 514
 { 3,294,283,295},   // 515
 { 3,231,232,277},   // 516
 { 3,282,277,232},   // 517
 { 3,282,285,277},   // 518
 { 3,282,289,285},   // 519
 { 3,289,297,285},   // 520
 { 3,289,288,297},   // 521
 { 3,292,297,288},   // 522
 { 3,280,289,282},   // 523
 { 3,280,294,289},   // 524
 { 3,294,280,283},   // 525
 { 3,280,276,283},   // 526
 { 3,0,1,2},   // 527
 { 3,1,3,2},   // 528
 { 3,1,4,3},   // 529
 { 3,4,5,3},   // 530
 { 3,4,6,5},   // 531
 { 3,6,7,5},   // 532
 { 3,8,5,7},   // 533
 { 3,9,1,0},   // 534
 { 3,9,10,1},   // 535
 { 3,10,4,1},   // 536
 { 3,10,11,4},   // 537
 { 3,11,6,4},   // 538
 { 3,11,12,6},   // 539
 { 3,8,7,6},   // 540
 { 3,9,13,10},   // 541
 { 3,10,13,14},   // 542
 { 3,10,14,11},   // 543
 { 3,11,14,15},   // 544
 { 3,11,15,12},   // 545
 { 3,12,15,16},   // 546
 { 3,12,16,6},   // 547
 { 3,17,6,16},   // 548
 { 3,17,8,6},   // 549
 { 3,9,18,13},   // 550
 { 3,15,19,16},   // 551
 { 3,20,16,19},   // 552
 { 3,17,16,20},   // 553
 { 3,18,21,13},   // 554
 { 3,13,21,22},   // 555
 { 3,13,22,14},   // 556
 { 3,14,22,15},   // 557
 { 3,15,22,23},   // 558
 { 3,15,23,19},   // 559
 { 3,20,19,23},   // 560
 { 3,20,23,24},   // 561
 { 3,25,20,24},   // 562
 { 3,26,20,25},   // 563
 { 3,26,17,20},   // 564
 { 3,26,8,17},   // 565
 { 3,26,27,8},   // 566
 { 3,28,25,24},   // 567
 { 3,29,25,28},   // 568
 { 3,29,26,25},   // 569
 { 3,29,27,26},   // 570
 { 3,29,30,27},   // 571
 { 3,28,24,31},   // 572
 { 3,32,28,31},   // 573
 { 3,33,28,32},   // 574
 { 3,33,29,28},   // 575
 { 3,33,30,29},   // 576
 { 3,33,34,30},   // 577
 { 3,30,34,35},   // 578
 { 3,35,36,30},   // 579
 { 3,30,36,27},   // 580
 { 3,27,36,5},   // 581
 { 3,27,5,8},   // 582
 { 3,39,40,37},   // 583
 { 3,37,38,39},   // 584
 { 3,47,39,38},   // 585
 { 3,39,47,49},   // 586
 { 3,39,49,52},   // 587
 { 3,39,52,53},   // 588
 { 3,53,40,39},   // 589
 { 3,37,63,38},   // 590
 { 3,47,38,63},   // 591
 { 3,52,49,50},   // 592
 { 3,63,45,47},   // 593
 { 3,47,45,46},   // 594
 { 3,47,46,48},   // 595
 { 3,47,48,49},   // 596
 { 3,63,44,45},   // 597
 { 3,63,64,44},   // 598
 { 3,64,41,44},   // 599
 { 3,62,64,63},   // 600
 { 3,64,62,43},   // 601
 { 3,64,43,41},   // 602
 { 3,43,0,41},   // 603
 { 3,63,37,62},   // 604
 { 3,37,60,62},   // 605
 { 3,62,60,61},   // 606
 { 3,62,61,43},   // 607
 { 3,43,61,18},   // 608
 { 3,37,59,60},   // 609
 { 3,60,59,21},   // 610
 { 3,60,21,61},   // 611
 { 3,61,21,18},   // 612
 { 3,37,40,57},   // 613
 { 3,37,57,58},   // 614
 { 3,37,58,59},   // 615
 { 3,40,55,56},   // 616
 { 3,40,56,57},   // 617
 { 3,40,53,55},   // 618
 { 3,53,54,55},   // 619
 { 3,55,54,56},   // 620
 { 3,53,51,54},   // 621
 { 3,51,32,54},   // 622
 { 3,54,32,31},   // 623
 { 3,54,31,56},   // 624
 { 3,52,51,53},   // 625
 { 3,52,50,51},   // 626
 { 3,51,50,34},   // 627
 { 3,50,35,34},   // 628
 { 3,50,48,35},   // 629
 { 3,49,48,50},   // 630
 { 3,41,0,2},   // 631
 { 3,41,2,42},   // 632
 { 3,44,41,42},   // 633
 { 3,45,44,42},   // 634
 { 3,45,42,46},   // 635
 { 3,48,46,65},   // 636
 { 3,35,48,65},   // 637
 { 3,36,35,65},   // 638
 { 3,5,36,65},   // 639
 { 3,3,5,65},   // 640
 { 3,2,3,65},   // 641
 { 3,42,2,65},   // 642
 { 3,46,42,65},   // 643
 { 3,66,56,31},   // 644
 { 3,57,56,66},   // 645
 { 3,67,22,21},   // 646
 { 3,23,22,67},   // 647
 { 3,66,24,23},   // 648
 { 3,66,31,24},   // 649
 { 3,67,21,59},   // 650
 { 3,67,59,58},   // 651
 { 3,319,57,66},   // 652
 { 3,319,58,57},   // 653
 { 3,319,67,58},   // 654
 { 3,319,23,67},   // 655
 { 3,319,66,23},   // 656
 { 3,69,68,71},   // 657
 { 3,76,77,78},   // 658
 { 3,79,80,81},   // 659
 { 3,68,69,70},   // 660
 { 3,74,320,73},   // 661
 { 3,320,75,73},   // 662
 { 3,85,82,84},   // 663
 { 3,93,90,91},   // 664
 { 3,70,69,71},   // 665
 { 3,75,74,73},   // 666
 { 3,85,84,157},   // 667
 { 3,87,85,157},   // 668
 { 3,160,87,157},   // 669
 { 3,89,87,160},   // 670
 { 3,91,89,160},   // 671
 { 3,93,91,159},   // 672
 { 3,95,93,159},   // 673
 { 3,158,95,159},   // 674
 { 3,97,95,158},   // 675
 { 3,84,97,158},   // 676
 { 3,83,82,85},   // 677
 { 3,87,83,85},   // 678
 { 3,89,86,87},   // 679
 { 3,88,86,89},   // 680
 { 3,91,88,89},   // 681
 { 3,92,90,93},   // 682
 { 3,95,92,93},   // 683
 { 3,97,94,95},   // 684
 { 3,96,94,97},   // 685
 { 3,84,96,97},   // 686
 { 3,82,96,84},   // 687
 { 3,321,144,143},   // 688
 { 3,145,321,143},   // 689
 { 3,152,153,151},   // 690
 { 3,150,152,151},   // 691
 { 3,70,71,68},   // 692
 { 3,320,74,75},   // 693
 { 3,98,99,100},   // 694
 { 3,98,101,99},   // 695
 { 3,101,100,99},   // 696
 { 3,76,78,102},   // 697
 { 3,76,102,77},   // 698
 { 3,78,77,102},   // 699
 { 3,81,80,103},   // 700
 { 3,79,103,80},   // 701
 { 3,79,81,103},   // 702
 { 3,106,105,104},   // 703
 { 3,109,111,113},   // 704
 { 3,108,112,110},   // 705
 { 3,113,112,109},   // 706
 { 3,111,108,110},   // 707
 { 3,109,108,111},   // 708
 { 3,115,114,116},   // 709
 { 3,115,117,114},   // 710
 { 3,119,118,120},   // 711
 { 3,122,121,119},   // 712
 { 3,119,120,122},   // 713
 { 3,124,123,125},   // 714
 { 3,126,123,124},   // 715
 { 3,131,130,129},   // 716
 { 3,128,132,127},   // 717
 { 3,127,132,129},   // 718
 { 3,129,132,131},   // 719
 { 3,130,127,129},   // 720
 { 3,128,127,130},   // 721
 { 3,134,133,135},   // 722
 { 3,137,136,138},   // 723
 { 3,137,139,140},   // 724
 { 3,140,139,141},   // 725
 { 3,138,141,139},   // 726
 { 3,136,141,138},   // 727
 { 3,146,147,144},   // 728
 { 3,146,148,147},   // 729
 { 3,155,148,146},   // 730
 { 3,155,150,148},   // 731
 { 3,149,150,155},   // 732
 { 3,149,152,150},   // 733
 { 3,154,153,152},   // 734
 { 3,154,145,153},   // 735
 { 3,156,145,154},   // 736
 { 3,156,321,145},   // 737
 { 3,162,161,163},   // 738
 { 3,164,161,162},   // 739
 { 3,161,165,163},   // 740
 { 3,162,163,165},   // 741
 { 3,165,161,164},   // 742
 { 3,167,166,168},   // 743
 { 3,169,166,167},   // 744
 { 3,322,323,208},   // 745
 { 3,208,199,322},   // 746
 { 3,324,325,187},   // 747
 { 3,187,185,324},   // 748
 { 3,171,170,172},   // 749
 { 3,173,170,171},   // 750
 { 3,173,174,170},   // 751
 { 3,174,173,171},   // 752
 { 3,172,170,174},   // 753
 { 3,176,175,177},   // 754
 { 3,178,175,176},   // 755
 { 3,326,327,328},   // 756
 { 3,328,329,326},   // 757
 { 3,330,331,332},   // 758
 { 3,332,333,330},   // 759
 { 3,334,322,325},   // 760
 { 3,334,335,322},   // 761
 { 3,336,323,337},   // 762
 { 3,336,324,323},   // 763
 { 3,336,335,334},   // 764
 { 3,336,337,335},   // 765
 { 3,187,322,199},   // 766
 { 3,187,325,322},   // 767
 { 3,185,323,324},   // 768
 { 3,185,208,323},   // 769
 { 3,185,199,208},   // 770
 { 3,185,187,199},   // 771
 { 3,338,328,339},   // 772
 { 3,338,331,328},   // 773
 { 3,340,327,332},   // 774
 { 3,340,341,327},   // 775
 { 3,340,339,341},   // 776
 { 3,340,338,339},   // 777
 { 3,330,328,331},   // 778
 { 3,330,329,328},   // 779
 { 3,333,327,326},   // 780
 { 3,333,332,327},   // 781
 { 3,333,329,330},   // 782
 { 3,333,326,329},   // 783
 { 3,162,299,164},   // 784
 { 3,300,299,162},   // 785
 { 3,167,301,169},   // 786
 { 3,302,301,167},   // 787
 { 3,334,325,324},   // 788
 { 3,324,336,334},   // 789
 { 3,335,337,323},   // 790
 { 3,323,322,335},   // 791
 { 3,172,309,171},   // 792
 { 3,309,310,171},   // 793
 { 3,310,309,172},   // 794
 { 3,176,311,312},   // 795
 { 3,177,311,176},   // 796
 { 3,340,332,331},   // 797
 { 3,331,338,340},   // 798
 { 3,327,341,339},   // 799
 { 3,339,328,327},   // 800
 { 3,3,342,0},   // 801
 { 3,0,4,3},   // 802
 { 3,3,4,7},   // 803
 { 3,7,27,36},   // 804
 { 3,36,27,34},   // 805
 { 3,34,343,36},   // 806
 { 3,4,0,9},   // 807
 { 3,9,11,4},   // 808
 { 3,7,4,11},   // 809
 { 3,11,16,7},   // 810
 { 3,7,16,26},   // 811
 { 3,26,27,7},   // 812
 { 3,27,26,33},   // 813
 { 3,33,34,27},   // 814
 { 3,344,11,9},   // 815
 { 3,11,344,19},   // 816
 { 3,19,16,11},   // 817
 { 3,26,16,19},   // 818
 { 3,19,345,26},   // 819
 { 3,33,26,345},   // 820
 { 3,345,32,33},   // 821
 { 3,32,345,24},   // 822
 { 3,9,18,344},   // 823
 { 3,22,344,18},   // 824
 { 3,344,22,23},   // 825
 { 3,23,19,344},   // 826
 { 3,345,19,23},   // 827
 { 3,23,24,345},   // 828
 { 3,346,0,342},   // 829
 { 3,342,42,346},   // 830
 { 3,347,346,42},   // 831
 { 3,42,46,347},   // 832
 { 3,347,46,48},   // 833
 { 3,48,348,347},   // 834
 { 3,348,48,343},   // 835
 { 3,343,34,348},   // 836
 { 3,346,347,38},   // 837
 { 3,38,347,348},   // 838
 { 3,348,52,38},   // 839
 { 3,38,52,55},   // 840
 { 3,55,349,38},   // 841
 { 3,64,38,349},   // 842
 { 3,38,64,346},   // 843
 { 3,0,346,64},   // 844
 { 3,64,9,0},   // 845
 { 3,18,9,64},   // 846
 { 3,52,348,34},   // 847
 { 3,34,33,52},   // 848
 { 3,52,33,32},   // 849
 { 3,32,55,52},   // 850
 { 3,32,56,55},   // 851
 { 3,349,55,56},   // 852
 { 3,56,58,349},   // 853
 { 3,349,58,59},   // 854
 { 3,59,60,349},   // 855
 { 3,349,60,64},   // 856
 { 3,64,60,18},   // 857
 { 3,60,59,18},   // 858
 { 3,319,66,23},   // 859
 { 3,319,58,66},   // 860
 { 3,319,23,67},   // 861
 { 3,319,67,58},   // 862
 { 3,56,32,66},   // 863
 { 3,66,32,24},   // 864
 { 3,24,23,66},   // 865
 { 3,23,22,67},   // 866
 { 3,67,22,18},   // 867
 { 3,67,18,59},   // 868
 { 3,59,58,67},   // 869
 { 3,58,56,66},   // 870
 { 3,350,85,84},   // 871
 { 3,351,93,91},   // 872
 { 3,84,85,352},   // 873
 { 3,85,87,352},   // 874
 { 3,87,353,352},   // 875
 { 3,87,89,353},   // 876
 { 3,89,91,353},   // 877
 { 3,91,93,354},   // 878
 { 3,93,95,354},   // 879
 { 3,95,355,354},   // 880
 { 3,95,97,355},   // 881
 { 3,97,84,355},   // 882
 { 3,350,87,85},   // 883
 { 3,356,89,87},   // 884
 { 3,356,91,89},   // 885
 { 3,351,95,93},   // 886
 { 3,357,97,95},   // 887
 { 3,357,84,97},   // 888
 { 3,144,321,143},   // 889
 { 3,321,145,143},   // 890
 { 3,153,152,151},   // 891
 { 3,152,150,151},   // 892
 { 3,358,151,150},   // 893
 { 3,358,150,148},   // 894
 { 3,359,148,147},   // 895
 { 3,359,147,144},   // 896
 { 3,360,153,151},   // 897
 { 3,360,145,153},   // 898
 { 3,361,143,145},   // 899
 { 3,361,144,143},   // 900
 { 3,105,106,104},   // 901
 { 3,104,362,107},   // 902
 { 3,104,363,362},   // 903
 { 3,105,364,106},   // 904
 { 3,107,364,105},   // 905
 { 3,107,362,364},   // 906
 { 3,106,363,104},   // 907
 { 3,365,109,366},   // 908
 { 3,109,367,108},   // 909
 { 3,368,108,367},   // 910
 { 3,365,367,109},   // 911
 { 3,368,366,108},   // 912
 { 3,109,108,366},   // 913
 { 3,369,120,370},   // 914
 { 3,370,114,369},   // 915
 { 3,114,115,369},   // 916
 { 3,371,372,122},   // 917
 { 3,122,115,371},   // 918
 { 3,372,371,114},   // 919
 { 3,114,370,372},   // 920
 { 3,120,369,115},   // 921
 { 3,115,122,120},   // 922
 { 3,371,115,114},   // 923
 { 3,123,124,125},   // 924
 { 3,123,126,124},   // 925
 { 3,125,124,373},   // 926
 { 3,126,123,374},   // 927
 { 3,124,126,373},   // 928
 { 3,123,125,374},   // 929
 { 3,375,376,129},   // 930
 { 3,377,378,127},   // 931
 { 3,127,378,129},   // 932
 { 3,375,129,378},   // 933
 { 3,377,127,376},   // 934
 { 3,129,376,127},   // 935
 { 3,136,379,380},   // 936
 { 3,380,381,136},   // 937
 { 3,382,141,383},   // 938
 { 3,383,380,382},   // 939
 { 3,381,383,141},   // 940
 { 3,141,136,381},   // 941
 { 3,382,380,379},   // 942
 { 3,147,384,144},   // 943
 { 3,148,384,147},   // 944
 { 3,148,385,384},   // 945
 { 3,150,385,148},   // 946
 { 3,152,385,150},   // 947
 { 3,153,386,152},   // 948
 { 3,145,386,153},   // 949
 { 3,145,387,386},   // 950
 { 3,321,387,145},   // 951
 { 3,322,323,208},   // 952
 { 3,208,199,322},   // 953
 { 3,324,325,187},   // 954
 { 3,187,185,324},   // 955
 { 3,326,327,328},   // 956
 { 3,328,329,326},   // 957
 { 3,330,331,332},   // 958
 { 3,332,333,330},   // 959
 { 3,334,322,325},   // 960
 { 3,334,335,322},   // 961
 { 3,336,323,337},   // 962
 { 3,336,324,323},   // 963
 { 3,336,335,334},   // 964
 { 3,336,337,335},   // 965
 { 3,187,322,199},   // 966
 { 3,187,325,322},   // 967
 { 3,185,323,324},   // 968
 { 3,185,208,323},   // 969
 { 3,185,199,208},   // 970
 { 3,185,187,199},   // 971
 { 3,338,328,339},   // 972
 { 3,338,331,328},   // 973
 { 3,340,327,332},   // 974
 { 3,340,341,327},   // 975
 { 3,340,339,341},   // 976
 { 3,340,338,339},   // 977
 { 3,330,328,331},   // 978
 { 3,330,329,328},   // 979
 { 3,333,327,326},   // 980
 { 3,333,332,327},   // 981
 { 3,333,329,330},   // 982
 { 3,333,326,329},   // 983
 { 3,334,325,324},   // 984
 { 3,324,336,334},   // 985
 { 3,335,337,323},   // 986
 { 3,323,322,335},   // 987
 { 3,340,332,331},   // 988
 { 3,331,338,340},   // 989
 { 3,327,341,339},   // 990
 { 3,339,328,327},   // 991
 { 3,388,389,46},   // 992
 { 3,46,42,388},   // 993
 { 3,388,42,342},   // 994
 { 3,342,3,388},   // 995
 { 3,388,3,7},   // 996
 { 3,389,388,7},   // 997
 { 3,7,36,389},   // 998
 { 3,389,36,343},   // 999
 { 3,343,48,389},   // 1000
 { 3,389,48,46},   // 1001
 { 3,86,83,82},   // 1002
 { 3,88,86,82},   // 1003
 { 3,90,88,82},   // 1004
 { 3,92,90,82},   // 1005
 { 3,94,92,82},   // 1006
 { 3,96,94,82},   // 1007
 { 3,98,100,101},   // 1008
 { 3,390,391,392},   // 1009
 { 3,393,394,395},   // 1010
 { 3,82,83,96},   // 1011
 { 3,83,86,96},   // 1012
 { 3,86,88,96},   // 1013
 { 3,88,90,96},   // 1014
 { 3,90,92,96},   // 1015
 { 3,92,94,96},   // 1016
 { 3,112,108,109},   // 1017
 { 3,370,120,122},   // 1018
 { 3,122,372,370},   // 1019
 { 3,379,136,141},   // 1020
 { 3,141,382,379},   // 1021
 { 3,380,383,381},   // 1022
};

void getTieFighterShip() {
  memcpy(ship_vertices, TieFighter_vertices, sizeof(TieFighter_vertices));
  ship_vertices_cnt = 396;
  scale = TieFighter_scale;
  memcpy(ship_faces, TieFighter_faces, sizeof(TieFighter_faces));
  ship_faces_cnt = 1023;
}

ShipAnimation TieFighterAnimation {
  "TieFighter",
  *getTieFighterShip
};

#endif

