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
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_16, TARC3_ACCUSE_NONE
# 321 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 322 "data/scripts/tarc3_accusation.pory"
	closemessage
# 323 "data/scripts/tarc3_accusation.pory"
	switch VAR_RESULT
# 324 "data/scripts/tarc3_accusation.pory"
	case EVD_SILENCED_WITNESS, tarc3_Accusation_EventScript_Q2Loop_3
# 326 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_ACCOMPLICE_THEORY, tarc3_Accusation_EventScript_Q2Loop_4
# 328 "data/scripts/tarc3_accusation.pory"
	case EVD_CHARCOAL_ON_BOLT, tarc3_Accusation_EventScript_Q2Loop_5
# 330 "data/scripts/tarc3_accusation.pory"
	case EVD_LONG_ABSENCE, tarc3_Accusation_EventScript_Q2Loop_6
# 332 "data/scripts/tarc3_accusation.pory"
	case EVD_AN_ACCOMPLICE, tarc3_Accusation_EventScript_Q2Loop_7
# 334 "data/scripts/tarc3_accusation.pory"
	case EVD_OPEN_SERVICE_DOOR, tarc3_Accusation_EventScript_Q2Loop_8
# 336 "data/scripts/tarc3_accusation.pory"
	case EVD_BLOOD_ON_THE_STAIR, tarc3_Accusation_EventScript_Q2Loop_9
# 339 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2Summary
tarc3_Accusation_EventScript_Q2Loop_1:
# 341 "data/scripts/tarc3_accusation.pory"
	addvar VAR_TARC3_ACCUSE_SLOT, 1
# 342 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2Loop
	return

tarc3_Accusation_EventScript_Q2Loop_3:
# 325 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SilencedWitness
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_4:
# 327 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheAccompliceTheory
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_5:
# 329 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_CharcoalOnBolt
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_6:
# 331 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_LongAbsence
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_7:
# 333 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_AnAccomplice
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_8:
# 335 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_OpenServiceDoor
	goto tarc3_Accusation_EventScript_Q2Loop_1

tarc3_Accusation_EventScript_Q2Loop_9:
# 337 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_BloodOnTheStair
	goto tarc3_Accusation_EventScript_Q2Loop_1


tarc3_Accusation_EventScript_Q2Summary::
# 346 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 5, tarc3_Accusation_EventScript_Q2SummaryGood
# 347 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 1, tarc3_Accusation_EventScript_Q2SummaryPoor
# 348 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSE_SLOT, 0, tarc3_Accusation_EventScript_Q2SummarySkipped
# 349 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q2SummaryNone
	return


tarc3_Accusation_EventScript_Q2SummaryGood::
# 353 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 354 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryGood_Text_1
# 355 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 356 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryGood_Text_2
# 357 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 358 "data/scripts/tarc3_accusation.pory"
	closemessage
# 359 "data/scripts/tarc3_accusation.pory"
	delay 30
# 360 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q2SummaryPoor::
# 364 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 365 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryPoor_Text_0
# 366 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 367 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryPoor_Text_1
# 368 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 369 "data/scripts/tarc3_accusation.pory"
	closemessage
# 370 "data/scripts/tarc3_accusation.pory"
	delay 30
# 371 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q2SummaryNone::
# 375 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 376 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryNone_Text_0
# 377 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 378 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummaryNone_Text_1
# 379 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 380 "data/scripts/tarc3_accusation.pory"
	closemessage
# 381 "data/scripts/tarc3_accusation.pory"
	delay 30
# 382 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q2SummarySkipped::
# 386 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 387 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_0
# 388 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 389 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_1
# 390 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_2
# 391 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_3
# 392 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 393 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q2SummarySkipped_Text_4
# 394 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 395 "data/scripts/tarc3_accusation.pory"
	closemessage
# 396 "data/scripts/tarc3_accusation.pory"
	delay 30
# 397 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3
	return


tarc3_Accusation_EventScript_Q3::
# 403 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 404 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3_Text_0
# 405 "data/scripts/tarc3_accusation.pory"
	closemessage
# 406 "data/scripts/tarc3_accusation.pory"
	delay 20
# 407 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_QSCORE, 0
# 408 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SLOT, 0
# 409 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3Loop
	return


tarc3_Accusation_EventScript_Q3Loop::
# 413 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SLOT, 3, tarc3_Accusation_EventScript_Q3Summary
# 414 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 415 "data/scripts/tarc3_accusation.pory"
	message tarc3_Accusation_EventScript_Q1Loop_Text_0
# 416 "data/scripts/tarc3_accusation.pory"
	waitmessage
# 417 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_0, EVD_SKETCHED_DISCHARGE
# 418 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_1, EVD_SMEARGLE_KNOWS_DISCHARGE
# 419 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_2, EVD_PANEL_STRUCK
# 420 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_3, EVD_THE_NEAREST_HAND
# 421 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_4, EVD_SMEARGLE_REPERTOIRE
# 422 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_5, EVD_SMEARGLES_MOVESET
# 423 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_6, EVD_FOCUSED_BURN
# 424 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_3, EVD_LONG_ABSENCE
# 425 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q3Loop_Text_7, EVD_THE_HOLD_ADJOINS
# 426 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_5, EVD_OPEN_SERVICE_DOOR
# 427 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_16, TARC3_ACCUSE_NONE
# 428 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 429 "data/scripts/tarc3_accusation.pory"
	closemessage
# 430 "data/scripts/tarc3_accusation.pory"
	switch VAR_RESULT
# 431 "data/scripts/tarc3_accusation.pory"
	case EVD_SKETCHED_DISCHARGE, tarc3_Accusation_EventScript_Q3Loop_3
# 433 "data/scripts/tarc3_accusation.pory"
	case EVD_SMEARGLE_KNOWS_DISCHARGE, tarc3_Accusation_EventScript_Q3Loop_4
# 435 "data/scripts/tarc3_accusation.pory"
	case EVD_PANEL_STRUCK, tarc3_Accusation_EventScript_Q3Loop_5
# 437 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_NEAREST_HAND, tarc3_Accusation_EventScript_Q3Loop_6
# 439 "data/scripts/tarc3_accusation.pory"
	case EVD_SMEARGLE_REPERTOIRE, tarc3_Accusation_EventScript_Q3Loop_7
# 441 "data/scripts/tarc3_accusation.pory"
	case EVD_SMEARGLES_MOVESET, tarc3_Accusation_EventScript_Q3Loop_8
# 443 "data/scripts/tarc3_accusation.pory"
	case EVD_FOCUSED_BURN, tarc3_Accusation_EventScript_Q3Loop_9
# 445 "data/scripts/tarc3_accusation.pory"
	case EVD_LONG_ABSENCE, tarc3_Accusation_EventScript_Q3Loop_10
# 447 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_HOLD_ADJOINS, tarc3_Accusation_EventScript_Q3Loop_11
# 449 "data/scripts/tarc3_accusation.pory"
	case EVD_OPEN_SERVICE_DOOR, tarc3_Accusation_EventScript_Q3Loop_12
# 452 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3Summary
tarc3_Accusation_EventScript_Q3Loop_1:
# 454 "data/scripts/tarc3_accusation.pory"
	addvar VAR_TARC3_ACCUSE_SLOT, 1
# 455 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3Loop
	return

tarc3_Accusation_EventScript_Q3Loop_3:
# 432 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SketchedDischarge
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_4:
# 434 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_5:
# 436 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_PanelStruck
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_6:
# 438 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheNearestHand
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_7:
# 440 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SmeargleRepertoire
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_8:
# 442 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SmearglesMoveset
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_9:
# 444 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_FocusedBurn
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_10:
# 446 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_LongAbsence
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_11:
# 448 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheHoldAdjoins
	goto tarc3_Accusation_EventScript_Q3Loop_1

tarc3_Accusation_EventScript_Q3Loop_12:
# 450 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_OpenServiceDoor
	goto tarc3_Accusation_EventScript_Q3Loop_1


tarc3_Accusation_EventScript_Q3Summary::
# 459 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 13, tarc3_Accusation_EventScript_Q3SummaryBest
# 460 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 5, tarc3_Accusation_EventScript_Q3SummaryGood
# 461 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 1, tarc3_Accusation_EventScript_Q3SummaryPoor
# 462 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSE_SLOT, 0, tarc3_Accusation_EventScript_Q3SummarySkipped
# 463 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q3SummaryNone
	return


tarc3_Accusation_EventScript_Q3SummaryBest::
# 467 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 468 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryBest_Text_0
# 469 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 470 "data/scripts/tarc3_accusation.pory"
	closemessage
# 471 "data/scripts/tarc3_accusation.pory"
	delay 30
# 472 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummaryGood::
# 476 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 477 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryGood_Text_0
# 478 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 479 "data/scripts/tarc3_accusation.pory"
	closemessage
# 480 "data/scripts/tarc3_accusation.pory"
	delay 30
# 481 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummaryPoor::
# 485 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 486 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryPoor_Text_0
# 487 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 488 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryPoor_Text_1
# 489 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 490 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryPoor_Text_2
# 491 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 492 "data/scripts/tarc3_accusation.pory"
	closemessage
# 493 "data/scripts/tarc3_accusation.pory"
	delay 30
# 494 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummaryNone::
# 498 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 499 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryNone_Text_0
# 500 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 501 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummaryNone_Text_1
# 502 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 503 "data/scripts/tarc3_accusation.pory"
	closemessage
# 504 "data/scripts/tarc3_accusation.pory"
	delay 30
