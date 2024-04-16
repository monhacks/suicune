void OpenMartDialog(void);
void OpenMartDialog_Conv(uint8_t type, uint16_t id);
void MartDialog(void);
void HerbShop(void);
void BargainShop(void);
void Pharmacist(void);
void RooftopSale(void);
void LoadMartPointer(void);
void LoadMartPointer_Conv(const item_t* ptr, uint32_t size);
void GetMart(void);
const item_t* GetMart_Conv(uint16_t de);
void StandardMart(void);
void FarReadMart(void);
void FarReadMart_Conv(void);
void GetMartItemPrice(void);
void GetMartItemPrice_Conv(item_price_s* hl, item_t a);
void GetMartPrice(void);
void GetMartPrice_Conv(item_price_s* hl, uint16_t price);
void ReadMart(void);
void BuyMenu(void);
void LoadBuyMenuText(uint8_t a);
bool MartAskPurchaseQuantity(void);
// const struct MartDialogGroup* GetMartDialogGroup(uint8_t type);
bool BuyMenuLoop(void);
bool StandardMartAskPurchaseQuantity(void);
bool MartConfirmPurchase(void);
bool BargainShopAskPurchaseQuantity(void);
bool RooftopSaleAskPurchaseQuantity(void);
extern const txt_cmd_s MartHowManyText[];
extern const txt_cmd_s MartFinalPriceText[];
// void MenuHeader_Buy(void);
extern const struct MenuHeader MenuHeader_Buy;
extern const txt_cmd_s HerbShopLadyIntroText[];
extern const txt_cmd_s HerbalLadyHowManyText[];
extern const txt_cmd_s HerbalLadyFinalPriceText[];
extern const txt_cmd_s HerbalLadyThanksText[];
extern const txt_cmd_s HerbalLadyPackFullText[];
extern const txt_cmd_s HerbalLadyNoMoneyText[];
extern const txt_cmd_s HerbalLadyComeAgainText[];
extern const txt_cmd_s BargainShopIntroText[];
extern const txt_cmd_s BargainShopFinalPriceText[];
extern const txt_cmd_s BargainShopThanksText[];
extern const txt_cmd_s BargainShopPackFullText[];
extern const txt_cmd_s BargainShopSoldOutText[];
extern const txt_cmd_s BargainShopNoFundsText[];
extern const txt_cmd_s BargainShopComeAgainText[];
extern const txt_cmd_s PharmacyIntroText[];
extern const txt_cmd_s PharmacyHowManyText[];
extern const txt_cmd_s PharmacyFinalPriceText[];
extern const txt_cmd_s PharmacyThanksText[];
extern const txt_cmd_s PharmacyPackFullText[];
extern const txt_cmd_s PharmacyNoMoneyText[];
extern const txt_cmd_s PharmacyComeAgainText[];
void SellMenu(void);
extern const txt_cmd_s MartSellHowManyText[];
extern const txt_cmd_s MartSellPriceText[];
void UnusedDummyString(void);
extern const txt_cmd_s MartWelcomeText[];
extern const struct MenuHeader MenuHeader_BuySell;
extern const txt_cmd_s MartThanksText[];
extern const txt_cmd_s MartNoMoneyText[];
extern const txt_cmd_s MartPackFullText[];
extern const txt_cmd_s MartCantBuyText[];
extern const txt_cmd_s MartComeAgainText[];
extern const txt_cmd_s MartAskMoreText[];
extern const txt_cmd_s MartBoughtText[];
void PlayTransactionSound(void);
void MartTextbox(const txt_cmd_s* hl);
//#include "data/items/rooftop_sale.h"
//#include "data/items/bargain_shop.h"
extern item_t* Marts[NUM_MARTS+1];
extern size_t MartsSizes[NUM_MARTS+1];
