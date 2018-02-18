#include "gp_api.h"

struct gp_ddr_cmd hero2_ddr_init_seq[] = {
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170110, 0x3F770000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170114, 0x00068300},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170090, 0x00204830},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170094, 0x00204830},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170158, 0x00007EE5},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x00042175},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004008, 0x48B7B6A3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000400C, 0x01FF3472},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004010, 0x000000A3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0x000000A0},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x00000060},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x00020035},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x00000008},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0000000C},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01020000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01030000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01001520},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000010},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000008},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0000000E},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000020},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x00000004},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0x00000040},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x00000026},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0000000F},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009018, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009004, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009028, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009000, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000902C, 0x00000001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A018, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A004, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A028, 0xFFFFFFFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A000, 0x00000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000A02C, 0x00000001},
	{SEQ_DELAY},
	{SEQ_DONE},
};

struct gp_ddr_cmd hero2_alt_ddr_init_seq[] = {
	{SEQ_WRITE, 0x70170000, 0x09113000},
	{SEQ_WRITE, 0x701700E4, 0x13111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x09113001},
	{SEQ_WRITE, 0x701700E4, 0x13111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170068, 0x3},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_WRITE, 0x70170110, 0x3F770000},
	{SEQ_WRITE, 0x70170110, 0x00068300},
	{SEQ_WRITE, 0x701700DC, 0x1B111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_WRITE, 0x70170090, 0x00204830},
	{SEQ_WRITE, 0x70170094, 0x00204830},
	{SEQ_WRITE, 0x70170158, 0x00007EE5},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x00042175},
	{SEQ_WRITE, 0x60004008, 0x48B7B6A3},
	{SEQ_WRITE, 0x6000400C, 0x01FF3472},
	{SEQ_WRITE, 0x60004010, 0x000000A3},
	{SEQ_WRITE, 0x60004020, 0x00000047},
	{SEQ_WRITE, 0x60004028, 0x00000060},
	{SEQ_WRITE, 0x60004024, 0x00020035},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0C},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01020000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01030000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01001520},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x10},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x08},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0E},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x20},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x26},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x35},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0F},
	{SEQ_DELAY},
	{SEQ_DONE},
};

struct gp_ddr_cmd hero3black_ddr_init_seq[] = {
	{SEQ_WRITE, 0x70170000, 0x11111100},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x11111101},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700E4, 0x11111100},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700E4, 0x11111101},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170110, 0x3F770000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170114, 0x00068300},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B111000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170068, 0x3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170090, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170094, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F0, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F4, 0x4028},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7017023C, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170240, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170244, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170248, 0x7FE7},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170158, 0x12E50000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000402C, 0xC0000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x00084879},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004008, 0x48B836A3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000400C, 0x01FF637A},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004010, 0xA3},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004030, 0xE4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0xFF},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x60},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x0002002D},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x8},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x0C},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01020000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01030000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01010040},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x01001520},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x10},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x8},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0xE},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x20},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0x5F},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x26},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0xF},
	{SEQ_DELAY},
	{SEQ_DONE},
};

struct gp_ddr_cmd hero3plusblack_ddr_init_seq[] = {
	{SEQ_WRITE, 0x70170090, 0x242424},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170094, 0x242424},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F0, 0x242424},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F4, 0x242424},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7017023C, 0x7000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170240, 0x7000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170244, 0x7000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170248, 0x7000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170158, 0x12E50000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170220, 0x0A},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x8429B},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004008, 0x28DA6A9D},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000400C, 0x2E2A79},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004010, 0x51},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004030, 0xE4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0xA0},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x60},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x20035},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x13F0001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x1010082},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x1020006},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x6},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x42},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170220, 0x0A},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x8},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x46},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x6},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x20},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x4},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0x40},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x26},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x35},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x0},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x7},
	{SEQ_DELAY},
	{SEQ_DONE},
};

struct gp_ddr_cmd hero4_ddr_init_seq[] = {
	{SEQ_WRITE, 0x701702B0, 0x14100000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1	  },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701702B0, 0x14100001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701702B0, 0x14100011},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701702B0, 0x14100001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701702B8, 0x3F710000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6001B018, 0x5DC0    },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x8100000 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x8100001 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x8100011 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170000, 0x8100001 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170118, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170068, 0x3       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7000902C, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70009028, 0x20      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B100000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170110, 0x3F710000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170114, 0x68300   },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B100001},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700DC, 0x1B100000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170090, 0x202020  },	/* Tried these first */
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170094, 0x202020  },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F0, 0x202020  },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x701700F4, 0x202020  },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x7017023C, 0x8009       },		/* Try these next. If things break, back these out. */
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170240, 0x8009       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170244, 0x8009       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170248, 0x8009       },	
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170158, 0x12E50000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170068, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170068, 0x2       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170220, 0x10A     },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000402C, 0xC0000000},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004004, 0x8009B   },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004008, 0x28DA6A9D},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x6000400C, 0x002E2A79},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004010, 0x51      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004030, 0xE4      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0xA0      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x60      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004024, 0x3F060031},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x4       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x13F0001 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x10100C3 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x1020006 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x1030003 },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x6       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x42      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170220, 0x0A      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x8       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x46      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x6       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x20      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004014, 0x4       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004020, 0xFAA340F0},
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004028, 0x26      },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004018, 0x0       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x60004000, 0x7       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x1       },
	{SEQ_DELAY},
	{SEQ_WRITE, 0x70170258, 0x0       },
	{SEQ_DONE},
};


