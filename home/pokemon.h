void IsAPokemon(void);
bool IsAPokemon_Conv(species_t species);
void DrawBattleHPBar(void);
void DrawBattleHPBar_Conv(uint8_t* hl, uint8_t d, uint8_t e, uint8_t b, uint8_t c);
void PrepMonFrontpic(void);
void PrepMonFrontpic_Conv(uint8_t* hl);
void v_PrepMonFrontpic(void);
void v_PrepMonFrontpic_Conv(uint8_t* hl);
void PlayStereoCry(void);
void PlayStereoCry_Conv(species_t species);
void PlayStereoCry2(void);
void PlayStereoCry2_Conv(species_t species);
void PlayMonCry(void);
void PlayMonCry_Conv(species_t species);
void PlayMonCry2(void);
void PlayMonCry2_Conv(species_t species);
void v_PlayMonCry(void);
void v_PlayMonCry_Conv(species_t species);
void LoadCry(void);
uint16_t LoadCry_Conv(species_t a);
const struct PokemonCry* LoadCry_Conv2(species_t a);
void GetCryIndex(void);
int16_t GetCryIndex_Conv(species_t index);
int16_t GetCryIndex_Conv2(species_t index);
void PrintLevel(void);
void PrintLevel_Conv(uint8_t* hl);
void PrintLevel_Force3Digits(void);
void Print8BitNumLeftAlign(void);
void Print8BitNumLeftAlign_Conv(uint8_t* hl, uint8_t a, uint8_t c);
void GetNthMove(void);
void GetBaseData(void);
void GetBaseData_Conv(void);
void GetBaseData_Conv2(species_t species);
void GetCurNickname(void);
void GetCurNickname_Conv(void);
uint8_t* GetCurNickname_Conv2(void);
void GetNickname(void);
void GetNickname_Conv(uint16_t hl, uint8_t a);
void GetNickname_Conv2(const uint8_t* hl, uint8_t a);
