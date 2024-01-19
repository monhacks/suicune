#include "../../constants.h"
#include "warp_connection.h"
#include "../../home/map.h"
#include "../../home/gfx.h"
#include "../../home/flag.h"
#include "../../home/window.h"
#include "../../home/clear_sprites.h"
#include "map_objects.h"
#include "../events/map_name_sign.h"
#include "map_setup.h"
#include "cmd_queue.h"
#include "../gfx/load_overworld_font.h"

void HandleNewMap(void){
    // CALL(aClearUnusedMapBuffer);
    ClearUnusedMapBuffer();
    // CALL(aResetMapBufferEventFlags);
    ResetMapBufferEventFlags_Conv();
    // CALL(aResetFlashIfOutOfCave);
    ResetFlashIfOutOfCave_Conv();
    // CALL(aGetCurrentMapSceneID);
    GetCurrentMapSceneID_Conv();
    // CALL(aResetBikeFlags);
    ResetBikeFlags_Conv();
    // LD_A(MAPCALLBACK_NEWMAP);
    // CALL(aRunMapCallback);
    RunMapCallback_Conv(MAPCALLBACK_NEWMAP);
    return HandleContinueMap();
}

void HandleContinueMap(void){
    // FARCALL(aClearCmdQueue);
    ClearCmdQueue();
    // LD_A(MAPCALLBACK_CMDQUEUE);
    // CALL(aRunMapCallback);
    RunMapCallback_Conv(MAPCALLBACK_CMDQUEUE);
    // CALL(aGetMapTimeOfDay);
    // LD_addr_A(wMapTimeOfDay);
    wram->wMapTimeOfDay = GetMapTimeOfDay_Conv();
    // RET;
}

void EnterMapConnection(void){
//  Return carry if a connection has been entered.
    LD_A_addr(wPlayerStepDirection);
    AND_A_A;  // DOWN
    JP_Z (mEnterMapConnection_south);
    CP_A(UP);
    JP_Z (mEnterMapConnection_north);
    CP_A(LEFT);
    JP_Z (mEnterMapConnection_west);
    CP_A(RIGHT);
    JP_Z (mEnterMapConnection_east);
    RET;


west:
    LD_A_addr(wWestConnectedMapGroup);
    LD_addr_A(wMapGroup);
    LD_A_addr(wWestConnectedMapNumber);
    LD_addr_A(wMapNumber);
    LD_A_addr(wWestConnectionStripXOffset);
    LD_addr_A(wXCoord);
    LD_A_addr(wWestConnectionStripYOffset);
    LD_HL(wYCoord);
    ADD_A_hl;
    LD_hl_A;
    LD_C_A;
    LD_HL(wWestConnectionWindow);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    SRL_C;
    IF_Z goto skip_to_load;
    LD_A_addr(wWestConnectedMapWidth);
    ADD_A(6);
    LD_E_A;
    LD_D(0);


loop:
    ADD_HL_DE;
    DEC_C;
    IF_NZ goto loop;


skip_to_load:
    LD_A_L;
    LD_addr_A(wOverworldMapAnchor);
    LD_A_H;
    LD_addr_A(wOverworldMapAnchor + 1);
    JP(mEnterMapConnection_done);


east:
    LD_A_addr(wEastConnectedMapGroup);
    LD_addr_A(wMapGroup);
    LD_A_addr(wEastConnectedMapNumber);
    LD_addr_A(wMapNumber);
    LD_A_addr(wEastConnectionStripXOffset);
    LD_addr_A(wXCoord);
    LD_A_addr(wEastConnectionStripYOffset);
    LD_HL(wYCoord);
    ADD_A_hl;
    LD_hl_A;
    LD_C_A;
    LD_HL(wEastConnectionWindow);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    SRL_C;
    IF_Z goto skip_to_load2;
    LD_A_addr(wEastConnectedMapWidth);
    ADD_A(6);
    LD_E_A;
    LD_D(0);


loop2:
    ADD_HL_DE;
    DEC_C;
    IF_NZ goto loop2;


skip_to_load2:
    LD_A_L;
    LD_addr_A(wOverworldMapAnchor);
    LD_A_H;
    LD_addr_A(wOverworldMapAnchor + 1);
    JP(mEnterMapConnection_done);


north:
    LD_A_addr(wNorthConnectedMapGroup);
    LD_addr_A(wMapGroup);
    LD_A_addr(wNorthConnectedMapNumber);
    LD_addr_A(wMapNumber);
    LD_A_addr(wNorthConnectionStripYOffset);
    LD_addr_A(wYCoord);
    LD_A_addr(wNorthConnectionStripXOffset);
    LD_HL(wXCoord);
    ADD_A_hl;
    LD_hl_A;
    LD_C_A;
    LD_HL(wNorthConnectionWindow);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    LD_B(0);
    SRL_C;
    ADD_HL_BC;
    LD_A_L;
    LD_addr_A(wOverworldMapAnchor);
    LD_A_H;
    LD_addr_A(wOverworldMapAnchor + 1);
    JP(mEnterMapConnection_done);


south:
    LD_A_addr(wSouthConnectedMapGroup);
    LD_addr_A(wMapGroup);
    LD_A_addr(wSouthConnectedMapNumber);
    LD_addr_A(wMapNumber);
    LD_A_addr(wSouthConnectionStripYOffset);
    LD_addr_A(wYCoord);
    LD_A_addr(wSouthConnectionStripXOffset);
    LD_HL(wXCoord);
    ADD_A_hl;
    LD_hl_A;
    LD_C_A;
    LD_HL(wSouthConnectionWindow);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    LD_B(0);
    SRL_C;
    ADD_HL_BC;
    LD_A_L;
    LD_addr_A(wOverworldMapAnchor);
    LD_A_H;
    LD_addr_A(wOverworldMapAnchor + 1);

done:
    SCF;
    RET;

}

