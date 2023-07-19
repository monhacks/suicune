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
void CheckPlayerLockedIn(void);
void ParsePlayerAction(void);
void HandleEncore(void);
void TryEnemyFlee(void);
void CompareMovePriority(void);
void GetMovePriority(void);
void GetMoveEffect(void);
void Battle_EnemyFirst(void);
void Battle_PlayerFirst(void);
void PlayerTurn_EndOpponentProtectEndureDestinyBond(void);
void EnemyTurn_EndOpponentProtectEndureDestinyBond(void);
void EndOpponentProtectEndureDestinyBond(void);
void EndUserDestinyBond(void);
void HasUserFainted(void);
void HasEnemyFainted(void);
void HasPlayerFainted(void);
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
void SubtractHP(void);
void GetSixteenthMaxHP(void);
void GetEighthMaxHP(void);
void GetQuarterMaxHP(void);
void GetHalfMaxHP(void);
void GetMaxHP(void);
void GetHalfHP(void);
void CheckUserHasEnoughHP(void);
void RestoreHP(void);
void UpdateHPBarBattleHuds(void);
void UpdateHPBar(void);
void HandleEnemyMonFaint(void);
void DoubleSwitch(void);
void UpdateBattleStateAndExperienceAfterEnemyFaint(void);
void IsAnyMonHoldingExpShare(void);
void StopDangerSound(void);
void FaintYourPokemon(void);
void FaintEnemyPokemon(void);
void CheckEnemyTrainerDefeated(void);
void HandleEnemySwitch(void);
void EnemyPartyMonEntrance(void);
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
void ForcePlayerMonChoice(void);
void PlayerPartyMonEntrance(void);
void CheckMobileBattleError(void);
void IsMobileBattle(void);
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
void SlideBattlePicOut(void);
void ForceEnemySwitch(void);
void EnemySwitch(void);
void EnemySwitch_SetMode(void);
void CheckWhetherSwitchmonIsPredetermined(void);
void ResetEnemyBattleVars(void);
void ResetBattleParticipants(void);
void AddBattleParticipant(void);
void FindMonInOTPartyToSwitchIntoBattle(void);
void LookUpTheEffectivenessOfEveryMove(void);
void IsThePlayerMonTypesEffectiveAgainstOTMon(void);
void ScoreMonTypeMatchups(void);
void LoadEnemyMonToSwitchTo(void);
void CheckWhetherToAskSwitch(void);
void OfferSwitch(void);
void ClearEnemyMonBox(void);
void ShowBattleTextEnemySentOut(void);
void ShowSetEnemyMonAndSendOutAnimation(void);
void NewEnemyMonStatus(void);
void ResetEnemyStatLevels(void);
void CheckPlayerPartyForFitMon(void);
void CheckIfCurPartyMonIsFitToFight(void);
void TryToRunAwayFromBattle(void);
void InitBattleMon(void);
void BattleCheckPlayerShininess(void);
void BattleCheckEnemyShininess(void);
void BattleCheckShininess(void);
void GetPartyMonDVs(void);
void GetEnemyMonDVs(void);
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
void GetOTPartymonItem(void);
void UpdateBattleHUDs(void);
void UpdatePlayerHUD(void);
void DrawPlayerHUD(void);
void UpdatePlayerHPPal(void);
void CheckDanger(void);
void PrintPlayerHUD(void);
void UpdateEnemyHUD(void);
void DrawEnemyHUD(void);
void UpdateEnemyHPPal(void);
void UpdateHPPal(void);
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
void MoveSelectionScreen(void);
void MoveInfoBox(void);
void CheckPlayerHasUsableMoves(void);
void ParseEnemyAction(void);
void ResetVarsForSubstatusRage(void);
void CheckEnemyLockedIn(void);
void LinkBattleSendReceiveAction(void);
void LoadEnemyMon(void);
void CheckSleepingTreeMon(void);
void CheckUnownLetter(void);
void SwapBattlerLevels(void);
void BattleWinSlideInEnemyTrainerFrontpic(void);
void ApplyStatusEffectOnPlayerStats(void);
void ApplyStatusEffectOnEnemyStats(void);
void ApplyStatusEffectOnStats(void);
void ApplyPrzEffectOnSpeed(void);
void ApplyBrnEffectOnAttack(void);
void ApplyStatLevelMultiplierOnAllStats(void);
void ApplyStatLevelMultiplier(void);
void BadgeStatBoosts(void);
void BoostStat(void);
void v_LoadBattleFontsHPBar(void);
void v_LoadHPBar(void);
void LoadHPExpBarGFX(void);
void EmptyBattleTextbox(void);
void v_BattleRandom(void);
void Call_PlayBattleAnim_OnlyIfVisible(void);
void Call_PlayBattleAnim(void);
void FinishBattleAnim(void);
void GiveExperiencePoints(void);
void BoostExp(void);
void Text_MonGainedExpPoint(void);
void BoostedExpPointsText(void);
void ExpPointsText(void);
void AnimateExpBar(void);
void SendOutMonText(void);
void GoMonText(void);
void DoItMonText(void);
void GoForItMonText(void);
void YourFoesWeakGetmMonText(void);
void PrepareBattleMonNicknameText(void);
void BattleMonNicknameText(void);
void WithdrawMonText(void);
void ThatsEnoughComeBackText(void);
void OKComeBackText(void);
void GoodComeBackText(void);
void TextJump_ComeBack(void);
void ComeBackText(void);
void HandleSafariAngerEatingStatus(void);
void FillInExpBar(void);
void CalcExpBar(void);
void PlaceExpBar(void);
void GetBattleMonBackpic(void);
void DropPlayerSub(void);
void GetBattleMonBackpic_DoAnim(void);
void GetEnemyMonFrontpic(void);
void DropEnemySub(void);
void GetEnemyMonFrontpic_DoAnim(void);
void StartBattle(void);
void CallDoBattle(void);
void BattleIntro(void);
void LoadTrainerOrWildMonPic(void);
void InitEnemy(void);
void BackUpBGMap2(void);
void InitEnemyTrainer(void);
void InitEnemyWildmon(void);
void FillEnemyMovesFromMoveIndicesBuffer(void);
void ExitBattle(void);
void CleanUpBattleRAM(void);
void CheckPayDay(void);
void ShowLinkBattleParticipantsAfterEnd(void);
void DisplayLinkBattleResult(void);
void IsMobileBattle2(void);
void v_DisplayLinkRecord(void);
void ReadAndPrintLinkBattleRecord(void);
void BattleEnd_HandleRoamMons(void);
void GetRoamMonMapGroup(void);
void GetRoamMonMapNumber(void);
void GetRoamMonHP(void);
void GetRoamMonDVs(void);
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
