tarc3_Recon_EventScript_Begin::
# 5 "data/scripts/tarc3_gozo_reconstruction.pory"
	setvar VAR_TEMP_8, 0
# 6 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 7 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Begin_Text_1
# 8 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Begin_Text_2
# 9 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 10 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 11 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 12 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1
	return


tarc3_Recon_EventScript_Q1::
# 18 "data/scripts/tarc3_gozo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 19 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 20 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1_Text_0
# 21 "data/scripts/tarc3_gozo_reconstruction.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tarc3_Recon_EventScript_Q1_Movement_0
# 22 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1_Text_1
# 23 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1_Text_2
# 24 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 25 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 26 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 27 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1Ask
	return


tarc3_Recon_EventScript_Q1Ask::
# 31 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 32 "data/scripts/tarc3_gozo_reconstruction.pory"
	message tarc3_Recon_EventScript_Q1Ask_Text_0
# 33 "data/scripts/tarc3_gozo_reconstruction.pory"
	waitmessage
# 34 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q1Ask_Text_1, 0
# 35 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q1Ask_Text_2, 1
# 36 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q1Ask_Text_3, 2
# 37 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 38 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 39 "data/scripts/tarc3_gozo_reconstruction.pory"
	switch VAR_RESULT
# 40 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 0, tarc3_Recon_EventScript_Q1Ask_2
# 42 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 1, tarc3_Recon_EventScript_Q1Ask_3
# 45 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1Right
	return

tarc3_Recon_EventScript_Q1Ask_2:
# 41 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1WrongWindow
	return

tarc3_Recon_EventScript_Q1Ask_3:
# 43 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1WrongKey
	return


tarc3_Recon_EventScript_Q1WrongWindow::
# 50 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 51 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1WrongWindow_Text_1
# 52 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 53 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 54 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1Miss
	return


tarc3_Recon_EventScript_Q1WrongKey::
# 58 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 59 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1WrongKey_Text_0
# 60 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1WrongKey_Text_1
# 61 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 62 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 63 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1Miss
	return


tarc3_Recon_EventScript_Q1Miss::
# 67 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 68 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_Recon_EventScript_Q1Give
# 69 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 70 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q1Ask
	return


tarc3_Recon_EventScript_Q1Right::
# 74 "data/scripts/tarc3_gozo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_Recon_EventScript_Q1Right_2
tarc3_Recon_EventScript_Q1Right_1:
# 77 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 78 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1Right_Text_0
# 79 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1Right_Text_1
# 80 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 81 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 82 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 83 "data/scripts/tarc3_gozo_reconstruction.pory"
	playse SE_PIN
# 84 "data/scripts/tarc3_gozo_reconstruction.pory"
	applymovement LOCALID_GOZOROOM_AKIE, tarc3_Recon_EventScript_Q1Right_Movement_0
# 85 "data/scripts/tarc3_gozo_reconstruction.pory"
	waitmovement 0
# 86 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1Right_Text_2
# 87 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1Right_Text_3
# 88 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 89 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 90 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 91 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2
	return

tarc3_Recon_EventScript_Q1Right_2:
# 75 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_Recon_EventScript_Q1Right_1


tarc3_Recon_EventScript_Q1Give::
# 95 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 96 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1Give_Text_0
# 97 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q1Give_Text_1
# 98 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 99 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 100 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 101 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2
	return


tarc3_Recon_EventScript_Q2::
# 107 "data/scripts/tarc3_gozo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 108 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1Right_Text_2
# 109 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2_Text_0
# 110 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 111 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2_Text_1
# 112 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 113 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 114 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 115 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2Ask
	return


tarc3_Recon_EventScript_Q2Ask::
# 119 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 120 "data/scripts/tarc3_gozo_reconstruction.pory"
	message tarc3_Recon_EventScript_Q2Ask_Text_0
# 121 "data/scripts/tarc3_gozo_reconstruction.pory"
	waitmessage
# 122 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q2Ask_Text_1, 0
# 123 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q2Ask_Text_2, 1
# 124 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q2Ask_Text_3, 2
# 125 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 126 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 127 "data/scripts/tarc3_gozo_reconstruction.pory"
	switch VAR_RESULT
