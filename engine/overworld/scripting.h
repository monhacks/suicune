void EnableScriptMode(void);
void EnableScriptMode_Conv(void);
void ScriptEvents(void);
void ScriptEvents_Conv(void);
void EndScript(void);
void WaitScript(void);
void WaitScript_Conv(void);
void WaitScriptMovement(void);
void WaitScriptMovement_Conv(void);
void RunScriptCommand(void);
void ScriptCommandTable(void);
void StartScript(void);
void StartScript_Conv(void);
void CheckScript(void);
bool CheckScript_Conv(void);
void StopScript(void);
void StopScript_Conv(void);
void Script_callasm(void);
void Script_special(void);
void Script_special_Conv(script_s* s, uint16_t de);
void Script_memcallasm(void);
void Script_jumptextfaceplayer(void);
void Script_jumptextfaceplayer_Conv(script_s* s, const struct TextCmd* text);
void Script_jumptext(void);
void Script_jumptext_Conv(script_s* s, const struct TextCmd* text);
bool JumpTextFacePlayerScript(script_s* s);
bool JumpTextScript(script_s* s);
void Script_farjumptext(void);
void Script_writetext(void);
void Script_writetext_Conv(script_s* s, const struct TextCmd* text);
void Script_farwritetext(void);
void Script_repeattext(void);
void Script_repeattext_Conv(script_s* s, uint16_t hl);
void Script_waitbutton(void);
void Script_waitbutton_Conv(script_s* s);
void Script_promptbutton(void);
void Script_promptbutton_Conv(script_s* s);
void Script_yesorno(void);
void Script_yesorno_Conv(script_s* s);
void Script_loadmenu(void);
void Script_loadmenu_Conv(script_s* s, const struct MenuHeader* header);
void Script_closewindow(void);
void Script_closewindow_Conv(script_s* s);
void Script_pokepic(void);
void Script_pokepic_Conv(script_s* s, species_t species);
void Script_closepokepic(void);
void Script_closepokepic_Conv(script_s* s);
void Script_verticalmenu(void);
void Script_verticalmenu_Conv(script_s* s);
void Script__2dmenu(void);
void Script_battletowertext(void);
void Script_verbosegiveitem(void);
void Script_verbosegiveitem_Conv(script_s* s, item_t item, uint8_t quantity);
void GiveItemScript_DummyFunction(void);
bool GiveItemScript(script_s* s);
void Script_verbosegiveitemvar(void);
void Script_itemnotify(void);
void Script_itemnotify_Conv(script_s* s);
void Script_pocketisfull(void);
void Script_pocketisfull_Conv(script_s* s);
void Script_specialsound(void);
void Script_specialsound_Conv(script_s* s);
void GetPocketName(void);
uint8_t* GetPocketName_Conv(void);
void CurItemName(void);
uint8_t* CurItemName_Conv(item_t item);
extern const struct TextCmd PutItemInPocketText[];
extern const struct TextCmd PocketIsFullText[];
void Script_pokemart(void);
void Script_elevator(void);
void Script_trade(void);
void Script_phonecall(void);
void Script_hangup(void);
void Script_hangup_Conv(script_s* s);
void Script_askforphonenumber(void);
void Script_askforphonenumber_Conv(script_s* s, uint8_t contact);
void Script_describedecoration(void);
void Script_fruittree(void);
void Script_fruittree_Conv(script_s* s, uint8_t tree);
void Script_swarm(void);
void Script_trainertext(void);
void Script_trainertext_Conv(script_s* s, uint8_t a);
void Script_scripttalkafter(void);
void Script_scripttalkafter_Conv(script_s* s);
void Script_trainerflagaction(void);
void Script_trainerflagaction_Conv(script_s* s, uint8_t action);
void Script_winlosstext(void);
void Script_winlosstext_Conv(script_s* s, const struct TextCmd* wintext, const struct TextCmd* losstext);
void Script_endifjustbattled(void);
void Script_endifjustbattled_Conv(script_s* s);
void Script_checkjustbattled(void);
void Script_checkjustbattled_Conv(script_s* s);
void Script_encountermusic(void);
void Script_encountermusic_Conv(script_s* s);
void Script_playmapmusic(void);
void Script_playmusic(void);
void Script_playmusic_Conv(script_s* s, uint16_t music);
void Script_musicfadeout(void);
void Script_musicfadeout_Conv(script_s* s, uint16_t id, uint8_t fade);
void Script_playsound(void);
void Script_playsound_Conv(script_s* s, uint16_t sfx);
void Script_waitsfx(void);
void Script_waitsfx_Conv(script_s* s);
void Script_warpsound(void);
void Script_warpsound_Conv(script_s* s);
void Script_cry(void);
void GetScriptObject(void);
uint8_t GetScriptObject_Conv(uint8_t a);
void Script_setlasttalked(void);
void Script_setlasttalked_Conv(script_s* s, uint8_t a);
void Script_applymovement(void);
void Script_applymovement_Conv(script_s* s, uint8_t a, const uint8_t* hl);
void ApplyMovement(void);
void ApplyMovement_Conv(uint8_t c, const uint8_t* hl);
void UnfreezeFollowerObject(void);
void Script_applymovementlasttalked(void);
void Script_applymovementlasttalked_Conv(script_s* s, const uint8_t* hl);
void Script_faceplayer(void);
void Script_faceplayer_Conv(script_s* s);
void Script_faceobject(void);
void Script_faceobject_Conv(script_s* s, uint8_t e, uint8_t d);
void Script_turnobject(void);
void Script_turnobject_Conv(script_s* s, uint8_t obj, uint8_t dir);
void ApplyObjectFacing(void);
bool ApplyObjectFacing_Conv(uint8_t d, uint8_t e);
void Script_variablesprite(void);
void Script_variablesprite_Conv(script_s* s, uint8_t slot, uint8_t val);
void Script_appear(void);
void Script_appear_Conv(script_s* s, uint8_t a);
void Script_disappear(void);
void Script_disappear_Conv(script_s* s, uint8_t a);
void ApplyEventActionAppearDisappear(void);
bool ApplyEventActionAppearDisappear_Conv(uint8_t mapObjIdx, uint8_t b);
void Script_follow(void);
void Script_follow_Conv(script_s* s, uint8_t leader, uint8_t follower);
void Script_stopfollow(void);
void Script_stopfollow_Conv(script_s* s);
void Script_moveobject(void);
void Script_writeobjectxy(void);
void Script_writeobjectxy_Conv(script_s* s, uint8_t obj);
void Script_follownotexact(void);
void Script_loademote(void);
void Script_loademote_Conv(script_s* s, uint8_t emote);
void Script_showemote(void);
void Script_showemote_Conv(script_s* s, uint8_t emote, uint8_t obj, uint8_t frames);
bool ShowEmoteScript(script_s* s);
void Script_earthquake(void);
void Script_earthquake_Conv(script_s* s, uint8_t amt);
extern const uint8_t EarthquakeMovement[4];
void Script_loadpikachudata(void);
void Script_randomwildmon(void);
void Script_randomwildmon_Conv(script_s* s);
void Script_loadtemptrainer(void);
void Script_loadtemptrainer_Conv(script_s* s);
void Script_loadwildmon(void);
void Script_loadwildmon_Conv(script_s* s, species_t sp, uint8_t level);
void Script_loadtrainer(void);
void Script_loadtrainer_Conv(script_s* s, uint8_t tclass, uint8_t tid);
void Script_startbattle(void);
void Script_startbattle_Conv(script_s* s);
void Script_catchtutorial(void);
void Script_reloadmapafterbattle(void);
void Script_reloadmapafterbattle_Conv(script_s* s);
void Script_reloadmap(void);
void Script_reloadmap_Conv(script_s* s);
void Script_scall(void);
void Script_farscall(void);
void Script_memcall(void);
void Script_memcall_Conv(script_s* s, Script_fn_t mem);
void ScriptCall(void);
void CallCallback(void);
void CallCallback_Conv(Script_fn_t callback);
void Script_sjump(void);
void Script_farsjump(void);
void Script_memjump(void);
void Script_iffalse(void);
void Script_iftrue(void);
void Script_ifequal(void);
void Script_ifnotequal(void);
void Script_ifgreater(void);
void Script_ifless(void);
void Script_jumpstd(void);
void Script_jumpstd_Conv(script_s* s, uint16_t std);
void Script_callstd(void);
void Script_callstd_Conv(script_s* s, uint16_t std);
void StdScript(void);
Script_fn_t StdScript_Conv(uint16_t std);
void SkipTwoScriptBytes(void);
void ScriptJump(void);
void Script_sdefer(void);
void Script_sdefer_Conv(script_s* s, Script_fn_t script);
void Script_checkscene(void);
void Script_checkscene_Conv(script_s* s);
void Script_checkmapscene(void);
void Script_setscene(void);
void Script_setscene_Conv(script_s* s, uint8_t scene);
void Script_setmapscene(void);
void Script_setmapscene_Conv(script_s* s, uint8_t group, uint8_t map, uint8_t scene);
void DoScene(void);
void DoScene_Conv(uint8_t group, uint8_t map, uint8_t scene);
void Script_readmem(void);
void Script_readmem_Conv(script_s* s, uint8_t* hl);
void Script_writemem(void);
void Script_writemem_Conv(script_s* s, uint8_t* hl);
void Script_loadmem(void);
void Script_loadmem_Conv(script_s* s, uint8_t* hl, uint8_t val);
void Script_setval(void);
void Script_setval_Conv(script_s* s, uint8_t val);
void Script_addval(void);
void Script_addval_Conv(script_s* s, uint8_t val);
void Script_random(void);
void Script_random_Conv(script_s* s, uint8_t a);
void Script_readvar(void);
void Script_readvar_Conv(script_s* s, uint8_t var);
void Script_writevar(void);
void Script_writevar_Conv(script_s* s, uint8_t var);
void Script_loadvar(void);
void Script_loadvar_Conv(script_s* s, uint8_t var, uint8_t value);
void GetVarAction(void);
uint8_t* GetVarAction_Conv(uint8_t a);
void Script_checkver(void);
void Script_getmonname(void);
void Script_getmonname_Conv(script_s* s, species_t species, uint8_t buf);
void GetStringBuffer(void);
void GetStringBuffer_Conv(uint8_t a, const uint8_t* de);
void CopyConvertedText(void);
void CopyConvertedText_Conv(uint8_t a, const uint8_t* de);
void Script_getitemname(void);
void Script_getitemname_Conv(script_s* s, item_t item, uint8_t buf);
void Script_getcurlandmarkname(void);
void Script_getcurlandmarkname_Conv(script_s* s, uint8_t b);
void ConvertLandmarkToText(void);
void ConvertLandmarkToText_Conv(uint8_t a, uint8_t b);
void Script_getlandmarkname(void);
void Script_getlandmarkname_Conv(script_s* s, uint8_t a, uint8_t b);
void Script_gettrainername(void);
void Script_gettrainername_Conv(script_s* s, uint8_t a, uint8_t b, uint8_t c);
void Script_getname(void);
void ContinueToGetName(void);
void Script_gettrainerclassname(void);
void Script_gettrainerclassname_Conv(script_s* s, uint8_t buffer, uint8_t tclass);
void Script_getmoney(void);
void Script_getmoney_Conv(script_s* s, uint8_t buffer, uint8_t which);
void Script_getcoins(void);
void Script_getnum(void);
void Script_getnum_Conv(script_s* s, uint8_t a);
void ResetStringBuffer1(void);
void ResetStringBuffer1_Conv(void);
void Script_getstring(void);
void Script_getstring_Conv(script_s* s, uint8_t a, const char* hl);
void Script_givepokemail(void);
void Script_checkpokemail(void);
void Script_giveitem(void);
void Script_giveitem_Conv(script_s* s, item_t item, uint8_t quantity);
void Script_takeitem(void);
void Script_checkitem(void);
void Script_checkitem_Conv(script_s* s, item_t item);
void Script_givemoney(void);
void Script_givemoney_Conv(script_s* s, uint8_t account, uint32_t amount);
void Script_takemoney(void);
void Script_takemoney_Conv(script_s* s, uint8_t account, uint32_t amount);
void Script_checkmoney(void);
void Script_checkmoney_Conv(script_s* s, uint8_t account, uint32_t amt);
void CompareMoneyAction(void);
void CompareMoneyAction_Conv(script_s* s, u8_flag_s res);
void GetMoneyAccount(void);
uint8_t* GetMoneyAccount_Conv(uint8_t a);
void LoadMoneyAmountToMem(void);
uint8_t* LoadMoneyAmountToMem_Conv(uint32_t amount);
void Script_givecoins(void);
void Script_givecoins_Conv(script_s* s, uint16_t amount);
void Script_takecoins(void);
void Script_checkcoins(void);
void Script_checkcoins_Conv(script_s* s, uint16_t amount);
void LoadCoinAmountToMem(void);
uint8_t* LoadCoinAmountToMem_Conv(uint16_t amount);
void Script_checktime(void);
void Script_checktime_Conv(script_s* s, uint8_t time);
void Script_checkpoke(void);
void Script_addcellnum(void);
void Script_addcellnum_Conv(script_s* s, uint8_t contact);
void Script_delcellnum(void);
void Script_delcellnum_Conv(script_s* s, uint8_t c);
void Script_checkcellnum(void);
void Script_checkcellnum_Conv(script_s* s, uint8_t c);
void Script_specialphonecall(void);
void Script_specialphonecall_Conv(script_s* s, uint16_t id);
void Script_checkphonecall(void);
void Script_checkphonecall_Conv(script_s* s);
void Script_givepoke(void);
void Script_giveegg(void);
void Script_setevent(void);
void Script_setevent_Conv(script_s* s, uint16_t flag);
void Script_clearevent(void);
void Script_clearevent_Conv(script_s* s, uint16_t flag);
void Script_checkevent(void);
void Script_checkevent_Conv(script_s* s, uint16_t flag);
void Script_setflag(void);
void Script_setflag_Conv(script_s* s, uint16_t flag);
void Script_clearflag(void);
void Script_clearflag_Conv(script_s* s, uint16_t flag);
void Script_checkflag(void);
void Script_checkflag_Conv(script_s* s, uint16_t flag);
void v_EngineFlagAction(void);
bool v_EngineFlagAction_Conv(uint16_t de, uint8_t b);
void Script_wildoff(void);
void Script_wildon(void);
void Script_xycompare(void);
void Script_warpfacing(void);
void Script_warpfacing_Conv(script_s* s, uint8_t dir, uint8_t group, uint8_t num, uint8_t x, uint8_t y);
void Script_warp(void);
void Script_warp_Conv(script_s* s, uint8_t group, uint8_t num, uint8_t x, uint8_t y);
void Script_warpmod(void);
void Script_warpmod_Conv(script_s* s, uint8_t warp, uint8_t group, uint8_t num);
void Script_blackoutmod(void);
void Script_blackoutmod_Conv(script_s* s, uint8_t group, uint8_t num);
void Script_dontrestartmapmusic(void);
void Script_dontrestartmapmusic_Conv(script_s* s);
void Script_writecmdqueue(void);
void Script_writecmdqueue_Conv(script_s* s, const uint8_t* cmd);
void Script_delcmdqueue(void);
void Script_delcmdqueue_Conv(script_s* s, uint8_t b);
void Script_changemapblocks(void);
void Script_changeblock(void);
void Script_changeblock_Conv(script_s* s, uint8_t x, uint8_t y, uint8_t b);
void Script_reloadmappart(void);
void Script_reloadmappart_Conv(script_s* s);
void Script_warpcheck(void);
void Script_warpcheck_Conv(script_s* s);
void Script_enableevents(void);
void Script_newloadmap(void);
void Script_newloadmap_Conv(script_s* s, uint8_t method);
void Script_reloadend(void);
void Script_reloadend_Conv(script_s* s, uint8_t method);
void Script_opentext(void);
void Script_opentext_Conv(script_s* s);
void Script_refreshscreen(void);
void Script_refreshscreen_Conv(script_s* s);
void Script_writeunusedbyte(void);
void UnusedClosetextScript(void);
void Script_closetext(void);
void Script_closetext_Conv(script_s* s);
void Script_autoinput(void);
void Script_autoinput_Conv(script_s* s, const uint8_t* autoinput);
void Script_pause(void);
void Script_pause_Conv(script_s* s, uint8_t a);
void Script_deactivatefacing(void);
void Script_deactivatefacing_Conv(script_s* s, uint8_t delay);
void Script_stopandsjump(void);
void Script_end(void);
void Script_end_Conv(script_s* s);
void Script_endcallback(void);
void Script_endcallback_Conv(script_s* s);
void ExitScriptSubroutine(void);
bool ExitScriptSubroutine_Conv(script_s* s);
void Script_endall(void);
void Script_endall_Conv(script_s* s);
void Script_halloffame(void);
void Script_credits(void);
void ReturnFromCredits(void);
void Script_wait(void);
void Script_wait_Conv(script_s* s, uint8_t a);
void Script_checksave(void);
void Script_checkver_duplicate(void);
//#include "data/items/pocket_names.h"

extern Script_fn_t gDeferredScriptAddr;