static void EnterMapWarp_SaveDigWarp(void) {
    // CALL(aGetMapEnvironment);
    // CALL(aCheckOutdoorMap);
    // RET_NZ ;
    if(!CheckOutdoorMap_Conv(GetMapEnvironment_Conv2()))
        return;
    // LD_A_addr(wNextMapGroup);
    // LD_B_A;
    // LD_A_addr(wNextMapNumber);
    // LD_C_A;
    // CALL(aGetAnyMapEnvironment);
    // CALL(aCheckIndoorMap);
    // RET_NZ ;
    if(!CheckIndoorMap_Conv(GetAnyMapEnvironment_Conv2(wram->wNextMapGroup, wram->wNextMapNumber)))
        return;

//  MOUNT_MOON_SQUARE and TIN_TOWER_ROOF are outdoor maps within indoor maps.
//  Dig and Escape Rope should not take you to them.
    // LD_A_addr(wPrevMapGroup);
    // CP_A(GROUP_MOUNT_MOON_SQUARE);
    // IF_NZ goto not_mt_moon_square_or_tin_tower_roof;
    static_assert((int)GROUP_MOUNT_MOON_SQUARE == (int)GROUP_TIN_TOWER_ROOF);
    // LD_A_addr(wPrevMapNumber);
    // CP_A(MAP_MOUNT_MOON_SQUARE);
    // RET_Z ;
    // CP_A(MAP_TIN_TOWER_ROOF);
    // RET_Z ;
    if(wram->wPrevMapGroup == GROUP_MOUNT_MOON_SQUARE
    && (wram->wPrevMapNumber == MAP_MOUNT_MOON_SQUARE || wram->wPrevMapNumber == MAP_TIN_TOWER_ROOF))
        return;

// not_mt_moon_square_or_tin_tower_roof:

    // LD_A_addr(wPrevWarp);
    // LD_addr_A(wDigWarpNumber);
    wram->wDigWarpNumber = wram->wPrevWarp;
    // LD_A_addr(wPrevMapGroup);
    // LD_addr_A(wDigMapGroup);
    wram->wDigMapGroup = wram->wPrevMapGroup;
    // LD_A_addr(wPrevMapNumber);
    // LD_addr_A(wDigMapNumber);
    wram->wDigMapNumber = wram->wPrevMapNumber;
    // RET;
}

