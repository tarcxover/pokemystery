tarc3_Accusation_EventScript_ScoreIchiroT1::
# 9 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_ScoreIchiroT1_2
tarc3_Accusation_EventScript_ScoreIchiroT1_1:
	return

tarc3_Accusation_EventScript_ScoreIchiroT1_2:
# 10 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_QSCORE, 2
# 11 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_SCORE, 2
	goto tarc3_Accusation_EventScript_ScoreIchiroT1_1


tarc3_Accusation_EventScript_ScoreIchiroT2::
# 17 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_ScoreIchiroT2_2
tarc3_Accusation_EventScript_ScoreIchiroT2_1:
	return

tarc3_Accusation_EventScript_ScoreIchiroT2_2:
# 18 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_QSCORE, 5
# 19 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_SCORE, 5
# 20 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_HITS, 1
	goto tarc3_Accusation_EventScript_ScoreIchiroT2_1


tarc3_Accusation_EventScript_ScoreIchiroT3::
# 26 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_ScoreIchiroT3_2
tarc3_Accusation_EventScript_ScoreIchiroT3_1:
	return

tarc3_Accusation_EventScript_ScoreIchiroT3_2:
# 27 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_QSCORE, 13
# 28 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_SCORE, 13
# 29 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_HITS, 1
	goto tarc3_Accusation_EventScript_ScoreIchiroT3_1


tarc3_Accusation_EventScript_ScoreTakeshiT1::
# 35 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_eq tarc3_Accusation_EventScript_ScoreTakeshiT1_2
tarc3_Accusation_EventScript_ScoreTakeshiT1_1:
	return

tarc3_Accusation_EventScript_ScoreTakeshiT1_2:
# 36 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_QSCORE, 2
# 37 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_SCORE, 2
	goto tarc3_Accusation_EventScript_ScoreTakeshiT1_1


tarc3_Accusation_EventScript_ScoreTakeshiT2::
# 43 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_eq tarc3_Accusation_EventScript_ScoreTakeshiT2_2
tarc3_Accusation_EventScript_ScoreTakeshiT2_1:
	return

tarc3_Accusation_EventScript_ScoreTakeshiT2_2:
# 44 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_QSCORE, 5
# 45 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_SCORE, 5
# 46 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_HITS, 1
	goto tarc3_Accusation_EventScript_ScoreTakeshiT2_1


tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1::
# 54 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_ne tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_2
tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_1:
	return

tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_2:
# 55 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 56 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_1
# 57 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_2
# 58 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 59 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 60 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	goto tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_1


tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2::
# 66 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_ne tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_2
tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_1:
	return

tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_2:
# 67 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 68 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_Text_0
# 69 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_Text_1
# 70 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 71 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 72 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	goto tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_1


tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1::
# 78 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_ne tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1_2
tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1_1:
	return

tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1_2:
# 79 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 80 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1_Text_0
# 81 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 82 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 83 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	goto tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1_1


tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2::
# 89 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_ne tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_2
tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_1:
	return

tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_2:
# 90 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 91 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_Text_0
# 92 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_Text_1
# 93 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 94 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 95 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	goto tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_1


tarc3_Accusation_EventScript_Ev_Sketchbook::
# 103 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 104 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 105 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_1
# 106 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_2
# 107 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3
# 108 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 109 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_5
# 110 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 111 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 112 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 113 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_RefusedSuitor::
# 118 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 119 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 120 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_0
# 121 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 122 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_2
# 123 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 124 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 125 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 126 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_TuitionFunds::
# 131 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 132 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 133 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_0
# 134 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 135 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_2
# 136 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 137 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 138 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 139 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_IchiroSponsorship::
# 144 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 145 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 146 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_0
# 147 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_1
# 148 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_2
# 149 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 150 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 151 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 152 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_BreadEraser::
# 157 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 158 "data/scripts/tarc3_accusation_evidence.pory"
	setflag FLAG_TARC3_ACCUSE_CRUMBS
# 159 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 160 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BreadEraser_Text_0
# 161 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 162 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BreadEraser_Text_1
# 163 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 164 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BreadEraser_Text_2
# 165 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 166 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BreadEraser_Text_3
# 167 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BreadEraser_Text_4
# 168 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 169 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 170 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	return


tarc3_Accusation_EventScript_Ev_UnrequitedLove::
# 175 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 176 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 177 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_UnrequitedLove_Text_0
# 178 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 179 "data/scripts/tarc3_accusation_evidence.pory"
	delay 30
# 180 "data/scripts/tarc3_accusation_evidence.pory"
	applymovement LOCALID_CABINS_NATSUE, tarc3_Accusation_EventScript_Ev_UnrequitedLove_Movement_0
# 181 "data/scripts/tarc3_accusation_evidence.pory"
	waitmovement 0
# 182 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 183 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 184 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_UnrequitedLove_Text_1
# 185 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 186 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3
# 187 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 188 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 189 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 190 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal::
# 195 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 196 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 197 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal_Text_0
# 198 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 199 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal_Text_1
# 200 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_1
# 201 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal_Text_2
# 202 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 203 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 204 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 205 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor::
# 210 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 211 "data/scripts/tarc3_accusation_evidence.pory"
	setflag FLAG_TARC3_ACCUSE_CRUMBS
# 212 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 213 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_0
# 214 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 215 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_1
# 216 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 217 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_2
# 218 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 219 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_3
# 220 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 221 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 222 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 223 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_TwinRefusal::
# 228 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT3
# 229 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_Ev_TwinRefusal_3
tarc3_Accusation_EventScript_Ev_TwinRefusal_1:
# 232 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 233 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_0
# 234 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_1
# 235 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_2
# 236 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_3
# 237 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 238 "data/scripts/tarc3_accusation_evidence.pory"
	playse SE_PIN
# 239 "data/scripts/tarc3_accusation_evidence.pory"
	applymovement LOCALID_CABINS_NATSUE, tarc3_Accusation_EventScript_Ev_TwinRefusal_Movement_0
