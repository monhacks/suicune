#include "../../constants.h"
#include "../../util/scripting.h"
#include "../../util/scripting_macros.h"
#include "events.h"
#include "../../home/map.h"
#include "player_movement.h"

// INCLUDE "constants.asm"


// SECTION "Events", ROMX

void OverworldLoop(void){
    XOR_A_A;  // MAPSTATUS_START
    LD_addr_A(wMapStatus);

loop:
    LD_A_addr(wMapStatus);
    LD_HL(mOverworldLoop_Jumptable);
    RST(aJumpTable);
    LD_A_addr(wMapStatus);
    CP_A(MAPSTATUS_DONE);
    IF_NZ goto loop;

done:
    RET;


Jumptable:
//  entries correspond to MAPSTATUS_* constants
    //dw ['StartMap'];
    //dw ['EnterMap'];
    //dw ['HandleMap'];
    //dw ['.done'];

    return DisableEvents();
}

void DisableEvents(void){
    XOR_A_A;
    LD_addr_A(wScriptFlags2);
    RET;

}

void EnableEvents(void){
    LD_A(0xff);
    LD_addr_A(wScriptFlags2);
    RET;

}

void CheckBit5_ScriptFlags2(void){
    LD_HL(wScriptFlags2);
    BIT_hl(5);
    RET;

}

void DisableWarpsConnxns(void){
//  //  unreferenced
    LD_HL(wScriptFlags2);
    RES_hl(2);
    RET;

}

void DisableCoordEvents(void){
//  //  unreferenced
    LD_HL(wScriptFlags2);
    RES_hl(1);
    RET;

}

void DisableStepCount(void){
//  //  unreferenced
    LD_HL(wScriptFlags2);
    RES_hl(0);
    RET;

}

void DisableWildEncounters(void){
//  //  unreferenced
    LD_HL(wScriptFlags2);
    RES_hl(4);
    RET;

}

void EnableWarpsConnxns(void){
//  //  unreferenced
    LD_HL(wScriptFlags2);
    SET_hl(2);
    RET;

}

void EnableCoordEvents(void){
//  //  unreferenced
    LD_HL(wScriptFlags2);
    SET_hl(1);
    RET;

}

void EnableStepCount(void){
//  //  unreferenced
    LD_HL(wScriptFlags2);
    SET_hl(0);
    RET;

}

void EnableWildEncounters(void){
    LD_HL(wScriptFlags2);
    SET_hl(4);
    RET;

}

void CheckWarpConnxnScriptFlag(void){
    LD_HL(wScriptFlags2);
    BIT_hl(2);
    RET;

}

void CheckCoordEventScriptFlag(void){
    LD_HL(wScriptFlags2);
    BIT_hl(1);
    RET;

}

void CheckStepCountScriptFlag(void){
    LD_HL(wScriptFlags2);
    BIT_hl(0);
    RET;

}

void CheckWildEncountersScriptFlag(void){
    LD_HL(wScriptFlags2);
    BIT_hl(4);
    RET;

}

void StartMap(void){
    XOR_A_A;
    LD_addr_A(wScriptVar);
    XOR_A_A;
    LD_addr_A(wScriptRunning);
    LD_HL(wMapStatus);
    LD_BC(wMapStatusEnd - wMapStatus);
    CALL(aByteFill);
    FARCALL(aInitCallReceiveDelay);
    CALL(aClearJoypad);
    return EnterMap();
}

void EnterMap(void){
    XOR_A_A;
    LD_addr_A(wXYComparePointer);
    LD_addr_A(wXYComparePointer + 1);
    CALL(aSetUpFiveStepWildEncounterCooldown);
    FARCALL(aRunMapSetupScript);
    CALL(aDisableEvents);

    LDH_A_addr(hMapEntryMethod);
    CP_A(MAPSETUP_CONNECTION);
    IF_NZ goto dont_enable;
    CALL(aEnableEvents);

dont_enable:

    LDH_A_addr(hMapEntryMethod);
    CP_A(MAPSETUP_RELOADMAP);
    IF_NZ goto dontresetpoison;
    XOR_A_A;
    LD_addr_A(wPoisonStepCount);

dontresetpoison:

    XOR_A_A;  // end map entry
    LDH_addr_A(hMapEntryMethod);
    LD_A(MAPSTATUS_HANDLE);
    LD_addr_A(wMapStatus);
    RET;

}

void UnusedWait30Frames(void){
//  //  unreferenced
    LD_C(30);
    CALL(aDelayFrames);
    RET;

}

void HandleMap(void){
    CALL(aResetOverworldDelay);
    CALL(aHandleMapTimeAndJoypad);
    FARCALL(aHandleCmdQueue);  // no need to farcall
    CALL(aMapEvents);

//  Not immediately entering a connected map will cause problems.
    LD_A_addr(wMapStatus);
    CP_A(MAPSTATUS_HANDLE);
    RET_NZ ;

    CALL(aHandleMapObjects);
    CALL(aNextOverworldFrame);
    CALL(aHandleMapBackground);
    CALL(aCheckPlayerState);
    RET;

}