static void EnterMapWarp_SetSpawn(void) {
    // CALL(aGetMapEnvironment);
    // CALL(aCheckOutdoorMap);
    // RET_NZ ;
    if(!CheckOutdoorMap_Conv(GetMapEnvironment_Conv2()))
        return;
    // LD_A_addr(wNextMapGroup);
    // LD_B_A;
    // LD_A_addr(wNextMapNumber);
    // LD_C_A;
    // CALL(aGetAnyMapEnvironment);
    // CALL(aCheckIndoorMap);
    // RET_NZ ;
    if(!CheckIndoorMap_Conv(GetAnyMapEnvironment_Conv2(wram->wNextMapGroup, wram->wNextMapNumber)))
        return;
    // LD_A_addr(wNextMapGroup);
    // LD_B_A;
    // LD_A_addr(wNextMapNumber);
    // LD_C_A;

//  Respawn in Pokémon Centers.
    // CALL(aGetAnyMapTileset);
    uint8_t tileset = GetAnyMapTileset_Conv2(wram->wNextMapGroup, wram->wNextMapNumber);
    // LD_A_C;
    // CP_A(TILESET_POKECENTER);
    // IF_Z goto pokecenter_pokecom;
    // CP_A(TILESET_POKECOM_CENTER);
    // IF_Z goto pokecenter_pokecom;
    if(tileset == TILESET_POKECENTER || tileset == TILESET_POKECOM_CENTER) {
    // pokecenter_pokecom:
        // LD_A_addr(wPrevMapGroup);
        // LD_addr_A(wLastSpawnMapGroup);
        wram->wLastSpawnMapGroup = wram->wPrevMapGroup;
        // LD_A_addr(wPrevMapNumber);
        // LD_addr_A(wLastSpawnMapNumber);
        wram->wLastSpawnMapNumber = wram->wPrevMapNumber;
        // RET;
        return;
    }
    // RET;
}

void EnterMapWarp(void){
    // CALL(aEnterMapWarp_SaveDigWarp);
    EnterMapWarp_SaveDigWarp();
    // CALL(aEnterMapWarp_SetSpawn);
    EnterMapWarp_SetSpawn();
    // LD_A_addr(wNextWarp);
    // LD_addr_A(wWarpNumber);
    wram->wWarpNumber = wram->wNextWarp;
    // LD_A_addr(wNextMapGroup);
    // LD_addr_A(wMapGroup);
    wram->wMapGroup = wram->wNextMapGroup;
    // LD_A_addr(wNextMapNumber);
    // LD_addr_A(wMapNumber);
    wram->wMapNumber = wram->wNextMapNumber;
    // RET;
}

