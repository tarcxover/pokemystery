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
	setvar VAR_TARC3_ACT1, TARC3_ACT1_BOARDED
	return


tarc3_EventScript_EvidenceCaptured::
# 28 "data/scripts/tarc3_common.pory"
	playse SE_PC_LOGIN
# 29 "data/scripts/tarc3_common.pory"
	msgbox tarc3_EventScript_EvidenceCaptured_Text_0
	return


tarc3_EventScript_EvidenceCaptured_Text_0:
# 29 "data/scripts/tarc3_common.pory"
	.string "<Evidence captured>$"
