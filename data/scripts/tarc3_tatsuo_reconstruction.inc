tarc3_TatsuoRecon_EventScript_Begin::
# 5 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setvar VAR_TEMP_8, 0
# 6 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setvar VAR_TEMP_9, 3
# 7 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 8 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Begin_Text_1
# 9 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Begin_Text_2
# 10 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 11 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 12 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 13 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1
	return


tarc3_TatsuoRecon_EventScript_Q1::
# 19 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 20 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1_Text_0
# 21 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1_Text_1
# 22 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 23 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1_Text_2
# 24 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1_Text_3
# 25 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 26 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 27 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 28 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1Ask
	return


tarc3_TatsuoRecon_EventScript_Q1Ask::
# 32 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 33 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	message tarc3_TatsuoRecon_EventScript_Q1Ask_Text_0
# 34 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	waitmessage
# 35 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q1Ask_Text_1, 0
# 36 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q1Ask_Text_2, 1
# 37 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q1Ask_Text_3, 2
# 38 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 39 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 40 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	switch VAR_RESULT
# 41 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 0, tarc3_TatsuoRecon_EventScript_Q1Ask_2
# 43 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 1, tarc3_TatsuoRecon_EventScript_Q1Ask_3
# 46 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1Right
	return

tarc3_TatsuoRecon_EventScript_Q1Ask_2:
# 42 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1WrongAfter
	return

tarc3_TatsuoRecon_EventScript_Q1Ask_3:
# 44 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1WrongMon
	return


tarc3_TatsuoRecon_EventScript_Q1WrongAfter::
# 51 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 52 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_1
# 53 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_2
# 54 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 55 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 56 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1Miss
	return


tarc3_TatsuoRecon_EventScript_Q1WrongMon::
# 60 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 61 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1WrongMon_Text_0
# 62 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1WrongMon_Text_1
# 63 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 64 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 65 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1Miss
	return


tarc3_TatsuoRecon_EventScript_Q1Miss::
# 69 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 70 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_TatsuoRecon_EventScript_Q1Give
# 71 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 72 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1Ask
	return


tarc3_TatsuoRecon_EventScript_Q1Right::
# 76 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_TatsuoRecon_EventScript_Q1Right_2
tarc3_TatsuoRecon_EventScript_Q1Right_1:
# 79 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 80 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1Right_Text_0
# 81 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1Right_Text_1
# 82 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1Right_Text_2
# 83 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 84 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 85 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 86 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q1React
	return

tarc3_TatsuoRecon_EventScript_Q1Right_2:
# 77 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_TatsuoRecon_EventScript_Q1Right_1


tarc3_TatsuoRecon_EventScript_Q1React::
# 90 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	playse SE_PIN
# 91 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	applymovement LOCALID_FOREDECK_SUZUKI_2, tarc3_TatsuoRecon_EventScript_Q1React_Movement_0
# 92 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	waitmovement 0
# 93 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1React_Text_0
# 94 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1React_Text_1
# 95 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 96 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 97 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 98 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2Gate
	return


tarc3_TatsuoRecon_EventScript_Q1Give::
# 102 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 103 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1Give_Text_0
# 104 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q1Give_Text_1
# 105 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 106 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 107 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 108 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2Gate
	return


tarc3_TatsuoRecon_EventScript_Q2Gate::
# 114 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	checkevidence EVD_BLOODY_CLOTH
# 115 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_TatsuoRecon_EventScript_Q2
# 116 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3
	return


tarc3_TatsuoRecon_EventScript_Q2::
# 120 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 121 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setvar VAR_TEMP_9, 4
# 122 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2_Text_0
# 123 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2_Text_1
# 124 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 125 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2_Text_2
# 126 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 127 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 128 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 129 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2Ask
	return