# 240 "data/scripts/tarc3_accusation_evidence.pory"
	waitmovement 0
# 241 "data/scripts/tarc3_accusation_evidence.pory"
	delay 40
# 242 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 243 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3
# 244 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 245 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_4
# 246 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_Ev_TwinRefusal_7
# 251 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 252 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_7
# 253 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_8
tarc3_Accusation_EventScript_Ev_TwinRefusal_6:
# 255 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 256 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
	return

tarc3_Accusation_EventScript_Ev_TwinRefusal_2:
# 230 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_T3, TARC3_T3_TWIN_REFUSAL
	goto tarc3_Accusation_EventScript_Ev_TwinRefusal_1

tarc3_Accusation_EventScript_Ev_TwinRefusal_3:
# 229 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSE_T3, 0
	goto_if_eq tarc3_Accusation_EventScript_Ev_TwinRefusal_2
	goto tarc3_Accusation_EventScript_Ev_TwinRefusal_1

tarc3_Accusation_EventScript_Ev_TwinRefusal_7:
# 247 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 248 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_5
# 249 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_6
	goto tarc3_Accusation_EventScript_Ev_TwinRefusal_6


tarc3_Accusation_EventScript_Ev_TakeshisMeeting::
# 261 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT1
# 262 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 263 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TakeshisMeeting_Text_0
# 264 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 265 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TakeshisMeeting_Text_1
# 266 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 267 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 268 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 269 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1
	return


tarc3_Accusation_EventScript_Ev_TakeshisHistory::
# 274 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT1
# 275 "data/scripts/tarc3_accusation_evidence.pory"
	setflag FLAG_TARC3_ACCUSE_HISTORY
# 276 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 277 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TakeshisHistory_Text_0
# 278 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 279 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TakeshisHistory_Text_1
# 280 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 281 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 282 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 283 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1
	return


tarc3_Accusation_EventScript_Ev_FamilyPicture::
# 288 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT1
# 289 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 290 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_FamilyPicture_Text_0
# 291 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_2
# 292 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_FamilyPicture_Text_1
# 293 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 294 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_FamilyPicture_Text_2
# 295 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 296 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 297 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	return


tarc3_Accusation_EventScript_Ev_OverheardArgument::
# 302 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT1
# 303 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 304 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_OverheardArgument_Text_0
# 305 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 306 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_OverheardArgument_Text_1
# 307 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 308 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 309 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 310 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1
	return


tarc3_Accusation_EventScript_Ev_GozosFinalMeeting::
# 315 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT2
# 316 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 317 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_0
# 318 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 319 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_1
# 320 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_2
# 321 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_2
# 322 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_eq tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_2
# 329 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 330 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_7
tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_1:
# 332 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 333 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 334 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 335 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2
	return

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_2:
# 323 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_3
# 324 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_4
# 325 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_5
# 326 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 327 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_6
	goto tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_1


tarc3_Accusation_EventScript_Ev_TakeshisRevenge::
# 340 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT2
# 341 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 342 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TakeshisRevenge_Text_0
# 343 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 344 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TakeshisRevenge_Text_1
# 345 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 346 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TakeshisRevenge_Text_2
# 347 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_eq tarc3_Accusation_EventScript_Ev_TakeshisRevenge_2
tarc3_Accusation_EventScript_Ev_TakeshisRevenge_1:
# 351 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 352 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 353 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 354 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2
	return

tarc3_Accusation_EventScript_Ev_TakeshisRevenge_2:
# 348 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_3
# 349 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3
	goto tarc3_Accusation_EventScript_Ev_TakeshisRevenge_1


tarc3_Accusation_EventScript_Ev_CharcoalOnBolt::
# 361 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 362 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 363 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_CharcoalOnBolt_Text_0
# 364 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 365 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_CharcoalOnBolt_Text_1
# 366 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 367 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_CharcoalOnBolt_Text_2
# 368 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 369 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 370 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	return


tarc3_Accusation_EventScript_Ev_LongAbsence::
# 375 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 376 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 377 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_LongAbsence_Text_0
# 378 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 379 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_LongAbsence_Text_1
# 380 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 381 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_LongAbsence_Text_2
# 382 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 383 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 384 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	return


tarc3_Accusation_EventScript_Ev_AnAccomplice::
# 389 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT1
# 390 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 391 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_0
# 392 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 393 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_1
# 394 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 395 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_2
# 396 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_3
# 397 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 398 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 399 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
	return


tarc3_Accusation_EventScript_Ev_OpenServiceDoor::
# 404 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT1
# 405 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 406 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_OpenServiceDoor_Text_0
# 407 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_1
# 408 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_OpenServiceDoor_Text_1
# 409 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 410 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 411 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 412 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1
	return


tarc3_Accusation_EventScript_Ev_BloodOnTheStair::
# 417 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 418 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 419 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_0
# 420 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_1
# 421 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 422 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_2
# 423 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 424 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_3
# 425 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 426 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 427 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 428 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_SilencedWitness::
# 433 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 434 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 435 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_0
# 436 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_1
# 437 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_2
# 438 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 439 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_3
# 440 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 441 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_4
# 442 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_5
# 443 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3
# 444 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 445 "data/scripts/tarc3_accusation_evidence.pory"
	applymovement LOCALID_CABINS_AKIE, tarc3_Accusation_EventScript_Ev_SilencedWitness_Movement_0
# 446 "data/scripts/tarc3_accusation_evidence.pory"
	waitmovement 0
# 447 "data/scripts/tarc3_accusation_evidence.pory"
	delay 30
# 448 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_5
# 449 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_6
# 450 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 451 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 452 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_TheAccompliceTheory::
# 457 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT2
# 458 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 459 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_0
# 460 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 461 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_1
# 462 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_eq tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_2
# 468 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 469 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_4
tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_1:
# 471 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 472 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 473 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 474 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2
	return

tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_2:
# 463 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_3
# 464 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_2
# 465 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 466 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_3
	goto tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_1


