void BattleStatsScreenInit(void);
void StatsScreenInit(void);
void v_MobileStatsScreenInit(void);
void StatsScreenInit_gotaddress(void);
void StatsScreenInit_Common(void (*hl)(void));
void StatsScreenMain(void);
void StatsScreenMobile(void);
// void StatsScreenPointerTable(void);
void StatsScreen_WaitAnim(void);
void StatsScreen_SetJumptableIndex(void);
void StatsScreen_Exit(void);
void MonStatsInit(void);
void EggStatsInit(void);
void EggStatsJoypad(void);
void StatsScreen_LoadPage(void);
void MonStatsJoypad(void);
void StatsScreenWaitCry(void);
void StatsScreen_CopyToTempMon(void);
void StatsScreen_CopyToTempMon_Conv(void);
void StatsScreen_GetJoypad(void);
bool StatsScreen_GetJoypad_Conv(uint8_t* a);
void StatsScreen_JoypadAction(void);
void StatsScreen_JoypadAction_Conv(uint8_t a);
void StatsScreen_InitUpperHalf(void);
void StatsScreen_PlaceVerticalDivider(void);
void StatsScreen_PlaceHorizontalDivider(void);
void StatsScreen_PlacePageSwitchArrows(void);
void StatsScreen_PlaceShinyIcon(void);
void StatsScreen_LoadGFX(void);
void LoadPinkPage(void);
void LoadGreenPage(void);
void LoadBluePage(void);
// void IDNoString(void);
// void OTString(void);
void StatsScreen_PlaceFrontpic(void);
void StatsScreen_GetAnimationParam(void);
u8_flag_s StatsScreen_GetAnimationParam_Conv(void);
void StatsScreen_LoadTextboxSpaceGFX(void);
void StatsScreenSpaceGFX(void);
void EggStatsScreen(void);
extern const char EggString[];
extern const char FiveQMarkString[];
extern const char EggSoonString[];
extern const char EggCloseString[];
extern const char EggMoreTimeString[];
extern const char EggALotMoreTimeString[];
void StatsScreen_AnimateEgg(void);
void StatsScreen_LoadPageIndicators(void);
void StatsScreen_LoadPageIndicators_Conv(uint8_t c);
void CopyNickname(void);
uint8_t* CopyNickname_Conv(uint8_t* hl);
void GetNicknamenamePointer(void);
uint8_t* GetNicknamenamePointer_Conv(void);
void CheckFaintedFrzSlp(void);
bool CheckFaintedFrzSlp_Conv(struct PartyMon* bc);
//#include "gfx/font/space.2bpp"
