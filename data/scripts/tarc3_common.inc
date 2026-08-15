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
	setflag FLAG_HIDE_TARC3_DINING_SUZUKI
# 12 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_DINING_RAN
# 13 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_NATSUE
# 14 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_TAKESHI
# 15 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_JOJI
# 16 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_MARIKO
# 17 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_KITARO
# 18 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_AKIE
# 19 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_TATSUO
# 20 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HALL_ICHIRO
# 21 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_C1_SUZUKI
# 22 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_C1_GOZO_BODY
# 23 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_C1_EVD_GARLAND
# 24 "data/scripts/tarc3_common.pory"
	setflag FLAG_HIDE_TARC3_HOLD_EVD_MANIFEST
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
# 39 "data/scripts/tarc3_common.pory"
	setvar VAR_RESULT, FALSE
# 40 "data/scripts/tarc3_common.pory"
	goto_if_ne VAR_TARC3_ACT1, TARC3_ACT1_INVESTIGATE_1, tarc3_EventScript_FollowerHookEnd
# 41 "data/scripts/tarc3_common.pory"
	goto_if_set FLAG_TARC3_C1_FOUND_WEAPON, tarc3_EventScript_FollowerHookEnd
# 42 "data/scripts/tarc3_common.pory"
	getlivemonspecies VAR_0x8008
# 43 "data/scripts/tarc3_common.pory"
	goto_if_eq VAR_0x8008, SPECIES_MAGNEZONE, tarc3_EventScript_MagnezoneSearch
# 44 "data/scripts/tarc3_common.pory"
	goto tarc3_EventScript_FollowerHookEnd
	return


tarc3_EventScript_MagnezoneSearch::
# 48 "data/scripts/tarc3_common.pory"
	msgbox tarc3_EventScript_MagnezoneSearch_Text_0
# 49 "data/scripts/tarc3_common.pory"
	msgbox tarc3_EventScript_MagnezoneSearch_Text_1
# 50 "data/scripts/tarc3_common.pory"
	closemessage
# 52 "data/scripts/tarc3_common.pory"
	call tarc3_EventScript_EvidenceCaptured
# 53 "data/scripts/tarc3_common.pory"
	closemessage
# 54 "data/scripts/tarc3_common.pory"
	setflag FLAG_TARC3_C1_FOUND_WEAPON
# 55 "data/scripts/tarc3_common.pory"
	setvar VAR_RESULT, TRUE
	return


tarc3_EventScript_FollowerHookEnd::
# 60 "data/scripts/tarc3_common.pory"
	setvar VAR_RESULT, FALSE
	return


tarc3_EventScript_EvidenceCaptured_Text_0:
# 31 "data/scripts/tarc3_common.pory"
	.string "<Evidence captured>$"

tarc3_EventScript_MagnezoneSearch_Text_0:
# 48 "data/scripts/tarc3_common.pory"
	.string "Magnezone used its magnets to try and\n"
	.string "find the knife!$"

tarc3_EventScript_MagnezoneSearch_Text_1:
# 49 "data/scripts/tarc3_common.pory"
	.string "But nothing was found.$"