void MapEvents(void){
    LD_A_addr(wMapEventStatus);
    LD_HL(mMapEvents_Jumptable);
    RST(aJumpTable);
    RET;


Jumptable:
//  entries correspond to MAPEVENTS_* constants
    //dw ['.events'];
    //dw ['.no_events'];


events:
    CALL(aPlayerEvents);
    CALL(aDisableEvents);
    FARCALL(aScriptEvents);
    RET;


no_events:
    RET;

}

void MaxOverworldDelay(void){
    //db ['2'];

    return ResetOverworldDelay();
}

#define MAX_OVERWORLD_DELAY 2

void ResetOverworldDelay(void){
    // LD_A_addr(mMaxOverworldDelay);
    // LD_addr_A(wOverworldDelay);
    wram->wOverworldDelay = MAX_OVERWORLD_DELAY;
    // RET;
}

void NextOverworldFrame(void){
    LD_A_addr(wOverworldDelay);
    AND_A_A;
    RET_Z ;
    LD_C_A;
    CALL(aDelayFrames);
    RET;

}

void HandleMapTimeAndJoypad(void){
    LD_A_addr(wMapEventStatus);
    CP_A(MAPEVENTS_OFF);
    RET_Z ;

    CALL(aUpdateTime);
    CALL(aGetJoypad);
    CALL(aTimeOfDayPals);
    RET;

}

void HandleMapObjects(void){
    FARCALL(aHandleNPCStep);
    FARCALL(av_HandlePlayerStep);
    CALL(av_CheckObjectEnteringVisibleRange);
    RET;

}

void HandleMapBackground(void){
    FARCALL(av_UpdateSprites);
    FARCALL(aScrollScreen);
    FARCALL(aPlaceMapNameSign);
    RET;

}

void CheckPlayerState(void){
    LD_A_addr(wPlayerStepFlags);
    BIT_A(PLAYERSTEP_CONTINUE_F);
    IF_Z goto events;
    BIT_A(PLAYERSTEP_STOP_F);
    IF_Z goto noevents;
    BIT_A(PLAYERSTEP_MIDAIR_F);
    IF_NZ goto noevents;
    CALL(aEnableEvents);

events:
    LD_A(MAPEVENTS_ON);
    LD_addr_A(wMapEventStatus);
    RET;


noevents:
    LD_A(MAPEVENTS_OFF);
    LD_addr_A(wMapEventStatus);
    RET;

}

void v_CheckObjectEnteringVisibleRange(void){
    LD_HL(wPlayerStepFlags);
    BIT_hl(PLAYERSTEP_STOP_F);
    RET_Z ;
    FARCALL(aCheckObjectEnteringVisibleRange);
    RET;

}

void PlayerEvents(void){
    XOR_A_A;
//  If there's already a player event, don't interrupt it.
    LD_A_addr(wScriptRunning);
    AND_A_A;
    RET_NZ ;

    CALL(aDummy_CheckScriptFlags2Bit5);  // This is a waste of time

    CALL(aCheckTrainerBattle_GetPlayerEvent);
    IF_C goto ok;

    CALL(aCheckTileEvent);
    IF_C goto ok;

    CALL(aRunMemScript);
    IF_C goto ok;

    CALL(aRunSceneScript);
    IF_C goto ok;

    CALL(aCheckTimeEvents);
    IF_C goto ok;

    CALL(aOWPlayerInput);
    IF_C goto ok;

    XOR_A_A;
    RET;


ok:
    PUSH_AF;
    FARCALL(aEnableScriptMode);
    POP_AF;

    LD_addr_A(wScriptRunning);
    CALL(aDoPlayerEvent);
    LD_A_addr(wScriptRunning);
    CP_A(PLAYEREVENT_CONNECTION);
    IF_Z goto ok2;
    CP_A(PLAYEREVENT_JOYCHANGEFACING);
    IF_Z goto ok2;

    XOR_A_A;
    LD_addr_A(wLandmarkSignTimer);


ok2:
    SCF;
    RET;

}

void CheckTrainerBattle_GetPlayerEvent(void){
    NOP;
    NOP;
    CALL(aCheckTrainerBattle);
    IF_NC goto nope;

    LD_A(PLAYEREVENT_SEENBYTRAINER);
    SCF;
    RET;


nope:
    XOR_A_A;
    RET;

}

void CheckTileEvent(void){
//  Check for warps, coord events, or wild battles.

    CALL(aCheckWarpConnxnScriptFlag);
    IF_Z goto connections_disabled;

    FARCALL(aCheckMovingOffEdgeOfMap);
    IF_C goto map_connection;

    CALL(aCheckWarpTile);
    IF_C goto warp_tile;


connections_disabled:
    CALL(aCheckCoordEventScriptFlag);
    IF_Z goto coord_events_disabled;

    CALL(aCheckCurrentMapCoordEvents);
    IF_C goto coord_event;


coord_events_disabled:
    CALL(aCheckStepCountScriptFlag);
    IF_Z goto step_count_disabled;

    CALL(aCountStep);
    RET_C ;


step_count_disabled:
    CALL(aCheckWildEncountersScriptFlag);
    IF_Z goto ok;

    CALL(aRandomEncounter);
    RET_C ;
    goto ok;  // pointless


ok:
    XOR_A_A;
    RET;


map_connection:
    LD_A(PLAYEREVENT_CONNECTION);
    SCF;
    RET;


warp_tile:
    LD_A_addr(wPlayerStandingTile);
    CALL(aCheckPitTile);
    IF_NZ goto not_pit;
    LD_A(PLAYEREVENT_FALL);
    SCF;
    RET;


not_pit:
    LD_A(PLAYEREVENT_WARP);
    SCF;
    RET;


coord_event:
    LD_HL(wCurCoordEventScriptAddr);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    CALL(aGetMapScriptsBank);
    CALL(aCallScript);
    RET;

}

