#include "../../constants.h"

// See also data/battle/held_heal_status.asm

const struct HealingAction StatusHealingActions[] = {
//   item,         party menu action text, status
    {ANTIDOTE,     PARTYMENUTEXT_HEAL_PSN, 1 << PSN},
    {BURN_HEAL,    PARTYMENUTEXT_HEAL_BRN, 1 << BRN},
    {ICE_HEAL,     PARTYMENUTEXT_HEAL_FRZ, 1 << FRZ},
    {AWAKENING,    PARTYMENUTEXT_HEAL_SLP, SLP},
    {PARLYZ_HEAL,  PARTYMENUTEXT_HEAL_PAR, 1 << PAR},
    {FULL_HEAL,    PARTYMENUTEXT_HEAL_ALL, 0b11111111},
    {FULL_RESTORE, PARTYMENUTEXT_HEAL_ALL, 0b11111111},
    {HEAL_POWDER,  PARTYMENUTEXT_HEAL_ALL, 0b11111111},
    {PSNCUREBERRY, PARTYMENUTEXT_HEAL_PSN, 1 << PSN},
    {PRZCUREBERRY, PARTYMENUTEXT_HEAL_PAR, 1 << PAR},
    {BURNT_BERRY,  PARTYMENUTEXT_HEAL_FRZ, 1 << FRZ},
    {ICE_BERRY,    PARTYMENUTEXT_HEAL_BRN, 1 << BRN},
    {MINT_BERRY,   PARTYMENUTEXT_HEAL_SLP, SLP},
    {MIRACLEBERRY, PARTYMENUTEXT_HEAL_ALL, 0b11111111},
    {(item_t)-1,   0,                      0}, // end
};