tarc3_Accusation_EventScript_Ev_SmeargleRepertoire::
# 481 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 482 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 483 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SmeargleRepertoire_Text_0
# 484 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 485 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SmeargleRepertoire_Text_1
# 486 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 487 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 488 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 489 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_TheOddBattle::
# 494 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 495 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 496 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheOddBattle_Text_0
# 497 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 498 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheOddBattle_Text_1
# 499 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 500 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 501 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 502 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_FocusedBurn::
# 507 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 508 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 509 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_FocusedBurn_Text_0
# 510 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 511 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_FocusedBurn_Text_1
# 512 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 513 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 514 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 515 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_TheHoldAdjoins::
# 520 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT1
# 521 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 522 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheHoldAdjoins_Text_0
# 523 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_1
# 524 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheHoldAdjoins_Text_1
# 525 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 526 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 527 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 528 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1
	return


tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge::
# 533 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 534 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 535 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge_Text_0
# 536 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1
# 537 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge_Text_1
# 538 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 539 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge_Text_2
# 540 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 541 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 542 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 543 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_PanelStruck::
# 548 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 549 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 550 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_PanelStruck_Text_0
# 551 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_1
# 552 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_PanelStruck_Text_1
# 553 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_PanelStruck_Text_2
# 554 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 555 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 556 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 557 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_TheNearestHand::
# 562 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreTakeshiT2
# 563 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 564 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheNearestHand_Text_0
# 565 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 566 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheNearestHand_Text_1
# 567 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_TAKESHI
	goto_if_eq tarc3_Accusation_EventScript_Ev_TheNearestHand_2
tarc3_Accusation_EventScript_Ev_TheNearestHand_1:
# 575 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 576 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 577 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 578 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2
	return

tarc3_Accusation_EventScript_Ev_TheNearestHand_2:
# 568 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_3
# 569 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_2
# 570 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1
# 571 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_3
# 572 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_3
# 573 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheNearestHand_Text_2
	goto tarc3_Accusation_EventScript_Ev_TheNearestHand_1


tarc3_Accusation_EventScript_Ev_SketchedDischarge::
# 583 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT3
# 584 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_Ev_SketchedDischarge_3
tarc3_Accusation_EventScript_Ev_SketchedDischarge_1:
# 587 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 588 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_0
# 589 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_1
# 590 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_2
# 591 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_3
# 592 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 593 "data/scripts/tarc3_accusation_evidence.pory"
	playse SE_PIN
# 594 "data/scripts/tarc3_accusation_evidence.pory"
	applymovement LOCALID_CABINS_KITARO, tarc3_Accusation_EventScript_Ev_TwinRefusal_Movement_0
# 595 "data/scripts/tarc3_accusation_evidence.pory"
	waitmovement 0
# 596 "data/scripts/tarc3_accusation_evidence.pory"
	delay 40
# 597 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_1
# 598 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3
# 599 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_4
# 600 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_5
# 601 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_Ev_SketchedDischarge_7
# 606 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 607 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_8
# 608 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_9
tarc3_Accusation_EventScript_Ev_SketchedDischarge_6:
# 610 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 611 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
	return

tarc3_Accusation_EventScript_Ev_SketchedDischarge_2:
# 585 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_T3, TARC3_T3_SKETCHED_DISCHARGE
	goto tarc3_Accusation_EventScript_Ev_SketchedDischarge_1

tarc3_Accusation_EventScript_Ev_SketchedDischarge_3:
# 584 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSE_T3, TARC3_T3_SKETCHED_DISCHARGE
	goto_if_lt tarc3_Accusation_EventScript_Ev_SketchedDischarge_2
	goto tarc3_Accusation_EventScript_Ev_SketchedDischarge_1

tarc3_Accusation_EventScript_Ev_SketchedDischarge_7:
# 602 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 603 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_6
# 604 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_7
	goto tarc3_Accusation_EventScript_Ev_SketchedDischarge_6


tarc3_Accusation_EventScript_Ev_NoDefensiveWounds::
# 618 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 619 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 620 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_NoDefensiveWounds_Text_0
# 621 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_2
# 622 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_NoDefensiveWounds_Text_1
# 623 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 624 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 625 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 626 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_TheSecondStory::
# 631 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 632 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 633 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheSecondStory_Text_0
# 634 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_TheSecondStory_Text_1
# 635 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3
# 636 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_TheSecondStory_Text_2
# 637 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 638 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 639 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 640 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_ImpossiblePrecision::
# 645 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 646 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 647 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_ImpossiblePrecision_Text_0
# 648 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 649 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_ImpossiblePrecision_Text_1
# 650 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 651 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 652 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 653 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_InconsistentDisposal::
# 658 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT2
# 659 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 660 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_0
# 661 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_2
# 662 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_1
# 663 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 664 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_2
# 665 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 666 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_3
# 667 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 668 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_4
# 669 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 670 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 671 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 672 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2
	return


tarc3_Accusation_EventScript_Ev_SelfInflictedWound::
# 677 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT3
# 678 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_Ev_SelfInflictedWound_3
tarc3_Accusation_EventScript_Ev_SelfInflictedWound_1:
# 681 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 682 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_0
# 683 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 684 "data/scripts/tarc3_accusation_evidence.pory"
	delay 50
# 685 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_1
# 686 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_2
# 687 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_3
# 688 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_4
# 689 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_5
# 690 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 691 "data/scripts/tarc3_accusation_evidence.pory"
	applymovement LOCALID_CABINS_NATSUE, tarc3_Accusation_EventScript_Ev_UnrequitedLove_Movement_0
# 692 "data/scripts/tarc3_accusation_evidence.pory"
	waitmovement 0
# 693 "data/scripts/tarc3_accusation_evidence.pory"
	delay 60
# 694 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSED, TARC3_ACCUSED_ICHIRO
	goto_if_eq tarc3_Accusation_EventScript_Ev_SelfInflictedWound_7
