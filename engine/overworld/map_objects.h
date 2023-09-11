struct StepVector {
    int8_t x;
    int8_t y;
    uint8_t duration;
    uint8_t speed;
};
void DeleteMapObject(void);
void DeleteMapObject_Conv(struct Object* obj);
void HandleObjectStep(void);
void CheckObjectStillVisible(void);
void HandleStepType(void);
void HandleObjectAction(void);
void HandleFrozenObjectAction(void);
void HandleFrozenObjectAction_Conv(struct Object* bc);
void v_CallFrozenObjectAction(void);
void v_CallFrozenObjectAction_Conv(struct Object* bc);
void CallObjectAction(void);
void CallObjectAction_Conv(struct Object* bc, int column);
void CopyNextCoordsTileToStandingCoordsTile(void);
void CopyStandingCoordsTileToNextCoordsTile(void);
void UpdateTallGrassFlags(void);
void SetTallGrassFlags(void);
void UselessAndA(void);
void EndSpriteMovement(void);
void EndSpriteMovement_Conv(struct Object* bc);
void InitStep(void);
void InitStep_Conv(struct Object* bc, uint8_t a);
void GetNextTile(void);
void GetNextTile_Conv(struct Object* bc);
void AddStepVector(void);
struct StepVector AddStepVector_Conv(struct Object* bc);
void GetStepVector(void);
struct StepVector GetStepVector_Conv(struct Object* bc);
// void StepVectors(void);
extern const struct StepVector StepVectors[];
void GetStepVectorSign(void);
int8_t GetStepVectorSign_Conv(int8_t a);
void UpdatePlayerStep(void);
void UpdatePlayerStep_Conv(struct Object* bc);
void GetMapObjectField(void);
void RestoreDefaultMovement(void);
void ObjectMovementByte_ZeroAnonJumptableIndex(void);
void ObjectMovementByte_IncAnonJumptableIndex(void);
void ObjectMovementByte_DecAnonJumptableIndex(void);
void ObjectMovementByte_AnonJumptable(void);
void Field1c_ZeroAnonJumptableIndex(void);
void Field1c_IncAnonJumptableIndex(void);
void Field1c_AnonJumptable(void);
void Field1c_GetAnonJumptableIndex(void);
void Field1c_SetAnonJumptableIndex(void);
void StepFunction_Reset(void);
void StepFunction_FromMovement(void);
void MovementFunction_Null(void);
void MovementFunction_RandomWalkY(void);
void MovementFunction_RandomWalkX(void);
void MovementFunction_RandomWalkXY(void);
void MovementFunction_RandomSpinSlow(void);
void MovementFunction_RandomSpinFast(void);
void MovementFunction_Standing(void);
void MovementFunction_ObeyDPad(void);
void MovementFunction_Indexed1(void);
void MovementFunction_Indexed2(void);
void MovementFunction_0a(void);
void MovementFunction_0b(void);
void MovementFunction_0c(void);
void MovementFunction_0d(void);
void MovementFunction_0e(void);
void MovementFunction_Follow(void);
void MovementFunction_Script(void);
void MovementFunction_Strength(void);
void MovementFunction_FollowNotExact(void);
void MovementFunction_BigStanding(void);
void MovementFunction_Bouncing(void);
void MovementFunction_SpinCounterclockwise(void);
void MovementFunction_SpinClockwise(void);
void v_MovementSpinInit(void);
void v_MovementSpinRepeat(void);
void v_MovementSpinTurnLeft(void);
void v_MovementSpinTurnRight(void);
void v_MovementSpinNextFacing(void);
void MovementFunction_Shadow(void);
void MovementFunction_Emote(void);
void MovementFunction_BoulderDust(void);
void MovementFunction_ShakingGrass(void);
void InitMovementField1dField1e(void);
void MovementFunction_ScreenShake(void);
void v_RandomWalkContinue(void);
void RandomStepDuration_Slow(void);
void RandomStepDuration_Fast(void);
void v_SetRandomStepDuration(void);
void StepTypesJumptable(void);
void WaitStep_InPlace(void);
void StepFunction_NPCJump(void);
void StepFunction_PlayerJump(void);
void StepFunction_TeleportFrom(void);
void StepFunction_TeleportTo(void);
void StepFunction_Skyfall(void);
void StepFunction_GotBite(void);
void StepFunction_RockSmash(void);
void StepFunction_DigTo(void);
void StepFunction_Sleep(void);
void StepFunction_Delete(void);
void StepFunction_Bump(void);
void StepFunction_Restore(void);
void StepFunction_Standing(void);
void StepFunction_NPCWalk(void);
void StepFunction_ContinueWalk(void);
void StepFunction_PlayerWalk(void);
void StepFunction_Turn(void);
void StepFunction_StrengthBoulder(void);
void StepFunction_TrackingObject(void);
void StepFunction_14(void);
void StepFunction_ScreenShake(void);
void StepFunction_16(void);
void StepFunction_17(void);
void StepFunction_SkyfallTop(void);
void Stubbed_UpdateYOffset(void);
void UpdateJumpPosition(void);
void GetPlayerNextMovementByte(void);
void GetMovementByte(void);
void GetIndexedMovementByte1(void);
void GetIndexedMovementByte2(void);
void v_GetMovementObject(void);
void GetMovementObject(void);
void HandleMovementData(void);
void JumpMovementPointer(void);
void ContinueReadingMovement(void);
void DoMovementFunction(void);
void ApplyMovementToFollower(void);
void GetFollowerNextMovementByte(void);
void SpawnShadow(void);
void SpawnStrengthBoulderDust(void);
void SpawnEmote(void);
void ShakeGrass(void);
void ShakeScreen(void);
void DespawnEmote(void);
void InitTempObject(void);
void CopyTempObjectData(void);
void UpdateAllObjectsFrozen(void);
void UpdateAllObjectsFrozen_Conv(void);
void RespawnPlayerAndOpponent(void);
void RespawnPlayer(void);
void RespawnObject(void);
void HideAllObjects(void);
void UpdateObjectFrozen(void);
bool UpdateObjectFrozen_Conv(struct Object* bc);
void UpdateRespawnedObjectFrozen(void);
void SetFacing_Standing(void);
bool SetFacing_Standing_Conv(struct Object* bc);
void UpdateObjectNextTile(void);
void UpdateObjectNextTile_Conv(struct Object* bc);
void CheckObjectOnScreen(void);
bool CheckObjectOnScreen_Conv(struct Object* bc);
void CheckObjectCoveredByTextbox(void);
bool CheckObjectCoveredByTextbox_Conv(struct Object* bc);
void HandleNPCStep(void);
void ResetStepVector(void);
void DoStepsForAllObjects(void);
void RefreshPlayerSprite(void);
void TryResetPlayerAction(void);
void SpawnInCustomFacing(void);
void SpawnInFacingDown(void);
void v_ContinueSpawnFacing(void);
void v_SetPlayerPalette(void);
void StartFollow(void);
void SetLeaderIfVisible(void);
void StopFollow(void);
void ResetLeader(void);
void SetFollowerIfVisible(void);
void ResetFollower(void);
void FreezeAllOtherObjects(void);
void FreezeObject(void);
void FreezeAllObjects(void);
void v_UnfreezeFollowerObject(void);
void UnfreezeAllObjects(void);
void UnfreezeObject(void);
void ResetObject(void);
void v_UpdateSprites(void);
void v_UpdateSprites_Conv(void);
void ApplyBGMapAnchorToObjects(void);
void InitSprites(void);
//#include "data/sprites/facings.h"
//#include "data/sprites/map_objects.h"
//#include "engine/overworld/map_object_action.h"
//#include "engine/overworld/movement.h"
