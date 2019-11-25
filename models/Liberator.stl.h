#ifndef __Liberator_H__
#define __Liberator_H__

const float Liberator_scale = 1.5875;
const int8_t Liberator_vertices[121][3] = {
 { 79,10,-17},   // 0
 { 67,-42,-12},   // 1
 { 89,53,-22},   // 2
 { 70,44,-10},   // 3
 { -47,-126,-8},   // 4
 { -33,-101,-4},   // 5
 { -48,-127,-5},   // 6
 { 33,113,-2},   // 7
 { 32,126,17},   // 8
 { 54,126,-0},   // 9
 { -7,116,-10},   // 10
 { -1,97,-12},   // 11
 { -0,116,-14},   // 12
 { 0,55,-12},   // 13
 { -2,77,-12},   // 14
 { -30,54,-11},   // 15
 { -31,83,-12},   // 16
 { 34,115,-3},   // 17
 { 30,116,-11},   // 18
 { 30,92,-11},   // 19
 { -34,113,-3},   // 20
 { -30,115,-11},   // 21
 { -21,33,-8},   // 22
 { -21,54,-8},   // 23
 { 20,54,-8},   // 24
 { 21,33,-8},   // 25
 { -26,-35,-5},   // 26
 { -14,29,-5},   // 27
 { -1,-18,-5},   // 28
 { -33,51,-4},   // 29
 { 32,50,-4},   // 30
 { 18,-17,-5},   // 31
 { 33,-68,-4},   // 32
 { 50,-7,-11},   // 33
 { 69,-22,-17},   // 34
 { 32,-125,-4},   // 35
 { 51,44,-12},   // 36
 { 87,53,-25},   // 37
 { 83,30,-23},   // 38
 { 52,127,-3},   // 39
 { 48,-125,-6},   // 40
 { -45,-8,-9},   // 41
 { -55,20,-13},   // 42
 { -42,35,-8},   // 43
 { -71,-16,-18},   // 44
 { -83,30,-23},   // 45
 { -34,-36,-4},   // 46
 { -71,44,-20},   // 47
 { -87,54,-25},   // 48
 { -53,124,-4},   // 49
 { 30,54,-11},   // 50
 { -54,127,-0},   // 51
 { 46,-46,0},   // 52
 { -54,-53,-5},   // 53
 { -67,-42,-12},   // 54
 { 35,-109,3},   // 55
 { 34,-35,9},   // 56
 { 33,33,13},   // 57
 { 21,-8,16},   // 58
 { 78,75,-15},   // 59
 { 17,121,17},   // 60
 { 25,38,13},   // 61
 { -36,-124,1},   // 62
 { -34,-36,8},   // 63
 { -40,-42,5},   // 64
 { -85,33,-20},   // 65
 { -34,9,12},   // 66
 { -35,39,13},   // 67
 { -89,53,-22},   // 68
 { -79,75,-15},   // 69
 { -33,114,17},   // 70
 { -25,37,13},   // 71
 { -17,121,17},   // 72
 { -22,-6,17},   // 73
 { 9,25,18},   // 74
 { -8,25,18},   // 75
 { -20,49,19},   // 76
 { 20,48,19},   // 77
 { 13,114,22},   // 78
 { -13,114,22},   // 79
 { -33,125,16},   // 80
 { -3,26,25},   // 81
 { 2,109,25},   // 82
 { -30,-6,5},   // 83
 { -0,-6,5},   // 84
 { -30,-6,-1},   // 85
 { 30,-6,5},   // 86
 { 32,-37,-3},   // 87
 { 33,-36,-3},   // 88
 { 31,-37,5},   // 89
 { -33,-35,-4},   // 90
 { -31,-37,5},   // 91
 { -47,-127,-7},   // 92
 { 26,-35,-4},   // 93
 { 61,-61,-13},   // 94
 { 49,-124,-7},   // 95
 { -61,-61,-14},   // 96
 { -50,-117,-7},   // 97
 { 19,120,17},   // 98
 { -19,120,17},   // 99
 { 33,117,17},   // 100
 { -75,42,-12},   // 101
 { -88,51,-23},   // 102
 { 36,10,11},   // 103
 { -0,46,23},   // 104
 { 87,51,-23},   // 105
 { 32,-35,8},   // 106
 { -0,-38,5},   // 107
 { 32,126,15},   // 108
 { 52,126,-1},   // 109
 { -0,55,-13},   // 110
 { -35,114,-5},   // 111
 { 32,-37,-2},   // 112
 { 62,-61,-12},   // 113
 { -43,-9,-8},   // 114
 { -32,-37,-2},   // 115
 { -62,-61,-12},   // 116
 { -36,10,11},   // 117
 { -30,21,14},   // 118
 { -33,126,15},   // 119
 { -52,126,-1},   // 120
};