void LoadMapTimeOfDay(void){
    LD_HL(wVramState);
    RES_hl(6);
    LD_A(0x1);
    LD_addr_A(wSpriteUpdatesEnabled);
    FARCALL(aReplaceTimeOfDayPals);
    FARCALL(aUpdateTimeOfDayPal);
    CALL(aOverworldTextModeSwitch);
    CALL(aLoadMapTimeOfDay_ClearBGMap);
    CALL(aLoadMapTimeOfDay_PushAttrmap);
    RET;


ClearBGMap:
    LD_A(HIGH(vBGMap0));
    LD_addr_A(wBGMapAnchor + 1);
    XOR_A_A;  // LOW(vBGMap0)
    LD_addr_A(wBGMapAnchor);
    LDH_addr_A(hSCY);
    LDH_addr_A(hSCX);
    FARCALL(aApplyBGMapAnchorToObjects);

    LDH_A_addr(rVBK);
    PUSH_AF;
    LD_A(0x1);
    LDH_addr_A(rVBK);

    XOR_A_A;
    LD_BC(vBGMap1 - vBGMap0);
    hlbgcoord(0, 0, vBGMap0);
    CALL(aByteFill);

    POP_AF;
    LDH_addr_A(rVBK);

    LD_A(0x60);
    LD_BC(vBGMap1 - vBGMap0);
    hlbgcoord(0, 0, vBGMap0);
    CALL(aByteFill);
    RET;


PushAttrmap:
    decoord(0, 0, wTilemap);
    CALL(aLoadMapTimeOfDay_copy);
    LDH_A_addr(hCGB);
    AND_A_A;
    RET_Z ;

    decoord(0, 0, wAttrmap);
    LD_A(0x1);
    LDH_addr_A(rVBK);

copy:
    hlbgcoord(0, 0, vBGMap0);
    LD_C(SCREEN_WIDTH);
    LD_B(SCREEN_HEIGHT);

row:
    PUSH_BC;

column:
    LD_A_de;
    INC_DE;
    LD_hli_A;
    DEC_C;
    IF_NZ goto column;
    LD_BC(BG_MAP_WIDTH - SCREEN_WIDTH);
    ADD_HL_BC;
    POP_BC;
    DEC_B;
    IF_NZ goto row;
    LD_A(0x0);
    LDH_addr_A(rVBK);
    RET;

}

void LoadMapGraphics(void){
    // CALL(aLoadMapTileset);
    LoadMapTileset_Conv2();
    // CALL(aLoadTilesetGFX);
    LoadTilesetGFX_Conv();
    // XOR_A_A;
    // LDH_addr_A(hMapAnims);
    hram->hMapAnims = 0;
    // XOR_A_A;
    // LDH_addr_A(hTileAnimFrame);
    hram->hTileAnimFrame = 0;
    FARCALL(aRefreshSprites);
    // CALL(aLoadFontsExtra);
    LoadFontsExtra_Conv();
    // FARCALL(aLoadOverworldFont);
    LoadOverworldFont_Conv();
    // RET;
}

void LoadMapPalettes(void){
    LD_B(SCGB_MAPPALS);
    JP(mGetSGBLayout);

}

void RefreshMapSprites(void){
    // CALL(aClearSprites);
    ClearSprites_Conv();
    // FARCALL(aInitMapNameSign);
    InitMapNameSign();
    // CALL(aGetMovementPermissions);
    GetMovementPermissions();
    // FARCALL(aRefreshPlayerSprite);
    RefreshPlayerSprite();
    // FARCALL(aCheckUpdatePlayerSprite);
    CheckUpdatePlayerSprite();
    // LD_HL(wPlayerSpriteSetupFlags);
    // BIT_hl(PLAYERSPRITESETUP_SKIP_RELOAD_GFX_F);
    // IF_NZ goto skip;
    if(!bit_test(wram->wPlayerSpriteSetupFlags, PLAYERSPRITESETUP_SKIP_RELOAD_GFX_F)) {
        // LD_HL(wVramState);
        // SET_hl(0);
        bit_set(wram->wVramState, 0);
        // CALL(aSafeUpdateSprites);
        SafeUpdateSprites_Conv();
    }
// skip:
    // LD_A_addr(wPlayerSpriteSetupFlags);
    // AND_A((1 << PLAYERSPRITESETUP_FEMALE_TO_MALE_F) | (1 << 3) | (1 << 4));
    // LD_addr_A(wPlayerSpriteSetupFlags);
    wram->wPlayerSpriteSetupFlags &= (1 << PLAYERSPRITESETUP_FEMALE_TO_MALE_F) | (1 << 3) | (1 << 4);
    // RET;
}