void CheckWildEncounterCooldown(void){
    LD_HL(wWildEncounterCooldown);
    LD_A_hl;
    AND_A_A;
    RET_Z ;
    DEC_hl;
    RET_Z ;
    SCF;
    RET;

}

void SetUpFiveStepWildEncounterCooldown(void){
    LD_A(5);
    LD_addr_A(wWildEncounterCooldown);
    RET;

}

void SetMinTwoStepWildEncounterCooldown(void){
//  dummied out
    RET;
    LD_A_addr(wWildEncounterCooldown);
    CP_A(2);
    RET_NC ;
    LD_A(2);
    LD_addr_A(wWildEncounterCooldown);
    RET;

}

void Dummy_CheckScriptFlags2Bit5(void){
    CALL(aCheckBit5_ScriptFlags2);
    RET_Z ;
    CALL(aSetXYCompareFlags);
    RET;

}

void RunSceneScript(void){
    LD_A_addr(wCurMapSceneScriptCount);
    AND_A_A;
    IF_Z goto nope;

    LD_C_A;
    CALL(aCheckScenes);
    CP_A_C;
    IF_NC goto nope;

    LD_E_A;
    LD_D(0);
    LD_HL(wCurMapSceneScriptsPointer);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    for(int rept = 0; rept < SCENE_SCRIPT_SIZE; rept++){
    ADD_HL_DE;
    }

    CALL(aGetMapScriptsBank);
    CALL(aGetFarWord);
    CALL(aGetMapScriptsBank);
    CALL(aCallScript);

    LD_HL(wScriptFlags);
    RES_hl(3);

    FARCALL(aEnableScriptMode);
    FARCALL(aScriptEvents);

    LD_HL(wScriptFlags);
    BIT_hl(3);
    IF_Z goto nope;

    LD_HL(wDeferredScriptAddr);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    LD_A_addr(wDeferredScriptBank);
    CALL(aCallScript);
    SCF;
    RET;


nope:
    XOR_A_A;
    RET;

}

void CheckTimeEvents(void){
    LD_A_addr(wLinkMode);
    AND_A_A;
    IF_NZ goto nothing;

    LD_HL(wStatusFlags2);
    BIT_hl(STATUSFLAGS2_BUG_CONTEST_TIMER_F);
    IF_Z goto do_daily;

    FARCALL(aCheckBugContestTimer);
    IF_C goto end_bug_contest;
    XOR_A_A;
    RET;


do_daily:
    FARCALL(aCheckDailyResetTimer);
    FARCALL(aCheckPokerusTick);
    FARCALL(aCheckPhoneCall);
    RET_C ;


nothing:
    XOR_A_A;
    RET;


end_bug_contest:
    LD_A(BANK(aBugCatchingContestOverScript));
    LD_HL(mBugCatchingContestOverScript);
    CALL(aCallScript);
    SCF;
    RET;


unused:
//   //  unreferenced
    LD_A(0x8);  // ???
    SCF;
    RET;

}

void OWPlayerInput(void){
    CALL(aPlayerMovement);
    RET_C ;
    AND_A_A;
    IF_NZ goto NoAction;

//  Can't perform button actions while sliding on ice.
    FARCALL(aCheckStandingOnIce);
    IF_C goto NoAction;

    CALL(aCheckAPressOW);
    IF_C goto Action;

    CALL(aCheckMenuOW);
    IF_C goto Action;


NoAction:
    XOR_A_A;
    RET;


Action:
    PUSH_AF;
    FARCALL(aStopPlayerForEvent);
    POP_AF;
    SCF;
    RET;

}

void CheckAPressOW(void){
    LDH_A_addr(hJoyPressed);
    AND_A(A_BUTTON);
    RET_Z ;
    CALL(aTryObjectEvent);
    RET_C ;
    CALL(aTryBGEvent);
    RET_C ;
    CALL(aTryTileCollisionEvent);
    RET_C ;
    XOR_A_A;
    RET;

}

void PlayTalkObject(void){
    PUSH_DE;
    LD_DE(SFX_READ_TEXT_2);
    CALL(aPlaySFX);
    POP_DE;
    RET;

}