struct gp_ddr_cmd hero5_ddr_init_seq[] = {
	{SEQ_WRITE, 0x70170258 , 0x1         },
	{SEQ_WRITE, 0x70170258 , 0x0         },
	{SEQ_WRITE, 0x701700DC , 0x31100000  },
	{SEQ_WRITE, 0x70170110 , 0x3F710000  },
	{SEQ_WRITE, 0x70170114 , 0x68302     },
	{SEQ_WRITE, 0x701700DC , 0x31100001  },
	{SEQ_WRITE, 0x701700DC , 0x31100000  },
	{SEQ_WRITE, 0x70170000 , 0x1F100000  },
	{SEQ_WRITE, 0x70170100 , 0x3F770000  },
	{SEQ_WRITE, 0x70170104 , 0x68300     },
	{SEQ_WRITE, 0x70170118 , 0x2         },
	{SEQ_WRITE, 0x70170000 , 0x1F100001  },
	{SEQ_WRITE, 0x70170000 , 0x1F100000  },
	{SEQ_WRITE, 0x701702B0 , 0x20100000  },
	{SEQ_WRITE, 0x701702B8 , 0x3F770000  },
	{SEQ_WRITE, 0x701702BC , 0x68300     },
	{SEQ_WRITE, 0x701702B0 , 0x20100001  },
	{SEQ_WRITE, 0x701702B0 , 0x20100000  },
	{SEQ_WRITE, 0x70170090 , 0x2D0C31    },
	{SEQ_WRITE, 0x70170094 , 0x2D0C31    },
	{SEQ_WRITE, 0x701700F0 , 0x2D0C31    },
	{SEQ_WRITE, 0x701700F4 , 0x2D0C31    },
	{SEQ_WRITE, 0x7017023C , 0x8001      },
	{SEQ_WRITE, 0x70170240 , 0x8001      },
	{SEQ_WRITE, 0x70170244 , 0x8001      },
	{SEQ_WRITE, 0x70170248 , 0x8001      },
	{SEQ_WRITE, 0x70170158 , 0x12F10000  },
//	{SEQ_WRITE, 0x70170068 , 0x3         },
	{SEQ_WRITE, 0xDFFE082C , 0x100       },
	{SEQ_WRITE, 0xDFFE0814 , 0x8         },
	{SEQ_WRITE, 0xDFFE0804 , 0x602620B8  },
	{SEQ_WRITE, 0xDFFE0808 , 0x831265AA  },
	{SEQ_WRITE, 0xDFFE080C , 0x6210FCEB  },
	{SEQ_WRITE, 0xDFFE0810 , 0x60000091  },
	{SEQ_WRITE, 0xDFFE0830 , 0xE4        },
	{SEQ_WRITE, 0xDFFE083C , 0x3204      },
	{SEQ_WRITE, 0xDFFE0820 , 0xA1        },
	{SEQ_WRITE, 0xDFFE0828 , 0x60        },
	{SEQ_WRITE, 0xDFFE0824 , 0x20035     },
	{SEQ_WRITE, 0xDFFE0844 , 0x15C0600   },
	{SEQ_WRITE, 0xDFFE0838 , 0x320       },
	{SEQ_WRITE, 0x7000D0C0 , 0x1         },
	{SEQ_WRITE, 0x7000D030 , 0x0         },
	{SEQ_WRITE, 0x7000D02C , 0x0         },
	{SEQ_WRITE, 0x7000D020 , 0x20        },
	{SEQ_WRITE, 0x7000D024 , 0x20        },
	{SEQ_WRITE, 0x7000D028 , 0x20        },
	{SEQ_WRITE, 0x7000D0D0 , 0x20        },
	{SEQ_WRITE, 0x7000D040 , 0x1         },
	{SEQ_WRITE, 0x7000D040 , 0x0         },
	{SEQ_WRITE, 0xDFFE0800 , 0xA84       },
	{SEQ_WRITE, 0xDFFE0818 , 0x13F0000   },
	{SEQ_WRITE, 0xDFFE0818 , 0x10A00FF   },
	{SEQ_WRITE, 0xDFFE0818 , 0x1030002   },
	{SEQ_WRITE, 0xDFFE0818 , 0x1020017   },
	{SEQ_WRITE, 0xDFFE0818 , 0x1010003   },
	{SEQ_WRITE, 0xDFFE0818 , 0x10B0000   },
	{SEQ_WRITE, 0xDFFE0814 , 0x20        },
	{SEQ_WRITE, 0xDFFE0814 , 0x4         },
	{SEQ_WRITE, 0xDFFE0820 , 0xA1        },
	{SEQ_WRITE, 0xDFFE083C , 0x3204      },
	{SEQ_WRITE, 0xDFFE0800 , 0xA87       },
	{SEQ_WRITE, 0x70170258 , 0x1         },
	{SEQ_WRITE, 0x70170258 , 0x0         },
	{SEQ_WRITE, 0x6000A050 , 0x0         },
	{SEQ_WRITE, 0x60001150 , 0x0         },
	{SEQ_WRITE, 0x6000108C , 0x0         },
	{SEQ_DONE},
};