# 128 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 0, tarc3_Recon_EventScript_Q2Ask_2
# 130 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 2, tarc3_Recon_EventScript_Q2Ask_3
# 133 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2Right
	return

tarc3_Recon_EventScript_Q2Ask_2:
# 129 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2WrongMotive
	return

tarc3_Recon_EventScript_Q2Ask_3:
# 131 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2WrongFrail
	return


tarc3_Recon_EventScript_Q2WrongMotive::
# 138 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1_Text_1
# 139 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2WrongMotive_Text_0
# 140 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 141 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2WrongMotive_Text_1
# 142 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 143 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 144 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2Miss
	return


tarc3_Recon_EventScript_Q2WrongFrail::
# 148 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 149 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2WrongFrail_Text_0
# 150 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2WrongFrail_Text_1
# 151 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 152 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 153 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2Miss
	return


tarc3_Recon_EventScript_Q2Miss::
# 157 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 158 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_Recon_EventScript_Q2Give
# 159 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 160 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q2Ask
	return


tarc3_Recon_EventScript_Q2Right::
# 164 "data/scripts/tarc3_gozo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_Recon_EventScript_Q2Right_2
tarc3_Recon_EventScript_Q2Right_1:
# 167 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 168 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2Right_Text_0
# 169 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2Right_Text_1
# 170 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2Right_Text_2
# 171 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 172 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 173 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 174 "data/scripts/tarc3_gozo_reconstruction.pory"
	playse SE_PIN
# 175 "data/scripts/tarc3_gozo_reconstruction.pory"
	applymovement LOCALID_GOZOROOM_JOJI, tarc3_Recon_EventScript_Q1Right_Movement_0
# 176 "data/scripts/tarc3_gozo_reconstruction.pory"
	waitmovement 0
# 177 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q2Right_Text_3
# 178 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2Right_Text_4
# 179 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1Right_Text_2
# 180 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2Right_Text_5
# 181 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 182 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 183 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 184 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3
	return

tarc3_Recon_EventScript_Q2Right_2:
# 165 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_Recon_EventScript_Q2Right_1


tarc3_Recon_EventScript_Q2Give::
# 188 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 189 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2Give_Text_0
# 190 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q2Give_Text_1
# 191 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 192 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 193 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 194 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3
	return


tarc3_Recon_EventScript_Q3::
# 200 "data/scripts/tarc3_gozo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 201 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1_Text_1
# 202 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3_Text_0
# 203 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 204 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3_Text_1
# 205 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 206 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 207 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 208 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3Ask
	return


tarc3_Recon_EventScript_Q3Ask::
# 212 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 213 "data/scripts/tarc3_gozo_reconstruction.pory"
	message tarc3_Recon_EventScript_Q3Ask_Text_0
# 214 "data/scripts/tarc3_gozo_reconstruction.pory"
	waitmessage
# 215 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q3Ask_Text_1, 0
# 216 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q3Ask_Text_2, 1
# 217 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q3Ask_Text_3, 2
# 218 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 219 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 220 "data/scripts/tarc3_gozo_reconstruction.pory"
	switch VAR_RESULT
# 221 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 0, tarc3_Recon_EventScript_Q3Ask_2
# 223 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 1, tarc3_Recon_EventScript_Q3Ask_3
# 226 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3Right
	return

tarc3_Recon_EventScript_Q3Ask_2:
# 222 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3WrongWall
	return

tarc3_Recon_EventScript_Q3Ask_3:
# 224 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3WrongCorridor
	return


tarc3_Recon_EventScript_Q3WrongWall::
# 231 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 232 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3WrongWall_Text_0
# 233 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3WrongWall_Text_1
# 234 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 235 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 236 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3Miss
	return


tarc3_Recon_EventScript_Q3WrongCorridor::
# 240 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 241 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3WrongCorridor_Text_0
# 242 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3WrongCorridor_Text_1
# 243 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 244 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 245 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3Miss
	return


tarc3_Recon_EventScript_Q3Miss::
# 249 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 250 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_Recon_EventScript_Q3Give
# 251 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 252 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q3Ask
	return


