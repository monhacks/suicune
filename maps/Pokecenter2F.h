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
extern const struct TextCmd Text_BattleReceptionistMobile[];
extern const struct TextCmd Text_TradeReceptionistMobile[];
extern const struct TextCmd Text_ThisWayToMobileRoom[];
extern const struct TextCmd Text_BattleReceptionistIntro[];
extern const struct TextCmd Text_TradeReceptionistIntro[];
extern const struct TextCmd Text_TimeCapsuleReceptionistIntro[];
extern const struct TextCmd YourFriendIsNotReadyText[];
extern const struct TextCmd Text_MustSaveGame[];
extern const struct TextCmd Text_PleaseWait[];
extern const struct TextCmd Text_LinkTimedOut[];
extern const struct TextCmd Text_PleaseComeAgain[];
extern const struct TextCmd Text_PleaseComeInDuplicate[];
extern const struct TextCmd Text_TemporaryStagingInLinkRoom[];
extern const struct TextCmd Text_CantLinkToThePast[];
extern const struct TextCmd Text_IncompatibleRooms[];
extern const struct TextCmd Text_PleaseComeIn[];
extern const struct TextCmd Text_PleaseEnter[];
extern const struct TextCmd Text_RejectNewMon[];
extern const struct TextCmd Text_RejectMonWithNewMove[];
extern const struct TextCmd Text_RejectMonWithMail[];
extern const struct TextCmd Text_TimeCapsuleClosed[];
extern const struct TextCmd Text_TradeRoomClosed[];
extern const struct TextCmd Text_BattleRoomClosed[];
extern const struct TextCmd Text_MysteryGiftDeliveryGuy_Intro[];
extern const struct TextCmd Text_MysteryGiftDeliveryGuy_HereYouGo[];
extern const struct TextCmd Text_MysteryGiftDeliveryGuy_Outro[];
extern const struct TextCmd Text_MysteryGiftDeliveryGuy_NoRoom[];
extern const struct TextCmd Text_MysteryGiftDeliveryGuy_SaidNo[];
extern const struct TextCmd Text_OhPleaseWait[];
extern const struct TextCmd Text_ChangeTheLook[];
extern const struct TextCmd Text_LikeTheLook[];
extern const struct TextCmd Text_BrokeStadiumRules[];
