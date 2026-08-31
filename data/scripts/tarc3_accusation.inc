tarc3_Accusation_EventScript_Begin::
# 4 "data/scripts/tarc3_accusation.pory"
	lockall
# 5 "data/scripts/tarc3_accusation.pory"
	hidefollower
# 6 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACT3, TARC3_ACT3_ACCUSATION
# 7 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSED, 0
# 8 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, 0
# 9 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_T3, 0
# 10 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_HITS, 0
# 11 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SCORE, 0
# 12 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_QSCORE, 0
# 13 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SLOT, 0
# 14 "data/scripts/tarc3_accusation.pory"
	clearflag FLAG_TARC3_ACCUSE_CRUMBS
# 15 "data/scripts/tarc3_accusation.pory"
	clearflag FLAG_TARC3_ACCUSE_HISTORY
# 16 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_TakeTheFloor
# 17 "data/scripts/tarc3_accusation.pory"
	special SpawnCameraObject
# 18 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CAMERA, tarc3_Accusation_EventScript_Begin_Movement_0
# 19 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 20 "data/scripts/tarc3_accusation.pory"
	delay 20
# 21 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 22 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Begin_Text_0
# 23 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 24 "data/scripts/tarc3_accusation.pory"
	closemessage
# 25 "data/scripts/tarc3_accusation.pory"
	delay 20
# 26 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Naming
	return


tarc3_Accusation_EventScript_TakeTheFloor::
# 32 "data/scripts/tarc3_accusation.pory"
	special StorePlayerCoordsInVars
# 33 "data/scripts/tarc3_accusation.pory"
	compare VAR_0x8005, 7
	goto_if_eq tarc3_Accusation_EventScript_TakeTheFloor_2
# 36 "data/scripts/tarc3_accusation.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tarc3_Accusation_EventScript_TakeTheFloor_Movement_1
tarc3_Accusation_EventScript_TakeTheFloor_1:
# 38 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
	return

tarc3_Accusation_EventScript_TakeTheFloor_2:
# 34 "data/scripts/tarc3_accusation.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tarc3_Accusation_EventScript_TakeTheFloor_Movement_0
	goto tarc3_Accusation_EventScript_TakeTheFloor_1


tarc3_Accusation_EventScript_Naming::
# 45 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 46 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Naming_Text_1
# 47 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Naming_Text_2
# 48 "data/scripts/tarc3_accusation.pory"
	closemessage
# 49 "data/scripts/tarc3_accusation.pory"
	delay 20
# 50 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_NameMenu
	return


tarc3_Accusation_EventScript_NameMenu::
# 54 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 55 "data/scripts/tarc3_accusation.pory"
	message tarc3_Accusation_EventScript_NameMenu_Text_0
# 56 "data/scripts/tarc3_accusation.pory"
	waitmessage
# 57 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_NameMenu_Text_1, 0
# 58 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_NameMenu_Text_2, 1
# 59 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 60 "data/scripts/tarc3_accusation.pory"
	closemessage
# 61 "data/scripts/tarc3_accusation.pory"
	compare VAR_RESULT, 1
	goto_if_eq tarc3_Accusation_EventScript_NameMenu_2
tarc3_Accusation_EventScript_NameMenu_1:
# 69 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 70 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameMenu_Text_4, MSGBOX_YESNO
# 71 "data/scripts/tarc3_accusation.pory"
	closemessage
# 72 "data/scripts/tarc3_accusation.pory"
	compare VAR_RESULT, NO
	goto_if_eq tarc3_Accusation_EventScript_NameMenu_5
tarc3_Accusation_EventScript_NameMenu_4:
# 75 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_NameIchiro
	return

tarc3_Accusation_EventScript_NameMenu_2:
# 62 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameMenu_Text_3, MSGBOX_YESNO
# 63 "data/scripts/tarc3_accusation.pory"
	closemessage
# 64 "data/scripts/tarc3_accusation.pory"
	compare VAR_RESULT, NO
	goto_if_eq tarc3_Accusation_EventScript_NameMenu_8
tarc3_Accusation_EventScript_NameMenu_7:
# 67 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_NameTakeshi
	goto tarc3_Accusation_EventScript_NameMenu_1

tarc3_Accusation_EventScript_NameMenu_5:
# 73 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_NameMenu
	goto tarc3_Accusation_EventScript_NameMenu_4

tarc3_Accusation_EventScript_NameMenu_8:
# 65 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_NameMenu
	goto tarc3_Accusation_EventScript_NameMenu_7


tarc3_Accusation_EventScript_NameIchiro::
# 79 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
# 80 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 81 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_0
# 82 "data/scripts/tarc3_accusation.pory"
	closemessage
# 83 "data/scripts/tarc3_accusation.pory"
	playse SE_PIN
# 84 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_JOJI, tarc3_Accusation_EventScript_NameIchiro_Movement_0
# 85 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 86 "data/scripts/tarc3_accusation.pory"
	delay 5
# 87 "data/scripts/tarc3_accusation.pory"
	playse SE_PIN
# 88 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_MARIKO, tarc3_Accusation_EventScript_NameIchiro_Movement_0
# 89 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 90 "data/scripts/tarc3_accusation.pory"
	delay 20
# 91 "data/scripts/tarc3_accusation.pory"
	playse SE_PIN
# 92 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_KITARO, tarc3_Accusation_EventScript_NameIchiro_Movement_0
# 93 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 94 "data/scripts/tarc3_accusation.pory"
	delay 60
# 95 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 96 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_2
# 97 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 98 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_4
# 99 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 100 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_6
# 101 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 102 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 103 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_8
# 104 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 105 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_9
# 106 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 107 "data/scripts/tarc3_accusation.pory"
	closemessage
# 108 "data/scripts/tarc3_accusation.pory"
	delay 30
# 109 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q1
	return


tarc3_Accusation_EventScript_NameTakeshi::
# 113 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
# 114 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 115 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_0
# 116 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 117 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_1
# 118 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 119 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_3
# 120 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_4
# 121 "data/scripts/tarc3_accusation.pory"
	closemessage
# 122 "data/scripts/tarc3_accusation.pory"
	delay 30
# 123 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_OpenCloset
# 124 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 125 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_5
# 126 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_6
# 127 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_7
# 128 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 129 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_8
# 130 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 131 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameTakeshi_Text_9
# 132 "data/scripts/tarc3_accusation.pory"
	delay 30
# 133 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q1
	return


tarc3_Accusation_EventScript_OpenCloset::
# 139 "data/scripts/tarc3_accusation.pory"
	playse SE_DOOR
# 140 "data/scripts/tarc3_accusation.pory"
	clearflag FLAG_HIDE_TARC3_CABIN_TAKESHI
# 141 "data/scripts/tarc3_accusation.pory"
	addobject LOCALID_CABINS_TAKESHI_CLOSET
# 142 "data/scripts/tarc3_accusation.pory"
	delay 30
# 143 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_NATSUE, tarc3_Accusation_EventScript_OpenCloset_Movement_0
# 144 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 145 "data/scripts/tarc3_accusation.pory"
	delay 30
# 146 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_TAKESHI_CLOSET, tarc3_Accusation_EventScript_OpenCloset_Movement_1
# 147 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 148 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_NATSUE, tarc3_Accusation_EventScript_OpenCloset_Movement_2
# 149 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 150 "data/scripts/tarc3_accusation.pory"
	delay 20
	return


tarc3_Accusation_EventScript_Q1::
# 159 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 160 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1_Text_0
# 161 "data/scripts/tarc3_accusation.pory"
	closemessage
# 162 "data/scripts/tarc3_accusation.pory"
	delay 20
# 163 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_QSCORE, 0
# 164 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SLOT, 0
# 165 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q1Loop
	return


tarc3_Accusation_EventScript_Q1Loop::
# 169 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SLOT, 3, tarc3_Accusation_EventScript_Q1Summary
# 170 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 171 "data/scripts/tarc3_accusation.pory"
	message tarc3_Accusation_EventScript_Q1Loop_Text_0
# 172 "data/scripts/tarc3_accusation.pory"
	waitmessage
# 173 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_1, EVD_TWIN_REFUSAL
# 174 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_2, EVD_UNREQUITED_LOVE
# 175 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_3, EVD_SPONSORSHIP_WITHDRAWAL
# 176 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_4, EVD_ARTIST_AT_THE_DOOR
# 177 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_5, EVD_GOZOS_FINAL_MEETING
# 178 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_6, EVD_TAKESHIS_REVENGE
# 179 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_7, EVD_SKETCHBOOK
# 180 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_8, EVD_REFUSED_SUITOR
# 181 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_9, EVD_TUITION_FUNDS
# 182 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_10, EVD_ICHIRO_SPONSORSHIP
# 183 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_11, EVD_BREAD_ERASER
# 184 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_12, EVD_TAKESHIS_MEETING
# 185 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_13, EVD_TAKESHIS_HISTORY
# 186 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_14, EVD_FAMILY_PICTURE
# 187 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_15, EVD_OVERHEARD_ARGUMENT
# 188 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_16, TARC3_ACCUSE_NONE
# 189 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 190 "data/scripts/tarc3_accusation.pory"
	closemessage
# 191 "data/scripts/tarc3_accusation.pory"
	switch VAR_RESULT
# 192 "data/scripts/tarc3_accusation.pory"
	case EVD_TWIN_REFUSAL, tarc3_Accusation_EventScript_Q1Loop_3
# 194 "data/scripts/tarc3_accusation.pory"
	case EVD_UNREQUITED_LOVE, tarc3_Accusation_EventScript_Q1Loop_4
# 196 "data/scripts/tarc3_accusation.pory"
	case EVD_SPONSORSHIP_WITHDRAWAL, tarc3_Accusation_EventScript_Q1Loop_5
# 198 "data/scripts/tarc3_accusation.pory"
	case EVD_ARTIST_AT_THE_DOOR, tarc3_Accusation_EventScript_Q1Loop_6
# 200 "data/scripts/tarc3_accusation.pory"
	case EVD_GOZOS_FINAL_MEETING, tarc3_Accusation_EventScript_Q1Loop_7
# 202 "data/scripts/tarc3_accusation.pory"
	case EVD_TAKESHIS_REVENGE, tarc3_Accusation_EventScript_Q1Loop_8
# 204 "data/scripts/tarc3_accusation.pory"
	case EVD_SKETCHBOOK, tarc3_Accusation_EventScript_Q1Loop_9
# 206 "data/scripts/tarc3_accusation.pory"
	case EVD_REFUSED_SUITOR, tarc3_Accusation_EventScript_Q1Loop_10
# 208 "data/scripts/tarc3_accusation.pory"
	case EVD_TUITION_FUNDS, tarc3_Accusation_EventScript_Q1Loop_11
# 210 "data/scripts/tarc3_accusation.pory"
	case EVD_ICHIRO_SPONSORSHIP, tarc3_Accusation_EventScript_Q1Loop_12
# 212 "data/scripts/tarc3_accusation.pory"
	case EVD_BREAD_ERASER, tarc3_Accusation_EventScript_Q1Loop_13
# 214 "data/scripts/tarc3_accusation.pory"
	case EVD_TAKESHIS_MEETING, tarc3_Accusation_EventScript_Q1Loop_14
# 216 "data/scripts/tarc3_accusation.pory"
	case EVD_TAKESHIS_HISTORY, tarc3_Accusation_EventScript_Q1Loop_15
# 218 "data/scripts/tarc3_accusation.pory"
	case EVD_FAMILY_PICTURE, tarc3_Accusation_EventScript_Q1Loop_16
# 220 "data/scripts/tarc3_accusation.pory"
	case EVD_OVERHEARD_ARGUMENT, tarc3_Accusation_EventScript_Q1Loop_17
# 223 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q1Summary
tarc3_Accusation_EventScript_Q1Loop_1:
# 225 "data/scripts/tarc3_accusation.pory"
	addvar VAR_TARC3_ACCUSE_SLOT, 1
# 226 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q1Loop
	return

tarc3_Accusation_EventScript_Q1Loop_3:
# 193 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TwinRefusal
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_4:
# 195 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_UnrequitedLove
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_5:
# 197 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_6:
# 199 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_7:
# 201 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_GozosFinalMeeting
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_8:
# 203 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TakeshisRevenge
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_9:
# 205 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_Sketchbook
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_10:
# 207 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_RefusedSuitor
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_11:
# 209 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TuitionFunds
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_12:
# 211 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_IchiroSponsorship
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_13:
# 213 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_BreadEraser
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_14:
# 215 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TakeshisMeeting
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_15:
# 217 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TakeshisHistory
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_16:
# 219 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_FamilyPicture
	goto tarc3_Accusation_EventScript_Q1Loop_1