const uint16_t Liberator_faces[469][9] = {
 { 3,0,1,2},   // 0
 { 3,2,3,0},   // 1
 { 3,4,5,6},   // 2
 { 3,7,8,9},   // 3
 { 3,10,11,12},   // 4
 { 3,13,12,11},   // 5
 { 3,11,10,12},   // 6
 { 3,14,11,12},   // 7
 { 3,12,13,14},   // 8
 { 3,14,13,15},   // 9
 { 3,15,16,14},   // 10
 { 3,10,17,18},   // 11
 { 3,10,18,11},   // 12
 { 3,19,11,18},   // 13
 { 3,17,20,7},   // 14
 { 3,17,10,20},   // 15
 { 3,10,21,20},   // 16
 { 3,11,21,10},   // 17
 { 3,22,23,24},   // 18
 { 3,24,25,22},   // 19
 { 3,26,27,28},   // 20
 { 3,27,26,29},   // 21
 { 3,30,31,28},   // 22
 { 3,30,28,27},   // 23
 { 3,29,30,27},   // 24
 { 3,32,31,30},   // 25
 { 3,33,32,30},   // 26
 { 3,34,32,33},   // 27
 { 3,34,35,32},   // 28
 { 3,30,36,33},   // 29
 { 3,37,36,30},   // 30
 { 3,38,33,36},   // 31
 { 3,39,37,30},   // 32
 { 3,17,39,30},   // 33
 { 3,33,38,34},   // 34
 { 3,35,34,40},   // 35
 { 3,41,42,43},   // 36
 { 3,44,45,42},   // 37
 { 3,45,43,42},   // 38
 { 3,46,41,43},   // 39
 { 3,46,5,41},   // 40
 { 3,45,47,43},   // 41
 { 3,47,48,29},   // 42
 { 3,46,43,29},   // 43
 { 3,49,29,48},   // 44
 { 3,49,20,29},   // 45
 { 3,29,26,46},   // 46
 { 3,4,44,5},   // 47
 { 3,5,44,41},   // 48
 { 3,44,42,41},   // 49
 { 3,29,43,47},   // 50
 { 3,30,50,19},   // 51
 { 3,19,14,11},   // 52
 { 3,13,11,14},   // 53
 { 3,14,19,50},   // 54
 { 3,50,13,14},   // 55
 { 3,16,13,14},   // 56
 { 3,11,14,16},   // 57
 { 3,14,13,16},   // 58
 { 3,16,29,20},   // 59
 { 3,20,21,16},   // 60
 { 3,20,49,51},   // 61
 { 3,7,9,39},   // 62
 { 3,39,17,7},   // 63
 { 3,2,52,40},   // 64
 { 3,53,54,6},   // 65
 { 3,55,40,52},   // 66
 { 3,55,35,40},   // 67
 { 3,2,1,52},   // 68
 { 3,1,56,52},   // 69
 { 3,1,0,56},   // 70
 { 3,0,57,56},   // 71
 { 3,56,57,58},   // 72
 { 3,0,3,57},   // 73
 { 3,3,2,59},   // 74
 { 3,8,57,3},   // 75
 { 3,59,8,3},   // 76
 { 3,59,9,8},   // 77
 { 3,8,60,61},   // 78
 { 3,57,8,61},   // 79
 { 3,57,61,58},   // 80
 { 3,6,62,63},   // 81
 { 3,6,63,53},   // 82
 { 3,64,54,53},   // 83
 { 3,65,54,64},   // 84
 { 3,63,64,53},   // 85
 { 3,65,64,63},   // 86
 { 3,66,65,63},   // 87
 { 3,34,38,40},   // 88
 { 3,36,37,38},   // 89
 { 3,2,38,37},   // 90
 { 3,2,37,39},   // 91
 { 3,59,2,39},   // 92
 { 3,9,59,39},   // 93
 { 3,54,65,6},   // 94
 { 3,67,68,65},   // 95
 { 3,45,65,68},   // 96
 { 3,68,48,45},   // 97
 { 3,48,47,45},   // 98
 { 3,44,4,45},   // 99
 { 3,68,69,48},   // 100
 { 3,69,51,48},   // 101
 { 3,51,49,48},   // 102
 { 3,4,6,65},   // 103
 { 3,65,45,4},   // 104
 { 3,69,68,67},   // 105
 { 3,69,67,70},   // 106
 { 3,51,69,70},   // 107
 { 3,70,67,71},   // 108
 { 3,70,71,72},   // 109
 { 3,73,71,66},   // 110
 { 3,66,63,73},   // 111
 { 3,63,56,73},   // 112
 { 3,66,67,65},   // 113
 { 3,67,66,71},   // 114
 { 3,73,74,75},   // 115
 { 3,76,73,75},   // 116
 { 3,73,58,74},   // 117
 { 3,56,58,73},   // 118
 { 3,58,77,74},   // 119
 { 3,78,74,77},   // 120
 { 3,79,76,75},   // 121
 { 3,51,70,80},   // 122
 { 3,80,72,60},   // 123
 { 3,60,8,80},   // 124
 { 3,81,74,82},   // 125
 { 3,74,78,82},   // 126
 { 3,79,75,81},   // 127
 { 3,81,82,79},   // 128
 { 3,55,52,56},   // 129
 { 3,72,80,70},   // 130
 { 3,78,79,82},   // 131
 { 3,75,74,81},   // 132
 { 3,60,72,79},   // 133
 { 3,79,78,60},   // 134
 { 3,71,79,72},   // 135
 { 3,71,76,79},   // 136
 { 3,76,71,73},   // 137
 { 3,78,61,60},   // 138
 { 3,78,77,61},   // 139
 { 3,35,55,32},   // 140
 { 3,32,55,56},   // 141
 { 3,5,63,62},   // 142
 { 3,46,63,5},   // 143
 { 3,16,15,29},   // 144
 { 3,30,13,50},   // 145
 { 3,30,15,13},   // 146
 { 3,30,29,15},   // 147
 { 3,18,17,30},   // 148
 { 3,30,19,18},   // 149
 { 3,5,62,6},   // 150
 { 3,8,7,20},   // 151
 { 3,20,80,8},   // 152
 { 3,80,20,51},   // 153
 { 3,21,11,16},   // 154
 { 3,38,2,40},   // 155
 { 3,58,61,77},   // 156
 { 3,56,83,84},   // 157
 { 3,56,63,83},   // 158
 { 3,85,83,63},   // 159
 { 3,63,46,85},   // 160
 { 3,56,84,86},   // 161
 { 3,87,56,86},   // 162
 { 3,56,87,32},   // 163
 { 3,31,32,87},   // 164
 { 3,28,31,87},   // 165
 { 3,26,28,87},   // 166
 { 3,46,26,87},   // 167
 { 3,10,11,12},   // 168
 { 3,29,21,16},   // 169
 { 3,55,52,56},   // 170
 { 3,88,56,89},   // 171
 { 3,63,90,91},   // 172
 { 3,8,9,7},   // 173
 { 3,92,5,62},   // 174
 { 3,15,16,13},   // 175
 { 3,19,11,18},   // 176
 { 3,11,10,18},   // 177
 { 3,11,14,21},   // 178
 { 3,17,20,7},   // 179
 { 3,17,10,20},   // 180
 { 3,10,21,20},   // 181
 { 3,11,21,12},   // 182
 { 3,30,90,29},   // 183
 { 3,30,93,90},   // 184
 { 3,88,93,30},   // 185
 { 3,33,88,30},   // 186
 { 3,33,32,88},   // 187
 { 3,94,32,33},   // 188
 { 3,94,35,32},   // 189
 { 3,30,36,33},   // 190
 { 3,37,36,30},   // 191
 { 3,38,33,36},   // 192
 { 3,39,37,30},   // 193
 { 3,17,39,30},   // 194
 { 3,38,36,37},   // 195
 { 3,34,38,37},   // 196
 { 3,33,38,34},   // 197
 { 3,94,34,37},   // 198
 { 3,94,95,35},   // 199
 { 3,41,42,43},   // 200
 { 3,34,94,33},   // 201
 { 3,44,45,42},   // 202
 { 3,45,43,42},   // 203
 { 3,90,41,43},   // 204
 { 3,90,5,41},   // 205
 { 3,48,45,44},   // 206
 { 3,48,47,45},   // 207
 { 3,45,47,43},   // 208
 { 3,48,44,96},   // 209
 { 3,47,48,29},   // 210
 { 3,90,43,29},   // 211
 { 3,49,29,48},   // 212
 { 3,49,20,29},   // 213
 { 3,92,96,5},   // 214
 { 3,5,96,41},   // 215
 { 3,96,42,41},   // 216
 { 3,96,44,42},   // 217
 { 3,29,43,47},   // 218
 { 3,21,29,20},   // 219
 { 3,30,50,19},   // 220
 { 3,14,19,50},   // 221
 { 3,50,13,14},   // 222
 { 3,80,49,51},   // 223
 { 3,7,9,39},   // 224
 { 3,39,17,7},   // 225
 { 3,55,35,95},   // 226
 { 3,55,95,52},   // 227
 { 3,95,94,52},   // 228
 { 3,94,1,52},   // 229
 { 3,1,56,52},   // 230
 { 3,1,0,56},   // 231
 { 3,0,57,56},   // 232
 { 3,0,3,57},   // 233
 { 3,57,61,58},   // 234
 { 3,56,57,58},   // 235
 { 3,62,97,92},   // 236
 { 3,97,62,63},   // 237
 { 3,97,63,64},   // 238
 { 3,97,64,53},   // 239
 { 3,53,54,97},   // 240
 { 3,66,64,63},   // 241
 { 3,65,54,66},   // 242
 { 3,66,54,64},   // 243
 { 3,66,67,65},   // 244
 { 3,73,71,66},   // 245
 { 3,66,63,73},   // 246
 { 3,63,56,73},   // 247
 { 3,56,63,73},   // 248
 { 3,56,58,63},   // 249
 { 3,73,58,74},   // 250
 { 3,73,74,75},   // 251
 { 3,76,73,75},   // 252
 { 3,58,77,74},   // 253
 { 3,78,74,77},   // 254
 { 3,79,76,75},   // 255
 { 3,54,53,64},   // 256
 { 3,92,97,54},   // 257
 { 3,54,96,92},   // 258
 { 3,65,67,68},   // 259
 { 3,54,65,68},   // 260
 { 3,96,54,68},   // 261
 { 3,68,48,96},   // 262
 { 3,68,69,48},   // 263
 { 3,69,51,48},   // 264
 { 3,51,49,48},   // 265
 { 3,81,74,82},   // 266
 { 3,74,78,82},   // 267
 { 3,79,75,81},   // 268
 { 3,81,82,79},   // 269
 { 3,78,77,61},   // 270
 { 3,78,61,98},   // 271
 { 3,77,58,61},   // 272
 { 3,76,71,73},   // 273
 { 3,71,76,79},   // 274
 { 3,71,79,99},   // 275
 { 3,66,71,67},   // 276
 { 3,99,80,70},   // 277
 { 3,80,99,98},   // 278
 { 3,98,8,80},   // 279
 { 3,100,8,98},   // 280
 { 3,9,8,100},   // 281
 { 3,59,9,100},   // 282
 { 3,59,100,3},   // 283
 { 3,3,2,59},   // 284
 { 3,100,57,3},   // 285
 { 3,70,71,99},   // 286
 { 3,70,67,71},   // 287
 { 3,63,58,73},   // 288
 { 3,57,100,61},   // 289
 { 3,100,98,61},   // 290
 { 3,101,68,67},   // 291
 { 3,69,68,101},   // 292
 { 3,101,67,70},   // 293
 { 3,101,70,69},   // 294
 { 3,51,69,70},   // 295
 { 3,51,70,80},   // 296
 { 3,78,79,82},   // 297
 { 3,75,74,81},   // 298
 { 3,98,99,79},   // 299
 { 3,79,78,98},   // 300
 { 3,32,35,55},   // 301
 { 3,88,32,55},   // 302
 { 3,88,55,56},   // 303
 { 3,62,5,63},   // 304
 { 3,90,63,5},   // 305
 { 3,0,1,94},   // 306
 { 3,2,0,94},   // 307
 { 3,2,3,0},   // 308
 { 3,16,15,29},   // 309
 { 3,30,13,50},   // 310
 { 3,30,15,13},   // 311
 { 3,30,29,15},   // 312
 { 3,18,17,30},   // 313
 { 3,30,19,18},   // 314
 { 3,91,89,56},   // 315
 { 3,56,63,91},   // 316
 { 3,8,7,20},   // 317
 { 3,20,80,8},   // 318
 { 3,80,20,49},   // 319
 { 3,37,2,94},   // 320
 { 3,2,37,39},   // 321
 { 3,59,2,39},   // 322
 { 3,9,59,39},   // 323
 { 3,10,17,18},   // 324
 { 3,10,12,21},   // 325
 { 3,11,19,14},   // 326
 { 3,14,13,16},   // 327
 { 3,16,21,14},   // 328
 { 3,10,17,18},   // 329
 { 3,54,101,102},   // 330
 { 3,53,97,64},   // 331
 { 3,55,52,103},   // 332
 { 3,76,104,75},   // 333
 { 3,105,3,0},   // 334
 { 3,106,63,107},   // 335
 { 3,108,109,17},   // 336
 { 3,47,102,29},   // 337
 { 3,105,36,30},   // 338
 { 3,15,16,110},   // 339
 { 3,19,110,21},   // 340
 { 3,10,19,21},   // 341
 { 3,17,10,111},   // 342
 { 3,19,10,18},   // 343
 { 3,30,90,29},   // 344
 { 3,30,93,90},   // 345
 { 3,112,93,30},   // 346
 { 3,33,112,30},   // 347
 { 3,33,32,112},   // 348
 { 3,113,32,33},   // 349
 { 3,113,35,32},   // 350
 { 3,30,36,33},   // 351
 { 3,36,38,34},   // 352
 { 3,34,33,36},   // 353
 { 3,113,95,35},   // 354
 { 3,34,113,33},   // 355
 { 3,44,45,114},   // 356
 { 3,115,5,114},   // 357
 { 3,45,47,114},   // 358
 { 3,97,116,5},   // 359
 { 3,5,62,97},   // 360
 { 3,5,116,114},   // 361
 { 3,116,44,114},   // 362
 { 3,47,29,114},   // 363
 { 3,21,110,16},   // 364
 { 3,111,21,16},   // 365
 { 3,30,50,19},   // 366
 { 3,110,19,50},   // 367
 { 3,111,10,21},   // 368
 { 3,55,35,95},   // 369
 { 3,55,95,52},   // 370
 { 3,103,106,55},   // 371
 { 3,113,1,52},   // 372
 { 3,1,103,52},   // 373
 { 3,95,113,52},   // 374
 { 3,1,0,103},   // 375
 { 3,0,57,103},   // 376
 { 3,106,103,57},   // 377
 { 3,57,61,106},   // 378
 { 3,58,106,61},   // 379
 { 3,0,3,57},   // 380
 { 3,97,62,63},   // 381
 { 3,97,63,64},   // 382
 { 3,53,116,97},   // 383
 { 3,53,54,116},   // 384
 { 3,117,64,63},   // 385
 { 3,118,117,63},   // 386
 { 3,117,118,101},   // 387
 { 3,117,101,54},   // 388
 { 3,117,54,53},   // 389
 { 3,117,53,64},   // 390
 { 3,63,71,118},   // 391
 { 3,71,73,104},   // 392
 { 3,76,71,104},   // 393
 { 3,63,73,71},   // 394
 { 3,106,58,63},   // 395
 { 3,73,58,104},   // 396
 { 3,58,61,104},   // 397
 { 3,61,77,104},   // 398
 { 3,77,78,104},   // 399
 { 3,78,79,104},   // 400
 { 3,79,76,104},   // 401
 { 3,76,75,104},   // 402
 { 3,79,78,98},   // 403
 { 3,98,99,79},   // 404
 { 3,119,99,98},   // 405
 { 3,119,70,99},   // 406
 { 3,120,70,119},   // 407
 { 3,120,51,70},   // 408
 { 3,98,108,119},   // 409
 { 3,51,69,70},   // 410
 { 3,101,67,70},   // 411
 { 3,70,67,71},   // 412
 { 3,70,71,99},   // 413
 { 3,101,70,69},   // 414
 { 3,69,102,101},   // 415
 { 3,38,36,105},   // 416
 { 3,34,38,105},   // 417
 { 3,113,34,105},   // 418
 { 3,105,0,113},   // 419
 { 3,0,1,113},   // 420
 { 3,116,54,102},   // 421
 { 3,102,44,116},   // 422
 { 3,102,45,44},   // 423
 { 3,102,47,45},   // 424
 { 3,118,67,101},   // 425
 { 3,67,118,71},   // 426
 { 3,71,76,79},   // 427
 { 3,71,79,99},   // 428
 { 3,100,108,98},   // 429
 { 3,109,108,100},   // 430
 { 3,9,109,100},   // 431
 { 3,59,9,100},   // 432
 { 3,59,100,3},   // 433
 { 3,3,105,59},   // 434
 { 3,100,57,3},   // 435
 { 3,57,100,61},   // 436
 { 3,100,98,61},   // 437
 { 3,63,58,73},   // 438
 { 3,78,61,98},   // 439
 { 3,78,77,61},   // 440
 { 3,32,35,55},   // 441
 { 3,112,32,55},   // 442
 { 3,112,55,106},   // 443
 { 3,62,5,63},   // 444
 { 3,115,63,5},   // 445
 { 3,29,111,16},   // 446
 { 3,16,15,29},   // 447
 { 3,30,110,50},   // 448
 { 3,30,15,110},   // 449
 { 3,30,29,15},   // 450
 { 3,18,17,19},   // 451
 { 3,107,63,83},   // 452
 { 3,85,83,63},   // 453
 { 3,63,115,85},   // 454
 { 3,17,109,19},   // 455
 { 3,109,30,19},   // 456
 { 3,109,105,30},   // 457
 { 3,29,90,115},   // 458
 { 3,115,114,29},   // 459
 { 3,120,29,102},   // 460
 { 3,108,17,111},   // 461
 { 3,111,119,108},   // 462
 { 3,119,111,120},   // 463
 { 3,102,51,120},   // 464
 { 3,102,69,51},   // 465
 { 3,109,59,105},   // 466
 { 3,109,9,59},   // 467
 { 3,120,111,29},   // 468
};

void getLiberatorShip() {
  memcpy(ship_vertices, Liberator_vertices, sizeof(Liberator_vertices));
  ship_vertices_cnt = 121;
  scale = Liberator_scale;
  memcpy(ship_faces, Liberator_faces, sizeof(Liberator_faces));
  ship_faces_cnt = 469;
}

ShipAnimation LiberatorAnimation {
  "Liberator",
  *getLiberatorShip
};

#endif