tarc3_Recon_EventScript_Q3Right::
# 256 "data/scripts/tarc3_gozo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_Recon_EventScript_Q3Right_2
tarc3_Recon_EventScript_Q3Right_1:
# 259 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 260 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3Right_Text_0
# 261 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3Right_Text_1
# 262 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3Right_Text_2
# 263 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 264 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 265 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 266 "data/scripts/tarc3_gozo_reconstruction.pory"
	playse SE_PIN
# 267 "data/scripts/tarc3_gozo_reconstruction.pory"
	applymovement LOCALID_GOZOROOM_SUZUKI, tarc3_Recon_EventScript_Q1Right_Movement_0
# 268 "data/scripts/tarc3_gozo_reconstruction.pory"
	waitmovement 0
# 269 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q3Right_Text_3
# 270 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3Right_Text_4
# 271 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 272 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 273 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 274 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4
	return

tarc3_Recon_EventScript_Q3Right_2:
# 257 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_Recon_EventScript_Q3Right_1


tarc3_Recon_EventScript_Q3Give::
# 278 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 279 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3Give_Text_0
# 280 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q3Give_Text_1
# 281 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 282 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 283 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 284 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4
	return


tarc3_Recon_EventScript_Q4::
# 290 "data/scripts/tarc3_gozo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 291 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q4_Text_0
# 292 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4_Text_1
# 293 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 294 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 295 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 296 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4Ask
	return


tarc3_Recon_EventScript_Q4Ask::
# 300 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 301 "data/scripts/tarc3_gozo_reconstruction.pory"
	message tarc3_Recon_EventScript_Q4Ask_Text_0
# 302 "data/scripts/tarc3_gozo_reconstruction.pory"
	waitmessage
# 303 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q4Ask_Text_1, 0
# 304 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q4Ask_Text_2, 1
# 305 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultipush tarc3_Recon_EventScript_Q4Ask_Text_3, 2
# 306 "data/scripts/tarc3_gozo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 307 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 308 "data/scripts/tarc3_gozo_reconstruction.pory"
	switch VAR_RESULT
# 309 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 0, tarc3_Recon_EventScript_Q4Ask_2
# 311 "data/scripts/tarc3_gozo_reconstruction.pory"
	case 2, tarc3_Recon_EventScript_Q4Ask_3
# 314 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4Right
	return

tarc3_Recon_EventScript_Q4Ask_2:
# 310 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4WrongKey
	return

tarc3_Recon_EventScript_Q4Ask_3:
# 312 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4WrongOpen
	return


tarc3_Recon_EventScript_Q4WrongKey::
# 319 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 320 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4WrongKey_Text_0
# 321 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4WrongKey_Text_1
# 322 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 323 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 324 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4Miss
	return


tarc3_Recon_EventScript_Q4WrongOpen::
# 328 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q3Right_Text_3
# 329 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4WrongOpen_Text_0
# 330 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 331 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4WrongOpen_Text_1
# 332 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 333 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 334 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4Miss
	return


tarc3_Recon_EventScript_Q4Miss::
# 338 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 339 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_Recon_EventScript_Q4Give
# 340 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 341 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Q4Ask
	return


tarc3_Recon_EventScript_Q4Right::
# 345 "data/scripts/tarc3_gozo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_Recon_EventScript_Q4Right_2
tarc3_Recon_EventScript_Q4Right_1:
# 348 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 349 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4Right_Text_0
# 350 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 351 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 352 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 30
# 353 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 354 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4Right_Text_1
# 355 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 356 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 357 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto_if_set FLAG_TARC3_GOZO_FOUND_TRAIL, tarc3_Recon_EventScript_Q4Trail
# 358 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Closing
	return

tarc3_Recon_EventScript_Q4Right_2:
# 346 "data/scripts/tarc3_gozo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_Recon_EventScript_Q4Right_1


tarc3_Recon_EventScript_Q4Trail::
# 364 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 365 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4Trail_Text_0
# 366 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4Trail_Text_1
# 367 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 368 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 369 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 370 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Closing
	return


tarc3_Recon_EventScript_Q4Give::
# 374 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 375 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4Give_Text_0
# 376 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Q4Give_Text_1
# 377 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 378 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 379 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 380 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_Closing
	return