tarc3_TatsuoRecon_EventScript_Q2Ask::
# 133 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 134 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	message tarc3_TatsuoRecon_EventScript_Q2Ask_Text_0
# 135 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	waitmessage
# 136 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q2Ask_Text_1, 0
# 137 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q2Ask_Text_2, 1
# 138 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q2Ask_Text_3, 2
# 139 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 140 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 141 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	switch VAR_RESULT
# 142 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 0, tarc3_TatsuoRecon_EventScript_Q2Ask_2
# 144 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 1, tarc3_TatsuoRecon_EventScript_Q2Ask_3
# 147 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2Right
	return

tarc3_TatsuoRecon_EventScript_Q2Ask_2:
# 143 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2WrongPipe
	return

tarc3_TatsuoRecon_EventScript_Q2Ask_3:
# 145 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2WrongHis
	return


tarc3_TatsuoRecon_EventScript_Q2WrongPipe::
# 152 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 153 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2WrongPipe_Text_0
# 154 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2WrongPipe_Text_1
# 155 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 156 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 157 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2Miss
	return


tarc3_TatsuoRecon_EventScript_Q2WrongHis::
# 161 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_0
# 162 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_1
# 163 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 164 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_2
# 165 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 166 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 167 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2Miss
	return


tarc3_TatsuoRecon_EventScript_Q2Miss::
# 171 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 172 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_TatsuoRecon_EventScript_Q2Give
# 173 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 174 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q2Ask
	return


tarc3_TatsuoRecon_EventScript_Q2Right::
# 178 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_TatsuoRecon_EventScript_Q2Right_2
tarc3_TatsuoRecon_EventScript_Q2Right_1:
# 181 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 182 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2Right_Text_0
# 183 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2Right_Text_1
# 184 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2Right_Text_2
# 185 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 186 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 187 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 188 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	playse SE_PIN
# 189 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	applymovement LOCALID_FOREDECK_JOJI_2, tarc3_TatsuoRecon_EventScript_Q1React_Movement_0
# 190 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	waitmovement 0
# 191 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2Right_Text_3
# 192 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2Right_Text_4
# 193 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 194 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 195 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 196 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3
	return

tarc3_TatsuoRecon_EventScript_Q2Right_2:
# 179 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_TatsuoRecon_EventScript_Q2Right_1


tarc3_TatsuoRecon_EventScript_Q2Give::
# 200 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 201 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2Give_Text_0
# 202 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q2Give_Text_1
# 203 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 204 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 205 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 206 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3
	return


tarc3_TatsuoRecon_EventScript_Q3::
# 212 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 213 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1_Text_0
# 214 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3_Text_0
# 215 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 216 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3_Text_1
# 217 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 218 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 219 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 220 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3Ask
	return


tarc3_TatsuoRecon_EventScript_Q3Ask::
# 224 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 225 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	message tarc3_TatsuoRecon_EventScript_Q3Ask_Text_0
# 226 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	waitmessage
# 227 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q3Ask_Text_1, 0
# 228 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q3Ask_Text_2, 1
# 229 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q3Ask_Text_3, 2
# 230 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 231 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 232 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	switch VAR_RESULT
# 233 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 0, tarc3_TatsuoRecon_EventScript_Q3Ask_2
# 235 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 1, tarc3_TatsuoRecon_EventScript_Q3Ask_3
# 238 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3Right
	return

tarc3_TatsuoRecon_EventScript_Q3Ask_2:
# 234 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3WrongCarried
	return

tarc3_TatsuoRecon_EventScript_Q3Ask_3:
# 236 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3Hands
	return


tarc3_TatsuoRecon_EventScript_Q3WrongCarried::
# 243 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 244 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3WrongCarried_Text_0
# 245 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3WrongCarried_Text_1
# 246 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 247 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 248 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3Miss
	return


tarc3_TatsuoRecon_EventScript_Q3Hands::
# 252 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 253 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Hands_Text_0
# 254 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Hands_Text_1
# 255 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 256 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 257 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3Miss
	return