# 505 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q3SummarySkipped::
# 509 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 510 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_0
# 511 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 512 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_1
# 513 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 514 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_2
# 515 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q3SummarySkipped_Text_3
# 516 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 517 "data/scripts/tarc3_accusation.pory"
	closemessage
# 518 "data/scripts/tarc3_accusation.pory"
	delay 30
# 519 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4
	return


tarc3_Accusation_EventScript_Q4::
# 525 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 526 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4_Text_0
# 527 "data/scripts/tarc3_accusation.pory"
	closemessage
# 528 "data/scripts/tarc3_accusation.pory"
	delay 30
# 529 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 530 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4_Text_1
# 531 "data/scripts/tarc3_accusation.pory"
	closemessage
# 532 "data/scripts/tarc3_accusation.pory"
	delay 20
# 533 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_QSCORE, 0
# 534 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACCUSE_SLOT, 0
# 535 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4Loop
	return


tarc3_Accusation_EventScript_Q4Loop::
# 539 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SLOT, 3, tarc3_Accusation_EventScript_Q4Summary
# 540 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 541 "data/scripts/tarc3_accusation.pory"
	message tarc3_Accusation_EventScript_Q1Loop_Text_0
# 542 "data/scripts/tarc3_accusation.pory"
	waitmessage
# 543 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_0, EVD_SELF_INFLICTED_WOUND
# 544 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_1, EVD_IMPOSSIBLE_PRECISION
# 545 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_2, EVD_INCONSISTENT_DISPOSAL
# 546 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_1, EVD_THE_ACCOMPLICE_THEORY
# 547 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_3, EVD_NO_DEFENSIVE_WOUNDS
# 548 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q4Loop_Text_4, EVD_THE_SECOND_STORY
# 549 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_4, EVD_AN_ACCOMPLICE
# 550 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q2Loop_Text_5, EVD_OPEN_SERVICE_DOOR
# 551 "data/scripts/tarc3_accusation.pory"
	dynmultipush tarc3_Accusation_EventScript_Q1Loop_Text_16, TARC3_ACCUSE_NONE
# 552 "data/scripts/tarc3_accusation.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 553 "data/scripts/tarc3_accusation.pory"
	closemessage
# 554 "data/scripts/tarc3_accusation.pory"
	switch VAR_RESULT
# 555 "data/scripts/tarc3_accusation.pory"
	case EVD_SELF_INFLICTED_WOUND, tarc3_Accusation_EventScript_Q4Loop_3
# 557 "data/scripts/tarc3_accusation.pory"
	case EVD_IMPOSSIBLE_PRECISION, tarc3_Accusation_EventScript_Q4Loop_4
# 559 "data/scripts/tarc3_accusation.pory"
	case EVD_INCONSISTENT_DISPOSAL, tarc3_Accusation_EventScript_Q4Loop_5
# 561 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_ACCOMPLICE_THEORY, tarc3_Accusation_EventScript_Q4Loop_6
# 563 "data/scripts/tarc3_accusation.pory"
	case EVD_NO_DEFENSIVE_WOUNDS, tarc3_Accusation_EventScript_Q4Loop_7
# 565 "data/scripts/tarc3_accusation.pory"
	case EVD_THE_SECOND_STORY, tarc3_Accusation_EventScript_Q4Loop_8
# 567 "data/scripts/tarc3_accusation.pory"
	case EVD_AN_ACCOMPLICE, tarc3_Accusation_EventScript_Q4Loop_9
# 569 "data/scripts/tarc3_accusation.pory"
	case EVD_OPEN_SERVICE_DOOR, tarc3_Accusation_EventScript_Q4Loop_10
# 572 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4Summary
tarc3_Accusation_EventScript_Q4Loop_1:
# 574 "data/scripts/tarc3_accusation.pory"
	addvar VAR_TARC3_ACCUSE_SLOT, 1
# 575 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4Loop
	return

tarc3_Accusation_EventScript_Q4Loop_3:
# 556 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_SelfInflictedWound
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_4:
# 558 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_ImpossiblePrecision
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_5:
# 560 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_InconsistentDisposal
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_6:
# 562 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheAccompliceTheory
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_7:
# 564 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_NoDefensiveWounds
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_8:
# 566 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_TheSecondStory
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_9:
# 568 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_AnAccomplice
	goto tarc3_Accusation_EventScript_Q4Loop_1

tarc3_Accusation_EventScript_Q4Loop_10:
# 570 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_Ev_OpenServiceDoor
	goto tarc3_Accusation_EventScript_Q4Loop_1


tarc3_Accusation_EventScript_Q4Summary::
# 579 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 13, tarc3_Accusation_EventScript_Q4SummaryBest
# 580 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 5, tarc3_Accusation_EventScript_Q4SummaryGood
# 581 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_QSCORE, 1, tarc3_Accusation_EventScript_Q4SummaryPoor
# 582 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSE_SLOT, 0, tarc3_Accusation_EventScript_Q4SummarySkipped
# 583 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Q4SummaryNone
	return


tarc3_Accusation_EventScript_Q4SummaryBest::
# 587 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 588 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryBest_Text_0
# 589 "data/scripts/tarc3_accusation.pory"
	closemessage
# 590 "data/scripts/tarc3_accusation.pory"
	delay 40
# 591 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummaryGood::
# 595 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 596 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryGood_Text_0
# 597 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 598 "data/scripts/tarc3_accusation.pory"
	closemessage
# 599 "data/scripts/tarc3_accusation.pory"
	delay 30
# 600 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummaryPoor::
# 604 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 605 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryPoor_Text_0
# 606 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 607 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 608 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryPoor_Text_1
# 609 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 610 "data/scripts/tarc3_accusation.pory"
	closemessage
# 611 "data/scripts/tarc3_accusation.pory"
	delay 30
# 612 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummaryNone::
# 616 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 617 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryNone_Text_0
# 618 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 619 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummaryNone_Text_1
# 620 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 621 "data/scripts/tarc3_accusation.pory"
	closemessage
# 622 "data/scripts/tarc3_accusation.pory"
	delay 30
# 623 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Q4SummarySkipped::
# 627 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 628 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_0
# 629 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_1
# 630 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 631 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_2
# 632 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Q4SummarySkipped_Text_3
# 633 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 634 "data/scripts/tarc3_accusation.pory"
	closemessage
# 635 "data/scripts/tarc3_accusation.pory"
	delay 30
# 636 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Resolve
	return


tarc3_Accusation_EventScript_Resolve::
# 641 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI, tarc3_Accusation_EventScript_BandWorst
# 642 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_SCORE, 43
	goto_if_ge tarc3_Accusation_EventScript_Resolve_3
tarc3_Accusation_EventScript_Resolve_1:
# 645 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_SCORE, 24
	goto_if_ge tarc3_Accusation_EventScript_Resolve_8
tarc3_Accusation_EventScript_Resolve_6:
# 648 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BandBad
	return

tarc3_Accusation_EventScript_Resolve_2:
# 643 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BandPerfect
	goto tarc3_Accusation_EventScript_Resolve_1

tarc3_Accusation_EventScript_Resolve_3:
# 642 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_T3, TARC3_T3_ALL
	goto_if_eq tarc3_Accusation_EventScript_Resolve_2
	goto tarc3_Accusation_EventScript_Resolve_1

tarc3_Accusation_EventScript_Resolve_7:
# 646 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BandGood
	goto tarc3_Accusation_EventScript_Resolve_6

tarc3_Accusation_EventScript_Resolve_8:
# 645 "data/scripts/tarc3_accusation.pory"
	compare VAR_TARC3_ACCUSE_HITS, 1
	goto_if_ge tarc3_Accusation_EventScript_Resolve_7
	goto tarc3_Accusation_EventScript_Resolve_6


tarc3_Accusation_EventScript_BandPerfect::
# 652 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_PERFECT
# 653 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_PerfectAnswer
	return


tarc3_Accusation_EventScript_BandGood::
# 657 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_GOOD
# 658 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodAnswer
	return


tarc3_Accusation_EventScript_BandBad::
# 662 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_BAD
# 663 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadAnswer
	return


tarc3_Accusation_EventScript_BandWorst::
# 667 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_WORST
# 668 "data/scripts/tarc3_accusation.pory"
	goto_if_ge VAR_TARC3_ACCUSE_SCORE, 24, tarc3_Accusation_EventScript_WorstAnswer
# 669 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ENDING, TARC3_ENDING_WORST_REFUSED
# 670 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstRefusedAnswer
	return


tarc3_Accusation_EventScript_PerfectAnswer::
# 676 "data/scripts/tarc3_accusation.pory"
	closemessage
# 677 "data/scripts/tarc3_accusation.pory"
	delay 50
# 678 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 679 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_0
# 680 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_1
# 681 "data/scripts/tarc3_accusation.pory"
	closemessage
# 682 "data/scripts/tarc3_accusation.pory"
	delay 20
# 683 "data/scripts/tarc3_accusation.pory"
	playse SE_PIN
# 684 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_NameIchiro_Movement_0
# 685 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 686 "data/scripts/tarc3_accusation.pory"
	delay 30
# 687 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectAnswer_Movement_0
# 688 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 689 "data/scripts/tarc3_accusation.pory"
	delay 20
# 690 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 691 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_2
# 692 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_3
# 693 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_4
# 694 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_5
# 695 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_6
# 696 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_7
# 697 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_8
# 698 "data/scripts/tarc3_accusation.pory"
	closemessage
