void GetUnownLetter(void);
uint8_t GetUnownLetter_Conv(uint16_t dvs);
void GetMonFrontpic(void);
void GetMonFrontpic_Conv(uint8_t* de);
void GetAnimatedFrontpic(void);
void GetAnimatedFrontpic_Conv(uint8_t* de, uint8_t frame);
void v_GetFrontpic(void);
void v_GetFrontpic_Conv(uint8_t* de, uint8_t frame);
void GetFrontpicPointer(void);
const char* GetFrontpicPointer_Conv(void);
void GetAnimatedEnemyFrontpic(void);
void GetAnimatedEnemyFrontpic_Conv(uint8_t* hl);
void LoadFrontpicTiles(void);
void LoadFrontpicTiles_Conv(uint8_t* hl, uint8_t* de, uint8_t c);
void GetMonBackpic(void);
void GetMonBackpic_Conv(uint8_t* de, species_t species);
void FixPicBank(void);
void GSIntro_GetMonFrontpic(void);
void GetTrainerPic(void);
void DecompressGet2bpp(void);
void FixBackpicAlignment(void);
void FixBackpicAlignment_Conv(uint8_t* hl, uint8_t c);
void PadFrontpic(void);
void PadFrontpic_Conv(uint8_t* hl, uint8_t* de, uint8_t b);
void LoadOrientedFrontpic(void);
void LoadOrientedFrontpic_Conv(uint8_t** hl, uint8_t** de, uint8_t c);