tarc3_TatsuoRecon_EventScript_Q3Miss::
# 261 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 262 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_TatsuoRecon_EventScript_Q3Give
# 263 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 264 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3Ask
	return


tarc3_TatsuoRecon_EventScript_Q3Right::
# 268 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_TatsuoRecon_EventScript_Q3Right_2
tarc3_TatsuoRecon_EventScript_Q3Right_1:
# 271 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 272 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Right_Text_0
# 273 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 274 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 275 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	checkevidence EVD_HIDDEN_PIPE
# 276 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_eq VAR_RESULT, TRUE, tarc3_TatsuoRecon_EventScript_Q3Hidden
# 277 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3React
	return

tarc3_TatsuoRecon_EventScript_Q3Right_2:
# 269 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_TatsuoRecon_EventScript_Q3Right_1


tarc3_TatsuoRecon_EventScript_Q3Hidden::
# 283 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 284 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Hidden_Text_0
# 285 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_0
# 286 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Hidden_Text_1
# 287 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 288 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 289 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 290 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q3React
	return


tarc3_TatsuoRecon_EventScript_Q3React::
# 294 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	playse SE_PIN
# 295 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	applymovement LOCALID_FOREDECK_AKIE_2, tarc3_TatsuoRecon_EventScript_Q1React_Movement_0
# 296 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	waitmovement 0
# 297 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 298 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3React_Text_0
# 299 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 300 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 301 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_set FLAG_TARC3_DECK2_FOUND_WEAPON, tarc3_TatsuoRecon_EventScript_Q3Weapon
# 302 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 303 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4
	return


tarc3_TatsuoRecon_EventScript_Q3Weapon::
# 309 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 310 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Weapon_Text_0
# 311 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1_Text_0
# 312 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Weapon_Text_1
# 313 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 314 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Weapon_Text_2
# 315 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 316 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 317 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 318 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4
	return


tarc3_TatsuoRecon_EventScript_Q3Give::
# 322 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 323 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Give_Text_0
# 324 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q3Give_Text_1
# 325 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 326 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 327 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 328 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4
	return


tarc3_TatsuoRecon_EventScript_Q4::
# 334 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setvar VAR_TEMP_7, 0
# 335 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2_Text_0
# 336 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4_Text_0
# 337 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 338 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4_Text_1
# 339 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 340 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 341 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 342 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4Ask
	return


tarc3_TatsuoRecon_EventScript_Q4Ask::
# 346 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 347 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	message tarc3_TatsuoRecon_EventScript_Q4Ask_Text_0
# 348 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	waitmessage
# 349 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q4Ask_Text_1, 0
# 350 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q4Ask_Text_2, 1
# 351 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultipush tarc3_TatsuoRecon_EventScript_Q4Ask_Text_3, 2
# 352 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 353 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 354 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	switch VAR_RESULT
# 355 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 0, tarc3_TatsuoRecon_EventScript_Q4Ask_2
# 357 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	case 1, tarc3_TatsuoRecon_EventScript_Q4Ask_3
# 360 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4Right
	return

tarc3_TatsuoRecon_EventScript_Q4Ask_2:
# 356 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4WrongEstate
	return

tarc3_TatsuoRecon_EventScript_Q4Ask_3:
# 358 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4WrongMistake
	return


tarc3_TatsuoRecon_EventScript_Q4WrongEstate::
# 365 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_0
# 366 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4WrongEstate_Text_0
# 367 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 368 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4WrongEstate_Text_1
# 369 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 370 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 371 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4Miss
	return


tarc3_TatsuoRecon_EventScript_Q4WrongMistake::
# 375 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 376 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4WrongMistake_Text_0
# 377 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4WrongMistake_Text_1
# 378 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 379 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 380 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4Miss
	return


tarc3_TatsuoRecon_EventScript_Q4Miss::
# 384 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_7, 1
# 385 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_7, 2, tarc3_TatsuoRecon_EventScript_Q4Give
# 386 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 387 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Q4Ask
	return


