#pragma once
//// EVENTS
extern const struct MapScripts Pokecenter2F_MapScripts;
extern const struct MapEvents Pokecenter2F_MapEvents;

//// CODE

bool Pokecenter2F_MapScripts_Scene0(script_s* s);
bool Pokecenter2F_MapScripts_Scene0Done(script_s* s);
bool Pokecenter2F_MapScripts_Scene1(script_s* s);
bool Pokecenter2F_MapScripts_Scene2(script_s* s);
bool Pokecenter2F_MapScripts_Scene3(script_s* s);
bool Pokecenter2F_MapScripts_Scene4(script_s* s);
bool Pokecenter2F_MapScripts_Scene5(script_s* s);
bool Pokecenter2F_AppearMysteryGiftDeliveryGuy(script_s* s);
bool Script_TradeCenterClosed(script_s* s);
bool Script_BattleRoomClosed(script_s* s);
bool LinkReceptionistScript_Trade(script_s* s);
bool BattleTradeMobile_WalkIn(script_s* s);
bool LinkReceptionistScript_Battle(script_s* s);
bool Script_TimeCapsuleClosed(script_s* s);
bool LinkReceptionistScript_TimeCapsule(script_s* s);
bool Script_LeftCableTradeCenter(script_s* s);
bool Script_LeftMobileTradeRoom(script_s* s);
bool Script_WalkOutOfMobileTradeRoom(script_s* s);
bool Script_LeftCableColosseum(script_s* s);
bool Script_LeftMobileBattleRoom(script_s* s);
bool Script_WalkOutOfMobileBattleRoom(script_s* s);
bool Pokecenter2F_CheckGender(script_s* s);
bool Script_WalkOutOfLinkTradeRoom(script_s* s);
bool Script_WalkOutOfLinkBattleRoom(script_s* s);
bool TimeCapsuleScript_CheckPlayerGender(script_s* s);
bool Script_LeftTimeCapsule(script_s* s);
bool Pokecenter2FLinkRecordSign(script_s* s);
bool Pokecenter2FOfficerScript(script_s* s);
extern const uint8_t Pokecenter2FMovementData_ReceptionistWalksUpAndLeft_LookRight[];
extern const uint8_t Pokecenter2FMobileMobileMovementData_ReceptionistWalksUpAndLeft_LookDown[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsLeftLooksDown[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsRightLooksDown[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistWalksUpAndLeft_LookRight_2[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistLooksRight[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesThreeStepsUp[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesTwoStepsUp[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesOneStepUp[];
extern const uint8_t Pokecenter2FMobileMovementData_PlayerWalksIntoMobileBattleRoom[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesTwoStepsUp_2[];
extern const uint8_t Pokecenter2FMovementData_PlayerWalksLeftAndUp[];
extern const uint8_t Pokecenter2FMovementData_PlayerWalksRightAndUp[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesThreeStepsDown[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesTwoStepsDown[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesOneStepDown[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsRightAndDown[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsRightLooksDown_2[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsRightLooksDown_3[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsLeftLooksRight[];
extern const uint8_t Pokecenter2FMobileMovementData_ReceptionistWalksUpAndLeft[];
extern const uint8_t Pokecenter2FMovementData_PlayerWalksOutOfMobileRoom[];
extern const uint8_t Pokecenter2FMobileMovementData_ReceptionistWalksRightAndDown[];
extern const uint8_t Pokecenter2FMovementData_PlayerSpinsClockwiseEndsFacingRight[];
extern const uint8_t Pokecenter2FMovementData_PlayerSpinsClockwiseEndsFacingLeft[];
extern const uint8_t Pokecenter2FMovementData_PlayerSpinsClockwiseEndsFacingDown[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesOneStepDown_2[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesTwoStepsDown_2[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesOneStepUp_2[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesOneStepRight[];
extern const uint8_t Pokecenter2FMovementData_PlayerTakesOneStepLeft[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsLeftLooksRight_2[];
extern const uint8_t Pokecenter2FMovementData_ReceptionistStepsRightLooksLeft_2[];
extern const txt_cmd_s Text_BattleReceptionistMobile[];
extern const txt_cmd_s Text_TradeReceptionistMobile[];
extern const txt_cmd_s Text_ThisWayToMobileRoom[];
extern const txt_cmd_s Text_BattleReceptionistIntro[];
extern const txt_cmd_s Text_TradeReceptionistIntro[];
extern const txt_cmd_s Text_TimeCapsuleReceptionistIntro[];
extern const txt_cmd_s YourFriendIsNotReadyText[];
extern const txt_cmd_s Text_MustSaveGame[];
extern const txt_cmd_s Text_PleaseWait[];
extern const txt_cmd_s Text_LinkTimedOut[];
extern const txt_cmd_s Text_PleaseComeAgain[];
extern const txt_cmd_s Text_PleaseComeInDuplicate[];
extern const txt_cmd_s Text_TemporaryStagingInLinkRoom[];
extern const txt_cmd_s Text_CantLinkToThePast[];
extern const txt_cmd_s Text_IncompatibleRooms[];
extern const txt_cmd_s Text_PleaseComeIn[];
extern const txt_cmd_s Text_PleaseEnter[];
extern const txt_cmd_s Text_RejectNewMon[];
extern const txt_cmd_s Text_RejectMonWithNewMove[];
extern const txt_cmd_s Text_RejectMonWithMail[];
extern const txt_cmd_s Text_TimeCapsuleClosed[];
extern const txt_cmd_s Text_TradeRoomClosed[];
extern const txt_cmd_s Text_BattleRoomClosed[];
extern const txt_cmd_s Text_MysteryGiftDeliveryGuy_Intro[];
extern const txt_cmd_s Text_MysteryGiftDeliveryGuy_HereYouGo[];
extern const txt_cmd_s Text_MysteryGiftDeliveryGuy_Outro[];
extern const txt_cmd_s Text_MysteryGiftDeliveryGuy_NoRoom[];
extern const txt_cmd_s Text_MysteryGiftDeliveryGuy_SaidNo[];
extern const txt_cmd_s Text_OhPleaseWait[];
extern const txt_cmd_s Text_ChangeTheLook[];
extern const txt_cmd_s Text_LikeTheLook[];
extern const txt_cmd_s Text_BrokeStadiumRules[];