tarc3_Accusation_EventScript_Q1Loop_17:
# 221 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_OverheardArgument
	goto tarc3_Accusation_EventScript_Q1Loop_1


tarc3_Accusation_EventScript_Q1Summary::
# 230 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 13, tarc3_Accusation_EventScript_Q1SummaryBest
# 231 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 5, tarc3_Accusation_EventScript_Q1SummaryGood
# 232 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 1, tarc3_Accusation_EventScript_Q1SummaryPoor
# 233 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSE_SLOT, 0, tarc3_Accusation_EventScript_Q1SummarySkipped
# 234 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q1SummaryNone
	return


tarc3_Accusation_EventScript_Q1SummaryBest::
# 238 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 239 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryBest_Text_0
# 240 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 241 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryBest_Text_2
# 242 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 243 "data/scripts/tarc3_accusation.pory"
	closemessage
# 244 "data/scripts/tarc3_accusation.pory"
	delay 30
# 245 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2
	return


tarc3_Accusation_EventScript_Q1SummaryGood::
# 249 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 250 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryGood_Text_0
# 251 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 252 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryGood_Text_1
# 253 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 254 "data/scripts/tarc3_accusation.pory"
	closemessage
# 255 "data/scripts/tarc3_accusation.pory"
	delay 30
# 256 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2
	return


tarc3_Accusation_EventScript_Q1SummaryPoor::
# 260 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 261 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryPoor_Text_0
# 262 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 263 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryPoor_Text_1
# 264 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 265 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryPoor_Text_3
# 266 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 267 "data/scripts/tarc3_accusation.pory"
	closemessage
# 268 "data/scripts/tarc3_accusation.pory"
	delay 30
# 269 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2
	return


tarc3_Accusation_EventScript_Q1SummaryNone::
# 273 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 274 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryNone_Text_0
# 275 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 276 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummaryNone_Text_1
# 277 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 278 "data/scripts/tarc3_accusation.pory"
	closemessage
# 279 "data/scripts/tarc3_accusation.pory"
	delay 30
# 280 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2
	return


tarc3_Accusation_EventScript_Q1SummarySkipped::
# 284 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 285 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummarySkipped_Text_0
# 286 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 287 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummarySkipped_Text_1
# 288 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 289 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q1SummarySkipped_Text_2
# 290 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 291 "data/scripts/tarc3_accusation.pory"
	closemessage
# 292 "data/scripts/tarc3_accusation.pory"
	delay 30
# 293 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2
	return


tarc3_Accusation_EventScript_Q2::
# 299 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 300 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2_Text_0
# 301 "data/scripts/tarc3_accusation.pory"
	closemessage
# 302 "data/scripts/tarc3_accusation.pory"
	delay 20
# 303 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_QSCORE, 0
# 304 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SLOT, 0
# 305 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2Loop
	return


tarc3_Accusation_EventScript_Q2Loop::
# 309 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SLOT, 3, tarc3_Accusation_EventScript_Q2Summary
# 310 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 311 "data/scripts/tarc3_accusation.pory"
	message tarc3_Accusation_EventScript_Q1Loop_Text_0
# 312 "data/scripts/tarc3_accusation.pory"
	waitmessage
# 313 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_0, EVD_SILENCED_WITNESS
# 314 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_1, EVD_THE_ACCOMPLICE_THEORY
# 315 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_2, EVD_CHARCOAL_ON_BOLT
# 316 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_3, EVD_LONG_ABSENCE
# 317 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_4, EVD_AN_ACCOMPLICE
# 318 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_5, EVD_OPEN_SERVICE_DOOR
# 319 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_6, EVD_BLOOD_ON_THE_STAIR
# 320 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_7, EVD_HIDDEN_PIPE
# 321 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_16, TARC3_ACCUSE_NONE
# 322 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 323 "data/scripts/tarc3_accusation.pory"
	closemessage
# 324 "data/scripts/tarc3_accusation.pory"
	switch VAR_RESULT
# 325 "data/scripts/tarc3_accusation.pory"
	case EVD_SILENCED_WITNESS, tarc3_Accusation_EventScript_Q2Loop_3
# 327 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_ACCOMPLICE_THEORY, tarc3_Accusation_EventScript_Q2Loop_4
# 329 "data/scripts/tarc3_accusation.pory"
	case EVD_CHARCOAL_ON_BOLT, tarc3_Accusation_EventScript_Q2Loop_5
# 331 "data/scripts/tarc3_accusation.pory"
	case EVD_LONG_ABSENCE, tarc3_Accusation_EventScript_Q2Loop_6
# 333 "data/scripts/tarc3_accusation.pory"
	case EVD_AN_ACCOMPLICE, tarc3_Accusation_EventScript_Q2Loop_7
# 335 "data/scripts/tarc3_accusation.pory"
	case EVD_OPEN_SERVICE_DOOR, tarc3_Accusation_EventScript_Q2Loop_8
# 337 "data/scripts/tarc3_accusation.pory"
	case EVD_BLOOD_ON_THE_STAIR, tarc3_Accusation_EventScript_Q2Loop_9
# 339 "data/scripts/tarc3_accusation.pory"
	case EVD_HIDDEN_PIPE, tarc3_Accusation_EventScript_Q2Loop_10
# 342 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2Summary
tarc3_Accusation_EventScript_Q2Loop_1:
# 344 "data/scripts/tarc3_accusation.pory"
	addvar VAR_TARC3_ACCUSE_SLOT, 1
# 345 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2Loop
	return

tarc3_Accusation_EventScript_Q2Loop_3:
# 326 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SilencedWitness
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_4:
# 328 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheAccompliceTheory
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_5:
# 330 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_CharcoalOnBolt
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_6:
# 332 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_LongAbsence
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_7:
# 334 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_AnAccomplice
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_8:
# 336 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_OpenServiceDoor
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_9:
# 338 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_BloodOnTheStair
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_10:
# 340 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_HiddenPipe
	goto tarc3_Accusation_EventScript_Q2Loop_1


tarc3_Accusation_EventScript_Q2Summary::
# 349 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 5, tarc3_Accusation_EventScript_Q2SummaryGood
# 350 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 1, tarc3_Accusation_EventScript_Q2SummaryPoor
# 351 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSE_SLOT, 0, tarc3_Accusation_EventScript_Q2SummarySkipped
# 352 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2SummaryNone
	return


tarc3_Accusation_EventScript_Q2SummaryGood::
# 356 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 357 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryGood_Text_1
# 358 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 359 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryGood_Text_2
# 360 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 361 "data/scripts/tarc3_accusation.pory"
	closemessage
# 362 "data/scripts/tarc3_accusation.pory"
	delay 30
# 363 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q2SummaryPoor::
# 367 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 368 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryPoor_Text_0
# 369 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 370 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryPoor_Text_1
# 371 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 372 "data/scripts/tarc3_accusation.pory"
	closemessage
# 373 "data/scripts/tarc3_accusation.pory"
	delay 30
# 374 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q2SummaryNone::
# 378 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 379 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryNone_Text_0
# 380 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 381 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryNone_Text_1
# 382 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 383 "data/scripts/tarc3_accusation.pory"
	closemessage
# 384 "data/scripts/tarc3_accusation.pory"
	delay 30
# 385 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q2SummarySkipped::
# 389 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 390 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_0
# 391 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 392 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_1
# 393 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_2
# 394 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_3
# 395 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 396 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_4
# 397 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 398 "data/scripts/tarc3_accusation.pory"
	closemessage
# 399 "data/scripts/tarc3_accusation.pory"
	delay 30
# 400 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q3::
# 406 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 407 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3_Text_0
# 408 "data/scripts/tarc3_accusation.pory"
	closemessage
# 409 "data/scripts/tarc3_accusation.pory"
	delay 20
# 410 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_QSCORE, 0
# 411 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SLOT, 0
# 412 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3Loop
	return


tarc3_Accusation_EventScript_Q3Loop::
# 416 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SLOT, 3, tarc3_Accusation_EventScript_Q3Summary
# 417 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 418 "data/scripts/tarc3_accusation.pory"
	message tarc3_Accusation_EventScript_Q1Loop_Text_0
# 419 "data/scripts/tarc3_accusation.pory"
	waitmessage
# 420 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_0, EVD_SKETCHED_DISCHARGE
# 421 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_1, EVD_SMEARGLE_KNOWS_DISCHARGE
# 422 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_2, EVD_PANEL_STRUCK
# 423 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_3, EVD_THE_NEAREST_HAND
# 424 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_4, EVD_SMEARGLE_REPERTOIRE
# 425 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_5, EVD_THE_ODD_BATTLE
# 426 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_6, EVD_FOCUSED_BURN
# 427 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_3, EVD_LONG_ABSENCE
# 428 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_7, EVD_THE_HOLD_ADJOINS
# 429 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_5, EVD_OPEN_SERVICE_DOOR
# 430 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_16, TARC3_ACCUSE_NONE
# 431 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 432 "data/scripts/tarc3_accusation.pory"
	closemessage
# 433 "data/scripts/tarc3_accusation.pory"
	switch VAR_RESULT
# 434 "data/scripts/tarc3_accusation.pory"
	case EVD_SKETCHED_DISCHARGE, tarc3_Accusation_EventScript_Q3Loop_3
# 436 "data/scripts/tarc3_accusation.pory"
	case EVD_SMEARGLE_KNOWS_DISCHARGE, tarc3_Accusation_EventScript_Q3Loop_4
# 438 "data/scripts/tarc3_accusation.pory"
	case EVD_PANEL_STRUCK, tarc3_Accusation_EventScript_Q3Loop_5
# 440 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_NEAREST_HAND, tarc3_Accusation_EventScript_Q3Loop_6
# 442 "data/scripts/tarc3_accusation.pory"
	case EVD_SMEARGLE_REPERTOIRE, tarc3_Accusation_EventScript_Q3Loop_7
# 444 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_ODD_BATTLE, tarc3_Accusation_EventScript_Q3Loop_8
# 446 "data/scripts/tarc3_accusation.pory"
	case EVD_FOCUSED_BURN, tarc3_Accusation_EventScript_Q3Loop_9
# 448 "data/scripts/tarc3_accusation.pory"
	case EVD_LONG_ABSENCE, tarc3_Accusation_EventScript_Q3Loop_10
# 450 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_HOLD_ADJOINS, tarc3_Accusation_EventScript_Q3Loop_11
# 452 "data/scripts/tarc3_accusation.pory"
	case EVD_OPEN_SERVICE_DOOR, tarc3_Accusation_EventScript_Q3Loop_12
# 455 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3Summary
tarc3_Accusation_EventScript_Q3Loop_1:
# 457 "data/scripts/tarc3_accusation.pory"
	addvar VAR_TARC3_ACCUSE_SLOT, 1
# 458 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3Loop
	return

tarc3_Accusation_EventScript_Q3Loop_3:
# 435 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SketchedDischarge
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_4:
# 437 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_5:
# 439 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_PanelStruck
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_6:
# 441 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheNearestHand
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_7:
# 443 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SmeargleRepertoire
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_8:
# 445 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheOddBattle
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_9:
# 447 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_FocusedBurn
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_10:
# 449 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_LongAbsence
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_11:
# 451 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheHoldAdjoins
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_12:
# 453 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_OpenServiceDoor
	goto tarc3_Accusation_EventScript_Q3Loop_1


tarc3_Accusation_EventScript_Q3Summary::
# 462 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 13, tarc3_Accusation_EventScript_Q3SummaryBest
# 463 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 5, tarc3_Accusation_EventScript_Q3SummaryGood
# 464 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 1, tarc3_Accusation_EventScript_Q3SummaryPoor
# 465 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSE_SLOT, 0, tarc3_Accusation_EventScript_Q3SummarySkipped
# 466 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3SummaryNone
	return


tarc3_Accusation_EventScript_Q3SummaryBest::
# 470 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 471 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryBest_Text_0
# 472 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 473 "data/scripts/tarc3_accusation.pory"
	closemessage
# 474 "data/scripts/tarc3_accusation.pory"
	delay 30
# 475 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummaryGood::
# 479 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 480 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryGood_Text_0
# 481 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 482 "data/scripts/tarc3_accusation.pory"
	closemessage
# 483 "data/scripts/tarc3_accusation.pory"
	delay 30
# 484 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummaryPoor::
# 488 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 489 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryPoor_Text_0
# 490 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 491 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryPoor_Text_1
# 492 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 493 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryPoor_Text_2
# 494 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 495 "data/scripts/tarc3_accusation.pory"
	closemessage
# 496 "data/scripts/tarc3_accusation.pory"
	delay 30
