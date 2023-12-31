void DoBattle(void);
void WildFled_EnemyFled_LinkBattleCanceled(void);
void BattleTurn(void);
void Stubbed_Increments5_a89a(void);
void HandleBetweenTurnEffects(void);
void CheckFaint_PlayerThenEnemy(void);
void CheckFaint_EnemyThenPlayer(void);
void HandleBerserkGene(void);
void EnemyTriesToFlee(void);
void DetermineMoveOrder(void);
void CheckContestBattleOver(void);
bool CheckContestBattleOver_Conv(void);
void CheckPlayerLockedIn(void);
bool CheckPlayerLockedIn_Conv(void);
void ParsePlayerAction(void);
bool ParsePlayerAction_Conv(void);
void HandleEncore(void);
void TryEnemyFlee(void);
void CompareMovePriority(void);
void GetMovePriority(void);
void GetMoveEffect(void);
uint8_t GetMoveEffect_Conv(move_t b);
void Battle_EnemyFirst(void);
void Battle_PlayerFirst(void);
void PlayerTurn_EndOpponentProtectEndureDestinyBond(void);
void EnemyTurn_EndOpponentProtectEndureDestinyBond(void);
void EndOpponentProtectEndureDestinyBond(void);
void EndUserDestinyBond(void);
void HasUserFainted(void);
bool HasUserFainted_Conv(void);
void HasEnemyFainted(void);
bool HasEnemyFainted_Conv(void);
void HasPlayerFainted(void);
bool HasPlayerFainted_Conv(void);
void CheckIfHPIsZero(void);
void ResidualDamage(void);
void HandlePerishSong(void);
void HandleWrap(void);
void SwitchTurnCore(void);
void HandleLeftovers(void);
void HandleMysteryberry(void);
void HandleFutureSight(void);
void HandleDefrost(void);
void HandleSafeguard(void);
void HandleScreens(void);
void HandleWeather(void);
void SubtractHPFromTarget(void);
void SubtractHPFromUser(void);
void SubtractHPFromUser_Conv(uint16_t hp);
void SubtractHP(void);
void SubtractHP_Conv(uint16_t bc);
void GetSixteenthMaxHP(void);
uint16_t GetSixteenthMaxHP_Conv(void);
void GetEighthMaxHP(void);
uint16_t GetEighthMaxHP_Conv(void);
void GetQuarterMaxHP(void);
uint16_t GetQuarterMaxHP_Conv(void);
void GetHalfMaxHP(void);
uint16_t GetHalfMaxHP_Conv(void);
void GetMaxHP(void);
uint16_t GetMaxHP_Conv(void);
void GetHalfHP(void);
void CheckUserHasEnoughHP(void);
bool CheckUserHasEnoughHP_Conv(uint16_t bc);
void RestoreHP(void);
void RestoreHP_Conv(uint16_t bc);
void UpdateHPBarBattleHuds(void);
void UpdateHPBar(void);
void HandleEnemyMonFaint(void);
void DoubleSwitch(void);
void UpdateBattleStateAndExperienceAfterEnemyFaint(void);
void IsAnyMonHoldingExpShare(void);
uint8_t IsAnyMonHoldingExpShare_Conv(void);
void StopDangerSound(void);
void FaintYourPokemon(void);
void FaintEnemyPokemon(void);
void CheckEnemyTrainerDefeated(void);
bool CheckEnemyTrainerDefeated_Conv(void);
void HandleEnemySwitch(void);
uint8_t HandleEnemySwitch_Conv(void);
void EnemyPartyMonEntrance(void);
uint8_t EnemyPartyMonEntrance_Conv(bool set);
void WinTrainerBattle(void);
void AddBattleMoneyToAccount(void);
void PlayVictoryMusic(void);
void IsKantoGymLeader(void);
bool IsKantoGymLeader_Conv(uint8_t a);
void IsGymLeader(void);
bool IsGymLeader_Conv(uint8_t a);
void IsGymLeaderCommon(void);
void HandlePlayerMonFaint(void);
void UpdateFaintedPlayerMon(void);
void AskUseNextPokemon(void);
bool AskUseNextPokemon_Conv(void);
void ForcePlayerMonChoice(void);
void PlayerPartyMonEntrance(void);
void CheckMobileBattleError(void);
bool CheckMobileBattleError_Conv(void);
void IsMobileBattle(void);
bool IsMobileBattle_Conv(void);
void SetUpBattlePartyMenu(void);
void SetUpBattlePartyMenu_Loop(void);
void JumpToPartyMenuAndPrintText(void);
void SelectBattleMon(void);
void PickPartyMonInBattle(void);
void SwitchMonAlreadyOut(void);
void ForcePickPartyMonInBattle(void);
void PickSwitchMonInBattle(void);
void ForcePickSwitchMonInBattle(void);
void LostBattle(void);
void EnemyMonFaintedAnimation(void);
void PlayerMonFaintedAnimation(void);
void MonFaintedAnimation(void);
void MonFaintedAnimation_Conv(tile_t* de, tile_t* hl);
void SlideBattlePicOut(void);
void SlideBattlePicOut_Conv(uint8_t* hl, uint8_t a);
void ForceEnemySwitch(void);
void EnemySwitch(void);
void EnemySwitch_SetMode(void);
void CheckWhetherSwitchmonIsPredetermined(void);
u8_flag_s CheckWhetherSwitchmonIsPredetermined_Conv(void);
void ResetEnemyBattleVars(void);
void ResetBattleParticipants(void);
void AddBattleParticipant(void);
void FindMonInOTPartyToSwitchIntoBattle(void);
void LookUpTheEffectivenessOfEveryMove(void);
void IsThePlayerMonTypesEffectiveAgainstOTMon(void);
void ScoreMonTypeMatchups(void);
void LoadEnemyMonToSwitchTo(void);
void LoadEnemyMonToSwitchTo_Conv(uint8_t b);
void CheckWhetherToAskSwitch(void);
bool CheckWhetherToAskSwitch_Conv(void);
void OfferSwitch(void);
bool OfferSwitch_Conv(void);
void ClearEnemyMonBox(void);
void ClearEnemyMonBox_Conv(void);
void ShowBattleTextEnemySentOut(void);
void ShowSetEnemyMonAndSendOutAnimation(void);
void NewEnemyMonStatus(void);
void NewEnemyMonStatus_Conv(void);
void ResetEnemyStatLevels(void);
void ResetEnemyStatLevels_Conv(void);
void CheckPlayerPartyForFitMon(void);
bool CheckPlayerPartyForFitMon_Conv(void);
void CheckIfCurPartyMonIsFitToFight(void);
bool CheckIfCurPartyMonIsFitToFight_Conv(void);
void TryToRunAwayFromBattle(void);
bool TryToRunAwayFromBattle_Conv(const struct PartyMon* hl, const struct BattleMon* de);
void InitBattleMon(void);
void BattleCheckPlayerShininess(void);
bool BattleCheckPlayerShininess_Conv(void);
void BattleCheckEnemyShininess(void);
bool BattleCheckEnemyShininess_Conv(void);
void BattleCheckShininess(void);
bool BattleCheckShininess_Conv(uint16_t dvs);
void GetPartyMonDVs(void);
uint16_t GetPartyMonDVs_Conv(void);
void GetEnemyMonDVs(void);
uint16_t GetEnemyMonDVs_Conv(void);
void ResetPlayerStatLevels(void);
void InitEnemyMon(void);
void SwitchPlayerMon(void);
void SendOutPlayerMon(void);
void NewBattleMonStatus(void);
void BreakAttraction(void);
void SpikesDamage(void);
void PursuitSwitch(void);
void RecallPlayerMon(void);
void HandleHealingItems(void);
void HandleHPHealingItem(void);
void UseOpponentItem(void);
void ItemRecoveryAnim(void);
void UseHeldStatusHealingItem(void);
void UseConfusionHealingItem(void);
void HandleStatBoostingHeldItems(void);
void GetPartymonItem(void);
void GetPartymonItem_Conv(item_t** hl, item_t** bc);
void GetOTPartymonItem(void);
void GetOTPartymonItem_Conv(item_t** hl, item_t** bc);
void UpdateBattleHUDs(void);
void UpdatePlayerHUD(void);
void DrawPlayerHUD(void);
uint8_t DrawPlayerHUD_Conv(void);
void UpdatePlayerHPPal(void);
void UpdatePlayerHPPal_Conv(uint8_t e);
void CheckDanger(void);
void PrintPlayerHUD(void);
void UpdateEnemyHUD(void);
void DrawEnemyHUD(void);
uint8_t DrawEnemyHUD_Conv(void);
void UpdateEnemyHPPal(void);
void UpdateEnemyHPPal_Conv(uint8_t e);
void UpdateHPPal(void);
void UpdateHPPal_Conv(uint8_t* hl, uint8_t e);
void Battle_DummyFunction(void);
void BattleMenu(void);
void BattleMenu_Fight(void);
void LoadBattleMenu2(void);
void BattleMenu_Pack(void);
void BattleMenu_PKMN(void);
void BattleMenuPKMN_ReturnFromStats(void);
void BattleMenuPKMN_Loop(void);
void Battle_StatsScreen(void);
void TryPlayerSwitch(void);
void PlayerSwitch(void);
void EnemyMonEntrance(void);
void BattleMonEntrance(void);
void PassedBattleMonEntrance(void);
void BattleMenu_Run(void);
void CheckAmuletCoin(void);
void CheckAmuletCoin_Conv(void);
void MoveSelectionScreen(void);
void MoveInfoBox(void);
void CheckPlayerHasUsableMoves(void);
void ParseEnemyAction(void);
void ResetVarsForSubstatusRage(void);
void CheckEnemyLockedIn(void);
bool CheckEnemyLockedIn_Conv(void);
void LinkBattleSendReceiveAction(void);
void LoadEnemyMon(void);
void CheckSleepingTreeMon(void);
bool CheckSleepingTreeMon_Conv(species_t species);
void CheckUnownLetter(void);
bool CheckUnownLetter_Conv(unown_letter_t a);
void SwapBattlerLevels(void);
void BattleWinSlideInEnemyTrainerFrontpic(void);
void ApplyStatusEffectOnPlayerStats(void);
void ApplyStatusEffectOnEnemyStats(void);
void ApplyStatusEffectOnStats(void);
void ApplyStatusEffectOnStats_Conv(uint8_t turn);
void ApplyPrzEffectOnSpeed(void);
void ApplyPrzEffectOnSpeed_Conv(uint8_t turn);
void ApplyBrnEffectOnAttack(void);
void ApplyBrnEffectOnAttack_Conv(uint8_t turn);
void ApplyStatLevelMultiplierOnAllStats(void);
void ApplyStatLevelMultiplier(void);
void BadgeStatBoosts(void);
void BoostStat(void);
uint8_t BoostStat_Conv(uint8_t* hl);
void v_LoadBattleFontsHPBar(void);
void v_LoadHPBar(void);
void LoadHPExpBarGFX(void);
void EmptyBattleTextbox(void);
void v_BattleRandom(void);
uint8_t v_BattleRandom_Conv(void);
void Call_PlayBattleAnim_OnlyIfVisible(void);
void Call_PlayBattleAnim(void);
void Call_PlayBattleAnim_Conv(uint16_t de);
void FinishBattleAnim(void);
void GiveExperiencePoints(void);
void BoostExp(void);
void Text_MonGainedExpPoint(void);
void BoostedExpPointsText(void);
void ExpPointsText(void);
void AnimateExpBar(void);
void SendOutMonText(void);
extern const struct TextCmd GoMonText[];
extern const struct TextCmd DoItMonText[];
extern const struct TextCmd GoForItMonText[];
extern const struct TextCmd YourFoesWeakGetmMonText[];
void PrepareBattleMonNicknameText(void);
void PrepareBattleMonNicknameText_Conv(struct TextCmdState* state);
extern const struct TextCmd BattleMonNicknameText[];
void WithdrawMonText(void);
void ThatsEnoughComeBackText(void);
void OKComeBackText(void);
void GoodComeBackText(void);
void TextJump_ComeBack(void);
void ComeBackText(void);
void HandleSafariAngerEatingStatus(void);
void FillInExpBar(void);
void FillInExpBar_Conv(uint8_t* hl, uint8_t b, const uint8_t* de);
void CalcExpBar(void);
uint8_t CalcExpBar_Conv(uint8_t b, const uint8_t* de);
void PlaceExpBar(void);
void PlaceExpBar_Conv(uint8_t* hl, uint8_t b);
void GetBattleMonBackpic(void);
void DropPlayerSub(void);
void GetBattleMonBackpic_DoAnim(void);
void GetBattleMonBackpic_DoAnim_Conv(void (*hl)(void));
void GetEnemyMonFrontpic(void);
void DropEnemySub(void);
void GetEnemyMonFrontpic_DoAnim(void);
void GetEnemyMonFrontpic_DoAnim_Conv(void (*hl)(void));
void StartBattle(void);
bool StartBattle_Conv(void);
void CallDoBattle(void);
void BattleIntro(void);
void LoadTrainerOrWildMonPic(void);
void InitEnemy(void);
void BackUpBGMap2(void);
void InitEnemyTrainer(void);
void InitEnemyTrainer_Conv(uint8_t tclass);
void InitEnemyWildmon(void);
void FillEnemyMovesFromMoveIndicesBuffer(void);
void ExitBattle(void);
void CleanUpBattleRAM(void);
void CheckPayDay(void);
void ShowLinkBattleParticipantsAfterEnd(void);
void DisplayLinkBattleResult(void);
void IsMobileBattle2(void);
bool IsMobileBattle2_Conv(void);
void v_DisplayLinkRecord(void);
void ReadAndPrintLinkBattleRecord(void);
void BattleEnd_HandleRoamMons(void);
void GetRoamMonMapGroup(void);
void GetRoamMonMapNumber(void);
void GetRoamMonHP(void);
uint8_t* GetRoamMonHP_Conv(species_t a);
void GetRoamMonDVs(void);
uint16_t* GetRoamMonDVs_Conv(species_t a);
void GetRoamMonSpecies(void);
void AddLastLinkBattleToLinkRecord(void);
void InitBattleDisplay(void);
void GetTrainerBackpic(void);
void CopyBackpic(void);
void BattleStartMessage(void);
//#include "data/wild/flee_mons.h"
//#include "data/moves/effects_priorities.h"
//#include "data/trainers/leaders.h"
//#include "data/battle/held_heal_status.h"
//#include "data/battle/held_stat_up.h"
//#include "data/wild/treemons_asleep.h"
//#include "data/wild/unlocked_unowns.h"
//#include "data/battle/stat_multipliers_2.h"
