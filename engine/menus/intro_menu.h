void Intro_MainMenu();
void IntroMenu_DummyFunction(void);
void PrintDayOfWeek(void);
void PrintDayOfWeek_Conv(tile_t* de, uint8_t b);
void NewGame_ClearTilemapEtc(void);
void MysteryGift(void);
void Option(void);
void NewGame(void);
void AreYouABoyOrAreYouAGirl(void);
void DebugRoom(void);
void ResetWRAM(void);
void v_ResetWRAM(void);
void SetDefaultBoxNames(void);
void InitializeMagikarpHouse(void);
void InitializeNPCNames(void);
void InitializeWorld(void);
void LoadOrRegenerateLuckyIDNumber(void);
void Continue(void);
void SpawnAfterRed(void);
void PostCreditsSpawn(void);
void Continue_MobileAdapterMenu(void);
void ConfirmContinue(void);
bool ConfirmContinue_Conv(void);
void Continue_CheckRTC_RestartClock(void);
void FinishContinueFunction(void);
void DisplaySaveInfoOnContinue(void);
void DisplaySaveInfoOnSave(void);
void DisplayNormalContinueData(void);
void DisplayContinueDataWithRTCError(void);
void Continue_LoadMenuHeader(void);
void Continue_DisplayBadgesDexPlayerName(void);
void Continue_PrintGameTime(void);
void Continue_UnknownGameTime(void);
void Continue_DisplayBadgeCount(void);
void Continue_DisplayPokedexNumCaught(void);
void Continue_DisplayGameTime(void);
void OakSpeech(void);
extern const txt_cmd_s OakText1[];
extern const txt_cmd_s OakText2[];
extern const txt_cmd_s OakText3[];
extern const txt_cmd_s OakText4[];
extern const txt_cmd_s OakText5[];
extern const txt_cmd_s OakText6[];
extern const txt_cmd_s OakText7[];
void NamePlayer(void);
void GSShowPlayerNamingChoices(void);
void StorePlayerName(void);
void ShrinkPlayer(void);
void Intro_RotatePalettesLeftFrontpic(void);
void IntroFadePalettes(void);
void Intro_WipeInFrontpic(void);
void Intro_PrepTrainerPic(void);
void ShrinkFrame(void);
void ShrinkFrame_Conv(const char* path);
void Intro_PlacePlayerSprite(void);
void Intro_PlacePlayerSprite_Conv(void);
void IntroSequence(void);
void StartTitleScreen(void);
void RunTitleScreen(void);
void UnusedTitlePerspectiveScroll(void);
void TitleScreenScene(void);
void TitleScreenScene_Conv(uint8_t a);
void TitleScreenNextScene(void);
void TitleScreenEntrance(void);
void TitleScreenEntrance_Conv(void);
void TitleScreenTimer(void);
void TitleScreenTimer_Conv(void);
void TitleScreenMain(void);
void TitleScreenMain_Conv(void);
void TitleScreenEnd(void);
void TitleScreenEnd_Conv(void);
void DeleteSaveData(void);
void ResetClock(void);
void UpdateTitleTrailSprite(void);
void Copyright(void);
// void CopyrightString(void);
extern uint8_t CopyrightString[];
void GameInit(void);
