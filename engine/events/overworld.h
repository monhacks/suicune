void FieldMoveJumptableReset(void);
// void FieldMoveJumptable(void);
void GetPartyNickname(void);
void CheckEngineFlag(void);
bool CheckEngineFlag_Conv(uint16_t de);
void CheckBadge(void);
bool CheckBadge_Conv(uint16_t de);
void CheckPartyMove(void);
bool CheckPartyMove_Conv(move_t d);
void FieldMoveFailed(void);
void CutFunction(void);
extern const txt_cmd_s UseCutText[];
extern const txt_cmd_s CutNothingText[];
void CheckMapForSomethingToCut(void);
bool CheckMapForSomethingToCut_Conv(void);
bool Script_CutFromMenu(script_s* s);
bool Script_Cut(script_s* s);
void CutDownTreeOrGrass(void);
void CheckOverworldTileArrays(void);
void FlashFunction(void);
void UseFlash(void);
bool Script_UseFlash(script_s* s);
void UseFlashTextScript(struct TextCmdState* state);
void SurfFunction(void);
bool SurfFromMenuScript(script_s* s);
bool UsedSurfScript(script_s* s);
extern const txt_cmd_s UsedSurfText[];
extern const txt_cmd_s CantSurfText[];
extern const txt_cmd_s AlreadySurfingText[];
void GetSurfType(void);
uint8_t GetSurfType_Conv(void);
void CheckDirection(void);
bool CheckDirection_Conv(void);
void TrySurfOW(void);
bool TrySurfOW_Conv(void);
bool AskSurfScript(script_s* s);
extern const txt_cmd_s AskSurfText[];
void FlyFunction(void);
void WaterfallFunction(void);
void CheckMapCanWaterfall(void);
bool CheckMapCanWaterfall_Conv(void);
bool Script_WaterfallFromMenu(script_s* s);
bool Script_UsedWaterfall(script_s* s);
void TryWaterfallOW(void);
bool TryWaterfallOW_Conv(void);
bool Script_CantDoWaterfall(script_s* s);
bool Script_AskWaterfall(script_s* s);
void EscapeRopeFunction(void);
void DigFunction(void);
void EscapeRopeOrDig(uint8_t escapeType);
void TeleportFunction(void);
void StrengthFunction(void);
void SetStrengthFlag(void);
bool Script_StrengthFromMenu(script_s* s);
bool Script_UsedStrength(script_s* s);
bool AskStrengthScript(script_s* s);
extern const txt_cmd_s AskStrengthText[];
extern const txt_cmd_s BouldersMoveText[];
extern const txt_cmd_s BouldersMayMoveText[];
void TryStrengthOW(void);
void WhirlpoolFunction(void);
extern const txt_cmd_s UseWhirlpoolText[];
void TryWhirlpoolMenu(void);
bool Script_WhirlpoolFromMenu(script_s*);
bool Script_UsedWhirlpool(script_s*);
void DisappearWhirlpool(void);
void TryWhirlpoolOW(void);
bool TryWhirlpoolOW_Conv(void);
bool Script_MightyWhirlpool(script_s*);
bool Script_AskWhirlpoolOW(script_s*);
extern const txt_cmd_s AskWhirlpoolText[];
void HeadbuttFunction(void);
void TryHeadbuttFromMenu(void);
uint8_t TryHeadbuttFromMenu_Conv(void);
extern const txt_cmd_s UseHeadbuttText[];
extern const txt_cmd_s HeadbuttNothingText[];
bool HeadbuttFromMenuScript(script_s* s);
bool HeadbuttScript(script_s* s);
void TryHeadbuttOW(void);
bool TryHeadbuttOW_Conv(void);
bool AskHeadbuttScript(script_s* s);
extern const txt_cmd_s AskHeadbuttText[];
void RockSmashFunction(void);
void TryRockSmashFromMenu(void);
uint8_t TryRockSmashFromMenu_Conv(void);
void GetFacingObject(void);
u8_flag_s GetFacingObject_Conv(void);
bool RockSmashFromMenuScript(script_s* s);
bool RockSmashScript(script_s* s);
extern const uint8_t MovementData_RockSmash[];
extern const txt_cmd_s UseRockSmashText[];
bool AskRockSmashScript(script_s* s);
extern const txt_cmd_s MaySmashText[];
extern const txt_cmd_s AskRockSmashText[];
void HasRockSmash(void);
void FishFunction(void);
void FishFunction_Conv(uint8_t rod);
bool Script_NotEvenANibble(script_s* s);
bool Script_NotEvenANibble2(script_s* s);
bool Script_NotEvenANibble_FallThrough(script_s* s);
bool Script_GotABite(script_s* s);
void Fishing_CheckFacingUp(void);
bool Script_FishCastRod(script_s* s);
extern const uint8_t MovementData_CastRod[];
void PutTheRodAway(void);
extern const txt_cmd_s RodBiteText[];
extern const txt_cmd_s RodNothingText[];
extern const txt_cmd_s UnusedNothingHereText[];
void BikeFunction(void);
bool Script_GetOnBike(script_s*);
bool Script_GetOnBike_Register(script_s*);
void Overworld_DummyFunction(void);
bool Script_GetOffBike(script_s*);
bool FinishGettingOffBike(script_s*);
bool Script_GetOffBike_Register(script_s*);
bool Script_CantGetOffBike(script_s*);
extern const txt_cmd_s GotOnBikeText[];
extern const txt_cmd_s GotOffBikeText[];
void TryCutOW(void);
u8_flag_s TryCutOW_Conv(void);
bool AskCutScript(script_s* s);
extern const txt_cmd_s AskCutText[];
bool CantCutScript(script_s* s);
extern const txt_cmd_s CanCutText[];
//#include "data/collision/field_move_blocks.h"
