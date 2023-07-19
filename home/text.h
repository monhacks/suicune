struct TextCmdState
{
    uint8_t* hl;
    uint8_t* bc;
    uint8_t* de;
    uint8_t* hltemp;
};

void ClearBox(void);
void ClearBox_Conv(uint16_t hl, uint16_t bc);
void ClearBox_Conv2(uint8_t* hl, uint8_t w, uint8_t h);
void FillBoxWithByte(void);
void FillBoxWithByte_Conv(uint16_t hl, uint16_t bc, uint8_t byte);
void FillBoxWithByte_Conv2(uint8_t* hl, uint8_t w, uint8_t h, uint8_t byte);
void ClearTilemap(void);
void ClearTilemap_Conv(void);
void ClearTilemap_Conv2(void);
void ClearScreen(void);
void Textbox(void);
void Textbox_Conv(uint16_t hl, uint8_t b, uint8_t c);
void Textbox_Conv2(uint8_t* hl, uint8_t b, uint8_t c);
void TextboxBorder(void);
void TextboxBorder_Conv(uint16_t hl, uint8_t b, uint8_t c);
void TextboxBorder_Conv2(uint8_t* hl, uint8_t b, uint8_t c);
void TextboxPalette(void);
void TextboxPalette_Conv(uint16_t hl, uint8_t c, uint8_t b);
void TextboxPalette_Conv2(uint8_t* hl, uint8_t c, uint8_t b);
void SpeechTextbox(void);
void SpeechTextbox_Conv(void);
void SpeechTextbox_Conv2(void);
void GameFreakText(void);
void RadioTerminator(void);
uint16_t RadioTerminator_Conv(void);
void PrintText(void);
void PrintText_Conv(uint8_t* hl);
void BuenaPrintText(void);
void BuenaPrintText_Conv(uint8_t* hl);
void PrintTextboxText(void);
void PrintTextboxText_Conv(uint8_t* hl);
void SetUpTextbox(void);
void SetUpTextbox_Conv(void);
void PlaceString(void);
void PlaceString_Conv(struct TextCmdState* state, uint8_t* hl);
void PlaceStringSimple(uint8_t* de, uint8_t* hl);
void PlaceNextChar(void);
void PlaceNextChar_Conv(struct TextCmdState* state);
void DummyChar(void);
void NextChar(void);
void NextChar_Conv(struct TextCmdState* state);
void CheckDict(void);
void CheckDict_Conv(struct TextCmdState* state, uint8_t a);
void MobileScriptChar(void);
void MobileScriptChar_Conv(struct TextCmdState* state);
void PrintMomsName(void);
void PrintMomsName_Conv(struct TextCmdState* state);
void PrintPlayerName(void);
void PrintPlayerName_Conv(struct TextCmdState* state);
void PrintRivalName(void);
void PrintRivalName_Conv(struct TextCmdState* state);
void PrintRedsName(void);
void PrintRedsName_Conv(struct TextCmdState* state);
void PrintGreensName(void);
void PrintGreensName_Conv(struct TextCmdState* state);
void TrainerChar(void);
void TrainerChar_Conv(struct TextCmdState* state);
void TMChar(void);
void TMChar_Conv(struct TextCmdState* state);
void PCChar(void);
void PCChar_Conv(struct TextCmdState* state);
void RocketChar(void);
void RocketChar_Conv(struct TextCmdState* state);
void PlacePOKe(void);
void PlacePOKe_Conv(struct TextCmdState* state);
void PlaceKougeki(void);
void PlaceKougeki_Conv(struct TextCmdState* state);
void SixDotsChar(void);
void SixDotsChar_Conv(struct TextCmdState* state);
void PlacePKMN(void);
void PlacePKMN_Conv(struct TextCmdState* state);
void PlacePOKE(void);
void PlacePOKE_Conv(struct TextCmdState* state);
void PlaceJPRoute(void);
void PlaceJPRoute_Conv(struct TextCmdState* state);
void PlaceWatashi(void);
void PlaceWatashi_Conv(struct TextCmdState* state);
void PlaceKokoWa(void);
void PlaceKokoWa_Conv(struct TextCmdState* state);
void PlaceMoveTargetsName(void);
void PlaceMoveTargetsName_Conv(struct TextCmdState* state);
void PlaceMoveUsersName(void);
void PlaceMoveUsersName_Conv(struct TextCmdState* state);
void PlaceBattlersName(void);
void PlaceBattlersName_Conv(struct TextCmdState* state, bool is_enemy);
void PlaceEnemysName(void);
void PlaceEnemysName_Conv(struct TextCmdState* state);
void PlaceGenderedPlayerName(void);
void PlaceGenderedPlayerName_Conv(struct TextCmdState* state);
void PlaceCommandCharacter(void);
void PlaceCommandCharacter_Conv(struct TextCmdState* state, uint8_t* de);
// void TMCharText(void);
// void TrainerCharText(void);
// void PCCharText(void);
// void RocketCharText(void);
// void PlacePOKeText(void);
// void KougekiText(void);
// void SixDotsCharText(void);
// void EnemyText(void);
// void PlacePKMNText(void);
// void PlacePOKEText(void);
// void String_Space(void);
// void PlaceJPRouteText(void);
// void PlaceWatashiText(void);
// void PlaceKokoWaText(void);
// void KunSuffixText(void);
// void ChanSuffixText(void);
void NextLineChar(void);
void NextLineChar_Conv(struct TextCmdState* state);
void LineFeedChar(void);
void LineFeedChar_Conv(struct TextCmdState* state);
void CarriageReturnChar(void);
void CarriageReturnChar_Conv(struct TextCmdState* state);
void LineChar(void);
void LineChar_Conv(struct TextCmdState* state);
void Paragraph(void);
void Paragraph_Conv(struct TextCmdState* state);
void v_ContText(void);
void v_ContText_Conv(struct TextCmdState* state);
void v_ContTextNoPause(void);
void v_ContTextNoPause_Conv(struct TextCmdState* state);
void ContText(void);
void ContText_Conv(struct TextCmdState* state);
void PlaceDexEnd(void);
void PlaceDexEnd_Conv(struct TextCmdState* state);
void PromptText(void);
void PromptText_Conv(struct TextCmdState* state);
void DoneText(void);
void DoneText_Conv(struct TextCmdState* state);
void NullChar(void);
void NullChar_Conv(struct TextCmdState* state);
void TextScroll(void);
void TextScroll_Conv(struct TextCmdState* state);
void Text_WaitBGMap(void);
void Text_WaitBGMap_Conv(void);
void Diacritic(void);
void Diacritic_Conv(void);
void LoadBlinkingCursor(void);
void LoadBlinkingCursor_Conv(void);
void UnloadBlinkingCursor(void);
void UnloadBlinkingCursor_Conv(void);
void PlaceFarString(void);
void PlaceFarString_Conv(uint8_t bank, struct TextCmdState* state, uint8_t* hl);
void PokeFluteTerminator(void);
void PlaceHLTextAtBC(void);
void PlaceHLTextAtBC_Conv(uint8_t* hl, uint8_t* bc);
void DoTextUntilTerminator(void);
void DoTextUntilTerminator_Conv(struct TextCmdState* state);
void DoTextUntilTerminator_TextCommand(void);
void DoTextUntilTerminator_TextCommand_Conv(struct TextCmdState* state, uint8_t cmd);
// void TextCommands(void);
void TextCommand_START(void);
void TextCommand_START_Conv(struct TextCmdState* state);
void TextCommand_RAM(void);
void TextCommand_RAM_Conv(struct TextCmdState* state);
void TextCommand_FAR(void);
void TextCommand_FAR_Conv(struct TextCmdState* state);
void TextCommand_BCD(void);
void TextCommand_BCD_Conv(struct TextCmdState* state);
void TextCommand_MOVE(void);
void TextCommand_MOVE_Conv(struct TextCmdState* state);
void TextCommand_BOX(void);
void TextCommand_BOX_Conv(struct TextCmdState* state);
void TextCommand_LOW(void);
void TextCommand_LOW_Conv(struct TextCmdState* state);
void TextCommand_PROMPT_BUTTON(void);
void TextCommand_PROMPT_BUTTON_Conv(struct TextCmdState* state);
void TextCommand_SCROLL(void);
void TextCommand_SCROLL_Conv(struct TextCmdState* state);
void TextCommand_START_ASM(void);
void TextCommand_START_ASM_Conv(struct TextCmdState* state);
void TextCommand_DECIMAL(void);
void TextCommand_DECIMAL_Conv(struct TextCmdState* state);
void TextCommand_PAUSE(void);
void TextCommand_PAUSE_Conv(struct TextCmdState* state);
void TextCommand_SOUND(void);
void TextCommand_SOUND_Conv(struct TextCmdState* state);
void TextCommand_CRY(void);
void TextCommand_CRY_Conv(struct TextCmdState* state);
// void TextSFX(void);
void TextCommand_DOTS(void);
void TextCommand_DOTS_Conv(struct TextCmdState* state);
void TextCommand_WAIT_BUTTON(void);
void TextCommand_WAIT_BUTTON_Conv(struct TextCmdState* state);
void TextCommand_STRINGBUFFER(void);
void TextCommand_STRINGBUFFER_Conv(struct TextCmdState* state);
void TextCommand_DAY(void);
void TextCommand_DAY_Conv(struct TextCmdState* state);