# 699 "data/scripts/tarc3_accusation.pory"
	delay 50
# 700 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 701 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_9
# 702 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_10
# 703 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_11
# 704 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 705 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 706 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_12
# 707 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_13
# 708 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 709 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_14
# 710 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_15
# 711 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_16
# 712 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectAnswer_Text_17
# 713 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 714 "data/scripts/tarc3_accusation.pory"
	closemessage
# 715 "data/scripts/tarc3_accusation.pory"
	delay 60
# 716 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_PerfectCloset
	return


tarc3_Accusation_EventScript_PerfectCloset::
# 720 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 721 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_0
# 722 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 723 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_1
# 724 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 725 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_2
# 726 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 727 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_3
# 728 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 729 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_4
# 730 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 731 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_5
# 732 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 733 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_6
# 734 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_7
# 735 "data/scripts/tarc3_accusation.pory"
	closemessage
# 736 "data/scripts/tarc3_accusation.pory"
	delay 30
# 737 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_OpenCloset
# 738 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 739 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_8
# 740 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 741 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_9
# 742 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 743 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_10
# 744 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 745 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_11
# 746 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 747 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_12
# 748 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 749 "data/scripts/tarc3_accusation.pory"
	closemessage
# 750 "data/scripts/tarc3_accusation.pory"
	delay 30
# 751 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_PerfectTakeshi
	return


tarc3_Accusation_EventScript_PerfectTakeshi::
# 755 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 756 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_0
# 757 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 758 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_1
# 759 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_2
# 760 "data/scripts/tarc3_accusation.pory"
	goto_if_set FLAG_TARC3_ACCUSE_HISTORY, tarc3_Accusation_EventScript_PerfectTakeshi_2
tarc3_Accusation_EventScript_PerfectTakeshi_1:
# 763 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_4
# 764 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_5
# 765 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_6
# 766 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_7
# 767 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_8
# 768 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 769 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_9
# 770 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 771 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_10
# 772 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_11
# 773 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_12
# 774 "data/scripts/tarc3_accusation.pory"
	closemessage
# 775 "data/scripts/tarc3_accusation.pory"
	delay 20
# 776 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_TAKESHI_CLOSET, tarc3_Accusation_EventScript_OpenCloset_Movement_2
# 777 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 778 "data/scripts/tarc3_accusation.pory"
	delay 20
# 779 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectTakeshi_Movement_0
# 780 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 781 "data/scripts/tarc3_accusation.pory"
	delay 20
# 782 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 783 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_13
# 784 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_14
# 785 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_15
# 786 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 787 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_16
# 788 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_17
# 789 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 790 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 791 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 792 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 793 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 794 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 795 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 796 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 797 "data/scripts/tarc3_accusation.pory"
	closemessage
# 798 "data/scripts/tarc3_accusation.pory"
	delay 50
# 799 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return

tarc3_Accusation_EventScript_PerfectTakeshi_2:
# 761 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_3
	goto tarc3_Accusation_EventScript_PerfectTakeshi_1


tarc3_Accusation_EventScript_GoodAnswer::
# 805 "data/scripts/tarc3_accusation.pory"
	closemessage
# 806 "data/scripts/tarc3_accusation.pory"
	delay 40
# 807 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 808 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_0
# 809 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 810 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_1
# 811 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_2
# 812 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 813 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_3
# 814 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 815 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_4
# 816 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_5
# 817 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 818 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswer_Text_6
# 819 "data/scripts/tarc3_accusation.pory"
	closemessage
# 820 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_OpenCloset_Movement_0
# 821 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 822 "data/scripts/tarc3_accusation.pory"
	delay 20
# 823 "data/scripts/tarc3_accusation.pory"
	switch VAR_TARC3_ACCUSE_T3
# 824 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_REFUSAL_ONLY, tarc3_Accusation_EventScript_GoodAnswer_2
# 826 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_REFUSAL_LIGHTS, tarc3_Accusation_EventScript_GoodAnswer_3
# 828 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_REFUSAL_WOUND, tarc3_Accusation_EventScript_GoodAnswer_4
# 830 "data/scripts/tarc3_accusation.pory"
	case TARC3_T3_ALL, tarc3_Accusation_EventScript_GoodAnswer_5
# 833 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveKept
	return

tarc3_Accusation_EventScript_GoodAnswer_2:
# 825 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return

tarc3_Accusation_EventScript_GoodAnswer_3:
# 827 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return

tarc3_Accusation_EventScript_GoodAnswer_4:
# 829 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return

tarc3_Accusation_EventScript_GoodAnswer_5:
# 831 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodMotiveDenied
	return


tarc3_Accusation_EventScript_GoodMotiveKept::
# 840 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 841 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_0
# 842 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_1
# 843 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_2
# 844 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_3
# 845 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 846 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 847 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_4
# 848 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 849 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_4
# 850 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 851 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_5
# 852 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 853 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 854 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 855 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 856 "data/scripts/tarc3_accusation.pory"
	closemessage
# 857 "data/scripts/tarc3_accusation.pory"
	delay 40
# 858 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 859 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_6
# 860 "data/scripts/tarc3_accusation.pory"
	closemessage
# 861 "data/scripts/tarc3_accusation.pory"
	delay 20
# 862 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_7
# 863 "data/scripts/tarc3_accusation.pory"
	closemessage
# 864 "data/scripts/tarc3_accusation.pory"
	delay 20
# 865 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 866 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_8
# 867 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 868 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveKept_Text_9
# 869 "data/scripts/tarc3_accusation.pory"
	closemessage
# 870 "data/scripts/tarc3_accusation.pory"
	delay 20
# 871 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodAnswerEnough
	return


tarc3_Accusation_EventScript_GoodMotiveDenied::
# 877 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 878 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_0
# 879 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 880 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_1
# 881 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_2
# 882 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 883 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_3
# 884 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_4
# 885 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 886 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 887 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 888 "data/scripts/tarc3_accusation.pory"
	closemessage
# 889 "data/scripts/tarc3_accusation.pory"
	delay 40
# 890 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodMotiveDenied_Text_5
# 891 "data/scripts/tarc3_accusation.pory"
	closemessage
# 892 "data/scripts/tarc3_accusation.pory"
	delay 20
# 893 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodAnswerEnough
	return


tarc3_Accusation_EventScript_GoodAnswerEnough::
# 897 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectAnswer_Movement_0
# 898 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 899 "data/scripts/tarc3_accusation.pory"
	delay 20
# 900 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 901 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswerEnough_Text_0
# 902 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 903 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodAnswerEnough_Text_1
# 904 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 905 "data/scripts/tarc3_accusation.pory"
	closemessage
# 906 "data/scripts/tarc3_accusation.pory"
	delay 40
# 907 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodCloset
	return


tarc3_Accusation_EventScript_GoodCloset::
# 911 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 912 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_0
# 913 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 914 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_1
# 915 "data/scripts/tarc3_accusation.pory"
	closemessage
# 916 "data/scripts/tarc3_accusation.pory"
	delay 20
# 917 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_OpenCloset
# 918 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 919 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_2
# 920 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 921 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_3
# 922 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 923 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_4
# 924 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 925 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodCloset_Text_5
# 926 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 927 "data/scripts/tarc3_accusation.pory"
	closemessage
# 928 "data/scripts/tarc3_accusation.pory"
	delay 40
# 929 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_GoodStern
	return


tarc3_Accusation_EventScript_GoodStern::
# 933 "data/scripts/tarc3_accusation.pory"
	closemessage
# 934 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_TO_BLACK
# 935 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_ICHIRO
# 936 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_SUZUKI
# 937 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_AKIE
# 938 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_KITARO
# 939 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_JOJI
# 940 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_MARIKO
# 941 "data/scripts/tarc3_accusation.pory"
	delay 30
# 942 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_FROM_BLACK
# 943 "data/scripts/tarc3_accusation.pory"
	delay 30
# 944 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 945 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_0
# 946 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 947 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_0
# 948 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 949 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_1
# 950 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_2
# 951 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_3
# 952 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 953 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 954 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 955 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_4
# 956 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 957 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_5
# 958 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 959 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_6
# 960 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 961 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 962 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_7
# 963 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_8
# 964 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 965 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_GoodStern_Text_9
# 966 "data/scripts/tarc3_accusation.pory"
	closemessage
# 967 "data/scripts/tarc3_accusation.pory"
	delay 40
# 968 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return


tarc3_Accusation_EventScript_BadAnswer::
# 974 "data/scripts/tarc3_accusation.pory"
	closemessage
# 975 "data/scripts/tarc3_accusation.pory"
	delay 30
# 976 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 977 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_0
# 978 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 979 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 980 "data/scripts/tarc3_accusation.pory"
	goto_if_unset FLAG_TARC3_ACCUSE_CRUMBS, tarc3_Accusation_EventScript_BadAnswerGeneric
# 981 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 982 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_1
# 983 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_2
# 984 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_3
# 985 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 986 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_4
# 987 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 988 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_5
# 989 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_6
# 990 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_7
# 991 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 992 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 993 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 994 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_8
# 995 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_9
# 996 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 997 "data/scripts/tarc3_accusation.pory"
	closemessage
# 998 "data/scripts/tarc3_accusation.pory"
	delay 40
# 999 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadNearMiss
	return


tarc3_Accusation_EventScript_BadAnswerGeneric::
# 1005 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1006 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_0
# 1007 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_1
# 1008 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_2
# 1009 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1010 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_3
# 1011 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1012 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswerGeneric_Text_4
# 1013 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1014 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1015 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1016 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_8
# 1017 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadAnswer_Text_9
# 1018 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1019 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1020 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1021 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadNearMiss
	return