void TryObjectEvent(void){
    FARCALL(aCheckFacingObject);
    IF_C goto IsObject;
    XOR_A_A;
    RET;


IsObject:
    CALL(aPlayTalkObject);
    LDH_A_addr(hObjectStructIndex);
    CALL(aGetObjectStruct);
    LD_HL(OBJECT_MAP_OBJECT_INDEX);
    ADD_HL_BC;
    LD_A_hl;
    LDH_addr_A(hLastTalked);

    LDH_A_addr(hLastTalked);
    CALL(aGetMapObject);
    LD_HL(MAPOBJECT_COLOR);
    ADD_HL_BC;
    LD_A_hl;
    AND_A(0b00001111);

//  Bug: If IsInArray returns nc, data at bc will be executed as code.
    PUSH_BC;
    LD_DE(3);
    LD_HL(mObjectEventTypeArray);
    CALL(aIsInArray);
    IF_NC goto nope;
    POP_BC;

    INC_HL;
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    JP_hl;


nope:
// pop bc
    XOR_A_A;
    RET;

}

void ObjectEventTypeArray(void){
    //table_width ['3', 'ObjectEventTypeArray']
    //dbw ['OBJECTTYPE_SCRIPT', '.script']
    //dbw ['OBJECTTYPE_ITEMBALL', '.itemball']
    //dbw ['OBJECTTYPE_TRAINER', '.trainer']
// the remaining four are dummy events
    //dbw ['OBJECTTYPE_3', '.three']
    //dbw ['OBJECTTYPE_4', '.four']
    //dbw ['OBJECTTYPE_5', '.five']
    //dbw ['OBJECTTYPE_6', '.six']
    //assert_table_length ['NUM_OBJECT_TYPES']
    //db ['-1'];  // end


script:
    LD_HL(MAPOBJECT_SCRIPT_POINTER);
    ADD_HL_BC;
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    CALL(aGetMapScriptsBank);
    CALL(aCallScript);
    RET;


itemball:
    LD_HL(MAPOBJECT_SCRIPT_POINTER);
    ADD_HL_BC;
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    CALL(aGetMapScriptsBank);
    LD_DE(wItemBallData);
    LD_BC(wItemBallDataEnd - wItemBallData);
    CALL(aFarCopyBytes);
    LD_A(PLAYEREVENT_ITEMBALL);
    SCF;
    RET;


trainer:
    CALL(aTalkToTrainer);
    LD_A(PLAYEREVENT_TALKTOTRAINER);
    SCF;
    RET;


three:
    XOR_A_A;
    RET;


four:
    XOR_A_A;
    RET;


five:
    XOR_A_A;
    RET;


six:
    XOR_A_A;
    RET;

}

void TryBGEvent(void){
    CALL(aCheckFacingBGEvent);
    IF_C goto is_bg_event;
    XOR_A_A;
    RET;


is_bg_event:
    LD_A_addr(wCurBGEventType);
    LD_HL(mBGEventJumptable);
    RST(aJumpTable);
    RET;

}

void BGEventJumptable(void){
    //table_width ['2', 'BGEventJumptable']
    //dw ['.read'];
    //dw ['.up'];
    //dw ['.down'];
    //dw ['.right'];
    //dw ['.left'];
    //dw ['.ifset'];
    //dw ['.ifnotset'];
    //dw ['.itemifset'];
    //dw ['.copy'];
    //assert_table_length ['NUM_BGEVENTS']


up:
    LD_B(OW_UP);
    goto checkdir;


down:
    LD_B(OW_DOWN);
    goto checkdir;


right:
    LD_B(OW_RIGHT);
    goto checkdir;


left:
    LD_B(OW_LEFT);
    goto checkdir;


checkdir:
    LD_A_addr(wPlayerDirection);
    AND_A(0b1100);
    CP_A_B;
    JP_NZ (mBGEventJumptable_dontread);

read:
    CALL(aPlayTalkObject);
    LD_HL(wCurBGEventScriptAddr);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    CALL(aGetMapScriptsBank);
    CALL(aCallScript);
    SCF;
    RET;


itemifset:
    CALL(aCheckBGEventFlag);
    JP_NZ (mBGEventJumptable_dontread);
    CALL(aPlayTalkObject);
    CALL(aGetMapScriptsBank);
    LD_DE(wHiddenItemData);
    LD_BC(wHiddenItemDataEnd - wHiddenItemData);
    CALL(aFarCopyBytes);
    LD_A(BANK(aHiddenItemScript));
    LD_HL(mHiddenItemScript);
    CALL(aCallScript);
    SCF;
    RET;


copy:
    CALL(aCheckBGEventFlag);
    IF_NZ goto dontread;
    CALL(aGetMapScriptsBank);
    LD_DE(wHiddenItemData);
    LD_BC(wHiddenItemDataEnd - wHiddenItemData);
    CALL(aFarCopyBytes);
    goto dontread;


ifset:
    CALL(aCheckBGEventFlag);
    IF_Z goto dontread;
    goto thenread;


ifnotset:
    CALL(aCheckBGEventFlag);
    IF_NZ goto dontread;

thenread:
    PUSH_HL;
    CALL(aPlayTalkObject);
    POP_HL;
    INC_HL;
    INC_HL;
    CALL(aGetMapScriptsBank);
    CALL(aGetFarWord);
    CALL(aGetMapScriptsBank);
    CALL(aCallScript);
    SCF;
    RET;


dontread:
    XOR_A_A;
    RET;

}