tarc3_TatsuoRecon_EventScript_Q4Right::
# 391 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	compare VAR_TEMP_7, 0
	goto_if_eq tarc3_TatsuoRecon_EventScript_Q4Right_2
tarc3_TatsuoRecon_EventScript_Q4Right_1:
# 394 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 395 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4Right_Text_0
# 396 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 397 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 398 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 30
# 399 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 400 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4Right_Text_1
# 401 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4Right_Text_2
# 402 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_set FLAG_TARC3_DECK2_FOUND_BODY, tarc3_TatsuoRecon_EventScript_Q4Right_5
tarc3_TatsuoRecon_EventScript_Q4Right_4:
# 405 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 406 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 407 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	giveevidence EVD_SILENCED_WITNESS
# 408 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 409 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 410 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Closing
	return

tarc3_TatsuoRecon_EventScript_Q4Right_2:
# 392 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	addvar VAR_TEMP_8, 1
	goto tarc3_TatsuoRecon_EventScript_Q4Right_1

tarc3_TatsuoRecon_EventScript_Q4Right_5:
# 403 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4Right_Text_3
	goto tarc3_TatsuoRecon_EventScript_Q4Right_4


tarc3_TatsuoRecon_EventScript_Q4Give::
# 414 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 415 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Q4Give_Text_0
# 416 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 417 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 418 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	giveevidence EVD_SILENCED_WITNESS
# 419 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 420 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 421 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_Closing
	return


tarc3_TatsuoRecon_EventScript_Closing::
# 427 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 428 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Closing_Text_0
# 429 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Closing_Text_1
# 430 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Closing_Text_2
# 431 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 432 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 433 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 434 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Begin_Text_0
# 435 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_Closing_Text_3
# 436 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 437 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 438 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 439 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_ClosingGrade
	return


tarc3_TatsuoRecon_EventScript_ClosingGrade::
# 443 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_eq VAR_TEMP_9, 4, tarc3_TatsuoRecon_EventScript_ClosingGrade4
# 444 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_8, 3, tarc3_TatsuoRecon_EventScript_ClosingBest
# 445 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_8, 2, tarc3_TatsuoRecon_EventScript_ClosingFair
# 446 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_ClosingPoor
	return


tarc3_TatsuoRecon_EventScript_ClosingGrade4::
# 450 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_8, 4, tarc3_TatsuoRecon_EventScript_ClosingBest
# 451 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto_if_ge VAR_TEMP_8, 2, tarc3_TatsuoRecon_EventScript_ClosingFair
# 452 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	goto tarc3_TatsuoRecon_EventScript_ClosingPoor
	return


tarc3_TatsuoRecon_EventScript_ClosingBest::
# 456 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	fadeoutbgm 4
# 457 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 60
# 458 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_0
# 459 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingBest_Text_0
# 460 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingBest_Text_1
# 461 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 462 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingBest_Text_2
# 463 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 464 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 465 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 466 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setflag FLAG_TARC3_TATSUO_RECONSTRUCTED
	return


tarc3_TatsuoRecon_EventScript_ClosingFair::
# 471 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1_Text_0
# 472 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingFair_Text_0
# 473 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2_Text_0
# 474 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingFair_Text_1
# 475 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 476 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingFair_Text_2
# 477 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 478 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 479 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 480 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setflag FLAG_TARC3_TATSUO_RECONSTRUCTED
	return


tarc3_TatsuoRecon_EventScript_ClosingPoor::
# 485 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q2_Text_0
# 486 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingPoor_Text_0
# 487 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0
# 488 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	msgbox tarc3_TatsuoRecon_EventScript_ClosingPoor_Text_1
# 489 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setspeaker NULL
# 490 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	closemessage
# 491 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	delay 20
# 492 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	setflag FLAG_TARC3_TATSUO_RECONSTRUCTED
	return


