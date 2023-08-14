#pragma once

#define MAX_OPTIONS_PER_PAGE 7

typedef void (*DebugMenuFunction)();

// void DebugMenu_AddOption(const char* name, DebugMenuFunction function);
// void DebugMenu_RemoveAllOptions(void);
void DebugMenu_PrintStrings(void);
void DebugMenu_MoveCursor(int8_t dir);
void DebugMenu_PlaceCursor(void);
void DebugMenu(void);
void DebugMenu_SoundTest(void);
// void debugMenuOptionField();
// void debugMenuOptionFight();
// void debugMenuOptionSubGames();
// void debugMenuOptionMonsterTest();
// void debugMenuOptionName();