# 497 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummaryNone::
# 501 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 502 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryNone_Text_0
# 503 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 504 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryNone_Text_1
# 505 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 506 "data/scripts/tarc3_accusation.pory"
	closemessage
# 507 "data/scripts/tarc3_accusation.pory"
	delay 30
# 508 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummarySkipped::
# 512 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 513 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_0
# 514 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 515 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_1
# 516 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 517 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_2
# 518 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_3
# 519 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 520 "data/scripts/tarc3_accusation.pory"
	closemessage
# 521 "data/scripts/tarc3_accusation.pory"
	delay 30
# 522 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q4::
# 528 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 529 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4_Text_0
# 530 "data/scripts/tarc3_accusation.pory"
	closemessage
# 531 "data/scripts/tarc3_accusation.pory"
	delay 30
# 532 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 533 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4_Text_1
# 534 "data/scripts/tarc3_accusation.pory"
	closemessage
# 535 "data/scripts/tarc3_accusation.pory"
	delay 20
# 536 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_QSCORE, 0
# 537 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SLOT, 0
# 538 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4Loop
	return


tarc3_Accusation_EventScript_Q4Loop::
# 542 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SLOT, 3, tarc3_Accusation_EventScript_Q4Summary
# 543 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 544 "data/scripts/tarc3_accusation.pory"
	message tarc3_Accusation_EventScript_Q1Loop_Text_0
# 545 "data/scripts/tarc3_accusation.pory"
	waitmessage
# 546 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_0, EVD_SELF_INFLICTED_WOUND
# 547 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_1, EVD_IMPOSSIBLE_PRECISION
# 548 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_2, EVD_INCONSISTENT_DISPOSAL
# 549 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_1, EVD_THE_ACCOMPLICE_THEORY
# 550 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_3, EVD_NO_DEFENSIVE_WOUNDS
# 551 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_4, EVD_THE_SECOND_STORY
# 552 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_4, EVD_AN_ACCOMPLICE
# 553 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_5, EVD_OPEN_SERVICE_DOOR
# 554 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_5, EVD_KNIVES_COUNTED
# 555 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_16, TARC3_ACCUSE_NONE
# 556 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 557 "data/scripts/tarc3_accusation.pory"
	closemessage
# 558 "data/scripts/tarc3_accusation.pory"
	switch VAR_RESULT
# 559 "data/scripts/tarc3_accusation.pory"
	case EVD_SELF_INFLICTED_WOUND, tarc3_Accusation_EventScript_Q4Loop_3
# 561 "data/scripts/tarc3_accusation.pory"
	case EVD_IMPOSSIBLE_PRECISION, tarc3_Accusation_EventScript_Q4Loop_4
# 563 "data/scripts/tarc3_accusation.pory"
	case EVD_INCONSISTENT_DISPOSAL, tarc3_Accusation_EventScript_Q4Loop_5
# 565 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_ACCOMPLICE_THEORY, tarc3_Accusation_EventScript_Q4Loop_6
# 567 "data/scripts/tarc3_accusation.pory"
	case EVD_NO_DEFENSIVE_WOUNDS, tarc3_Accusation_EventScript_Q4Loop_7
# 569 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_SECOND_STORY, tarc3_Accusation_EventScript_Q4Loop_8
# 571 "data/scripts/tarc3_accusation.pory"
	case EVD_AN_ACCOMPLICE, tarc3_Accusation_EventScript_Q4Loop_9
# 573 "data/scripts/tarc3_accusation.pory"
	case EVD_OPEN_SERVICE_DOOR, tarc3_Accusation_EventScript_Q4Loop_10
# 575 "data/scripts/tarc3_accusation.pory"
	case EVD_KNIVES_COUNTED, tarc3_Accusation_EventScript_Q4Loop_11
# 578 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4Summary
tarc3_Accusation_EventScript_Q4Loop_1:
# 580 "data/scripts/tarc3_accusation.pory"
	addvar VAR_TARC3_ACCUSE_SLOT, 1
# 581 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4Loop
	return

tarc3_Accusation_EventScript_Q4Loop_3:
# 560 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SelfInflictedWound
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_4:
# 562 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_ImpossiblePrecision
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_5:
# 564 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_InconsistentDisposal
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_6:
# 566 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheAccompliceTheory
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_7:
# 568 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_NoDefensiveWounds
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_8:
# 570 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheSecondStory
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_9:
# 572 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_AnAccomplice
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_10:
# 574 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_OpenServiceDoor
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_11:
# 576 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_KnivesCounted
	goto tarc3_Accusation_EventScript_Q4Loop_1


tarc3_Accusation_EventScript_Q4Summary::
# 585 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 13, tarc3_Accusation_EventScript_Q4SummaryBest
# 586 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 5, tarc3_Accusation_EventScript_Q4SummaryGood
# 587 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 1, tarc3_Accusation_EventScript_Q4SummaryPoor
# 588 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSE_SLOT, 0, tarc3_Accusation_EventScript_Q4SummarySkipped
# 589 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4SummaryNone
	return


tarc3_Accusation_EventScript_Q4SummaryBest::
# 593 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 594 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryBest_Text_0
# 595 "data/scripts/tarc3_accusation.pory"
	closemessage
# 596 "data/scripts/tarc3_accusation.pory"
	delay 40
# 597 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummaryGood::
# 601 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 602 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryGood_Text_0
# 603 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 604 "data/scripts/tarc3_accusation.pory"
	closemessage
# 605 "data/scripts/tarc3_accusation.pory"
	delay 30
# 606 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummaryPoor::
# 610 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 611 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryPoor_Text_0
# 612 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 613 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 614 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryPoor_Text_1
# 615 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 616 "data/scripts/tarc3_accusation.pory"
	closemessage
# 617 "data/scripts/tarc3_accusation.pory"
	delay 30
# 618 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummaryNone::
# 622 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 623 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryNone_Text_0
# 624 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 625 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryNone_Text_1
# 626 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 627 "data/scripts/tarc3_accusation.pory"
	closemessage
# 628 "data/scripts/tarc3_accusation.pory"
	delay 30
# 629 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummarySkipped::
# 633 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 634 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_0
# 635 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_1
# 636 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 637 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_2
# 638 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_3
# 639 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 640 "data/scripts/tarc3_accusation.pory"
	closemessage
# 641 "data/scripts/tarc3_accusation.pory"
	delay 30
# 642 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Resolve::
# 647 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI, tarc3_Accusation_EventScript_BandWorst
# 648 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_SCORE, 43
	goto_if_ge tarc3_Accusation_EventScript_Resolve_3
tarc3_Accusation_EventScript_Resolve_1:
# 651 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_SCORE, 24
	goto_if_ge tarc3_Accusation_EventScript_Resolve_8
tarc3_Accusation_EventScript_Resolve_6:
# 654 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BandBad
	return

tarc3_Accusation_EventScript_Resolve_2:
# 649 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BandPerfect
	goto tarc3_Accusation_EventScript_Resolve_1

tarc3_Accusation_EventScript_Resolve_3:
# 648 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_T3, TARC3_T3_ALL
	goto_if_eq tarc3_Accusation_EventScript_Resolve_2
	goto tarc3_Accusation_EventScript_Resolve_1

tarc3_Accusation_EventScript_Resolve_7:
# 652 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BandGood
	goto tarc3_Accusation_EventScript_Resolve_6

tarc3_Accusation_EventScript_Resolve_8:
# 651 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_HITS, 1
	goto_if_ge tarc3_Accusation_EventScript_Resolve_7
	goto tarc3_Accusation_EventScript_Resolve_6


tarc3_Accusation_EventScript_BandPerfect::
# 658 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_PERFECT
# 659 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_PerfectAnswer
	return


tarc3_Accusation_EventScript_BandGood::
# 663 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_GOOD
# 664 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodAnswer
	return


tarc3_Accusation_EventScript_BandBad::
# 668 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_BAD
# 669 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadAnswer
	return


tarc3_Accusation_EventScript_BandWorst::
# 673 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_WORST
# 674 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SCORE, 24, tarc3_Accusation_EventScript_WorstAnswer
# 675 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_WORST_REFUSED
# 676 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstRefusedAnswer
	return


tarc3_Accusation_EventScript_PerfectAnswer::
# 682 "data/scripts/tarc3_accusation.pory"
	closemessage
# 683 "data/scripts/tarc3_accusation.pory"
	delay 50
# 684 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 685 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_0
# 686 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_1
# 687 "data/scripts/tarc3_accusation.pory"
	closemessage
# 688 "data/scripts/tarc3_accusation.pory"
	delay 20
# 689 "data/scripts/tarc3_accusation.pory"
	playse SE_PIN
# 690 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_NameIchiro_Movement_0
# 691 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 692 "data/scripts/tarc3_accusation.pory"
	delay 30
# 693 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectAnswer_Movement_0
# 694 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 695 "data/scripts/tarc3_accusation.pory"
	delay 20
# 696 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 697 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_2
# 698 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_3
# 699 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_4
# 700 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_5
# 701 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_6
# 702 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_7
# 703 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_8
# 704 "data/scripts/tarc3_accusation.pory"
	closemessage
# 705 "data/scripts/tarc3_accusation.pory"
	delay 50
# 706 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 707 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_9
# 708 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_10
# 709 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_11
# 710 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 711 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 712 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_12
# 713 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_13
# 714 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 715 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_14
# 716 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_15
# 717 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_16
# 718 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_17
# 719 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 720 "data/scripts/tarc3_accusation.pory"
	closemessage
# 721 "data/scripts/tarc3_accusation.pory"
	delay 60
# 722 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_PerfectCloset
	return


tarc3_Accusation_EventScript_PerfectCloset::
# 726 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 727 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_0
# 728 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 729 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_1
# 730 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 731 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_2
# 732 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 733 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_3
# 734 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 735 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_4
# 736 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 737 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_5
# 738 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 739 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_6
# 740 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_7
# 741 "data/scripts/tarc3_accusation.pory"
	closemessage
# 742 "data/scripts/tarc3_accusation.pory"
	delay 30
# 743 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_OpenCloset
# 744 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 745 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_8
# 746 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 747 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_9
# 748 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 749 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_10
# 750 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 751 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_11
# 752 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 753 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_12
# 754 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 755 "data/scripts/tarc3_accusation.pory"
	closemessage
# 756 "data/scripts/tarc3_accusation.pory"
	delay 30
# 757 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_PerfectTakeshi
	return


tarc3_Accusation_EventScript_PerfectTakeshi::
# 761 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 762 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_0
# 763 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 764 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_1
# 765 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_2
# 766 "data/scripts/tarc3_accusation.pory"
	goto_if_set FLAG_TARC3_ACCUSE_HISTORY, tarc3_Accusation_EventScript_PerfectTakeshi_2
tarc3_Accusation_EventScript_PerfectTakeshi_1:
# 769 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_4
# 770 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_5
# 771 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_6
# 772 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_7
# 773 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_8
# 774 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 775 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_9
# 776 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 777 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_10
# 778 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_11
# 779 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_12
# 780 "data/scripts/tarc3_accusation.pory"
	closemessage
# 781 "data/scripts/tarc3_accusation.pory"
	delay 20
# 782 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_TAKESHI_CLOSET, tarc3_Accusation_EventScript_OpenCloset_Movement_2
# 783 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 784 "data/scripts/tarc3_accusation.pory"
	delay 20
# 785 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectTakeshi_Movement_0
# 786 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 787 "data/scripts/tarc3_accusation.pory"
	delay 20
# 788 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 789 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_13
# 790 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_14
# 791 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_15
# 792 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 793 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_16
# 794 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_17
# 795 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 796 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 797 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 798 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 799 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 800 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 801 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 802 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 803 "data/scripts/tarc3_accusation.pory"
	closemessage
# 804 "data/scripts/tarc3_accusation.pory"
	delay 50
# 805 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return

tarc3_Accusation_EventScript_PerfectTakeshi_2:
# 767 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_3
	goto tarc3_Accusation_EventScript_PerfectTakeshi_1


tarc3_Accusation_EventScript_GoodAnswer::
# 811 "data/scripts/tarc3_accusation.pory"
	closemessage
# 812 "data/scripts/tarc3_accusation.pory"
	delay 40
# 813 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 814 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_0
# 815 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 816 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_1
# 817 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_2
# 818 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 819 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_3
# 820 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 821 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_4
# 822 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_5
# 823 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 824 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_6
# 825 "data/scripts/tarc3_accusation.pory"
	closemessage
# 826 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_OpenCloset_Movement_0
# 827 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 828 "data/scripts/tarc3_accusation.pory"
	delay 20
# 829 "data/scripts/tarc3_accusation.pory"
	switch VAR_TARC3_ACCUSE_T3
