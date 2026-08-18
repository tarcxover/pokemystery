tarc3_EventScript_Act1Setup::
# 2 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_FOREDECK_GOZO
# 3 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_NATSUE
# 4 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_TAKESHI
# 5 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_JOJI
# 6 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_MARIKO
# 7 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_KITARO
# 8 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_AKIE
# 9 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_TATSUO
# 10 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_ICHIRO
# 11 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_ICHIRO_HURT
# 12 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_SUZUKI
# 13 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_RAN
# 14 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_NATSUE
# 15 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_TAKESHI
# 16 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_JOJI
# 17 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_MARIKO
# 18 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_KITARO
# 19 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_AKIE
# 20 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_TATSUO
# 21 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_ICHIRO
# 22 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_GOZO_SUZUKI
# 23 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_GOZO_BODY
# 24 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_GOZO_EVD_GARLAND
# 25 "data/scripts/tarc3_common.pory"
	setvar VAR_TARC3_ACT1, TARC3_ACT1_BOARDED
	return


tarc3_EventScript_EvidenceCaptured::
# 30 "data/scripts/tarc3_common.pory"
	playse SE_PC_LOGIN
# 31 "data/scripts/tarc3_common.pory"
	msgbox tarc3_EventScript_EvidenceCaptured_Text_0
	return


tarc3_EventScript_FollowerHook::
# 42 "data/scripts/tarc3_common.pory"
	setvar VAR_RESULT, FALSE
# 43 "data/scripts/tarc3_common.pory"
	getlivemonspecies VAR_0x8008
# 44 "data/scripts/tarc3_common.pory"
	switch VAR_0x8008
# 45 "data/scripts/tarc3_common.pory"
	case SPECIES_MAGNEZONE, tarc3_EventScript_FollowerHook_2
# 48 "data/scripts/tarc3_common.pory"
	goto tarc3_EventScript_FollowerHookEnd
	return

tarc3_EventScript_FollowerHook_2:
# 46 "data/scripts/tarc3_common.pory"
	goto tarc3_EventScript_FollowerMagnezone
	return


tarc3_EventScript_FollowerMagnezone::
# 53 "data/scripts/tarc3_common.pory"
	goto_if_eq VAR_TARC3_ACT1, TARC3_ACT1_INVESTIGATE_1, tarc3_GozoRoom_EventScript_FollowerMagnezoneSearch
# 54 "data/scripts/tarc3_common.pory"
	compare VAR_TARC3_ACT2, TARC3_ACT2_LEAVING_DINING
	goto_if_ge tarc3_EventScript_FollowerMagnezone_3
tarc3_EventScript_FollowerMagnezone_1:
# 57 "data/scripts/tarc3_common.pory"
	goto tarc3_EventScript_FollowerHookEnd
	return

tarc3_EventScript_FollowerMagnezone_2:
# 55 "data/scripts/tarc3_common.pory"
	goto tarc3_EventScript_FollowerMagnezoneFlash
	goto tarc3_EventScript_FollowerMagnezone_1

tarc3_EventScript_FollowerMagnezone_3:
# 54 "data/scripts/tarc3_common.pory"
	compare VAR_TARC3_ACT2, TARC3_ACT2_TO_BATHROOM
	goto_if_le tarc3_EventScript_FollowerMagnezone_2
	goto tarc3_EventScript_FollowerMagnezone_1


tarc3_EventScript_FollowerMagnezoneFlash::
# 64 "data/scripts/tarc3_common.pory"
	goto_if_set FLAG_TARC3_MAGNEZONE_FLASH, tarc3_EventScript_FollowerHookEnd
# 65 "data/scripts/tarc3_common.pory"
	msgbox tarc3_EventScript_FollowerMagnezoneFlash_Text_0
# 66 "data/scripts/tarc3_common.pory"
	closemessage
# 67 "data/scripts/tarc3_common.pory"
	animateflash 4
# 68 "data/scripts/tarc3_common.pory"
	setflashlevel 4
# 69 "data/scripts/tarc3_common.pory"
	setflag FLAG_TARC3_MAGNEZONE_FLASH
# 70 "data/scripts/tarc3_common.pory"
	goto tarc3_EventScript_FollowerHandled
	return


tarc3_EventScript_FollowerHandled::
# 74 "data/scripts/tarc3_common.pory"
	setvar VAR_RESULT, TRUE
	return


tarc3_EventScript_FollowerHookEnd::
# 79 "data/scripts/tarc3_common.pory"
	setvar VAR_RESULT, FALSE
	return


tarc3_EventScript_EvidenceCaptured_Text_0:
# 31 "data/scripts/tarc3_common.pory"
	.string "<Evidence captured>$"

tarc3_EventScript_FollowerMagnezoneFlash_Text_0:
# 65 "data/scripts/tarc3_common.pory"
	.string "Magnezone lit up the room!$"
