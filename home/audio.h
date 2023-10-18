void InitSound(void);
void UpdateSound(void);
void PlayMusic(void);
void PlayMusic_Conv(uint16_t);
void PlayMusic2(void);
void PlayCry(void);
void PlaySFX(void);
void PlaySFX_Conv(uint16_t de);
void WaitPlaySFX(void);
void WaitSFX(void);
void WaitSFX_Conv(void);
void IsSFXPlaying(void);
bool IsSFXPlaying_Conv(void);
void MaxVolume(void);
void LowVolume(void);
void MinVolume(void);
void FadeOutToMusic(void);
void FadeInToMusic(void);
void SkipMusic(void);
void SkipMusic_Conv(uint8_t a);
void FadeToMapMusic(void);
void PlayMapMusic(void);
void PlayMapMusic_Conv(void);
void PlayMapMusicBike(void);
void PlayMapMusicBike_Conv(void);
void TryRestartMapMusic(void);
void RestartMapMusic(void);
void RestartMapMusic_Conv(void);
void SpecialMapMusic(void);
uint16_t SpecialMapMusic_Conv(void);
void GetMapMusic_MaybeSpecial(void);
uint16_t GetMapMusic_MaybeSpecial_Conv(void);
void PlaceBCDNumberSprite(void);
void CheckSFX(void);
bool CheckSFX_Conv(void);
void TerminateExpBarSound(void);
void ChannelsOff(void);
void SFXChannelsOff(void);