void CheckBGEventFlag(void){
    LD_HL(wCurBGEventScriptAddr);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    PUSH_HL;
    CALL(aGetMapScriptsBank);
    CALL(aGetFarWord);
    LD_E_L;
    LD_D_H;
    LD_B(CHECK_FLAG);
    CALL(aEventFlagAction);
    LD_A_C;
    AND_A_A;
    POP_HL;
    RET;

}

void PlayerMovement(void){
    FARCALL(aDoPlayerMovement);
    LD_A_C;
    LD_HL(mPlayerMovementPointers);
    RST(aJumpTable);
    LD_A_C;
    RET;

}

struct FlagA PlayerMovement_Conv(void){
    // FARCALL(aDoPlayerMovement);
    // LD_A_C;
    uint8_t a = DoPlayerMovement_Conv();
    // LD_HL(mPlayerMovementPointers);
    // RST(aJumpTable);
    switch(a) {
    //  entries correspond to PLAYERMOVEMENT_* constants
        //table_width ['2', 'PlayerMovementPointers']
        //dw ['.normal'];
        //dw ['.warp'];
        //dw ['.turn'];
        //dw ['.force_turn'];
        //dw ['.finish'];
        //dw ['.continue'];
        //dw ['.exit_water'];
        //dw ['.jump'];
        //assert_table_length ['NUM_PLAYER_MOVEMENTS']

    case PLAYERMOVEMENT_NORMAL:
    // normal:
    case PLAYERMOVEMENT_FINISH:
    // finish:
        // XOR_A_A;
        // LD_C_A;
        // RET;
        return (struct FlagA){.a = 0, .flag = false};

    case PLAYERMOVEMENT_JUMP:
    // jump:
        // CALL(aSetMinTwoStepWildEncounterCooldown);
        // XOR_A_A;
        // LD_C_A;
        // RET;
        return (struct FlagA){.a = 0, .flag = false};

    case PLAYERMOVEMENT_WARP:
    // warp:
        // LD_A(PLAYEREVENT_WARP);
        // LD_C_A;
        // SCF;
        // RET;
        return (struct FlagA){.a = PLAYEREVENT_WARP, .flag = true};

    case PLAYERMOVEMENT_TURN:
    // turn:
        // LD_A(PLAYEREVENT_JOYCHANGEFACING);
        // LD_C_A;
        // SCF;
        // RET;
        return (struct FlagA){.a = PLAYEREVENT_JOYCHANGEFACING, .flag = true};

    case PLAYERMOVEMENT_FORCE_TURN:
    // force_turn:
    //  force the player to move in some direction
        // LD_A(BANK(aScript_ForcedMovement));
        // LD_HL(mScript_ForcedMovement);
        // CALL(aCallScript);
        // LD_C_A;
        // SCF;
        // RET;
        return (struct FlagA){.a = CallScript_Conv(BANK(aScript_ForcedMovement), mScript_ForcedMovement), .flag = true};

    case PLAYERMOVEMENT_CONTINUE:
    // continue_:
    case PLAYERMOVEMENT_EXIT_WATER:
    // exit_water:
        // LD_A(-1);
        // LD_C_A;
        // AND_A_A;
        // RET;
        return (struct FlagA){.a = 0xff, .flag = false};
    }
    // LD_A_C;
    // RET;
    return (struct FlagA){.a = 0, .flag = false};
}

void PlayerMovementPointers(void){
//  entries correspond to PLAYERMOVEMENT_* constants
    //table_width ['2', 'PlayerMovementPointers']
    //dw ['.normal'];
    //dw ['.warp'];
    //dw ['.turn'];
    //dw ['.force_turn'];
    //dw ['.finish'];
    //dw ['.continue'];
    //dw ['.exit_water'];
    //dw ['.jump'];
    //assert_table_length ['NUM_PLAYER_MOVEMENTS']


normal:

finish:
    XOR_A_A;
    LD_C_A;
    RET;


jump:
    CALL(aSetMinTwoStepWildEncounterCooldown);
    XOR_A_A;
    LD_C_A;
    RET;


warp:
    LD_A(PLAYEREVENT_WARP);
    LD_C_A;
    SCF;
    RET;


turn:
    LD_A(PLAYEREVENT_JOYCHANGEFACING);
    LD_C_A;
    SCF;
    RET;


force_turn:
//  force the player to move in some direction
    LD_A(BANK(aScript_ForcedMovement));
    LD_HL(mScript_ForcedMovement);
    CALL(aCallScript);
    LD_C_A;
    SCF;
    RET;


continue_:

exit_water:
    LD_A(-1);
    LD_C_A;
    AND_A_A;
    RET;

}

void CheckMenuOW(void){
    XOR_A_A;
    LDH_addr_A(hMenuReturn);
    LDH_addr_A(hUnusedByte);
    LDH_A_addr(hJoyPressed);

    BIT_A(SELECT_F);
    IF_NZ goto Select;

    BIT_A(START_F);
    IF_Z goto NoMenu;

    LD_A(BANK(aStartMenuScript));
    LD_HL(mStartMenuScript);
    CALL(aCallScript);
    SCF;
    RET;


NoMenu:
    XOR_A_A;
    RET;


Select:
    CALL(aPlayTalkObject);
    LD_A(BANK(aSelectMenuScript));
    LD_HL(mSelectMenuScript);
    CALL(aCallScript);
    SCF;
    RET;

}