# 91 "data/scripts/tarc3_tatsuo_reconstruction.pory"
tarc3_TatsuoRecon_EventScript_Q1React_Movement_0:
# 91 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	emote_exclamation_mark
	step_end

tarc3_TatsuoRecon_EventScript_Begin_Text_0:
# 7 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "{PLAYER}$"

tarc3_TatsuoRecon_EventScript_Begin_Text_1:
# 8 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "I do not know the identity of the\n"
	.string "murderer. Yet.$"

tarc3_TatsuoRecon_EventScript_Begin_Text_2:
# 9 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "However, I believe I can give you a\n"
	.string "reason for this cruelty.$"

tarc3_TatsuoRecon_EventScript_Q1_Text_0:
# 20 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Kitaro$"

tarc3_TatsuoRecon_EventScript_Q1_Text_1:
# 21 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "You heard it, then. The two of them, one\n"
	.string "after the other.$"

tarc3_TatsuoRecon_EventScript_Q1_Text_2:
# 23 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "A splash. Then, some seconds after it, a\n"
	.string "heavy thing striking this deck.$"

tarc3_TatsuoRecon_EventScript_Q1_Text_3:
# 24 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The second of those was Tatsuo. Nobody\n"
	.string "in this family disputes that.$"

tarc3_TatsuoRecon_EventScript_Q1Ask_Text_0:
# 33 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "{FONT_NARROW}Then what was the splash?$"

tarc3_TatsuoRecon_EventScript_Q1Ask_Text_1:
# 35 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The weapon, thrown over afterwards$"

tarc3_TatsuoRecon_EventScript_Q1Ask_Text_2:
# 36 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "A Pelipper out in the water$"

tarc3_TatsuoRecon_EventScript_Q1Ask_Text_3:
# 37 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Something he was already disposing of$"

tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_0:
# 51 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "{RIVAL}$"

tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_1:
# 52 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Afterwards. You have put the disposal\n"
	.string "after the killing.$"

tarc3_TatsuoRecon_EventScript_Q1WrongAfter_Text_2:
# 53 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The splash was first. Either that order\n"
	.string "means something or you have wasted an\l"
	.string "hour of my evening.$"

tarc3_TatsuoRecon_EventScript_Q1WrongMon_Text_0:
# 61 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "So a Pelipper struck the water.\p"
	.string "And four seconds later, by mere\n"
	.string "coincidence, a man died on this deck?$"

tarc3_TatsuoRecon_EventScript_Q1WrongMon_Text_1:
# 62 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Coincidence is what people reach for\n"
	.string "when they have stopped thinking.\p"
	.string "Reach further.$"

tarc3_TatsuoRecon_EventScript_Q1Right_Text_0:
# 80 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Something he was already getting rid\n"
	.string "of.$"

tarc3_TatsuoRecon_EventScript_Q1Right_Text_1:
# 81 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "A man who comes out here to kill strikes\n"
	.string "first and drops the weapon after.\p"
	.string "That gives you a thud, and then a\n"
	.string "splash.$"

tarc3_TatsuoRecon_EventScript_Q1Right_Text_2:
# 82 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "We heard the reverse. Whoever stood at\n"
	.string "this rail was disposing of something\l"
	.string "before Tatsuo was ever touched.$"

tarc3_TatsuoRecon_EventScript_Q1React_Text_0:
# 93 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Suzuki$"

tarc3_TatsuoRecon_EventScript_Q1React_Text_1:
# 94 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "...Of course.$"

tarc3_TatsuoRecon_EventScript_Q1Give_Text_0:
# 103 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The splash came first, so it cannot\n"
	.string "have been the weapon that killed him. He\l"
	.string "was already disposing of something.$"

tarc3_TatsuoRecon_EventScript_Q1Give_Text_1:
# 104 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "That is one sentence, {PLAYER}\n"
	.string "Edgeworth, and you had all of the\l"
	.string "pieces of it.$"

tarc3_TatsuoRecon_EventScript_Q2_Text_0:
# 122 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Mariko$"

