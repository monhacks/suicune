void GetSpritePalette(void);
void GetSpriteVTile(void);
void DoesSpriteHaveFacings(void);
void GetPlayerStandingTile(void);
uint8_t GetPlayerStandingTile_Conv(void);
void CheckOnWater(void);
bool CheckOnWater_Conv(void);
void GetTileCollision(void);
uint8_t GetTileCollision_Conv(uint8_t a);
void CheckGrassTile(void);
bool CheckGrassTile_Conv(uint8_t col);
void CheckSuperTallGrassTile(void);
bool CheckSuperTallGrassTile_Conv(uint8_t a);
void CheckCutTreeTile(void);
bool CheckCutTreeTile_Conv(uint8_t a);
void CheckHeadbuttTreeTile(void);
void CheckCounterTile(void);
bool CheckCounterTile_Conv(uint8_t a);
void CheckPitTile(void);
void CheckIceTile(void);
bool CheckIceTile_Conv(uint8_t a);
void CheckWhirlpoolTile(void);
void CheckWaterfallTile(void);
void CheckStandingOnEntrance(void);
bool CheckStandingOnEntrance_Conv(void);
void GetMapObject(void);
struct MapObject* GetMapObject_Conv(uint8_t a);
void CheckObjectVisibility(void);
bool CheckObjectVisibility_Conv(uint8_t a);
void CheckObjectTime(void);
void CopyMapObjectStruct(void);
void UnmaskCopyMapObjectStruct(void);
void ApplyDeletionToMapObject(void);
void DeleteObjectStruct(void);
void CopyPlayerObjectTemplate(void);
void DeleteFollowerMapObject(void);
void LoadMovementDataPointer(void);
void LoadMovementDataPointer_Conv(uint8_t a, uint16_t hl, uint16_t bc);
void FindFirstEmptyObjectStruct(void);
uint16_t FindFirstEmptyObjectStruct_Conv(void);
void GetSpriteMovementFunction(void);
void GetInitialFacing(void);
void CopySpriteMovementData(void);
void v_GetMovementByte(void);
void SetVramState_Bit0(void);
void ResetVramState_Bit0(void);
void UpdateSprites(void);
void UpdateSprites_Conv(void);
void GetObjectStruct(void);
struct Object* GetObjectStruct_Conv(uint8_t a);
void DoesObjectHaveASprite(void);
bool DoesObjectHaveASprite_Conv(struct Object* bc);
void SetSpriteDirection(void);
void SetSpriteDirection_Conv(struct Object* bc, uint8_t a);
void GetSpriteDirection(void);
uint8_t GetSpriteDirection_Conv(struct Object* bc);
