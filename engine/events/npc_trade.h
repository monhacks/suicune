void NPCTrade(uint8_t e);
bool CheckTradeGender(void);
uint8_t TradeFlagAction(uint8_t b);
void Trade_GetDialog(void);
void DoNPCTrade(void);
const struct NPCTrade* GetTradeAttr(void);
void Trade_GetAttributeOfCurrentPartymon(void);
void Trade_GetAttributeOfLastPartymon(void);
uint8_t* GetTradeMonName(species_t a);
void CopyTradeName(uint8_t* de, const uint8_t* hl);
void Trade_CopyFourCharString(void);
void Trade_CopyThreeCharString(void);
void Trade_CopyTwoBytes(void);
void Trade_CopyTwoBytesReverseEndian(void);
void GetTradeMonNames(void);
void PrintTradeText(uint8_t a);
extern const txt_cmd_s* const TradeTexts[];
extern const txt_cmd_s NPCTradeCableText[];
extern const txt_cmd_s TradedForText[];
extern const txt_cmd_s NPCTradeIntroText1[];
extern const txt_cmd_s NPCTradeCancelText1[];
extern const txt_cmd_s NPCTradeWrongText1[];
extern const txt_cmd_s NPCTradeCompleteText1[];
extern const txt_cmd_s NPCTradeAfterText1[];
extern const txt_cmd_s NPCTradeIntroText2[];
extern const txt_cmd_s NPCTradeCancelText2[];
extern const txt_cmd_s NPCTradeWrongText2[];
extern const txt_cmd_s NPCTradeCompleteText2[];
extern const txt_cmd_s NPCTradeAfterText2[];
extern const txt_cmd_s NPCTradeIntroText3[];
extern const txt_cmd_s NPCTradeCancelText3[];
extern const txt_cmd_s NPCTradeWrongText3[];
extern const txt_cmd_s NPCTradeCompleteText3[];
extern const txt_cmd_s NPCTradeAfterText3[];
extern const txt_cmd_s NPCTradeCompleteText4[];
extern const txt_cmd_s NPCTradeAfterText4[];
//#include "data/events/npc_trades.h"