tarc3_Accusation_EventScript_BadNearMiss::
# 1027 "data/scripts/tarc3_accusation.pory"
	checkevidence EVD_SKETCHBOOK
# 1028 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_Accusation_EventScript_BadNearMissBook
# 1029 "data/scripts/tarc3_accusation.pory"
	checkevidence EVD_UNREQUITED_LOVE
# 1030 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_Accusation_EventScript_BadNearMissBook
# 1031 "data/scripts/tarc3_accusation.pory"
	checkevidence EVD_TWIN_REFUSAL
# 1032 "data/scripts/tarc3_accusation.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_Accusation_EventScript_BadNearMissBook
# 1033 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadWall
	return


tarc3_Accusation_EventScript_BadNearMissBook::
# 1037 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1038 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_0
# 1039 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1040 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1041 "data/scripts/tarc3_accusation.pory"
	playse SE_PIN
# 1042 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_NameIchiro_Movement_0
# 1043 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1044 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1045 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_OpenCloset_Movement_0
# 1046 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1047 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1048 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1049 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_1
# 1050 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1051 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1052 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_PerfectAnswer_Movement_0
# 1053 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1054 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1055 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1056 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_2
# 1057 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadNearMissBook_Text_3
# 1058 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1059 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1060 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadWall
	return


tarc3_Accusation_EventScript_BadWall::
# 1064 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1065 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_0
# 1066 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1067 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1068 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1069 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_1
# 1070 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1071 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1072 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1073 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_2
# 1074 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_3
# 1075 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_4
# 1076 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadWall_Text_5
# 1077 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1078 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1079 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1080 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_BadCloset
	return


tarc3_Accusation_EventScript_BadCloset::
# 1084 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1085 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_0
# 1086 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_1
# 1087 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1088 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1089 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 1090 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_2
# 1091 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_3
# 1092 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1093 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_4
# 1094 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1095 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_5
# 1096 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_6
# 1097 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1098 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_7
# 1099 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 1100 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_8
# 1101 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1102 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1103 "data/scripts/tarc3_accusation.pory"
	call tarc3_Accusation_EventScript_OpenCloset
# 1104 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1105 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_9
# 1106 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1107 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_10
# 1108 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_11
# 1109 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_12
# 1110 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1111 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1112 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1113 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1114 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_13
# 1115 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_14
# 1116 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_BadCloset_Text_15
# 1117 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1118 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1119 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1120 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return


tarc3_Accusation_EventScript_WorstAnswer::
# 1126 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1127 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1128 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1129 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_0
# 1130 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1131 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_1
# 1132 "data/scripts/tarc3_accusation.pory"
	goto_if_set FLAG_TARC3_ACCUSE_HISTORY, tarc3_Accusation_EventScript_WorstAnswer_2
tarc3_Accusation_EventScript_WorstAnswer_1:
# 1135 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_3
# 1136 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_4
# 1137 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_5
# 1138 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 1139 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_6
# 1140 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1141 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_8
# 1142 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1143 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_7
# 1144 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1145 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_8
# 1146 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_9
# 1147 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1148 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectCloset_Text_4
# 1149 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_10
# 1150 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1151 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1152 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1153 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstRoom
	return

tarc3_Accusation_EventScript_WorstAnswer_2:
# 1133 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstAnswer_Text_2
	goto tarc3_Accusation_EventScript_WorstAnswer_1


tarc3_Accusation_EventScript_WorstRoom::
# 1157 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_1
# 1158 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRoom_Text_0
# 1159 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 1160 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRoom_Text_1
# 1161 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRoom_Text_2
# 1162 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1163 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 1164 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1165 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1166 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 1167 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1168 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1169 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1170 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_SUZUKI, tarc3_Accusation_EventScript_WorstRoom_Movement_0
# 1171 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1172 "data/scripts/tarc3_accusation.pory"
	playse SE_EXIT
# 1173 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_SUZUKI
# 1174 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1175 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstIchiro
	return


tarc3_Accusation_EventScript_WorstIchiro::
# 1179 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_1
# 1180 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstIchiro_Text_0
# 1181 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstIchiro_Text_1
# 1182 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstIchiro_Text_2
# 1183 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 1184 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1185 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1186 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1187 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1188 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_ICHIRO, tarc3_Accusation_EventScript_WorstIchiro_Movement_0
# 1189 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1190 "data/scripts/tarc3_accusation.pory"
	playse SE_EXIT
# 1191 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_ICHIRO
# 1192 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1193 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_NATSUE, tarc3_Accusation_EventScript_WorstIchiro_Movement_1
# 1194 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1195 "data/scripts/tarc3_accusation.pory"
	playse SE_EXIT
# 1196 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_NATSUE
# 1197 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1198 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return


tarc3_Accusation_EventScript_WorstRefusedAnswer::
# 1204 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1205 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1206 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1207 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_0
# 1208 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1209 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_1
# 1210 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1211 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_2
# 1212 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1213 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_3
# 1214 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_4
# 1215 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_5
# 1216 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_5
# 1217 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1218 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1219 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1220 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_WorstRefusedTakeshi
	return


tarc3_Accusation_EventScript_WorstRefusedTakeshi::
# 1224 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1225 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_0
# 1226 "data/scripts/tarc3_accusation.pory"
	goto_if_set FLAG_TARC3_ACCUSE_HISTORY, tarc3_Accusation_EventScript_WorstRefusedTakeshi_2
tarc3_Accusation_EventScript_WorstRefusedTakeshi_1:
# 1229 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_2
# 1230 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_3
# 1231 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1232 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_4
# 1233 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1234 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_5
# 1235 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameTakeshi_Text_2
# 1236 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_0
# 1237 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameMenu_Text_2
# 1238 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_1
# 1239 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q2SummaryGood_Text_0
# 1240 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_6
# 1241 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_7
# 1242 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_NameIchiro_Text_3
# 1243 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_18
# 1244 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryBest_Text_1
# 1245 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1246 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_PerfectTakeshi_Text_19
# 1247 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1248 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1249 "data/scripts/tarc3_accusation.pory"
	delay 50
# 1250 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_End
	return

tarc3_Accusation_EventScript_WorstRefusedTakeshi_2:
# 1227 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_1
	goto tarc3_Accusation_EventScript_WorstRefusedTakeshi_1


tarc3_Accusation_EventScript_End::
# 1254 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1255 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1256 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CAMERA, tarc3_Accusation_EventScript_OpenCloset_Movement_1
# 1257 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1258 "data/scripts/tarc3_accusation.pory"
	special RemoveCameraObject
# 1259 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_TO_BLACK
# 1260 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_TAKESHI_CLOSET
# 1261 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_NATSUE
# 1262 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_ICHIRO
# 1263 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_SUZUKI
# 1264 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_AKIE
# 1265 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_KITARO
# 1266 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_JOJI
# 1267 "data/scripts/tarc3_accusation.pory"
	removeobject LOCALID_CABINS_MARIKO
# 1268 "data/scripts/tarc3_accusation.pory"
	delay 30
# 1269 "data/scripts/tarc3_accusation.pory"
	fadescreen FADE_FROM_BLACK
# 1270 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1271 "data/scripts/tarc3_accusation.pory"
	goto tarc3_Accusation_EventScript_Depart
	return


tarc3_Accusation_EventScript_Depart::
# 1275 "data/scripts/tarc3_accusation.pory"
	applymovement LOCALID_CABINS_RAN, tarc3_Accusation_EventScript_Depart_Movement_0
# 1276 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1277 "data/scripts/tarc3_accusation.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tarc3_Accusation_EventScript_OpenCloset_Movement_2
# 1278 "data/scripts/tarc3_accusation.pory"
	waitmovement 0
# 1279 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1280 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 1281 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_0
# 1282 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_1
# 1283 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Naming_Text_0
# 1284 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_NameIchiro_Text_7
# 1285 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1286 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1287 "data/scripts/tarc3_accusation.pory"
	delay 40
# 1288 "data/scripts/tarc3_accusation.pory"
	playse SE_RG_SS_ANNE_HORN
# 1289 "data/scripts/tarc3_accusation.pory"
	delay 80
# 1290 "data/scripts/tarc3_accusation.pory"
	setspeaker tarc3_Accusation_EventScript_Q1SummaryPoor_Text_2
# 1291 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_2
# 1292 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_3
# 1293 "data/scripts/tarc3_accusation.pory"
	setspeaker NULL
# 1294 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1295 "data/scripts/tarc3_accusation.pory"
	delay 20
# 1296 "data/scripts/tarc3_accusation.pory"
	msgbox tarc3_Accusation_EventScript_Depart_Text_4
# 1297 "data/scripts/tarc3_accusation.pory"
	closemessage
# 1298 "data/scripts/tarc3_accusation.pory"
	setvar VAR_TARC3_ACT3, TARC3_ACT3_COMPLETE
# 1299 "data/scripts/tarc3_accusation.pory"
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

# 687 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_PerfectAnswer_Movement_0:
# 687 "data/scripts/tarc3_accusation.pory"
	face_down
	step_end

# 779 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_PerfectTakeshi_Movement_0:
# 779 "data/scripts/tarc3_accusation.pory"
	face_left
	step_end

# 1170 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_WorstRoom_Movement_0:
# 1170 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1170 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1170 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1170 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1170 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1170 "data/scripts/tarc3_accusation.pory"
	walk_left
	step_end