# 698 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 699 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_7
# 700 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_8
tarc3_Accusation_EventScript_Ev_SelfInflictedWound_6:
# 702 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 703 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
	return

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_2:
# 679 "data/scripts/tarc3_accusation_evidence.pory"
	addvar VAR_TARC3_ACCUSE_T3, TARC3_T3_SELF_INFLICTED
	goto tarc3_Accusation_EventScript_Ev_SelfInflictedWound_1

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_3:
# 678 "data/scripts/tarc3_accusation_evidence.pory"
	compare VAR_TARC3_ACCUSE_T3, TARC3_T3_SELF_INFLICTED
	goto_if_lt tarc3_Accusation_EventScript_Ev_SelfInflictedWound_2
	goto tarc3_Accusation_EventScript_Ev_SelfInflictedWound_1

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_7:
# 695 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0
# 696 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_6
	goto tarc3_Accusation_EventScript_Ev_SelfInflictedWound_6


tarc3_Accusation_EventScript_Ev_HiddenPipe::
# 708 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 709 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 710 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_0
# 711 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_1
# 712 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_5
# 713 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_2
# 714 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 715 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_3
# 716 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_4
# 717 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 718 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 719 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 720 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


tarc3_Accusation_EventScript_Ev_KnivesCounted::
# 725 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_ScoreIchiroT1
# 726 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 727 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_KnivesCounted_Text_0
# 728 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4
# 729 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_KnivesCounted_Text_1
# 730 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0
# 731 "data/scripts/tarc3_accusation_evidence.pory"
	msgbox tarc3_Accusation_EventScript_Ev_KnivesCounted_Text_2
# 732 "data/scripts/tarc3_accusation_evidence.pory"
	setspeaker NULL
# 733 "data/scripts/tarc3_accusation_evidence.pory"
	closemessage
# 734 "data/scripts/tarc3_accusation_evidence.pory"
	delay 20
# 735 "data/scripts/tarc3_accusation_evidence.pory"
	call tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1
	return


# 180 "data/scripts/tarc3_accusation_evidence.pory"
tarc3_Accusation_EventScript_Ev_UnrequitedLove_Movement_0:
# 180 "data/scripts/tarc3_accusation_evidence.pory"
	face_right
	step_end

# 239 "data/scripts/tarc3_accusation_evidence.pory"
tarc3_Accusation_EventScript_Ev_TwinRefusal_Movement_0:
# 239 "data/scripts/tarc3_accusation_evidence.pory"
	emote_exclamation_mark
	step_end

# 445 "data/scripts/tarc3_accusation_evidence.pory"
tarc3_Accusation_EventScript_Ev_SilencedWitness_Movement_0:
# 445 "data/scripts/tarc3_accusation_evidence.pory"
	face_left
	step_end

tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_0:
# 55 "data/scripts/tarc3_accusation_evidence.pory"
	.string "{RIVAL}$"

tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_1:
# 56 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You named Takeshi. You are describing\n"
	.string "Ichiro.$"

tarc3_Accusation_EventScript_Fz_OffTargetIchiroT1_Text_2:
# 57 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Choose a case and prosecute it,\n"
	.string "{PLAYER} Edgeworth.$"

tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_Text_0:
# 68 "data/scripts/tarc3_accusation_evidence.pory"
	.string "A competent deduction, spent entirely\n"
	.string "upon a man you did not accuse.$"

tarc3_Accusation_EventScript_Fz_OffTargetIchiroT2_Text_1:
# 69 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You are dismantling your own case.\n"
	.string "Foolish.$"

tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT1_Text_0:
# 80 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You named Ichiro, and you hand this\n"
	.string "room Takeshi.\p"
	.string "Which is it to be?$"

tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_Text_0:
# 91 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You have just built the case against\n"
	.string "the wrong man - and built it well.$"

tarc3_Accusation_EventScript_Fz_OffTargetTakeshiT2_Text_1:
# 92 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I hope you are proud of yourself.$"

tarc3_Accusation_EventScript_Ev_Sketchbook_Text_0:
# 104 "data/scripts/tarc3_accusation_evidence.pory"
	.string "{PLAYER}$"

tarc3_Accusation_EventScript_Ev_Sketchbook_Text_1:
# 105 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Ichiro's sketchbook. Dozens of studies.\p"
	.string "And all throughout, the same face.\n"
	.string "Natsue's.$"

tarc3_Accusation_EventScript_Ev_Sketchbook_Text_2:
# 106 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Natsue$"

tarc3_Accusation_EventScript_Ev_Sketchbook_Text_3:
# 107 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...$"

tarc3_Accusation_EventScript_Ev_Sketchbook_Text_4:
# 108 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Joji$"

tarc3_Accusation_EventScript_Ev_Sketchbook_Text_5:
# 109 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He's an art student. He draws what's in\n"
	.string "front of him.$"

tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_0:
# 120 "data/scripts/tarc3_accusation_evidence.pory"
	.string "A man approached Gozo for Natsue's\n"
	.string "hand.\p"
	.string "He was refused - and not kindly.$"

tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_1:
# 121 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Mariko$"

tarc3_Accusation_EventScript_Ev_RefusedSuitor_Text_2:
# 122 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Who? If you know the name, say the\n"
	.string "name.$"

tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_0:
# 133 "data/scripts/tarc3_accusation_evidence.pory"
	.string "On the deck this afternoon, Gozo\n"
	.string "declared himself finished with paying\l"
	.string "for the boy's schooling.$"

tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_1:
# 134 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Kitaro$"

tarc3_Accusation_EventScript_Ev_TuitionFunds_Text_2:
# 135 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He wielded words like weapons. It was\n"
	.string "cruel.$"

tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_0:
# 146 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Gozo funded Ichiro's art training.\p"
	.string "Not a gesture. Years of it.$"

tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_1:
# 147 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Suzuki$"

tarc3_Accusation_EventScript_Ev_IchiroSponsorship_Text_2:
# 148 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Eleven years, paid each term. I handled\n"
	.string "the arrangements myself.$"