void StartMenuScript(void){
    //callasm ['StartMenu']
    //sjump ['StartMenuCallback']

    return SelectMenuScript();
}

void SelectMenuScript(void){
    //callasm ['SelectMenu']
    //sjump ['SelectMenuCallback']

    return StartMenuCallback();
}

void StartMenuCallback(void){
    return SelectMenuCallback();
}

void SelectMenuCallback(void){
    //readmem ['hMenuReturn']
    //ifequal ['HMENURETURN_SCRIPT', '.Script']
    //ifequal ['HMENURETURN_ASM', '.Asm']
    //end ['?']


Script:
    //memjump ['wQueuedScriptBank']


Asm:
    //memcallasm ['wQueuedScriptBank']
    //end ['?']

    return CountStep();
}

void CountStep(void){
// Don't count steps in link communication rooms.
    LD_A_addr(wLinkMode);
    AND_A_A;
    IF_NZ goto done;

// If there is a special phone call, don't count the step.
    FARCALL(aCheckSpecialPhoneCall);
    IF_C goto doscript;

// If Repel wore off, don't count the step.
    CALL(aDoRepelStep);
    IF_C goto doscript;

// Count the step for poison and total steps
    LD_HL(wPoisonStepCount);
    INC_hl;
    LD_HL(wStepCount);
    INC_hl;
// Every 256 steps, increase the happiness of all your Pokemon.
    IF_NZ goto skip_happiness;

    FARCALL(aStepHappiness);


skip_happiness:
// Every 256 steps, offset from the happiness incrementor by 128 steps,
// decrease the hatch counter of all your eggs until you reach the first
// one that is ready to hatch.
    LD_A_addr(wStepCount);
    CP_A(0x80);
    IF_NZ goto skip_egg;

    FARCALL(aDoEggStep);
    IF_NZ goto hatch;


skip_egg:
// Increase the EXP of (both) DayCare Pokemon by 1.
    FARCALL(aDayCareStep);

// Every 4 steps, deal damage to all poisoned Pokemon.
    LD_HL(wPoisonStepCount);
    LD_A_hl;
    CP_A(4);
    IF_C goto skip_poison;
    LD_hl(0);

    FARCALL(aDoPoisonStep);
    IF_C goto doscript;


skip_poison:
    FARCALL(aDoBikeStep);


done:
    XOR_A_A;
    RET;


doscript:
    LD_A(-1);
    SCF;
    RET;


hatch:
    LD_A(PLAYEREVENT_HATCH);
    SCF;
    RET;


whiteout:
//   //  unreferenced
    LD_A(PLAYEREVENT_WHITEOUT);
    SCF;
    RET;

}

void DoRepelStep(void){
    LD_A_addr(wRepelEffect);
    AND_A_A;
    RET_Z ;

    DEC_A;
    LD_addr_A(wRepelEffect);
    RET_NZ ;

    LD_A(BANK(aRepelWoreOffScript));
    LD_HL(mRepelWoreOffScript);
    CALL(aCallScript);
    SCF;
    RET;

}

void DoPlayerEvent(void){
    LD_A_addr(wScriptRunning);
    AND_A_A;
    RET_Z ;

    CP_A(PLAYEREVENT_MAPSCRIPT);  // run script
    RET_Z ;

    CP_A(NUM_PLAYER_EVENTS);
    RET_NC ;

    LD_C_A;
    LD_B(0);
    LD_HL(mPlayerEventScriptPointers);
    ADD_HL_BC;
    ADD_HL_BC;
    ADD_HL_BC;
    LD_A_hli;
    LD_addr_A(wScriptBank);
    LD_A_hli;
    LD_addr_A(wScriptPos);
    LD_A_hl;
    LD_addr_A(wScriptPos + 1);
    RET;

}

void PlayerEventScriptPointers(void){
//  entries correspond to PLAYEREVENT_* constants
    //table_width ['3', 'PlayerEventScriptPointers']
    //dba ['InvalidEventScript']  // PLAYEREVENT_NONE
    //dba ['SeenByTrainerScript']  // PLAYEREVENT_SEENBYTRAINER
    //dba ['TalkToTrainerScript']  // PLAYEREVENT_TALKTOTRAINER
    //dba ['FindItemInBallScript']  // PLAYEREVENT_ITEMBALL
    //dba ['EdgeWarpScript']  // PLAYEREVENT_CONNECTION
    //dba ['WarpToNewMapScript']  // PLAYEREVENT_WARP
    //dba ['FallIntoMapScript']  // PLAYEREVENT_FALL
    //dba ['OverworldWhiteoutScript']  // PLAYEREVENT_WHITEOUT
    //dba ['HatchEggScript']  // PLAYEREVENT_HATCH
    //dba ['ChangeDirectionScript']  // PLAYEREVENT_JOYCHANGEFACING
    //dba ['InvalidEventScript']  // (NUM_PLAYER_EVENTS)
    //assert_table_length ['NUM_PLAYER_EVENTS + 1']
}

bool InvalidEventScript(script_s* s){
    SCRIPT_BEGIN
    //end ['?']
    SCRIPT_END
}