void CheckMovingOffEdgeOfMap(void){
    LD_A_addr(wPlayerStepDirection);
    CP_A(STANDING);
    RET_Z ;
    AND_A_A;  // DOWN
    IF_Z goto down;
    CP_A(UP);
    IF_Z goto up;
    CP_A(LEFT);
    IF_Z goto left;
    CP_A(RIGHT);
    IF_Z goto right;
    AND_A_A;
    RET;


down:
    LD_A_addr(wPlayerStandingMapY);
    SUB_A(4);
    LD_B_A;
    LD_A_addr(wMapHeight);
    ADD_A_A;
    CP_A_B;
    IF_Z goto ok;
    AND_A_A;
    RET;


up:
    LD_A_addr(wPlayerStandingMapY);
    SUB_A(4);
    CP_A(-1);
    IF_Z goto ok;
    AND_A_A;
    RET;


left:
    LD_A_addr(wPlayerStandingMapX);
    SUB_A(4);
    CP_A(-1);
    IF_Z goto ok;
    AND_A_A;
    RET;


right:
    LD_A_addr(wPlayerStandingMapX);
    SUB_A(4);
    LD_B_A;
    LD_A_addr(wMapWidth);
    ADD_A_A;
    CP_A_B;
    IF_Z goto ok;
    AND_A_A;
    RET;


ok:
    SCF;
    RET;

}

bool CheckMovingOffEdgeOfMap_Conv(void){
    // LD_A_addr(wPlayerStepDirection);
    // CP_A(STANDING);
    // RET_Z ;
    if(wram->wPlayerStepDirection == (uint8_t)STANDING)
        return false;
    
    switch(wram->wPlayerStepDirection) {
        // AND_A_A;  // DOWN
        // IF_Z goto down;
        case DOWN:
        // down:
            // LD_A_addr(wPlayerStandingMapY);
            // SUB_A(4);
            // LD_B_A;
            // LD_A_addr(wMapHeight);
            // ADD_A_A;
            // CP_A_B;
            // IF_Z goto ok;
            if(wram->wPlayerStruct.nextMapY - 4 == wram->wMapHeight << 1)
                return true;
            // AND_A_A;
            // RET;
            return false;
        // CP_A(UP);
        // IF_Z goto up;
        case UP:
        // up:
            // LD_A_addr(wPlayerStandingMapY);
            // SUB_A(4);
            // CP_A(-1);
            // IF_Z goto ok;
            if(wram->wPlayerStruct.nextMapY - 4 == 0xff)
                return true;
            // AND_A_A;
            // RET;
            return false;
        // CP_A(LEFT);
        // IF_Z goto left;
        case LEFT:
        // left:
            // LD_A_addr(wPlayerStandingMapX);
            // SUB_A(4);
            // CP_A(-1);
            // IF_Z goto ok;
            if(wram->wPlayerStruct.nextMapX - 4 == 0xff)
                return true;
            // AND_A_A;
            // RET;
            return false;
        // CP_A(RIGHT);
        // IF_Z goto right;
        case RIGHT:
        // right:
            // LD_A_addr(wPlayerStandingMapX);
            // SUB_A(4);
            // LD_B_A;
            // LD_A_addr(wMapWidth);
            // ADD_A_A;
            // CP_A_B;
            // IF_Z goto ok;
            if(wram->wPlayerStruct.nextMapX - 4 == wram->wMapWidth << 1)
                return true;
            // AND_A_A;
            // RET;
            return false;
    }
    // AND_A_A;
    // RET;
    return false;


// ok:
    // SCF;
    // RET;
}