tarc3_Recon_EventScript_Closing::
# 386 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Begin_Text_0
# 387 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Closing_Text_0
# 388 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Closing_Text_1
# 389 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Closing_Text_2
# 390 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_Closing_Text_3
# 391 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 392 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 393 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 30
# 394 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto_if_ge VAR_TEMP_8, 4, tarc3_Recon_EventScript_ClosingBest
# 395 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto_if_ge VAR_TEMP_8, 2, tarc3_Recon_EventScript_ClosingFair
# 396 "data/scripts/tarc3_gozo_reconstruction.pory"
	goto tarc3_Recon_EventScript_ClosingPoor
	return


tarc3_Recon_EventScript_ClosingBest::
# 400 "data/scripts/tarc3_gozo_reconstruction.pory"
	fadeoutbgm 4
# 401 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 60
# 402 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 403 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingBest_Text_0
# 404 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 405 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 40
# 406 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q3Right_Text_3
# 407 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingBest_Text_1
# 408 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingBest_Text_2
# 409 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 410 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingBest_Text_3
# 411 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 412 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 413 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 414 "data/scripts/tarc3_gozo_reconstruction.pory"
	setflag FLAG_TARC3_GOZO_RECONSTRUCTED
	return


tarc3_Recon_EventScript_ClosingFair::
# 419 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q2Right_Text_3
# 420 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingFair_Text_0
# 421 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1_Text_1
# 422 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingFair_Text_1
# 423 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 424 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingFair_Text_2
# 425 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 426 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 427 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 428 "data/scripts/tarc3_gozo_reconstruction.pory"
	setflag FLAG_TARC3_GOZO_RECONSTRUCTED
	return


tarc3_Recon_EventScript_ClosingPoor::
# 433 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1_Text_1
# 434 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingPoor_Text_0
# 435 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_ClosingPoor_Text_1
# 436 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingPoor_Text_2
# 437 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker tarc3_Recon_EventScript_Q1WrongWindow_Text_0
# 438 "data/scripts/tarc3_gozo_reconstruction.pory"
	msgbox tarc3_Recon_EventScript_ClosingPoor_Text_3
# 439 "data/scripts/tarc3_gozo_reconstruction.pory"
	setspeaker NULL
# 440 "data/scripts/tarc3_gozo_reconstruction.pory"
	closemessage
# 441 "data/scripts/tarc3_gozo_reconstruction.pory"
	delay 20
# 442 "data/scripts/tarc3_gozo_reconstruction.pory"
	setflag FLAG_TARC3_GOZO_RECONSTRUCTED
	return


# 21 "data/scripts/tarc3_gozo_reconstruction.pory"
tarc3_Recon_EventScript_Q1_Movement_0:
# 21 "data/scripts/tarc3_gozo_reconstruction.pory"
	face_up
	step_end

# 84 "data/scripts/tarc3_gozo_reconstruction.pory"
tarc3_Recon_EventScript_Q1Right_Movement_0:
# 84 "data/scripts/tarc3_gozo_reconstruction.pory"
	emote_exclamation_mark
	step_end

tarc3_Recon_EventScript_Begin_Text_0:
# 6 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "{PLAYER}$"

tarc3_Recon_EventScript_Begin_Text_1:
# 7 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "I will not tell you who did this. I cannot\n"
	.string "yet, and I will not guess in front of a\l"
	.string "family.$"

tarc3_Recon_EventScript_Begin_Text_2:
# 8 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "I will tell you what happened in that\n"
	.string "doorway. That much the room has already\l"
	.string "said.$"

tarc3_Recon_EventScript_Q1_Text_0:
# 20 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "First. This cabin.$"

tarc3_Recon_EventScript_Q1_Text_1:
# 22 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Mariko$"

tarc3_Recon_EventScript_Q1_Text_2:
# 23 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "The cabin was locked. Suzuki opened it\n"
	.string "in front of all of us.$"

tarc3_Recon_EventScript_Q1Ask_Text_0:
# 32 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "{FONT_NARROW}(How did anybody get into that room, or out of\n"
	.string "it?)$"

tarc3_Recon_EventScript_Q1Ask_Text_1:
# 34 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Through the window$"

tarc3_Recon_EventScript_Q1Ask_Text_2:
# 35 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Using the spare key$"

