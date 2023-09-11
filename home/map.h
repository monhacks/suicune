void ClearUnusedMapBuffer(void);
void CheckScenes(void);
void GetCurrentMapSceneID(void);
void GetMapSceneID(void);
void OverworldTextModeSwitch(void);
void OverworldTextModeSwitch_Conv(void);
void LoadMapPart(void);
void LoadMapPart_Conv(void);
void LoadMetatiles(void);
void LoadMetatiles_Conv(void);
void ReturnToMapFromSubmenu(void);
void CheckWarpTile(void);
void WarpCheck(void);
void GetDestinationWarpNumber(void);
void CopyWarpData(void);
void CheckOutdoorMap(void);
void CheckIndoorMap(void);
void CheckUnknownMap(void);
void LoadMapAttributes(void);
void LoadMapAttributes_SkipObjects(void);
void CopyMapPartialAndAttributes(void);
void ReadMapEvents(void);
void ReadMapScripts(void);
void CopyMapAttributes(void);
void GetMapConnections(void);
void GetMapConnection(void);
void ReadMapSceneScripts(void);
void ReadMapCallbacks(void);
void ReadWarps(void);
void ReadCoordEvents(void);
void ReadBGEvents(void);
void ReadObjectEvents(void);
void CopyMapObjectEvents(void);
void ClearObjectStructs(void);
void GetWarpDestCoords(void);
void LoadBlockData(void);
void ChangeMap(void);
void FillMapConnections(void);
void FillNorthConnectionStrip(void);
void FillSouthConnectionStrip(void);
void FillWestConnectionStrip(void);
void FillEastConnectionStrip(void);
void LoadMapStatus(void);
void CallScript(void);
void CallScript_Conv(uint8_t a, uint16_t hl);
void CallMapScript(void);
void CallMapScript_Conv(uint16_t hl);
void RunMapCallback(void);
void ExecuteCallbackScript(void);
void MapTextbox(void);
void Call_a_de(void);
void GetMovementData(void);
void GetScriptByte(void);
void ObjectEvent(void);
void ObjectEventText(void);
void BGEvent(void);
void BGEventText(void);
void CoordinatesEvent(void);
void CoordinatesEventText(void);
void CheckObjectMask(void);
void MaskObject(void);
void UnmaskObject(void);
void ComputeROMXChecksum(void);
void ScrollMapUp(void);
void ScrollMapDown(void);
void ScrollMapLeft(void);
void ScrollMapRight(void);
void BackupBGMapRow(void);
void BackupBGMapColumn(void);
void UpdateBGMapRow(void);
void UpdateBGMapColumn(void);
void ClearBGMapBuffer(void);
void LoadTilesetGFX(void);
void BufferScreen(void);
void SaveScreen(void);
void LoadConnectionBlockData(void);
void SaveScreen_LoadConnection(void);
void GetMovementPermissions(void);
void GetFacingTileCoord(void);
void GetCoordTile(void);
uint8_t GetCoordTile_Conv(uint8_t d, uint8_t e);
void GetBlockLocation(void);
uint8_t* GetBlockLocation_Conv(uint8_t d, uint8_t e);
void CheckFacingBGEvent(void);
void CheckIfFacingTileCoordIsBGEvent(void);
void CheckCurrentMapCoordEvents(void);
void FadeToMenu(void);
void CloseSubmenu(void);
void ExitAllMenus(void);
void FinishExitMenu(void);
void ReturnToMapWithSpeechTextbox(void);
void ReloadTilesetAndPalettes(void);
void GetMapPointer(void);
uint16_t GetMapPointer_Conv(void);
void GetAnyMapPointer(void);
uint16_t GetAnyMapPointer_Conv(uint8_t group, uint8_t map);
void GetMapField(void);
uint16_t GetMapField_Conv(uint16_t offset);
void GetAnyMapField(void);
uint16_t GetAnyMapField_Conv(uint16_t offset, uint8_t group, uint8_t map);
void SwitchToMapAttributesBank(void);
void SwitchToAnyMapAttributesBank(void);
void GetMapAttributesBank(void);
void GetAnyMapAttributesBank(void);
void CopyMapPartial(void);
void SwitchToMapScriptsBank(void);
void SwitchToMapScriptsBank_Conv(void);
void GetMapScriptsBank(void);
uint8_t GetMapScriptsBank_Conv(void);
void GetAnyMapBlocksBank(void);
void GetMapAttributesPointer(void);
void GetMapEnvironment(void);
void Map_DummyFunction(void);
void GetAnyMapEnvironment(void);
void GetAnyMapTileset(void);
uint8_t GetAnyMapTileset_Conv(uint8_t group, uint8_t map);
void GetWorldMapLocation(void);
uint8_t GetWorldMapLocation_Conv(uint8_t group, uint8_t map);
void GetMapMusic(void);
void GetMapTimeOfDay(void);
uint8_t GetMapTimeOfDay_Conv(void);
void GetMapPhoneService(void);
uint8_t GetMapPhoneService_Conv(void);
void GetPhoneServiceTimeOfDayByte(void);
uint8_t GetPhoneServiceTimeOfDayByte_Conv(void);
void GetFishingGroup(void);
void LoadMapTileset(void);
void DummyEndPredef(void);