tarc3_Accusation_EventScript_Ev_BreadEraser_Text_0:
# 160 "data/scripts/tarc3_accusation_evidence.pory"
	.string "There is a dry loaf in Ichiro's art bag.\p"
	.string "Artists use bread to lift charcoal from\n"
	.string "a page.$"

tarc3_Accusation_EventScript_Ev_BreadEraser_Text_1:
# 162 "data/scripts/tarc3_accusation_evidence.pory"
	.string "There's bread in my cabin too.\p"
	.string "I'm a chef, {PLAYER} - I made bread\n"
	.string "for the entire wedding party.\p"
	.string "Are you accusing me, too?$"

tarc3_Accusation_EventScript_Ev_BreadEraser_Text_2:
# 164 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Absurd, Joji.$"

tarc3_Accusation_EventScript_Ev_BreadEraser_Text_3:
# 166 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Bread. You have brought this room\n"
	.string "bread.$"

tarc3_Accusation_EventScript_Ev_BreadEraser_Text_4:
# 167 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Do continue, {PLAYER} Edgeworth. It\n"
	.string "is riveting.$"

tarc3_Accusation_EventScript_Ev_UnrequitedLove_Text_0:
# 177 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The man who asked for Natsue's hand\n"
	.string "drew no other subject.\p"
	.string "It was Ichiro. Four years of art,\n"
	.string "primarily of her.$"

tarc3_Accusation_EventScript_Ev_UnrequitedLove_Text_1:
# 184 "data/scripts/tarc3_accusation_evidence.pory"
	.string "What?! Ichiro and... Natsue?$"

tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal_Text_0:
# 197 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The sponsorship was not lapsing\n"
	.string "quietly.\p"
	.string "Gozo was severing the very career he\n"
	.string "had spent eleven years paying to build.$"

tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal_Text_1:
# 199 "data/scripts/tarc3_accusation_evidence.pory"
	.string "And he made certain it was heard. That\n"
	.string "was his way.$"

tarc3_Accusation_EventScript_Ev_SponsorshipWithdrawal_Text_2:
# 201 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...It was.$"

tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_0:
# 213 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Inside that doorway, in the blood\n"
	.string "itself, there were crumbs.\p"
	.string "Dry, and black with charcoal. They came\n"
	.string "off an artist's eraser.$"

tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_1:
# 215 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Crumbs. You are standing amongst a\n"
	.string "dead man's family, telling us about\l"
	.string "crumbs.$"

tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_2:
# 217 "data/scripts/tarc3_accusation_evidence.pory"
	.string "In the blood, Joji. Not beside it. The\n"
	.string "distinction is the entire point.\p"
	.string "They fell while it was still wet - from\n"
	.string "the cuff of the hand holding the knife.$"

tarc3_Accusation_EventScript_Ev_ArtistAtTheDoor_Text_3:
# 219 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...Ah.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_0:
# 233 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You have all settled on a sponsorship\n"
	.string "that simply ran its course.\p"
	.string "Discard that.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_1:
# 234 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He asked Gozo for permission to court\n"
	.string "Natsue, and was refused.\p"
	.string "In that same week, Gozo announced her\n"
	.string "engagement to Takeshi.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_2:
# 235 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Then, on the deck this afternoon, Gozo\n"
	.string "told us he was finished paying for the\l"
	.string "boy.\p"
	.string "Not privately. He performed it, before\n"
	.string "his family, with Ichiro standing eight\l"
	.string "feet away.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_3:
# 236 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Gozo refused him twice over. His love,\n"
	.string "and his art.\p"
	.string "Two humiliations - and to Ichiro, they\n"
	.string "were one and the same wound.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_4:
# 245 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Twice refused. I can... I can see the\n"
	.string "source of his anger.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_5:
# 248 "data/scripts/tarc3_accusation_evidence.pory"
	.string "A motive. At last, a motive.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_6:
# 249 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Do not preen, {PLAYER} Edgeworth. It\n"
	.string "took you all evening.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_7:
# 252 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You have just proved that Ichiro had\n"
	.string "every reason to kill him.$"

tarc3_Accusation_EventScript_Ev_TwinRefusal_Text_8:
# 253 "data/scripts/tarc3_accusation_evidence.pory"
	.string "And you named Takeshi.\p"
	.string "Do you hear yourself?$"

tarc3_Accusation_EventScript_Ev_TakeshisMeeting_Text_0:
# 263 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Gozo summoned Takeshi to his cabin\n"
	.string "before dinner.$"

tarc3_Accusation_EventScript_Ev_TakeshisMeeting_Text_1:
# 265 "data/scripts/tarc3_accusation_evidence.pory"
	.string "So the last appointment my father ever\n"
	.string "kept was with him.$"

tarc3_Accusation_EventScript_Ev_TakeshisHistory_Text_0:
# 277 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Gozo ruined Takeshi's father.\p"
	.string "The man lost his company, and took his\n"
	.string "own life the spring after.$"

tarc3_Accusation_EventScript_Ev_TakeshisHistory_Text_1:
# 279 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...Yes. A cruel tale, and one not easily\n"
	.string "forgotten.$"

tarc3_Accusation_EventScript_Ev_FamilyPicture_Text_0:
# 290 "data/scripts/tarc3_accusation_evidence.pory"
	.string "A photograph from Takeshi's cabin.\p"
	.string "A boy, smiling, flanked by his father.$"

tarc3_Accusation_EventScript_Ev_FamilyPicture_Text_1:
# 292 "data/scripts/tarc3_accusation_evidence.pory"
	.string "But why is this relevant?$"

tarc3_Accusation_EventScript_Ev_FamilyPicture_Text_2:
# 294 "data/scripts/tarc3_accusation_evidence.pory"
	.string "It is not.\p"
	.string "A photograph of a man proves nothing,\n"
	.string "and you know it.$"

tarc3_Accusation_EventScript_Ev_OverheardArgument_Text_0:
# 304 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Mariko overheard Gozo and Takeshi in\n"
	.string "argument before dinner.$"