# 1188 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_WorstIchiro_Movement_0:
# 1188 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1188 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1188 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1188 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1188 "data/scripts/tarc3_accusation.pory"
	walk_left
	step_end

# 1193 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_WorstIchiro_Movement_1:
# 1193 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1193 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1193 "data/scripts/tarc3_accusation.pory"
	walk_right
# 1193 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1193 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1193 "data/scripts/tarc3_accusation.pory"
	walk_down
# 1193 "data/scripts/tarc3_accusation.pory"
	walk_left
	step_end

# 1275 "data/scripts/tarc3_accusation.pory"
tarc3_Accusation_EventScript_Depart_Movement_0:
# 1275 "data/scripts/tarc3_accusation.pory"
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

tarc3_Accusation_EventScript_Q2SummaryGood_Text_0:
# 353 "data/scripts/tarc3_accusation.pory"
	.string "Akie$"

tarc3_Accusation_EventScript_Q2SummaryGood_Text_1:
# 354 "data/scripts/tarc3_accusation.pory"
	.string "...So he only saw something he shouldn't\n"
	.string "have. That's all it ever was.$"

tarc3_Accusation_EventScript_Q2SummaryGood_Text_2:
# 356 "data/scripts/tarc3_accusation.pory"
	.string "Continue, {PLAYER}.$"

tarc3_Accusation_EventScript_Q2SummaryPoor_Text_0:
# 365 "data/scripts/tarc3_accusation.pory"
	.string "An accomplice still explains more than\n"
	.string "anything you have offered.$"

tarc3_Accusation_EventScript_Q2SummaryPoor_Text_1:
# 367 "data/scripts/tarc3_accusation.pory"
	.string "Two questions, and not one decisive\n"
	.string "word from you.\p"
	.string "This is mediocrity, {PLAYER}\n"
	.string "Edgeworth.$"

tarc3_Accusation_EventScript_Q2SummaryNone_Text_0:
# 376 "data/scripts/tarc3_accusation.pory"
	.string "None of that was about Tatsuo.$"

tarc3_Accusation_EventScript_Q2SummaryNone_Text_1:
# 378 "data/scripts/tarc3_accusation.pory"
	.string "A foolishly foolish detour, {PLAYER}\n"
	.string "Edgeworth.\p"
	.string "The man is dead and you have said\n"
	.string "nothing of him. Keep to the question.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_0:
# 387 "data/scripts/tarc3_accusation.pory"
	.string "...I cannot answer this one.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_1:
# 389 "data/scripts/tarc3_accusation.pory"
	.string "No.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_2:
# 390 "data/scripts/tarc3_accusation.pory"
	.string "No, you don't get to do that. That one\n"
	.string "was my husband.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_3:
# 391 "data/scripts/tarc3_accusation.pory"
	.string "Say something about Tatsuo or don't\n"
	.string "say anything else, at all.$"

tarc3_Accusation_EventScript_Q2SummarySkipped_Text_4:
# 393 "data/scripts/tarc3_accusation.pory"
	.string "She is owed an answer, and I will not\n"
	.string "soften that.\p"
	.string "Provide one, or surrender the floor.$"

tarc3_Accusation_EventScript_Q3_Text_0:
# 404 "data/scripts/tarc3_accusation.pory"
	.string "Third. The lights.$"

tarc3_Accusation_EventScript_Q3Loop_Text_0:
# 417 "data/scripts/tarc3_accusation.pory"
	.string "Sketched Discharge$"

tarc3_Accusation_EventScript_Q3Loop_Text_1:
# 418 "data/scripts/tarc3_accusation.pory"
	.string "Copied Discharge$"

tarc3_Accusation_EventScript_Q3Loop_Text_2:
# 419 "data/scripts/tarc3_accusation.pory"
	.string "Panel Struck$"

tarc3_Accusation_EventScript_Q3Loop_Text_3:
# 420 "data/scripts/tarc3_accusation.pory"
	.string "Nearest Hand$"

tarc3_Accusation_EventScript_Q3Loop_Text_4:
# 421 "data/scripts/tarc3_accusation.pory"
	.string "Smeargle's Moves$"

tarc3_Accusation_EventScript_Q3Loop_Text_5:
# 422 "data/scripts/tarc3_accusation.pory"
	.string "Sketched Move$"

tarc3_Accusation_EventScript_Q3Loop_Text_6:
# 423 "data/scripts/tarc3_accusation.pory"
	.string "Focused Burn$"

tarc3_Accusation_EventScript_Q3Loop_Text_7:
# 425 "data/scripts/tarc3_accusation.pory"
	.string "Adjoining Hold$"

tarc3_Accusation_EventScript_Q3SummaryBest_Text_0:
# 468 "data/scripts/tarc3_accusation.pory"
	.string "...Then it was never the wiring. I will not\n"
	.string "suggest it again.$"

tarc3_Accusation_EventScript_Q3SummaryGood_Text_0:
# 477 "data/scripts/tarc3_accusation.pory"
	.string "...I want to dismiss it. I find that I\n"
	.string "can't.$"

tarc3_Accusation_EventScript_Q3SummaryPoor_Text_0:
# 486 "data/scripts/tarc3_accusation.pory"
	.string "This is an old ship, {PLAYER}. Old\n"
	.string "ships have old wiring.$"

tarc3_Accusation_EventScript_Q3SummaryPoor_Text_1:
# 488 "data/scripts/tarc3_accusation.pory"
	.string "So it was the man, or it was the weather.\n"
	.string "Wonderful.$"

tarc3_Accusation_EventScript_Q3SummaryPoor_Text_2:
# 490 "data/scripts/tarc3_accusation.pory"
	.string "Old wiring. That is what you have left\n"
	.string "this room with.\p"
	.string "My father would have had them in hand\n"
	.string "an hour ago.$"

tarc3_Accusation_EventScript_Q3SummaryNone_Text_0:
# 499 "data/scripts/tarc3_accusation.pory"
	.string "So the lights went out on their own,\n"
	.string "then.$"

tarc3_Accusation_EventScript_Q3SummaryNone_Text_1:
# 501 "data/scripts/tarc3_accusation.pory"
	.string "Three questions. Three failures.\p"
	.string "I did not cross an ocean to watch this.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_0:
# 510 "data/scripts/tarc3_accusation.pory"
	.string "The lights... I cannot account for.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_1:
# 512 "data/scripts/tarc3_accusation.pory"
	.string "Then we are all still in the dark. How\n"
	.string "appropriate.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_2:
# 514 "data/scripts/tarc3_accusation.pory"
	.string "Cannot.$"

tarc3_Accusation_EventScript_Q3SummarySkipped_Text_3:
# 515 "data/scripts/tarc3_accusation.pory"
	.string "There is a word I never expected to\n"
	.string "hear in your mouth.$"

tarc3_Accusation_EventScript_Q4_Text_0:
# 526 "data/scripts/tarc3_accusation.pory"
	.string "And finally.$"

tarc3_Accusation_EventScript_Q4_Text_1:
# 530 "data/scripts/tarc3_accusation.pory"
	.string "Who attacked Ichiro.$"

tarc3_Accusation_EventScript_Q4Loop_Text_0:
# 543 "data/scripts/tarc3_accusation.pory"
	.string "Self-Inflicted$"

tarc3_Accusation_EventScript_Q4Loop_Text_1:
# 544 "data/scripts/tarc3_accusation.pory"
	.string "Impossible Aim$"

tarc3_Accusation_EventScript_Q4Loop_Text_2:
# 545 "data/scripts/tarc3_accusation.pory"
	.string "Left Behind$"

tarc3_Accusation_EventScript_Q4Loop_Text_3:
# 547 "data/scripts/tarc3_accusation.pory"
	.string "No Defence$"

tarc3_Accusation_EventScript_Q4Loop_Text_4:
# 548 "data/scripts/tarc3_accusation.pory"
	.string "The Second Story$"

tarc3_Accusation_EventScript_Q4SummaryBest_Text_0:
# 588 "data/scripts/tarc3_accusation.pory"
	.string "Everyone in the room is waiting on\n"
	.string "Ichiro's response.$"

tarc3_Accusation_EventScript_Q4SummaryGood_Text_0:
# 596 "data/scripts/tarc3_accusation.pory"
	.string "...In the bathroom I said a man couldn't\n"
	.string "do that to himself.\p"
	.string "I am no longer certain I believe me.$"

tarc3_Accusation_EventScript_Q4SummaryPoor_Text_0:
# 605 "data/scripts/tarc3_accusation.pory"
	.string "You've proven nothing. Nothing at all.$"

tarc3_Accusation_EventScript_Q4SummaryPoor_Text_1:
# 608 "data/scripts/tarc3_accusation.pory"
	.string "For once, {PLAYER} Edgeworth, I have\n"
	.string "nothing to add to that.$"

tarc3_Accusation_EventScript_Q4SummaryNone_Text_0:
# 617 "data/scripts/tarc3_accusation.pory"
	.string "And that was the last of your\n"
	.string "questions.$"

tarc3_Accusation_EventScript_Q4SummaryNone_Text_1:
# 619 "data/scripts/tarc3_accusation.pory"
	.string "Four questions, and a foolish fool has\n"
	.string "answered none of them.\p"
	.string "You have humiliated us both.$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_0:
# 628 "data/scripts/tarc3_accusation.pory"
	.string "That was the last one, wasn't it.$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_1:
# 629 "data/scripts/tarc3_accusation.pory"
	.string "That was your last question, and you\n"
	.string "didn't even attempt to answer it?$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_2:
