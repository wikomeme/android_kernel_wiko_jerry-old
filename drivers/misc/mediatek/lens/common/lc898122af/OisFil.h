/*Filter Calculator Version 4.02*/
/*the time and date : 2014/1/22 17:22:57*/
/*FC filename : LC898122_V000B_02*/
/*fs,23438Hz*/
/*LSI No.,LC898122*/
/*Comment,*/

/* 8bit */
OISINI__ const struct STFILREG CsFilReg[] = {
	{0x0111, 0x00},		/*00,0111 */
	{0x0113, 0x00},		/*00,0113 */
	{0x0114, 0x00},		/*00,0114 */
	{0x0172, 0x00},		/*00,0172 */
	{0x01E3, 0x00},		/*00,01E3 */
	{0x01E4, 0x00},		/*00,01E4 */
	{0xFFFF, 0xFF}
};

/* 32bit */
OISINI__ const struct STFILRAM CsFilRam[] = {
	{0x1000, 0x3F800000},	/*3F800000,1000,0dB,invert=0 */
	{0x1001, 0x3F800000},	/*3F800000,1001,0dB,invert=0 */
	{0x1002, 0x00000000},	/*00000000,1002,Cutoff,invert=0 */
	{0x1003, 0x3F800000},	/*3F800000,1003,0dB,invert=0 */
	{0x1004, 0x3828A700},	/*3828A700,1004,LPF,0.3Hz,0dB,fs/1,invert=0 */
	{0x1005, 0x3828A700},	/*3828A700,1005,LPF,0.3Hz,0dB,fs/1,invert=0 */
	{0x1006, 0x3F7FFAC0},	/*3F7FFAC0,1006,LPF,0.3Hz,0dB,fs/1,invert=0 */
	{0x1007, 0x3F800000},	/*3F800000,1007,0dB,invert=0 */
	{0x1008, 0xBF800000},	/*BF800000,1008,0dB,invert=1 */
	{0x1009, 0x3F800000},	/*3F800000,1009,0dB,invert=0 */
	{0x100A, 0x3F800000},	/*3F800000,100A,0dB,invert=0 */
	{0x100B, 0x3F800000},	/*3F800000,100B,0dB,invert=0 */
	{0x100C, 0x3F800000},	/*3F800000,100C,0dB,invert=0 */
	{0x100E, 0x3F800000},	/*3F800000,100E,0dB,invert=0 */
	{0x1010, 0x3DA2AD80},	/*3DA2AD80,1010 */
	{0x1011, 0x00000000},	/*00000000,1011,Free,fs/1,invert=0 */
	{0x1012, 0x3F7FFE00},	/*3F7FFE00,1012,Free,fs/1,invert=0 */
	{0x1013, 0x3FB26DC0},	/*3FB26DC0,1013,HBF,50Hz,150Hz,3dB,fs/1,invert=0 */
	{0x1014, 0xBFB00DC0},	/*BFB00DC0,1014,HBF,50Hz,150Hz,3dB,fs/1,invert=0 */
	{0x1015, 0x3F75E8C0},	/*3F75E8C0,1015,HBF,50Hz,150Hz,3dB,fs/1,invert=0 */
	{0x1016, 0x3F1B2780},	/*3F1B2780,1016,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0 */
	{0x1017, 0xBF1B2400},	/*BF1B2400,1017,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0 */
	{0x1018, 0x3F7FFC80},	/*3F7FFC80,1018,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0 */
	{0x1019, 0x3F800000},	/*3F800000,1019,Through,0dB,fs/1,invert=0 */
	{0x101A, 0x00000000},	/*00000000,101A,Through,0dB,fs/1,invert=0 */
	{0x101B, 0x00000000},	/*00000000,101B,Through,0dB,fs/1,invert=0 */
	{0x101C, 0x3F800000},	/*3F800000,101C,0dB,invert=0 */
	{0x101D, 0x00000000},	/*00000000,101D,Cutoff,invert=0 */
	{0x101E, 0x3F800000},	/*3F800000,101E,0dB,invert=0 */
	{0x1020, 0x3F800000},	/*3F800000,1020,0dB,invert=0 */
	{0x1021, 0x3F800000},	/*3F800000,1021,0dB,invert=0 */
	{0x1022, 0x3F800000},	/*3F800000,1022,0dB,invert=0 */
	{0x1023, 0x3F800000},	/*3F800000,1023,Through,0dB,fs/1,invert=0 */
	{0x1024, 0x00000000},	/*00000000,1024,Through,0dB,fs/1,invert=0 */
	{0x1025, 0x00000000},	/*00000000,1025,Through,0dB,fs/1,invert=0 */
	{0x1026, 0x00000000},	/*00000000,1026,Through,0dB,fs/1,invert=0 */
	{0x1027, 0x00000000},	/*00000000,1027,Through,0dB,fs/1,invert=0 */
	{0x1030, 0x3F800000},	/*3F800000,1030,Through,0dB,fs/1,invert=0 */
	{0x1031, 0x00000000},	/*00000000,1031,Through,0dB,fs/1,invert=0 */
	{0x1032, 0x00000000},	/*00000000,1032,Through,0dB,fs/1,invert=0 */
	{0x1033, 0x3F800000},	/*3F800000,1033,Through,0dB,fs/1,invert=0 */
	{0x1034, 0x00000000},	/*00000000,1034,Through,0dB,fs/1,invert=0 */
	{0x1035, 0x00000000},	/*00000000,1035,Through,0dB,fs/1,invert=0 */
	{0x1036, 0x3F800000},	/*3F800000,1036,Through,0dB,fs/1,invert=0 */
	{0x1037, 0x00000000},	/*00000000,1037,Through,0dB,fs/1,invert=0 */
	{0x1038, 0x00000000},	/*00000000,1038,Through,0dB,fs/1,invert=0 */
	{0x1039, 0x3F800000},	/*3F800000,1039,Through,0dB,fs/1,invert=0 */
	{0x103A, 0x00000000},	/*00000000,103A,Through,0dB,fs/1,invert=0 */
	{0x103B, 0x00000000},	/*00000000,103B,Through,0dB,fs/1,invert=0 */
	{0x103C, 0x3F800000},	/*3F800000,103C,Through,0dB,fs/1,invert=0 */
	{0x103D, 0x00000000},	/*00000000,103D,Through,0dB,fs/1,invert=0 */
	{0x103E, 0x00000000},	/*00000000,103E,Through,0dB,fs/1,invert=0 */
	{0x1043, 0x39D2BD40},	/*39D2BD40,1043,LPF,3Hz,0dB,fs/1,invert=0 */
	{0x1044, 0x39D2BD40},	/*39D2BD40,1044,LPF,3Hz,0dB,fs/1,invert=0 */
	{0x1045, 0x3F7FCB40},	/*3F7FCB40,1045,LPF,3Hz,0dB,fs/1,invert=0 */
	{0x1046, 0x388C8A40},	/*388C8A40,1046,LPF,0.5Hz,0dB,fs/1,invert=0 */
	{0x1047, 0x388C8A40},	/*388C8A40,1047,LPF,0.5Hz,0dB,fs/1,invert=0 */
	{0x1048, 0x3F7FF740},	/*3F7FF740,1048,LPF,0.5Hz,0dB,fs/1,invert=0 */
	{0x1049, 0x390C87C0},	/*390C87C0,1049,LPF,1Hz,0dB,fs/1,invert=0 */
	{0x104A, 0x390C87C0},	/*390C87C0,104A,LPF,1Hz,0dB,fs/1,invert=0 */
	{0x104B, 0x3F7FEE80},	/*3F7FEE80,104B,LPF,1Hz,0dB,fs/1,invert=0 */
	{0x104C, 0x398C8300},	/*398C8300,104C,LPF,2Hz,0dB,fs/1,invert=0 */
	{0x104D, 0x398C8300},	/*398C8300,104D,LPF,2Hz,0dB,fs/1,invert=0 */
	{0x104E, 0x3F7FDCC0},	/*3F7FDCC0,104E,LPF,2Hz,0dB,fs/1,invert=0 */
	{0x1053, 0x3F800000},	/*3F800000,1053,Through,0dB,fs/1,invert=0 */
	{0x1054, 0x00000000},	/*00000000,1054,Through,0dB,fs/1,invert=0 */
	{0x1055, 0x00000000},	/*00000000,1055,Through,0dB,fs/1,invert=0 */
	{0x1056, 0x3F800000},	/*3F800000,1056,Through,0dB,fs/1,invert=0 */
	{0x1057, 0x00000000},	/*00000000,1057,Through,0dB,fs/1,invert=0 */
	{0x1058, 0x00000000},	/*00000000,1058,Through,0dB,fs/1,invert=0 */
	{0x1059, 0x3F800000},	/*3F800000,1059,Through,0dB,fs/1,invert=0 */
	{0x105A, 0x00000000},	/*00000000,105A,Through,0dB,fs/1,invert=0 */
	{0x105B, 0x00000000},	/*00000000,105B,Through,0dB,fs/1,invert=0 */
	{0x105C, 0x3F800000},	/*3F800000,105C,Through,0dB,fs/1,invert=0 */
	{0x105D, 0x00000000},	/*00000000,105D,Through,0dB,fs/1,invert=0 */
	{0x105E, 0x00000000},	/*00000000,105E,Through,0dB,fs/1,invert=0 */
	{0x1063, 0x3F800000},	/*3F800000,1063,0dB,invert=0 */
	{0x1066, 0x3F800000},	/*3F800000,1066,0dB,invert=0 */
	{0x1069, 0x3F800000},	/*3F800000,1069,0dB,invert=0 */
	{0x106C, 0x3F800000},	/*3F800000,106C,0dB,invert=0 */
	{0x1073, 0x00000000},	/*00000000,1073,Cutoff,invert=0 */
	{0x1076, 0x3F800000},	/*3F800000,1076,0dB,invert=0 */
	{0x1079, 0x3F800000},	/*3F800000,1079,0dB,invert=0 */
	{0x107C, 0x3F800000},	/*3F800000,107C,0dB,invert=0 */
	{0x1083, 0x38D1B700},	/*38D1B700,1083,-80dB,invert=0 */
	{0x1086, 0x00000000},	/*00000000,1086,Cutoff,invert=0 */
	{0x1089, 0x00000000},	/*00000000,1089,Cutoff,invert=0 */
	{0x108C, 0x00000000},	/*00000000,108C,Cutoff,invert=0 */
	{0x1093, 0x00000000},	/*00000000,1093,Cutoff,invert=0 */
	{0x1098, 0x3F800000},	/*3F800000,1098,0dB,invert=0 */
	{0x1099, 0x3F800000},	/*3F800000,1099,0dB,invert=0 */
	{0x109A, 0x3F800000},	/*3F800000,109A,0dB,invert=0 */
	{0x10A1, 0x3C58B440},	/*3C58B440,10A1,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x10A2, 0x3C58B440},	/*3C58B440,10A2,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x10A3, 0x3F793A40},	/*3F793A40,10A3,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x10A4, 0x3C58B440},	/*3C58B440,10A4,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x10A5, 0x3C58B440},	/*3C58B440,10A5,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x10A6, 0x3F793A40},	/*3F793A40,10A6,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x10A7, 0x3F800000},	/*3F800000,10A7,Through,0dB,fs/1,invert=0 */
	{0x10A8, 0x00000000},	/*00000000,10A8,Through,0dB,fs/1,invert=0 */
	{0x10A9, 0x00000000},	/*00000000,10A9,Through,0dB,fs/1,invert=0 */
	{0x10AA, 0x00000000},	/*00000000,10AA,Cutoff,invert=0 */
	{0x10AB, 0x3BDA2580},	/*3BDA2580,10AB,LPF,50Hz,0dB,fs/1,invert=0 */
	{0x10AC, 0x3BDA2580},	/*3BDA2580,10AC,LPF,50Hz,0dB,fs/1,invert=0 */
	{0x10AD, 0x3F7C9780},	/*3F7C9780,10AD,LPF,50Hz,0dB,fs/1,invert=0 */
	{0x10B0, 0x3DD17800},	/*3DD17800,10B0,LPF,850Hz,0dB,fs/1,invert=0 */
	{0x10B1, 0x3DD17800},	/*3DD17800,10B1,LPF,850Hz,0dB,fs/1,invert=0 */
	{0x10B2, 0x3F4BA200},	/*3F4BA200,10B2,LPF,850Hz,0dB,fs/1,invert=0 */
	{0x10B3, 0x3F800000},	/*3F800000,10B3,0dB,invert=0 */
	{0x10B4, 0x00000000},	/*00000000,10B4,Cutoff,invert=0 */
	{0x10B5, 0x00000000},	/*00000000,10B5,Cutoff,invert=0 */
	{0x10B6, 0x3F353C00},	/*3F353C00,10B6,-3dB,invert=0 */
	{0x10B8, 0x3F800000},	/*3F800000,10B8,0dB,invert=0 */
	{0x10B9, 0x00000000},	/*00000000,10B9,Cutoff,invert=0 */
	{0x10C0, 0x3F915680},	/*3F915680,10C0,HBF,80Hz,900Hz,2dB,fs/1,invert=0 */
	{0x10C1, 0xBF8E4100},	/*BF8E4100,10C1,HBF,80Hz,900Hz,2dB,fs/1,invert=0 */
	{0x10C2, 0x3F48E240},	/*3F48E240,10C2,HBF,80Hz,900Hz,2dB,fs/1,invert=0 */
	{0x10C3, 0x3FA04B40},	/*3FA04B40,10C3,HBF,100Hz,140Hz,2dB,fs/1,invert=0 */
	{0x10C4, 0xBF9C0DC0},	/*BF9C0DC0,10C4,HBF,100Hz,140Hz,2dB,fs/1,invert=0 */
	{0x10C5, 0x3F7691C0},	/*3F7691C0,10C5,HBF,100Hz,140Hz,2dB,fs/1,invert=0 */
	{0x10C6, 0x3D506F00},	/*3D506F00,10C6,LPF,400Hz,0dB,fs/1,invert=0 */
	{0x10C7, 0x3D506F00},	/*3D506F00,10C7,LPF,400Hz,0dB,fs/1,invert=0 */
	{0x10C8, 0x3F65F240},	/*3F65F240,10C8,LPF,400Hz,0dB,fs/1,invert=0 */
	{0x10C9, 0x3C208400},	/*3C208400,10C9,LPF,1.3Hz,35dB,fs/1,invert=0 */
	{0x10CA, 0x3C208400},	/*3C208400,10CA,LPF,1.3Hz,35dB,fs/1,invert=0 */
	{0x10CB, 0x3F7FE940},	/*3F7FE940,10CB,LPF,1.3Hz,35dB,fs/1,invert=0 */
	{0x10CC, 0x3E196280},	/*3E196280,10CC,LBF,15Hz,40Hz,-8dB,fs/1,invert=0 */
	{0x10CD, 0xBE17BF80},	/*BE17BF80,10CD,LBF,15Hz,40Hz,-8dB,fs/1,invert=0 */
	{0x10CE, 0x3F7EF900},	/*3F7EF900,10CE,LBF,15Hz,40Hz,-8dB,fs/1,invert=0 */
	{0x10D0, 0x3FFF64C0},	/*3FFF64C0,10D0,6dB,invert=0 */
	{0x10D1, 0x00000000},	/*00000000,10D1,Cutoff,invert=0 */
	{0x10D2, 0x3F800000},	/*3F800000,10D2,0dB,invert=0 */
	{0x10D3, 0x3F800000},	/*3F800000,10D3,0dB,invert=0 */
	{0x10D4, 0x3F800000},	/*3F800000,10D4,0dB,invert=0 */
	{0x10D5, 0x3F800000},	/*3F800000,10D5,0dB,invert=0 */
	{0x10D7, 0x41618840},	/*41618840,10D7,LPF,6000Hz,30dB,fs/1,invert=0 */
	{0x10D8, 0x41618840},	/*41618840,10D8,LPF,6000Hz,30dB,fs/1,invert=0 */
	{0x10D9, 0x3DDE3840},	/*3DDE3840,10D9,LPF,6000Hz,30dB,fs/1,invert=0 */
	{0x10DA, 0x3F672280},	/*3F672280,10DA,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x10DB, 0xBFD3E1C0},	/*BFD3E1C0,10DB,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x10DC, 0x3FD3E1C0},	/*3FD3E1C0,10DC,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x10DD, 0x3F5022C0},	/*3F5022C0,10DD,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x10DE, 0xBF374540},	/*BF374540,10DE,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x10E0, 0x3F800000},	/*3F800000,10E0,Through,0dB,fs/1,invert=0 */
	{0x10E1, 0x00000000},	/*00000000,10E1,Through,0dB,fs/1,invert=0 */
	{0x10E2, 0x00000000},	/*00000000,10E2,Through,0dB,fs/1,invert=0 */
	{0x10E3, 0x00000000},	/*00000000,10E3,Through,0dB,fs/1,invert=0 */
	{0x10E4, 0x00000000},	/*00000000,10E4,Through,0dB,fs/1,invert=0 */
	{0x10E5, 0x3F800000},	/*3F800000,10E5,0dB,invert=0 */
	{0x10E8, 0x3F800000},	/*3F800000,10E8,0dB,invert=0 */
	{0x10E9, 0x00000000},	/*00000000,10E9,Cutoff,invert=0 */
	{0x10EA, 0x00000000},	/*00000000,10EA,Cutoff,invert=0 */
	{0x10EB, 0x00000000},	/*00000000,10EB,Cutoff,invert=0 */
	{0x10F0, 0x3F800000},	/*3F800000,10F0,Through,0dB,fs/1,invert=0 */
	{0x10F1, 0x00000000},	/*00000000,10F1,Through,0dB,fs/1,invert=0 */
	{0x10F2, 0x00000000},	/*00000000,10F2,Through,0dB,fs/1,invert=0 */
	{0x10F3, 0x00000000},	/*00000000,10F3,Through,0dB,fs/1,invert=0 */
	{0x10F4, 0x00000000},	/*00000000,10F4,Through,0dB,fs/1,invert=0 */
	{0x10F5, 0x3F800000},	/*3F800000,10F5,Through,0dB,fs/1,invert=0 */
	{0x10F6, 0x00000000},	/*00000000,10F6,Through,0dB,fs/1,invert=0 */
	{0x10F7, 0x00000000},	/*00000000,10F7,Through,0dB,fs/1,invert=0 */
	{0x10F8, 0x00000000},	/*00000000,10F8,Through,0dB,fs/1,invert=0 */
	{0x10F9, 0x00000000},	/*00000000,10F9,Through,0dB,fs/1,invert=0 */
	{0x1100, 0x3F800000},	/*3F800000,1100,0dB,invert=0 */
	{0x1101, 0x3F800000},	/*3F800000,1101,0dB,invert=0 */
	{0x1102, 0x00000000},	/*00000000,1102,Cutoff,invert=0 */
	{0x1103, 0x3F800000},	/*3F800000,1103,0dB,invert=0 */
	{0x1104, 0x3828A700},	/*3828A700,1104,LPF,0.3Hz,0dB,fs/1,invert=0 */
	{0x1105, 0x3828A700},	/*3828A700,1105,LPF,0.3Hz,0dB,fs/1,invert=0 */
	{0x1106, 0x3F7FFAC0},	/*3F7FFAC0,1106,LPF,0.3Hz,0dB,fs/1,invert=0 */
	{0x1107, 0x3F800000},	/*3F800000,1107,0dB,invert=0 */
	{0x1108, 0xBF800000},	/*BF800000,1108,0dB,invert=1 */
	{0x1109, 0x3F800000},	/*3F800000,1109,0dB,invert=0 */
	{0x110A, 0x3F800000},	/*3F800000,110A,0dB,invert=0 */
	{0x110B, 0x3F800000},	/*3F800000,110B,0dB,invert=0 */
	{0x110C, 0x3F800000},	/*3F800000,110C,0dB,invert=0 */
	{0x110E, 0x3F800000},	/*3F800000,110E,0dB,invert=0 */
	{0x1110, 0x3DA2AD80},	/*3DA2AD80,1110 */
	{0x1111, 0x00000000},	/*00000000,1111,Free,fs/1,invert=0 */
	{0x1112, 0x3F7FFE00},	/*3F7FFE00,1112,Free,fs/1,invert=0 */
	{0x1113, 0x3FB26DC0},	/*3FB26DC0,1113,HBF,50Hz,150Hz,3dB,fs/1,invert=0 */
	{0x1114, 0xBFB00DC0},	/*BFB00DC0,1114,HBF,50Hz,150Hz,3dB,fs/1,invert=0 */
	{0x1115, 0x3F75E8C0},	/*3F75E8C0,1115,HBF,50Hz,150Hz,3dB,fs/1,invert=0 */
	{0x1116, 0x3F1B2780},	/*3F1B2780,1116,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0 */
	{0x1117, 0xBF1B2400},	/*BF1B2400,1117,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0 */
	{0x1118, 0x3F7FFC80},	/*3F7FFC80,1118,LBF,0.2Hz,0.33Hz,0dB,fs/1,invert=0 */
	{0x1119, 0x3F800000},	/*3F800000,1119,Through,0dB,fs/1,invert=0 */
	{0x111A, 0x00000000},	/*00000000,111A,Through,0dB,fs/1,invert=0 */
	{0x111B, 0x00000000},	/*00000000,111B,Through,0dB,fs/1,invert=0 */
	{0x111C, 0x3F800000},	/*3F800000,111C,0dB,invert=0 */
	{0x111D, 0x00000000},	/*00000000,111D,Cutoff,invert=0 */
	{0x111E, 0x3F800000},	/*3F800000,111E,0dB,invert=0 */
	{0x1120, 0x3F800000},	/*3F800000,1120,0dB,invert=0 */
	{0x1121, 0x3F800000},	/*3F800000,1121,0dB,invert=0 */
	{0x1122, 0x3F800000},	/*3F800000,1122,0dB,invert=0 */
	{0x1123, 0x3F800000},	/*3F800000,1123,Through,0dB,fs/1,invert=0 */
	{0x1124, 0x00000000},	/*00000000,1124,Through,0dB,fs/1,invert=0 */
	{0x1125, 0x00000000},	/*00000000,1125,Through,0dB,fs/1,invert=0 */
	{0x1126, 0x00000000},	/*00000000,1126,Through,0dB,fs/1,invert=0 */
	{0x1127, 0x00000000},	/*00000000,1127,Through,0dB,fs/1,invert=0 */
	{0x1130, 0x3F800000},	/*3F800000,1130,Through,0dB,fs/1,invert=0 */
	{0x1131, 0x00000000},	/*00000000,1131,Through,0dB,fs/1,invert=0 */
	{0x1132, 0x00000000},	/*00000000,1132,Through,0dB,fs/1,invert=0 */
	{0x1133, 0x3F800000},	/*3F800000,1133,Through,0dB,fs/1,invert=0 */
	{0x1134, 0x00000000},	/*00000000,1134,Through,0dB,fs/1,invert=0 */
	{0x1135, 0x00000000},	/*00000000,1135,Through,0dB,fs/1,invert=0 */
	{0x1136, 0x3F800000},	/*3F800000,1136,Through,0dB,fs/1,invert=0 */
	{0x1137, 0x00000000},	/*00000000,1137,Through,0dB,fs/1,invert=0 */
	{0x1138, 0x00000000},	/*00000000,1138,Through,0dB,fs/1,invert=0 */
	{0x1139, 0x3F800000},	/*3F800000,1139,Through,0dB,fs/1,invert=0 */
	{0x113A, 0x00000000},	/*00000000,113A,Through,0dB,fs/1,invert=0 */
	{0x113B, 0x00000000},	/*00000000,113B,Through,0dB,fs/1,invert=0 */
	{0x113C, 0x3F800000},	/*3F800000,113C,Through,0dB,fs/1,invert=0 */
	{0x113D, 0x00000000},	/*00000000,113D,Through,0dB,fs/1,invert=0 */
	{0x113E, 0x00000000},	/*00000000,113E,Through,0dB,fs/1,invert=0 */
	{0x1143, 0x39D2BD40},	/*39D2BD40,1143,LPF,3Hz,0dB,fs/1,invert=0 */
	{0x1144, 0x39D2BD40},	/*39D2BD40,1144,LPF,3Hz,0dB,fs/1,invert=0 */
	{0x1145, 0x3F7FCB40},	/*3F7FCB40,1145,LPF,3Hz,0dB,fs/1,invert=0 */
	{0x1146, 0x388C8A40},	/*388C8A40,1146,LPF,0.5Hz,0dB,fs/1,invert=0 */
	{0x1147, 0x388C8A40},	/*388C8A40,1147,LPF,0.5Hz,0dB,fs/1,invert=0 */
	{0x1148, 0x3F7FF740},	/*3F7FF740,1148,LPF,0.5Hz,0dB,fs/1,invert=0 */
	{0x1149, 0x390C87C0},	/*390C87C0,1149,LPF,1Hz,0dB,fs/1,invert=0 */
	{0x114A, 0x390C87C0},	/*390C87C0,114A,LPF,1Hz,0dB,fs/1,invert=0 */
	{0x114B, 0x3F7FEE80},	/*3F7FEE80,114B,LPF,1Hz,0dB,fs/1,invert=0 */
	{0x114C, 0x398C8300},	/*398C8300,114C,LPF,2Hz,0dB,fs/1,invert=0 */
	{0x114D, 0x398C8300},	/*398C8300,114D,LPF,2Hz,0dB,fs/1,invert=0 */
	{0x114E, 0x3F7FDCC0},	/*3F7FDCC0,114E,LPF,2Hz,0dB,fs/1,invert=0 */
	{0x1153, 0x3F800000},	/*3F800000,1153,Through,0dB,fs/1,invert=0 */
	{0x1154, 0x00000000},	/*00000000,1154,Through,0dB,fs/1,invert=0 */
	{0x1155, 0x00000000},	/*00000000,1155,Through,0dB,fs/1,invert=0 */
	{0x1156, 0x3F800000},	/*3F800000,1156,Through,0dB,fs/1,invert=0 */
	{0x1157, 0x00000000},	/*00000000,1157,Through,0dB,fs/1,invert=0 */
	{0x1158, 0x00000000},	/*00000000,1158,Through,0dB,fs/1,invert=0 */
	{0x1159, 0x3F800000},	/*3F800000,1159,Through,0dB,fs/1,invert=0 */
	{0x115A, 0x00000000},	/*00000000,115A,Through,0dB,fs/1,invert=0 */
	{0x115B, 0x00000000},	/*00000000,115B,Through,0dB,fs/1,invert=0 */
	{0x115C, 0x3F800000},	/*3F800000,115C,Through,0dB,fs/1,invert=0 */
	{0x115D, 0x00000000},	/*00000000,115D,Through,0dB,fs/1,invert=0 */
	{0x115E, 0x00000000},	/*00000000,115E,Through,0dB,fs/1,invert=0 */
	{0x1163, 0x3F800000},	/*3F800000,1163,0dB,invert=0 */
	{0x1166, 0x3F800000},	/*3F800000,1166,0dB,invert=0 */
	{0x1169, 0x3F800000},	/*3F800000,1169,0dB,invert=0 */
	{0x116C, 0x3F800000},	/*3F800000,116C,0dB,invert=0 */
	{0x1173, 0x00000000},	/*00000000,1173,Cutoff,invert=0 */
	{0x1176, 0x3F800000},	/*3F800000,1176,0dB,invert=0 */
	{0x1179, 0x3F800000},	/*3F800000,1179,0dB,invert=0 */
	{0x117C, 0x3F800000},	/*3F800000,117C,0dB,invert=0 */
	{0x1183, 0x38D1B700},	/*38D1B700,1183,-80dB,invert=0 */
	{0x1186, 0x00000000},	/*00000000,1186,Cutoff,invert=0 */
	{0x1189, 0x00000000},	/*00000000,1189,Cutoff,invert=0 */
	{0x118C, 0x00000000},	/*00000000,118C,Cutoff,invert=0 */
	{0x1193, 0x00000000},	/*00000000,1193,Cutoff,invert=0 */
	{0x1198, 0x3F800000},	/*3F800000,1198,0dB,invert=0 */
	{0x1199, 0x3F800000},	/*3F800000,1199,0dB,invert=0 */
	{0x119A, 0x3F800000},	/*3F800000,119A,0dB,invert=0 */
	{0x11A1, 0x3C58B440},	/*3C58B440,11A1,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x11A2, 0x3C58B440},	/*3C58B440,11A2,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x11A3, 0x3F793A40},	/*3F793A40,11A3,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x11A4, 0x3C58B440},	/*3C58B440,11A4,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x11A5, 0x3C58B440},	/*3C58B440,11A5,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x11A6, 0x3F793A40},	/*3F793A40,11A6,LPF,100Hz,0dB,fs/1,invert=0 */
	{0x11A7, 0x3F800000},	/*3F800000,11A7,Through,0dB,fs/1,invert=0 */
	{0x11A8, 0x00000000},	/*00000000,11A8,Through,0dB,fs/1,invert=0 */
	{0x11A9, 0x00000000},	/*00000000,11A9,Through,0dB,fs/1,invert=0 */
	{0x11AA, 0x00000000},	/*00000000,11AA,Cutoff,invert=0 */
	{0x11AB, 0x3BDA2580},	/*3BDA2580,11AB,LPF,50Hz,0dB,fs/1,invert=0 */
	{0x11AC, 0x3BDA2580},	/*3BDA2580,11AC,LPF,50Hz,0dB,fs/1,invert=0 */
	{0x11AD, 0x3F7C9780},	/*3F7C9780,11AD,LPF,50Hz,0dB,fs/1,invert=0 */
	{0x11B0, 0x3DD17800},	/*3DD17800,11B0,LPF,850Hz,0dB,fs/1,invert=0 */
	{0x11B1, 0x3DD17800},	/*3DD17800,11B1,LPF,850Hz,0dB,fs/1,invert=0 */
	{0x11B2, 0x3F4BA200},	/*3F4BA200,11B2,LPF,850Hz,0dB,fs/1,invert=0 */
	{0x11B3, 0x3F800000},	/*3F800000,11B3,0dB,invert=0 */
	{0x11B4, 0x00000000},	/*00000000,11B4,Cutoff,invert=0 */
	{0x11B5, 0x00000000},	/*00000000,11B5,Cutoff,invert=0 */
	{0x11B6, 0x3F353C00},	/*3F353C00,11B6,-3dB,invert=0 */
	{0x11B8, 0x3F800000},	/*3F800000,11B8,0dB,invert=0 */
	{0x11B9, 0x00000000},	/*00000000,11B9,Cutoff,invert=0 */
	{0x11C0, 0x3F915680},	/*3F915680,11C0,HBF,80Hz,900Hz,2dB,fs/1,invert=0 */
	{0x11C1, 0xBF8E4100},	/*BF8E4100,11C1,HBF,80Hz,900Hz,2dB,fs/1,invert=0 */
	{0x11C2, 0x3F48E240},	/*3F48E240,11C2,HBF,80Hz,900Hz,2dB,fs/1,invert=0 */
	{0x11C3, 0x3FA04B40},	/*3FA04B40,11C3,HBF,100Hz,140Hz,2dB,fs/1,invert=0 */
	{0x11C4, 0xBF9C0DC0},	/*BF9C0DC0,11C4,HBF,100Hz,140Hz,2dB,fs/1,invert=0 */
	{0x11C5, 0x3F7691C0},	/*3F7691C0,11C5,HBF,100Hz,140Hz,2dB,fs/1,invert=0 */
	{0x11C6, 0x3D506F00},	/*3D506F00,11C6,LPF,400Hz,0dB,fs/1,invert=0 */
	{0x11C7, 0x3D506F00},	/*3D506F00,11C7,LPF,400Hz,0dB,fs/1,invert=0 */
	{0x11C8, 0x3F65F240},	/*3F65F240,11C8,LPF,400Hz,0dB,fs/1,invert=0 */
	{0x11C9, 0x3C208400},	/*3C208400,11C9,LPF,1.3Hz,35dB,fs/1,invert=0 */
	{0x11CA, 0x3C208400},	/*3C208400,11CA,LPF,1.3Hz,35dB,fs/1,invert=0 */
	{0x11CB, 0x3F7FE940},	/*3F7FE940,11CB,LPF,1.3Hz,35dB,fs/1,invert=0 */
	{0x11CC, 0x3E196280},	/*3E196280,11CC,LBF,15Hz,40Hz,-8dB,fs/1,invert=0 */
	{0x11CD, 0xBE17BF80},	/*BE17BF80,11CD,LBF,15Hz,40Hz,-8dB,fs/1,invert=0 */
	{0x11CE, 0x3F7EF900},	/*3F7EF900,11CE,LBF,15Hz,40Hz,-8dB,fs/1,invert=0 */
	{0x11D0, 0x3FFF64C0},	/*3FFF64C0,11D0,6dB,invert=0 */
	{0x11D1, 0x00000000},	/*00000000,11D1,Cutoff,invert=0 */
	{0x11D2, 0x3F800000},	/*3F800000,11D2,0dB,invert=0 */
	{0x11D3, 0x3F800000},	/*3F800000,11D3,0dB,invert=0 */
	{0x11D4, 0x3F800000},	/*3F800000,11D4,0dB,invert=0 */
	{0x11D5, 0x3F800000},	/*3F800000,11D5,0dB,invert=0 */
	{0x11D7, 0x41618840},	/*41618840,11D7,LPF,6000Hz,30dB,fs/1,invert=0 */
	{0x11D8, 0x41618840},	/*41618840,11D8,LPF,6000Hz,30dB,fs/1,invert=0 */
	{0x11D9, 0x3DDE3840},	/*3DDE3840,11D9,LPF,6000Hz,30dB,fs/1,invert=0 */
	{0x11DA, 0x3F672280},	/*3F672280,11DA,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x11DB, 0xBFD3E1C0},	/*BFD3E1C0,11DB,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x11DC, 0x3FD3E1C0},	/*3FD3E1C0,11DC,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x11DD, 0x3F5022C0},	/*3F5022C0,11DD,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x11DE, 0xBF374540},	/*BF374540,11DE,PKF,1000Hz,-10dB,3,fs/1,invert=0 */
	{0x11E0, 0x3F800000},	/*3F800000,11E0,Through,0dB,fs/1,invert=0 */
	{0x11E1, 0x00000000},	/*00000000,11E1,Through,0dB,fs/1,invert=0 */
	{0x11E2, 0x00000000},	/*00000000,11E2,Through,0dB,fs/1,invert=0 */
	{0x11E3, 0x00000000},	/*00000000,11E3,Through,0dB,fs/1,invert=0 */
	{0x11E4, 0x00000000},	/*00000000,11E4,Through,0dB,fs/1,invert=0 */
	{0x11E5, 0x3F800000},	/*3F800000,11E5,0dB,invert=0 */
	{0x11E8, 0x3F800000},	/*3F800000,11E8,0dB,invert=0 */
	{0x11E9, 0x00000000},	/*00000000,11E9,Cutoff,invert=0 */
	{0x11EA, 0x00000000},	/*00000000,11EA,Cutoff,invert=0 */
	{0x11EB, 0x00000000},	/*00000000,11EB,Cutoff,invert=0 */
	{0x11F0, 0x3F800000},	/*3F800000,11F0,Through,0dB,fs/1,invert=0 */
	{0x11F1, 0x00000000},	/*00000000,11F1,Through,0dB,fs/1,invert=0 */
	{0x11F2, 0x00000000},	/*00000000,11F2,Through,0dB,fs/1,invert=0 */
	{0x11F3, 0x00000000},	/*00000000,11F3,Through,0dB,fs/1,invert=0 */
	{0x11F4, 0x00000000},	/*00000000,11F4,Through,0dB,fs/1,invert=0 */
	{0x11F5, 0x3F800000},	/*3F800000,11F5,Through,0dB,fs/1,invert=0 */
	{0x11F6, 0x00000000},	/*00000000,11F6,Through,0dB,fs/1,invert=0 */
	{0x11F7, 0x00000000},	/*00000000,11F7,Through,0dB,fs/1,invert=0 */
	{0x11F8, 0x00000000},	/*00000000,11F8,Through,0dB,fs/1,invert=0 */
	{0x11F9, 0x00000000},	/*00000000,11F9,Through,0dB,fs/1,invert=0 */
	{0x1200, 0x00000000},	/*00000000,1200,Cutoff,invert=0 */
	{0x1201, 0x3F800000},	/*3F800000,1201,0dB,invert=0 */
	{0x1202, 0x3F800000},	/*3F800000,1202,0dB,invert=0 */
	{0x1203, 0x3F800000},	/*3F800000,1203,0dB,invert=0 */
	{0x1204, 0x3F800000},	/*3F800000,1204,Through,0dB,fs/1,invert=0 */
	{0x1205, 0x00000000},	/*00000000,1205,Through,0dB,fs/1,invert=0 */
	{0x1206, 0x00000000},	/*00000000,1206,Through,0dB,fs/1,invert=0 */
	{0x1207, 0x3F800000},	/*3F800000,1207,Through,0dB,fs/1,invert=0 */
	{0x1208, 0x00000000},	/*00000000,1208,Through,0dB,fs/1,invert=0 */
	{0x1209, 0x00000000},	/*00000000,1209,Through,0dB,fs/1,invert=0 */
	{0x120A, 0x3F800000},	/*3F800000,120A,Through,0dB,fs/1,invert=0 */
	{0x120B, 0x00000000},	/*00000000,120B,Through,0dB,fs/1,invert=0 */
	{0x120C, 0x00000000},	/*00000000,120C,Through,0dB,fs/1,invert=0 */
	{0x120D, 0x3F800000},	/*3F800000,120D,Through,0dB,fs/1,invert=0 */
	{0x120E, 0x00000000},	/*00000000,120E,Through,0dB,fs/1,invert=0 */
	{0x120F, 0x00000000},	/*00000000,120F,Through,0dB,fs/1,invert=0 */
	{0x1210, 0x3F800000},	/*3F800000,1210,Through,0dB,fs/1,invert=0 */
	{0x1211, 0x00000000},	/*00000000,1211,Through,0dB,fs/1,invert=0 */
	{0x1212, 0x00000000},	/*00000000,1212,Through,0dB,fs/1,invert=0 */
	{0x1213, 0x3F800000},	/*3F800000,1213,0dB,invert=0 */
	{0x1214, 0x3F800000},	/*3F800000,1214,0dB,invert=0 */
	{0x1215, 0x3F800000},	/*3F800000,1215,0dB,invert=0 */
	{0x1216, 0x3F800000},	/*3F800000,1216,0dB,invert=0 */
	{0x1217, 0x3F800000},	/*3F800000,1217,0dB,invert=0 */
	{0x1218, 0x00000000},	/*00000000,1218,Cutoff,fs/1,invert=0 */
	{0x1219, 0x00000000},	/*00000000,1219,Cutoff,fs/1,invert=0 */
	{0x121A, 0x00000000},	/*00000000,121A,Cutoff,fs/1,invert=0 */
	{0x121B, 0x00000000},	/*00000000,121B,Cutoff,fs/1,invert=0 */
	{0x121C, 0x00000000},	/*00000000,121C,Cutoff,fs/1,invert=0 */
	{0x121D, 0x3F800000},	/*3F800000,121D,0dB,invert=0 */
	{0x121E, 0x3F800000},	/*3F800000,121E,0dB,invert=0 */
	{0x121F, 0x3F800000},	/*3F800000,121F,0dB,invert=0 */
	{0x1235, 0x3F800000},	/*3F800000,1235,0dB,invert=0 */
	{0x1236, 0x3F800000},	/*3F800000,1236,0dB,invert=0 */
	{0x1237, 0x3F800000},	/*3F800000,1237,0dB,invert=0 */
	{0x1238, 0x3F800000},	/*3F800000,1238,0dB,invert=0 */
	{0xFFFF, 0xFFFFFFFF}
};