void UnusedPlayerEventScript(void){
//  //  unreferenced
    //end ['?']

    return HatchEggScript();
}

void HatchEggScript(void){
    //callasm ['OverworldHatchEgg']
    //end ['?']

    return WarpToNewMapScript();
}

void WarpToNewMapScript(void){
    //warpsound ['?']
    //newloadmap ['MAPSETUP_DOOR']
    //end ['?']

    return FallIntoMapScript();
}

void FallIntoMapScript(void){
    //newloadmap ['MAPSETUP_FALL']
    //playsound ['SFX_KINESIS']
    //applymovement ['PLAYER', '.SkyfallMovement']
    //playsound ['SFX_STRENGTH']
    //scall ['LandAfterPitfallScript']
    //end ['?']


SkyfallMovement:
    //skyfall ['?']
    //step_end ['?']

    return LandAfterPitfallScript();
}

void LandAfterPitfallScript(void){
    //earthquake ['16']
    //end ['?']

    return EdgeWarpScript();
}

void EdgeWarpScript(void){
    //reloadend ['MAPSETUP_CONNECTION']

    return ChangeDirectionScript();
}

void ChangeDirectionScript(void){
    //deactivatefacing ['3']
    //callasm ['EnableWildEncounters']
    //end ['?']

// INCLUDE "engine/overworld/scripting.asm"

    return WarpToSpawnPoint();
}

void WarpToSpawnPoint(void){
    // LD_HL(wStatusFlags2);
    // RES_hl(STATUSFLAGS2_SAFARI_GAME_F);
    // RES_hl(STATUSFLAGS2_BUG_CONTEST_TIMER_F);
    // RET;
    bit_reset(wram->wStatusFlags2, STATUSFLAGS2_SAFARI_GAME_F);
    bit_reset(wram->wStatusFlags2, STATUSFLAGS2_BUG_CONTEST_TIMER_F);
}

void RunMemScript(void){
//  If there is no script here, we don't need to be here.
    LD_A_addr(wMapReentryScriptQueueFlag);
    AND_A_A;
    RET_Z ;
//  Execute the script at (wMapReentryScriptBank):(wMapReentryScriptAddress).
    LD_HL(wMapReentryScriptAddress);
    LD_A_hli;
    LD_H_hl;
    LD_L_A;
    LD_A_addr(wMapReentryScriptBank);
    CALL(aCallScript);
    SCF;
//  Clear the buffer for the next script.
    PUSH_AF;
    XOR_A_A;
    LD_HL(wMapReentryScriptQueueFlag);
    LD_BC(8);
    CALL(aByteFill);
    POP_AF;
    RET;

}

void LoadScriptBDE(void){
//  If there's already a script here, don't overwrite.
    LD_HL(wMapReentryScriptQueueFlag);
    LD_A_hl;
    AND_A_A;
    RET_NZ ;
//  Set the flag
    LD_hl(1);
    INC_HL;
//  Load the script pointer b:de into (wMapReentryScriptBank):(wMapReentryScriptAddress)
    LD_hl_B;
    INC_HL;
    LD_hl_E;
    INC_HL;
    LD_hl_D;
    SCF;
    RET;

}

void TryTileCollisionEvent(void){
    CALL(aGetFacingTileCoord);
    LD_addr_A(wFacingTileID);
    LD_C_A;
    FARCALL(aCheckFacingTileForStdScript);
    IF_C goto done;

    CALL(aCheckCutTreeTile);
    IF_NZ goto whirlpool;
    FARCALL(aTryCutOW);
    goto done;


whirlpool:
    LD_A_addr(wFacingTileID);
    CALL(aCheckWhirlpoolTile);
    IF_NZ goto waterfall;
    FARCALL(aTryWhirlpoolOW);
    goto done;


waterfall:
    LD_A_addr(wFacingTileID);
    CALL(aCheckWaterfallTile);
    IF_NZ goto headbutt;
    FARCALL(aTryWaterfallOW);
    goto done;


headbutt:
    LD_A_addr(wFacingTileID);
    CALL(aCheckHeadbuttTreeTile);
    IF_NZ goto surf;
    FARCALL(aTryHeadbuttOW);
    IF_C goto done;
    goto noevent;


surf:
    FARCALL(aTrySurfOW);
    IF_NC goto noevent;
    goto done;


noevent:
    XOR_A_A;
    RET;


done:
    CALL(aPlayClickSFX);
    LD_A(0xff);
    SCF;
    RET;

}

void RandomEncounter(void){
//  Random encounter

    CALL(aCheckWildEncounterCooldown);
    IF_C goto nope;
    CALL(aCanUseSweetScent);
    IF_NC goto nope;
    LD_HL(wStatusFlags2);
    BIT_hl(STATUSFLAGS2_BUG_CONTEST_TIMER_F);
    IF_NZ goto bug_contest;
    FARCALL(aTryWildEncounter);
    IF_NZ goto nope;
    goto ok;


bug_contest:
    CALL(av_TryWildEncounter_BugContest);
    IF_NC goto nope;
    goto ok_bug_contest;


nope:
    LD_A(1);
    AND_A_A;
    RET;


ok:
    LD_A(BANK(aWildBattleScript));
    LD_HL(mWildBattleScript);
    goto done;


ok_bug_contest:
    LD_A(BANK(aBugCatchingContestBattleScript));
    LD_HL(mBugCatchingContestBattleScript);
    goto done;


done:
    CALL(aCallScript);
    SCF;
    RET;

}