# 830 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_REFUSAL_ONLY, tarc3_Accusation_EventScript_GoodAnswer_2
# 832 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_REFUSAL_LIGHTS, tarc3_Accusation_EventScript_GoodAnswer_3
# 834 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_REFUSAL_WOUND, tarc3_Accusation_EventScript_GoodAnswer_4
# 836 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_ALL, tarc3_Accusation_EventScript_GoodAnswer_5
# 839 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveKept
	return

tarc3_Accusation_EventScript_GoodAnswer_2:
# 831 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return

tarc3_Accusation_EventScript_GoodAnswer_3:
# 833 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return

tarc3_Accusation_EventScript_GoodAnswer_4:
# 835 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return

tarc3_Accusation_EventScript_GoodAnswer_5:
# 837 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return


tarc3_Accusation_EventScript_GoodMotiveKept::
# 846 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 847 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_0
# 848 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_1
# 849 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_2
# 850 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_3
# 851 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 852 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 853 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_4
# 854 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 855 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_4
# 856 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 857 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_5
# 858 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 859 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 860 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 861 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 862 "data/scripts/tarc3_accusation.pory"
	closemessage
# 863 "data/scripts/tarc3_accusation.pory"
	delay 40
# 864 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 865 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_6
# 866 "data/scripts/tarc3_accusation.pory"
	closemessage
# 867 "data/scripts/tarc3_accusation.pory"
	delay 20
# 868 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_7
# 869 "data/scripts/tarc3_accusation.pory"
	closemessage
# 870 "data/scripts/tarc3_accusation.pory"
	delay 20
# 871 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 872 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_8
# 873 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 874 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_9
# 875 "data/scripts/tarc3_accusation.pory"
	closemessage
# 876 "data/scripts/tarc3_accusation.pory"
	delay 20
# 877 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodAnswerEnough
	return


tarc3_Accusation_EventScript_GoodMotiveDenied::
# 883 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 884 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_0
# 885 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 886 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_1
# 887 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_2
# 888 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 889 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_3
# 890 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_4
# 891 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 892 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 893 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 894 "data/scripts/tarc3_accusation.pory"
	closemessage
# 895 "data/scripts/tarc3_accusation.pory"
	delay 40
# 896 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_5
# 897 "data/scripts/tarc3_accusation.pory"
	closemessage
# 898 "data/scripts/tarc3_accusation.pory"
	delay 20
# 899 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodAnswerEnough
	return


tarc3_Accusation_EventScript_GoodAnswerEnough::
# 903 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectAnswer_Movement_0
# 904 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 905 "data/scripts/tarc3_accusation.pory"
	delay 20
# 906 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 907 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswerEnough_Text_0
# 908 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 909 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswerEnough_Text_1
# 910 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 911 "data/scripts/tarc3_accusation.pory"
	closemessage
# 912 "data/scripts/tarc3_accusation.pory"
	delay 40
# 913 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodCloset
	return


tarc3_Accusation_EventScript_GoodCloset::
# 917 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 918 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_0
# 919 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 920 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_1
# 921 "data/scripts/tarc3_accusation.pory"
	closemessage
# 922 "data/scripts/tarc3_accusation.pory"
	delay 20
# 923 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_OpenCloset
# 924 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 925 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_2
# 926 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 927 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_3
# 928 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 929 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_4
# 930 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 931 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_5
# 932 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 933 "data/scripts/tarc3_accusation.pory"
	closemessage
# 934 "data/scripts/tarc3_accusation.pory"
	delay 40
# 935 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodStern
	return


tarc3_Accusation_EventScript_GoodStern::
# 939 "data/scripts/tarc3_accusation.pory"
	closemessage
# 940 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_TO_BLACK
# 941 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_ICHIRO
# 942 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_SUZUKI
# 943 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_AKIE
# 944 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_KITARO
# 945 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_JOJI
# 946 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_MARIKO
# 947 "data/scripts/tarc3_accusation.pory"
	delay 30
# 948 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_FROM_BLACK
# 949 "data/scripts/tarc3_accusation.pory"
	delay 30
# 950 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 951 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_0
# 952 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 953 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_0
# 954 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 955 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_1
# 956 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_2
# 957 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_3
# 958 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 959 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 960 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 961 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_4
# 962 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 963 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_5
# 964 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 965 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_6
# 966 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 967 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 968 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_7
# 969 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_8
# 970 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 971 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_9
# 972 "data/scripts/tarc3_accusation.pory"
	closemessage
# 973 "data/scripts/tarc3_accusation.pory"
	delay 40
# 974 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return


tarc3_Accusation_EventScript_BadAnswer::
# 980 "data/scripts/tarc3_accusation.pory"
	closemessage
# 981 "data/scripts/tarc3_accusation.pory"
	delay 30
# 982 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 983 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_0
# 984 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 985 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 986 "data/scripts/tarc3_accusation.pory"
	goto_if_unset FLAG_TARC3_ACCUSE_CRUMBS, tarc3_Accusation_EventScript_BadAnswerGeneric
# 987 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 988 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_1
# 989 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_2
# 990 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_3
# 991 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 992 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_4
# 993 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 994 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_5
# 995 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_6
# 996 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_7
# 997 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 998 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 999 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1000 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_8
# 1001 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_9
# 1002 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1003 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1004 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1005 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadNearMiss
	return


tarc3_Accusation_EventScript_BadAnswerGeneric::
# 1011 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1012 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_0
# 1013 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_1
# 1014 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_2
# 1015 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1016 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_3
# 1017 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1018 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_4
# 1019 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1020 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1021 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1022 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_8
# 1023 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_9
# 1024 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1025 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1026 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1027 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadNearMiss
	return


tarc3_Accusation_EventScript_BadNearMiss::
# 1033 "data/scripts/tarc3_accusation.pory"
	checkevidence EVD_SKETCHBOOK
# 1034 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_Accusation_EventScript_BadNearMissBook
# 1035 "data/scripts/tarc3_accusation.pory"
	checkevidence EVD_UNREQUITED_LOVE
# 1036 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_Accusation_EventScript_BadNearMissBook
# 1037 "data/scripts/tarc3_accusation.pory"
	checkevidence EVD_TWIN_REFUSAL
# 1038 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_Accusation_EventScript_BadNearMissBook
# 1039 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadWall
	return


tarc3_Accusation_EventScript_BadNearMissBook::
# 1043 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1044 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_0
# 1045 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1046 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1047 "data/scripts/tarc3_accusation.pory"
	playse SE_PIN
# 1048 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_NameIchiro_Movement_0
# 1049 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1050 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1051 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_OpenCloset_Movement_0
# 1052 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1053 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1054 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1055 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_1
# 1056 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1057 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1058 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectAnswer_Movement_0
# 1059 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1060 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1061 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1062 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_2
# 1063 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_3
# 1064 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1065 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1066 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadWall
	return


tarc3_Accusation_EventScript_BadWall::
# 1070 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1071 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_0
# 1072 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1073 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1074 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1075 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_1
# 1076 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1077 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1078 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1079 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_2
# 1080 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_3
# 1081 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_4
# 1082 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_5
# 1083 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1084 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1085 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1086 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadCloset
	return


tarc3_Accusation_EventScript_BadCloset::
# 1090 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1091 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_0
# 1092 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_1
# 1093 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1094 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1095 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 1096 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_2
# 1097 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_3
# 1098 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1099 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_4
# 1100 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1101 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_5
# 1102 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_6
# 1103 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1104 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_7
# 1105 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 1106 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_8
# 1107 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1108 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1109 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_OpenCloset
# 1110 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1111 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_9
# 1112 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1113 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_10
# 1114 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_11
# 1115 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_12
# 1116 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1117 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1118 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1119 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1120 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_13
# 1121 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_14
# 1122 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_15
# 1123 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1124 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1125 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1126 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return


tarc3_Accusation_EventScript_WorstAnswer::
# 1132 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1133 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1134 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1135 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_0
# 1136 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1137 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_1
# 1138 "data/scripts/tarc3_accusation.pory"
	goto_if_set FLAG_TARC3_ACCUSE_HISTORY, tarc3_Accusation_EventScript_WorstAnswer_2
tarc3_Accusation_EventScript_WorstAnswer_1:
# 1141 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_3
# 1142 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_4
# 1143 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_5
# 1144 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 1145 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_6
# 1146 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1147 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_8
# 1148 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1149 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_7
# 1150 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1151 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_8
# 1152 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_9
# 1153 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1154 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_4
# 1155 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_10
# 1156 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1157 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1158 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1159 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstRoom
	return

tarc3_Accusation_EventScript_WorstAnswer_2:
# 1139 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_2
	goto tarc3_Accusation_EventScript_WorstAnswer_1


tarc3_Accusation_EventScript_WorstRoom::
# 1163 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1164 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRoom_Text_0
# 1165 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 1166 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRoom_Text_1
# 1167 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRoom_Text_2
# 1168 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1169 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 1170 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1171 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1172 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 1173 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1174 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1175 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1176 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_SUZUKI, tarc3_Accusation_EventScript_WorstRoom_Movement_0
# 1177 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1178 "data/scripts/tarc3_accusation.pory"
	playse SE_EXIT
# 1179 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_SUZUKI
# 1180 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1181 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstIchiro
	return


tarc3_Accusation_EventScript_WorstIchiro::
# 1185 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1186 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstIchiro_Text_0
# 1187 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstIchiro_Text_1
# 1188 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstIchiro_Text_2
# 1189 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 1190 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1191 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1192 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1193 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1194 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_WorstIchiro_Movement_0
# 1195 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1196 "data/scripts/tarc3_accusation.pory"
	playse SE_EXIT
# 1197 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_ICHIRO
# 1198 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1199 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_NATSUE, tarc3_Accusation_EventScript_WorstIchiro_Movement_1
# 1200 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1201 "data/scripts/tarc3_accusation.pory"
	playse SE_EXIT
# 1202 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_NATSUE
# 1203 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1204 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return


tarc3_Accusation_EventScript_WorstRefusedAnswer::
# 1210 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1211 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1212 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1213 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_0
# 1214 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1215 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_1
# 1216 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1217 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_2
# 1218 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1219 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_3
# 1220 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_4
# 1221 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 1222 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_5
# 1223 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1224 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1225 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1226 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstRefusedTakeshi
	return


tarc3_Accusation_EventScript_WorstRefusedTakeshi::
# 1230 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1231 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_0
# 1232 "data/scripts/tarc3_accusation.pory"
	goto_if_set FLAG_TARC3_ACCUSE_HISTORY, tarc3_Accusation_EventScript_WorstRefusedTakeshi_2
tarc3_Accusation_EventScript_WorstRefusedTakeshi_1:
# 1235 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_2
# 1236 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_3
# 1237 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1238 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_4
# 1239 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1240 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_5
# 1241 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 1242 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_0
# 1243 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1244 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_1
# 1245 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 1246 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_6
# 1247 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_7
# 1248 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1249 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 1250 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1251 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1252 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 1253 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1254 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1255 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1256 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return

tarc3_Accusation_EventScript_WorstRefusedTakeshi_2:
# 1233 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_1
	goto tarc3_Accusation_EventScript_WorstRefusedTakeshi_1


tarc3_Accusation_EventScript_End::
# 1260 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1261 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1262 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CAMERA, tarc3_Accusation_EventScript_OpenCloset_Movement_1
# 1263 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1264 "data/scripts/tarc3_accusation.pory"
	special RemoveCameraObject
# 1265 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_TO_BLACK
# 1266 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_TAKESHI_CLOSET
# 1267 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_NATSUE
# 1268 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_ICHIRO
# 1269 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_SUZUKI
# 1270 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_AKIE
# 1271 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_KITARO
# 1272 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_JOJI
# 1273 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_MARIKO
# 1274 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1275 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_FROM_BLACK
# 1276 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1277 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Depart
	return


tarc3_Accusation_EventScript_Depart::
# 1281 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_RAN, tarc3_Accusation_EventScript_Depart_Movement_0
# 1282 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1283 "data/scripts/tarc3_accusation.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tarc3_Accusation_EventScript_OpenCloset_Movement_2
# 1284 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1285 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1286 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 1287 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_0
# 1288 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_1
# 1289 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1290 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1291 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1292 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1293 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1294 "data/scripts/tarc3_accusation.pory"
	playse SE_RG_SS_ANNE_HORN
# 1295 "data/scripts/tarc3_accusation.pory"
	delay 80
# 1296 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 1297 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_2
# 1298 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_3
# 1299 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1300 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1301 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1302 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_4
# 1303 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1304 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACT3, TARC3_ACT3_COMPLETE
# 1305 "data/scripts/tarc3_accusation.pory"
	releaseall
	end


# 18 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_Begin_Movement_0:
# 18 "data/scripts/tarc3_accusation.pory"
	walk_up
	step_end

