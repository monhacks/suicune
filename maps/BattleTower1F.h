#pragma once
//// EVENTS
extern const struct MapScripts BattleTower1F_MapScripts;
extern const struct MapEvents BattleTower1F_MapEvents;

//// CODE

bool BattleTower1F_MapScripts_Scene0(script_s* s);
bool BattleTower1F_MapScripts_Scene1(script_s* s);
bool BattleTower1FRulesSign(script_s* s);
bool BattleTower1FReceptionistScript(script_s* s);
bool Script_Menu_ChallengeExplanationCancel(script_s* s);
bool Script_ChooseChallenge(script_s* s);
bool Script_ResumeBattleTowerChallenge(script_s* s);
bool Script_WalkToBattleTowerElevator(script_s* s);
bool Script_GivePlayerHisPrize(script_s* s);
bool Script_YourPackIsStuffedFull(script_s* s);
bool Script_BattleTowerIntroductionYesNo(script_s* s);
bool Script_BattleTowerExplanation(script_s* s);
bool Script_BattleTowerSkipExplanation(script_s* s);
bool Script_BattleTowerHopeToServeYouAgain(script_s* s);
bool Script_MobileError2(script_s* s);
bool Script_WaitButton(script_s* s);
bool Script_ChooseChallenge2(script_s* s);
bool Script_StartChallenge(script_s* s);
bool Script_ReachedBattleLimit(script_s* s);
bool Script_AMonLevelExceeds(script_s* s);
bool Script_MayNotEnterABattleRoomUnderL70(script_s* s);
bool Script_MobileError(script_s* s);
bool BattleTower_LeftWithoutSaving(script_s* s);
bool BattleTower1FYoungsterScript(script_s* s);
bool BattleTower1FCooltrainerFScript(script_s* s);
bool BattleTower1FBugCatcherScript(script_s* s);
bool BattleTower1FGrannyScript(script_s* s);
extern const uint8_t MovementData_BattleTower1FWalkToElevator[];
extern const uint8_t MovementData_BattleTowerHallwayPlayerEntersBattleRoom[];
extern const uint8_t MovementData_BattleTowerElevatorExitElevator[];
extern const uint8_t MovementData_BattleTowerHallwayWalkTo1020Room[];
extern const uint8_t MovementData_BattleTowerHallwayWalkTo3040Room[];
extern const uint8_t MovementData_BattleTowerHallwayWalkTo90100Room[];
extern const uint8_t MovementData_BattleTowerHallwayWalkTo7080Room[];
extern const uint8_t MovementData_BattleTowerHallwayWalkTo5060Room[];
extern const uint8_t MovementData_BattleTowerBattleRoomPlayerWalksIn[];
extern const uint8_t MovementData_BattleTowerBattleRoomOpponentWalksIn[];
extern const uint8_t MovementData_BattleTowerBattleRoomOpponentWalksOut[];
extern const uint8_t MovementData_BattleTowerBattleRoomReceptionistWalksToPlayer[];
extern const uint8_t MovementData_BattleTowerBattleRoomReceptionistWalksAway[];
extern const uint8_t MovementData_BattleTowerBattleRoomPlayerTurnsToFaceReceptionist[];
extern const uint8_t MovementData_BattleTowerBattleRoomPlayerTurnsToFaceNextOpponent[];
extern const txt_cmd_s Text_BattleTowerWelcomesYou[];
extern const txt_cmd_s Text_WantToGoIntoABattleRoom[];
extern const txt_cmd_s Text_RightThisWayToYourBattleRoom[];
extern const txt_cmd_s Text_BattleTowerIntroduction_1[];
extern const txt_cmd_s Text_BattleTowerIntroduction_2[];
extern const txt_cmd_s Text_ReceivedAListOfLeadersOnTheHonorRoll[];
extern const txt_cmd_s Text_PleaseConfirmOnThisMonitor[];
extern const txt_cmd_s Text_ThankYou[];
extern const txt_cmd_s Text_ThanksForVisiting[];
extern const txt_cmd_s Text_BeatenAllTheTrainers_Mobile[];
extern const txt_cmd_s Text_CongratulationsYouveBeatenAllTheTrainers[];
extern const txt_cmd_s Text_AskRegisterRecord_Mobile[];
extern const txt_cmd_s Text_PlayerGotFive[];
extern const txt_cmd_s Text_YourPackIsStuffedFull[];
extern const txt_cmd_s Text_YourRegistrationIsComplete[];
extern const txt_cmd_s Text_WeHopeToServeYouAgain[];
extern const txt_cmd_s Text_PleaseStepThisWay[];
extern const txt_cmd_s Text_WouldYouLikeToHearAboutTheBattleTower[];
extern const txt_cmd_s Text_CantBeRegistered[];
extern const txt_cmd_s Text_CantBeRegistered_PreviousRecordDeleted[];
extern const txt_cmd_s Text_CheckTheLeaderHonorRoll[];
extern const txt_cmd_s Text_ReadBattleTowerRules[];
extern const txt_cmd_s Text_BattleTowerRules[];
extern const txt_cmd_s Text_BattleTower_LeftWithoutSaving[];
extern const txt_cmd_s Text_YourMonWillBeHealedToFullHealth[];
extern const txt_cmd_s Text_NextUpOpponentNo[];
extern const txt_cmd_s Text_SaveBeforeConnecting_Mobile[];
extern const txt_cmd_s Text_SaveBeforeEnteringBattleRoom[];
extern const txt_cmd_s Text_SaveAndEndTheSession[];
extern const txt_cmd_s Text_SaveBeforeReentry[];
extern const txt_cmd_s Text_CancelYourBattleRoomChallenge[];
extern const txt_cmd_s Text_RegisterRecordOnFile_Mobile[];
extern const txt_cmd_s Text_WeveBeenWaitingForYou[];
extern const txt_cmd_s Text_FiveDayBattleLimit_Mobile[];
extern const txt_cmd_s Text_TooMuchTimeElapsedNoRegister[];
extern const txt_cmd_s Text_RegisterRecordTimedOut_Mobile[];
extern const txt_cmd_s Text_AMonLevelExceeds[];
extern const txt_cmd_s Text_MayNotEnterABattleRoomUnderL70[];
extern const txt_cmd_s Text_BattleTowerYoungster[];
extern const txt_cmd_s Text_BattleTowerCooltrainerF[];
extern const txt_cmd_s Text_BattleTowerGranny[];
extern const txt_cmd_s Text_BattleTowerBugCatcher[];
