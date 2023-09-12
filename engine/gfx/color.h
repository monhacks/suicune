void CheckShininess(void);
void Unused_CheckShininess(void);
void SGB_ApplyCreditsPals(void);
void InitPartyMenuPalettes(void);
void SGB_ApplyPartyMenuHPPals(void);
void Intro_LoadMagikarpPalettes(void);
void Intro_LoadAllPal0(void);
void Intro_LoadBetaIntroVenusaurPalettes(void);
void Intro_LoadPackPalettes(void);
void GSIntro_LoadMonPalette(void);
void LoadTrainerClassPaletteAsNthBGPal(void);
void LoadMonPaletteAsNthBGPal(void);
void LoadNthMiddleBGPal(void);
void LoadBetaPokerPalettes(void);
void ApplyMonOrTrainerPals(void);
void ApplyHPBarPals(void);
void LoadStatsScreenPals(void);
void LoadMailPalettes(void);
void CopyFourPalettes(void);
void CopyPalettes(void);
void GetPredefPal(void);
void LoadHLPaletteIntoDE(void);
void LoadPalette_White_Col1_Col2_Black(void);
void FillBoxCGB(void);
void ResetBGPals(void);
void WipeAttrmap(void);
void ApplyPals(void);
void ApplyPals_Conv(void);
void ApplyAttrmap(void);
void CGB_ApplyPartyMenuHPPals(void);
void InitPartyMenuOBPals(void);
void GetBattlemonBackpicPalettePointer(void);
void GetEnemyFrontpicPalettePointer(void);
void GetPlayerOrMonPalettePointer(void);
void GetFrontpicPalettePointer(void);
void GetTrainerPalettePointer(void);
void GetMonPalettePointer(void);
void CGBCopyBattleObjectPals(void);
void BattleObjectPals(void);
void CGBCopyTwoPredefObjectPals(void);
void v_GetMonPalettePointer(void);
void GetMonNormalOrShinyPalettePointer(void);
void PushSGBPals(void);
void v_PushSGBPals(void);
void InitSGBBorder(void);
void InitCGBPals(void);
void v_InitSGBBorderPals(void);
void UpdateSGBBorder(void);
void PushSGBBorder(void);
void SGB_ClearVRAM(void);
void PushSGBBorderPalsAndWait(void);
void SGBBorder_PushBGPals(void);
void SGBBorder_MorePalPushing(void);
void SGBBorder_YetMorePalPushing(void);
void CopyData(void);
void ClearBytes(void);
void DrawDefaultTiles(void);
void SGBDelayCycles(void);
// void PredefPals(void);
// void SGBBorderMapAndPalettes(void);
// void SGBBorderGFX(void);
// void HPBarPals(void);
// void ExpBarPalette(void);
void LoadMapPals(void);
extern const char PartyMenuBGMobilePalette[];
extern const char PartyMenuBGPalette[];
extern const char TilesetBGPalette[];
extern const char MapObjectPals[];
extern const uint16_t RoofPals[][4];
extern const char DiplomaPalettes[];
extern const char PartyMenuOBPals[];
extern const char UnusedBattleObjectPals[];
extern const char UnusedGSTitleBGPals[];
extern const char UnusedGSTitleOBPals[];
extern const char MalePokegearPals[];
extern const char FemalePokegearPals[];
extern const char BetaPokerPals[];
extern const char SlotMachinePals[];
//#include "engine/gfx/sgb_layouts.h"
//#include "gfx/intro/gs_magikarp_bg.pal"
//#include "gfx/intro/gs_magikarp_ob.pal"
//#include "gfx/mail/mail.pal"
//#include "engine/gfx/cgb_layouts.h"
//#include "gfx/battle_anims/battle_anims.pal"
//#include "gfx/sgb/blk_packets.h"
//#include "gfx/sgb/pal_packets.h"
//#include "data/sgb_ctrl_packets.h"
//#include "gfx/sgb/predef.pal"
//#include "gfx/sgb/sgb_border.sgb.tilemap"
//#include "gfx/sgb/sgb_border.pal"
//#include "gfx/sgb/sgb_border.2bpp"
//#include "gfx/battle/hp_bar.pal"
//#include "gfx/battle/exp_bar.pal"
//#include "data/pokemon/palettes.h"
//#include "data/trainers/palettes.h"
//#include "data/maps/environment_colors.h"
//#include "gfx/stats/party_menu_bg_mobile.pal"
//#include "gfx/stats/party_menu_bg.pal"
//#include "gfx/tilesets/bg_tiles.pal"
//#include "gfx/overworld/npc_sprites.pal"
//#include "gfx/tilesets/roofs.pal"
//#include "gfx/diploma/diploma.pal"
//#include "gfx/stats/party_menu_ob.pal"
//#include "gfx/battle_anims/unused_battle_anims.pal"
//#include "gfx/title/unused_gs_bg.pal"
//#include "gfx/title/unused_gs_fg.pal"
//#include "gfx/pokegear/pokegear.pal"
//#include "gfx/pokegear/pokegear_f.pal"
//#include "gfx/beta_poker/beta_poker.pal"
//#include "gfx/slots/slots.pal"