tarc3_Accusation_EventScript_Ev_OverheardArgument_Text_1:
# 306 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I did. Through the cabin wall, and\n"
	.string "neither voice was calm.$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_0:
# 317 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Gozo summoned him to that cabin before\n"
	.string "dinner.\p"
	.string "And a little while later, Suzuki found\n"
	.string "his flower lying outside the door.$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_1:
# 319 "data/scripts/tarc3_accusation_evidence.pory"
	.string "There. That is the whole of it, and we\n"
	.string "have known it all night.$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_2:
# 321 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He lost that garland before that point!\n"
	.string "He told you that!$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_3:
# 323 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Takeshi$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_4:
# 324 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I did go in. I'm not going to pretend I\n"
	.string "didn't.$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_5:
# 325 "data/scripts/tarc3_accusation_evidence.pory"
	.string "But he was alive when I left him.$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_6:
# 327 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Sure.$"

tarc3_Accusation_EventScript_Ev_GozosFinalMeeting_Text_7:
# 330 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He told us a great many things.$"

tarc3_Accusation_EventScript_Ev_TakeshisRevenge_Text_0:
# 342 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Takeshi entered Hatamoto Corp two\n"
	.string "years ago.\p"
	.string "The company belonging to the man who\n"
	.string "destroyed his father.$"

tarc3_Accusation_EventScript_Ev_TakeshisRevenge_Text_1:
# 344 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Nobody does that by accident.$"

tarc3_Accusation_EventScript_Ev_TakeshisRevenge_Text_2:
# 346 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He came to us on purpose. He was always\n"
	.string "here on purpose.$"

tarc3_Accusation_EventScript_Ev_CharcoalOnBolt_Text_0:
# 363 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The bolt on the hold door carries a\n"
	.string "smear of black dust.\p"
	.string "Charcoal.$"

tarc3_Accusation_EventScript_Ev_CharcoalOnBolt_Text_1:
# 365 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Are you certain? It would have rubbed\n"
	.string "off when you inspected it, surely?$"

tarc3_Accusation_EventScript_Ev_CharcoalOnBolt_Text_2:
# 367 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He is right, and you have no answer for\n"
	.string "him.\p"
	.string "Do not present what you cannot defend.$"

tarc3_Accusation_EventScript_Ev_LongAbsence_Text_0:
# 377 "data/scripts/tarc3_accusation_evidence.pory"
	.string "By all accounts, Ichiro left the table\n"
	.string "well before the lights failed.\p"
	.string "He was absent long enough.$"

tarc3_Accusation_EventScript_Ev_LongAbsence_Text_1:
# 379 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The poor boy was stressed. We all have\n"
	.string "been, tonight.$"

tarc3_Accusation_EventScript_Ev_LongAbsence_Text_2:
# 381 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You would do well to remember,\n"
	.string "{PLAYER} Edgeworth, that an absence\l"
	.string "alone is not a crime.$"

tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_0:
# 391 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Mariko has maintained it all evening.\n"
	.string "Takeshi had help from someone aboard.$"

tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_1:
# 393 "data/scripts/tarc3_accusation_evidence.pory"
	.string "At last. Thank you.\p"
	.string "An accomplice explains every locked\n"
	.string "door on this ship.$"

tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_2:
# 395 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You have agreed with the loudest\n"
	.string "person in the room.$"

tarc3_Accusation_EventScript_Ev_AnAccomplice_Text_3:
# 396 "data/scripts/tarc3_accusation_evidence.pory"
	.string "That is not deduction. That is\n"
	.string "surrender.$"

tarc3_Accusation_EventScript_Ev_OpenServiceDoor_Text_0:
# 406 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The service door beside the bathroom\n"
	.string "does not latch.\p"
	.string "Anyone at all could pass through it\n"
	.string "unseen.$"

tarc3_Accusation_EventScript_Ev_OpenServiceDoor_Text_1:
# 408 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...That is true. I have asked twice for it\n"
	.string "to be repaired.$"

tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_0:
# 419 "data/scripts/tarc3_accusation_evidence.pory"
	.string "There is a smear on the steps down to\n"
	.string "the hold.\p"
	.string "Blood, with black dust worked through\n"
	.string "it.$"

tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_1:
# 420 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The same charcoal that is on the bolt\n"
	.string "at the bottom of those stairs.\p"
	.string "One pair of hands left both marks.$"

tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_2:
# 422 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Or the boy left them climbing up.$"

tarc3_Accusation_EventScript_Ev_BloodOnTheStair_Text_3:
# 424 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Takeshi was still bolted in. Someone\n"
	.string "came down these stairs to let him out.\p"
	.string "And he was already carrying Tatsuo with\n"
	.string "him.$"

tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_0:
# 435 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Natsue, Franziska and I heard two\n"
	.string "sounds from the deck.\p"
	.string "A splash, and then something heavy\n"
	.string "striking the floor.$"

tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_1:
# 436 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The order is decisive. The splash came\n"
	.string "first.\p"
	.string "Someone stood at that rail, disposing\n"
	.string "of the knife that killed Gozo.$"

tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_2:
# 437 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Tatsuo saw the weapon go over the side.\n"
	.string "That is the entire reason he is dead.$"

tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_3:
# 439 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Or, an accomplice.\p"
	.string "It has always been an accomplice, and\n"
	.string "you have never once dealt with it!$"

tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_4:
# 441 "data/scripts/tarc3_accusation_evidence.pory"
	.string "There is no accomplice.\p"
	.string "There is one man disposing of a weapon,\n"
	.string "and the misfortune of being observed.$"

tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_5:
# 442 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Akie$"

tarc3_Accusation_EventScript_Ev_SilencedWitness_Text_6:
# 449 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I yelled at him.\p"
	.string "He went to the deck to give me space... I\n"
	.string "did this.$"

tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_0:
# 459 "data/scripts/tarc3_accusation_evidence.pory"
	.string "On the matter of the supposed\n"
	.string "accomplice.\p"
	.string "Takeshi heard his door unbolted, and\n"
	.string "footsteps departing. Someone released\l"
	.string "him.\p"
	.string "From that moment, a man moved freely\n"
	.string "about this ship whom nobody could\l"
	.string "account for.$"

tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_1:
# 461 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Someone let him out. I have said so from\n"
	.string "the start.$"

tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_2:
# 464 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I didn't unlock that door. I've told you.\n"
	.string "I heard it open.$"

tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_3:
# 466 "data/scripts/tarc3_accusation_evidence.pory"
	.string "By itself.$"

tarc3_Accusation_EventScript_Ev_TheAccompliceTheory_Text_4:
# 469 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Then where is this accomplice? Name one\n"
	.string "person in this room.$"

tarc3_Accusation_EventScript_Ev_SmeargleRepertoire_Text_0:
# 483 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Ichiro's Smeargle battled me this\n"
	.string "afternoon. It possessed no Electric\l"
	.string "move.\p"
	.string "I have the notes.$"

tarc3_Accusation_EventScript_Ev_SmeargleRepertoire_Text_1:
# 485 "data/scripts/tarc3_accusation_evidence.pory"
	.string "It's an artist, like its trainer. It never\n"
	.string "needed one.$"

tarc3_Accusation_EventScript_Ev_TheOddBattle_Text_0:
# 496 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Ichiro asked you for a battle, but\n"
	.string "barely attacked.\p"
	.string "His Smeargle stood and studied your\n"
	.string "moves.$"

tarc3_Accusation_EventScript_Ev_TheOddBattle_Text_1:
# 498 "data/scripts/tarc3_accusation_evidence.pory"
	.string "My Pawmot used Discharge in front of\n"
	.string "it... But I didn't think anything of it.$"

tarc3_Accusation_EventScript_Ev_FocusedBurn_Text_0:
# 509 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The burn on the breaker is narrow. A\n"
	.string "single strike; a calculated discharge.$"

tarc3_Accusation_EventScript_Ev_FocusedBurn_Text_1:
# 511 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...A focused jolt. That isn't faulty\n"
	.string "wiring.$"

tarc3_Accusation_EventScript_Ev_TheHoldAdjoins_Text_0:
# 522 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The storeroom in which Takeshi was\n"
	.string "locked sits on the same deck as the\l"
	.string "breaker panel.$"

tarc3_Accusation_EventScript_Ev_TheHoldAdjoins_Text_1:
# 524 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...That is true. Once out, he had easy\n"
	.string "access.$"

tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge_Text_0:
# 535 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Ichiro's Smeargle acquired an Electric\n"
	.string "move during this voyage.\p"
	.string "It sketched Discharge from Kitaro's\n"
	.string "Pawmot - and it did so on Ichiro's\l"
	.string "instruction.$"

tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge_Text_1:
# 537 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I didn't notice it, and Ichiro surely\n"
	.string "wouldn't think to do that in a battle.$"

tarc3_Accusation_EventScript_Ev_SmeargleKnowsDischarge_Text_2:
# 539 "data/scripts/tarc3_accusation_evidence.pory"
	.string "So at best, either of them could have\n"
	.string "done it.\p"
	.string "We are all still in the dark. How\n"
	.string "appropriate.$"

tarc3_Accusation_EventScript_Ev_PanelStruck_Text_0:
# 550 "data/scripts/tarc3_accusation_evidence.pory"
	.string "That panel did not short.\p"
	.string "It was struck once, from outside the\n"
	.string "casing, by a single focused jolt of\l"
	.string "electricity.$"

tarc3_Accusation_EventScript_Ev_PanelStruck_Text_1:
# 552 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I said the wiring was old. I believed it,\n"
	.string "too.$"

tarc3_Accusation_EventScript_Ev_PanelStruck_Text_2:
# 553 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...I am less certain now.$"

tarc3_Accusation_EventScript_Ev_TheNearestHand_Text_0:
# 564 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The hold shares a deck with the\n"
	.string "breaker, and the service door nearest\l"
	.string "it does not latch.\p"
	.string "The escaped man was at liberty\n"
	.string "precisely where the lights died.$"

tarc3_Accusation_EventScript_Ev_TheNearestHand_Text_1:
# 566 "data/scripts/tarc3_accusation_evidence.pory"
	.string "So he walked out of a room he was locked\n"
	.string "in and just put his hand on a switch.$"

tarc3_Accusation_EventScript_Ev_TheNearestHand_Text_2:
# 573 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...I know how it sounds.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_0:
# 588 "data/scripts/tarc3_accusation_evidence.pory"
	.string "We have all heard of the ship's alleged\n"
	.string "old wiring. Discard it.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_1:
# 589 "data/scripts/tarc3_accusation_evidence.pory"
	.string "That panel did not short.\p"
	.string "It was struck once, from outside the\n"
	.string "casing, by a focused jolt of\l"
	.string "electricity.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_2:
# 590 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Ichiro's Smeargle carried no Electric\n"
	.string "move when it battled me this afternoon.\p"
	.string "I have the notes. Tonight it knows\n"
	.string "Discharge - sketched from Kitaro's\l"
	.string "Pawmot, on Ichiro's instruction.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_3:
# 591 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The blackout was a Pokemon's move,\n"
	.string "aimed at a breaker.\p"
	.string "And precisely one Pokemon aboard this\n"
	.string "ship learned to produce it today.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_4:
# 599 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I said the wiring was old. I was so\n"
	.string "confident it was a coincidence.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_5:
# 600 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I... was wrong.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_6:
# 603 "data/scripts/tarc3_accusation_evidence.pory"
	.string "A Pokemon's move, aimed at a breaker.\n"
	.string "That is incontrovertible.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_7:
# 604 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...Adequate, {PLAYER} Edgeworth.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_8:
# 607 "data/scripts/tarc3_accusation_evidence.pory"
	.string "That was flawless, and it points\n"
	.string "squarely at a man you did not accuse.$"

tarc3_Accusation_EventScript_Ev_SketchedDischarge_Text_9:
# 608 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You are prosecuting your own case into\n"
	.string "the ground.$"

