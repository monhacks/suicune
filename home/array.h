void IsInArray(void);
uint16_t IsInArray_Conv(uint16_t hl, uint16_t de, uint8_t a);
uint16_t IsInArray_Conv_Item(const item_t* hl, item_t a);
void SkipNames(void);
uint16_t SkipNames_Conv(uint16_t hl, uint8_t a);
void AddNTimes(void);
uint16_t AddNTimes_Conv(uint16_t bc, uint16_t hl, uint8_t a);
uint8_t* AddNTimes_Conv2(uint8_t* hl, uint16_t bc, uint8_t a);