# 631 "data/scripts/tarc3_accusation.pory"
	.string "Do not look to me. You built this.$"

tarc3_Accusation_EventScript_Q4SummarySkipped_Text_3:
# 632 "data/scripts/tarc3_accusation.pory"
	.string "Stand in it.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_0:
# 679 "data/scripts/tarc3_accusation.pory"
	.string "I have Ichiro's sketchbook, and I do\n"
	.string "not intend to open it.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_1:
# 680 "data/scripts/tarc3_accusation.pory"
	.string "There is no need.\p"
	.string "Everyone in this room will learn what it\n"
	.string "contains - and it will not be from me.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_2:
# 691 "data/scripts/tarc3_accusation.pory"
	.string "It's drawings. Four years of them.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_3:
# 692 "data/scripts/tarc3_accusation.pory"
	.string "All the same person.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_4:
# 693 "data/scripts/tarc3_accusation.pory"
	.string "Natsue. Don't look at me. Please. Just...\n"
	.string "don't.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_5:
# 694 "data/scripts/tarc3_accusation.pory"
	.string "I asked him one year ago.\p"
	.string "I wrote it down beforehand so I\n"
	.string "wouldn't stumble over it.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_6:
# 695 "data/scripts/tarc3_accusation.pory"
	.string "He was polite. He waited until I'd said\n"
	.string "the whole thing.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_7:
# 696 "data/scripts/tarc3_accusation.pory"
	.string "'A local boy with borrowed tuition and a\n"
	.string "half-finished art career.'$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_8:
# 697 "data/scripts/tarc3_accusation.pory"
	.string "'Son, know your place.'$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_9:
# 701 "data/scripts/tarc3_accusation.pory"
	.string "I thanked him.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_10:
# 702 "data/scripts/tarc3_accusation.pory"
	.string "I thanked him, I left the room, and I\n"
	.string "never mentioned it again.\p"
	.string "Not to him. Not to anybody.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_11:
# 703 "data/scripts/tarc3_accusation.pory"
	.string "He announced her engagement to\n"
	.string "Takeshi the same week.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_12:
# 706 "data/scripts/tarc3_accusation.pory"
	.string "...I remember seeing you that week.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_13:
# 707 "data/scripts/tarc3_accusation.pory"
	.string "I thought you were ill.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_14:
# 709 "data/scripts/tarc3_accusation.pory"
	.string "You want to know what I am to this\n"
	.string "family? I can give you the figure.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_15:
# 710 "data/scripts/tarc3_accusation.pory"
	.string "I am not a close friend. I'm an expense.\p"
	.string "A plaything, one you might bring on a\n"
	.string "trip to Hoenn or Galar.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_16:
# 711 "data/scripts/tarc3_accusation.pory"
	.string "I was counting what I owed. $500,000 per\n"
	.string "year.$"

tarc3_Accusation_EventScript_PerfectAnswer_Text_17:
# 712 "data/scripts/tarc3_accusation.pory"
	.string "He got eleven years of a person for it.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_0:
# 721 "data/scripts/tarc3_accusation.pory"
	.string "Akie. I must open your closet.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_1:
# 723 "data/scripts/tarc3_accusation.pory"
	.string "...What?$"

tarc3_Accusation_EventScript_PerfectCloset_Text_2:
# 725 "data/scripts/tarc3_accusation.pory"
	.string "You should have been told the moment I\n"
	.string "found him. You were not.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_3:
# 727 "data/scripts/tarc3_accusation.pory"
	.string "You searched my cabin.\p"
	.string "You opened that door, and you closed it\n"
	.string "again, and you said nothing to me.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_4:
# 729 "data/scripts/tarc3_accusation.pory"
	.string "Yes.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_5:
# 731 "data/scripts/tarc3_accusation.pory"
	.string "My husband is on the foredeck under a\n"
	.string "tablecloth, and you walked out of my\l"
	.string "room without a word.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_6:
# 733 "data/scripts/tarc3_accusation.pory"
	.string "I did. This room had to hear the case\n"
	.string "before it heard him, and I do not\l"
	.string "retract that judgement.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_7:
# 734 "data/scripts/tarc3_accusation.pory"
	.string "That does not make it a small thing to\n"
	.string "have done to you.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_8:
# 739 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi...$"

tarc3_Accusation_EventScript_PerfectCloset_Text_9:
# 741 "data/scripts/tarc3_accusation.pory"
	.string "He's been in this cabin the entire time.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_10:
# 743 "data/scripts/tarc3_accusation.pory"
	.string "How long have you known?$"

tarc3_Accusation_EventScript_PerfectCloset_Text_11:
# 745 "data/scripts/tarc3_accusation.pory"
	.string "Since I searched this deck. He hid\n"
	.string "himself there hours before that, and\l"
	.string "told no one.$"

tarc3_Accusation_EventScript_PerfectCloset_Text_12:
# 747 "data/scripts/tarc3_accusation.pory"
	.string "Let the boy speak.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_0:
# 756 "data/scripts/tarc3_accusation.pory"
	.string "Do you still want revenge?$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_1:
# 758 "data/scripts/tarc3_accusation.pory"
	.string "...No.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_2:
# 759 "data/scripts/tarc3_accusation.pory"
	.string "But you should hear the whole story,\n"
	.string "and you should hear it from me.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_3:
# 761 "data/scripts/tarc3_accusation.pory"
	.string "{PLAYER} showed you a piece of it\n"
	.string "tonight. This is the whole of it.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_4:
# 763 "data/scripts/tarc3_accusation.pory"
	.string "My father was Isao Zaiki.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_5:
# 764 "data/scripts/tarc3_accusation.pory"
	.string "As you know, Hatamoto Corp took his\n"
	.string "company. He killed himself the spring\l"
	.string "after. I was fifteen.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_6:
# 765 "data/scripts/tarc3_accusation.pory"
	.string "I joined the Corporation under a name\n"
	.string "that wasn't mine, and I did it to take\l"
	.string "something from your grandfather.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_7:
# 766 "data/scripts/tarc3_accusation.pory"
	.string "Then I worked beside you, Natsue.\p"
	.string "I fell hopelessly in love.\p"
	.string "I slowly lost interest in revenge.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_8:
# 767 "data/scripts/tarc3_accusation.pory"
	.string "Gozo called me into that cabin before\n"
	.string "dinner because he knew.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_9:
# 769 "data/scripts/tarc3_accusation.pory"
	.string "He knew?$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_10:
# 771 "data/scripts/tarc3_accusation.pory"
	.string "For months. He had all of it. The name,\n"
	.string "my father, the year I joined.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_11:
# 772 "data/scripts/tarc3_accusation.pory"
	.string "He looked at me and he said, 'I see the\n"
	.string "man Natsue chose.'$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_12:
# 773 "data/scripts/tarc3_accusation.pory"
	.string "Then he told me to sit down and eat with\n"
	.string "his family.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_13:
# 783 "data/scripts/tarc3_accusation.pory"
	.string "...So why you.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_14:
# 784 "data/scripts/tarc3_accusation.pory"
	.string "I did everything he asked of me. I never\n"
	.string "asked him twice.\p"
	.string "I said thank you, and I left the room.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_15:
# 785 "data/scripts/tarc3_accusation.pory"
	.string "Why you, and not me?\p"
	.string "It isn't fair.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_16:
# 787 "data/scripts/tarc3_accusation.pory"
	.string "...No. It isn't.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_17:
# 788 "data/scripts/tarc3_accusation.pory"
	.string "You still didn't have to kill him.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_18:
# 792 "data/scripts/tarc3_accusation.pory"
	.string "Suzuki. Make arrangements with the\n"
	.string "police for when we arrive.$"

tarc3_Accusation_EventScript_PerfectTakeshi_Text_19:
# 795 "data/scripts/tarc3_accusation.pory"
	.string "...Madam.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_0:
# 808 "data/scripts/tarc3_accusation.pory"
	.string "Well?$"

tarc3_Accusation_EventScript_GoodAnswer_Text_1:
# 810 "data/scripts/tarc3_accusation.pory"
	.string "...You're right.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_2:
# 811 "data/scripts/tarc3_accusation.pory"
	.string "About all of it.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_3:
# 813 "data/scripts/tarc3_accusation.pory"
	.string "Ichiro...$"

tarc3_Accusation_EventScript_GoodAnswer_Text_4:
# 815 "data/scripts/tarc3_accusation.pory"
	.string "I killed him.\p"
	.string "I killed Tatsuo as well - he saw me at\n"
	.string "the rail and he called out to me.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_5:
# 816 "data/scripts/tarc3_accusation.pory"
	.string "You can all stop looking at Takeshi.$"

tarc3_Accusation_EventScript_GoodAnswer_Text_6:
# 818 "data/scripts/tarc3_accusation.pory"
	.string "But why? In Arceus' name, why?$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_0:
# 841 "data/scripts/tarc3_accusation.pory"
	.string "...It was the money.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_1:
# 842 "data/scripts/tarc3_accusation.pory"
	.string "Eleven years he paid for me, and he\n"
	.string "never let a month go past without\l"
	.string "reminding me of it.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_2:
# 843 "data/scripts/tarc3_accusation.pory"
	.string "On the deck he told you he was finished.\p"
	.string "He said it where I could hear him\n"
	.string "because he wanted me to hear him.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_3:
# 844 "data/scripts/tarc3_accusation.pory"
	.string "Two terms left and nothing behind me.\n"
	.string "I'd have gone home with nothing.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_4:
