bool SaveMenu(void);
void SaveAfterLinkTrade(void);
void ChangeBoxSaveGame(void);
bool Link_SaveGame(void);
void MoveMonWOMail_SaveGame(void);
void MoveMonWOMail_InsertMon_SaveGame(void);
bool StartMoveMonWOMail_SaveGame(void);
void PauseGameLogic(void);
void ResumeGameLogic(void);
void AddHallOfFameEntry(void);
void SaveGameData(void);
bool AskOverwriteSaveFile(void);
bool SaveTheGame_yesorno(const txt_cmd_s*);
bool CompareLoadedAndSavedPlayerID(void);
void v_SavingDontTurnOffThePower(void);
void SavedTheGame(void);
void v_SaveGameData(void);
void UpdateStackTop(void);
uint8_t* FindStackTop(void);
void SavingDontTurnOffThePower(void);
void ErasePreviousSave(void);
void EraseLinkBattleStats(void);
void EraseMysteryGift(void);
void EraseHallOfFame(void);
void Function14d18(void);
void EraseBattleTowerStatus(void);
void SaveData(void);
void Function14d6c(void);
void Function14d83(void);
void Function14d93(void);
void HallOfFame_InitSaveIfNeeded(void);
void ValidateSave(void);
void SaveOptions(void);
void SavePlayerData(void);
void SavePokemonData(void);
void SaveBox(void);
void SaveChecksum(void);
void ValidateBackupSave(void);
void SaveBackupOptions(void);
void SaveBackupPlayerData(void);
void SaveBackupPokemonData(void);
void SaveBackupChecksum(void);
bool TryLoadSaveFile(void);
void TryLoadSaveData(void);
void CheckPrimarySaveFile(void);
void CheckBackupSaveFile(void);
void LoadPlayerData(void);
void LoadPokemonData(void);
void LoadBox(void);
bool VerifyChecksum(void);
void LoadBackupPlayerData(void);
void LoadBackupPokemonData(void);
bool VerifyBackupChecksum(void);
void v_SaveData(void);
void v_LoadData(void);
uint32_t GetBoxAddress(void);
void SaveBoxAddress(uint32_t de);
void LoadBoxAddress(uint32_t de);
void EraseBoxes(void);
// void BoxAddresses(void);
uint16_t Checksum(uint8_t* hl, uint16_t bc);
extern const txt_cmd_s WouldYouLikeToSaveTheGameText[];
extern const txt_cmd_s SavingDontTurnOffThePowerText[];
extern const txt_cmd_s SavedTheGameText[];
extern const txt_cmd_s AlreadyASaveFileText[];
extern const txt_cmd_s AnotherSaveFileText[];
extern const txt_cmd_s SaveFileCorruptedText[];
extern const txt_cmd_s ChangeBoxSaveText[];
extern const txt_cmd_s MoveMonWOMailSaveText[];
//#include "data/default_options.h"
