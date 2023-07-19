#include "../../constants.h"

const uint8_t TileCollisionTable[] = {
    [COLL_FLOOR]            = LAND_TILE,
    [COLL_01]               = LAND_TILE,
    [0x02]                  = LAND_TILE,
    [COLL_03]               = LAND_TILE,
    [COLL_04]               = LAND_TILE,
    [0x05]                  = LAND_TILE,
    [0x06]                  = LAND_TILE,
    [COLL_WALL]             = WALL_TILE,
    [COLL_CUT_08]           = LAND_TILE,
    [0x09]                  = LAND_TILE,
    [0x0a]                  = LAND_TILE,
    [0x0b]                  = LAND_TILE,
    [0x0c]                  = LAND_TILE,
    [0x0d]                  = LAND_TILE,
    [0x0e]                  = LAND_TILE,
    [0x0f]                  = WALL_TILE,
    [COLL_TALL_GRASS_10]    = LAND_TILE,
    [0x11]                  = LAND_TILE,
    [COLL_CUT_TREE]         = WALL_TILE | TALK,
    [0x13]                  = LAND_TILE,
    [COLL_LONG_GRASS]       = LAND_TILE,
    [COLL_HEADBUTT_TREE]    = WALL_TILE | TALK,
    [0x16]                  = LAND_TILE,
    [0x17]                  = LAND_TILE,
    [COLL_TALL_GRASS]       = LAND_TILE,
    [0x19]                  = LAND_TILE,
    [COLL_CUT_TREE_1A]      = WALL_TILE | TALK,
    [0x1b]                  = LAND_TILE,
    [COLL_LONG_GRASS_1C]    = LAND_TILE,
    [COLL_HEADBUTT_TREE_1D] = WALL_TILE | TALK,
    [0x1e]                  = LAND_TILE,
    [0x1f]                  = LAND_TILE,
    [0x20]                  = WATER_TILE,
    [COLL_WATER_21]         = WATER_TILE,
    [0x22]                  = WATER_TILE | TALK,
    [COLL_ICE]              = LAND_TILE,
    [COLL_WHIRLPOOL]        = WATER_TILE | TALK,
    [0x25]                  = WATER_TILE,
    [0x26]                  = WATER_TILE,
    [COLL_BUOY]             = WALL_TILE,
    [COLL_CUT_28]           = WATER_TILE,
    [COLL_WATER]            = WATER_TILE,
    [0x2a]                  = WATER_TILE | TALK,
    [COLL_ICE_2B]           = LAND_TILE,
    [COLL_WHIRLPOOL_2C]     = WATER_TILE | TALK,
    [0x2d]                  = WATER_TILE,
    [0x2e]                  = WATER_TILE,
    [0x2f]                  = WALL_TILE,
    [COLL_WATERFALL_RIGHT]  = WATER_TILE,
    [COLL_WATERFALL_LEFT]   = WATER_TILE,
    [COLL_WATERFALL_UP]     = WATER_TILE,
    [COLL_WATERFALL]        = WATER_TILE,
    [0x34]                  = WATER_TILE,
    [0x35]                  = WATER_TILE,
    [0x36]                  = WATER_TILE,
    [0x37]                  = WATER_TILE,
    [COLL_CURRENT_RIGHT]    = WATER_TILE,
    [COLL_CURRENT_LEFT]     = WATER_TILE,
    [COLL_CURRENT_UP]       = WATER_TILE,
    [COLL_CURRENT_DOWN]     = WATER_TILE,
    [0x3c]                  = WATER_TILE,
    [0x3d]                  = WATER_TILE,
    [0x3e]                  = WATER_TILE,
    [0x3f]                  = WATER_TILE,
    [COLL_BRAKE]            = LAND_TILE,
    [COLL_WALK_RIGHT]       = LAND_TILE,
    [COLL_WALK_LEFT]        = LAND_TILE,
    [COLL_WALK_UP]          = LAND_TILE,
    [COLL_WALK_DOWN]        = LAND_TILE,
    [COLL_BRAKE_45]         = LAND_TILE,
    [COLL_BRAKE_46]         = LAND_TILE,
    [COLL_BRAKE_47]         = LAND_TILE,
    [COLL_GRASS_48]         = LAND_TILE,
    [COLL_GRASS_49]         = LAND_TILE,
    [COLL_GRASS_4A]         = LAND_TILE,
    [COLL_GRASS_4B]         = LAND_TILE,
    [COLL_GRASS_4C]         = LAND_TILE,
    [0x4d]                  = LAND_TILE,
    [0x4e]                  = LAND_TILE,
    [0x4f]                  = LAND_TILE,
    [COLL_WALK_RIGHT_ALT]   = LAND_TILE,
    [COLL_WALK_LEFT_ALT]    = LAND_TILE,
    [COLL_WALK_UP_ALT]      = LAND_TILE,
    [COLL_WALK_DOWN_ALT]    = LAND_TILE,
    [COLL_BRAKE_ALT]        = LAND_TILE,
    [COLL_BRAKE_55]         = LAND_TILE,
    [COLL_BRAKE_56]         = LAND_TILE,
    [COLL_BRAKE_57]         = LAND_TILE,
    [0x58]                  = LAND_TILE,
    [0x59]                  = LAND_TILE,
    [0x5a]                  = LAND_TILE,
    [COLL_5B]               = LAND_TILE,
    [0x5c]                  = LAND_TILE,
    [0x5d]                  = LAND_TILE,
    [0x5e]                  = LAND_TILE,
    [0x5f]                  = LAND_TILE,
    [COLL_PIT]              = LAND_TILE,
    [COLL_VIRTUAL_BOY]      = LAND_TILE,
    [0x62]                  = WALL_TILE,
    [0x63]                  = LAND_TILE,
    [COLL_64]               = LAND_TILE,
    [COLL_65]               = LAND_TILE,
    [0x66]                  = LAND_TILE,
    [0x67]                  = LAND_TILE,
    [COLL_PIT_68]           = LAND_TILE,
    [0x69]                  = LAND_TILE,
    [0x6a]                  = WALL_TILE,
    [0x6b]                  = LAND_TILE,
    [0x6c]                  = LAND_TILE,
    [0x6d]                  = LAND_TILE,
    [0x6e]                  = LAND_TILE,
    [0x6f]                  = LAND_TILE,
    [COLL_WARP_CARPET_DOWN] = LAND_TILE,
    [COLL_DOOR]             = LAND_TILE,
    [COLL_LADDER]           = LAND_TILE,
    [COLL_STAIRCASE_73]     = LAND_TILE,
    [COLL_CAVE_74]          = LAND_TILE,
    [COLL_DOOR_75]          = LAND_TILE,
    [COLL_WARP_CARPET_LEFT] = LAND_TILE,
    [COLL_WARP_77]          = LAND_TILE,
    [COLL_WARP_CARPET_UP]   = LAND_TILE,
    [COLL_DOOR_79]          = LAND_TILE,
    [COLL_STAIRCASE]        = LAND_TILE,
    [COLL_CAVE]             = LAND_TILE,
    [COLL_WARP_PANEL]       = LAND_TILE,
    [COLL_DOOR_7D]          = LAND_TILE,
    [COLL_WARP_CARPET_RIGHT]= LAND_TILE,
    [COLL_WARP_7F]          = LAND_TILE,
    [0x80]                  = WALL_TILE,
    [0x81]                  = WALL_TILE,
    [0x82]                  = WALL_TILE,
    [0x83]                  = WALL_TILE,
    [0x84]                  = WALL_TILE,
    [0x85]                  = LAND_TILE,
    [0x86]                  = LAND_TILE,
    [0x87]                  = LAND_TILE,
    [0x88]                  = WALL_TILE,
    [0x89]                  = WALL_TILE,
    [0x8a]                  = WALL_TILE,
    [0x8b]                  = WALL_TILE,
    [0x8c]                  = WALL_TILE,
    [0x8d]                  = LAND_TILE,
    [0x8e]                  = LAND_TILE,
    [0x8f]                  = LAND_TILE,
    [COLL_COUNTER]          = WALL_TILE,
    [COLL_BOOKSHELF]        = WALL_TILE,
    [0x92]                  = WALL_TILE,
    [COLL_PC]               = WALL_TILE,
    [COLL_RADIO]            = WALL_TILE,
    [COLL_TOWN_MAP]         = WALL_TILE,
    [COLL_MART_SHELF]       = WALL_TILE,
    [COLL_TV]               = WALL_TILE,
    [COLL_COUNTER_98]       = WALL_TILE,
    [0x99]                  = WALL_TILE,
    [0x9a]                  = WALL_TILE,
    [0x9b]                  = WALL_TILE,
    [COLL_9C]               = WALL_TILE,
    [COLL_WINDOW]           = WALL_TILE,
    [0x9e]                  = WALL_TILE,
    [COLL_INCENSE_BURNER]   = WALL_TILE,
    [COLL_HOP_RIGHT]        = LAND_TILE,
    [COLL_HOP_LEFT]         = LAND_TILE,
    [COLL_HOP_UP]           = LAND_TILE,
    [COLL_HOP_DOWN]         = LAND_TILE,
    [COLL_HOP_DOWN_RIGHT]   = LAND_TILE,
    [COLL_HOP_DOWN_LEFT]    = LAND_TILE,
    [COLL_HOP_UP_RIGHT]     = LAND_TILE,
    [COLL_HOP_UP_LEFT]      = LAND_TILE,
    [0xa8]                  = LAND_TILE,
    [0xa9]                  = LAND_TILE,
    [0xaa]                  = LAND_TILE,
    [0xab]                  = LAND_TILE,
    [0xac]                  = LAND_TILE,
    [0xad]                  = LAND_TILE,
    [0xae]                  = LAND_TILE,
    [0xaf]                  = LAND_TILE,
    [COLL_RIGHT_WALL]       = LAND_TILE,
    [COLL_LEFT_WALL]        = LAND_TILE,
    [COLL_UP_WALL]          = LAND_TILE,
    [COLL_DOWN_WALL]        = LAND_TILE,
    [COLL_DOWN_RIGHT_WALL]  = LAND_TILE,
    [COLL_DOWN_LEFT_WALL]   = LAND_TILE,
    [COLL_UP_RIGHT_WALL]    = LAND_TILE,
    [COLL_UP_LEFT_WALL]     = LAND_TILE,
    [0xb8]                  = LAND_TILE,
    [0xb9]                  = LAND_TILE,
    [0xba]                  = LAND_TILE,
    [0xbb]                  = LAND_TILE,
    [0xbc]                  = LAND_TILE,
    [0xbd]                  = LAND_TILE,
    [0xbe]                  = LAND_TILE,
    [0xbf]                  = LAND_TILE,
    [COLL_RIGHT_BUOY]       = WATER_TILE,
    [COLL_LEFT_BUOY]        = WATER_TILE,
    [COLL_UP_BUOY]          = WATER_TILE,
    [COLL_DOWN_BUOY]        = WATER_TILE,
    [COLL_DOWN_RIGHT_BUOY]  = WATER_TILE,
    [COLL_DOWN_LEFT_BUOY]   = WATER_TILE,
    [COLL_UP_RIGHT_BUOY]    = WATER_TILE,
    [COLL_UP_LEFT_BUOY]     = WATER_TILE,
    [0xc8]                  = WATER_TILE,
    [0xc9]                  = WATER_TILE,
    [0xca]                  = WATER_TILE,
    [0xcb]                  = WATER_TILE,
    [0xcc]                  = WATER_TILE,
    [0xcd]                  = WATER_TILE,
    [0xce]                  = WATER_TILE,
    [0xcf]                  = WATER_TILE,
    [0xd0]                  = LAND_TILE,
    [0xd1]                  = LAND_TILE,
    [0xd2]                  = LAND_TILE,
    [0xd3]                  = LAND_TILE,
    [0xd4]                  = LAND_TILE,
    [0xd5]                  = LAND_TILE,
    [0xd6]                  = LAND_TILE,
    [0xd7]                  = LAND_TILE,
    [0xd8]                  = LAND_TILE,
    [0xd9]                  = LAND_TILE,
    [0xda]                  = LAND_TILE,
    [0xdb]                  = LAND_TILE,
    [0xdc]                  = LAND_TILE,
    [0xdd]                  = LAND_TILE,
    [0xde]                  = LAND_TILE,
    [0xdf]                  = LAND_TILE,
    [0xe0]                  = LAND_TILE,
    [0xe1]                  = LAND_TILE,
    [0xe2]                  = LAND_TILE,
    [0xe3]                  = LAND_TILE,
    [0xe4]                  = LAND_TILE,
    [0xe5]                  = LAND_TILE,
    [0xe6]                  = LAND_TILE,
    [0xe7]                  = LAND_TILE,
    [0xe8]                  = LAND_TILE,
    [0xe9]                  = LAND_TILE,
    [0xea]                  = LAND_TILE,
    [0xeb]                  = LAND_TILE,
    [0xec]                  = LAND_TILE,
    [0xed]                  = LAND_TILE,
    [0xee]                  = LAND_TILE,
    [0xef]                  = LAND_TILE,
    [0xf0]                  = LAND_TILE,
    [0xf1]                  = LAND_TILE,
    [0xf2]                  = LAND_TILE,
    [0xf3]                  = LAND_TILE,
    [0xf4]                  = LAND_TILE,
    [0xf5]                  = LAND_TILE,
    [0xf6]                  = LAND_TILE,
    [0xf7]                  = LAND_TILE,
    [0xf8]                  = LAND_TILE,
    [0xf9]                  = LAND_TILE,
    [0xfa]                  = LAND_TILE,
    [0xfb]                  = LAND_TILE,
    [0xfc]                  = LAND_TILE,
    [0xfd]                  = LAND_TILE,
    [0xfe]                  = LAND_TILE,
    [COLL_FF]               = WALL_TILE,
};