# 34 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_TakeTheFloor_Movement_0:
# 34 "data/scripts/tarc3_accusation.pory"
	walk_left
# 34 "data/scripts/tarc3_accusation.pory"
	walk_up
# 34 "data/scripts/tarc3_accusation.pory"
	walk_left
# 34 "data/scripts/tarc3_accusation.pory"
	face_up
	step_end

# 36 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_TakeTheFloor_Movement_1:
# 36 "data/scripts/tarc3_accusation.pory"
	walk_left
# 36 "data/scripts/tarc3_accusation.pory"
	face_up
	step_end

# 84 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_NameIchiro_Movement_0:
# 84 "data/scripts/tarc3_accusation.pory"
	emote_exclamation_mark
	step_end

# 143 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_OpenCloset_Movement_0:
# 143 "data/scripts/tarc3_accusation.pory"
	face_up
	step_end

# 146 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_OpenCloset_Movement_1:
# 146 "data/scripts/tarc3_accusation.pory"
	walk_down
	step_end

# 148 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_OpenCloset_Movement_2:
# 148 "data/scripts/tarc3_accusation.pory"
	face_right
	step_end

# 693 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_PerfectAnswer_Movement_0:
# 693 "data/scripts/tarc3_accusation.pory"
	face_down
	step_end

# 785 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_PerfectTakeshi_Movement_0:
# 785 "data/scripts/tarc3_accusation.pory"
	face_left
	step_end

# 1176 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_WorstRoom_Movement_0:
# 1176 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1176 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1176 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1176 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1176 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1176 "data/scripts/tarc3_accusation.pory"
	walk_left
	step_end

# 1194 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_WorstIchiro_Movement_0:
# 1194 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1194 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1194 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1194 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1194 "data/scripts/tarc3_accusation.pory"
	walk_left
	step_end

# 1199 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_WorstIchiro_Movement_1:
# 1199 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1199 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1199 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1199 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1199 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1199 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1199 "data/scripts/tarc3_accusation.pory"
	walk_left
	step_end

# 1281 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_Depart_Movement_0:
# 1281 "data/scripts/tarc3_accusation.pory"
	walk_left
	step_end

tarc3_Accusation_EventScript_Begin_Text_0:
# 22 "data/scripts/tarc3_accusation.pory"
	.string "Begin, {PLAYER} Edgeworth.\p"
	.string "They have wasted quite enough of my\n"
	.string "evening already.$"

tarc3_Accusation_EventScript_Naming_Text_0:
# 45 "data/scripts/tarc3_accusation.pory"
	.string "{PLAYER}$"

tarc3_Accusation_EventScript_Naming_Text_1:
# 46 "data/scripts/tarc3_accusation.pory"
	.string "Two men were killed aboard this ship\n"
	.string "tonight.\p"
	.string "A third was attacked in a darkened\n"
	.string "room.$"

tarc3_Accusation_EventScript_Naming_Text_2:
# 47 "data/scripts/tarc3_accusation.pory"
	.string "One person is responsible for the whole\n"
	.string "of it.\p"
	.string "I intend to name that person, and to\n"
	.string "demonstrate - with evidence, not\l"
	.string "intuition - that it could have been no\l"
	.string "one else.$"

tarc3_Accusation_EventScript_NameMenu_Text_0:
# 55 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(Whose name am I about to place before this\n"
	.string "room?)$"

tarc3_Accusation_EventScript_NameMenu_Text_1:
# 57 "data/scripts/tarc3_accusation.pory"
	.string "Ichiro$"

tarc3_Accusation_EventScript_NameMenu_Text_2:
# 58 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi$"

tarc3_Accusation_EventScript_NameMenu_Text_3:
# 62 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(Takeshi. Am I certain on this?)$"

tarc3_Accusation_EventScript_NameMenu_Text_4:
# 70 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(Ichiro. Am I certain on this?)$"

tarc3_Accusation_EventScript_NameIchiro_Text_0:
# 81 "data/scripts/tarc3_accusation.pory"
	.string "It was Ichiro.$"

tarc3_Accusation_EventScript_NameIchiro_Text_1:
# 95 "data/scripts/tarc3_accusation.pory"
	.string "Joji$"

tarc3_Accusation_EventScript_NameIchiro_Text_2:
# 96 "data/scripts/tarc3_accusation.pory"
	.string "No. No! Absolutely not.$"

tarc3_Accusation_EventScript_NameIchiro_Text_3:
# 97 "data/scripts/tarc3_accusation.pory"
	.string "Mariko$"

tarc3_Accusation_EventScript_NameIchiro_Text_4:
# 98 "data/scripts/tarc3_accusation.pory"
	.string "...The one who was stabbed?$"

tarc3_Accusation_EventScript_NameIchiro_Text_5:
# 99 "data/scripts/tarc3_accusation.pory"
	.string "Kitaro$"

tarc3_Accusation_EventScript_NameIchiro_Text_6:
# 100 "data/scripts/tarc3_accusation.pory"
	.string "{PLAYER}, we found him bleeding on a\n"
	.string "bathroom floor.$"

tarc3_Accusation_EventScript_NameIchiro_Text_7:
# 102 "data/scripts/tarc3_accusation.pory"
	.string "...$"

tarc3_Accusation_EventScript_NameIchiro_Text_8:
# 103 "data/scripts/tarc3_accusation.pory"
	.string "You are... mistaken.$"

tarc3_Accusation_EventScript_NameIchiro_Text_9:
# 105 "data/scripts/tarc3_accusation.pory"
	.string "Then permit me to lay out the facts of\n"
	.string "each of tonight's incidents. In order.$"

tarc3_Accusation_EventScript_NameTakeshi_Text_0:
# 115 "data/scripts/tarc3_accusation.pory"
	.string "It was Takeshi who killed Gozo.\p"
	.string "Tatsuo observed him disposing of the\n"
	.string "evidence afterwards. That was reason\l"
	.string "enough to kill him also.$"

tarc3_Accusation_EventScript_NameTakeshi_Text_1:
# 117 "data/scripts/tarc3_accusation.pory"
	.string "Finally. Thank you.$"

tarc3_Accusation_EventScript_NameTakeshi_Text_2:
# 118 "data/scripts/tarc3_accusation.pory"
	.string "Natsue$"

tarc3_Accusation_EventScript_NameTakeshi_Text_3:
# 119 "data/scripts/tarc3_accusation.pory"
	.string "He isn't even in the room! He can't\n"
	.string "answer you!$"

tarc3_Accusation_EventScript_NameTakeshi_Text_4:
# 120 "data/scripts/tarc3_accusation.pory"
	.string "You're accusing a man who isn't here to\n"
	.string "speak!$"

tarc3_Accusation_EventScript_NameTakeshi_Text_5:
# 125 "data/scripts/tarc3_accusation.pory"
	.string "...I'm here.$"

tarc3_Accusation_EventScript_NameTakeshi_Text_6:
# 126 "data/scripts/tarc3_accusation.pory"
	.string "Don't, Natsue. Don't attempt to defend\n"
	.string "a man who your family know is guilty.$"

tarc3_Accusation_EventScript_NameTakeshi_Text_7:
# 127 "data/scripts/tarc3_accusation.pory"
	.string "You're better than that. You always\n"
	.string "have been.$"

tarc3_Accusation_EventScript_NameTakeshi_Text_8:
# 129 "data/scripts/tarc3_accusation.pory"
	.string "I will present the evidence of four\n"
	.string "incidents, and demonstrate that you\l"
	.string "are the killer.$"

tarc3_Accusation_EventScript_NameTakeshi_Text_9:
# 131 "data/scripts/tarc3_accusation.pory"
	.string "Make your accusations. I know the\n"
	.string "truth.\p"
	.string "If you proceed down this path, a killer\n"
	.string "will walk free.$"

tarc3_Accusation_EventScript_Q1_Text_0:
# 160 "data/scripts/tarc3_accusation.pory"
	.string "First. Gozo.$"

tarc3_Accusation_EventScript_Q1Loop_Text_0:
# 171 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(DEBUG: what do I present?)$"

tarc3_Accusation_EventScript_Q1Loop_Text_1:
# 173 "data/scripts/tarc3_accusation.pory"
	.string "Twin Refusal$"

tarc3_Accusation_EventScript_Q1Loop_Text_2:
# 174 "data/scripts/tarc3_accusation.pory"
	.string "Unrequited Love$"

tarc3_Accusation_EventScript_Q1Loop_Text_3:
# 175 "data/scripts/tarc3_accusation.pory"
	.string "Withdrawn Funds$"

tarc3_Accusation_EventScript_Q1Loop_Text_4:
# 176 "data/scripts/tarc3_accusation.pory"
	.string "Artist at the Door$"

tarc3_Accusation_EventScript_Q1Loop_Text_5:
# 177 "data/scripts/tarc3_accusation.pory"
	.string "Final Meeting$"

tarc3_Accusation_EventScript_Q1Loop_Text_6:
# 178 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi's Revenge$"

tarc3_Accusation_EventScript_Q1Loop_Text_7:
# 179 "data/scripts/tarc3_accusation.pory"
	.string "Sketchbook$"

tarc3_Accusation_EventScript_Q1Loop_Text_8:
# 180 "data/scripts/tarc3_accusation.pory"
	.string "Refused Suitor$"

tarc3_Accusation_EventScript_Q1Loop_Text_9:
# 181 "data/scripts/tarc3_accusation.pory"
	.string "Tuition Funds$"

tarc3_Accusation_EventScript_Q1Loop_Text_10:
# 182 "data/scripts/tarc3_accusation.pory"
	.string "Sponsorship$"

tarc3_Accusation_EventScript_Q1Loop_Text_11:
# 183 "data/scripts/tarc3_accusation.pory"
	.string "Bread Eraser$"

tarc3_Accusation_EventScript_Q1Loop_Text_12:
# 184 "data/scripts/tarc3_accusation.pory"
	.string "Requested Meeting$"

tarc3_Accusation_EventScript_Q1Loop_Text_13:
# 185 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi's History$"

tarc3_Accusation_EventScript_Q1Loop_Text_14:
# 186 "data/scripts/tarc3_accusation.pory"
	.string "Family Picture$"

tarc3_Accusation_EventScript_Q1Loop_Text_15:
# 187 "data/scripts/tarc3_accusation.pory"
	.string "Overheard Row$"

tarc3_Accusation_EventScript_Q1Loop_Text_16:
# 188 "data/scripts/tarc3_accusation.pory"
	.string "None$"

tarc3_Accusation_EventScript_Q1SummaryBest_Text_0:
# 239 "data/scripts/tarc3_accusation.pory"
	.string "...All night I have asked for one answer\n"
	.string "about my father that holds. That was it.$"

tarc3_Accusation_EventScript_Q1SummaryBest_Text_1:
# 240 "data/scripts/tarc3_accusation.pory"
	.string "Suzuki$"

tarc3_Accusation_EventScript_Q1SummaryBest_Text_2:
# 241 "data/scripts/tarc3_accusation.pory"
	.string "Go on, {PLAYER}.$"

tarc3_Accusation_EventScript_Q1SummaryGood_Text_0:
# 250 "data/scripts/tarc3_accusation.pory"
	.string "...It holds together. I don't like it, but\n"
	.string "it holds.$"

tarc3_Accusation_EventScript_Q1SummaryGood_Text_1:
# 252 "data/scripts/tarc3_accusation.pory"
	.string "Keep going.$"

tarc3_Accusation_EventScript_Q1SummaryPoor_Text_0:
# 261 "data/scripts/tarc3_accusation.pory"
	.string "Loose facts, and no thread through any\n"
	.string "of them.$"

tarc3_Accusation_EventScript_Q1SummaryPoor_Text_1:
# 263 "data/scripts/tarc3_accusation.pory"
	.string "You'll need better than that before\n"
	.string "this night is done.$"

tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2:
# 264 "data/scripts/tarc3_accusation.pory"
	.string "{RIVAL}$"

tarc3_Accusation_EventScript_Q1SummaryPoor_Text_3:
# 265 "data/scripts/tarc3_accusation.pory"
	.string "A collection of facts is not an\n"
	.string "argument, {PLAYER} Edgeworth.\p"
	.string "Do endeavour to connect them.$"

tarc3_Accusation_EventScript_Q1SummaryNone_Text_0:
# 274 "data/scripts/tarc3_accusation.pory"
	.string "Nothing you have said touches the man\n"
	.string "you named.$"

tarc3_Accusation_EventScript_Q1SummaryNone_Text_1:
# 276 "data/scripts/tarc3_accusation.pory"
	.string "She is correct, and that is intolerable.\p"
	.string "Correct it.$"