void WildBattleScript(void){
    //randomwildmon ['?']
    //startbattle ['?']
    //reloadmapafterbattle ['?']
    //end ['?']

    return CanUseSweetScent();
}

void CanUseSweetScent(void){
    LD_HL(wStatusFlags);
    BIT_hl(STATUSFLAGS_NO_WILD_ENCOUNTERS_F);
    IF_NZ goto no;
    LD_A_addr(wEnvironment);
    CP_A(CAVE);
    IF_Z goto ice_check;
    CP_A(DUNGEON);
    IF_Z goto ice_check;
    FARCALL(aCheckGrassCollision);
    IF_NC goto no;


ice_check:
    LD_A_addr(wPlayerStandingTile);
    CALL(aCheckIceTile);
    IF_Z goto no;
    SCF;
    RET;


no:
    AND_A_A;
    RET;

}

void v_TryWildEncounter_BugContest(void){
    CALL(aTryWildEncounter_BugContest);
    RET_NC ;
    CALL(aChooseWildEncounter_BugContest);
    FARCALL(aCheckRepelEffect);
    RET;

}

void ChooseWildEncounter_BugContest(void){
//  Pick a random mon out of ContestMons.


loop:
    CALL(aRandom);
    CP_A(100 << 1);
    IF_NC goto loop;
    SRL_A;

    LD_HL(mContestMons);
    LD_DE(4);

CheckMon:
    SUB_A_hl;
    IF_C goto GotMon;
    ADD_HL_DE;
    goto CheckMon;


GotMon:
    INC_HL;

//  Species
    LD_A_hli;
    LD_addr_A(wTempWildMonSpecies);

//  Min level
    LD_A_hli;
    LD_D_A;

//  Max level
    LD_A_hl;

    SUB_A_D;
    IF_NZ goto RandomLevel;

//  If min and max are the same.
    LD_A_D;
    goto GotLevel;


RandomLevel:
//  Get a random level between the min and max.
    LD_C_A;
    INC_C;
    CALL(aRandom);
    LDH_A_addr(hRandomAdd);
    CALL(aSimpleDivide);
    ADD_A_D;


GotLevel:
    LD_addr_A(wCurPartyLevel);

    XOR_A_A;
    RET;

}

void TryWildEncounter_BugContest(void){
    LD_A_addr(wPlayerStandingTile);
    CALL(aCheckSuperTallGrassTile);
    LD_B(40 percent);
    IF_Z goto ok;
    LD_B(20 percent);


ok:
    FARCALL(aApplyMusicEffectOnEncounterRate);
    FARCALL(aApplyCleanseTagEffectOnEncounterRate);
    CALL(aRandom);
    LDH_A_addr(hRandomAdd);
    CP_A_B;
    RET_C ;
    LD_A(1);
    AND_A_A;
    RET;

// INCLUDE "data/wild/bug_contest_mons.asm"

    return DoBikeStep();
}

void DoBikeStep(void){
    NOP;
    NOP;
// If the bike shop owner doesn't have our number, or
// if we've already gotten the call, we don't have to
// be here.
    LD_HL(wStatusFlags2);
    BIT_hl(STATUSFLAGS2_BIKE_SHOP_CALL_F);
    IF_Z goto NoCall;

// If we're not on the bike, we don't have to be here.
    LD_A_addr(wPlayerState);
    CP_A(PLAYER_BIKE);
    IF_NZ goto NoCall;

// If we're not in an area of phone service, we don't
// have to be here.
    CALL(aGetMapPhoneService);
    AND_A_A;
    IF_NZ goto NoCall;

// Check the bike step count and check whether we've
// taken 65536 of them yet.
    LD_HL(wBikeStep);
    LD_A_hli;
    LD_D_A;
    LD_E_hl;
    CP_A(255);
    IF_NZ goto increment;
    LD_A_E;
    CP_A(255);
    IF_Z goto dont_increment;


increment:
    INC_DE;
    LD_hl_E;
    DEC_HL;
    LD_hl_D;


dont_increment:
// If we've taken at least 1024 steps, have the bike
//  shop owner try to call us.
    LD_A_D;
    CP_A(HIGH(1024));
    IF_C goto NoCall;

// If a call has already been queued, don't overwrite
// that call.
    LD_A_addr(wSpecialPhoneCallID);
    AND_A_A;
    IF_NZ goto NoCall;

// Queue the call.
    LD_A(SPECIALCALL_BIKESHOP);
    LD_addr_A(wSpecialPhoneCallID);
    XOR_A_A;
    LD_addr_A(wSpecialPhoneCallID + 1);
    LD_HL(wStatusFlags2);
    RES_hl(STATUSFLAGS2_BIKE_SHOP_CALL_F);
    SCF;
    RET;


NoCall:
    XOR_A_A;
    RET;

// INCLUDE "engine/overworld/cmd_queue.asm"

}