# 847 "data/scripts/tarc3_accusation.pory"
	.string "You killed my father over school fees.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_5:
# 851 "data/scripts/tarc3_accusation.pory"
	.string "Arceus help us.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_6:
# 859 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(That is not it.)$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_7:
# 862 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(That was never it - but the evidence I\n"
	.string "presented did not tell the full story.)$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_8:
# 866 "data/scripts/tarc3_accusation.pory"
	.string "That is not the whole reason.$"

tarc3_Accusation_EventScript_GoodMotiveKept_Text_9:
# 868 "data/scripts/tarc3_accusation.pory"
	.string "It's why.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_0:
# 878 "data/scripts/tarc3_accusation.pory"
	.string "...Money.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_1:
# 880 "data/scripts/tarc3_accusation.pory"
	.string "Money.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_2:
# 881 "data/scripts/tarc3_accusation.pory"
	.string "We all heard what it was, Ichiro. Every\n"
	.string "one of us, standing in this room.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_3:
# 883 "data/scripts/tarc3_accusation.pory"
	.string "You heard about some drawings.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_4:
# 884 "data/scripts/tarc3_accusation.pory"
	.string "Boys draw.\p"
	.string "It was money.$"

tarc3_Accusation_EventScript_GoodMotiveDenied_Text_5:
# 890 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(He will deny her to the last.)$"

tarc3_Accusation_EventScript_GoodAnswerEnough_Text_0:
# 901 "data/scripts/tarc3_accusation.pory"
	.string "...Isn't it enough? You've got what you\n"
	.string "came for.$"

tarc3_Accusation_EventScript_GoodAnswerEnough_Text_1:
# 903 "data/scripts/tarc3_accusation.pory"
	.string "Let it be enough, {PLAYER}.$"

tarc3_Accusation_EventScript_GoodCloset_Text_0:
# 912 "data/scripts/tarc3_accusation.pory"
	.string "One further matter. Akie - your closet.\p"
	.string "I found Takeshi in it before I called\n"
	.string "you all in here. You should have been\l"
	.string "told then.$"

tarc3_Accusation_EventScript_GoodCloset_Text_1:
# 914 "data/scripts/tarc3_accusation.pory"
	.string "...Do what you like. It hardly matters\n"
	.string "now.$"

tarc3_Accusation_EventScript_GoodCloset_Text_2:
# 919 "data/scripts/tarc3_accusation.pory"
	.string "...Of course he was.$"

tarc3_Accusation_EventScript_GoodCloset_Text_3:
# 921 "data/scripts/tarc3_accusation.pory"
	.string "Nobody asks Takeshi anything. They\n"
	.string "have their killer, and they have\l"
	.string "stopped listening.$"

tarc3_Accusation_EventScript_GoodCloset_Text_4:
# 923 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi.$"

tarc3_Accusation_EventScript_GoodCloset_Text_5:
# 925 "data/scripts/tarc3_accusation.pory"
	.string "...Not here.$"

tarc3_Accusation_EventScript_GoodStern_Text_0:
# 945 "data/scripts/tarc3_accusation.pory"
	.string "Later, at the stern rail. Only the four\n"
	.string "of them. The family stayed below.$"

tarc3_Accusation_EventScript_GoodStern_Text_1:
# 949 "data/scripts/tarc3_accusation.pory"
	.string "...No. Not since the first month I worked\n"
	.string "beside you.$"

tarc3_Accusation_EventScript_GoodStern_Text_2:
# 950 "data/scripts/tarc3_accusation.pory"
	.string "My father was Isao Zaiki.\p"
	.string "Hatamoto Corp took his company and he\n"
	.string "killed himself the spring after.$"

tarc3_Accusation_EventScript_GoodStern_Text_3:
# 951 "data/scripts/tarc3_accusation.pory"
	.string "I joined under a name that wasn't mine\n"
	.string "because I meant to take something from\l"
	.string "your grandfather.$"

tarc3_Accusation_EventScript_GoodStern_Text_4:
# 955 "data/scripts/tarc3_accusation.pory"
	.string "He knew before dinner. He'd known for\n"
	.string "months.$"

tarc3_Accusation_EventScript_GoodStern_Text_5:
# 957 "data/scripts/tarc3_accusation.pory"
	.string "And he said nothing?$"

tarc3_Accusation_EventScript_GoodStern_Text_6:
# 959 "data/scripts/tarc3_accusation.pory"
	.string "He said, 'I see the man Natsue chose.'\n"
	.string "Then he told me to go and eat.$"

tarc3_Accusation_EventScript_GoodStern_Text_7:
# 962 "data/scripts/tarc3_accusation.pory"
	.string "That's the kindest thing he ever did.$"

tarc3_Accusation_EventScript_GoodStern_Text_8:
# 963 "data/scripts/tarc3_accusation.pory"
	.string "And he did it where nobody could see it.$"

tarc3_Accusation_EventScript_GoodStern_Text_9:
# 965 "data/scripts/tarc3_accusation.pory"
	.string "Comfey lifts from her shoulder and\n"
	.string "winds a garland around both their\l"
	.string "wrists.$"

tarc3_Accusation_EventScript_BadAnswer_Text_0:
# 977 "data/scripts/tarc3_accusation.pory"
	.string "May I?$"

tarc3_Accusation_EventScript_BadAnswer_Text_1:
# 982 "data/scripts/tarc3_accusation.pory"
	.string "The crumbs. In the blood, by the door.\n"
	.string "That's the one you keep coming back to.$"

tarc3_Accusation_EventScript_BadAnswer_Text_2:
# 983 "data/scripts/tarc3_accusation.pory"
	.string "I've sketched on the salon deck every\n"
	.string "day since Florio. In the same chair.$"

tarc3_Accusation_EventScript_BadAnswer_Text_3:
# 984 "data/scripts/tarc3_accusation.pory"
	.string "Suzuki. Is that chair cleared each\n"
	.string "evening?$"

tarc3_Accusation_EventScript_BadAnswer_Text_4:
# 986 "data/scripts/tarc3_accusation.pory"
	.string "...It is.$"

tarc3_Accusation_EventScript_BadAnswer_Text_5:
# 988 "data/scripts/tarc3_accusation.pory"
	.string "Then it's anyone's shoe. Any one of you.\n"
	.string "Including me, walking to dinner.$"

tarc3_Accusation_EventScript_BadAnswer_Text_6:
# 989 "data/scripts/tarc3_accusation.pory"
	.string "You should also know the bread I use\n"
	.string "goes hard inside a day.$"

tarc3_Accusation_EventScript_BadAnswer_Text_7:
# 990 "data/scripts/tarc3_accusation.pory"
	.string "If the crumb you found was dry, it\n"
	.string "didn't come off my cuff tonight.$"

tarc3_Accusation_EventScript_BadAnswer_Text_8:
# 994 "data/scripts/tarc3_accusation.pory"
	.string "I'm trying to help you.$"

tarc3_Accusation_EventScript_BadAnswer_Text_9:
# 995 "data/scripts/tarc3_accusation.pory"
	.string "I want the man who did this as much as\n"
	.string "anyone in this room does.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_0:
# 1006 "data/scripts/tarc3_accusation.pory"
	.string "Whatever you found, ask where else it\n"
	.string "could have come from. That's all I'd say.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_1:
# 1007 "data/scripts/tarc3_accusation.pory"
	.string "Nine people have walked every corridor\n"
	.string "on this ship tonight.\p"
	.string "Eight of them are standing in this room.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_2:
# 1008 "data/scripts/tarc3_accusation.pory"
	.string "Suzuki. When are the decks swept?$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_3:
# 1010 "data/scripts/tarc3_accusation.pory"
	.string "...Each evening.$"

tarc3_Accusation_EventScript_BadAnswerGeneric_Text_4:
# 1012 "data/scripts/tarc3_accusation.pory"
	.string "I sketch on the salon deck every day, in\n"
	.string "the same chair.\p"
	.string "Anything I've touched could ride to a\n"
	.string "doorway on somebody's shoe.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_0:
# 1038 "data/scripts/tarc3_accusation.pory"
	.string "Then let us discuss the sketchbook I\n"
	.string "took from your cabin.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_1:
# 1049 "data/scripts/tarc3_accusation.pory"
	.string "That's enough.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_2:
# 1056 "data/scripts/tarc3_accusation.pory"
	.string "...That's my sketchbook, yes.$"

tarc3_Accusation_EventScript_BadNearMissBook_Text_3:
# 1057 "data/scripts/tarc3_accusation.pory"
	.string "I draw people. I'm an art student.$"

tarc3_Accusation_EventScript_BadWall_Text_0:
# 1065 "data/scripts/tarc3_accusation.pory"
	.string "He's had enough from this family for one\n"
	.string "voyage. Leave him be.$"

tarc3_Accusation_EventScript_BadWall_Text_1:
# 1069 "data/scripts/tarc3_accusation.pory"
	.string "{FONT_NARROW}(He said that to me two hours ago, in the\n"
	.string "dining room.)$"

tarc3_Accusation_EventScript_BadWall_Text_2:
# 1073 "data/scripts/tarc3_accusation.pory"
	.string "My father is dead. Tatsuo is dead.$"

tarc3_Accusation_EventScript_BadWall_Text_3:
# 1074 "data/scripts/tarc3_accusation.pory"
	.string "And I have spent six hours of my life\n"
	.string "waiting on you.$"

tarc3_Accusation_EventScript_BadWall_Text_4:
# 1075 "data/scripts/tarc3_accusation.pory"
	.string "Whatever you are where you come from,\n"
	.string "you are nothing here.\p"
	.string "You are a passenger my niece took pity\n"
	.string "on at a dock.$"

