void LinkCommunications(void);
void Gen2ToGen1LinkComms(void);
void Gen2ToGen2LinkComms(void);
void LinkTimeout(void);
void ExchangeBytes(void);
void ExchangeBytes_Conv(void* de_, const void* hl_, uint16_t bc);
// void String_PleaseWait(void);
extern const char String_PleaseWait[];
void ClearLinkData(void);
void FixDataForLinkTransfer(void);
void Link_PrepPartyData_Gen1(void);
void Link_PrepPartyData_Gen2(void);
void Link_CopyMailPreamble(void);
void Link_CopyMailPreamble_Conv(uint8_t* de, uint8_t a);
void Link_ConvertPartyStruct1to2(void);
void TimeCapsule_ReplaceTeruSama(void);
item_t TimeCapsule_ReplaceTeruSama_Conv(item_t item);
void Link_CopyOTData(void);
void Link_CopyOTData_Conv(void* de_, const void* hl_, uint16_t bc);
void Link_CopyRandomNumbers(void);
const void* Link_FindFirstNonControlCharacter_SkipZero(const void* hl_);
const void* Link_FindFirstNonControlCharacter_AllowZero(const void* hl_);
void InitTradeMenuDisplay(void);
void LinkTrade_OTPartyMenu(void);
void LinkTradeOTPartymonMenuLoop(void);
void LinkTrade_PlayerPartyMenu(void);
void LinkTradePartymonMenuLoop(void);
void LinkTradePartiesMenuMasterLoop(void);
void LinkTrade_TradeStatsMenu(void);
void LinkTradeOTPartymonMenuCheckCancel(void);
void LinkTradePartymonMenuCheckCancel(void);
void ExitLinkCommunications(void);
void GSPlaceTradeScreenFooter(void);
void LinkTradePlaceArrow(void);
void LinkEngine_FillBox(void);
void LinkEngine_FillBox_Conv(tile_t* hl, uint8_t b, uint8_t c, uint8_t a);
void LinkTrade(void);
void InitTradeMenuDisplay_Delay(void);
extern const char String_TradeCancel[];
// void LinkAskTradeForText(void);
extern const txt_cmd_s LinkAskTradeForText[];
extern const char String_TradeCompleted[];
extern const char String_TooBadTheTradeWasCanceled[];
void LinkTextboxAtHL(void);
void LinkTextboxAtHL_Conv(tile_t* hl, uint8_t b, uint8_t c);
void LoadTradeScreenBorderGFX(void);
void SetTradeRoomBGPals(void);
void PlaceTradeScreenTextbox(void);
void CheckTimeCapsuleCompatibility(void);
void GetIncompatibleMonName(void);
void EnterTimeCapsule(void);
void WaitForOtherPlayerToExit(void);
void SetBitsForLinkTradeRequest(void);
void SetBitsForBattleRequest(void);
void SetBitsForTimeCapsuleRequest(void);
void WaitForLinkedFriend(void);
void CheckLinkTimeout_Receptionist(void);
void CheckLinkTimeout_Gen2(void);
void Link_CheckCommunicationError(void);
void TryQuickSave(void);
void CheckBothSelectedSameRoom(void);
void TimeCapsule(void);
void TradeCenter(void);
void Colosseum(void);
void CloseLink(void);
void FailedLinkToPast(void);
void Link_ResetSerialRegistersAfterLinkClosure(void);
void Link_EnsureSync(void);
uint8_t Link_EnsureSync_Conv(uint8_t a);
void CableClubCheckWhichChris(void);
void GSLinkCommsBorderGFX(void);
void CheckSRAM0Flag(void);
//#include "data/items/catch_rate_items.h"
//#include "engine/movie/trade_animation.h"
//#include "gfx/trade/unused_gs_border_tiles.2bpp"