tarc3_TatsuoRecon_EventScript_Q2_Text_1:
# 123 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Then say what went into the sea, if you\n"
	.string "are so certain of the order of it.$"

tarc3_TatsuoRecon_EventScript_Q2_Text_2:
# 125 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "I intend to. Cramorant brought a piece\n"
	.string "of it back.$"

tarc3_TatsuoRecon_EventScript_Q2Ask_Text_0:
# 134 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "{FONT_NARROW}What went over that rail?$"

tarc3_TatsuoRecon_EventScript_Q2Ask_Text_1:
# 136 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The pipe that killed him$"

tarc3_TatsuoRecon_EventScript_Q2Ask_Text_2:
# 137 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Something of Tatsuo's$"

tarc3_TatsuoRecon_EventScript_Q2Ask_Text_3:
# 138 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The knife that killed Gozo$"

tarc3_TatsuoRecon_EventScript_Q2WrongPipe_Text_0:
# 153 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The order, again. A splash was heard\n"
	.string "first. The thud followed.\p"
	.string "A murder weapon can only become a\n"
	.string "murder weapon after it has murdered.$"

tarc3_TatsuoRecon_EventScript_Q2WrongPipe_Text_1:
# 154 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "You have established one fact tonight.\n"
	.string "Kindly stop walking back over it.$"

tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_0:
# 161 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Akie$"

tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_1:
# 162 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He... He is lying there. Nothing of his\n"
	.string "went anywhere.$"

tarc3_TatsuoRecon_EventScript_Q2WrongHis_Text_2:
# 164 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Contradicted by his widow, and by your\n"
	.string "own eyes. Think before you speak.$"

tarc3_TatsuoRecon_EventScript_Q2Right_Text_0:
# 182 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The knife that killed Gozo Hatamoto.$"

tarc3_TatsuoRecon_EventScript_Q2Right_Text_1:
# 183 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "There is no blade in that cabin. I\n"
	.string "expect that blade is no longer anywhere\l"
	.string "on this ship.$"

tarc3_TatsuoRecon_EventScript_Q2Right_Text_2:
# 184 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "What caught on this rail is not a\n"
	.string "weapon. It is a cloth, dark along one\l"
	.string "edge.\p"
	.string "I submit that this bloody rag was\n"
	.string "wrapped around the blade as it went\l"
	.string "over the side.$"

tarc3_TatsuoRecon_EventScript_Q2Right_Text_3:
# 191 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Joji$"

tarc3_TatsuoRecon_EventScript_Q2Right_Text_4:
# 192 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "...No one should have been able to\n"
	.string "access my knives.$"

tarc3_TatsuoRecon_EventScript_Q2Give_Text_0:
# 201 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The knife, you fool. Gozo's knife,\n"
	.string "missing since the cabin was opened.\p"
	.string "A bloodied cloth snagged on this rail.$"

tarc3_TatsuoRecon_EventScript_Q2Give_Text_1:
# 202 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Two facts that were never more than a\n"
	.string "sentence apart, and you could not\l"
	.string "bridge them.$"

tarc3_TatsuoRecon_EventScript_Q3_Text_0:
# 214 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Then he came out here armed. He came\n"
	.string "out here intending to kill.$"

tarc3_TatsuoRecon_EventScript_Q3_Text_1:
# 216 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "No. Look deeper at the evidence.$"

tarc3_TatsuoRecon_EventScript_Q3Ask_Text_0:
# 225 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "{FONT_NARROW}Where did the thing that killed him come from?$"

tarc3_TatsuoRecon_EventScript_Q3Ask_Text_1:
# 227 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He carried it out with him$"

tarc3_TatsuoRecon_EventScript_Q3Ask_Text_2:
# 228 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He used his bare hands$"

tarc3_TatsuoRecon_EventScript_Q3Ask_Text_3:
# 229 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "It was already lying on this deck$"