bool CheckFacingOffEdgeOfMap_Conv(void){
    // LD_A_addr(wPlayerStepDirection);
    // CP_A(STANDING);
    // RET_Z ;
    if(wram->wWalkingDirection == STANDING)
        return false;
    
    switch(wram->wWalkingDirection) {
        // AND_A_A;  // DOWN
        // IF_Z goto down;
        case DOWN:
        // down:
            // LD_A_addr(wPlayerStandingMapY);
            // SUB_A(4);
            // LD_B_A;
            // LD_A_addr(wMapHeight);
            // ADD_A_A;
            // CP_A_B;
            // IF_Z goto ok;
            if((wram->wMapConnections & SOUTH) == 0 && wram->wPlayerStruct.nextMapY - 4 == (wram->wMapHeight << 1) - 1)
                return true;
            // AND_A_A;
            // RET;
            return false;
        // CP_A(UP);
        // IF_Z goto up;
        case UP:
        // up:
            // LD_A_addr(wPlayerStandingMapY);
            // SUB_A(4);
            // CP_A(-1);
            // IF_Z goto ok;
            if((wram->wMapConnections & NORTH) == 0 && wram->wPlayerStruct.nextMapY - 4 == 0)
                return true;
            // AND_A_A;
            // RET;
            return false;
        // CP_A(LEFT);
        // IF_Z goto left;
        case LEFT:
        // left:
            // LD_A_addr(wPlayerStandingMapX);
            // SUB_A(4);
            // CP_A(-1);
            // IF_Z goto ok;
            if((wram->wMapConnections & WEST) == 0 && wram->wPlayerStruct.nextMapX - 4 == 0)
                return true;
            // AND_A_A;
            // RET;
            return false;
        // CP_A(RIGHT);
        // IF_Z goto right;
        case RIGHT:
        // right:
            // LD_A_addr(wPlayerStandingMapX);
            // SUB_A(4);
            // LD_B_A;
            // LD_A_addr(wMapWidth);
            // ADD_A_A;
            // CP_A_B;
            // IF_Z goto ok;
            if((wram->wMapConnections & EAST) == 0 && wram->wPlayerStruct.nextMapX - 4 == (wram->wMapWidth << 1) - 1)
                return true;
            // AND_A_A;
            // RET;
            return false;
    }
    // AND_A_A;
    // RET;
    return false;


// ok:
    // SCF;
    // RET;
}

void GetMapScreenCoords(void){
    // LD_HL(wOverworldMapBlocks);
    // LD_A_addr(wXCoord);
    uint8_t x = wram->wXCoord;
    // BIT_A(0);
    // IF_NZ goto odd_x;
    if(x & 1) {
    // odd_x:
        // ADD_A(1);
        // SRL_A;
        x = (x + 1) << 1;
    }
    else {
    //  even x
        // SRL_A;
        // ADD_A(1);
        // goto got_block_x;
        x = (x << 1) + 1;
    }

// got_block_x:
    // LD_C_A;
    // LD_B(0);
    // ADD_HL_BC;
    uint16_t hl = wOverworldMapBlocks + x;
    // LD_A_addr(wMapWidth);
    // ADD_A(MAP_CONNECTION_PADDING_WIDTH * 2);
    // LD_C_A;
    // LD_B(0);
    // LD_A_addr(wYCoord);
    uint8_t y = wram->wYCoord;
    // BIT_A(0);
    // IF_NZ goto odd_y;
    if(y & 1) {
    // odd_y:
        // ADD_A(1);
        // SRL_A;
        y = (y + 1) << 1;
    }
    else {
    //  even y
        // SRL_A;
        // ADD_A(1);
        // goto got_block_y;
        y = (y << 1) + 1;
    }

// got_block_y:
    // CALL(aAddNTimes);
    hl += (wram->wMapWidth + MAP_CONNECTION_PADDING_WIDTH * 2) * y;
    // LD_A_L;
    // LD_addr_A(wOverworldMapAnchor);
    // LD_A_H;
    // LD_addr_A(wOverworldMapAnchor + 1);
    wram->wOverworldMapAnchor = hl;
    // LD_A_addr(wYCoord);
    // AND_A(1);
    // LD_addr_A(wMetatileStandingY);
    wram->wMetatileStandingY = wram->wYCoord & 1;
    // LD_A_addr(wXCoord);
    // AND_A(1);
    // LD_addr_A(wMetatileStandingX);
    wram->wMetatileStandingX = wram->wXCoord & 1;
    // RET;
}