tarc3_Accusation_EventScript_Q1SummarySkipped_Text_0:
# 285 "data/scripts/tarc3_accusation.pory"
	.string "...I will return to that one.$"

tarc3_Accusation_EventScript_Q1SummarySkipped_Text_1:
# 287 "data/scripts/tarc3_accusation.pory"
	.string "You'll come back to it.$"

tarc3_Accusation_EventScript_Q1SummarySkipped_Text_2:
# 289 "data/scripts/tarc3_accusation.pory"
	.string "Postponement is not deduction.$"

tarc3_Accusation_EventScript_Q2_Text_0:
# 300 "data/scripts/tarc3_accusation.pory"
	.string "Second. How Tatsuo died.$"

tarc3_Accusation_EventScript_Q2Loop_Text_0:
# 313 "data/scripts/tarc3_accusation.pory"
	.string "Silenced Witness$"

tarc3_Accusation_EventScript_Q2Loop_Text_1:
# 314 "data/scripts/tarc3_accusation.pory"
	.string "Accomplice Theory$"

tarc3_Accusation_EventScript_Q2Loop_Text_2:
# 315 "data/scripts/tarc3_accusation.pory"
	.string "Charcoal on Bolt$"

tarc3_Accusation_EventScript_Q2Loop_Text_3:
# 316 "data/scripts/tarc3_accusation.pory"
	.string "Long Absence$"

tarc3_Accusation_EventScript_Q2Loop_Text_4:
# 317 "data/scripts/tarc3_accusation.pory"
	.string "An Accomplice$"

tarc3_Accusation_EventScript_Q2Loop_Text_5:
# 318 "data/scripts/tarc3_accusation.pory"
	.string "Open Service Door$"

tarc3_Accusation_EventScript_Q2Loop_Text_6:
# 319 "data/scripts/tarc3_accusation.pory"
	.string "Blood on the Stair$"

tarc3_Accusation_EventScript_Q2Loop_Text_7:
# 320 "data/scripts/tarc3_accusation.pory"
	.string "Hidden Pipe$"

tarc3_Accusation_EventScript_Q2SummaryGood_Text_0:
# 356 "data/scripts/tarc3_accusation.pory"
	.string "Akie$"

tarc3_Accusation_EventScript_Q2SummaryGood_Text_1:
# 357 "data/scripts/tarc3_accusation.pory"
	.string "...So he only saw something he shouldn't\n"
	.string "have. That's all it ever was.$"

tarc3_Accusation_EventScript_Q2SummaryGood_Text_2:
# 359 "data/scripts/tarc3_accusation.pory"
	.string "Continue, {PLAYER}.$"

tarc3_Accusation_EventScript_Q2SummaryPoor_Text_0:
# 368 "data/scripts/tarc3_accusation.pory"
	.string "An accomplice still explains more than\n"
	.string "anything you have offered.$"

tarc3_Accusation_EventScript_Q2SummaryPoor_Text_1:
# 370 "data/scripts/tarc3_accusation.pory"
	.string "Two questions, and not one decisive\n"
	.string "word from you.\p"
	.string "This is mediocrity, {PLAYER}\n"
	.string "Edgeworth.$"

tarc3_Accusation_EventScript_Q2SummaryNone_Text_0:
# 379 "data/scripts/tarc3_accusation.pory"
	.string "None of that was about Tatsuo.$"

tarc3_Accusation_EventScript_Q2SummaryNone_Text_1:
# 381 "data/scripts/tarc3_accusation.pory"
	.string "A foolishly foolish detour, {PLAYER}\n"
	.string "Edgeworth.\p"
	.string "The man is dead and you have said\n"
	.string "nothing of him. Keep to the question.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_0:
# 390 "data/scripts/tarc3_accusation.pory"
	.string "...I cannot answer this one.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_1:
# 392 "data/scripts/tarc3_accusation.pory"
	.string "No.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_2:
# 393 "data/scripts/tarc3_accusation.pory"
	.string "No, you don't get to do that. That one\n"
	.string "was my husband.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_3:
# 394 "data/scripts/tarc3_accusation.pory"
	.string "Say something about Tatsuo or don't\n"
	.string "say anything else, at all.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_4:
# 396 "data/scripts/tarc3_accusation.pory"
	.string "She is owed an answer, and I will not\n"
	.string "soften that.\p"
	.string "Provide one, or surrender the floor.$"

tarc3_Accusation_EventScript_Q3_Text_0:
# 407 "data/scripts/tarc3_accusation.pory"
	.string "Third. The lights.$"

tarc3_Accusation_EventScript_Q3Loop_Text_0:
# 420 "data/scripts/tarc3_accusation.pory"
	.string "Sketched Discharge$"

tarc3_Accusation_EventScript_Q3Loop_Text_1:
# 421 "data/scripts/tarc3_accusation.pory"
	.string "Copied Discharge$"

tarc3_Accusation_EventScript_Q3Loop_Text_2:
# 422 "data/scripts/tarc3_accusation.pory"
	.string "Panel Struck$"

tarc3_Accusation_EventScript_Q3Loop_Text_3:
# 423 "data/scripts/tarc3_accusation.pory"
	.string "Nearest Hand$"

tarc3_Accusation_EventScript_Q3Loop_Text_4:
# 424 "data/scripts/tarc3_accusation.pory"
	.string "Smeargle's Moves$"

tarc3_Accusation_EventScript_Q3Loop_Text_5:
# 425 "data/scripts/tarc3_accusation.pory"
	.string "Odd Battle$"

tarc3_Accusation_EventScript_Q3Loop_Text_6:
# 426 "data/scripts/tarc3_accusation.pory"
	.string "Focused Burn$"

tarc3_Accusation_EventScript_Q3Loop_Text_7:
# 428 "data/scripts/tarc3_accusation.pory"
	.string "Adjoining Hold$"

tarc3_Accusation_EventScript_Q3SummaryBest_Text_0:
# 471 "data/scripts/tarc3_accusation.pory"
	.string "...Then it was never the wiring. I will not\n"
	.string "suggest it again.$"

tarc3_Accusation_EventScript_Q3SummaryGood_Text_0:
# 480 "data/scripts/tarc3_accusation.pory"
	.string "...I want to dismiss it. I find that I\n"
	.string "can't.$"

tarc3_Accusation_EventScript_Q3SummaryPoor_Text_0:
# 489 "data/scripts/tarc3_accusation.pory"
	.string "This is an old ship, {PLAYER}. Old\n"
	.string "ships have old wiring.$"

tarc3_Accusation_EventScript_Q3SummaryPoor_Text_1:
# 491 "data/scripts/tarc3_accusation.pory"
	.string "So it was the man, or it was the weather.\n"
	.string "Wonderful.$"

tarc3_Accusation_EventScript_Q3SummaryPoor_Text_2:
# 493 "data/scripts/tarc3_accusation.pory"
	.string "Old wiring. That is what you have left\n"
	.string "this room with.\p"
	.string "My father would have had them in hand\n"
	.string "an hour ago.$"

tarc3_Accusation_EventScript_Q3SummaryNone_Text_0:
# 502 "data/scripts/tarc3_accusation.pory"
	.string "So the lights went out on their own,\n"
	.string "then.$"

tarc3_Accusation_EventScript_Q3SummaryNone_Text_1:
# 504 "data/scripts/tarc3_accusation.pory"
	.string "Three questions. Three failures.\p"
	.string "I did not cross an ocean to watch this.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_0:
# 513 "data/scripts/tarc3_accusation.pory"
	.string "The lights... I cannot account for.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_1:
# 515 "data/scripts/tarc3_accusation.pory"
	.string "Then we are all still in the dark. How\n"
	.string "appropriate.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_2:
# 517 "data/scripts/tarc3_accusation.pory"
	.string "Cannot.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_3:
# 518 "data/scripts/tarc3_accusation.pory"
	.string "There is a word I never expected to\n"
	.string "hear in your mouth.$"

tarc3_Accusation_EventScript_Q4_Text_0:
# 529 "data/scripts/tarc3_accusation.pory"
	.string "And finally.$"

tarc3_Accusation_EventScript_Q4_Text_1:
# 533 "data/scripts/tarc3_accusation.pory"
	.string "Who attacked Ichiro.$"

tarc3_Accusation_EventScript_Q4Loop_Text_0:
# 546 "data/scripts/tarc3_accusation.pory"
	.string "Self-Inflicted$"

tarc3_Accusation_EventScript_Q4Loop_Text_1:
# 547 "data/scripts/tarc3_accusation.pory"
	.string "Impossible Aim$"

tarc3_Accusation_EventScript_Q4Loop_Text_2:
# 548 "data/scripts/tarc3_accusation.pory"
	.string "Left Behind$"

tarc3_Accusation_EventScript_Q4Loop_Text_3:
# 550 "data/scripts/tarc3_accusation.pory"
	.string "No Defence$"

tarc3_Accusation_EventScript_Q4Loop_Text_4:
# 551 "data/scripts/tarc3_accusation.pory"
	.string "The Second Story$"

tarc3_Accusation_EventScript_Q4Loop_Text_5:
# 554 "data/scripts/tarc3_accusation.pory"
	.string "Knives Counted$"

tarc3_Accusation_EventScript_Q4SummaryBest_Text_0:
# 594 "data/scripts/tarc3_accusation.pory"
	.string "Everyone in the room is waiting on\n"
	.string "Ichiro's response.$"

tarc3_Accusation_EventScript_Q4SummaryGood_Text_0:
# 602 "data/scripts/tarc3_accusation.pory"
	.string "...In the bathroom I said a man couldn't\n"
	.string "do that to himself.\p"
	.string "I am no longer certain I believe me.$"

tarc3_Accusation_EventScript_Q4SummaryPoor_Text_0:
# 611 "data/scripts/tarc3_accusation.pory"
	.string "You've proven nothing. Nothing at all.$"

tarc3_Accusation_EventScript_Q4SummaryPoor_Text_1:
# 614 "data/scripts/tarc3_accusation.pory"
	.string "For once, {PLAYER} Edgeworth, I have\n"
	.string "nothing to add to that.$"

tarc3_Accusation_EventScript_Q4SummaryNone_Text_0:
# 623 "data/scripts/tarc3_accusation.pory"
	.string "And that was the last of your\n"
	.string "questions.$"

tarc3_Accusation_EventScript_Q4SummaryNone_Text_1:
# 625 "data/scripts/tarc3_accusation.pory"
	.string "Four questions, and a foolish fool has\n"
	.string "answered none of them.\p"
	.string "You have humiliated us both.$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_0:
# 634 "data/scripts/tarc3_accusation.pory"
	.string "That was the last one, wasn't it.$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_1:
# 635 "data/scripts/tarc3_accusation.pory"
	.string "That was your last question, and you\n"
	.string "didn't even attempt to answer it?$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_2:
# 637 "data/scripts/tarc3_accusation.pory"
	.string "Do not look to me. You built this.$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_3:
# 638 "data/scripts/tarc3_accusation.pory"
	.string "Stand in it.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_0:
# 685 "data/scripts/tarc3_accusation.pory"
	.string "I have Ichiro's sketchbook, and I do\n"
	.string "not intend to open it.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_1:
# 686 "data/scripts/tarc3_accusation.pory"
	.string "There is no need.\p"
	.string "Everyone in this room will learn what it\n"
	.string "contains - and it will not be from me.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_2:
# 697 "data/scripts/tarc3_accusation.pory"
	.string "It's drawings. Four years of them.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_3:
# 698 "data/scripts/tarc3_accusation.pory"
	.string "All the same person.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_4:
# 699 "data/scripts/tarc3_accusation.pory"
	.string "Natsue. Don't look at me. Please. Just...\n"
	.string "don't.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_5:
# 700 "data/scripts/tarc3_accusation.pory"
	.string "I asked him one year ago.\p"
	.string "I wrote it down beforehand so I\n"
	.string "wouldn't stumble over it.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_6:
# 701 "data/scripts/tarc3_accusation.pory"
	.string "He was polite. He waited until I'd said\n"
	.string "the whole thing.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_7:
# 702 "data/scripts/tarc3_accusation.pory"
	.string "'A local boy with borrowed tuition and a\n"
	.string "half-finished art career.'$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_8:
# 703 "data/scripts/tarc3_accusation.pory"
	.string "'Son, know your place.'$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_9:
# 707 "data/scripts/tarc3_accusation.pory"
	.string "I thanked him.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_10:
# 708 "data/scripts/tarc3_accusation.pory"
	.string "I thanked him, I left the room, and I\n"
	.string "never mentioned it again.\p"
	.string "Not to him. Not to anybody.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_11:
# 709 "data/scripts/tarc3_accusation.pory"
	.string "He announced her engagement to\n"
	.string "Takeshi the same week.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_12:
# 712 "data/scripts/tarc3_accusation.pory"
	.string "...I remember seeing you that week.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_13:
# 713 "data/scripts/tarc3_accusation.pory"
	.string "I thought you were ill.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_14:
# 715 "data/scripts/tarc3_accusation.pory"
	.string "You want to know what I am to this\n"
	.string "family? I can give you the figure.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_15:
# 716 "data/scripts/tarc3_accusation.pory"
	.string "I am not a close friend. I'm an expense.\p"
	.string "A plaything, one you might bring on a\n"
	.string "trip to Hoenn or Galar.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_16:
# 717 "data/scripts/tarc3_accusation.pory"
	.string "I was counting what I owed. $500,000 per\n"
	.string "year.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_17:
# 718 "data/scripts/tarc3_accusation.pory"
	.string "He got eleven years of a person for it.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_0:
# 727 "data/scripts/tarc3_accusation.pory"
	.string "Akie. I must open your closet.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_1:
# 729 "data/scripts/tarc3_accusation.pory"
	.string "...What?$"

tarc3_Accusation_EventScript_PerfectCloset_Text_2:
# 731 "data/scripts/tarc3_accusation.pory"
	.string "You should have been told the moment I\n"
	.string "found him. You were not.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_3:
# 733 "data/scripts/tarc3_accusation.pory"
	.string "You searched my cabin.\p"
	.string "You opened that door, and you closed it\n"
	.string "again, and you said nothing to me.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_4:
# 735 "data/scripts/tarc3_accusation.pory"
	.string "Yes.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_5:
# 737 "data/scripts/tarc3_accusation.pory"
	.string "My husband is on the foredeck under a\n"
	.string "tablecloth, and you walked out of my\l"
	.string "room without a word.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_6:
# 739 "data/scripts/tarc3_accusation.pory"
	.string "I did. This room had to hear the case\n"
	.string "before it heard him, and I do not\l"
	.string "retract that judgement.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_7:
# 740 "data/scripts/tarc3_accusation.pory"
	.string "That does not make it a small thing to\n"
	.string "have done to you.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_8:
# 745 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi...$"

tarc3_Accusation_EventScript_PerfectCloset_Text_9:
# 747 "data/scripts/tarc3_accusation.pory"
	.string "He's been in this cabin the entire time.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_10:
# 749 "data/scripts/tarc3_accusation.pory"
	.string "How long have you known?$"

tarc3_Accusation_EventScript_PerfectCloset_Text_11:
# 751 "data/scripts/tarc3_accusation.pory"
	.string "Since I searched this deck. He hid\n"
	.string "himself there hours before that, and\l"
	.string "told no one.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_12:
# 753 "data/scripts/tarc3_accusation.pory"
	.string "Let the boy speak.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_0:
# 762 "data/scripts/tarc3_accusation.pory"
	.string "Do you still want revenge?$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_1:
# 764 "data/scripts/tarc3_accusation.pory"
	.string "...No.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_2:
# 765 "data/scripts/tarc3_accusation.pory"
	.string "But you should hear the whole story,\n"
	.string "and you should hear it from me.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_3:
# 767 "data/scripts/tarc3_accusation.pory"
	.string "{PLAYER} showed you a piece of it\n"
	.string "tonight. This is the whole of it.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_4:
# 769 "data/scripts/tarc3_accusation.pory"
	.string "My father was Isao Zaiki.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_5:
# 770 "data/scripts/tarc3_accusation.pory"
	.string "As you know, Hatamoto Corp took his\n"
	.string "company. He killed himself the spring\l"
	.string "after. I was fifteen.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_6:
# 771 "data/scripts/tarc3_accusation.pory"
	.string "I joined the Corporation under a name\n"
	.string "that wasn't mine, and I did it to take\l"
	.string "something from your grandfather.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_7:
# 772 "data/scripts/tarc3_accusation.pory"
	.string "Then I worked beside you, Natsue.\p"
	.string "I fell hopelessly in love.\p"
	.string "I slowly lost interest in revenge.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_8:
# 773 "data/scripts/tarc3_accusation.pory"
	.string "Gozo called me into that cabin before\n"
	.string "dinner because he knew.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_9:
# 775 "data/scripts/tarc3_accusation.pory"
	.string "He knew?$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_10:
# 777 "data/scripts/tarc3_accusation.pory"
	.string "For months. He had all of it. The name,\n"
	.string "my father, the year I joined.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_11:
# 778 "data/scripts/tarc3_accusation.pory"
	.string "He looked at me and he said, 'I see the\n"
	.string "man Natsue chose.'$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_12:
# 779 "data/scripts/tarc3_accusation.pory"
	.string "Then he told me to sit down and eat with\n"
	.string "his family.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_13:
# 789 "data/scripts/tarc3_accusation.pory"
	.string "...So why you.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_14:
# 790 "data/scripts/tarc3_accusation.pory"
	.string "I did everything he asked of me. I never\n"
	.string "asked him twice.\p"
	.string "I said thank you, and I left the room.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_15:
# 791 "data/scripts/tarc3_accusation.pory"
	.string "Why you, and not me?\p"
	.string "It isn't fair.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_16:
# 793 "data/scripts/tarc3_accusation.pory"
	.string "...No. It isn't.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_17:
# 794 "data/scripts/tarc3_accusation.pory"
	.string "You still didn't have to kill him.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_18:
# 798 "data/scripts/tarc3_accusation.pory"
	.string "Suzuki. Make arrangements with the\n"
	.string "police for when we arrive.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_19:
# 801 "data/scripts/tarc3_accusation.pory"
	.string "...Madam.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_0:
# 814 "data/scripts/tarc3_accusation.pory"
	.string "Well?$"

tarc3_Accusation_EventScript_GoodAnswer_Text_1:
# 816 "data/scripts/tarc3_accusation.pory"
	.string "...You're right.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_2:
# 817 "data/scripts/tarc3_accusation.pory"
	.string "About all of it.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_3:
# 819 "data/scripts/tarc3_accusation.pory"
	.string "Ichiro...$"

tarc3_Accusation_EventScript_GoodAnswer_Text_4:
# 821 "data/scripts/tarc3_accusation.pory"
	.string "I killed him.\p"
	.string "I killed Tatsuo as well - he saw me at\n"
	.string "the rail and he called out to me.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_5:
# 822 "data/scripts/tarc3_accusation.pory"
	.string "You can all stop looking at Takeshi.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_6:
# 824 "data/scripts/tarc3_accusation.pory"
	.string "But why? In Arceus' name, why?$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_0:
# 847 "data/scripts/tarc3_accusation.pory"
	.string "...It was the money.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_1:
# 848 "data/scripts/tarc3_accusation.pory"
	.string "Eleven years he paid for me, and he\n"
	.string "never let a month go past without\l"
	.string "reminding me of it.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_2:
# 849 "data/scripts/tarc3_accusation.pory"
	.string "On the deck he told you he was finished.\p"
	.string "He said it where I could hear him\n"
	.string "because he wanted me to hear him.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_3:
# 850 "data/scripts/tarc3_accusation.pory"
	.string "Two terms left and nothing behind me.\n"
	.string "I'd have gone home with nothing.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_4:
# 853 "data/scripts/tarc3_accusation.pory"
	.string "You killed my father over school fees.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_5:
# 857 "data/scripts/tarc3_accusation.pory"
	.string "Arceus help us.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_6:
# 865 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(That is not it.)$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_7:
# 868 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(That was never it - but the evidence I\n"
	.string "presented did not tell the full story.)$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_8:
# 872 "data/scripts/tarc3_accusation.pory"
	.string "That is not the whole reason.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_9:
# 874 "data/scripts/tarc3_accusation.pory"
	.string "It's why.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_0:
# 884 "data/scripts/tarc3_accusation.pory"
	.string "...Money.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_1:
# 886 "data/scripts/tarc3_accusation.pory"
	.string "Money.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_2:
# 887 "data/scripts/tarc3_accusation.pory"
	.string "We all heard what it was, Ichiro. Every\n"
	.string "one of us, standing in this room.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_3:
# 889 "data/scripts/tarc3_accusation.pory"
	.string "You heard about some drawings.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_4:
# 890 "data/scripts/tarc3_accusation.pory"
	.string "Boys draw.\p"
	.string "It was money.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_5:
# 896 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(He will deny her to the last.)$"

tarc3_Accusation_EventScript_GoodAnswerEnough_Text_0:
# 907 "data/scripts/tarc3_accusation.pory"
	.string "...Isn't it enough? You've got what you\n"
	.string "came for.$"

tarc3_Accusation_EventScript_GoodAnswerEnough_Text_1:
# 909 "data/scripts/tarc3_accusation.pory"
	.string "Let it be enough, {PLAYER}.$"

tarc3_Accusation_EventScript_GoodCloset_Text_0:
# 918 "data/scripts/tarc3_accusation.pory"
	.string "One further matter. Akie - your closet.\p"
	.string "I found Takeshi in it before I called\n"
	.string "you all in here. You should have been\l"
	.string "told then.$"

tarc3_Accusation_EventScript_GoodCloset_Text_1:
# 920 "data/scripts/tarc3_accusation.pory"
	.string "...Do what you like. It hardly matters\n"
	.string "now.$"

tarc3_Accusation_EventScript_GoodCloset_Text_2:
# 925 "data/scripts/tarc3_accusation.pory"
	.string "...Of course he was.$"

tarc3_Accusation_EventScript_GoodCloset_Text_3:
# 927 "data/scripts/tarc3_accusation.pory"
	.string "Nobody asks Takeshi anything. They\n"
	.string "have their killer, and they have\l"
	.string "stopped listening.$"

tarc3_Accusation_EventScript_GoodCloset_Text_4:
# 929 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi.$"

tarc3_Accusation_EventScript_GoodCloset_Text_5:
# 931 "data/scripts/tarc3_accusation.pory"
	.string "...Not here.$"

tarc3_Accusation_EventScript_GoodStern_Text_0:
# 951 "data/scripts/tarc3_accusation.pory"
	.string "Later, at the stern rail. Only the four\n"
	.string "of them. The family stayed below.$"

tarc3_Accusation_EventScript_GoodStern_Text_1:
# 955 "data/scripts/tarc3_accusation.pory"
	.string "...No. Not since the first month I worked\n"
	.string "beside you.$"

tarc3_Accusation_EventScript_GoodStern_Text_2:
# 956 "data/scripts/tarc3_accusation.pory"
	.string "My father was Isao Zaiki.\p"
	.string "Hatamoto Corp took his company and he\n"
	.string "killed himself the spring after.$"

tarc3_Accusation_EventScript_GoodStern_Text_3:
# 957 "data/scripts/tarc3_accusation.pory"
	.string "I joined under a name that wasn't mine\n"
	.string "because I meant to take something from\l"
	.string "your grandfather.$"

tarc3_Accusation_EventScript_GoodStern_Text_4:
# 961 "data/scripts/tarc3_accusation.pory"
	.string "He knew before dinner. He'd known for\n"
	.string "months.$"

tarc3_Accusation_EventScript_GoodStern_Text_5:
# 963 "data/scripts/tarc3_accusation.pory"
	.string "And he said nothing?$"

tarc3_Accusation_EventScript_GoodStern_Text_6:
# 965 "data/scripts/tarc3_accusation.pory"
	.string "He said, 'I see the man Natsue chose.'\n"
	.string "Then he told me to go and eat.$"

tarc3_Accusation_EventScript_GoodStern_Text_7:
# 968 "data/scripts/tarc3_accusation.pory"
	.string "That's the kindest thing he ever did.$"

tarc3_Accusation_EventScript_GoodStern_Text_8:
# 969 "data/scripts/tarc3_accusation.pory"
	.string "And he did it where nobody could see it.$"

tarc3_Accusation_EventScript_GoodStern_Text_9:
# 971 "data/scripts/tarc3_accusation.pory"
	.string "Comfey lifts from her shoulder and\n"
	.string "winds a garland around both their\l"
	.string "wrists.$"

tarc3_Accusation_EventScript_BadAnswer_Text_0:
# 983 "data/scripts/tarc3_accusation.pory"
	.string "May I?$"

tarc3_Accusation_EventScript_BadAnswer_Text_1:
# 988 "data/scripts/tarc3_accusation.pory"
	.string "The crumbs. In the blood, by the door.\n"
	.string "That's the one you keep coming back to.$"

tarc3_Accusation_EventScript_BadAnswer_Text_2:
# 989 "data/scripts/tarc3_accusation.pory"
	.string "I've sketched on the salon deck every\n"
	.string "day since Florio. In the same chair.$"