tarc3_Recon_EventScript_Q1Ask_Text_3:
# 36 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Nobody did, either way$"

tarc3_Recon_EventScript_Q1WrongWindow_Text_0:
# 50 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "{RIVAL}$"

tarc3_Recon_EventScript_Q1WrongWindow_Text_1:
# 51 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "You put your hands on that window\n"
	.string "yourself. It has not opened since\l"
	.string "before Natsue was born.$"

tarc3_Recon_EventScript_Q1WrongKey_Text_0:
# 59 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "There is one spare, it is in Suzuki's\n"
	.string "pocket, and nine of you watched him\l"
	.string "take it out of there.$"

tarc3_Recon_EventScript_Q1WrongKey_Text_1:
# 60 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "If you intend to accuse the butler, do\n"
	.string "it in a sentence and not in a shrug.$"

tarc3_Recon_EventScript_Q1Right_Text_0:
# 78 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Nobody. One door, and one window that\n"
	.string "has not opened in years.$"

tarc3_Recon_EventScript_Q1Right_Text_1:
# 79 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "The door takes a key from the corridor\n"
	.string "and a latch from the inside. When Suzuki\l"
	.string "reached it, it was shut.$"

tarc3_Recon_EventScript_Q1Right_Text_2:
# 86 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Akie$"

tarc3_Recon_EventScript_Q1Right_Text_3:
# 87 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Thank you. That is precisely what I\n"
	.string "have been saying all evening.$"

tarc3_Recon_EventScript_Q1Give_Text_0:
# 96 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Nobody came through that window and\n"
	.string "nobody borrowed that key. The room was\l"
	.string "shut.$"

tarc3_Recon_EventScript_Q1Give_Text_1:
# 97 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "You walked past both of those facts to\n"
	.string "arrive at neither of them.$"

tarc3_Recon_EventScript_Q2_Text_0:
# 109 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Then he shut himself in and did it to\n"
	.string "himself. As I have said from the\l"
	.string "beginning.$"

tarc3_Recon_EventScript_Q2_Text_1:
# 111 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "No. And this room can prove it cannot\n"
	.string "have been that.$"

tarc3_Recon_EventScript_Q2Ask_Text_0:
# 120 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "{FONT_NARROW}(What is wrong with a man doing this to\n"
	.string "himself in a sealed room?)$"

tarc3_Recon_EventScript_Q2Ask_Text_1:
# 122 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He had no reason to$"

tarc3_Recon_EventScript_Q2Ask_Text_2:
# 123 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "There is no blade in here$"

tarc3_Recon_EventScript_Q2Ask_Text_3:
# 124 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He was too frail to manage it$"

tarc3_Recon_EventScript_Q2WrongMotive_Text_0:
# 139 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "You met my father this afternoon. Do\n"
	.string "not tell this family what he did and did\l"
	.string "not have reason to do.$"

tarc3_Recon_EventScript_Q2WrongMotive_Text_1:
# 141 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "She is right, and you have handed her\n"
	.string "the floor. A reason is not a proof.$"

tarc3_Recon_EventScript_Q2WrongFrail_Text_0:
# 149 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "A cabinet of medicine bottles tells you\n"
	.string "he was ill. It does not tell you what his\l"
	.string "arms could do.$"

tarc3_Recon_EventScript_Q2WrongFrail_Text_1:
# 150 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Argue from what is in this room, not\n"
	.string "from what is missing from the man.$"

tarc3_Recon_EventScript_Q2Right_Text_0:
# 168 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "There is no knife in this cabin. Not\n"
	.string "under the bed, not behind the couch,\l"
	.string "not in the bin.$"

tarc3_Recon_EventScript_Q2Right_Text_1:
# 169 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He was struck again and again. Whoever\n"
	.string "did it was not being efficient, they\l"
	.string "were being furious.$"

tarc3_Recon_EventScript_Q2Right_Text_2:
# 170 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "And a dead man does not put the blade\n"
	.string "somewhere else and then lock the door\l"
	.string "on himself.$"

tarc3_Recon_EventScript_Q2Right_Text_3:
# 177 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Joji$"

tarc3_Recon_EventScript_Q2Right_Text_4:
# 178 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "That is the question I asked earlier,\n"
	.string "and not one of you would look at me.$"

