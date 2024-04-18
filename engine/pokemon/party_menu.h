u8_flag_s SelectMonFromParty(void);
void SelectTradeOrDayCareMon(void);
u8_flag_s SelectTradeOrDayCareMon_Conv(uint8_t b);
void InitPartyMenuLayout(void);
void LoadPartyMenuGFX(void);
void WritePartyMenuTilemap(void);
void PlacePartyNicknames(void);
void PlacePartyHPBar(void);
void PlacePartymonHPBar(void);
uint8_t PlacePartymonHPBar_Conv(uint8_t b);
void PlacePartyMenuHPDigits(void);
void PlacePartyMonLevel(void);
void PlacePartyMonStatus(void);
void PlacePartyMonTMHMCompatibility(void);
void PlacePartyMonEvoStoneCompatibility(void);
void PlacePartyMonGender(void);
void PlacePartyMonMobileBattleSelection(void);
void PartyMenuCheckEgg(void);
bool PartyMenuCheckEgg_Conv(uint8_t b);
const uint8_t* GetPartyMenuQualityIndexes(void);
void InitPartyMenuGFX(void);
void InitPartyMenuWithCancel(void);
void InitPartyMenuNoCancel(void);
extern const uint8_t PartyMenu2DMenuData[];
u8_flag_s PartyMenuSelect(void);
void PrintPartyMenuText(void);
// void PartyMenuStrings(void);
// void ChooseAMonString(void);
// void UseOnWhichPKMNString(void);
// void WhichPKMNString(void);
// void TeachWhichPKMNString(void);
// void MoveToWhereString(void);
// void ChooseAFemalePKMNString(void);
// void ChooseAMalePKMNString(void);
// void ToWhichPKMNString(void);
// void YouHaveNoPKMNString(void);
void PrintPartyMenuActionText(void);
//#include "data/party_menu_qualities.h"