tarc3_Accusation_EventScript_BadAnswer_Text_3:
# 990 "data/scripts/tarc3_accusation.pory"
	.string "Suzuki. Is that chair cleared each\n"
	.string "evening?$"

tarc3_Accusation_EventScript_BadAnswer_Text_4:
# 992 "data/scripts/tarc3_accusation.pory"
	.string "...It is.$"

tarc3_Accusation_EventScript_BadAnswer_Text_5:
# 994 "data/scripts/tarc3_accusation.pory"
	.string "Then it's anyone's shoe. Any one of you.\n"
	.string "Including me, walking to dinner.$"

tarc3_Accusation_EventScript_BadAnswer_Text_6:
# 995 "data/scripts/tarc3_accusation.pory"
	.string "You should also know the bread I use\n"
	.string "goes hard inside a day.$"

tarc3_Accusation_EventScript_BadAnswer_Text_7:
# 996 "data/scripts/tarc3_accusation.pory"
	.string "If the crumb you found was dry, it\n"
	.string "didn't come off my cuff tonight.$"

tarc3_Accusation_EventScript_BadAnswer_Text_8:
# 1000 "data/scripts/tarc3_accusation.pory"
	.string "I'm trying to help you.$"

tarc3_Accusation_EventScript_BadAnswer_Text_9:
# 1001 "data/scripts/tarc3_accusation.pory"
	.string "I want the man who did this as much as\n"
	.string "anyone in this room does.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_0:
# 1012 "data/scripts/tarc3_accusation.pory"
	.string "Whatever you found, ask where else it\n"
	.string "could have come from. That's all I'd say.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_1:
# 1013 "data/scripts/tarc3_accusation.pory"
	.string "Nine people have walked every corridor\n"
	.string "on this ship tonight.\p"
	.string "Eight of them are standing in this room.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_2:
# 1014 "data/scripts/tarc3_accusation.pory"
	.string "Suzuki. When are the decks swept?$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_3:
# 1016 "data/scripts/tarc3_accusation.pory"
	.string "...Each evening.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_4:
# 1018 "data/scripts/tarc3_accusation.pory"
	.string "I sketch on the salon deck every day, in\n"
	.string "the same chair.\p"
	.string "Anything I've touched could ride to a\n"
	.string "doorway on somebody's shoe.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_0:
# 1044 "data/scripts/tarc3_accusation.pory"
	.string "Then let us discuss the sketchbook I\n"
	.string "took from your cabin.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_1:
# 1055 "data/scripts/tarc3_accusation.pory"
	.string "That's enough.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_2:
# 1062 "data/scripts/tarc3_accusation.pory"
	.string "...That's my sketchbook, yes.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_3:
# 1063 "data/scripts/tarc3_accusation.pory"
	.string "I draw people. I'm an art student.$"

tarc3_Accusation_EventScript_BadWall_Text_0:
# 1071 "data/scripts/tarc3_accusation.pory"
	.string "He's had enough from this family for one\n"
	.string "voyage. Leave him be.$"

tarc3_Accusation_EventScript_BadWall_Text_1:
# 1075 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(He said that to me two hours ago, in the\n"
	.string "dining room.)$"

tarc3_Accusation_EventScript_BadWall_Text_2:
# 1079 "data/scripts/tarc3_accusation.pory"
	.string "My father is dead. Tatsuo is dead.$"

tarc3_Accusation_EventScript_BadWall_Text_3:
# 1080 "data/scripts/tarc3_accusation.pory"
	.string "And I have spent six hours of my life\n"
	.string "waiting on you.$"

tarc3_Accusation_EventScript_BadWall_Text_4:
# 1081 "data/scripts/tarc3_accusation.pory"
	.string "Whatever you are where you come from,\n"
	.string "you are nothing here.\p"
	.string "You are a passenger my niece took pity\n"
	.string "on at a dock.$"

tarc3_Accusation_EventScript_BadWall_Text_5:
# 1082 "data/scripts/tarc3_accusation.pory"
	.string "Whoever told you that you were clever\n"
	.string "lied to you.$"

tarc3_Accusation_EventScript_BadCloset_Text_0:
# 1091 "data/scripts/tarc3_accusation.pory"
	.string "There is one more thing, and you had\n"
	.string "better hear it from me.$"

tarc3_Accusation_EventScript_BadCloset_Text_1:
# 1092 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi is in this room. He is behind\n"
	.string "that closet door.$"

tarc3_Accusation_EventScript_BadCloset_Text_2:
# 1096 "data/scripts/tarc3_accusation.pory"
	.string "...In my closet.$"

tarc3_Accusation_EventScript_BadCloset_Text_3:
# 1097 "data/scripts/tarc3_accusation.pory"
	.string "He has been standing in my closet while\n"
	.string "we all stood here.$"

tarc3_Accusation_EventScript_BadCloset_Text_4:
# 1099 "data/scripts/tarc3_accusation.pory"
	.string "I found him when I searched these\n"
	.string "cabins, shortly before I asked you all\l"
	.string "to gather.$"

tarc3_Accusation_EventScript_BadCloset_Text_5:
# 1101 "data/scripts/tarc3_accusation.pory"
	.string "You found him.$"

tarc3_Accusation_EventScript_BadCloset_Text_6:
# 1102 "data/scripts/tarc3_accusation.pory"
	.string "You found him, and you said nothing.$"

tarc3_Accusation_EventScript_BadCloset_Text_7:
# 1104 "data/scripts/tarc3_accusation.pory"
	.string "He was in fear of his life. He asked me\n"
	.string "to prove it before I called anyone, and\l"
	.string "I judged...$"

tarc3_Accusation_EventScript_BadCloset_Text_8:
# 1106 "data/scripts/tarc3_accusation.pory"
	.string "You knew where he was, and you let us\n"
	.string "stand here.\p"
	.string "You pointed at every one of us with the\n"
	.string "man behind that door.$"

tarc3_Accusation_EventScript_BadCloset_Text_9:
# 1111 "data/scripts/tarc3_accusation.pory"
	.string "Don't. He was helping me.$"

tarc3_Accusation_EventScript_BadCloset_Text_10:
# 1113 "data/scripts/tarc3_accusation.pory"
	.string "Yes. I'm sure he was.$"

tarc3_Accusation_EventScript_BadCloset_Text_11:
# 1114 "data/scripts/tarc3_accusation.pory"
	.string "There's your accomplice, Suzuki.$"

tarc3_Accusation_EventScript_BadCloset_Text_12:
# 1115 "data/scripts/tarc3_accusation.pory"
	.string "He kept him for exactly as long as it\n"
	.string "suited him, and produced him the moment\l"
	.string "it did not.$"

tarc3_Accusation_EventScript_BadCloset_Text_13:
# 1120 "data/scripts/tarc3_accusation.pory"
	.string "I asked you to find him, {PLAYER}.$"

tarc3_Accusation_EventScript_BadCloset_Text_14:
# 1121 "data/scripts/tarc3_accusation.pory"
	.string "You found him, and you did not tell me.$"

tarc3_Accusation_EventScript_BadCloset_Text_15:
# 1122 "data/scripts/tarc3_accusation.pory"
	.string "...I think you had better go up on deck.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_0:
# 1135 "data/scripts/tarc3_accusation.pory"
	.string "Well? Say something. Anything at all.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_1:
# 1137 "data/scripts/tarc3_accusation.pory"
	.string "...There is a part of this you don't have.\p"
	.string "You should hear it from me, and not read\n"
	.string "it somewhere in a year.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_2:
# 1139 "data/scripts/tarc3_accusation.pory"
	.string "You heard tonight what Gozo did to my\n"
	.string "father. This is the rest of it.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_3:
# 1141 "data/scripts/tarc3_accusation.pory"
	.string "You know my father was Isao Zaiki.\p"
	.string "Hatamoto Corp took his company and he\n"
	.string "killed himself the spring after.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_4:
# 1142 "data/scripts/tarc3_accusation.pory"
	.string "I was fifteen.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_5:
# 1143 "data/scripts/tarc3_accusation.pory"
	.string "I joined the Corporation under a name\n"
	.string "that wasn't mine, to take something\l"
	.string "from your grandfather.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_6:
# 1145 "data/scripts/tarc3_accusation.pory"
	.string "...Arceus help us.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_7:
# 1149 "data/scripts/tarc3_accusation.pory"
	.string "Gozo called me into his cabin before\n"
	.string "dinner and told me he had known for\l"
	.string "months.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_8:
# 1151 "data/scripts/tarc3_accusation.pory"
	.string "He knew. And an hour later he was dead.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_9:
# 1152 "data/scripts/tarc3_accusation.pory"
	.string "Do you hear yourself?$"

tarc3_Accusation_EventScript_WorstAnswer_Text_10:
# 1155 "data/scripts/tarc3_accusation.pory"
	.string "I hear myself.$"

tarc3_Accusation_EventScript_WorstRoom_Text_0:
# 1164 "data/scripts/tarc3_accusation.pory"
	.string "...I'm sorry. I can't. I can't stand here\n"
	.string "and say it isn't true.$"

tarc3_Accusation_EventScript_WorstRoom_Text_1:
# 1166 "data/scripts/tarc3_accusation.pory"
	.string "I don't care.$"

tarc3_Accusation_EventScript_WorstRoom_Text_2:
# 1167 "data/scripts/tarc3_accusation.pory"
	.string "My husband is on the deck under a\n"
	.string "tablecloth. Somebody put him there.\p"
	.string "If it's him, it's him.$"

tarc3_Accusation_EventScript_WorstIchiro_Text_0:
# 1186 "data/scripts/tarc3_accusation.pory"
	.string "Natsue.$"

tarc3_Accusation_EventScript_WorstIchiro_Text_1:
# 1187 "data/scripts/tarc3_accusation.pory"
	.string "Let me walk you back to your cabin.$"

tarc3_Accusation_EventScript_WorstIchiro_Text_2:
# 1188 "data/scripts/tarc3_accusation.pory"
	.string "You shouldn't have to watch this part.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_0:
# 1213 "data/scripts/tarc3_accusation.pory"
	.string "Well. There it is.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_1:
# 1215 "data/scripts/tarc3_accusation.pory"
	.string "There what is, madam?$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_2:
# 1217 "data/scripts/tarc3_accusation.pory"
	.string "You heard the case.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_3:
# 1219 "data/scripts/tarc3_accusation.pory"
	.string "I heard a flower and a grudge.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_4:
# 1220 "data/scripts/tarc3_accusation.pory"
	.string "I bolted a man into a storeroom once\n"
	.string "tonight on the strength of that flower.\p"
	.string "I will not do it twice.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_5:
# 1222 "data/scripts/tarc3_accusation.pory"
	.string "...He's right, Mariko. There is nothing\n"
	.string "here a court would touch.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_0:
# 1231 "data/scripts/tarc3_accusation.pory"
	.string "You should still hear the rest of it. All\n"
	.string "of you.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_1:
# 1233 "data/scripts/tarc3_accusation.pory"
	.string "You heard tonight what Gozo did to my\n"
	.string "father. Here is the rest.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_2:
# 1235 "data/scripts/tarc3_accusation.pory"
	.string "You know my father was Isao Zaiki.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_3:
# 1236 "data/scripts/tarc3_accusation.pory"
	.string "Gozo ruined him, and I joined this\n"
	.string "company under a false name to take\l"
	.string "something back.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_4:
# 1238 "data/scripts/tarc3_accusation.pory"
	.string "There! Out of his own mouth!$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_5:
# 1240 "data/scripts/tarc3_accusation.pory"
	.string "A name is not a knife, madam.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_6:
# 1246 "data/scripts/tarc3_accusation.pory"
	.string "I don't care what he wanted.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_7:
# 1247 "data/scripts/tarc3_accusation.pory"
	.string "My husband is under a tablecloth on\n"
	.string "that deck, and not one of you can tell\l"
	.string "me who put him there.$"

tarc3_Accusation_EventScript_Depart_Text_0:
# 1287 "data/scripts/tarc3_accusation.pory"
	.string "Well. The room is empty, and there is\n"
	.string "nobody left to perform for.$"

tarc3_Accusation_EventScript_Depart_Text_1:
# 1288 "data/scripts/tarc3_accusation.pory"
	.string "You may stop standing like that.$"

tarc3_Accusation_EventScript_Depart_Text_2:
# 1297 "data/scripts/tarc3_accusation.pory"
	.string "...There. The harbour.$"

tarc3_Accusation_EventScript_Depart_Text_3:
# 1298 "data/scripts/tarc3_accusation.pory"
	.string "Gather yourself, {PLAYER} Edgeworth.\p"
	.string "It is time to depart.$"

tarc3_Accusation_EventScript_Depart_Text_4:
# 1302 "data/scripts/tarc3_accusation.pory"
	.string "(debug: one final scene to come)$"