tarc3_TatsuoRecon_EventScript_Q3WrongCarried_Text_0:
# 244 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "A man disposing of one murder weapon,\n"
	.string "with a second in his other hand.$"

tarc3_TatsuoRecon_EventScript_Q3WrongCarried_Text_1:
# 245 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Say that sentence aloud and hear what\n"
	.string "is wrong with it.$"

tarc3_TatsuoRecon_EventScript_Q3Hands_Text_0:
# 253 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Tatsuo's cause of death was blunt\n"
	.string "force trauma.\p"
	.string "Bare fists do not produce wounds of\n"
	.string "that severity.$"

tarc3_TatsuoRecon_EventScript_Q3Hands_Text_1:
# 254 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "That answer was beneath you,\n"
	.string "{PLAYER} Edgeworth.$"

tarc3_TatsuoRecon_EventScript_Q3Right_Text_0:
# 272 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "It was already out here. In the\n"
	.string "equipment sack, four paces from where\l"
	.string "he was standing.$"

tarc3_TatsuoRecon_EventScript_Q3Hidden_Text_0:
# 284 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "And it was Tatsuo who put it there. He\n"
	.string "broke some deck fittings this\l"
	.string "afternoon.\p"
	.string "He hid the pieces in that sack, where\n"
	.string "they would pass for ship's equipment.\p"
	.string "He told me so himself, and was proud of\n"
	.string "it.$"

tarc3_TatsuoRecon_EventScript_Q3Hidden_Text_1:
# 286 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "...That is exactly the sort of thing he\n"
	.string "would do.$"

tarc3_TatsuoRecon_EventScript_Q3React_Text_0:
# 298 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Nothing was carried onto this deck. He\n"
	.string "took up the first heavy thing he\l"
	.string "stumbled over.\p"
	.string "Which is what a man does when he did not\n"
	.string "come out here to kill.$"

tarc3_TatsuoRecon_EventScript_Q3Weapon_Text_0:
# 310 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "And it is still aboard. Back in the\n"
	.string "equipment sack, with his blood dried\l"
	.string "along it. Whoever used it put it back.$"

tarc3_TatsuoRecon_EventScript_Q3Weapon_Text_1:
# 312 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "...He put it back. He stood out here\n"
	.string "afterwards and he put it back.$"

tarc3_TatsuoRecon_EventScript_Q3Weapon_Text_2:
# 314 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He carried the knife the length of this\n"
	.string "deck to drown it.\p"
	.string "The pipe he left where he found it.\p"
	.string "The knife was the errand. The pipe was\n"
	.string "the accident, and he heard us coming.$"

tarc3_TatsuoRecon_EventScript_Q3Give_Text_0:
# 323 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "It was already on this deck, in that\n"
	.string "equipment sack.\p"
	.string "He snatched it up where he stood.$"

tarc3_TatsuoRecon_EventScript_Q3Give_Text_1:
# 324 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Nothing about this was prepared. The\n"
	.string "most useful thing this deck has told us.\p"
	.string "And you walked past it twice.$"

tarc3_TatsuoRecon_EventScript_Q4_Text_0:
# 336 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Unprepared. Improvised. You are\n"
	.string "describing an unlucky man, not a reason.$"

tarc3_TatsuoRecon_EventScript_Q4_Text_1:
# 338 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Then let me give you a reason. You will\n"
	.string "not like how small it is.$"

tarc3_TatsuoRecon_EventScript_Q4Ask_Text_0:
# 347 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "{FONT_NARROW}Then why is Tatsuo Kaneko dead?$"

tarc3_TatsuoRecon_EventScript_Q4Ask_Text_1:
# 349 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "For his share of the estate$"

tarc3_TatsuoRecon_EventScript_Q4Ask_Text_2:
# 350 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He was mistaken for somebody else$"

tarc3_TatsuoRecon_EventScript_Q4Ask_Text_3:
# 351 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He was nearby$"