tarc3_Recon_EventScript_Q2Right_Text_5:
# 180 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "...$"

tarc3_Recon_EventScript_Q2Give_Text_0:
# 189 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "The knife, {PLAYER} Edgeworth. There\n"
	.string "is no knife.$"

tarc3_Recon_EventScript_Q2Give_Text_1:
# 190 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "A man may do that to himself. Not one of\n"
	.string "them has ever tidied the blade away\l"
	.string "afterwards.$"

tarc3_Recon_EventScript_Q3_Text_0:
# 202 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Then somebody was in that room with\n"
	.string "him, and the room was locked. You are\l"
	.string "talking in circles.$"

tarc3_Recon_EventScript_Q3_Text_1:
# 204 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Only because every one of you is\n"
	.string "looking at the wrong side of that door.$"

tarc3_Recon_EventScript_Q3Ask_Text_0:
# 213 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "{FONT_NARROW}(Where was Gozo standing when the first blow\n"
	.string "landed?)$"

tarc3_Recon_EventScript_Q3Ask_Text_1:
# 215 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Where he fell$"

tarc3_Recon_EventScript_Q3Ask_Text_2:
# 216 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Out in the corridor$"

tarc3_Recon_EventScript_Q3Ask_Text_3:
# 217 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "In the open doorway$"

tarc3_Recon_EventScript_Q3WrongWall_Text_0:
# 232 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Then his attacker was inside a room\n"
	.string "that was locked from within, and left it\l"
	.string "without unlocking anything.$"

tarc3_Recon_EventScript_Q3WrongWall_Text_1:
# 233 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "You have just made this worse. Look at\n"
	.string "the frame of the door.$"

tarc3_Recon_EventScript_Q3WrongCorridor_Text_0:
# 241 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Close, and therefore useless. In the\n"
	.string "corridor he is nowhere near that frame.$"

tarc3_Recon_EventScript_Q3WrongCorridor_Text_1:
# 242 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "The blood is on the frame itself,\n"
	.string "{PLAYER} Edgeworth. Be exact.$"

tarc3_Recon_EventScript_Q3Right_Text_0:
# 260 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "In the doorway. Look at the frame.$"

tarc3_Recon_EventScript_Q3Right_Text_1:
# 261 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Blood is thrown across the jamb at\n"
	.string "chest height. That can only happen\l"
	.string "while the door stands open.$"

tarc3_Recon_EventScript_Q3Right_Text_2:
# 262 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "It was shut and locked when Suzuki\n"
	.string "reached it. So the wound came first. The\l"
	.string "door came after.$"

tarc3_Recon_EventScript_Q3Right_Text_3:
# 269 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Suzuki$"

tarc3_Recon_EventScript_Q3Right_Text_4:
# 270 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "...I walked past that frame. I looked\n"
	.string "straight at it, and all I saw was a\l"
	.string "flower.$"

tarc3_Recon_EventScript_Q3Give_Text_0:
# 279 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "The doorway. He was cut standing in the\n"
	.string "open doorway.$"

tarc3_Recon_EventScript_Q3Give_Text_1:
# 280 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Blood on the frame, with the door found\n"
	.string "shut.$"

tarc3_Recon_EventScript_Q4_Text_0:
# 291 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Kitaro$"

tarc3_Recon_EventScript_Q4_Text_1:
# 292 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Cut in the doorway. Found behind a\n"
	.string "locked door. Then who turned the lock?$"

tarc3_Recon_EventScript_Q4Ask_Text_0:
# 301 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "{FONT_NARROW}(Then who turned that lock?)$"

tarc3_Recon_EventScript_Q4Ask_Text_1:
# 303 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "The killer, with a key$"

tarc3_Recon_EventScript_Q4Ask_Text_2:
# 304 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Gozo turned it himself$"

tarc3_Recon_EventScript_Q4Ask_Text_3:
# 305 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "It was never locked$"

tarc3_Recon_EventScript_Q4WrongKey_Text_0:
# 320 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "We have been over the key. It did not\n"
	.string "leave Suzuki's pocket, and you have\l"
	.string "offered this room no reason to think it\l"
	.string "did.$"

tarc3_Recon_EventScript_Q4WrongKey_Text_1:
# 321 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Stop reaching outside that doorway.\n"
	.string "There is somebody standing in it.$"