tarc3_Accusation_EventScript_BadWall_Text_5:
# 1076 "data/scripts/tarc3_accusation.pory"
	.string "Whoever told you that you were clever\n"
	.string "lied to you.$"

tarc3_Accusation_EventScript_BadCloset_Text_0:
# 1085 "data/scripts/tarc3_accusation.pory"
	.string "There is one more thing, and you had\n"
	.string "better hear it from me.$"

tarc3_Accusation_EventScript_BadCloset_Text_1:
# 1086 "data/scripts/tarc3_accusation.pory"
	.string "Takeshi is in this room. He is behind\n"
	.string "that closet door.$"

tarc3_Accusation_EventScript_BadCloset_Text_2:
# 1090 "data/scripts/tarc3_accusation.pory"
	.string "...In my closet.$"

tarc3_Accusation_EventScript_BadCloset_Text_3:
# 1091 "data/scripts/tarc3_accusation.pory"
	.string "He has been standing in my closet while\n"
	.string "we all stood here.$"

tarc3_Accusation_EventScript_BadCloset_Text_4:
# 1093 "data/scripts/tarc3_accusation.pory"
	.string "I found him when I searched these\n"
	.string "cabins, shortly before I asked you all\l"
	.string "to gather.$"

tarc3_Accusation_EventScript_BadCloset_Text_5:
# 1095 "data/scripts/tarc3_accusation.pory"
	.string "You found him.$"

tarc3_Accusation_EventScript_BadCloset_Text_6:
# 1096 "data/scripts/tarc3_accusation.pory"
	.string "You found him, and you said nothing.$"

tarc3_Accusation_EventScript_BadCloset_Text_7:
# 1098 "data/scripts/tarc3_accusation.pory"
	.string "He was in fear of his life. He asked me\n"
	.string "to prove it before I called anyone, and\l"
	.string "I judged...$"

tarc3_Accusation_EventScript_BadCloset_Text_8:
# 1100 "data/scripts/tarc3_accusation.pory"
	.string "You knew where he was, and you let us\n"
	.string "stand here.\p"
	.string "You pointed at every one of us with the\n"
	.string "man behind that door.$"

tarc3_Accusation_EventScript_BadCloset_Text_9:
# 1105 "data/scripts/tarc3_accusation.pory"
	.string "Don't. He was helping me.$"

tarc3_Accusation_EventScript_BadCloset_Text_10:
# 1107 "data/scripts/tarc3_accusation.pory"
	.string "Yes. I'm sure he was.$"

tarc3_Accusation_EventScript_BadCloset_Text_11:
# 1108 "data/scripts/tarc3_accusation.pory"
	.string "There's your accomplice, Suzuki.$"

tarc3_Accusation_EventScript_BadCloset_Text_12:
# 1109 "data/scripts/tarc3_accusation.pory"
	.string "He kept him for exactly as long as it\n"
	.string "suited him, and produced him the moment\l"
	.string "it did not.$"

tarc3_Accusation_EventScript_BadCloset_Text_13:
# 1114 "data/scripts/tarc3_accusation.pory"
	.string "I asked you to find him, {PLAYER}.$"

tarc3_Accusation_EventScript_BadCloset_Text_14:
# 1115 "data/scripts/tarc3_accusation.pory"
	.string "You found him, and you did not tell me.$"

tarc3_Accusation_EventScript_BadCloset_Text_15:
# 1116 "data/scripts/tarc3_accusation.pory"
	.string "...I think you had better go up on deck.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_0:
# 1129 "data/scripts/tarc3_accusation.pory"
	.string "Well? Say something. Anything at all.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_1:
# 1131 "data/scripts/tarc3_accusation.pory"
	.string "...There is a part of this you don't have.\p"
	.string "You should hear it from me, and not read\n"
	.string "it somewhere in a year.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_2:
# 1133 "data/scripts/tarc3_accusation.pory"
	.string "You heard tonight what Gozo did to my\n"
	.string "father. This is the rest of it.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_3:
# 1135 "data/scripts/tarc3_accusation.pory"
	.string "You know my father was Isao Zaiki.\p"
	.string "Hatamoto Corp took his company and he\n"
	.string "killed himself the spring after.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_4:
# 1136 "data/scripts/tarc3_accusation.pory"
	.string "I was fifteen.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_5:
# 1137 "data/scripts/tarc3_accusation.pory"
	.string "I joined the Corporation under a name\n"
	.string "that wasn't mine, to take something\l"
	.string "from your grandfather.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_6:
# 1139 "data/scripts/tarc3_accusation.pory"
	.string "...Arceus help us.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_7:
# 1143 "data/scripts/tarc3_accusation.pory"
	.string "Gozo called me into his cabin before\n"
	.string "dinner and told me he had known for\l"
	.string "months.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_8:
# 1145 "data/scripts/tarc3_accusation.pory"
	.string "He knew. And an hour later he was dead.$"

tarc3_Accusation_EventScript_WorstAnswer_Text_9:
# 1146 "data/scripts/tarc3_accusation.pory"
	.string "Do you hear yourself?$"

tarc3_Accusation_EventScript_WorstAnswer_Text_10:
# 1149 "data/scripts/tarc3_accusation.pory"
	.string "I hear myself.$"

tarc3_Accusation_EventScript_WorstRoom_Text_0:
# 1158 "data/scripts/tarc3_accusation.pory"
	.string "...I'm sorry. I can't. I can't stand here\n"
	.string "and say it isn't true.$"

tarc3_Accusation_EventScript_WorstRoom_Text_1:
# 1160 "data/scripts/tarc3_accusation.pory"
	.string "I don't care.$"

tarc3_Accusation_EventScript_WorstRoom_Text_2:
# 1161 "data/scripts/tarc3_accusation.pory"
	.string "My husband is on the deck under a\n"
	.string "tablecloth. Somebody put him there.\p"
	.string "If it's him, it's him.$"

tarc3_Accusation_EventScript_WorstIchiro_Text_0:
# 1180 "data/scripts/tarc3_accusation.pory"
	.string "Natsue.$"

tarc3_Accusation_EventScript_WorstIchiro_Text_1:
# 1181 "data/scripts/tarc3_accusation.pory"
	.string "Let me walk you back to your cabin.$"

tarc3_Accusation_EventScript_WorstIchiro_Text_2:
# 1182 "data/scripts/tarc3_accusation.pory"
	.string "You shouldn't have to watch this part.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_0:
# 1207 "data/scripts/tarc3_accusation.pory"
	.string "Well. There it is.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_1:
# 1209 "data/scripts/tarc3_accusation.pory"
	.string "There what is, madam?$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_2:
# 1211 "data/scripts/tarc3_accusation.pory"
	.string "You heard the case.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_3:
# 1213 "data/scripts/tarc3_accusation.pory"
	.string "I heard a flower and a grudge.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_4:
# 1214 "data/scripts/tarc3_accusation.pory"
	.string "I bolted a man into a storeroom once\n"
	.string "tonight on the strength of that flower.\p"
	.string "I will not do it twice.$"

tarc3_Accusation_EventScript_WorstRefusedAnswer_Text_5:
# 1216 "data/scripts/tarc3_accusation.pory"
	.string "...He's right, Mariko. There is nothing\n"
	.string "here a court would touch.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_0:
# 1225 "data/scripts/tarc3_accusation.pory"
	.string "You should still hear the rest of it. All\n"
	.string "of you.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_1:
# 1227 "data/scripts/tarc3_accusation.pory"
	.string "You heard tonight what Gozo did to my\n"
	.string "father. Here is the rest.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_2:
# 1229 "data/scripts/tarc3_accusation.pory"
	.string "You know my father was Isao Zaiki.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_3:
# 1230 "data/scripts/tarc3_accusation.pory"
	.string "Gozo ruined him, and I joined this\n"
	.string "company under a false name to take\l"
	.string "something back.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_4:
# 1232 "data/scripts/tarc3_accusation.pory"
	.string "There! Out of his own mouth!$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_5:
# 1234 "data/scripts/tarc3_accusation.pory"
	.string "A name is not a knife, madam.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_6:
# 1240 "data/scripts/tarc3_accusation.pory"
	.string "I don't care what he wanted.$"

tarc3_Accusation_EventScript_WorstRefusedTakeshi_Text_7:
# 1241 "data/scripts/tarc3_accusation.pory"
	.string "My husband is under a tablecloth on\n"
	.string "that deck, and not one of you can tell\l"
	.string "me who put him there.$"

tarc3_Accusation_EventScript_Depart_Text_0:
# 1281 "data/scripts/tarc3_accusation.pory"
	.string "Well. The room is empty, and there is\n"
	.string "nobody left to perform for.$"

tarc3_Accusation_EventScript_Depart_Text_1:
# 1282 "data/scripts/tarc3_accusation.pory"
	.string "You may stop standing like that.$"

tarc3_Accusation_EventScript_Depart_Text_2:
# 1291 "data/scripts/tarc3_accusation.pory"
	.string "...There. The harbour.$"

tarc3_Accusation_EventScript_Depart_Text_3:
# 1292 "data/scripts/tarc3_accusation.pory"
	.string "Gather yourself, {PLAYER} Edgeworth.\p"
	.string "It is time to depart.$"

tarc3_Accusation_EventScript_Depart_Text_4:
# 1296 "data/scripts/tarc3_accusation.pory"
	.string "(debug: one final scene to come)$"