tarc3_TatsuoRecon_EventScript_Q4WrongEstate_Text_0:
# 366 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "His share. The murderer wanted a larger\n"
	.string "share for themselves.$"

tarc3_TatsuoRecon_EventScript_Q4WrongEstate_Text_1:
# 368 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Killing him does not alter any\n"
	.string "distribution by a single dollar.\p"
	.string "You should know that.$"

tarc3_TatsuoRecon_EventScript_Q4WrongMistake_Text_0:
# 376 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Mistaken identity.\p"
	.string "On a ship where every soul aboard knows\n"
	.string "every other by name.$"

tarc3_TatsuoRecon_EventScript_Q4WrongMistake_Text_1:
# 377 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Absurd.$"

tarc3_TatsuoRecon_EventScript_Q4Right_Text_0:
# 395 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Because he was watching.$"

tarc3_TatsuoRecon_EventScript_Q4Right_Text_1:
# 400 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He was at that rail when a man threw a\n"
	.string "bloody rag into the sea.\p"
	.string "They saw each other.$"

tarc3_TatsuoRecon_EventScript_Q4Right_Text_2:
# 401 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He was not a target.\p"
	.string "He was struck before he had finished\n"
	.string "turning round.$"

tarc3_TatsuoRecon_EventScript_Q4Right_Text_3:
# 403 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He did not turn, he did not get an arm\n"
	.string "up, and he did not run.\p"
	.string "He was not given the time to do any of\n"
	.string "it.$"

tarc3_TatsuoRecon_EventScript_Q4Give_Text_0:
# 415 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He saw it. That is the whole of it.$"

tarc3_TatsuoRecon_EventScript_Closing_Text_0:
# 428 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "So. A man came out onto this deck\n"
	.string "tonight with the knife that killed Gozo\l"
	.string "Hatamoto.\p"
	.string "Wrapped, and meant for the sea.$"

tarc3_TatsuoRecon_EventScript_Closing_Text_1:
# 429 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He did that first. The sea has it, and\n"
	.string "the wrapping tore off on the rail on the\l"
	.string "way down.$"

tarc3_TatsuoRecon_EventScript_Closing_Text_2:
# 430 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Tatsuo was already out here. He saw it\n"
	.string "happen.$"

tarc3_TatsuoRecon_EventScript_Closing_Text_3:
# 435 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Nobody planned this death.\p"
	.string "He died for standing in the wrong place\n"
	.string "at the wrong minute.\p"
	.string "The man who did it escaped afterwards.$"

tarc3_TatsuoRecon_EventScript_ClosingBest_Text_0:
# 459 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He was standing there minding his own\n"
	.string "business and somebody killed him for it.$"

tarc3_TatsuoRecon_EventScript_ClosingBest_Text_1:
# 460 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "For nothing. For being in the way.$"

tarc3_TatsuoRecon_EventScript_ClosingBest_Text_2:
# 462 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Adequate, {PLAYER} Edgeworth. Twice\n"
	.string "in one night.$"

tarc3_TatsuoRecon_EventScript_ClosingFair_Text_0:
# 472 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "...It holds together.$"

tarc3_TatsuoRecon_EventScript_ClosingFair_Text_1:
# 474 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "It holds together and it names nobody.\n"
	.string "You have described a rail to us.$"

tarc3_TatsuoRecon_EventScript_ClosingFair_Text_2:
# 476 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "He has described a man improvising.\p"
	.string "This family decided first, and went\n"
	.string "looking for reasons after.$"

tarc3_TatsuoRecon_EventScript_ClosingPoor_Text_0:
# 486 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "Most of that came out of her mouth\n"
	.string "again.$"

tarc3_TatsuoRecon_EventScript_ClosingPoor_Text_1:
# 488 "data/scripts/tarc3_tatsuo_reconstruction.pory"
	.string "The reconstruction is sound. How much\n"
	.string "of it I had to hand him is a matter\l"
	.string "between him and me.$"
