// void NamesPointers(void);
extern const char (*const NamesPointers[20])[];
void GetName(void);
void GetName_Conv(void);
uint8_t* GetName_Conv2(uint8_t type, uint8_t index);
void GetNthString(void);
uint16_t GetNthString_Conv(uint16_t hl, uint8_t a);
void GetBasePokemonName(void);
void GetPokemonName(void);
void GetPokemonName_Conv(void);
uint8_t* GetPokemonName_Conv2(species_t index);
void GetItemName(void);
uint8_t* GetItemName_Conv2(item_t a);
void GetTMHMName(void);
void GetTMHMName_Conv(void);
uint8_t* GetTMHMName_Conv2(item_t a);
void GetMoveName(void);
uint8_t* GetMoveName_Conv2(move_t move);
#include "hm_moves.h"