tarc3_Accusation_EventScript_Ev_NoDefensiveWounds_Text_0:
# 620 "data/scripts/tarc3_accusation_evidence.pory"
	.string "There are no defensive wounds on his\n"
	.string "hands. No cuts to the forearms.\p"
	.string "Nothing whatsoever.$"

tarc3_Accusation_EventScript_Ev_NoDefensiveWounds_Text_1:
# 622 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You're saying he did that to himself.\p"
	.string "Say it properly, if you're going to say\n"
	.string "it in front of him.$"

tarc3_Accusation_EventScript_Ev_TheSecondStory_Text_0:
# 633 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Ichiro told us he saw nothing at all.\p"
	.string "Yet pressed upon it, he described the\n"
	.string "knife coming down - in a room with no\l"
	.string "light in it.$"

tarc3_Accusation_EventScript_Ev_TheSecondStory_Text_1:
# 634 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Ichiro$"

tarc3_Accusation_EventScript_Ev_TheSecondStory_Text_2:
# 636 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I heard it. I must have heard it.$"

tarc3_Accusation_EventScript_Ev_ImpossiblePrecision_Text_0:
# 647 "data/scripts/tarc3_accusation_evidence.pory"
	.string "One clean, careful wound, in a non-vital\n"
	.string "place.\p"
	.string "Placed in total darkness, upon a man\n"
	.string "who claims he never saw his attacker.$"

tarc3_Accusation_EventScript_Ev_ImpossiblePrecision_Text_1:
# 649 "data/scripts/tarc3_accusation_evidence.pory"
	.string "In the dark, into a struggling man... no.\p"
	.string "That cut was placed slowly.$"

tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_0:
# 660 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The first knife went into the sea, and\n"
	.string "the man who threw it killed to keep that\l"
	.string "quiet.\p"
	.string "The second was left lying on a bathroom\n"
	.string "floor, six feet from Ichiro.$"

tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_1:
# 662 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He was on the floor. There was blood on\n"
	.string "the tiles - I saw it, I was there.$"

tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_2:
# 664 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I know you were.$"

tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_3:
# 666 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Why hide one blade and abandon the\n"
	.string "other?$"

tarc3_Accusation_EventScript_Ev_InconsistentDisposal_Text_4:
# 668 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Yes. Why indeed.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_0:
# 682 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He did it to himself.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_1:
# 685 "data/scripts/tarc3_accusation_evidence.pory"
	.string "One cut. Clean, and in a non-vital\n"
	.string "location.\p"
	.string "Delivered in a room with no light in it\n"
	.string "whatsoever.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_2:
# 686 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Consider the others. Gozo was stabbed\n"
	.string "relentlessly.\p"
	.string "Tatsuo took a vicious blow to the back\n"
	.string "of the head.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_3:
# 687 "data/scripts/tarc3_accusation_evidence.pory"
	.string "And yet there is not one defensive mark\n"
	.string "upon Ichiro's hands.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_4:
# 688 "data/scripts/tarc3_accusation_evidence.pory"
	.string "The knife then presents itself six feet\n"
	.string "from him, on the bathroom floor.\p"
	.string "The first weapon went into the sea, and\n"
	.string "the man who threw it killed to keep that\l"
	.string "quiet.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_5:
# 689 "data/scripts/tarc3_accusation_evidence.pory"
	.string "He did not conceal the second blade,\n"
	.string "because he never intended to leave\l"
	.string "that room carrying it.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_6:
# 696 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Fools. Every last one of you.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_7:
# 699 "data/scripts/tarc3_accusation_evidence.pory"
	.string "You have just told this room that\n"
	.string "Ichiro wounded himself.$"

tarc3_Accusation_EventScript_Ev_SelfInflictedWound_Text_8:
# 700 "data/scripts/tarc3_accusation_evidence.pory"
	.string "And you named Takeshi.\p"
	.string "I have no words for you.$"

tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_0:
# 710 "data/scripts/tarc3_accusation_evidence.pory"
	.string "There is a sack of maintenance\n"
	.string "equipment on the foredeck, with two\l"
	.string "lengths of pipe jutting out of the top\l"
	.string "of it.\p"
	.string "Every one of you has walked past it all\n"
	.string "evening and taken it for ship's stores.$"

tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_1:
# 711 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Tatsuo broke those fittings himself\n"
	.string "this afternoon and hid them in there.\p"
	.string "He told me so, laughing.$"

tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_2:
# 713 "data/scripts/tarc3_accusation_evidence.pory"
	.string "...That is exactly the sort of thing he\n"
	.string "would do.$"

tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_3:
# 715 "data/scripts/tarc3_accusation_evidence.pory"
	.string "One of those two pipes has his blood on\n"
	.string "it, and it is still in that sack.\p"
	.string "The weapon that killed him was lying a\n"
	.string "step from where he stood.$"

tarc3_Accusation_EventScript_Ev_HiddenPipe_Text_4:
# 716 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Nothing was carried out onto that deck.\n"
	.string "Whoever went out to be rid of the knife\l"
	.string "took up the first heavy thing he\l"
	.string "stumbled over - because he had not\l"
	.string "gone out there to kill anybody.$"

tarc3_Accusation_EventScript_Ev_KnivesCounted_Text_0:
# 727 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Before dinner Joji told me he had used\n"
	.string "his knives when preparing dinner.$"

tarc3_Accusation_EventScript_Ev_KnivesCounted_Text_1:
# 729 "data/scripts/tarc3_accusation_evidence.pory"
	.string "I had all eight. I would swear to it.\p"
	.string "I count them the way you'd count your\n"
	.string "fingers.$"

tarc3_Accusation_EventScript_Ev_KnivesCounted_Text_2:
# 731 "data/scripts/tarc3_accusation_evidence.pory"
	.string "Then both of the missing knives left\n"
	.string "that roll tonight.\p"
	.string "Nothing came aboard for this.\n"
	.string "Everything used was found here.$"
