void GetPartyParamLocation(void);
uint16_t GetPartyParamLocation_Conv(uint8_t a);
void GetPartyLocation(void);
uint16_t GetPartyLocation_Conv(uint16_t hl, uint8_t a);
void GetDexNumber(void);
void UserPartyAttr(void);
uint16_t UserPartyAttr_Conv(uint8_t a);
void OpponentPartyAttr(void);
uint16_t OpponentPartyAttr_Conv(uint8_t a);
void BattlePartyAttr(void);
uint16_t BattlePartyAttr_Conv(uint8_t a);
void OTPartyAttr(void);
uint16_t OTPartyAttr_Conv(uint8_t a);
void ResetDamage(void);
void ResetDamage_Conv(void);
void SetPlayerTurn(void);
void SetPlayerTurn_Conv(void);
void SetEnemyTurn(void);
void UpdateOpponentInParty(void);
void UpdateUserInParty(void);
void UpdateBattleMonInParty(void);
void UpdateBattleMonInParty_Conv(void);
void UpdateBattleMon(void);
void UpdateBattleMon_Conv(uint8_t a);
void UpdateEnemyMonInParty(void);
void UpdateEnemyMonInParty_Conv(void);
void RefreshBattleHuds(void);
void UpdateBattleHuds(void);
void FarCopyRadioText(void);
void MobileTextBorder(void);
void BattleTextbox(void);
void BattleTextbox_Conv2(const struct TextCmd* hl);
void StdBattleTextbox(void);
void StdBattleTextbox_Conv2(const struct TextCmd* hl);
void GetBattleAnimPointer(void);
void GetBattleAnimByte(void);
void PushLYOverrides(void);
#include "battle_vars.h"