tarc3_Recon_EventScript_Q4WrongOpen_Text_0:
# 329 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Forgive me, but it was locked. I put the\n"
	.string "key to it myself, in front of everyone\l"
	.string "here.$"

tarc3_Recon_EventScript_Q4WrongOpen_Text_1:
# 331 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Contradicted by the only witness who\n"
	.string "touched it. Try again.$"

tarc3_Recon_EventScript_Q4Right_Text_0:
# 349 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Gozo did.$"

tarc3_Recon_EventScript_Q4Right_Text_1:
# 354 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He was cut in his own doorway by a man\n"
	.string "he had opened the door to. He got that\l"
	.string "door shut, and he turned the latch\l"
	.string "against him.$"

tarc3_Recon_EventScript_Q4Trail_Text_0:
# 365 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "And the floor of that cabin says so. The\n"
	.string "smear runs inward from the threshold,\l"
	.string "even the whole way, with nothing pooled\l"
	.string "at the door.$"

tarc3_Recon_EventScript_Q4Trail_Text_1:
# 366 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He did not fall there and he was not\n"
	.string "dragged. He walked, bleeding, and he did\l"
	.string "not reach the far wall.$"

tarc3_Recon_EventScript_Q4Give_Text_0:
# 375 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Gozo turned it. Obviously Gozo turned\n"
	.string "it.$"

tarc3_Recon_EventScript_Q4Give_Text_1:
# 376 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He was cut in the doorway, he shut the\n"
	.string "door on the man who cut him, and he\l"
	.string "locked it. The sealed room is the\l"
	.string "victim's own work.$"

tarc3_Recon_EventScript_Closing_Text_0:
# 387 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "So. Gozo Hatamoto opened that door to\n"
	.string "somebody he was willing to open it to.$"

tarc3_Recon_EventScript_Closing_Text_1:
# 388 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He was struck in the doorway, more than\n"
	.string "once, and left standing. His attacker\l"
	.string "walked away with the blade.$"

tarc3_Recon_EventScript_Closing_Text_2:
# 389 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Gozo shut the door and locked it. Not to\n"
	.string "keep us out. To keep that man out.$"

tarc3_Recon_EventScript_Closing_Text_3:
# 390 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Nobody sealed this room in order to kill\n"
	.string "him. He sealed it trying to live.$"

tarc3_Recon_EventScript_ClosingBest_Text_0:
# 403 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Nobody in the corridor says anything at\n"
	.string "all.$"

tarc3_Recon_EventScript_ClosingBest_Text_1:
# 407 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "...He was thirty-one years my employer,\n"
	.string "and I never once heard that man ask\l"
	.string "anybody for help.$"

tarc3_Recon_EventScript_ClosingBest_Text_2:
# 408 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He would have shut that door. He would\n"
	.string "have shut it exactly like that.$"

tarc3_Recon_EventScript_ClosingBest_Text_3:
# 410 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Adequate, {PLAYER} Edgeworth.$"

tarc3_Recon_EventScript_ClosingFair_Text_0:
# 420 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "...It holds. I do not enjoy it, but it\n"
	.string "holds.$"

tarc3_Recon_EventScript_ClosingFair_Text_1:
# 422 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "It holds and it tells us nothing. You\n"
	.string "have described a door to us.$"

tarc3_Recon_EventScript_ClosingFair_Text_2:
# 424 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "He has described a murder to you, and\n"
	.string "every one of you was calling it a\l"
	.string "suicide four minutes ago.$"

tarc3_Recon_EventScript_ClosingPoor_Text_0:
# 434 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Most of that came out of her mouth and\n"
	.string "not yours.$"

tarc3_Recon_EventScript_ClosingPoor_Text_1:
# 435 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "Tatsuo$"

tarc3_Recon_EventScript_ClosingPoor_Text_2:
# 436 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "It rather did, didn't it.$"

tarc3_Recon_EventScript_ClosingPoor_Text_3:
# 438 "data/scripts/tarc3_gozo_reconstruction.pory"
	.string "The conclusion is sound and it is his.\n"
	.string "Whether he arrived at it with any grace\l"
	.string "is a matter between him and me.$"
