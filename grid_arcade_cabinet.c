#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	struct<22> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<453> Local_135 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -2147483647, -1, 4, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, 4, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, 0, -1, 0, 4, 0, 0, 0, 0, 0, -1, 0, -1, -2147483647, 0, -1, -1, -2147483647, 0, -2147483647, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0 } ;
	struct<166> Local_136 = { 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -2147483647, 4, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 3, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 10 } ;
	var uLocal_137 = 0;
	var uLocal_138 = -1;
	var uLocal_139 = -1;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = -1;
	var uLocal_143 = 0;
	var uLocal_144 = -1;
	var uLocal_145 = -1;
	var uLocal_146 = 0;
	var uLocal_147 = -1;
	var uLocal_148 = -1;
	var uLocal_149 = 0;
	var uLocal_150 = -1;
	var uLocal_151 = -1;
	var uLocal_152 = 0;
	var uLocal_153 = -1;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = -1;
	var uLocal_157 = -1;
	var uLocal_158 = 0;
	var uLocal_159 = -1;
	var uLocal_160 = -1;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = -1;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = -1;
	var uLocal_167 = 4;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172[4] = { 0, 0, 0, 0 };
	struct<9> Local_173[4];
	struct<16> Local_174[4];
	struct<37> Local_175[4];
	struct<17> Local_176 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_177 = 255;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 255;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 255;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 255;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 255;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 255;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 255;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 255;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 255;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 255;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 255;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 255;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 255;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 255;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 255;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<21> Local_301 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_106 = -1;
	fLocal_108 = 0.5f;
	if (network_is_game_in_progress())
	{
		func_400(ScriptParam_301);
	}
	while (true)
	{
		func_399();
		if (network_is_game_in_progress())
		{
			func_47();
		}
		else
		{
			func_9();
		}
		if (func_1())
		{
			func_9();
		}
	}
}

int func_1()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_8())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_7())
	{
		return 1;
	}
	if (func_6(159))
	{
		if (!func_5())
		{
			return 1;
		}
	}
	if (func_6(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_2() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_2()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	switch (func_4())
	{
		case 0:
			return func_3();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_3()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_4()
{
	return Global_31959;
}

bool func_5()
{
	return Global_2714762.f_698;
}

int func_6(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return Global_2725403;
}

bool func_8()
{
	return Global_2714762.f_693;
}

void func_9()
{
	func_11();
	func_10();
}

void func_10()
{
	terminate_this_thread();
}

void func_11()
{
	int iVar0;
	
	if (func_46())
	{
		Local_134.f_16 = 1;
	}
	Local_134.f_21 = func_43();
	func_42();
	func_20();
	set_streamed_texture_dict_as_no_longer_needed("MPArcadeCabinetGrid");
	set_streamed_texture_dict_as_no_longer_needed("MPArcadeCabinetGridTiles");
	set_streamed_texture_dict_as_no_longer_needed("MPArcadeCabinetGridPlayerBlue");
	set_streamed_texture_dict_as_no_longer_needed("MPArcadeCabinetGridPlayerGreen");
	set_streamed_texture_dict_as_no_longer_needed("MPArcadeCabinetGridPlayerPurple");
	set_streamed_texture_dict_as_no_longer_needed("MPArcadeCabinetGridPlayerYellow");
	set_streamed_texture_dict_as_no_longer_needed("MPArcadeCabinetGridHUD");
	clear_additional_text(3, true);
	if (Local_135.f_427 != 0)
	{
		_release_bink_movie(Local_135.f_427);
	}
	if (is_audio_scene_active("dlc_vw_am_tw_in_menus_scene"))
	{
		stop_audio_scene("dlc_vw_am_tw_in_menus_scene");
	}
	if (is_audio_scene_active("dlc_vw_am_tw_in_gameplay_scene"))
	{
		stop_audio_scene("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (is_audio_scene_active("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		stop_audio_scene("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_18(func_19(4));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_135.f_281[iVar0 /*7*/].f_5 >= 0)
		{
			stop_sound(Local_135.f_281[iVar0 /*7*/].f_5);
			release_sound_id(Local_135.f_281[iVar0 /*7*/].f_5);
		}
		if (Local_135.f_281[iVar0 /*7*/].f_6 >= 0)
		{
			stop_sound(Local_135.f_281[iVar0 /*7*/].f_6);
			release_sound_id(Local_135.f_281[iVar0 /*7*/].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_135.f_204[iVar0 /*19*/].f_7 >= 0)
		{
			stop_sound(Local_135.f_204[iVar0 /*19*/].f_7);
			release_sound_id(Local_135.f_204[iVar0 /*19*/].f_7);
		}
		if (Local_135.f_204[iVar0 /*19*/].f_6 >= 0)
		{
			stop_sound(Local_135.f_204[iVar0 /*19*/].f_6);
			release_sound_id(Local_135.f_204[iVar0 /*19*/].f_6);
		}
		if (Local_135.f_204[iVar0 /*19*/].f_8 >= 0)
		{
			stop_sound(Local_135.f_204[iVar0 /*19*/].f_8);
			release_sound_id(Local_135.f_204[iVar0 /*19*/].f_8);
		}
		iVar0++;
	}
	if (Local_135.f_178.f_4 >= 0)
	{
		stop_sound(Local_135.f_178.f_4);
		release_sound_id(Local_135.f_178.f_4);
	}
	if (Local_135.f_428 >= 0)
	{
		stop_sound(Local_135.f_428);
		release_sound_id(Local_135.f_428);
	}
	release_named_script_audio_bank("DLC_VINEWOOD/DLC_VW_AM_TW");
	func_16();
	func_15(12);
	Global_1931416 = 0;
	Global_1931416.f_1 = 0;
	func_12(0);
	func_10();
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		if (!func_13(player_id()))
		{
			set_bit(&(Global_2689235[player_id() /*453*/].f_428), 4);
		}
	}
	else if (func_13(player_id()))
	{
		clear_bit(&(Global_2689235[player_id() /*453*/].f_428), 4);
	}
}

int func_13(int iParam0)
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_428, 4);
	}
	return 0;
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	Local_135.f_140 = iParam0;
}

void func_16()
{
	Local_135.f_442 = -1;
	Local_135.f_421 = 0;
	if (Local_135.f_418 != -2147483647)
	{
		Local_135.f_418 = -2147483647;
	}
	if (!is_string_null_or_empty(Local_135.f_419))
	{
		Local_135.f_419 = func_17();
	}
	if (is_help_message_being_displayed())
	{
		clear_help(true);
	}
}

var func_17()
{
	var uVar0;
	
	return uVar0;
}

void func_18(char* sParam0)
{
	trigger_music_event(sParam0);
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_TW_TITLE_START";
		
		case 1:
			return "CASINO_TW_GAMEPLAY";
		
		case 2:
			return "CASINO_TW_MID_ROUND";
		
		case 3:
			return "CASINO_TW_SUDDEN_DEATH";
		
		case 4:
			return "CASINO_TW_STOP_MUSIC";
		
		default:
	}
	return "INVALID MUSIC EVENT";
}

void func_20()
{
	Global_1640770 = 0;
	func_40();
	Global_4718592.f_163007 = 0;
	func_39();
	clear_bit(&(Global_1853348[player_id() /*834*/].f_833), 16);
	func_38(0, 1, 1, 0);
	func_37();
	if (func_35() && !is_new_load_scene_active())
	{
		if (network_is_game_in_progress())
		{
			func_22(player_id(), 1, 0, 0);
		}
		else
		{
			set_player_control(player_id(), true, 0);
		}
	}
	func_21(0, 0, -1);
	func_21(1, 0, -1);
	func_21(2, 0, -1);
	func_21(3, 0, -1);
	func_21(4, 0, -1);
	func_21(6, 0, -1);
	func_21(7, 0, -1);
	func_21(8, 0, -1);
	func_21(9, 0, -1);
	func_21(10, 0, -1);
	func_21(11, 0, -1);
	func_21(12, 0, -1);
	func_21(13, 0, -1);
	func_21(14, 0, -1);
	func_21(15, 0, -1);
	func_21(16, 0, -1);
}

void func_21(bool bParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1648034.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				set_bit(&(Global_1648034.f_1046), iParam0);
			}
			else
			{
				clear_bit(&(Global_1648034.f_1046), bParam0);
			}
			break;
	}
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (get_no_loading_screen())
		{
			set_no_loading_screen(false);
		}
	}
	if (func_34())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!network_is_game_in_progress())
	{
		iVar0 = iParam2;
		set_player_control(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || network_is_activity_session())
		{
			bVar1 = false;
		}
		if (!func_35())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (network_is_player_active(iParam0) && (is_player_playing(iParam0) || iParam3 == 1))
		{
			if (iParam3 && is_entity_dead(get_player_ped(iParam0), false))
			{
				return;
			}
			iVar27 = get_player_ped(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && network_is_game_in_progress())
				{
					fade_out_local_player(true);
				}
				else if (bVar14 || (!func_31(player_id(), 0) && !func_30()))
				{
					set_entity_visible(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (network_is_game_in_progress() && !bVar19)
					{
						fade_out_local_player(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_27(0, 0, 0);
					if (bVar25)
					{
						clear_focus();
					}
				}
				if (!func_26(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
				{
					if (!bVar22)
					{
						set_entity_collision(iVar27, true, false);
					}
				}
				if (!is_entity_attached(iVar27))
				{
					if (!bVar21)
					{
						freeze_entity_position(iVar27, false);
					}
					_set_entity_cleanup_by_engine(iVar27, true);
				}
				else if (!bVar21)
				{
					freeze_entity_position(iVar27, false);
				}
				set_ped_can_be_targetted(iVar27, true);
				set_player_invincible(iParam0, false);
				_set_player_invincible_keep_ragdoll_enabled(iParam0, false);
				if (has_ped_head_blend_finished(iVar27) && have_all_streaming_requests_completed(iVar27))
				{
					finalize_head_blend(iVar27);
				}
				set_ped_can_ragdoll(iVar27, true);
				if (is_player_control_on(player_id()) == 0)
				{
					func_25();
					func_24();
				}
				if (is_player_teleport_active())
				{
					if (!bVar23)
					{
					}
				}
				if (is_new_load_scene_active())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_26(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
				{
					if (!bVar22)
					{
						set_entity_collision(iVar27, !bVar15, false);
					}
					if (!is_entity_attached(iVar27))
					{
						if (!bVar21)
						{
							freeze_entity_position(iVar27, bVar16);
						}
						if (!bVar16)
						{
							_set_entity_cleanup_by_engine(iVar27, true);
						}
					}
					if (func_23(Global_4718592.f_168757))
					{
						freeze_entity_position(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					set_player_invincible(iParam0, false);
				}
				else
				{
					set_player_invincible(iParam0, true);
				}
				set_ped_can_be_targetted(iVar27, bVar17);
				if (bVar3)
				{
					if (!is_ped_fatally_injured(iVar27) && !is_ped_in_any_vehicle(iVar27, false))
					{
						clear_ped_tasks_immediately(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			set_player_control(iParam0, bParam1, iVar28);
		}
	}
}

bool func_23(int iParam0)
{
	return iParam0 == 17;
}

void func_24()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_25()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[player_id() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_27(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (is_entity_dead(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (does_entity_exist(iParam1))
		{
			if (is_ped_a_player(iParam1))
			{
				if (!_network_is_player_equal_to_index(player_id(), network_get_player_index_from_ped(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_29();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						set_cam_view_mode_for_context(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				set_bit(&(Global_2621446.f_67), true);
			}
		}
		if (func_31(player_id(), 0))
		{
			network_set_in_spectator_mode_extended(bParam0, iParam1, true);
		}
		else
		{
			network_set_in_spectator_mode(bParam0, iParam1);
		}
		set_minimap_in_spectator_mode(bParam0, iParam1);
		func_28(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_28(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_bool(iVar0, bParam1, true);
	}
}

void func_29()
{
	int iVar0;
	
	if (!network_is_in_spectator_mode())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = get_cam_view_mode_for_context(iVar0);
				iVar0++;
			}
			set_bit(&(Global_2621446.f_67), 2);
			set_bit(&(Global_2621446.f_67), false);
		}
	}
}

bool func_30()
{
	return BitTest(Global_2621446, 3);
}

bool func_31(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_32(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			bVar0 = get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_33();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_33()
{
	return Global_1574918;
}

int func_34()
{
	if (BitTest(Global_1853348[player_id() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (func_36() == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	return Global_1574632.f_18;
}

void func_37()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

int func_38(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_39()
{
	if (Global_1931939)
	{
	}
	Global_1931939 = 0;
}

void func_40()
{
	if (!Global_1574747)
	{
		return;
	}
	func_41();
}

void func_41()
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_42()
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (is_string_null_or_empty(&Local_134))
	{
		return;
	}
	if (Local_134.f_19 == 0)
	{
		return;
	}
	Local_134.f_19 = (get_network_time_accurate() - Local_134.f_19);
	unk_0xC9E0752C5AF51DC0(get_hash_key(&Local_134), Local_134.f_16, Local_134.f_17, Local_134.f_18, Local_134.f_19, Local_134.f_20, Local_134.f_21);
}

int func_43()
{
	if (player_id() != func_14())
	{
		switch (func_44())
		{
			case 17:
				return 2003554330;
				break;
			
			case 15:
				return 729976867;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_44()
{
	return func_45(Global_1946250.f_504);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_47()
{
	func_356();
	func_100();
	func_51();
	func_48();
}

void func_48()
{
	func_50();
	if (!func_49())
	{
		hide_help_text_this_frame();
	}
}

bool func_49()
{
	return BitTest(Local_135.f_417, 0);
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			Local_173[iVar0 /*9*/] = { Local_175[iVar0 /*37*/] };
			Local_174[iVar0 /*16*/] = { Local_175[iVar0 /*37*/].f_9 };
		}
		iVar0++;
	}
}

void func_51()
{
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	switch (Local_136.f_145)
	{
		case 0:
			func_98();
			break;
		
		case 1:
			func_92();
			break;
		
		case 2:
			func_86();
			break;
		
		case 3:
			func_85();
			break;
		
		case 4:
			func_65();
			break;
		
		case 5:
			func_52();
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}

void func_52()
{
	if (get_network_time() < Local_136.f_147 + 5000)
	{
		return;
	}
	if (func_64())
	{
		func_63(2);
		return;
	}
	func_53();
	func_63(6);
}

void func_53()
{
	struct<3> Var0;
	int iVar1;
	
	Var0 = 14;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar1)) && !Local_175[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Var0[iVar1 /*3*/] = Local_173[iVar1 /*9*/].f_7;
			Var0[iVar1 /*3*/].f_1 = Local_173[iVar1 /*9*/].f_8;
			Var0[iVar1 /*3*/].f_2 = iVar1;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Var0[iVar1 + 4 /*3*/] = Local_136.f_165[iVar1 /*3*/];
		Var0[iVar1 + 4 /*3*/].f_2 = Local_136.f_165[iVar1 /*3*/].f_2;
		Var0[iVar1 + 4 /*3*/].f_1 = Local_136.f_165[iVar1 /*3*/].f_1;
		iVar1++;
	}
	func_62(&Var0, 0, 13);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Local_136.f_165[iVar1 /*3*/] = Var0[iVar1 /*3*/];
		Local_136.f_165[iVar1 /*3*/].f_2 = Var0[iVar1 /*3*/].f_2;
		Local_136.f_165[iVar1 /*3*/].f_1 = Var0[iVar1 /*3*/].f_1;
		func_54(func_56(player_id()), 0, iVar1, Local_136.f_165[iVar1 /*3*/], Local_136.f_165[iVar1 /*3*/].f_1, 0);
		iVar1++;
	}
}

void func_54(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	struct<7> Var0;
	int iVar1;
	
	Var0.f_0 = -105579290;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar1 = func_55(iParam0);
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 7, iVar1);
	}
}

var func_55(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		set_bit(&uVar0, iParam0);
	}
	return uVar0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	if (func_60(iParam0) != -1)
	{
		iVar0 = func_45(func_60(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_58(iParam0, 0))
			{
				return func_57(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_14();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return func_14();
}

int func_57(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_14();
}

bool func_58(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_59(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_14();
}

int func_59(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_14())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_61(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == player_id()) && func_61(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (network_is_player_active(iParam0))
		{
			if (bParam1)
			{
				if (!is_player_playing(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar2 = (uParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (uParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.f_0 = (*uParam0)[iVar0 /*3*/];
			Var3.f_2 = (uParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (uParam0[iVar0 /*3*/])->f_1;
			(*uParam0)[iVar0 /*3*/] = (*uParam0)[iVar1 /*3*/];
			(uParam0[iVar0 /*3*/])->f_2 = (uParam0[iVar1 /*3*/])->f_2;
			(uParam0[iVar0 /*3*/])->f_1 = (uParam0[iVar1 /*3*/])->f_1;
			(*uParam0)[iVar1 /*3*/] = Var3.f_0;
			(uParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(uParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_62(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_62(uParam0, iParam1, iVar1);
	}
}

void func_63(int iParam0)
{
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	Local_136.f_145 = iParam0;
}

int func_64()
{
	int iVar0;
	int iVar1;
	
	if (Local_135.f_148 <= 1)
	{
		return 0;
	}
	if (Local_136.f_137 >= Local_136.f_138)
	{
		return 0;
	}
	iVar0 = floor((to_float(Local_136.f_138) / 2f));
	if (Local_136.f_137 > iVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!network_is_participant_active(int_to_participantindex(iVar1)) && !Local_175[iVar1 /*37*/].f_25)
			{
			}
			else if (Local_173[iVar1 /*9*/].f_6 == -1)
			{
			}
			else if (Local_136.f_139[Local_173[iVar1 /*9*/].f_6] > iVar0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_65()
{
	int iVar0;
	
	func_79();
	func_74(0, 0);
	func_70();
	if (!func_69())
	{
		return;
	}
	iVar0 = func_67();
	if (iVar0 == -1)
	{
		func_74(1, 1);
		Local_136.f_162 = 1;
		return;
	}
	Local_136.f_139[Local_173[iVar0 /*9*/].f_6]++;
	Local_136.f_131[Local_136.f_137] = iVar0;
	Local_136.f_137++;
	Local_136.f_147 = get_network_time();
	if (!func_64())
	{
		Local_136.f_130 = func_66();
	}
	func_63(5);
}

int func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar2)) && !Local_175[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (Local_136.f_139[Local_173[iVar2 /*9*/].f_6] > iVar1)
		{
			iVar0 = iVar2;
			iVar1 = Local_136.f_139[Local_173[iVar2 /*9*/].f_6];
		}
		else if (iVar0 > -1 && Local_136.f_139[Local_173[iVar2 /*9*/].f_6] == iVar1)
		{
			if (Local_173[iVar2 /*9*/].f_8 + iLocal_172[Local_173[iVar2 /*9*/].f_6]) > (Local_173[iVar0 /*9*/].f_8 + iLocal_172[Local_173[iVar0 /*9*/].f_6])
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar2)) && !Local_175[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			if (!Local_136.f_163)
			{
				if (Local_136.f_162 && func_68(iVar2))
				{
				}
				else
				{
					if (Local_136.f_162)
					{
						iVar4 = 0;
					}
					if (iLocal_172[Local_173[iVar2 /*9*/].f_6] > iVar1)
					{
						iVar0 = iVar2;
						iVar1 = iLocal_172[Local_173[iVar2 /*9*/].f_6];
						iVar3 = 0;
					}
					else if (iLocal_172[Local_173[iVar2 /*9*/].f_6] == iVar1)
					{
						iVar3 = 1;
					}
				}
				iVar2++;
				if (iVar3 && !Local_136.f_163)
				{
					iVar0 = -1;
				}
				if (iVar4 && Local_136.f_162)
				{
					Local_136.f_163 = 1;
				}
				return iVar0;
			}

int func_68(int iParam0)
{
	if (Local_173[iParam0 /*9*/] == 3)
	{
		return 1;
	}
	if (Local_173[iParam0 /*9*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	if (!Local_136.f_162 && get_network_time() > (Local_136.f_146 + 120000))
	{
		return 1;
	}
	if (Local_135.f_147 <= 1)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	if (get_network_time() < Local_136.f_161 + 15000)
	{
		return;
	}
	Local_136.f_161 = get_network_time();
	if (func_73())
	{
		bVar3 = func_73();
		bVar0 = get_random_int_in_range(0, 13);
		if ((bVar0 % 2) != 0)
		{
			bVar0++;
			if (bVar0 >= 13)
			{
				bVar0 = false;
			}
		}
		bVar1 = func_72(bVar3, 8, 0);
		iVar2 = func_72(bVar3, 0, 1);
	}
	else
	{
		bVar4 = func_73();
		bVar0 = func_72(bVar4, 12, 0);
		bVar1 = get_random_int_in_range(0, 9);
		if ((bVar1 % 2) != 0)
		{
			bVar1++;
			if (bVar1 >= 9)
			{
				bVar1 = false;
			}
		}
		iVar2 = func_72(bVar4, 2, 3);
	}
	Local_136.f_148[0 /*4*/] = get_network_time() + 1000;
	Local_136.f_148[0 /*4*/].f_1 = func_71(bVar0, bVar1);
	Local_136.f_148[0 /*4*/].f_2 = iVar2;
	Local_136.f_148[0 /*4*/].f_3 = get_random_int_in_range(0, 5);
}

int func_71(bool bParam0, bool bParam1)
{
	return (bParam0 + bParam1 * 13);
}

int func_72(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_73()
{
	if (BitTest(get_random_int_in_range(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_74(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	if (Local_136.f_162 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_136.f_62[iVar0 /*3*/].f_2 == -2147483647)
		{
		}
		else if (get_network_time() < Local_136.f_62[iVar0 /*3*/].f_2 + 17500)
		{
		}
		else
		{
			Local_136.f_62[iVar0 /*3*/] = -1;
			Local_136.f_62[iVar0 /*3*/].f_1 = -1;
			Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		}
		iVar0++;
	}
	if (get_network_time() < Local_136.f_84 + 20000 && !bParam0)
	{
		return;
	}
	Local_136.f_84 = get_network_time();
	if (bParam1)
	{
		func_78();
	}
	else if ((get_network_time() - Local_136.f_146) < 20000)
	{
		func_77();
	}
	else if ((get_network_time() - Local_136.f_146) >= 20000 && (get_network_time() - Local_136.f_146) < 60000)
	{
		func_76();
	}
	else if ((get_network_time() - Local_136.f_146) < 102500)
	{
		func_75();
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_network_time();
	iVar1 = get_random_int_in_range(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_136.f_62[0 /*3*/].f_1 = 6;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 4;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 4;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 6;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 0;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 1;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 1;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_136.f_62[0 /*3*/].f_1 = 5;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 1;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 1;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 5;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 5;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[0 /*3*/] = 34;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 6;
			Local_136.f_62[1 /*3*/] = 30;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 6;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_136.f_62[0 /*3*/].f_1 = 0;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 0;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 0;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 0;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 7;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 7;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_136.f_62[0 /*3*/].f_1 = 6;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 6;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 6;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 6;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 0;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_76()
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_network_time();
	iVar1 = get_random_int_in_range(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 4;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 4;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 1;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 1;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_136.f_62[0 /*3*/].f_1 = 5;
			Local_136.f_62[0 /*3*/] = 32;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 7;
			Local_136.f_62[1 /*3*/] = 56;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 7;
			Local_136.f_62[2 /*3*/] = 60;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 5;
			Local_136.f_62[3 /*3*/] = 84;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 3;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 3;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 6;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_136.f_62[0 /*3*/].f_1 = 1;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 1;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 1;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 1;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 0;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 0;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_136.f_62[0 /*3*/].f_1 = 0;
			Local_136.f_62[0 /*3*/] = 30;
			Local_136.f_62[0 /*3*/].f_2 = iVar0;
			Local_136.f_62[1 /*3*/].f_1 = 0;
			Local_136.f_62[1 /*3*/] = 34;
			Local_136.f_62[1 /*3*/].f_2 = iVar0;
			Local_136.f_62[2 /*3*/].f_1 = 0;
			Local_136.f_62[2 /*3*/] = 86;
			Local_136.f_62[2 /*3*/].f_2 = iVar0;
			Local_136.f_62[3 /*3*/].f_1 = 0;
			Local_136.f_62[3 /*3*/] = 82;
			Local_136.f_62[3 /*3*/].f_2 = iVar0;
			Local_136.f_62[4 /*3*/].f_1 = 6;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 6;
			Local_136.f_62[5 /*3*/] = 54;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 6;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_77()
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_network_time();
	Local_136.f_62[0 /*3*/].f_1 = 3;
	Local_136.f_62[0 /*3*/] = 32;
	Local_136.f_62[0 /*3*/].f_2 = iVar0;
	Local_136.f_62[1 /*3*/].f_1 = 3;
	Local_136.f_62[1 /*3*/] = 56;
	Local_136.f_62[1 /*3*/].f_2 = iVar0;
	Local_136.f_62[2 /*3*/].f_1 = 3;
	Local_136.f_62[2 /*3*/] = 60;
	Local_136.f_62[2 /*3*/].f_2 = iVar0;
	Local_136.f_62[3 /*3*/].f_1 = 3;
	Local_136.f_62[3 /*3*/] = 84;
	Local_136.f_62[3 /*3*/].f_2 = iVar0;
	iVar1 = get_random_int_in_range(0, 3);
	switch (iVar1)
	{
		case 0:
			Local_136.f_62[4 /*3*/].f_1 = 2;
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_136.f_62[4 /*3*/].f_1 = get_random_int_in_range(4, 6);
			Local_136.f_62[4 /*3*/] = 58;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_136.f_62[4 /*3*/].f_1 = 1;
			Local_136.f_62[4 /*3*/] = 54;
			Local_136.f_62[4 /*3*/].f_2 = iVar0;
			Local_136.f_62[5 /*3*/].f_1 = 1;
			Local_136.f_62[5 /*3*/] = 58;
			Local_136.f_62[5 /*3*/].f_2 = iVar0;
			Local_136.f_62[6 /*3*/].f_1 = 1;
			Local_136.f_62[6 /*3*/] = 62;
			Local_136.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			break;
	}
}

void func_78()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_136.f_62[iVar0 /*3*/] = -1;
		Local_136.f_62[iVar0 /*3*/].f_1 = -1;
		Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar1 = get_network_time();
	Local_136.f_62[0 /*3*/] = 54;
	Local_136.f_62[0 /*3*/].f_2 = iVar1;
	Local_136.f_62[1 /*3*/] = 56;
	Local_136.f_62[1 /*3*/].f_2 = iVar1;
	Local_136.f_62[2 /*3*/] = 58;
	Local_136.f_62[2 /*3*/].f_2 = iVar1;
	Local_136.f_62[3 /*3*/] = 60;
	Local_136.f_62[3 /*3*/].f_2 = iVar1;
	Local_136.f_62[4 /*3*/] = 62;
	Local_136.f_62[4 /*3*/].f_2 = iVar1;
	iVar2 = get_random_int_in_range(0, 5);
	switch (iVar2)
	{
		case 0:
			Local_136.f_62[0 /*3*/].f_1 = 3;
			Local_136.f_62[1 /*3*/].f_1 = 3;
			Local_136.f_62[3 /*3*/].f_1 = 3;
			Local_136.f_62[4 /*3*/].f_1 = 3;
			break;
		
		case 1:
			Local_136.f_62[0 /*3*/].f_1 = 4;
			Local_136.f_62[1 /*3*/].f_1 = 4;
			Local_136.f_62[3 /*3*/].f_1 = 4;
			Local_136.f_62[4 /*3*/].f_1 = 4;
			break;
		
		case 2:
			Local_136.f_62[0 /*3*/].f_1 = 5;
			Local_136.f_62[1 /*3*/].f_1 = 5;
			Local_136.f_62[3 /*3*/].f_1 = 5;
			Local_136.f_62[4 /*3*/].f_1 = 5;
			break;
		
		case 3:
			Local_136.f_62[0 /*3*/].f_1 = 7;
			Local_136.f_62[1 /*3*/].f_1 = 7;
			Local_136.f_62[3 /*3*/].f_1 = 7;
			Local_136.f_62[4 /*3*/].f_1 = 7;
			break;
		
		case 4:
			Local_136.f_62[0 /*3*/].f_1 = 6;
			Local_136.f_62[1 /*3*/].f_1 = 6;
			Local_136.f_62[3 /*3*/].f_1 = 6;
			Local_136.f_62[4 /*3*/].f_1 = 6;
			break;
	}
	iVar2 = get_random_int_in_range(0, 4);
	switch (iVar2)
	{
		case 0:
			Local_136.f_62[2 /*3*/].f_1 = -1;
			Local_136.f_62[2 /*3*/] = -1;
			Local_136.f_62[2 /*3*/].f_2 = -2147483647;
			break;
		
		case 1:
			Local_136.f_62[2 /*3*/].f_1 = 2;
			break;
		
		case 2:
			Local_136.f_62[2 /*3*/].f_1 = 0;
			break;
		
		case 3:
			Local_136.f_62[2 /*3*/].f_1 = 1;
			break;
	}
}

void func_79()
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			iVar3 = func_80(iVar1, iVar2);
			if (Local_136[iVar1 /*5*/][iVar2] != iVar3)
			{
				Local_136[iVar1 /*5*/][iVar2] = iVar3;
			}
			if (iVar3 != -1)
			{
				uVar0[iVar3]++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iLocal_172[iVar1] != uVar0[iVar1])
		{
			iLocal_172[iVar1] = uVar0[iVar1];
		}
		iVar1++;
	}
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_84(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar1)) && !Local_175[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar1 /*9*/].f_6 == -1)
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 - 13)))
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 13) + 1))
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 1)))
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), iVar0 + 1))
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 + 13 - 1)))
		{
		}
		else if (!func_81(&(Local_136.f_85[Local_173[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), iVar0 + 13))
		{
		}
		else
		{
			return Local_173[iVar1 /*9*/].f_6;
		}
		iVar1++;
	}
	return -1;
}

bool func_81(var uParam0, int iParam1)
{
	return BitTest((*uParam0)[func_83(iParam1)], func_82(iParam1));
}

int func_82(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_83(iParam0) * 31);
}

int func_83(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_84(int iParam0, int iParam1)
{
	return func_71((1 + iParam0 * 2), (1 + iParam1 * 2));
}

void func_85()
{
	if (get_network_time() < Local_136.f_146)
	{
		return;
	}
	Local_136.f_84 = Local_136.f_146;
	Local_136.f_161 = Local_136.f_146;
	func_74(1, 0);
	func_63(4);
}

void func_86()
{
	func_87();
	func_63(3);
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	Local_136.f_162 = 0;
	Local_136.f_163 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_136[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_172[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Local_136.f_85[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_135.f_149[iVar0] == -1)
		{
		}
		else
		{
			func_88(iVar0, func_91(iVar0), func_90(iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_136.f_62[iVar0 /*3*/] = -1;
		Local_136.f_62[iVar0 /*3*/].f_1 = -1;
		Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_136.f_148[iVar0 /*4*/] = -2147483647;
		Local_136.f_148[iVar0 /*4*/].f_1 = -1;
		Local_136.f_148[iVar0 /*4*/].f_2 = -1;
		Local_136.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	Local_136.f_146 = ceil((to_float(get_network_time() + 5000) / 1000f)) * 1000;
	func_79();
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_84(iParam1, iParam2);
	if (!(iParam3 && iParam0 == 3))
	{
		func_89(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1));
	}
	if (!(iParam3 && iParam0 == 2))
	{
		func_89(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 - 13));
	}
	func_89(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1));
	func_89(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 13) + 1);
	func_89(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 1));
	func_89(&(Local_136.f_85[iParam0 /*11*/][0 /*5*/]), iVar0 + 1);
	if (!(iParam3 && iParam0 == 1))
	{
		func_89(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 + 13 - 1));
	}
	if (!(iParam3 && iParam0 == 0))
	{
		func_89(&(Local_136.f_85[iParam0 /*11*/][1 /*5*/]), iVar0 + 13);
	}
	Local_136[iParam1 /*5*/][iParam2] = iParam0;
}

void func_89(var uParam0, int iParam1)
{
	set_bit(uParam0[func_83(iParam1)], func_82(iParam1));
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 3;
		
		case 3:
			return 3;
		
		default:
	}
	return -1;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_92()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)) && !Local_175[iVar0 /*37*/].f_25)
		{
		}
		else
		{
			if (Local_173[iVar0 /*9*/].f_6 == -1)
			{
				bVar2 = false;
			}
			else if (Local_173[iVar0 /*9*/] == 0)
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
				iVar0++;
			}
			if (!bVar2)
			{
				if (func_97(&(Local_135.f_314)))
				{
					func_96(&(Local_135.f_314));
				}
				return;
			}
			if (iVar1 <= 1)
			{
				if (func_97(&(Local_135.f_314)))
				{
					func_96(&(Local_135.f_314));
				}
				return;
			}
			if (!func_97(&(Local_135.f_314)))
			{
				func_95(&(Local_135.f_314), 0, 0);
				return;
			}
			else if (!func_93(&(Local_135.f_314), 1500, 0))
			{
				return;
			}
			Local_136.f_138 = iVar1 + 1;
			func_63(2);
		}

int func_93(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_94(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (network_is_game_in_progress() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = get_network_time_accurate();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = get_network_time();
		}
		else
		{
			*uParam0 = get_network_time_accurate();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	uParam0->f_1 = 1;
}

void func_96(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_97(var uParam0)
{
	return uParam0->f_1;
}

void func_98()
{
	func_99();
	func_63(1);
}

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2[24];
	int iVar3;
	int iVar4;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	set_random_seed(get_network_time());
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar1 = get_random_int_in_range(0, 24);
		iVar3 = iVar2[iVar0];
		iVar2[iVar0] = iVar2[iVar1];
		iVar2[iVar1] = iVar3;
		iVar0++;
	}
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_136.f_31[iVar0 /*5*/][iVar1] = iVar2[iVar4];
			iVar4++;
			iVar1++;
		}
		iVar0++;
	}
}

void func_100()
{
	switch (Local_135.f_140)
	{
		case 0:
			func_337();
			break;
		
		case 1:
			func_334();
			break;
		
		case 2:
			func_333();
			break;
		
		case 3:
			func_328();
			break;
		
		case 4:
			func_327();
			break;
		
		case 5:
			func_321();
			break;
		
		case 6:
			func_319();
			break;
		
		case 7:
			func_194();
			break;
		
		case 8:
			func_150();
			break;
		
		case 9:
			func_129();
			break;
		
		case 10:
			func_101();
			break;
		
		case 11:
			func_11();
			break;
		
		case 12:
			break;
	}
}

void func_101()
{
	func_125();
	func_102();
}

void func_102()
{
	var uVar0[4];
	float fVar1;
	int iVar2;
	int iVar3;
	
	func_124();
	func_123("MPArcadeCabinetGridHUD", "lbd", 0.5f, 0.5f, 0.6604167f, 0.9481481f, 0f, Local_135.f_107.f_17);
	set_text_scale(1f, 1f);
	set_text_colour(0, 0, 0, 255);
	set_text_centre(true);
	set_text_font(7);
	begin_text_command_display_text("SCGW_LBD_T");
	end_text_command_display_text(func_122((0.5f + 0.001041667f)), (0.15f + 0.003703704f), 0);
	set_text_scale(1f, 1f);
	set_text_colour(255, 255, 255, 255);
	set_text_centre(true);
	set_text_font(7);
	begin_text_command_display_text("SCGW_LBD_T");
	end_text_command_display_text(func_122(0.5f), 0.15f, 0);
	fVar1 = 0.22f;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		func_119(Local_136.f_165[iVar2 /*3*/], &uVar0);
		iVar3 = 255;
		if (Local_136.f_165[iVar2 /*3*/].f_2 == Local_135.f_178)
		{
			iVar3 = round(absf((sin((to_float(get_network_time()) * 0.5f)) * 80f))) + 175;
		}
		set_text_scale(1f, 1f);
		set_text_colour(0, 0, 0, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122((0.37f + 0.001041667f)));
		set_text_font(7);
		begin_text_command_display_text(func_118(iVar2));
		end_text_command_display_text(func_122(0.5f), (fVar1 + 0.003703704f), 0);
		set_text_scale(1f, 1f);
		set_text_colour(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122(0.37f));
		set_text_font(7);
		begin_text_command_display_text(func_118(iVar2));
		end_text_command_display_text(func_122(0.5f), fVar1, 0);
		set_text_scale(1f, 1f);
		set_text_colour(0, 0, 0, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122((0.4135417f + 0.001041667f)));
		set_text_font(7);
		begin_text_command_display_text("STRING");
		add_text_component_substring_player_name(func_117(uVar0[0]));
		end_text_command_display_text(func_122(0.5f), (fVar1 + 0.003703704f), 0);
		set_text_scale(1f, 1f);
		set_text_colour(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122(0.4135417f));
		set_text_font(7);
		begin_text_command_display_text("STRING");
		add_text_component_substring_player_name(func_117(uVar0[0]));
		end_text_command_display_text(func_122(0.5f), fVar1, 0);
		set_text_scale(1f, 1f);
		set_text_colour(0, 0, 0, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122((0.4411458f + 0.001041667f)));
		set_text_font(7);
		begin_text_command_display_text("STRING");
		add_text_component_substring_player_name(func_117(uVar0[1]));
		end_text_command_display_text(func_122(0.5f), (fVar1 + 0.003703704f), 0);
		set_text_scale(1f, 1f);
		set_text_colour(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122(0.4411458f));
		set_text_font(7);
		begin_text_command_display_text("STRING");
		add_text_component_substring_player_name(func_117(uVar0[1]));
		end_text_command_display_text(func_122(0.5f), fVar1, 0);
		set_text_scale(1f, 1f);
		set_text_colour(0, 0, 0, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122((0.46875f + 0.001041667f)));
		set_text_font(7);
		begin_text_command_display_text("STRING");
		add_text_component_substring_player_name(func_117(uVar0[2]));
		end_text_command_display_text(func_122(0.5f), (fVar1 + 0.003703704f), 0);
		set_text_scale(1f, 1f);
		set_text_colour(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122(0.46875f));
		set_text_font(7);
		begin_text_command_display_text("STRING");
		add_text_component_substring_player_name(func_117(uVar0[2]));
		end_text_command_display_text(func_122(0.5f), fVar1, 0);
		set_text_scale(1f, 1f);
		set_text_colour(0, 0, 0, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122((0.695f + 0.001041667f)));
		set_text_font(7);
		begin_text_command_display_text("SCGW_PTS");
		add_text_component_integer(Local_136.f_165[iVar2 /*3*/].f_1);
		end_text_command_display_text(func_122(0.5f), (fVar1 + 0.003703704f), 0);
		set_text_scale(1f, 1f);
		set_text_colour(Local_135.f_107[uVar0[3] /*4*/], Local_135.f_107[uVar0[3] /*4*/].f_1, Local_135.f_107[uVar0[3] /*4*/].f_2, iVar3);
		set_text_right_justify(true);
		set_text_wrap(func_122(0f), func_122(0.695f));
		set_text_font(7);
		begin_text_command_display_text("SCGW_PTS");
		add_text_component_integer(Local_136.f_165[iVar2 /*3*/].f_1);
		end_text_command_display_text(func_122(0.5f), fVar1, 0);
		fVar1 = (fVar1 + 0.06f);
		iVar2++;
	}
	func_104();
	func_103();
}

void func_103()
{
	func_123("MPArcadeCabinetGridTiles", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_135.f_107.f_17);
}

void func_104()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_105(iVar0);
		iVar0++;
	}
}

void func_105(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	float fVar4;
	
	if (!Local_176[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { func_116() };
	Var3.f_3 = 255;
	if (Local_176[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var1 = { func_115() };
	if (!Local_176[iParam0 /*17*/].f_2)
	{
		if (Local_176[iParam0 /*17*/].f_4 > 0)
		{
			Var1.f_1 = (Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_176[iParam0 /*17*/].f_4) % (IntToFloat(Local_176[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_176[iParam0 /*17*/].f_6) * 1f)));
			Var2 = { Var1 };
			Var2.f_1 = (Var2.f_1 + Var0.f_1);
		}
		else if (Local_176[iParam0 /*17*/].f_7 > 0)
		{
			Local_176[iParam0 /*17*/].f_4 = get_random_int_in_range(0, Local_176[iParam0 /*17*/].f_7);
			Local_176[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_176[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_176[iParam0 /*17*/].f_4 = Local_176[iParam0 /*17*/].f_6;
		Local_176[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_176[iParam0 /*17*/].f_1)
	{
		fVar4 = (to_float(Local_176[iParam0 /*17*/].f_5) / to_float(Local_176[iParam0 /*17*/].f_8));
		Var3.f_0 = func_114(Local_176[iParam0 /*17*/].f_9, Local_176[iParam0 /*17*/].f_13, fVar4);
		Var3.f_1 = func_114(Local_176[iParam0 /*17*/].f_9.f_1, Local_176[iParam0 /*17*/].f_13.f_1, fVar4);
		Var3.f_2 = func_114(Local_176[iParam0 /*17*/].f_9.f_2, Local_176[iParam0 /*17*/].f_13.f_2, fVar4);
		Var3.f_3 = func_114(Local_176[iParam0 /*17*/].f_9.f_3, Local_176[iParam0 /*17*/].f_13.f_3, fVar4);
	}
	else
	{
		Var3 = { Local_176[iParam0 /*17*/].f_9 };
	}
	if (is_string_null_or_empty(func_113(iParam0)))
	{
		func_110(Var1, Var0, Var3);
	}
	else
	{
		func_106(func_109(iParam0), func_113(iParam0), Var1, Var0, 0f, Var3);
	}
	if (!Local_176[iParam0 /*17*/].f_2 && Local_176[iParam0 /*17*/].f_4 > 0)
	{
		if (is_string_null_or_empty(func_113(0)))
		{
			func_110(Var2, Var0, Var3);
		}
		else
		{
			func_106(func_109(iParam0), func_113(iParam0), Var2, Var0, 0f, Var3);
		}
	}
	Local_176[iParam0 /*17*/].f_5 = (Local_176[iParam0 /*17*/].f_5 - round((get_frame_time() * 1000f)));
	if (Local_176[iParam0 /*17*/].f_5 < 0)
	{
		Local_176[iParam0 /*17*/].f_5 = (Local_176[iParam0 /*17*/].f_5 + Local_176[iParam0 /*17*/].f_8);
	}
	Local_176[iParam0 /*17*/].f_4 = (Local_176[iParam0 /*17*/].f_4 - round((get_frame_time() * 1000f)));
	if (Local_176[iParam0 /*17*/].f_4 < 0)
	{
		Local_176[iParam0 /*17*/].f_4 = 0;
	}
}

void func_106(char* sParam0, char* sParam1, struct<2> Param2, struct<2> Param3, float fParam4, struct<4> Param5)
{
	Param2 = { func_107(Param2) };
	Param3 = { func_107(Param3) };
	func_123(sParam0, sParam1, Param2.f_0, Param2.f_1, Param3.f_0, Param3.f_1, fParam4, Param5);
}

struct<2> func_107(struct<2> Param0)
{
	return func_108((Param0.f_0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_108(float fParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_110(struct<2> Param0, struct<2> Param1, struct<4> Param2)
{
	Param0 = { func_107(Param0) };
	Param1 = { func_107(Param1) };
	func_111(Param0, Param1, Param2);
}

void func_111(struct<2> Param0, struct<2> Param1, struct<4> Param2)
{
	Param0 = { func_112(Param0) };
	Param1.f_0 = (Param1.f_0 * fLocal_131);
	draw_rect(Param0.f_0, Param0.f_1, Param1.f_0, Param1.f_1, Param2.f_0, Param2.f_1, Param2.f_2, Param2.f_3, false);
}

struct<2> func_112(struct<2> Param0)
{
	Param0.f_0 = func_122(Param0.f_0);
	return Param0;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_114(int iParam0, int iParam1, float fParam2)
{
	return round((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_115()
{
	return func_108((1920f / 2f), (1080f / 2f));
}

struct<2> func_116()
{
	return func_108(1920f, 1080f);
}

char* func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCGW_1ST";
		
		case 1:
			return "SCGW_2ND";
		
		case 2:
			return "SCGW_3RD";
		
		case 3:
			return "SCGW_4TH";
		
		case 4:
			return "SCGW_5TH";
		
		case 5:
			return "SCGW_6TH";
		
		case 6:
			return "SCGW_7TH";
		
		case 7:
			return "SCGW_8TH";
		
		case 8:
			return "SCGW_9TH";
		
		case 9:
			return "SCGW_10TH";
		
		default:
	}
	return "SCGW_URD";
}

void func_119(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_120(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_120(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_121(iParam2, 0);
	return (shift_right(iParam0, (iParam1 * iParam2)) && uVar0);
}

var func_121(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		set_bit(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

float func_122(float fParam0)
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_130));
	return fParam0;
}

void func_123(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	iVar0 = round((fParam3 * IntToFloat(iLocal_133)));
	fParam3 = (to_float(iVar0) * (1f / IntToFloat(iLocal_133)));
	iVar0 = round(((fParam5 * IntToFloat(iLocal_133)) / 4f)) * 4;
	fParam5 = (to_float(iVar0) * (1f / IntToFloat(iLocal_133)));
	_0x2D3B147AFAD49DE0(sParam0, sParam1, func_122(fParam2), fParam3, (fParam4 * fLocal_131), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}

void func_124()
{
	func_111(func_108(0.5f, 0.5f), func_108(1f, 1f), Local_135.f_107.f_25);
}

void func_125()
{
	struct<2> Var0;
	
	set_bit(&(Local_135.f_417), false);
	StringCopy(&Var0, "SC_H_LBD_3", 16);
	if (_is_using_keyboard(2))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

void func_126(char* sParam0)
{
	Local_135.f_442 = get_hash_key(sParam0);
	func_127(sParam0);
}

void func_127(char* sParam0)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, true, true, -1);
}

int func_128(char* sParam0)
{
	if (Local_135.f_442 == get_hash_key(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_129()
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[0];
	int iVar6;
	
	if (!func_147())
	{
		func_11();
	}
	func_137();
	func_136();
	if (sc_profanity_get_check_is_valid(Local_135.f_436))
	{
		if (sc_profanity_get_check_is_pending(Local_135.f_436))
		{
			return;
		}
		if (sc_profanity_get_string_passed(Local_135.f_436))
		{
			func_134();
			func_15(10);
			func_133("Frontend_Change_Screen");
			Local_135.f_436 = 0;
		}
		else
		{
			func_133("Frontend_Change_Letter");
			Local_135.f_432 = 0;
			func_119(0, &iVar0);
			iVar0[3] = Local_173[Local_135.f_178 /*9*/].f_6;
			Local_173[Local_135.f_178 /*9*/].f_7 = func_131(&iVar0);
			Local_135.f_436 = 0;
		}
		return;
	}
	iVar1 = 227;
	iVar2 = 226;
	iVar3 = 191;
	iVar4 = 194;
	if (_is_using_keyboard(2))
	{
		iVar3 = 237;
		iVar4 = 238;
		iVar1 = 188;
		iVar2 = 187;
	}
	if (is_disabled_control_just_pressed(2, iVar3))
	{
		Local_135.f_432++;
		if (Local_135.f_432 == 3)
		{
			func_119(Local_173[Local_135.f_178 /*9*/].f_7, &iVar0);
			StringCopy(&cVar5, func_117(iVar0[0]), 4);
			StringConCat(&cVar5, func_117(iVar0[1]), 4);
			StringConCat(&cVar5, func_117(iVar0[2]), 4);
			if (sc_profanity_check_string(&cVar5, &(Local_135.f_436)))
			{
				func_133("Frontend_Entered_Score");
			}
		}
		else if (func_130(Local_135.f_178) == 99)
		{
			func_133("Frontend_Change_Screen");
			func_15(10);
		}
		return;
	}
	if (func_130(Local_135.f_178) == 99)
	{
		return;
	}
	if (is_disabled_control_just_pressed(2, iVar4))
	{
		if (Local_135.f_432 > 0)
		{
			Local_135.f_432 = (Local_135.f_432 - 1);
		}
		return;
	}
	iVar6 = 0;
	if (is_disabled_control_just_pressed(2, iVar1))
	{
		iVar6 = 1;
	}
	else if (is_disabled_control_just_pressed(2, iVar2))
	{
		iVar6 = -1;
	}
	if (iVar6 == 0)
	{
		return;
	}
	func_133("Frontend_Change_Letter");
	func_119(Local_173[Local_135.f_178 /*9*/].f_7, &iVar0);
	iVar0[Local_135.f_432] = (iVar0[Local_135.f_432] + iVar6);
	if (iVar0[Local_135.f_432] >= 36)
	{
		iVar0[Local_135.f_432] = 0;
	}
	else if (iVar0[Local_135.f_432] < 0)
	{
		iVar0[Local_135.f_432] = 35;
	}
	Local_173[Local_135.f_178 /*9*/].f_7 = func_131(&iVar0);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_136.f_165[iVar0 /*3*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

var func_131(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_132(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_132(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_121(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || shift_left(iParam3, (iParam1 * iParam2)));
}

void func_133(char* sParam0)
{
	play_sound_frontend(-1, sParam0, "dlc_vw_am_tw_frontend_sounds", false);
}

void func_134()
{
	struct<2> Var0;
	int iVar1;
	
	Var0.f_0 = -658279885;
	Var0.f_1 = player_id();
	iVar1 = func_135(1);
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 2, iVar1);
	}
}

var func_135(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (func_61(iVar2, 0, 0))
			{
				if (iVar2 != player_id() || iParam0)
				{
					set_bit(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_136()
{
	struct<2> Var0;
	
	set_bit(&(Local_135.f_417), false);
	if (func_130(Local_135.f_178) == 99)
	{
		StringCopy(&Var0, "SC_H_LBD_2", 16);
	}
	else if (Local_135.f_432 == 2)
	{
		StringCopy(&Var0, "SC_H_LBD_1", 16);
	}
	else
	{
		StringCopy(&Var0, "SC_H_LBD_0", 16);
	}
	if (_is_using_keyboard(2))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

void func_137()
{
	var uVar0[4];
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	
	func_124();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		func_139(iVar1, 1);
		if (Local_135.f_149[iVar1] == -1)
		{
		}
		else
		{
			Var2 = { func_138(iVar1) };
			iVar3 = func_130(Local_135.f_149[iVar1]);
			set_text_scale(1.1f, 1.1f);
			set_text_colour(0, 0, 0, 255);
			set_text_centre(true);
			set_text_font(7);
			begin_text_command_display_text(func_118(iVar3));
			end_text_command_display_text(func_122((Var2.f_0 + 0.001041667f)), (0.205f + 0.003703704f), 0);
			set_text_scale(1.1f, 1.1f);
			set_text_colour(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
			set_text_centre(true);
			set_text_font(7);
			begin_text_command_display_text(func_118(iVar3));
			end_text_command_display_text(func_122(Var2.f_0), 0.205f, 0);
			iVar4 = Local_173[Local_135.f_149[iVar1] /*9*/].f_8;
			set_text_scale(0.75f, 0.75f);
			set_text_colour(0, 0, 0, 255);
			set_text_centre(true);
			set_text_font(7);
			begin_text_command_display_text("SCGW_PTS");
			add_text_component_integer(iVar4);
			end_text_command_display_text(func_122((Var2.f_0 + 0.001041667f)), (0.26f + 0.003703704f), 0);
			set_text_scale(0.75f, 0.75f);
			set_text_colour(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
			set_text_centre(true);
			set_text_font(7);
			begin_text_command_display_text("SCGW_PTS");
			add_text_component_integer(iVar4);
			end_text_command_display_text(func_122(Var2.f_0), 0.26f, 0);
			if (Local_135.f_149[iVar1] != Local_135.f_178)
			{
			}
			else if (iVar3 >= 10)
			{
			}
			else
			{
				func_119(Local_173[Local_135.f_149[iVar1] /*9*/].f_7, &uVar0);
				set_text_scale(0.95f, 0.95f);
				set_text_colour(0, 0, 0, 255);
				set_text_centre(true);
				set_text_font(7);
				begin_text_command_display_text("STRING");
				add_text_component_substring_player_name(func_117(uVar0[0]));
				end_text_command_display_text(func_122(((Var2.f_0 - 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				set_text_scale(0.95f, 0.95f);
				if (Local_135.f_432 == 0)
				{
					set_text_colour(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					set_text_colour(255, 255, 255, 255);
				}
				set_text_centre(true);
				set_text_font(7);
				begin_text_command_display_text("STRING");
				add_text_component_substring_player_name(func_117(uVar0[0]));
				end_text_command_display_text(func_122((Var2.f_0 - 0.025f)), 0.875f, 0);
				func_119(Local_173[Local_135.f_149[iVar1] /*9*/].f_7, &uVar0);
				set_text_scale(0.95f, 0.95f);
				set_text_colour(0, 0, 0, 255);
				set_text_centre(true);
				set_text_font(7);
				begin_text_command_display_text("STRING");
				add_text_component_substring_player_name(func_117(uVar0[1]));
				end_text_command_display_text(func_122((Var2.f_0 + 0.001041667f)), (0.875f + 0.003703704f), 0);
				set_text_scale(0.95f, 0.95f);
				if (Local_135.f_432 == 1)
				{
					set_text_colour(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					set_text_colour(255, 255, 255, 255);
				}
				set_text_centre(true);
				set_text_font(7);
				begin_text_command_display_text("STRING");
				add_text_component_substring_player_name(func_117(uVar0[1]));
				end_text_command_display_text(func_122(Var2.f_0), 0.875f, 0);
				func_119(Local_173[Local_135.f_149[iVar1] /*9*/].f_7, &uVar0);
				set_text_scale(0.95f, 0.95f);
				set_text_colour(0, 0, 0, 255);
				set_text_centre(true);
				set_text_font(7);
				begin_text_command_display_text("STRING");
				add_text_component_substring_player_name(func_117(uVar0[2]));
				end_text_command_display_text(func_122(((Var2.f_0 + 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				set_text_scale(0.95f, 0.95f);
				if (Local_135.f_432 == 2)
				{
					set_text_colour(Local_135.f_107[iVar1 /*4*/], Local_135.f_107[iVar1 /*4*/].f_1, Local_135.f_107[iVar1 /*4*/].f_2, 255);
				}
				else
				{
					set_text_colour(255, 255, 255, 255);
				}
				set_text_centre(true);
				set_text_font(7);
				begin_text_command_display_text("STRING");
				add_text_component_substring_player_name(func_117(uVar0[2]));
				end_text_command_display_text(func_122((Var2.f_0 + 0.025f)), 0.875f, 0);
			}
		}
		iVar1++;
	}
	func_104();
	func_103();
}

struct<2> func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_108(0.2552083f, 0.4564815f);
		
		case 1:
			return func_108(0.4182292f, 0.4564815f);
		
		case 2:
			return func_108(0.5817708f, 0.4564815f);
		
		case 3:
			return func_108(0.7447917f, 0.4564815f);
		
		default:
	}
	return func_108(0.5f, 0.5f);
}

void func_139(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<4> Var2;
	struct<2> Var3;
	char cVar4[16];
	float fVar5;
	struct<4> Var6;
	
	Var0 = { func_138(iParam0) };
	Var1 = { func_146() };
	func_123(func_145(iParam0), func_144(iParam0), Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1, 0f, Local_135.f_107.f_17);
	if (Local_135.f_149[iParam0] == Local_135.f_178)
	{
		Var2 = { Local_135.f_107[iParam0 /*4*/] };
		if (Local_173[Local_135.f_178 /*9*/] != 1)
		{
			Var2.f_3 = round(tan((to_float(get_game_timer()) * 0.25f))) * 255;
		}
		Var3 = { func_143(iParam0) };
		func_123("MPArcadeCabinetGridHUD", "gang_lobby_player_highlight", Var3.f_0, Var3.f_1, 0.1625f, 0.05185185f, 0f, Var2);
	}
	if (Local_135.f_149[iParam0] != -1)
	{
		set_text_scale(0.5f, 0.5f);
		set_text_colour(Local_135.f_107[iParam0 /*4*/], Local_135.f_107[iParam0 /*4*/].f_1, Local_135.f_107[iParam0 /*4*/].f_2, 255);
		set_text_centre(true);
		set_text_font(4);
		begin_text_command_display_text("STRING");
		if (!func_142(iParam0))
		{
			add_text_component_substring_player_name(get_player_name(network_get_player_index(int_to_participantindex(Local_135.f_149[iParam0]))));
		}
		else
		{
			StringCopy(&cVar4, "Bot ", 16);
			switch (iParam0)
			{
				case 0:
					StringConCat(&cVar4, "Green", 16);
					break;
				
				case 1:
					StringConCat(&cVar4, "Purple", 16);
					break;
				
				case 2:
					StringConCat(&cVar4, "Yellow", 16);
					break;
				
				case 3:
					StringConCat(&cVar4, "Blue", 16);
					break;
			}
			add_text_component_substring_player_name(&cVar4);
		}
		end_text_command_display_text(func_122(Var0.f_0), 0.845f, 0);
	}
	if (bParam1)
	{
		return;
	}
	if (Local_135.f_149[iParam0] != -1 && Local_173[Local_135.f_149[iParam0] /*9*/] == 1)
	{
		set_text_scale(0.95f, 0.95f);
		set_text_colour(0, 0, 0, 255);
		set_text_centre(true);
		set_text_font(7);
		begin_text_command_display_text("SCGW_R");
		end_text_command_display_text(func_122((Var0.f_0 + 0.001041667f)), (0.23f + 0.003703704f), 0);
		set_text_scale(0.95f, 0.95f);
		set_text_colour(Local_135.f_107[iParam0 /*4*/], Local_135.f_107[iParam0 /*4*/].f_1, Local_135.f_107[iParam0 /*4*/].f_2, 255);
		set_text_centre(true);
		set_text_font(7);
		begin_text_command_display_text("SCGW_R");
		end_text_command_display_text(func_122(Var0.f_0), 0.23f, 0);
	}
	if (Local_135.f_154[iParam0] != -2147483647 && (get_network_time() - Local_135.f_154[iParam0]) <= 1000)
	{
		fVar5 = (to_float((get_network_time() - Local_135.f_154[iParam0])) / 1000f);
		Var6 = { Local_135.f_107[iParam0 /*4*/] };
		Var6.f_3 = round(func_140(125f, 0f, fVar5, 1));
		Var1.f_1 = (Var1.f_1 - 0.05f);
		Var0.f_1 = (Var0.f_1 + (0.05f / 2f));
		func_111(Var0, Var1, Var6);
	}
}

float func_140(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_141((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_140(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_140(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_141(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			if (Local_175[iVar0 /*37*/].f_6 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_108(0.2552083f, 0.1435185f);
		
		case 1:
			return func_108(0.4182292f, 0.1435185f);
		
		case 2:
			return func_108(0.5817708f, 0.1435185f);
		
		case 3:
			return func_108(0.7447917f, 0.1435185f);
		
		default:
	}
	return func_108(0.5f, 0.5f);
}

char* func_144(int iParam0)
{
	if (Local_135.f_149[iParam0] == -1)
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_Off";
			
			case 1:
				return "Gang_Lobby_Purple_Off";
			
			case 2:
				return "Gang_Lobby_Yellow_Off";
			
			case 3:
				return "Gang_Lobby_Blue_Off";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_On";
			
			case 1:
				return "Gang_Lobby_Purple_On";
			
			case 2:
				return "Gang_Lobby_Yellow_On";
			
			case 3:
				return "Gang_Lobby_Blue_On";
			}
		
		default:
	}
	return "INVALID GANG";
}

char* func_145(int iParam0)
{
	if (Local_135.f_149[iParam0] != -1)
	{
		switch (iParam0)
		{
			case 0:
				return "MPArcadeCabinetGridPlayerGreen";
			
			case 1:
				return "MPArcadeCabinetGridPlayerPurple";
			
			case 2:
				return "MPArcadeCabinetGridPlayerYellow";
			
			case 3:
				return "MPArcadeCabinetGridPlayerBlue";
			}
		
		default:
	}
	return "MPArcadeCabinetGridHUD";
}

struct<2> func_146()
{
	return func_108(0.1625f, 0.7777778f);
}

int func_147()
{
	if (_network_get_ros_privilege_9() == 0)
	{
		return 0;
	}
	if (func_149())
	{
		if (network_have_user_content_privileges(1))
		{
			if (network_have_online_privileges())
			{
				return 1;
			}
		}
	}
	else if (func_148())
	{
		if (network_check_user_content_privileges(0, -3, true))
		{
			return 1;
		}
	}
	else if (is_pc_version())
	{
		if (network_have_communication_privileges(0, -1))
		{
			if (network_have_online_privileges())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_148()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

bool func_149()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

void func_150()
{
	bool bVar0;
	
	bVar0 = func_64();
	if (bVar0)
	{
		func_192();
	}
	else
	{
		func_174();
	}
	func_171();
	if (Local_136.f_145 >= 6)
	{
		func_170(&(Local_135.f_428));
		if (!is_audio_scene_active("dlc_vw_am_tw_in_menus_scene"))
		{
			start_audio_scene("dlc_vw_am_tw_in_menus_scene");
		}
		if (is_audio_scene_active("dlc_vw_am_tw_in_gameplay_scene"))
		{
			stop_audio_scene("dlc_vw_am_tw_in_gameplay_scene");
		}
		if (is_audio_scene_active("dlc_vw_am_tw_vehicle_drivethrough_scene"))
		{
			stop_audio_scene("dlc_vw_am_tw_vehicle_drivethrough_scene");
		}
		func_18(func_19(0));
		func_15(9);
		return;
	}
	if (Local_136.f_145 == 2 || Local_136.f_145 == 3)
	{
		func_170(&(Local_135.f_428));
		func_15(5);
		return;
	}
	func_169("Ambience", &(Local_135.f_428), func_108(-1f, -1f), 0);
	if (Global_1931416 != 4)
	{
		return;
	}
	if (bVar0)
	{
		if (Local_136.f_131[(Local_136.f_137 - 1)] != -1)
		{
			if (Local_136.f_131[(Local_136.f_137 - 1)] == Local_135.f_178)
			{
				func_168(7);
				func_164("Win", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
			}
			else
			{
				func_168(8);
				func_164("Lose_Game", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
			}
			func_163((16 + Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6));
		}
	}
	else if (Local_136.f_130 != -1)
	{
		if (Local_136.f_130 == Local_135.f_178)
		{
			func_159();
			func_168(9);
			func_164("Win", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
		}
		else
		{
			func_168(10);
			func_164("Lose_Game", Local_135.f_178, &(Local_135.f_204[Local_135.f_178 /*19*/].f_6));
		}
		func_163((16 + Local_173[Local_136.f_130 /*9*/].f_6));
	}
	if ((!BitTest(Local_135.f_141, 2) && Local_136.f_131[(Local_136.f_137 - 1)] != -1) && Local_136.f_131[(Local_136.f_137 - 1)] == Local_135.f_178)
	{
		if (!func_158(247, -1))
		{
			func_155(247, 1, -1, 1);
			func_153(12, "CLO_VWM_D_1_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
			func_152(27193, 1, -1);
			func_151("SCGW_CH_4", 7500, 1);
		}
	}
}

void func_151(char* sParam0, int iParam1, int iParam2)
{
	if (is_help_message_being_displayed())
	{
		func_16();
	}
	Local_135.f_418 = (get_network_time() + iParam1);
	Local_135.f_419 = sParam0;
	Local_135.f_420 = -1;
	Local_135.f_421 = iParam2;
}

void func_152(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_33();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

void func_153(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_154(&Global_1656668);
	Global_1656668[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1656668[iVar0 /*106*/].f_97 = iParam5;
	Global_1656668[iVar0 /*106*/].f_104 = iParam9;
	Global_1656668[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!is_string_null_or_empty(sParam8))
	{
		StringCopy(&(Global_1656668[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_154(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_155(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_157())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_156(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, bParam1, bParam3);
		}
	}
}

int func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_33();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_157()
{
	return 1;
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_156(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	
	switch (Local_173[Local_135.f_178 /*9*/].f_6)
	{
		case 0:
			iVar0 = func_162(8355, -1, 0) + 1;
			func_161(8355, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246)
			{
				func_152(27189, 1, -1);
				func_153(12, "CLO_VWM_D_1_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_0", Global_262145.f_27246, 7500, 1);
			}
			break;
		
		case 1:
			iVar0 = func_162(8356, -1, 0) + 1;
			func_161(8356, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246)
			{
				func_152(27190, 1, -1);
				func_153(12, "CLO_VWM_D_1_4", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_1", Global_262145.f_27246, 7500, 1);
			}
			break;
		
		case 2:
			iVar0 = func_162(8357, -1, 0) + 1;
			func_161(8357, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246)
			{
				func_152(27191, 1, -1);
				func_153(12, "CLO_VWM_D_1_5", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_2", Global_262145.f_27246, 7500, 1);
			}
			break;
		
		case 3:
			iVar0 = func_162(8358, -1, 0) + 1;
			func_161(8358, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_27246)
			{
				func_152(27192, 1, -1);
				func_153(12, "CLO_VWM_D_1_2", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_3", Global_262145.f_27246, 7500, 1);
			}
			break;
	}
}

void func_160(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_help_message_being_displayed())
	{
		func_16();
	}
	Local_135.f_418 = (get_network_time() + iParam2);
	Local_135.f_420 = uParam1;
	Local_135.f_419 = sParam0;
	Local_135.f_421 = iParam3;
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_156(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_156(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_163(int iParam0)
{
	Global_1931416.f_1 = iParam0;
}

void func_164(char* sParam0, int iParam1, var uParam2)
{
	float fVar0;
	
	fVar0 = func_166(Local_135.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = get_sound_id();
	}
	play_sound_frontend(*uParam2, sParam0, func_165(Local_173[iParam1 /*9*/].f_6), false);
	set_variable_on_sound(*uParam2, "Screen_Position", fVar0);
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_am_tw_gang_Hoods_sounds";
		
		case 1:
			return "dlc_vw_am_tw_gang_Punks_sounds";
		
		case 2:
			return "dlc_vw_am_tw_gang_Yokels_sounds";
		
		case 3:
			return "dlc_vw_am_tw_gang_Bikers_sounds";
		
		default:
	}
	return "INVALID GANG";
}

float func_166(float fParam0, var uParam1)
{
	return func_167(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

float func_167(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_168(int iParam0)
{
	Global_1931416 = iParam0;
}

void func_169(char* sParam0, var uParam1, struct<2> Param2, bool bParam3)
{
	float fVar0;
	
	fVar0 = func_166(Param2);
	if (bParam3)
	{
	}
	if (*uParam1 == -1)
	{
		*uParam1 = get_sound_id();
	}
	if (has_sound_finished(*uParam1))
	{
		play_sound_frontend(*uParam1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	}
	if (bParam3)
	{
		set_variable_on_sound(*uParam1, "Screen_Position", fVar0);
	}
}

void func_170(var uParam0)
{
	if (!has_sound_finished(*uParam0))
	{
		stop_sound(*uParam0);
	}
	release_sound_id(*uParam0);
	*uParam0 = -1;
}

void func_171()
{
	struct<2> Var0;
	
	if (Local_135.f_418 == -2147483647)
	{
		return;
	}
	if (is_string_null_or_empty(Local_135.f_419))
	{
		return;
	}
	if (get_network_time() > Local_135.f_418)
	{
		func_16();
		return;
	}
	set_bit(&(Local_135.f_417), false);
	StringCopy(&Var0, Local_135.f_419, 16);
	if (Local_135.f_420 == -1)
	{
		if (_is_using_keyboard(2) && !Local_135.f_421)
		{
			StringConCat(&Var0, "_PC", 16);
		}
	}
	else
	{
		if (func_128(&Var0))
		{
			return;
		}
		func_172(&Var0, Local_135.f_420);
		return;
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_126(&Var0);
}

void func_172(char* sParam0, int iParam1)
{
	Local_135.f_442 = get_hash_key(sParam0);
	func_173(sParam0, iParam1, -1);
}

void func_173(char* sParam0, int iParam1, int iParam2)
{
	begin_text_command_display_help(sParam0);
	add_text_component_integer(iParam1);
	end_text_command_display_help(0, false, true, iParam2);
}

void func_174()
{
	func_124();
	func_188();
	func_182();
	func_180();
	func_175();
	func_104();
	func_103();
}

void func_175()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	
	func_111(func_108(0.5f, (0.069444f + 0.0356482f)), func_108(0.658333f, 0.071296f), Local_135.f_107.f_21);
	func_111(func_108(0.5f, (0.069444f + 0.072685f)), func_108(0.658333f, 0.002778f), Local_135.f_107.f_25);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_177(iVar0, Local_135.f_149[iVar0]);
		iVar0++;
	}
	fVar1 = ((to_float((Local_136.f_138 - 1)) / 2f) * -0.01354133f);
	iVar0 = 0;
	while (iVar0 <= (Local_136.f_138 - 1))
	{
		func_123("MPArcadeCabinetGridHUD", "hud_rounds", ((fVar1 + 0.5f) + (0.01354133f * IntToFloat(iVar0))), (((0.069444f + -0.00162963f) + (0.02407426f / 2f)) + 0.00462963f), 0.01354133f, 0.02407426f, 0f, func_176(iVar0));
		iVar0++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Local_136.f_145 == 4 && !Local_136.f_162)
	{
		iVar2 = ((Local_136.f_146 + 120000) - get_network_time());
	}
	iVar3 = (iVar2 / 60000);
	iVar4 = ((iVar2 / 1000) % 60);
	set_text_scale(1f, 1f);
	if (iVar2 < 10000 && Local_136.f_145 == 4)
	{
		if (!BitTest(Local_135.f_429, 5))
		{
			func_133("Frontend_Countdown_10s");
			set_bit(&(Local_135.f_429), 5);
		}
		iVar5 = round((sin((to_float(get_network_time()) * (0.5058f / 2f))) * 255f));
		if (iVar5 > 51)
		{
			iVar5 = 255;
		}
		else
		{
			iVar5 = 0;
		}
		set_text_colour(255, 0, 0, iVar5);
	}
	else if (iVar2 < 30000 && Local_136.f_145 == 4)
	{
		set_text_colour(255, 0, 0, 255);
	}
	else
	{
		set_text_colour(255, 255, 255, 255);
	}
	set_text_drop_shadow();
	set_text_centre(true);
	set_text_font(7);
	StringCopy(&cVar6, "SCGW_ROUND_T", 16);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "_S", 16);
	}
	begin_text_command_display_text(&cVar6);
	add_text_component_integer(iVar3);
	add_text_component_integer(iVar4);
	end_text_command_display_text(0.5f, (0.083f + 0.00462963f), 0);
}

struct<4> func_176(int iParam0)
{
	if (Local_136.f_131[iParam0] == -1)
	{
		return Local_135.f_107.f_17;
	}
	return Local_135.f_107[Local_173[Local_136.f_131[iParam0] /*9*/].f_6 /*4*/];
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	
	fVar1 = func_179(iParam0);
	if (iParam1 == -1)
	{
		func_123("MPArcadeCabinetGridHUD", "hud_insert_coin", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_135.f_107[iParam0 /*4*/]);
	}
	else if (func_68(iParam1))
	{
		func_123("MPArcadeCabinetGridHUD", "hud_wasted", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_135.f_107.f_29);
	}
	else
	{
		func_123("MPArcadeCabinetGridHUD", "hud_frame", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_135.f_107[iParam0 /*4*/]);
	}
	StringCopy(&Var2, "hud_head_", 64);
	StringConCat(&Var2, Local_135.f_422[iParam0], 64);
	func_123("MPArcadeCabinetGridHUD", &Var2, (fVar1 + (0.033333f / 2f)), (0.069444f + 0.04166683f), 0.033333f, 0.059259f, 0f, Local_135.f_107.f_17);
	if (iParam1 == -1)
	{
		return;
	}
	if (network_is_participant_active(int_to_participantindex(iParam1)))
	{
		iVar3 = network_get_player_index(int_to_participantindex(iParam1));
		if (network_is_player_talking(iVar3))
		{
			func_123("MPArcadeCabinetGridHUD", "hud_mic", ((fVar1 + 0.026563f) + (0.008333f / 2f)), ((0.069444f + 0.04722233f) + (0.014815f / 2f)), 0.008333f, 0.014815f, 0f, Local_135.f_107[iParam0 /*4*/]);
		}
	}
	else if (Local_175[iParam1 /*37*/].f_25)
	{
	}
	if (Local_173[iParam1 /*9*/] == 2)
	{
		iVar4 = (Local_135.f_204[iParam1 /*19*/].f_9 - 1);
		iVar0 = 0;
		while (iVar0 <= iVar4)
		{
			if (iVar0 >= Local_173[iParam1 /*9*/].f_2 && Local_135.f_140 == 7)
			{
				func_123("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.01203733f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, Local_135.f_107.f_29);
			}
			else
			{
				func_123("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.01203733f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, func_178(Local_135.f_107[iParam0 /*4*/], (to_float(iVar0) / 7f)));
			}
			iVar0++;
		}
		set_text_scale(1f, 1f);
		if (((iLocal_172[iParam0] == 0 && Local_136.f_145 == 4) && iParam0 == Local_173[Local_135.f_178 /*9*/].f_6) && sin((to_float(get_game_timer()) * 0.5058f)) > 0.5f)
		{
			set_text_colour(Local_135.f_107.f_29, Local_135.f_107.f_29.f_1, Local_135.f_107.f_29.f_2, Local_135.f_107.f_29.f_3);
		}
		else
		{
			set_text_colour(Local_135.f_107[iParam0 /*4*/], Local_135.f_107[iParam0 /*4*/].f_1, Local_135.f_107[iParam0 /*4*/].f_2, Local_135.f_107[iParam0 /*4*/].f_3);
		}
		set_text_drop_shadow();
		set_text_centre(true);
		set_text_font(7);
		begin_text_command_display_text("SCGW_SCORE");
		add_text_component_integer(iLocal_172[iParam0]);
		end_text_command_display_text(func_122((fVar1 + 0.105f)), 0.083f, 0);
	}
}

struct<4> func_178(struct<4> Param0, float fParam1)
{
	Param0.f_0 = round(((IntToFloat((255 - Param0.f_0)) * fParam1) + IntToFloat(Param0.f_0)));
	Param0.f_1 = round(((IntToFloat((255 - Param0.f_1)) * fParam1) + IntToFloat(Param0.f_1)));
	Param0.f_2 = round(((IntToFloat((255 - Param0.f_2)) * fParam1) + IntToFloat(Param0.f_2)));
	return Param0;
}

float func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.195313f;
		
		case 1:
			return 0.325521f;
		
		case 2:
			return 0.547396f;
		
		case 3:
			return 0.677604f;
		
		default:
	}
	return 0f;
}

void func_180()
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar3;
	char cVar4[64];
	struct<4> Var5;
	struct<8> Var6;
	
	if (Local_136.f_130 == -1)
	{
		return;
	}
	func_181(Local_135.f_107[Local_173[Local_136.f_130 /*9*/].f_6 /*4*/], 102);
	bVar0 = false;
	bVar1 = true;
	Var2 = { func_108(0.5f, (0.5f + -0.005f)) };
	iVar3 = 255;
	StringCopy(&cVar4, "text_gang_", 64);
	StringConCat(&cVar4, Local_135.f_422[Local_173[Local_136.f_130 /*9*/].f_6], 64);
	StringConCat(&cVar4, "_", 64);
	if (Local_135.f_415 < 4)
	{
		Var2.f_1 = (Var2.f_1 + (-0.05f / IntToFloat(Local_135.f_415 + 1)));
		bVar1 = false;
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_412);
	}
	else if (Local_135.f_415 < 12)
	{
		iVar3 = floor(((255f / 8f) * IntToFloat((8 - (Local_135.f_415 - 4)))));
		bVar0 = true;
		bVar1 = false;
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_412);
	}
	else if (Local_135.f_415 < 22)
	{
		if (((Local_135.f_415 + 1 - 4) - 8) < 10)
		{
			StringConCat(&cVar4, "0", 64);
		}
		StringIntConCat(&cVar4, ((Local_135.f_415 + 1 - 4) - 8), 64);
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_414);
	}
	else
	{
		StringIntConCat(&cVar4, 10, 64);
	}
	if (bVar0)
	{
		Var5 = { Local_135.f_107.f_17 };
		Var5.f_3 = iVar3;
		func_123("MPArcadeCabinetGridHUD", "text_bkgd_blur", Var2.f_0, Var2.f_1, 0.3125f, 0.1481481f, 0f, Var5);
	}
	func_123("MPArcadeCabinetGridHUD", "text_winner", Var2.f_0, Var2.f_1, 0.3125f, 0.1481481f, 0f, Local_135.f_107.f_17);
	if (bVar1)
	{
		StringCopy(&Var6, "MPArcadeCabinetGridPlayer", 64);
		StringConCat(&Var6, Local_135.f_422[Local_173[Local_136.f_130 /*9*/].f_6], 64);
		func_123(&Var6, &cVar4, Var2.f_0, (Var2.f_1 + 0.07407407f), 0.3125f, 0.1481481f, 0f, Local_135.f_107[Local_173[Local_136.f_130 /*9*/].f_6 /*4*/]);
	}
}

void func_181(struct<4> Param0, int iParam1)
{
	Param0.f_3 = iParam1;
	func_111(func_108(0.5f, 0.5f), func_108(1f, 1f), Param0);
}

void func_182()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	struct<2> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	int iVar13;
	int iVar14;
	float fVar15;
	struct<2> Var16;
	struct<2> Var17;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar3 = func_71(iVar0, iVar1);
			if (iVar0 + 1 < 13)
			{
				iVar4 = func_71(iVar0 + 1, iVar1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_81(&(Local_136.f_85[iVar2 /*11*/][1 /*5*/]), iVar3))
					{
						Var5 = { func_185(func_186(func_187(iVar3), func_187(iVar4)), 2f) };
						func_123("MPArcadeCabinetGrid", "player_trail", Var5.f_0, Var5.f_1, 0.05208333f, 0.02962963f, 0f, Local_135.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (iVar1 + 1 < 9)
			{
				iVar6 = func_71(iVar0, iVar1 + 1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_81(&(Local_136.f_85[iVar2 /*11*/][0 /*5*/]), iVar3))
					{
						Var7 = { func_185(func_186(func_187(iVar3), func_187(iVar6)), 2f) };
						func_123("MPArcadeCabinetGrid", "player_trail", Var7.f_0, Var7.f_1, 0.05208333f, 0.02962963f, 90f, Local_135.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	Var12.f_3 = 255;
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar13)) && !Local_175[iVar13 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar13 /*9*/].f_6 == -1)
		{
		}
		else if (Local_174[iVar13 /*16*/] == Local_174[iVar13 /*16*/].f_1)
		{
		}
		else
		{
			func_184(Local_174[iVar13 /*16*/], &iVar8, &iVar9);
			func_184(Local_174[iVar13 /*16*/].f_1, &iVar10, &iVar11);
			iVar14 = -1;
			Var12 = { Local_135.f_107[Local_173[iVar13 /*9*/].f_6 /*4*/] };
			fVar15 = (to_float((get_network_time() - Local_174[iVar13 /*16*/].f_2)) / to_float(func_183(iVar13)));
			if (fVar15 > 1.2f)
			{
			}
			else
			{
				Var12.f_3 = round((255f * func_140(0f, 1f, fVar15, 6)));
				if (iVar10 != iVar8)
				{
					if (iVar10 > iVar8)
					{
						iVar14 = Local_174[iVar13 /*16*/];
					}
					else
					{
						iVar14 = func_71((iVar8 - 1), iVar9);
					}
					if (func_81(&(Local_136.f_85[Local_173[iVar13 /*9*/].f_6 /*11*/][1 /*5*/]), iVar14))
					{
					}
					else
					{
						Var16 = { func_185(func_186(func_187(Local_174[iVar13 /*16*/].f_1), func_187(Local_174[iVar13 /*16*/])), 2f) };
						func_123("MPArcadeCabinetGrid", "player_trail", Var16.f_0, Var16.f_1, 0.05208333f, 0.02962963f, 0f, Var12);
						Jump @804; //curOff = 660
						if (iVar11 != iVar9)
						{
							if (iVar11 > iVar9)
							{
								iVar14 = Local_174[iVar13 /*16*/];
							}
							else
							{
								iVar14 = func_71(iVar8, (iVar9 - 1));
							}
							if (func_81(&(Local_136.f_85[Local_173[iVar13 /*9*/].f_6 /*11*/][0 /*5*/]), iVar14))
							{
							}
							else
							{
								Var17 = { func_185(func_186(func_187(Local_174[iVar13 /*16*/].f_1), func_187(Local_174[iVar13 /*16*/])), 2f) };
								func_123("MPArcadeCabinetGrid", "player_trail", Var17.f_0, Var17.f_1, 0.05208333f, 0.02962963f, 90f, Var12);
							}
						}
					}
					iVar13++;
				}

int func_183(int iParam0)
{
	return round((700f * Local_173[iParam0 /*9*/].f_1));
}

void func_184(int iParam0, bool bParam1, bool bParam2)
{
	*bParam2 = floor((to_float(iParam0) / 13f));
	*bParam1 = (iParam0 - *bParam2 * 13);
}

struct<2> func_185(struct<2> Param0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 / fParam1);
	Var0.f_1 = (Param0.f_1 / fParam1);
	return Var0;
}

struct<2> func_186(struct<2> Param0, struct<2> Param1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 + Param1.f_0);
	Var0.f_1 = (Param0.f_1 + Param1.f_1);
	return Var0;
}

struct<2> func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	func_184(iParam0, &iVar0, &iVar1);
	Var2.f_0 = (0.1380207f + (0.0520835f * IntToFloat(iVar0 + 1)));
	Var2.f_1 = (0.06851837f + (0.0925925f * IntToFloat(iVar1 + 1)));
	return Var2;
}

void func_188()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	struct<2> Var8;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&Var2, "top_down_tile_", 64);
			iVar3 = Local_136.f_31[iVar0 /*5*/][iVar1] + 1;
			StringIntConCat(&Var2, iVar3, 64);
			Var4 = { func_191(iVar0, iVar1) };
			func_123("MPArcadeCabinetGridTiles", &Var2, Var4.f_0, Var4.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
			func_189(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = -1;
	while (iVar0 <= 6)
	{
		Var5 = { func_191(iVar0, -1) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var5.f_0, Var5.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		Var6 = { func_191(iVar0, 4) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var6.f_0, Var6.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var7 = { func_191(-1, iVar0) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var7.f_0, Var7.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		Var8 = { func_191(6, iVar0) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var8.f_0, Var8.f_1, 0.104167f, 0.185185f, 0f, Local_135.f_107.f_17);
		iVar0++;
	}
}

void func_189(int iParam0, int iParam1)
{
	struct<8> Var0;
	int iVar1;
	struct<2> Var2;
	float fVar3;
	struct<2> Var4;
	
	if (Local_135.f_318[iParam0 /*5*/][iParam1] != Local_136[iParam0 /*5*/][iParam1])
	{
		Local_135.f_349[iParam0 /*5*/][iParam1] = Local_135.f_318[iParam0 /*5*/][iParam1];
		Local_135.f_380[iParam0 /*5*/][iParam1] = get_network_time();
		if (Local_135.f_140 == 7)
		{
			func_190("Steal_Area", func_191(iParam0, iParam1), Local_136[iParam0 /*5*/][iParam1]);
		}
	}
	if (Local_135.f_349[iParam0 /*5*/][iParam1] == -1)
	{
		iVar1 = Local_136[iParam0 /*5*/][iParam1];
		if ((get_network_time() - Local_135.f_380[iParam0 /*5*/][iParam1]) < 600)
		{
			fVar3 = (to_float((get_network_time() - Local_135.f_380[iParam0 /*5*/][iParam1])) / 600f);
			if (fVar3 > 1f)
			{
				fVar3 = 1f;
			}
			Var2.f_0 = func_140(0f, 0.070833f, fVar3, 2);
			Var2.f_1 = func_140(0f, 0.125926f, fVar3, 2);
		}
		else
		{
			Var2 = { func_108(0.070833f, 0.125926f) };
		}
	}
	else if ((get_network_time() - Local_135.f_380[iParam0 /*5*/][iParam1]) < 300)
	{
		iVar1 = Local_135.f_349[iParam0 /*5*/][iParam1];
		fVar3 = (to_float((get_network_time() - Local_135.f_380[iParam0 /*5*/][iParam1])) / 300f);
		if (fVar3 > 1f)
		{
			fVar3 = 1f;
		}
		Var2.f_0 = func_140(0.070833f, 0f, fVar3, 1);
		Var2.f_1 = func_140(0.125926f, 0f, fVar3, 1);
	}
	else
	{
		iVar1 = Local_136[iParam0 /*5*/][iParam1];
		Var2 = { func_108(0.070833f, 0.125926f) };
	}
	if (iVar1 > -1)
	{
		StringCopy(&Var0, "gang_logo_", 64);
		StringConCat(&Var0, Local_135.f_422[iVar1], 64);
		Var4 = { func_191(iParam0, iParam1) };
		func_123("MPArcadeCabinetGrid", &Var0, Var4.f_0, Var4.f_1, Var2.f_0, Var2.f_1, 0f, Local_135.f_107[iVar1 /*4*/]);
	}
	Local_135.f_318[iParam0 /*5*/][iParam1] = Local_136[iParam0 /*5*/][iParam1];
}

void func_190(char* sParam0, struct<2> Param1, int iParam2)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_166(Param1);
	iVar1 = get_sound_id();
	play_sound_frontend(iVar1, sParam0, func_165(iParam2), false);
	set_variable_on_sound(iVar1, "Screen_Position", fVar0);
	release_sound_id(iVar1);
}

struct<2> func_191(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (0.1380207f + (0.1041665f * IntToFloat(iParam0 + 1)));
	Var0.f_1 = (0.06851837f + (0.1851855f * IntToFloat(iParam1 + 1)));
	return Var0;
}

void func_192()
{
	func_124();
	func_188();
	func_182();
	func_193();
	func_175();
	func_104();
	func_103();
}

void func_193()
{
	struct<2> Var0;
	char cVar1[64];
	struct<8> Var2;
	
	if (Local_136.f_137 == 0)
	{
		return;
	}
	if (Local_136.f_131[(Local_136.f_137 - 1)] == -1)
	{
		return;
	}
	func_181(Local_135.f_107[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6 /*4*/], 102);
	Var0 = { func_108(0.5f, (0.5f + -0.016f)) };
	func_123("MPArcadeCabinetGridHUD", "text_round_winner", 0.5f, (0.5f + -0.016f), 0.3125f, 0.2407407f, 0f, Local_135.f_107.f_17);
	StringCopy(&cVar1, "text_gang_", 64);
	StringConCat(&cVar1, Local_135.f_422[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6], 64);
	StringConCat(&cVar1, "_", 64);
	if (Local_135.f_415 < 10)
	{
		if (Local_135.f_415 + 1 < 10)
		{
			StringConCat(&cVar1, "0", 64);
		}
		StringIntConCat(&cVar1, Local_135.f_415 + 1, 64);
		Local_135.f_415 = (Local_135.f_415 + Local_135.f_414);
	}
	else
	{
		StringIntConCat(&cVar1, 10, 64);
	}
	StringCopy(&Var2, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var2, Local_135.f_422[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6], 64);
	func_123(&Var2, &cVar1, Var0.f_0, ((Var0.f_1 + 0.07407407f) + ((0.2407407f - 0.1481481f) / 2f)), 0.3125f, 0.1481481f, 0f, Local_135.f_107[Local_173[Local_136.f_131[(Local_136.f_137 - 1)] /*9*/].f_6 /*4*/]);
}

void func_194()
{
	int iVar0;
	int iVar1;
	
	func_169("Ambience", &(Local_135.f_428), func_108(-1f, -1f), 0);
	func_309();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_135.f_178 && Local_175[iVar0 /*37*/].f_25)
		{
			func_285(iVar0);
		}
		iVar0++;
	}
	func_281();
	func_273();
	func_266();
	func_261();
	func_241();
	func_237();
	func_231();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_135.f_178 && Local_175[iVar0 /*37*/].f_25)
		{
			func_224(iVar0);
		}
		iVar0++;
	}
	func_196();
	func_171();
	func_195();
	if (Local_135.f_434 != Local_135.f_433)
	{
		if (Local_135.f_434 == Local_135.f_178)
		{
			func_133("Frontend_Player_Loses_Lead");
		}
		else if (Local_135.f_433 == Local_135.f_178)
		{
			func_133("Frontend_Player_Takes_Lead");
		}
	}
	if (Local_136.f_162 && !func_97(&(Local_135.f_316)))
	{
		func_18(func_19(3));
		func_95(&(Local_135.f_316), 0, 0);
	}
	if (Local_136.f_145 <= 4)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Local_135.f_281[iVar1 /*7*/].f_5 != -1)
		{
			func_170(&(Local_135.f_281[iVar1 /*7*/].f_5));
		}
		iVar1++;
	}
	func_16();
	Local_134.f_20 = (Local_134.f_20 + iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6]);
	Local_135.f_415 = 0;
	Local_173[Local_135.f_178 /*9*/].f_8 = (Local_173[Local_135.f_178 /*9*/].f_8 + iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6]);
	func_15(8);
	func_18(func_19(2));
}

void func_195()
{
	bool bVar0;
	
	bVar0 = true;
	if (Local_136.f_145 != 4)
	{
		bVar0 = false;
	}
	if (func_68(Local_135.f_178))
	{
		bVar0 = false;
	}
	if (iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6] > 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Local_135.f_430 == -1)
		{
			Local_135.f_430 = get_sound_id();
		}
		if (has_sound_finished(Local_135.f_430))
		{
			play_sound_frontend(Local_135.f_430, "Frontend_Player_No_Territory_Loop", "dlc_vw_am_tw_frontend_sounds", false);
		}
	}
	else if (Local_135.f_430 != -1 && !has_sound_finished(Local_135.f_430))
	{
		stop_sound(Local_135.f_430);
		release_sound_id(Local_135.f_430);
		Local_135.f_430 = -1;
	}
}

void func_196()
{
	func_124();
	func_188();
	func_182();
	func_222();
	func_220();
	func_214();
	func_207();
	func_206();
	func_202();
	func_200();
	func_199();
	func_198();
	func_197();
	func_175();
	func_104();
	func_103();
}

void func_197()
{
	struct<2> Var0;
	
	if (!Local_136.f_162)
	{
		return;
	}
	if (!func_97(&(Local_135.f_316)))
	{
		return;
	}
	if (func_93(&(Local_135.f_316), 2250, 0))
	{
		return;
	}
	Var0 = { func_108(0.5f, (0.5f + -0.005f)) };
	func_123("MPArcadeCabinetGridHUD", "TEXT_SUDDEN", Var0.f_0, Var0.f_1, 0.2666667f, 0.1481481f, 0f, Local_135.f_107.f_17);
	func_123("MPArcadeCabinetGridHUD", "TEXT_DEATH", Var0.f_0, (Var0.f_1 + 0.07407407f), 0.2666667f, 0.1148148f, 0f, Local_135.f_107.f_17);
}

void func_198()
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	
	if (Local_136.f_146 == -2147483647)
	{
		return;
	}
	iVar0 = (Local_136.f_146 - get_network_time());
	if (iVar0 < -1500)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		if (!BitTest(Local_135.f_429, 4))
		{
			func_133("Frontend_GO");
			set_bit(&(Local_135.f_429), 4);
		}
		fVar1 = (to_float(iVar0) / (to_float(-1500) / 3.5f));
		func_181(Local_135.f_107.f_25, round(func_140(153f, 0f, fVar1, 1)));
		func_123("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.2666667f, 0.1481481f, 0f, Local_135.f_107.f_17);
		return;
	}
	func_181(Local_135.f_107.f_25, 153);
	if (iVar0 <= 1000)
	{
		if (!BitTest(Local_135.f_429, 3))
		{
			func_133("Frontend_3_2_1");
			set_bit(&(Local_135.f_429), 3);
		}
		func_123("MPArcadeCabinetGridHUD", "text_1", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_135.f_107.f_17);
		return;
	}
	if (iVar0 <= 2000)
	{
		if (!BitTest(Local_135.f_429, 2))
		{
			func_133("Frontend_3_2_1");
			set_bit(&(Local_135.f_429), 2);
		}
		func_123("MPArcadeCabinetGridHUD", "text_2", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_135.f_107.f_17);
		return;
	}
	if (iVar0 <= 3000)
	{
		if (!BitTest(Local_135.f_429, 1))
		{
			func_133("Frontend_3_2_1");
			set_bit(&(Local_135.f_429), true);
		}
		func_123("MPArcadeCabinetGridHUD", "text_3", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_135.f_107.f_17);
		return;
	}
	if (iVar0 <= 4500)
	{
		if (!BitTest(Local_135.f_429, 0))
		{
			func_133("Frontend_3_2_1");
			set_bit(&(Local_135.f_429), false);
		}
		StringCopy(&Var2, "text_round_", 64);
		StringIntConCat(&Var2, Local_136.f_137 + 1, 64);
		func_123("MPArcadeCabinetGridHUD", &Var2, 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_135.f_107.f_17);
		return;
	}
}

void func_199()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	bVar0 = false;
	if (Local_173[Local_135.f_178 /*9*/].f_3 + 1000 > get_network_time())
	{
		bVar0 = true;
	}
	if (func_68(Local_135.f_178))
	{
		iVar1 = (get_network_time() - Local_173[Local_135.f_178 /*9*/].f_3);
		if (iVar1 < 2500 || Local_173[Local_135.f_178 /*9*/] == 4)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	fVar3 = (0.237037f / 2f);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		func_123("MPArcadeCabinetGrid", "damage_v", 0.176f, fVar3, 0.03333333f, 0.237037f, 180f, Local_135.f_107.f_29);
		func_123("MPArcadeCabinetGrid", "damage_v", (1f - 0.173f), fVar3, 0.03333333f, 0.237037f, 0f, Local_135.f_107.f_29);
		fVar3 = (fVar3 + 0.237037f);
		iVar2++;
	}
	fVar4 = (0.1333333f / 2f);
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		func_123("MPArcadeCabinetGrid", "damage_h", fVar4, 0.154f, 0.1333333f, 0.05925926f, 0f, Local_135.f_107.f_29);
		func_123("MPArcadeCabinetGrid", "damage_h", fVar4, (1f - 0.09f), 0.1333333f, 0.05925926f, 180f, Local_135.f_107.f_29);
		fVar4 = (fVar4 + 0.1333333f);
		iVar2++;
	}
}

void func_200()
{
	int iVar0;
	int iVar1;
	
	if (func_68(Local_135.f_178))
	{
		if (BitTest(Local_135.f_429, 8))
		{
			clear_bit(&(Local_135.f_429), 8);
		}
		iVar0 = (get_network_time() - Local_173[Local_135.f_178 /*9*/].f_3);
		if (iVar0 < 2500 || Local_173[Local_135.f_178 /*9*/] == 4)
		{
			func_201();
			if (!BitTest(Local_135.f_429, 7))
			{
				set_bit(&(Local_135.f_429), 7);
				func_133("Frontend_Wasted");
			}
			return;
		}
		if (iVar0 < 3500)
		{
			if (!BitTest(Local_135.f_429, 6))
			{
				set_bit(&(Local_135.f_429), 6);
				func_133("Frontend_Text_Appear_Generic");
			}
			func_181(Local_135.f_107.f_25, 153);
			func_123("MPArcadeCabinetGridHUD", "text_ready", 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_135.f_107.f_17);
		}
	}
	else
	{
		if (BitTest(Local_135.f_429, 7))
		{
			clear_bit(&(Local_135.f_429), 7);
		}
		if (BitTest(Local_135.f_429, 6))
		{
			clear_bit(&(Local_135.f_429), 6);
		}
	}
	if (Local_173[Local_135.f_178 /*9*/].f_4 == -2147483647)
	{
		return;
	}
	iVar1 = (get_network_time() - Local_173[Local_135.f_178 /*9*/].f_4);
	if (iVar1 < 1000)
	{
		if (!BitTest(Local_135.f_429, 8))
		{
			set_bit(&(Local_135.f_429), 8);
			func_133("Frontend_GO");
		}
		func_123("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.2666667f, 0.1481481f, 0f, Local_135.f_107.f_17);
	}
}

void func_201()
{
	func_181(Local_135.f_107.f_29, 102);
	func_123("MPArcadeCabinetGridHUD", "text_wasted", 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_135.f_107.f_29);
}

void func_202()
{
	struct<2> Var0;
	
	Var0 = { func_205(Local_135.f_438) };
	if (func_204(Local_135.f_439, Var0))
	{
		return;
	}
	func_123("MPArcadeCabinetGrid", func_203(Local_135.f_438), Local_135.f_439, Local_135.f_439.f_1, Var0.f_0, Var0.f_1, 0f, Local_135.f_107.f_17);
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BIRDS";
		
		case 1:
			return "AIRPLANE";
		
		case 2:
			return "HELICOPTER";
		
		default:
	}
	return "";
}

int func_204(struct<2> Param0, struct<2> Param1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = (Param0.f_0 - (Param1.f_0 / 2f));
	if (fVar0 > (1f - 0.15625f))
	{
		return 1;
	}
	fVar1 = (Param0.f_0 + (Param1.f_0 / 2f));
	if (fVar1 < 0.15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param1.f_1 / 2f));
	if (fVar2 > (1f - 0.06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param1.f_1 / 2f));
	if (fVar3 < (0f + 0.06944444f))
	{
		return 1;
	}
	return 0;
}

struct<2> func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_108(0.03333333f, 0.05925926f);
		
		case 1:
			return func_108(0.1145833f, 0.2037037f);
		
		case 2:
			return func_108(0.1145833f, 0.2037037f);
		
		default:
	}
	return func_108(0f, 0f);
}

void func_206()
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_135.f_159[iVar0 /*3*/] <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, "fire_ball", 64);
			StringIntConCat(&Var1, Local_135.f_159[iVar0 /*3*/] + 1, 64);
			Var2 = { func_108((0.066667f / 2f), (0.118519f / 2f)) };
			func_123("MPArcadeCabinetGrid", &Var1, Local_135.f_159[iVar0 /*3*/].f_1, Local_135.f_159[iVar0 /*3*/].f_1.f_1, Var2.f_0, Var2.f_1, 0f, Local_135.f_107.f_17);
			Local_135.f_159[iVar0 /*3*/] = (Local_135.f_159[iVar0 /*3*/] + Local_135.f_412);
			if (Local_135.f_159[iVar0 /*3*/] >= 9)
			{
				Local_135.f_159[iVar0 /*3*/] = -1;
			}
		}
		iVar0++;
	}
}

void func_207()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_136.f_148[iVar0 /*4*/].f_3 == -1)
		{
		}
		else if (get_network_time() < Local_136.f_148[iVar0 /*4*/])
		{
			func_210(iVar0);
		}
		else
		{
			iVar1 = func_209(Local_136.f_148[iVar0 /*4*/].f_2);
			if (get_network_time() > (Local_136.f_148[iVar0 /*4*/] + iVar1))
			{
			}
			else
			{
				if (get_network_time() < (Local_136.f_148[iVar0 /*4*/] + (iVar1 / 2)) && func_204(func_108(Local_135.f_281[iVar0 /*7*/], Local_135.f_281[iVar0 /*7*/].f_1), func_108(Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1)))
				{
					func_210(iVar0);
				}
				fVar2 = func_208(Local_136.f_148[iVar0 /*4*/].f_2);
				Local_135.f_281[iVar0 /*7*/].f_4 = (Local_135.f_281[iVar0 /*7*/].f_4 + Local_135.f_414);
				if (Local_135.f_281[iVar0 /*7*/].f_4 >= Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_1)
				{
					Local_135.f_281[iVar0 /*7*/].f_4 = 0;
				}
				StringCopy(&Var3, "", 64);
				StringConCat(&Var3, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/], 64);
				if (Local_136.f_148[iVar0 /*4*/].f_3 < 5)
				{
					StringIntConCat(&Var3, Local_135.f_281[iVar0 /*7*/].f_4 + 1, 64);
				}
				func_123("MPArcadeCabinetGrid", &Var3, Local_135.f_281[iVar0 /*7*/], Local_135.f_281[iVar0 /*7*/].f_1, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_135.f_22[Local_136.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1, fVar2, Local_135.f_107.f_17);
			}
		}
		iVar0++;
	}
}

float func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		
		case 1:
			return 270f;
		
		case 2:
			return 0f;
		
		case 3:
			return 180f;
		
		default:
	}
	return 0f;
}

var func_209(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 11;
			break;
		
		case 2:
		case 3:
			iVar0 = 15;
			break;
	}
	return iVar0 * 650;
}

void func_210(int iParam0)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	
	func_184(Local_136.f_148[iParam0 /*4*/].f_1, &bVar0, &bVar1);
	if (Local_136.f_148[iParam0 /*4*/].f_2 == 1)
	{
		Var2 = { func_187(func_71(bVar0, 0)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + -0.011f), 0.02083333f, 0.01851852f, 180f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_136.f_148[iParam0 /*4*/].f_2 == 0)
	{
		Var2 = { func_187(func_71(bVar0, 8)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + 0.023f), 0.02083333f, 0.01851852f, 0f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_136.f_148[iParam0 /*4*/].f_2 == 3)
	{
		Var2 = { func_187(func_71(0, bVar1)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_211(bVar1, 1)), Var2.f_1, 0.02083333f, 0.01851852f, 90f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_136.f_148[iParam0 /*4*/].f_2 == 2)
	{
		Var2 = { func_187(func_71(12, bVar1)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_211(bVar1, 0)), Var2.f_1, 0.02083333f, 0.01851852f, -90f, func_212(Local_136.f_148[iParam0 /*4*/].f_3));
	}
}

float func_211(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			if (bParam1)
			{
				return -0.011f;
			}
			return 0.00975f;
		
		case 2:
			if (bParam1)
			{
				return -0.02275f;
			}
			return 0.02275f;
		
		case 4:
			if (bParam1)
			{
				return -0.02375f;
			}
			return 0.02275f;
		
		case 6:
			if (bParam1)
			{
				return -0.01975f;
			}
			return 0.018f;
		
		case 8:
			if (bParam1)
			{
				return -0.006f;
			}
			return 0.004f;
		
		default:
	}
	return 0f;
}

struct<4> func_212(int iParam0)
{
	float fVar0;
	struct<4> Var1;
	
	fVar0 = sin((IntToFloat(get_game_timer()) * 0.5f));
	Var1 = { Local_135.f_107.f_17 };
	switch (iParam0)
	{
		case 0:
		case 4:
			break;
		
		case 1:
		case 2:
		case 3:
			if (fVar0 > 0f)
			{
				func_213(&Var1, 255, 0, 0, 255);
			}
			else
			{
				func_213(&Var1, 0, 0, 255, 255);
			}
			break;
		
		case 5:
			Var1 = { Local_135.f_107[0 /*4*/] };
			break;
		
		case 6:
			Var1 = { Local_135.f_107[1 /*4*/] };
			break;
		
		case 7:
			Var1 = { Local_135.f_107[2 /*4*/] };
			break;
		
		case 8:
			Var1 = { Local_135.f_107[3 /*4*/] };
			break;
	}
	Var1.f_3 = (55 + round((absf(fVar0) * 200f)));
	return Var1;
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_214()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == Local_135.f_178)
		{
		}
		else if (!network_is_participant_active(int_to_participantindex(iVar0)) && !Local_175[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_215(iVar0);
		}
		iVar0++;
	}
	func_215(Local_135.f_178);
}

void func_215(int iParam0)
{
	struct<8> Var0;
	char cVar1[64];
	struct<4> Var2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar6;
	struct<2> Var7;
	struct<8> Var8;
	struct<2> Var9;
	
	StringCopy(&Var0, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var0, Local_135.f_422[Local_173[iParam0 /*9*/].f_6], 64);
	if (func_68(iParam0))
	{
		StringCopy(&cVar1, "dead_", 64);
		StringConCat(&cVar1, Local_135.f_422[Local_173[iParam0 /*9*/].f_6], 64);
		func_123(&Var0, &cVar1, Local_135.f_204[iParam0 /*19*/], Local_135.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, 0f, Local_135.f_107.f_17);
		return;
	}
	Var2 = { Local_135.f_107.f_17 };
	if (Local_174[iParam0 /*16*/].f_2 + func_183(iParam0)) > get_network_time()
	{
		if (Local_135.f_204[iParam0 /*19*/].f_4 == 0)
		{
			func_164("Footsteps", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_7));
		}
		Local_135.f_204[iParam0 /*19*/].f_4 = (Local_135.f_204[iParam0 /*19*/].f_4 + Local_135.f_412);
		if (Local_135.f_204[iParam0 /*19*/].f_4 >= 12)
		{
			Local_135.f_204[iParam0 /*19*/].f_4 = 0;
		}
	}
	if (Local_173[iParam0 /*9*/].f_3 + 1000 > get_network_time())
	{
		fVar3 = absf(sin((to_float((Local_173[iParam0 /*9*/].f_3 + 1000 - get_network_time())) * 0.35f)));
		Var2.f_3 = (255 - round(fVar3) * 150);
	}
	fVar4 = func_219(Local_174[iParam0 /*16*/].f_4);
	StringCopy(&cVar5, "walk_", 64);
	StringConCat(&cVar5, Local_135.f_422[Local_173[iParam0 /*9*/].f_6], 64);
	StringConCat(&cVar5, "_", 64);
	StringConCat(&cVar5, Local_135.f_59[Local_173[iParam0 /*9*/].f_5 /*5*/], 64);
	StringIntConCat(&cVar5, Local_135.f_204[iParam0 /*19*/].f_4 + 1, 64);
	if (Local_173[iParam0 /*9*/].f_1 < 1f && Local_135.f_204[iParam0 /*19*/].f_4 > 0)
	{
		iVar6 = Var2.f_3;
		Var2.f_3 = (iVar6 / 2);
		Var7 = { Local_135.f_204[iParam0 /*19*/] };
		if (func_73())
		{
			Var7 = { func_186(Var7, func_108((0.002604167f * sin(to_float(get_game_timer()))), (0.00462963f * cos(to_float(get_game_timer()))))) };
		}
		else
		{
			Var7 = { func_186(Var7, func_108((0.002604167f * cos(to_float(get_game_timer()))), (0.00462963f * sin(to_float(get_game_timer()))))) };
		}
		func_123(&Var0, &cVar5, Var7.f_0, Var7.f_1, 0.033333f, 0.059259f, fVar4, Var2);
		Var2.f_3 = iVar6;
	}
	func_123(&Var0, &cVar5, Local_135.f_204[iParam0 /*19*/], Local_135.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, fVar4, Var2);
	if (Local_135.f_204[iParam0 /*19*/].f_5 > -1)
	{
		StringCopy(&Var8, "muzzle_flare_", 64);
		StringIntConCat(&Var8, Local_135.f_204[iParam0 /*19*/].f_5 + 1, 64);
		Var9 = { func_216(iParam0, fVar4) };
		func_123("MPArcadeCabinetGrid", &Var8, Var9.f_0, Var9.f_1, 0.01666667f, 0.02962963f, fVar4, Var2);
		Local_135.f_204[iParam0 /*19*/].f_5 = (Local_135.f_204[iParam0 /*19*/].f_5 + Local_135.f_412);
		if (Local_135.f_204[iParam0 /*19*/].f_5 >= 3)
		{
			Local_135.f_204[iParam0 /*19*/].f_5 = -1;
		}
	}
}

struct<2> func_216(int iParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0 = { func_218(Local_135.f_204[iParam0 /*19*/]) };
	switch (Local_173[iParam0 /*9*/].f_5)
	{
		case 1:
		case 2:
			Var0 = { func_186(Var0, func_108(7f, -36f)) };
			break;
		
		case 3:
		case 4:
		case 5:
			Var0 = { func_186(Var0, func_108(5f, -40f)) };
			break;
	}
	Var0 = { func_217(func_218(Local_135.f_204[iParam0 /*19*/]), Var0, fParam1) };
	Var0 = { func_107(Var0) };
	return Var0;
}

struct<2> func_217(struct<2> Param0, struct<2> Param1, float fParam2)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = sin(fParam2);
	fVar2 = cos(fParam2);
	Var0.f_0 = (Param1.f_0 - Param0.f_0);
	Var0.f_1 = (Param1.f_1 - Param0.f_1);
	fVar3 = ((Var0.f_0 * fVar2) - (Var0.f_1 * fVar1));
	fVar4 = ((Var0.f_0 * fVar1) + (Var0.f_1 * fVar2));
	Var0.f_0 = (fVar3 + Param0.f_0);
	Var0.f_1 = (fVar4 + Param0.f_1);
	return Var0;
}

struct<2> func_218(struct<2> Param0)
{
	return func_108((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		
		case 1:
			return 180f;
		
		case 2:
			return 270f;
		
		case 3:
			return 90f;
		
		default:
	}
	return 0f;
}

void func_220()
{
	float fVar0;
	struct<2> Var1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	struct<2> Var5;
	struct<8> Var6;
	struct<4> Var7;
	
	fVar0 = absf(sin((to_float(get_network_time()) * 0.2f)));
	bVar4 = false;
	bVar2 = false;
	while (bVar2 <= 6)
	{
		if (Local_136.f_62[bVar2 /*3*/].f_1 == -1)
		{
		}
		else if (BitTest(Local_135.f_309, bVar2))
		{
		}
		else
		{
			Var5 = { func_187(Local_136.f_62[bVar2 /*3*/]) };
			set_bit(&uVar3, bVar2);
			if (!BitTest(Local_135.f_310, bVar2) && !bVar4)
			{
				func_221("Pickup_Spawn", Var5, 1);
				bVar4 = true;
			}
			StringCopy(&Var6, Local_135.f_90[Local_136.f_62[bVar2 /*3*/].f_1 /*2*/], 64);
			if (Local_135.f_90[Local_136.f_62[bVar2 /*3*/].f_1 /*2*/].f_1 > 0)
			{
				StringIntConCat(&Var6, (Local_135.f_311 % Local_135.f_90[Local_136.f_62[bVar2 /*3*/].f_1 /*2*/].f_1) + 1, 64);
			}
			Var1 = { func_108(0.033333f, 0.059259f) };
			if (!((Local_136.f_62[bVar2 /*3*/].f_1 == 0 || Local_136.f_62[bVar2 /*3*/].f_1 == 2) || Local_136.f_62[bVar2 /*3*/].f_1 == 1))
			{
				Var1.f_0 = (Var1.f_0 - ((Var1.f_0 * 0.15f) * fVar0));
				Var1.f_1 = (Var1.f_1 - ((Var1.f_1 * 0.15f) * fVar0));
			}
			Var7 = { Local_135.f_107.f_17 };
			if ((get_network_time() - Local_136.f_62[bVar2 /*3*/].f_2) < 1250)
			{
				Var7.f_3 = round((fVar0 * 255f));
			}
			else if ((get_network_time() - Local_136.f_62[bVar2 /*3*/].f_2) > 16500)
			{
				Var7.f_3 = round((func_140(1f, 0.1f, (to_float(((get_network_time() - Local_136.f_62[bVar2 /*3*/].f_2) - 16500)) / 1000f), 4) * 255f));
			}
			func_123("MPArcadeCabinetGrid", &Var6, Var5.f_0, Var5.f_1, Var1.f_0, Var1.f_1, 0f, Var7);
		}
		bVar2++;
	}
	Local_135.f_310 = uVar3;
}

void func_221(char* sParam0, struct<2> Param1, bool bParam2)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_166(Param1);
	if (bParam2)
	{
	}
	iVar1 = get_sound_id();
	play_sound_frontend(iVar1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	if (bParam2)
	{
		set_variable_on_sound(iVar1, "Screen_Position", fVar0);
	}
	release_sound_id(iVar1);
}

void func_222()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)) && !Local_175[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_173[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Local_174[iVar0 /*16*/].f_5[iVar1 /*5*/] == -2147483647)
				{
				}
				else if (BitTest(Local_135.f_303, func_223(iVar0, iVar1)))
				{
				}
				else
				{
					fVar2 = func_219(Local_174[iVar0 /*16*/].f_5[iVar1 /*5*/].f_3);
					if (Local_174[iVar0 /*16*/].f_5[iVar1 /*5*/].f_4 == 4)
					{
						StringCopy(&Var3, "rocket_trail_", 64);
						StringIntConCat(&Var3, Local_135.f_416 + 1, 64);
						func_123("MPArcadeCabinetGrid", &Var3, Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.03333333f, fVar2, Local_135.f_107.f_17);
					}
					else
					{
						func_123("MPArcadeCabinetGrid", "bullet", Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_135.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.01111111f, fVar2, Local_135.f_107.f_17);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0, int iParam1)
{
	return (iParam1 + (2 * iParam0));
}

void func_224(int iParam0)
{
	if (iLocal_172[Local_175[iParam0 /*37*/].f_6] == 0 && (get_network_time() - Local_136.f_146) > 3000)
	{
		if ((BitTest(Local_135.f_417, 1) && !is_help_message_being_displayed()) && !BitTest(Local_135.f_417, 3))
		{
		}
	}
	if (Local_175[iParam0 /*37*/] != 3)
	{
		return;
	}
	if (Local_136.f_162)
	{
		func_230(iParam0, 4);
	}
	if (func_229(iParam0))
	{
		if (get_network_time() >= Local_175[iParam0 /*37*/].f_3 + 2500 && !BitTest(Local_135.f_142[iParam0], 6))
		{
			set_bit(&(Local_135.f_142[iParam0]), 6);
		}
		if (get_network_time() >= Local_175[iParam0 /*37*/].f_3 + 3500)
		{
			func_226(iParam0);
		}
	}
	else if (get_network_time() > Local_175[iParam0 /*37*/].f_3 + 1000 && !BitTest(Local_135.f_142[iParam0], 6))
	{
		func_230(iParam0, 4);
		func_225("Death_Dead");
	}
}

void func_225(char* sParam0)
{
	if (Local_135.f_178.f_4 == -1)
	{
		Local_135.f_178.f_4 = get_sound_id();
	}
	play_sound_frontend(Local_135.f_178.f_4, sParam0, "dlc_vw_am_tw_global_sounds", false);
}

void func_226(int iParam0)
{
	func_227(iParam0);
	func_230(iParam0, 2);
	func_225("Death_Resurrect");
	Local_175[iParam0 /*37*/].f_4 = get_network_time();
	Local_175[iParam0 /*37*/].f_2 = 8;
	Local_175[iParam0 /*37*/].f_5 = 0;
	Local_175[iParam0 /*37*/].f_1 = 1f;
	Local_135.f_178.f_2 = 0;
	if (BitTest(Local_135.f_142[iParam0], 6))
	{
		clear_bit(&(Local_135.f_142[iParam0]), 6);
	}
}

void func_227(int iParam0)
{
	Local_175[iParam0 /*37*/].f_9 = func_228(iParam0);
	Local_175[iParam0 /*37*/].f_9.f_1 = Local_175[iParam0 /*37*/].f_9;
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == iParam0)
		{
		}
		else if (!network_is_participant_active(int_to_participantindex(bVar2)) && !Local_175[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar2))
		{
		}
		else
		{
			func_184(Local_174[bVar2 /*16*/], &bVar8, &bVar9);
			set_bit(&uVar4, bVar8);
			set_bit(&uVar5, bVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_136.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_136.f_148[bVar2 /*4*/].f_1, &bVar8, &bVar9);
			if (Local_136.f_148[bVar2 /*4*/].f_2 == 0 || Local_136.f_148[bVar2 /*4*/].f_2 == 1)
			{
				set_bit(&uVar6, bVar8);
			}
			else if (Local_136.f_148[bVar2 /*4*/].f_2 == 2 || Local_136.f_148[bVar2 /*4*/].f_2 == 3)
			{
				set_bit(&uVar7, bVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_71(bVar2, bVar3);
			if (!(func_81(&(Local_136.f_85[Local_175[iParam0 /*37*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_81(&(Local_136.f_85[Local_175[iParam0 /*37*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_229(int iParam0)
{
	if (BitTest(Local_135.f_142[iParam0], 6))
	{
		return 1;
	}
	if (Local_175[iParam0 /*37*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_172[Local_175[iParam0 /*37*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_230(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Local_175[iParam0 /*37*/] = iParam1;
}

void func_231()
{
	if (iLocal_172[Local_173[Local_135.f_178 /*9*/].f_6] == 0 && (get_network_time() - Local_136.f_146) > 3000)
	{
		if ((BitTest(Local_135.f_417, 1) && !is_help_message_being_displayed()) && !BitTest(Local_135.f_417, 3))
		{
			func_151("SCGW_H_RSPWN", 7500, 0);
			set_bit(&(Local_135.f_417), 3);
		}
	}
	if (Local_173[Local_135.f_178 /*9*/] != 3)
	{
		return;
	}
	func_16();
	if (Local_136.f_162)
	{
		func_236(4);
		func_168(6);
	}
	if (func_235(Local_135.f_178))
	{
		if (get_network_time() >= Local_173[Local_135.f_178 /*9*/].f_3 + 2500 && !BitTest(Local_135.f_141, 6))
		{
			set_bit(&(Local_135.f_141), 6);
		}
		if (get_network_time() >= Local_173[Local_135.f_178 /*9*/].f_3 + 3500)
		{
			func_232();
		}
	}
	else if (get_network_time() > Local_173[Local_135.f_178 /*9*/].f_3 + 1000 && !BitTest(Local_135.f_141, 6))
	{
		func_236(4);
		func_225("Death_Dead");
		func_168(6);
	}
}

void func_232()
{
	func_233();
	func_236(2);
	func_225("Death_Resurrect");
	Local_173[Local_135.f_178 /*9*/].f_4 = get_network_time();
	Local_173[Local_135.f_178 /*9*/].f_2 = 8;
	Local_173[Local_135.f_178 /*9*/].f_5 = 0;
	Local_173[Local_135.f_178 /*9*/].f_1 = 1f;
	Local_135.f_178.f_2 = 0;
	func_168(4);
	if (BitTest(Local_135.f_141, 6))
	{
		clear_bit(&(Local_135.f_141), 6);
	}
}

void func_233()
{
	Local_174[Local_135.f_178 /*16*/] = func_234();
	Local_174[Local_135.f_178 /*16*/].f_1 = Local_174[Local_135.f_178 /*16*/];
}

int func_234()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == Local_135.f_178)
		{
		}
		else if (!network_is_participant_active(int_to_participantindex(bVar2)) && !Local_175[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar2))
		{
		}
		else
		{
			func_184(Local_174[bVar2 /*16*/], &bVar8, &bVar9);
			set_bit(&uVar4, bVar8);
			set_bit(&uVar5, bVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_136.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_136.f_148[bVar2 /*4*/].f_1, &bVar8, &bVar9);
			if (Local_136.f_148[bVar2 /*4*/].f_2 == 0 || Local_136.f_148[bVar2 /*4*/].f_2 == 1)
			{
				set_bit(&uVar6, bVar8);
			}
			else if (Local_136.f_148[bVar2 /*4*/].f_2 == 2 || Local_136.f_148[bVar2 /*4*/].f_2 == 3)
			{
				set_bit(&uVar7, bVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_71(bVar2, bVar3);
			if (!(func_81(&(Local_136.f_85[Local_173[Local_135.f_178 /*9*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_81(&(Local_136.f_85[Local_173[Local_135.f_178 /*9*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_235(int iParam0)
{
	if (BitTest(Local_135.f_141, 6))
	{
		return 1;
	}
	if (Local_173[iParam0 /*9*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_172[Local_173[iParam0 /*9*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_236(int iParam0)
{
	if (Local_135.f_178 == -1)
	{
		return;
	}
	Local_173[Local_135.f_178 /*9*/] = iParam0;
}

void func_237()
{
	int iVar0;
	
	if (Local_135.f_437 == -2147483647)
	{
		Local_135.f_437 = get_network_time();
	}
	if ((get_network_time() - Local_135.f_437) > 22500)
	{
		Local_135.f_437 = get_network_time();
		iVar0 = get_random_int_in_range(0, 3);
		if (iVar0 == Local_135.f_438)
		{
			iVar0 = get_random_int_in_range(0, 3);
		}
		Local_135.f_438 = iVar0;
		func_240();
	}
	Local_135.f_439 = (Local_135.f_439 + (func_239() * timestep()));
	Local_135.f_439.f_1 = (Local_135.f_439.f_1 + (func_238() * timestep()));
}

float func_238()
{
	switch (Local_135.f_438)
	{
		case 0:
			return -0.1111111f;
		
		case 1:
			return -0.1111111f;
		
		case 2:
			return -0.1388889f;
		
		default:
	}
	return 0f;
}

float func_239()
{
	switch (Local_135.f_438)
	{
		case 0:
			return -0.0625f;
		
		case 1:
			return -0.0625f;
		
		case 2:
			return 0.078125f;
		
		default:
	}
	return 0f;
}

void func_240()
{
	switch (Local_135.f_438)
	{
		case 0:
		case 1:
			Local_135.f_439 = { func_108((1f + get_random_float_in_range(-0.5f, 0f)), (1f + get_random_float_in_range(0f, 0.5f))) };
			break;
		
		case 2:
			Local_135.f_439 = { func_108((0f + get_random_float_in_range(0f, 0.5f)), (1f + get_random_float_in_range(0f, 0.5f))) };
			break;
	}
}

void func_241()
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_175[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_175[iVar1 /*37*/].f_6 == -1)
		{
		}
		else
		{
			func_242(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_135.f_306 = iVar0;
}

void func_242(int iParam0, int* iParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	int iVar5;
	bool bVar6;
	float fVar7;
	struct<2> Var8;
	float fVar9;
	struct<2> Var10;
	struct<2> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		bVar6 = func_223(iParam0, iVar5);
		if (Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/] == -2147483647)
		{
			if (BitTest(Local_135.f_304, bVar6))
			{
				clear_bit(&(Local_135.f_304), bVar6);
			}
		}
		else
		{
			set_bit(iParam1, bVar6);
			if (!BitTest(Local_135.f_306, bVar6))
			{
				Local_135.f_204[iParam0 /*19*/].f_5 = 0;
				func_259(iParam0, iVar5);
			}
			fVar7 = 0f;
			Var8 = { Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 };
			switch (Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_3)
			{
				case 0:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_108(0f, 0.01481481f) };
					break;
				
				case 1:
					fVar7 = (IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_108(0f, -0.01481481f) };
					break;
				
				case 2:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_108(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar7 = (IntToFloat(Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_108(-0.008333333f, 0f) };
					break;
			}
			fVar9 = (to_float((get_network_time() - Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/])) / to_float((Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_2 * Local_135.f_59[Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_135.f_304, bVar6))
			{
				if (fVar9 > 1f)
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { func_108(-1f, -1f) };
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/] = -2147483647;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 = -1f;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1.f_1 = -1f;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_3 = -1;
					Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 = -1;
				}
			}
			else
			{
				Var10 = { Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_1 };
				Var11 = { Var8 };
				if (func_258(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && func_258(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Var10 };
				}
				else
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				}
				Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] = { func_256(Var10, Var11, fVar9) };
				iVar12 = 0;
				iVar13 = 0;
				Var2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				Var3 = { func_186(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, Var4) };
				iVar12 = 0;
				while (iVar12 <= 3)
				{
					if (iVar12 == iParam0)
					{
					}
					else if (!network_is_participant_active(int_to_participantindex(iVar12)))
					{
					}
					else if (Local_173[bVar12 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(bVar12))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[bVar12 /*19*/] };
						Var1 = { Local_135.f_204[bVar12 /*19*/].f_2 };
						if (absf((Var0.f_0 - Var2.f_0)) > 0.104167f || absf((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_249(iVar5, bVar12, iParam0);
							iVar13 = 1;
						}
					}
					bVar12++;
				}
				iVar14 = 0;
				iVar14 = 0;
				while (iVar14 <= 3)
				{
					if (iVar14 == iParam0)
					{
					}
					else if (!Local_175[iVar14 /*37*/].f_25)
					{
					}
					else if (Local_175[iVar14 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar14))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar14 /*19*/] };
						Var1 = { Local_135.f_204[iVar14 /*19*/].f_2 };
						if (absf((Var0.f_0 - Var2.f_0)) > 0.104167f || absf((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_245(iVar5, iVar14, iParam0);
							iVar13 = 1;
						}
					}
					iVar14++;
				}
				if (fVar9 >= 1f || iVar13)
				{
					if (!BitTest(Local_135.f_304, bVar6))
					{
						if (Local_175[iParam0 /*37*/].f_9.f_5[iVar5 /*5*/].f_4 == 4)
						{
							func_243(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/]);
						}
						set_bit(&(Local_135.f_304), bVar6);
					}
				}
			}
		}
		iVar5++;
	}
}

void func_243(struct<2> Param0)
{
	Local_135.f_159[Local_135.f_308 /*3*/] = 0;
	Local_135.f_159[Local_135.f_308 /*3*/].f_1 = { Param0 };
	if (func_244(Param0, Local_135.f_204[Local_135.f_178 /*19*/]) < pow((0.185185f * 2f), 2f))
	{
		set_pad_shake(0, 1000, 100);
	}
	func_221("Rocket_Explode", Param0, 1);
	Local_135.f_308++;
	if (Local_135.f_308 >= 6)
	{
		Local_135.f_308 = 0;
	}
}

float func_244(struct<2> Param0, struct<2> Param1)
{
	return (pow((Param1.f_0 - Param0.f_0), 2f) + pow((Param1.f_1 - Param0.f_1), 2f));
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	func_246(iParam1, -Local_135.f_59[Local_175[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	set_pad_shake(0, 250, 200);
	Local_175[iParam1 /*37*/].f_3 = get_network_time();
	if (Local_175[iParam1 /*37*/] != 2)
	{
		func_163((6 + Local_175[iParam2 /*37*/].f_6));
	}
	if (Local_175[iParam1 /*37*/].f_2 <= 0)
	{
		func_163((2 + Local_175[iParam1 /*37*/].f_6));
		Local_134.f_18++;
	}
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (Local_175[iParam0 /*37*/].f_2 + iParam1);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_175[iParam0 /*37*/] == 2)
		{
			func_230(iParam0, 3);
			func_225("Death_Bleeps");
		}
	}
	if (iVar0 != Local_175[iParam0 /*37*/].f_2)
	{
		Local_175[iParam0 /*37*/].f_2 = iVar0;
	}
	if (iParam1 < 0)
	{
		func_247(iParam0, Local_175[iParam0 /*37*/] != 2, iParam2);
	}
}

void func_247(int iParam0, bool bParam1, var uParam2)
{
	struct<5> Var0;
	int iVar1;
	
	Var0.f_0 = 538776314;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = uParam2;
	iVar1 = func_135(1);
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 5, iVar1);
	}
}

int func_248(int iParam0)
{
	if (Local_175[iParam0 /*37*/] == 3)
	{
		return 1;
	}
	if (Local_175[iParam0 /*37*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_135.f_178)
	{
		func_250(-Local_135.f_59[Local_175[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		set_pad_shake(0, 250, 200);
		Local_173[Local_135.f_178 /*9*/].f_3 = get_network_time();
		if (Local_173[Local_135.f_178 /*9*/] != 2)
		{
			func_163((6 + Local_175[iParam2 /*37*/].f_6));
		}
	}
	else if (iParam2 == Local_135.f_178 && (Local_173[iParam1 /*9*/].f_2 - Local_135.f_59[Local_175[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_163((2 + Local_173[iParam1 /*9*/].f_6));
		Local_134.f_18++;
	}
}

void func_250(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (Local_173[Local_135.f_178 /*9*/].f_2 + iParam0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_173[Local_135.f_178 /*9*/] == 2)
		{
			func_236(3);
			set_bit(&(Local_135.f_141), 2);
			func_225("Death_Bleeps");
			Global_1931416 = 5;
		}
	}
	if (iVar0 != Local_173[Local_135.f_178 /*9*/].f_2)
	{
		Local_173[Local_135.f_178 /*9*/].f_2 = iVar0;
	}
	if (iParam0 < 0)
	{
		func_247(Local_135.f_178, Local_173[Local_135.f_178 /*9*/] != 2, iParam1);
	}
}

int func_251(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	var uVar4;
	
	Var0 = { Param0 };
	Var1 = { Param1 };
	Var2 = { Param2 };
	Var3 = { Param3 };
	func_255(&Param0, &Param1);
	func_255(&Param2, &Param3);
	func_255(&Var1, &Var0);
	func_255(&Var3, &Var2);
	if (((func_252(Param0, Param1, Var2, Var3, &uVar4) || func_252(Param0, Param1, Param2, Param3, &uVar4)) || func_252(Var0, Var1, Param2, Param3, &uVar4)) || func_252(Var0, Var1, Var2, Var3, &uVar4))
	{
		return 1;
	}
	return 0;
}

int func_252(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<2> Var9;
	
	fVar0 = (Param1.f_1 - Param0.f_1);
	fVar1 = (Param0.f_0 - Param1.f_0);
	fVar2 = ((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
	fVar3 = (Param3.f_1 - Param2.f_1);
	fVar4 = (Param2.f_0 - Param3.f_0);
	fVar5 = ((fVar3 * Param2.f_0) + (fVar4 * Param2.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_258(fVar6, (0f - 0.0001f), (0f + 0.0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_108(fVar7, fVar8) };
		if (((((((func_254((Param0.f_0 - 0.001f), (Param1.f_0 - 0.001f)) <= Var9.f_0 && Var9.f_0 <= func_253((Param0.f_0 + 0.001f), (Param1.f_0 + 0.001f))) && func_254((Param0.f_1 - 0.001f), (Param1.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_253((Param0.f_1 + 0.001f), (Param1.f_1 + 0.001f))) && func_254((Param2.f_0 - 0.001f), (Param3.f_0 - 0.001f)) <= Var9.f_0) && Var9.f_0 <= func_253((Param2.f_0 + 0.001f), (Param3.f_0 + 0.001f))) && func_254((Param2.f_1 - 0.001f), (Param3.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_253((Param2.f_1 + 0.001f), (Param3.f_1 + 0.001f)))
		{
			*uParam4 = { Var9 };
			return 1;
		}
	}
	*uParam4 = { func_108(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

float func_253(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_254(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_255(var uParam0, var uParam1)
{
	if (func_258(*uParam0, (*uParam1 - 0.0001f), (*uParam1 + 0.0001f)))
	{
		*uParam0 = (*uParam0 + 0.008333333f);
		*uParam1 = (*uParam1 - 0.008333333f);
	}
	if (func_258(uParam0->f_1, (uParam1->f_1 - 0.0001f), (uParam1->f_1 + 0.0001f)))
	{
		uParam0->f_1 = (uParam0->f_1 + 0.01481481f);
		uParam1->f_1 = (uParam1->f_1 - 0.01481481f);
	}
}

struct<2> func_256(struct<2> Param0, struct<2> Param1, float fParam2)
{
	return func_186(func_257(Param0, (1f - fParam2)), func_257(Param1, fParam2));
}

struct<2> func_257(struct<2> Param0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 * fParam1);
	Var0.f_1 = (Param0.f_1 * fParam1);
	return Var0;
}

bool func_258(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_259(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_175[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_175[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_164(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_260(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
}

void func_260(char* sParam0, int iParam1, var uParam2)
{
	float fVar0;
	
	fVar0 = func_166(Local_135.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = get_sound_id();
	}
	play_sound_frontend(*uParam2, sParam0, "dlc_vw_am_tw_global_sounds", false);
	set_variable_on_sound(*uParam2, "Screen_Position", fVar0);
}

void func_261()
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar1)))
		{
		}
		else if (Local_173[bVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_262(bVar1, &iVar0);
		}
		bVar1++;
	}
	Local_135.f_305 = iVar0;
}

void func_262(int iParam0, int* iParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	int iVar5;
	bool bVar6;
	float fVar7;
	struct<2> Var8;
	float fVar9;
	struct<2> Var10;
	struct<2> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 1)
	{
		bVar6 = func_223(iParam0, iVar5);
		if (Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/] == -2147483647)
		{
			if (BitTest(Local_135.f_303, bVar6))
			{
				clear_bit(&(Local_135.f_303), bVar6);
			}
		}
		else
		{
			set_bit(iParam1, bVar6);
			if (!BitTest(Local_135.f_305, bVar6))
			{
				Local_135.f_204[iParam0 /*19*/].f_5 = 0;
				func_265(iParam0, iVar5);
			}
			fVar7 = 0f;
			Var8 = { Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_1 };
			switch (Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_3)
			{
				case 0:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_108(0f, 0.01481481f) };
					break;
				
				case 1:
					fVar7 = (IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var8.f_1 = (Var8.f_1 + fVar7);
					Var4 = { func_108(0f, -0.01481481f) };
					break;
				
				case 2:
					fVar7 = -(IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_108(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar7 = (IntToFloat(Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var8.f_0 = (Var8.f_0 + fVar7);
					Var4 = { func_108(-0.008333333f, 0f) };
					break;
			}
			fVar9 = (to_float((get_network_time() - Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/])) / to_float((Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_2 * Local_135.f_59[Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_135.f_303, bVar6))
			{
				if (fVar9 > 1f)
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { func_108(-1f, -1f) };
					if (iParam0 == Local_135.f_178)
					{
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/] = -2147483647;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_1 = -1f;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_1.f_1 = -1f;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_3 = -1;
						Local_174[Local_135.f_178 /*16*/].f_5[iVar5 /*5*/].f_4 = -1;
					}
				}
			}
			else
			{
				Var10 = { Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_1 };
				Var11 = { Var8 };
				if (func_258(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && func_258(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Var10 };
				}
				else
				{
					Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				}
				Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] = { func_256(Var10, Var11, fVar9) };
				iVar12 = 0;
				iVar13 = 0;
				Var2 = { Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/] };
				Var3 = { func_186(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/].f_2, Var4) };
				iVar12 = 0;
				while (iVar12 <= 3)
				{
					if (iVar12 == iParam0)
					{
					}
					else if (!network_is_participant_active(int_to_participantindex(iVar12)))
					{
					}
					else if (Local_173[bVar12 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(bVar12))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[bVar12 /*19*/] };
						Var1 = { Local_135.f_204[bVar12 /*19*/].f_2 };
						if (absf((Var0.f_0 - Var2.f_0)) > 0.104167f || absf((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_264(iVar5, bVar12, iParam0);
							iVar13 = 1;
						}
					}
					bVar12++;
				}
				iVar14 = 0;
				iVar14 = 0;
				while (iVar14 <= 3)
				{
					if (iVar14 == iParam0)
					{
					}
					else if (!Local_175[iVar14 /*37*/].f_25)
					{
					}
					else if (Local_175[iVar14 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar14))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar14 /*19*/] };
						Var1 = { Local_135.f_204[iVar14 /*19*/].f_2 };
						if (absf((Var0.f_0 - Var2.f_0)) > 0.104167f || absf((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_263(iVar5, iVar14, iParam0);
							iVar13 = 1;
						}
					}
					iVar14++;
				}
				if (fVar9 >= 1f || iVar13)
				{
					if (!BitTest(Local_135.f_303, bVar6))
					{
						if (Local_174[iParam0 /*16*/].f_5[iVar5 /*5*/].f_4 == 4)
						{
							func_243(Local_135.f_204[iParam0 /*19*/].f_10[iVar5 /*4*/]);
						}
						set_bit(&(Local_135.f_303), bVar6);
					}
				}
			}
		}
		iVar5++;
	}
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	func_246(iParam1, -Local_135.f_59[Local_174[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	set_pad_shake(0, 250, 200);
	Local_175[iParam1 /*37*/].f_3 = get_network_time();
	if (Local_175[iParam1 /*37*/] != 2)
	{
		func_163((6 + Local_173[iParam2 /*9*/].f_6));
	}
	if (Local_175[iParam1 /*37*/].f_2 <= 0)
	{
		func_163((2 + Local_175[iParam1 /*37*/].f_6));
		Local_134.f_18++;
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	Local_135.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_135.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_135.f_178)
	{
		func_250(-Local_135.f_59[Local_174[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		set_pad_shake(0, 250, 200);
		Local_173[Local_135.f_178 /*9*/].f_3 = get_network_time();
		if (Local_173[Local_135.f_178 /*9*/] != 2)
		{
			func_163((6 + Local_173[iParam2 /*9*/].f_6));
		}
	}
	else if (iParam2 == Local_135.f_178 && (Local_173[iParam1 /*9*/].f_2 - Local_135.f_59[Local_174[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_163((2 + Local_173[iParam1 /*9*/].f_6));
		Local_134.f_18++;
	}
}

void func_265(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_174[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_174[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_164(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_260(sVar0, iParam0, &(Local_135.f_204[iParam0 /*19*/].f_8));
	}
}

void func_266()
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	struct<2> Var14;
	struct<2> Var15;
	struct<2> Var16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	bVar5 = false;
	iVar6 = 0;
	while (iVar6 <= 2)
	{
		iVar11 = get_network_time();
		if (Local_136.f_148[iVar6 /*4*/].f_3 != -1 && iVar11 > Local_136.f_148[iVar6 /*4*/])
		{
			iVar12 = func_72((Local_136.f_148[iVar6 /*4*/].f_2 == 1 || Local_136.f_148[iVar6 /*4*/].f_2 == 0), 11, 15) * 650;
			if (iVar11 > (Local_136.f_148[iVar6 /*4*/] + iVar12))
			{
			}
			else
			{
				bVar5 = true;
				fVar13 = (to_float((iVar11 - Local_136.f_148[iVar6 /*4*/])) / to_float(iVar12));
				func_184(Local_136.f_148[iVar6 /*4*/].f_1, &iVar7, &iVar8);
				switch (Local_136.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						iVar9 = iVar7;
						iVar10 = 0;
						Var4 = { func_108(0f, -(Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 1:
						iVar9 = iVar7;
						iVar10 = 8;
						Var4 = { func_108(0f, (Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 2:
						iVar9 = 0;
						iVar10 = iVar8;
						Var4 = { func_108(-(Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
					
					case 3:
						iVar9 = 12;
						iVar10 = iVar8;
						Var4 = { func_108((Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
				}
				Var14 = { func_187(Local_136.f_148[iVar6 /*4*/].f_1) };
				Var15 = { func_187(func_71(iVar9, iVar10)) };
				switch (Local_136.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						Var14.f_1 = (Var14.f_1 + 0.1851855f);
						Var15.f_1 = (Var15.f_1 + -0.1851855f);
						break;
					
					case 1:
						Var14.f_1 = (Var14.f_1 + -0.1851855f);
						Var15.f_1 = (Var15.f_1 + 0.1851855f);
						break;
					
					case 2:
						Var14.f_0 = (Var14.f_0 + 0.1041665f);
						Var15.f_0 = (Var15.f_0 + -0.1041665f);
						break;
					
					case 3:
						Var14.f_0 = (Var14.f_0 + -0.1041665f);
						Var15.f_0 = (Var15.f_0 + 0.1041665f);
						break;
				}
				Local_135.f_281[iVar6 /*7*/].f_2 = { Local_135.f_281[iVar6 /*7*/] };
				Local_135.f_281[iVar6 /*7*/] = { func_256(Var14, Var15, fVar13) };
				if (!func_204(Local_135.f_281[iVar6 /*7*/], Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2))
				{
					if (func_204(Local_135.f_281[iVar6 /*7*/].f_2, Local_135.f_22[Local_136.f_148[iVar6 /*4*/].f_3 /*4*/].f_2))
					{
						if (Local_136.f_148[iVar6 /*4*/].f_3 != 0)
						{
							func_221(func_272(Local_136.f_148[iVar6 /*4*/].f_3), Local_135.f_281[iVar6 /*7*/], 1);
						}
					}
					else
					{
						if (!is_audio_scene_active("dlc_vw_am_tw_vehicle_drivethrough_scene"))
						{
							start_audio_scene("dlc_vw_am_tw_vehicle_drivethrough_scene");
						}
						if (is_audio_scene_active("dlc_vw_am_tw_in_gameplay_scene"))
						{
							stop_audio_scene("dlc_vw_am_tw_in_gameplay_scene");
						}
						if (iVar6 != 2)
						{
							Var16 = { Local_135.f_281[iVar6 /*7*/] };
							if (iVar6 == 1 && Local_136.f_148[iVar6 /*4*/].f_2 != Local_136.f_148[2 /*4*/].f_2)
							{
								Var16 = { func_108(0.5f, 0.5f) };
							}
							if (Local_136.f_148[iVar6 /*4*/].f_3 >= 5)
							{
								iVar17 = (Local_136.f_148[iVar6 /*4*/].f_3 - 5);
								func_270(func_271(Local_136.f_148[iVar6 /*4*/].f_3), &(Local_135.f_281[iVar6 /*7*/].f_5), Var16, iVar17);
							}
							else
							{
								func_169(func_271(Local_136.f_148[iVar6 /*4*/].f_3), &(Local_135.f_281[iVar6 /*7*/].f_5), Var16, 1);
							}
						}
					}
				}
				else if (Local_135.f_281[iVar6 /*7*/].f_5 != -1)
				{
					func_170(&(Local_135.f_281[iVar6 /*7*/].f_5));
				}
				Var2 = { func_186(Local_135.f_281[iVar6 /*7*/], Var4) };
				Var3 = { func_269(Local_135.f_281[iVar6 /*7*/].f_2, Var4) };
				iVar18 = 0;
				iVar18 = 0;
				while (iVar18 <= 3)
				{
					if (!network_is_participant_active(int_to_participantindex(iVar18)))
					{
					}
					else if (Local_173[bVar18 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(bVar18))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[bVar18 /*19*/] };
						Var1 = { Local_135.f_204[bVar18 /*19*/].f_2 };
						if (absf((Var0.f_0 - Var2.f_0)) > 0.104167f || absf((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_268(bVar18);
						}
					}
					bVar18++;
				}
				iVar19 = 0;
				iVar19 = 0;
				while (iVar19 <= 3)
				{
					if (!Local_175[iVar19 /*37*/].f_25)
					{
					}
					else if (Local_175[iVar19 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar19))
					{
					}
					else
					{
						Var0 = { Local_135.f_204[iVar19 /*19*/] };
						Var1 = { Local_135.f_204[iVar19 /*19*/].f_2 };
						if (absf((Var0.f_0 - Var2.f_0)) > 0.104167f || absf((Var0.f_1 - Var2.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var2, Var3, Var0, Var1))
						{
							func_267(iVar19);
						}
					}
					iVar19++;
				}
				Jump @1613; //curOff = 1374
				if (Local_135.f_281[iVar6 /*7*/].f_5 != -1)
				{
					func_170(&(Local_135.f_281[iVar6 /*7*/].f_5));
				}
				Local_135.f_281[iVar6 /*7*/] = { func_187(Local_136.f_148[iVar6 /*4*/].f_1) };
				switch (Local_136.f_148[iVar6 /*4*/].f_2)
				{
					case 0:
						Local_135.f_281[iVar6 /*7*/].f_1 = (Local_135.f_281[iVar6 /*7*/].f_1 + 0.1851855f);
						break;
					
					case 1:
						Local_135.f_281[iVar6 /*7*/].f_1 = (Local_135.f_281[iVar6 /*7*/].f_1 + -0.1851855f);
						break;
					
					case 2:
						Local_135.f_281[iVar6 /*7*/] = (Local_135.f_281[iVar6 /*7*/] + 0.1041665f);
						break;
					
					case 3:
						Local_135.f_281[iVar6 /*7*/] = (Local_135.f_281[iVar6 /*7*/] + -0.1041665f);
						break;
				}
				Local_135.f_281[iVar6 /*7*/].f_2 = { Local_135.f_281[iVar6 /*7*/] };
			}
			iVar6++;
			if (!bVar5)
			{
				if (!is_audio_scene_active("dlc_vw_am_tw_in_gameplay_scene"))
				{
					start_audio_scene("dlc_vw_am_tw_in_gameplay_scene");
				}
				if (is_audio_scene_active("dlc_vw_am_tw_vehicle_drivethrough_scene"))
				{
					stop_audio_scene("dlc_vw_am_tw_vehicle_drivethrough_scene");
				}
			}
		}

void func_267(int iParam0)
{
	func_246(iParam0, -8, 1);
	Local_175[iParam0 /*37*/].f_3 = get_network_time();
	func_163(10);
}

void func_268(int iParam0)
{
	if (iParam0 == Local_135.f_178)
	{
		func_250(-8, 1);
		set_pad_shake(0, 1000, 200);
		Local_173[Local_135.f_178 /*9*/].f_3 = get_network_time();
		func_163(10);
	}
}

struct<2> func_269(struct<2> Param0, struct<2> Param1)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 - Param1.f_0);
	Var0.f_1 = (Param0.f_1 - Param1.f_1);
	return Var0;
}

void func_270(char* sParam0, var uParam1, struct<2> Param2, int iParam3)
{
	float fVar0;
	
	fVar0 = func_166(Param2);
	if (*uParam1 == -1)
	{
		*uParam1 = get_sound_id();
	}
	if (has_sound_finished(*uParam1))
	{
		play_sound_frontend(*uParam1, sParam0, func_165(iParam3), false);
	}
	set_variable_on_sound(*uParam1, "Screen_Position", fVar0);
}

char* func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ice_Cream_Van_Loop";
		
		case 1:
		case 2:
		case 3:
			return "Emergency_Siren_Loop";
		
		case 4:
			return "Tank_Loop";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Loop";
		
		default:
	}
	return "INVALID VEHICLE";
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Ambulance_Warning";
		
		case 2:
			return "Police_Car_Warning";
		
		case 3:
			return "Fire_Truck_Warning";
		
		case 4:
			return "Tank_Warning";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Warning";
		
		default:
	}
	return "INVALID VEHICLE";
}

void func_273()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_175[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_175[iVar0 /*37*/].f_6 == -1)
		{
		}
		else if (func_68(iVar0))
		{
			Local_135.f_204[iVar0 /*19*/].f_2 = { func_108(-1f, -1f) };
		}
		else
		{
			func_274(iVar0);
		}
		iVar0++;
	}
}

void func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	Var4 = { func_187(Local_175[iParam0 /*37*/].f_9) };
	Var5 = { func_187(Local_175[iParam0 /*37*/].f_9.f_1) };
	fVar6 = (to_float((get_network_time() - Local_175[iParam0 /*37*/].f_9.f_2)) / to_float(func_280(iParam0)));
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if ((fVar6 >= 0.65f && !BitTest(Local_135.f_142[iParam0], 0)) || (fVar6 >= 0.8f && !BitTest(Local_135.f_142[iParam0], 1)))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_279(Local_175[iParam0 /*37*/].f_9, 1, Local_175[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar7 = func_71((iVar0 - 1), iVar1);
				func_279(uVar7, 1, Local_175[iParam0 /*37*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_279(Local_175[iParam0 /*37*/].f_9, 0, Local_175[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar8 = func_71(iVar0, (iVar1 - 1));
				func_279(uVar8, 0, Local_175[iParam0 /*37*/].f_6);
			}
		}
		if (!BitTest(Local_135.f_142[iParam0], 0))
		{
			set_bit(&(Local_135.f_142[iParam0]), false);
		}
		else
		{
			clear_bit(&(Local_135.f_142[iParam0]), 4);
			set_bit(&(Local_135.f_142[iParam0]), true);
		}
	}
	if (fVar6 > 0.85f || fVar6 < 0.15f)
	{
		if (fVar6 > 0.85f)
		{
			iVar9 = Local_175[iParam0 /*37*/].f_9;
		}
		else
		{
			iVar9 = Local_175[iParam0 /*37*/].f_9.f_1;
		}
		bVar10 = false;
		while (bVar10 <= 6)
		{
			if (Local_136.f_62[bVar10 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_135.f_309, bVar10))
				{
					clear_bit(&(Local_135.f_309), bVar10);
				}
			}
			else if (!func_278(bVar10, iParam0))
			{
			}
			else if ((get_network_time() - Local_136.f_62[bVar10 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_135.f_309, bVar10))
			{
			}
			else if (iVar9 == Local_136.f_62[bVar10 /*3*/])
			{
				set_bit(&(Local_135.f_309), bVar10);
				func_276(bVar10, iParam0);
				func_275(bVar10);
				func_163(11);
			}
			bVar10++;
		}
	}
	if (fVar6 < 1f)
	{
		if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { func_256(Var5, Var4, fVar6) };
		}
		else
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
		}
		Local_135.f_204[iParam0 /*19*/] = { func_256(Var5, Var4, fVar6) };
		return;
	}
	if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
	}
	Local_135.f_204[iParam0 /*19*/] = { Var4 };
	Local_135.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_275(bool bParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = 1391426543;
	Var0.f_1 = player_id();
	Var0.f_2 = bParam0;
	iVar1 = func_135(1);
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 3, iVar1);
	}
}

void func_276(bool bParam0, int iParam1)
{
	Local_134.f_17++;
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_246(iParam1, 4, 0);
			break;
		
		case 1:
			Local_135.f_178.f_2 += 10;
			break;
		
		case 2:
			func_277(Local_175[iParam1 /*37*/].f_9, Local_175[iParam1 /*37*/].f_6);
			break;
		
		case 3:
			Local_175[iParam1 /*37*/].f_5 = 1;
			break;
		
		case 4:
			Local_175[iParam1 /*37*/].f_5 = 2;
			break;
		
		case 5:
			Local_175[iParam1 /*37*/].f_5 = 3;
			break;
		
		case 6:
			Local_175[iParam1 /*37*/].f_5 = 4;
			break;
		
		case 7:
			Local_175[iParam1 /*37*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_135.f_417, 2) && Local_175[iParam1 /*37*/].f_5 != 0)
	{
	}
}

void func_277(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_0 = 1719815852;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	iVar1 = func_135(1);
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 4, iVar1);
	}
}

int func_278(bool bParam0, int iParam1)
{
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_175[iParam1 /*37*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_175[iParam1 /*37*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_175[iParam1 /*37*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_175[iParam1 /*37*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_175[iParam1 /*37*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_175[iParam1 /*37*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_279(var uParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar1;
	
	Var0.f_0 = 166716001;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	iVar1 = func_135(1);
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 5, iVar1);
	}
}

int func_280(int iParam0)
{
	return round((700f * Local_175[iParam0 /*37*/].f_1));
}

void func_281()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar0)))
		{
		}
		else if (Local_173[bVar0 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar0))
		{
			Local_135.f_204[bVar0 /*19*/].f_2 = { func_108(-1f, -1f) };
		}
		else
		{
			func_282(bVar0);
		}
		bVar0++;
	}
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	float fVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	
	func_184(Local_174[iParam0 /*16*/], &iVar0, &iVar1);
	func_184(Local_174[iParam0 /*16*/].f_1, &iVar2, &iVar3);
	Var4 = { func_187(Local_174[iParam0 /*16*/]) };
	Var5 = { func_187(Local_174[iParam0 /*16*/].f_1) };
	fVar6 = (to_float((get_network_time() - Local_174[iParam0 /*16*/].f_2)) / to_float(func_183(iParam0)));
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if (iParam0 == Local_135.f_178 && ((fVar6 >= 0.65f && !BitTest(Local_135.f_141, 0)) || (fVar6 >= 0.8f && !BitTest(Local_135.f_141, 1))))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_279(Local_174[iParam0 /*16*/], 1, Local_173[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar7 = func_71((iVar0 - 1), iVar1);
				func_279(uVar7, 1, Local_173[iParam0 /*9*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_279(Local_174[iParam0 /*16*/], 0, Local_173[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar8 = func_71(iVar0, (iVar1 - 1));
				func_279(uVar8, 0, Local_173[iParam0 /*9*/].f_6);
			}
		}
		if (!BitTest(Local_135.f_141, 0))
		{
			set_bit(&(Local_135.f_141), false);
		}
		else
		{
			clear_bit(&(Local_135.f_141), 4);
			set_bit(&(Local_135.f_141), true);
		}
	}
	if (fVar6 > 0.85f || fVar6 < 0.15f)
	{
		if (fVar6 > 0.85f)
		{
			iVar9 = Local_174[iParam0 /*16*/];
		}
		else
		{
			iVar9 = Local_174[iParam0 /*16*/].f_1;
		}
		bVar10 = false;
		while (bVar10 <= 6)
		{
			if (Local_136.f_62[bVar10 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_135.f_309, bVar10))
				{
					clear_bit(&(Local_135.f_309), bVar10);
				}
			}
			else if (!func_284(bVar10))
			{
			}
			else if ((get_network_time() - Local_136.f_62[bVar10 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_135.f_309, bVar10))
			{
			}
			else if (iVar9 == Local_136.f_62[bVar10 /*3*/])
			{
				if (iParam0 == Local_135.f_178)
				{
					set_bit(&(Local_135.f_309), bVar10);
					func_283(bVar10);
					set_pad_shake(0, 100, 50);
					func_275(bVar10);
					func_163(11);
				}
			}
			bVar10++;
		}
	}
	if (fVar6 < 1f)
	{
		if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { func_256(Var5, Var4, fVar6) };
		}
		else
		{
			Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
		}
		Local_135.f_204[iParam0 /*19*/] = { func_256(Var5, Var4, fVar6) };
		return;
	}
	if (Local_135.f_204[iParam0 /*19*/].f_2 < 0f && Local_135.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_135.f_204[iParam0 /*19*/].f_2 = { Local_135.f_204[iParam0 /*19*/] };
	}
	Local_135.f_204[iParam0 /*19*/] = { Var4 };
	Local_135.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_283(bool bParam0)
{
	struct<2> Var0;
	
	Var0 = { func_187(Local_136.f_62[bParam0 /*3*/]) };
	Local_134.f_17++;
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_221("Pickup_Health", Var0, 1);
			func_250(4, 0);
			break;
		
		case 1:
			func_221("Pickup_Speed", Var0, 1);
			Local_135.f_178.f_2 += 10;
			break;
		
		case 2:
			func_221("Pickup_Collect_Transport", Var0, 1);
			func_277(Local_174[Local_135.f_178 /*16*/], Local_173[Local_135.f_178 /*9*/].f_6);
			break;
		
		case 3:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 1;
			break;
		
		case 4:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 2;
			break;
		
		case 5:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 3;
			break;
		
		case 6:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 4;
			break;
		
		case 7:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_173[Local_135.f_178 /*9*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_135.f_417, 2) && Local_173[Local_135.f_178 /*9*/].f_5 != 0)
	{
		set_bit(&(Local_135.f_417), 2);
		func_151("SCGW_H_SHOOT", 7500, 0);
	}
}

int func_284(bool bParam0)
{
	switch (Local_136.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_173[Local_135.f_178 /*9*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_173[Local_135.f_178 /*9*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_285(int iParam0)
{
	func_297(iParam0);
	func_293(iParam0);
	func_290(iParam0);
	func_286(iParam0);
}

void func_286(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_175[iParam0 /*37*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_288(iParam0);
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_287(iParam0, Local_175[iParam0 /*37*/].f_9.f_4);
	}
	if (bVar2)
	{
		if (get_network_time() < (Local_135.f_183[iParam0 /*5*/].f_3 + Local_135.f_59[Local_175[iParam0 /*37*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_175[iParam0 /*37*/].f_9.f_4;
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/] = get_network_time();
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/].f_3 = uVar1;
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/].f_4 = Local_175[iParam0 /*37*/].f_5;
		Local_175[iParam0 /*37*/].f_9.f_5[Local_135.f_307 /*5*/].f_1 = { Local_135.f_204[iParam0 /*19*/] };
		Local_175[iParam0 /*37*/].f_9.f_4 = uVar1;
		Local_135.f_183[iParam0 /*5*/].f_3 = get_network_time();
		Local_135.f_307++;
		if (Local_135.f_307 >= 2)
		{
			Local_135.f_307 = 0;
		}
		set_pad_shake(0, 50, 100);
	}
}

int func_287(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Var0 = { func_187(func_71(12, 8)) };
	Var1 = { func_187(func_71(0, 0)) };
	switch (iParam1)
	{
		case 0:
			if (func_258(Local_135.f_204[iParam0 /*19*/].f_1, (Var1.f_1 - 0.0001f), (Var1.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_258(Local_135.f_204[iParam0 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_258(Local_135.f_204[iParam0 /*19*/], (Var1.f_0 - 0.0001f), (Var1.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_258(Local_135.f_204[iParam0 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	if (Local_175[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) > get_network_time()
	{
		if (iVar3 != iVar5)
		{
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 0;
			}
		}
		else if (iVar2 != iVar4)
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_288(int iParam0)
{
	if (func_289(iParam0))
	{
		return -1;
	}
	if (Local_175[iParam0 /*37*/].f_26)
	{
		return 8;
	}
	return -1;
}

int func_289(int iParam0)
{
	if (is_pause_menu_active())
	{
		return 1;
	}
	if (Local_175[iParam0 /*37*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_290(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_292(iParam0);
	bVar1 = func_291(iParam0, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_175[iParam0 /*37*/].f_9.f_4 = 0;
				break;
			
			case 5:
				Local_175[iParam0 /*37*/].f_9.f_4 = 1;
				break;
			
			case 6:
				Local_175[iParam0 /*37*/].f_9.f_4 = 2;
				break;
			
			case 7:
				Local_175[iParam0 /*37*/].f_9.f_4 = 3;
				break;
			}
	}
}

int func_291(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_175[iParam0 /*37*/].f_9.f_2 + func_183(Local_135.f_178)) > get_network_time()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_292(int iParam0)
{
	if (func_289(iParam0))
	{
		return -1;
	}
	return Local_175[iParam0 /*37*/].f_28;
}

void func_293(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_294(iParam0);
	bVar1 = false;
	if (((!((Local_175[iParam0 /*37*/].f_9.f_2 + func_183(Local_135.f_178)) < get_network_time() && BitTest(Local_135.f_142[iParam0], 1)) && get_network_time() < Local_175[iParam0 /*37*/].f_9.f_2 + 100) && Local_175[iParam0 /*37*/].f_9.f_3 != iVar0) && !BitTest(Local_135.f_142[iParam0], 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
		func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	else
	{
		func_184(Local_175[iParam0 /*37*/].f_9, &iVar2, &iVar3);
		func_184(Local_175[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_175[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) < get_network_time() && BitTest(Local_135.f_142[iParam0], 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_135.f_142[iParam0], 5))
			{
				set_bit(&(Local_135.f_142[iParam0]), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_175[iParam0 /*37*/].f_9 = func_71(iVar2, iVar3);
			Local_175[iParam0 /*37*/].f_9.f_1 = func_71(iVar4, iVar5);
			if (Local_135.f_178.f_2 > 0)
			{
				Local_175[iParam0 /*37*/].f_1 = 0.75f;
				Local_135.f_178.f_2 = (Local_135.f_178.f_2 - 1);
			}
			else if (!func_258(Local_175[iParam0 /*37*/].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_175[iParam0 /*37*/].f_1 = 1f;
			}
			Local_175[iParam0 /*37*/].f_9.f_2 = get_network_time();
			if (iVar8 > 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_175[iParam0 /*37*/].f_9.f_4 = 1;
			}
			clear_bit(&(Local_135.f_142[iParam0]), true);
			clear_bit(&(Local_135.f_142[iParam0]), false);
			Local_175[iParam0 /*37*/].f_9.f_3 = iVar0;
			if (!BitTest(Local_135.f_142[iParam0], 5))
			{
				set_bit(&(Local_135.f_142[iParam0]), 5);
			}
		}
	}
}

int func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_289(iParam0))
	{
		return -1;
	}
	if (!BitTest(Local_135.f_142[iParam0], 5))
	{
		return func_296(Local_175[iParam0 /*37*/].f_6);
	}
	iVar0 = Local_175[iParam0 /*37*/].f_33;
	iVar1 = Local_175[iParam0 /*37*/].f_34;
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	uVar4 = func_295(iVar2, iVar3, iVar0, iVar1);
	return uVar4;
	return -1;
}

int func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam2 - iParam0);
	iVar1 = (iParam3 - iParam1);
	if ((((iParam2 < 0 || iParam2 > 13) || iParam3 < 0) || iParam3 > 9) || (iVar0 == 0 && iVar1 == 0))
	{
		return -1;
	}
	if (iVar1 < 0)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	if (iVar0 < 0)
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 3;
	}
	if (absi(iVar0) < absi(iVar1))
	{
		if ((iParam0 % 2) == 0)
		{
			return iVar3;
		}
		else
		{
			return iVar2;
		}
	}
	else if ((iParam1 % 2) == 0)
	{
		return iVar2;
	}
	else
	{
		return iVar3;
	}
	return -1;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 3:
			return 2;
		
		default:
	}
	return -1;
}

void func_297(int iParam0)
{
	Local_175[iParam0 /*37*/].f_26 = func_308(iParam0);
	Local_175[iParam0 /*37*/].f_28 = func_307(iParam0);
	if (Local_175[iParam0 /*37*/].f_27)
	{
		if (Local_175[iParam0 /*37*/].f_36 != 3 && func_306(iParam0))
		{
			Local_175[iParam0 /*37*/].f_36 = 3;
		}
		else if (Local_175[iParam0 /*37*/].f_36 != 1 && func_305(iParam0))
		{
			Local_175[iParam0 /*37*/].f_36 = 1;
		}
		else if (Local_175[iParam0 /*37*/].f_36 != 2 && func_304(iParam0))
		{
			Local_175[iParam0 /*37*/].f_36 = 2;
		}
		else if (Local_175[iParam0 /*37*/].f_36 != 0 && Local_175[iParam0 /*37*/].f_27)
		{
			Local_175[iParam0 /*37*/].f_36 = 0;
		}
		switch (Local_175[iParam0 /*37*/].f_36)
		{
			case 0:
				func_301(iParam0);
				break;
			
			case 1:
				func_300(iParam0);
				break;
			
			case 2:
				func_299(iParam0);
				break;
			
			case 3:
				func_298(iParam0);
				break;
		}
		if (Local_175[iParam0 /*37*/].f_33 == -1)
		{
			Local_175[iParam0 /*37*/].f_33 = get_random_int_in_range(0, 6) * 2;
		}
		if (Local_175[iParam0 /*37*/].f_34 == -1)
		{
			Local_175[iParam0 /*37*/].f_34 = get_random_int_in_range(0, 4) * 2;
		}
		Local_175[iParam0 /*37*/].f_27 = 0;
	}
	else if ((Local_175[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) < get_network_time() && BitTest(Local_135.f_142[iParam0], 1))
	{
		if (Local_175[iParam0 /*37*/].f_9 == func_71(Local_175[iParam0 /*37*/].f_33, Local_175[iParam0 /*37*/].f_34) || (Local_175[iParam0 /*37*/].f_33 == -1 && Local_175[iParam0 /*37*/].f_34 == -1))
		{
			Local_175[iParam0 /*37*/].f_27 = 1;
		}
	}
}

void func_298(int iParam0)
{
	if (Local_175[iParam0 /*37*/].f_35 == -1)
	{
		Local_175[iParam0 /*37*/].f_35 = get_random_int_in_range(0, 4);
	}
	if (Local_175[iParam0 /*37*/].f_35 == iParam0)
	{
		Local_175[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (!network_is_participant_active(int_to_participantindex(Local_175[iParam0 /*37*/].f_35)) && !Local_175[Local_175[iParam0 /*37*/].f_35 /*37*/].f_25)
	{
		Local_175[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (Local_173[Local_175[iParam0 /*37*/].f_35 /*9*/].f_2 == 0)
	{
		Local_175[iParam0 /*37*/].f_35 = -1;
		return;
	}
	func_184(Local_174[Local_175[iParam0 /*37*/].f_35 /*16*/], &(Local_175[iParam0 /*37*/].f_33), &(Local_175[iParam0 /*37*/].f_34));
}

void func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		if ((Local_136.f_62[iVar6 /*3*/].f_1 != -1 && Local_136.f_62[iVar6 /*3*/] != -1) && Local_136.f_62[iVar6 /*3*/].f_2 != -2147483647)
		{
			if (Local_136.f_62[iVar6 /*3*/].f_1 == 0)
			{
				func_184(Local_136.f_62[iVar6 /*3*/], &iVar2, &iVar3);
				if ((iVar4 == -1 && iVar5 == -1) || (absi((iVar2 - iVar0)) + absi((iVar3 - iVar1))) < (absi((iVar4 - iVar0)) + absi((iVar5 - iVar1))))
				{
					iVar4 = iVar2;
					iVar5 = iVar3;
				}
			}
		}
		iVar6++;
	}
	if (iVar4 == -1)
	{
		Local_175[iParam0 /*37*/].f_33 = get_random_int_in_range(0, 6) * 2;
	}
	if (iVar5 == -1)
	{
		Local_175[iParam0 /*37*/].f_34 = get_random_int_in_range(0, 4) * 2;
	}
}

void func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = get_network_time();
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		iVar10 = func_72((Local_136.f_148[iVar9 /*4*/].f_2 == 1 || Local_136.f_148[iVar9 /*4*/].f_2 == 0), 11, 15) * 650;
		if (Local_136.f_148[iVar9 /*4*/].f_3 == -1 || (iVar2 < Local_136.f_148[iVar9 /*4*/] && iVar2 > (Local_136.f_148[iVar9 /*4*/] + iVar10)))
		{
		}
		else
		{
			func_184(Local_136.f_148[iVar9 /*4*/].f_1, &iVar7, &iVar8);
			bVar3 = (bVar3 || iVar7 == iVar0);
			bVar4 = (bVar4 || iVar8 == iVar1);
			bVar5 = (bVar5 || (Local_136.f_148[iVar9 /*4*/].f_2 == 1 && iVar8 == iVar1));
			bVar6 = (bVar6 || (Local_136.f_148[iVar9 /*4*/].f_2 == 2 && iVar7 == iVar0));
		}
		iVar9++;
	}
	if (bVar3)
	{
		if (bVar5)
		{
			if (iVar1 + 2 > 8)
			{
				Local_175[iParam0 /*37*/].f_34 = (iVar1 - 2);
			}
			else
			{
				Local_175[iParam0 /*37*/].f_34 = iVar1 + 2;
			}
		}
		else if ((iVar1 - 2) < 0)
		{
			Local_175[iParam0 /*37*/].f_34 = iVar1 + 2;
		}
		else
		{
			Local_175[iParam0 /*37*/].f_34 = (iVar1 - 2);
		}
	}
	if (bVar4)
	{
		if (bVar6)
		{
			if (iVar0 + 2 > 12)
			{
				Local_175[iParam0 /*37*/].f_33 = (iVar0 - 2);
			}
			else
			{
				Local_175[iParam0 /*37*/].f_33 = iVar0 + 2;
			}
		}
		else if ((iVar0 - 2) < 0)
		{
			Local_175[iParam0 /*37*/].f_33 = iVar0 + 2;
		}
		else
		{
			Local_175[iParam0 /*37*/].f_33 = (iVar0 - 2);
		}
	}
	if (!bVar3 && !bVar4)
	{
		Local_175[iParam0 /*37*/].f_33 = get_random_int_in_range(0, 6) * 2;
		Local_175[iParam0 /*37*/].f_34 = get_random_int_in_range(0, 4) * 2;
	}
}

void func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	
	if (Local_175[iParam0 /*37*/].f_29 == -1 && Local_175[iParam0 /*37*/].f_30 == -1)
	{
		func_303(iParam0);
	}
	StringCopy(&cVar2, "", 64);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar2, "", 64);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringIntConCat(&cVar2, Local_136[iVar0 /*5*/][iVar1], 64);
			StringConCat(&cVar2, " ", 64);
			iVar0++;
		}
		iVar1++;
	}
	if ((Local_175[iParam0 /*37*/].f_29 != -1 && Local_175[iParam0 /*37*/].f_30 != -1) && Local_136[(Local_175[iParam0 /*37*/].f_29 % 6) /*5*/][(Local_175[iParam0 /*37*/].f_30 % 4)] == Local_175[iParam0 /*37*/].f_6)
	{
		Local_175[iParam0 /*37*/].f_31 = 4;
	}
	if (Local_175[iParam0 /*37*/].f_29 != -1 && Local_175[iParam0 /*37*/].f_30 != -1)
	{
		func_302(iParam0);
	}
}

void func_302(int iParam0)
{
	Local_175[iParam0 /*37*/].f_31++;
	Local_175[iParam0 /*37*/].f_31 = (Local_175[iParam0 /*37*/].f_31 % 6);
	if (Local_175[iParam0 /*37*/].f_31 == 0)
	{
		Local_175[iParam0 /*37*/].f_32 = get_random_int_in_range(0, 4);
	}
	else if (Local_175[iParam0 /*37*/].f_31 == 5)
	{
		Local_175[iParam0 /*37*/].f_29 = -1;
		Local_175[iParam0 /*37*/].f_30 = -1;
		Local_175[iParam0 /*37*/].f_33 = Local_175[iParam0 /*37*/].f_29;
		Local_175[iParam0 /*37*/].f_34 = Local_175[iParam0 /*37*/].f_30;
		return;
	}
	switch (((Local_175[iParam0 /*37*/].f_31 + Local_175[iParam0 /*37*/].f_32) % 6))
	{
		case 0:
		case 4:
			Local_175[iParam0 /*37*/].f_33 = (Local_175[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_175[iParam0 /*37*/].f_34 = (Local_175[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 1:
			Local_175[iParam0 /*37*/].f_33 = Local_175[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_175[iParam0 /*37*/].f_34 = (Local_175[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 2:
			Local_175[iParam0 /*37*/].f_33 = Local_175[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_175[iParam0 /*37*/].f_34 = Local_175[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 3:
			Local_175[iParam0 /*37*/].f_33 = (Local_175[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_175[iParam0 /*37*/].f_34 = Local_175[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 5:
			break;
	}
}

void func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	switch (get_random_int_in_range(0, 6))
	{
		case 5:
			iVar2 = -1;
			iVar3 = -1;
			iVar4 = get_random_int_in_range(0, 4);
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((iVar0 % 2) == 1 && (iVar1 % 2) == 0)
				{
					iVar2 = iVar0;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar3 = (iVar1 - 1);
					}
					else
					{
						iVar3 = iVar1 + 1;
					}
				}
				else if ((iVar1 % 2) == 1 && (iVar0 % 2) == 0)
				{
					iVar3 = iVar1;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar2 = (iVar0 - 1);
					}
					else
					{
						iVar2 = iVar0 + 1;
					}
				}
				else if (((iVar5 + iVar4) % 4) == 0)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 1)
				{
					iVar2 = iVar0 + 1;
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 2)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar2 = iVar0 + 1;
					iVar3 = iVar1 + 1;
				}
				if (iVar2 != -1 && iVar3 != -1)
				{
					if (Local_136[((iVar2 / 2) % 6) /*5*/][((iVar3 / 2) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar2 / 2) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar3 / 2) % 4);
						return;
					}
				}
				iVar5++;
			}
			break;
		
		case 0:
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				iVar6 = 0;
				while (iVar6 <= 5)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 1:
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				iVar7 = 0;
				while (iVar7 <= 3)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 2:
			iVar6 = 5;
			while (iVar6 <= 0)
			{
				iVar7 = 3;
				while (iVar7 <= 0)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 3:
			iVar7 = 3;
			while (iVar7 <= 0)
			{
				iVar6 = 5;
				while (iVar6 <= 0)
				{
					if (Local_136[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_175[iParam0 /*37*/].f_6)
					{
						Local_175[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_175[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 4:
			Local_175[iParam0 /*37*/].f_29 = get_random_int_in_range(0, 6);
			Local_175[iParam0 /*37*/].f_30 = get_random_int_in_range(0, 4);
			break;
	}
}

bool func_304(int iParam0)
{
	return Local_175[iParam0 /*37*/].f_2 <= 4;
}

int func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (Local_136.f_148[iVar4 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_136.f_148[iVar4 /*4*/].f_1, &iVar2, &iVar3);
			if (iVar2 == iVar0 || iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

var func_306(int iParam0)
{
	return Local_136.f_162;
}

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if (iVar4 != iParam0 && (network_is_participant_active(int_to_participantindex(iVar4)) || Local_175[bVar4 /*37*/].f_25))
		{
			func_184(Local_174[bVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				if (iVar3 <= iVar1)
				{
					return 4;
				}
				else if (iVar3 >= iVar1)
				{
					return 5;
				}
			}
			else if (iVar3 == iVar1)
			{
				if (iVar2 <= iVar0)
				{
					return 6;
				}
				else if (iVar2 >= iVar0)
				{
					return 7;
				}
			}
		}
		bVar4++;
	}
	return -1;
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_184(Local_175[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((iVar4 != iParam0 && (network_is_participant_active(int_to_participantindex(iVar4)) || Local_175[bVar4 /*37*/].f_25)) && (Local_173[bVar4 /*9*/].f_2 > 0 || Local_175[bVar4 /*37*/].f_2 > 0))
		{
			func_184(Local_174[bVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				return ((iVar3 <= iVar1 && Local_175[iParam0 /*37*/].f_9.f_4 == 0) || (iVar3 >= iVar1 && Local_175[iParam0 /*37*/].f_9.f_4 == 1));
			}
			else if (iVar3 == iVar1)
			{
				return ((iVar2 <= iVar0 && Local_175[iParam0 /*37*/].f_9.f_4 == 2) || (iVar2 >= iVar0 && Local_175[iParam0 /*37*/].f_9.f_4 == 3));
			}
		}
		bVar4++;
	}
	return 0;
}

void func_309()
{
	func_317();
	func_314();
	func_310();
}

void func_310()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_173[Local_135.f_178 /*9*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_312();
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_311(Local_174[Local_135.f_178 /*16*/].f_4);
	}
	if (bVar2)
	{
		if (get_network_time() < (Local_135.f_178.f_3 + Local_135.f_59[Local_173[Local_135.f_178 /*9*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_174[Local_135.f_178 /*16*/].f_4;
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/] = get_network_time();
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/].f_3 = uVar1;
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/].f_4 = Local_173[Local_135.f_178 /*9*/].f_5;
		Local_174[Local_135.f_178 /*16*/].f_5[Local_135.f_307 /*5*/].f_1 = { Local_135.f_204[Local_135.f_178 /*19*/] };
		Local_174[Local_135.f_178 /*16*/].f_4 = uVar1;
		Local_135.f_178.f_3 = get_network_time();
		Local_135.f_307++;
		if (Local_135.f_307 >= 2)
		{
			Local_135.f_307 = 0;
		}
		set_pad_shake(0, 50, 100);
	}
}

int func_311(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Var0 = { func_187(func_71(12, 8)) };
	Var1 = { func_187(func_71(0, 0)) };
	switch (iParam0)
	{
		case 0:
			if (func_258(Local_135.f_204[Local_135.f_178 /*19*/].f_1, (Var1.f_1 - 0.0001f), (Var1.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_258(Local_135.f_204[Local_135.f_178 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_258(Local_135.f_204[Local_135.f_178 /*19*/], (Var1.f_0 - 0.0001f), (Var1.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_258(Local_135.f_204[Local_135.f_178 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_184(Local_174[Local_135.f_178 /*16*/], &iVar2, &iVar3);
	func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar4, &iVar5);
	if (Local_174[Local_135.f_178 /*16*/].f_2 + func_183(Local_135.f_178)) > get_network_time()
	{
		if (iVar3 != iVar5)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 0;
			}
		}
		else if (iVar2 != iVar4)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_312()
{
	int iVar0;
	
	if (func_313())
	{
		return -1;
	}
	iVar0 = 229;
	if (_is_using_keyboard(2))
	{
		iVar0 = 203;
	}
	if (is_disabled_control_pressed(2, iVar0))
	{
		return 8;
	}
	return -1;
}

int func_313()
{
	if (is_pause_menu_active())
	{
		return 1;
	}
	if (Local_173[Local_135.f_178 /*9*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_314()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_316();
	bVar1 = func_315(Local_135.f_178, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_174[Local_135.f_178 /*16*/].f_4 = 0;
				break;
			
			case 5:
				Local_174[Local_135.f_178 /*16*/].f_4 = 1;
				break;
			
			case 6:
				Local_174[Local_135.f_178 /*16*/].f_4 = 2;
				break;
			
			case 7:
				Local_174[Local_135.f_178 /*16*/].f_4 = 3;
				break;
			}
	}
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_184(Local_174[Local_135.f_178 /*16*/], &iVar0, &iVar1);
	func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_174[Local_135.f_178 /*16*/].f_2 + func_183(iParam0)) > get_network_time()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_313())
	{
		return -1;
	}
	iVar0 = 363;
	iVar1 = 363;
	iVar2 = 363;
	iVar3 = 363;
	if (_is_using_keyboard(2))
	{
		iVar0 = 188;
		iVar1 = 187;
		iVar2 = 189;
		iVar3 = 190;
	}
	fVar4 = 0f;
	if (!_is_using_keyboard(2))
	{
		fVar4 = get_disabled_control_normal(2, 221);
	}
	if (fVar4 < -0.65f || (iVar0 != 363 && is_disabled_control_pressed(2, iVar0)))
	{
		return 4;
	}
	if (fVar4 > 0.65f || (iVar1 != 363 && is_disabled_control_pressed(2, iVar1)))
	{
		return 5;
	}
	fVar5 = get_disabled_control_normal(2, 220);
	if (fVar5 < -0.65f || (iVar2 != 363 && is_disabled_control_pressed(2, iVar2)))
	{
		return 6;
	}
	if (fVar5 > 0.65f || (iVar3 != 363 && is_disabled_control_pressed(2, iVar3)))
	{
		return 7;
	}
	return -1;
}

void func_317()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_318();
	bVar1 = false;
	if (((!((Local_174[Local_135.f_178 /*16*/].f_2 + func_183(Local_135.f_178)) < get_network_time() && BitTest(Local_135.f_141, 1)) && get_network_time() < Local_174[Local_135.f_178 /*16*/].f_2 + 100) && Local_174[Local_135.f_178 /*16*/].f_3 != iVar0) && !BitTest(Local_135.f_141, 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar2, &iVar3);
		func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	else
	{
		func_184(Local_174[Local_135.f_178 /*16*/], &iVar2, &iVar3);
		func_184(Local_174[Local_135.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_174[Local_135.f_178 /*16*/].f_2 + func_183(Local_135.f_178)) < get_network_time() && BitTest(Local_135.f_141, 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_135.f_141, 5))
			{
				set_bit(&(Local_135.f_141), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_174[Local_135.f_178 /*16*/] = func_71(iVar2, iVar3);
			Local_174[Local_135.f_178 /*16*/].f_1 = func_71(iVar4, iVar5);
			if (Local_135.f_178.f_2 > 0)
			{
				Local_173[Local_135.f_178 /*9*/].f_1 = 0.75f;
				Local_135.f_178.f_2 = (Local_135.f_178.f_2 - 1);
			}
			else if (!func_258(Local_173[Local_135.f_178 /*9*/].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_173[Local_135.f_178 /*9*/].f_1 = 1f;
			}
			Local_174[Local_135.f_178 /*16*/].f_2 = get_network_time();
			if (iVar8 > 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_174[Local_135.f_178 /*16*/].f_4 = 1;
			}
			clear_bit(&(Local_135.f_141), true);
			clear_bit(&(Local_135.f_141), false);
			Local_174[Local_135.f_178 /*16*/].f_3 = iVar0;
			if (!BitTest(Local_135.f_141, 5))
			{
				set_bit(&(Local_135.f_141), 5);
			}
		}
	}
}

int func_318()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_313())
	{
		return -1;
	}
	if (!BitTest(Local_135.f_141, 5))
	{
		return func_296(Local_173[Local_135.f_178 /*9*/].f_6);
	}
	iVar0 = 363;
	iVar1 = 363;
	iVar2 = 363;
	iVar3 = 363;
	if (_is_using_keyboard(2))
	{
		iVar0 = 363;
		iVar1 = 363;
		iVar2 = 363;
		iVar3 = 363;
	}
	fVar4 = get_disabled_control_normal(2, 219);
	if (fVar4 < -0.65f || (iVar0 != 363 && is_disabled_control_pressed(2, iVar0)))
	{
		return 0;
	}
	if (fVar4 > 0.65f || (iVar1 != 363 && is_disabled_control_pressed(2, iVar1)))
	{
		return 1;
	}
	fVar5 = get_disabled_control_normal(2, 218);
	if (fVar5 < -0.65f || (iVar2 != 363 && is_disabled_control_pressed(2, iVar2)))
	{
		return 2;
	}
	if (fVar5 > 0.65f || (iVar3 != 363 && is_disabled_control_pressed(2, iVar3)))
	{
		return 3;
	}
	return -1;
}

void func_319()
{
	if (is_audio_scene_active("dlc_vw_am_tw_in_menus_scene"))
	{
		stop_audio_scene("dlc_vw_am_tw_in_menus_scene");
	}
	if (!is_audio_scene_active("dlc_vw_am_tw_in_gameplay_scene"))
	{
		start_audio_scene("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (is_audio_scene_active("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		stop_audio_scene("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_169("Ambience", &(Local_135.f_428), func_108(-1f, -1f), 0);
	func_281();
	func_273();
	func_171();
	func_320();
	if (get_network_time() < Local_136.f_146)
	{
		return;
	}
	if (!BitTest(Local_135.f_417, 1))
	{
		set_bit(&(Local_135.f_417), true);
		func_151("SCGW_H_MOVE", 7500, 0);
	}
	func_168(4);
	func_18(func_19(1));
	func_15(7);
}

void func_320()
{
	func_124();
	func_188();
	func_182();
	if ((Local_136.f_146 - get_network_time()) <= 4500)
	{
		func_214();
	}
	func_198();
	func_175();
	func_104();
	func_103();
}

void func_321()
{
	int iVar0;
	
	func_326();
	func_171();
	if (Local_136.f_145 <= 2)
	{
		return;
	}
	func_324();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_135.f_178 && Local_175[iVar0 /*37*/].f_25)
		{
			func_322(iVar0);
		}
		iVar0++;
	}
	func_168(3);
	func_15(6);
}

void func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_323(iParam0);
	Local_175[iParam0 /*37*/].f_2 = 8;
	func_230(iParam0, 2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/] = -2147483647;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1 = -1f;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_3 = -1;
		Local_175[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_108(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_135.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_135.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_135.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_135.f_437 = -2147483647;
	Local_135.f_439 = { func_108(0f, 0f) };
	set_bit(&(Local_135.f_142[iParam0]), true);
	set_bit(&(Local_135.f_142[iParam0]), false);
	clear_bit(&(Local_135.f_142[iParam0]), 2);
	clear_bit(&(Local_135.f_142[iParam0]), 5);
	func_96(&(Local_135.f_316));
	Local_175[iParam0 /*37*/].f_4 = -2147483647;
	Local_175[iParam0 /*37*/].f_1 = 1f;
	Local_135.f_178.f_2 = 0;
	Local_135.f_308 = 0;
	Local_135.f_307 = 0;
	Local_135.f_429 = 0;
	Local_175[iParam0 /*37*/].f_5 = 0;
}

void func_323(int iParam0)
{
	Local_175[iParam0 /*37*/].f_9 = func_71(Local_135.f_9[Local_175[iParam0 /*37*/].f_6 /*3*/][0], Local_135.f_9[Local_175[iParam0 /*37*/].f_6 /*3*/][1]);
	Local_175[iParam0 /*37*/].f_9.f_1 = Local_175[iParam0 /*37*/].f_9;
	if (Local_135.f_9[Local_175[iParam0 /*37*/].f_6 /*3*/][1] == 0)
	{
		Local_175[iParam0 /*37*/].f_9.f_4 = 1;
	}
	else
	{
		Local_175[iParam0 /*37*/].f_9.f_4 = 0;
	}
}

void func_324()
{
	int iVar0;
	int iVar1;
	var uVar2[4];
	
	func_325();
	Local_173[Local_135.f_178 /*9*/].f_2 = 8;
	func_236(2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/] = -2147483647;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_1 = -1f;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_3 = -1;
		Local_174[Local_135.f_178 /*16*/].f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_108(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_135.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_135.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_135.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_135.f_437 = -2147483647;
	Local_135.f_439 = { func_108(0f, 0f) };
	set_bit(&(Local_135.f_141), true);
	set_bit(&(Local_135.f_141), false);
	clear_bit(&(Local_135.f_141), 2);
	clear_bit(&(Local_135.f_141), 5);
	func_96(&(Local_135.f_316));
	Local_173[Local_135.f_178 /*9*/].f_4 = -2147483647;
	Local_173[Local_135.f_178 /*9*/].f_1 = 1f;
	func_119(Local_173[Local_135.f_178 /*9*/].f_7, &uVar2);
	uVar2[3] = Local_173[Local_135.f_178 /*9*/].f_6;
	Local_173[Local_135.f_178 /*9*/].f_7 = func_131(&uVar2);
	Local_135.f_178.f_2 = 0;
	Local_135.f_308 = 0;
	Local_135.f_307 = 0;
	Local_135.f_429 = 0;
	Local_173[Local_135.f_178 /*9*/].f_5 = 0;
}

void func_325()
{
	Local_174[Local_135.f_178 /*16*/] = func_71(Local_135.f_9[Local_173[Local_135.f_178 /*9*/].f_6 /*3*/][0], Local_135.f_9[Local_173[Local_135.f_178 /*9*/].f_6 /*3*/][1]);
	Local_174[Local_135.f_178 /*16*/].f_1 = Local_174[Local_135.f_178 /*16*/];
	if (Local_135.f_9[Local_173[Local_135.f_178 /*9*/].f_6 /*3*/][1] == 0)
	{
		Local_174[Local_135.f_178 /*16*/].f_4 = 1;
	}
	else
	{
		Local_174[Local_135.f_178 /*16*/].f_4 = 0;
	}
}

void func_326()
{
	func_124();
	func_188();
	func_181(Local_135.f_107.f_25, 153);
	func_175();
	func_104();
	func_103();
}

void func_327()
{
	func_326();
	func_171();
	if (Local_136.f_145 <= 1)
	{
		return;
	}
	Local_134.f_16 = Local_135.f_148;
	func_15(5);
}

void func_328()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_332();
	iVar0 = 199;
	iVar1 = 225;
	iVar2 = 193;
	if (_is_using_keyboard(2))
	{
		iVar0 = 201;
		iVar1 = 214;
	}
	if (get_network_time() > Local_135.f_441 + 500)
	{
		if (Local_173[Local_135.f_178 /*9*/] != 1)
		{
			if (is_disabled_control_just_pressed(2, iVar0))
			{
				func_16();
				func_163(1);
				func_236(1);
				func_133("Frontend_Ready");
				Local_135.f_441 = get_network_time();
			}
			if (Local_135.f_452)
			{
				if (is_disabled_control_just_pressed(2, iVar2))
				{
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (!network_is_participant_active(int_to_participantindex(iVar3)) && !Local_175[bVar3 /*37*/].f_25)
						{
							Local_175[bVar3 /*37*/].f_6 = func_331();
							Local_175[bVar3 /*37*/].f_25 = 1;
							Local_175[bVar3 /*37*/] = 1;
						}
						else
						{
							bVar3++;
						}
					}
				}
			}
		}
		if (Local_173[Local_135.f_178 /*9*/] == 1)
		{
			if (is_disabled_control_just_pressed(2, iVar1))
			{
				func_16();
				func_236(0);
				func_133("Frontend_Unready");
				Local_135.f_441 = get_network_time();
			}
		}
	}
	func_330();
	if (Local_136.f_145 >= 2)
	{
		func_15(4);
		func_133("Frontend_Start_Game");
		func_329(1);
	}
}

void func_329(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Local_134, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_134, "Invade and Persuade II.", 64);
	}
	Local_134.f_16 = 0;
	Local_134.f_17 = 0;
	Local_134.f_18 = 0;
	Local_134.f_19 = get_network_time_accurate();
	Local_134.f_20 = 0;
	Local_134.f_21 = 0;
}

void func_330()
{
	struct<3> Var0;
	
	set_bit(&(Local_135.f_417), false);
	if (Local_173[Local_135.f_178 /*9*/] == 1)
	{
		StringCopy(&Var0, "SCGW_H_RDY1", 24);
	}
	else
	{
		StringCopy(&Var0, "SCGW_H_RDY0", 24);
		if (Local_135.f_178.f_1 && Local_135.f_452)
		{
			StringConCat(&Var0, "_H", 24);
		}
		if (func_149())
		{
			StringConCat(&Var0, "_PS4", 24);
		}
	}
	if (_is_using_keyboard(2))
	{
		StringConCat(&Var0, "_PC", 24);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

int func_331()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Local_173[iVar0 /*9*/].f_6 == iVar1 && network_is_participant_active(int_to_participantindex(iVar0)))
			{
				bVar2 = false;
			}
			if (Local_175[bVar0 /*37*/].f_6 == iVar1)
			{
				bVar2 = false;
			}
			bVar0++;
		}
		if (bVar2)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_332()
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar3;
	
	func_124();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_139(iVar0, 0);
		if (Local_135.f_149[iVar0] != -1 && Local_173[Local_135.f_149[iVar0] /*9*/] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Local_135.f_148)
	{
		if (Local_173[Local_135.f_178 /*9*/] == 1)
		{
			StringCopy(&cVar2, "SCGW_WFP", 16);
		}
		else
		{
			StringCopy(&cVar2, "SCGW_PS", 16);
		}
		iVar3 = round((sin((to_float(get_game_timer()) * 0.5058f)) * 255f));
		if (iVar3 > 51)
		{
			iVar3 = 255;
		}
		else
		{
			iVar3 = 0;
		}
		set_text_scale(0.65f, 0.65f);
		set_text_colour(255, 255, 255, iVar3);
		set_text_drop_shadow();
		set_text_centre(true);
		set_text_font(7);
		begin_text_command_display_text(&cVar2);
		end_text_command_display_text(func_122(0.5f), 0.885f, 0);
	}
	func_104();
	func_103();
}

void func_333()
{
	if (!is_audio_scene_active("dlc_vw_am_tw_in_menus_scene"))
	{
		start_audio_scene("dlc_vw_am_tw_in_menus_scene");
	}
	if (is_audio_scene_active("dlc_vw_am_tw_in_gameplay_scene"))
	{
		stop_audio_scene("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (is_audio_scene_active("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		stop_audio_scene("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_124();
	_draw_bink_movie(Local_135.f_427, 0.5f, 0.5f, (1f * fLocal_131), 1f, 0f, 255, 255, 255, 255);
	if (_get_bink_movie_time(Local_135.f_427) >= 30f && !BitTest(Local_135.f_141, 3))
	{
		set_bit(&(Local_135.f_141), 3);
		func_18(func_19(0));
	}
	if (_get_bink_movie_time(Local_135.f_427) >= 99f)
	{
		_stop_bink_movie(Local_135.f_427);
		_release_bink_movie(Local_135.f_427);
		func_15(3);
		Local_135.f_154[Local_173[Local_135.f_178 /*9*/].f_6] = get_network_time();
		func_168(2);
	}
	func_104();
	func_103();
}

void func_334()
{
	if (!func_335())
	{
		return;
	}
	request_streamed_texture_dict("MPArcadeCabinetGrid", false);
	if (!has_streamed_texture_dict_loaded("MPArcadeCabinetGrid"))
	{
		return;
	}
	request_streamed_texture_dict("MPArcadeCabinetGridPlayerYellow", false);
	if (!has_streamed_texture_dict_loaded("MPArcadeCabinetGridPlayerYellow"))
	{
		return;
	}
	request_streamed_texture_dict("MPArcadeCabinetGridPlayerPurple", false);
	if (!has_streamed_texture_dict_loaded("MPArcadeCabinetGridPlayerPurple"))
	{
		return;
	}
	request_streamed_texture_dict("MPArcadeCabinetGridPlayerGreen", false);
	if (!has_streamed_texture_dict_loaded("MPArcadeCabinetGridPlayerGreen"))
	{
		return;
	}
	request_streamed_texture_dict("MPArcadeCabinetGridPlayerBlue", false);
	if (!has_streamed_texture_dict_loaded("MPArcadeCabinetGridPlayerBlue"))
	{
		return;
	}
	request_streamed_texture_dict("MPArcadeCabinetGridTiles", false);
	if (!has_streamed_texture_dict_loaded("MPArcadeCabinetGridTiles"))
	{
		return;
	}
	request_streamed_texture_dict("MPArcadeCabinetGridHUD", false);
	if (!has_streamed_texture_dict_loaded("MPArcadeCabinetGridHUD"))
	{
		return;
	}
	request_additional_text("SCGW", 3);
	if (!has_this_additional_text_loaded("SCGW", 3))
	{
		return;
	}
	if (!request_script_audio_bank("DLC_VINEWOOD/DLC_VW_AM_TW", false, -1))
	{
		return;
	}
	func_15(2);
	_play_bink_movie(Local_135.f_427);
	_set_bink_should_skip(Local_135.f_427, true);
	func_133("Frontend_Degenatron_Screen");
}

bool func_335()
{
	return ((((((func_336(0) && func_336(6)) && func_336(1)) && func_336(3)) && func_336(4)) && func_336(5)) && func_336(7));
}

int func_336(int iParam0)
{
	request_streamed_texture_dict(func_109(iParam0), false);
	if (!has_streamed_texture_dict_loaded(func_109(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_337()
{
	int iVar0;
	int iVar1;
	
	if (Local_136.f_145 > 1)
	{
		if (func_355(player_id()))
		{
			Local_135.f_443.f_4 = 0;
			Local_135.f_443.f_3 = 0;
			func_354(&(Local_135.f_443), 11);
		}
		func_15(11);
		return;
	}
	func_345();
	func_344(0);
	func_343();
	func_342();
	func_341();
	func_340();
	func_339();
	func_338();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_135.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_135.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_135.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_135.f_154[iVar0] = -2147483647;
		iVar0++;
	}
	Local_135.f_427 = _set_bink_movie("DegenSting_StreetCrime_1920x1080_auto");
	func_15(1);
}

void func_338()
{
	Local_135.f_59[0 /*5*/] = "";
	Local_135.f_59[0 /*5*/].f_2 = 0;
	Local_135.f_59[0 /*5*/].f_4 = 0;
	Local_135.f_59[0 /*5*/].f_3 = 0;
	Local_135.f_59[0 /*5*/].f_1 = 0;
	Local_135.f_59[1 /*5*/] = "gun_";
	Local_135.f_59[1 /*5*/].f_2 = 2;
	Local_135.f_59[1 /*5*/].f_4 = 2;
	Local_135.f_59[1 /*5*/].f_3 = 700;
	Local_135.f_59[1 /*5*/].f_1 = 300;
	Local_135.f_59[2 /*5*/] = "uzi_";
	Local_135.f_59[2 /*5*/].f_2 = 1;
	Local_135.f_59[2 /*5*/].f_4 = 1;
	Local_135.f_59[2 /*5*/].f_3 = 325;
	Local_135.f_59[2 /*5*/].f_1 = 300;
	Local_135.f_59[3 /*5*/] = "rifle_";
	Local_135.f_59[3 /*5*/].f_2 = 3;
	Local_135.f_59[3 /*5*/].f_4 = 2;
	Local_135.f_59[3 /*5*/].f_3 = 650;
	Local_135.f_59[3 /*5*/].f_1 = 200;
	Local_135.f_59[4 /*5*/] = "rocket_";
	Local_135.f_59[4 /*5*/].f_2 = 5;
	Local_135.f_59[4 /*5*/].f_4 = 8;
	Local_135.f_59[4 /*5*/].f_3 = 2000;
	Local_135.f_59[4 /*5*/].f_1 = 525;
	Local_135.f_59[5 /*5*/] = "shotgun_";
	Local_135.f_59[5 /*5*/].f_2 = 2;
	Local_135.f_59[5 /*5*/].f_4 = 4;
	Local_135.f_59[5 /*5*/].f_3 = 1000;
	Local_135.f_59[5 /*5*/].f_1 = 300;
}

void func_339()
{
	Local_135.f_90[0 /*2*/] = "heart_anim_";
	Local_135.f_90[0 /*2*/].f_1 = 10;
	Local_135.f_90[1 /*2*/] = "speed_anim_";
	Local_135.f_90[1 /*2*/].f_1 = 10;
	Local_135.f_90[2 /*2*/] = "phone_anim_";
	Local_135.f_90[2 /*2*/].f_1 = 10;
	Local_135.f_90[3 /*2*/] = "icon_pistol";
	Local_135.f_90[3 /*2*/].f_1 = 0;
	Local_135.f_90[4 /*2*/] = "icon_uzi";
	Local_135.f_90[4 /*2*/].f_1 = 0;
	Local_135.f_90[5 /*2*/] = "icon_rifle";
	Local_135.f_90[5 /*2*/].f_1 = 0;
	Local_135.f_90[6 /*2*/] = "icon_rocket_launcher";
	Local_135.f_90[6 /*2*/].f_1 = 0;
	Local_135.f_90[7 /*2*/] = "icon_shotgun";
	Local_135.f_90[7 /*2*/].f_1 = 0;
}

void func_340()
{
	Local_135.f_22[0 /*4*/] = "ice_cream_van_";
	Local_135.f_22[0 /*4*/].f_1 = 1;
	Local_135.f_22[0 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[0 /*4*/].f_2.f_1 = 0.02963f;
	Local_135.f_22[1 /*4*/] = "ambulance_";
	Local_135.f_22[1 /*4*/].f_1 = 2;
	Local_135.f_22[1 /*4*/].f_2 = 0.035417f;
	Local_135.f_22[1 /*4*/].f_2.f_1 = 0.02963f;
	Local_135.f_22[2 /*4*/] = "police_";
	Local_135.f_22[2 /*4*/].f_1 = 2;
	Local_135.f_22[2 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[2 /*4*/].f_2.f_1 = 0.025926f;
	Local_135.f_22[3 /*4*/] = "fire_truck_";
	Local_135.f_22[3 /*4*/].f_1 = 2;
	Local_135.f_22[3 /*4*/].f_2 = 0.045833f;
	Local_135.f_22[3 /*4*/].f_2.f_1 = 0.02963f;
	Local_135.f_22[4 /*4*/] = "tank_";
	Local_135.f_22[4 /*4*/].f_1 = 1;
	Local_135.f_22[4 /*4*/].f_2 = 0.041667f;
	Local_135.f_22[4 /*4*/].f_2.f_1 = 0.025926f;
	Local_135.f_22[5 /*4*/] = "gang_car_green";
	Local_135.f_22[5 /*4*/].f_1 = 1;
	Local_135.f_22[5 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[5 /*4*/].f_2.f_1 = 0.059259f;
	Local_135.f_22[6 /*4*/] = "gang_car_purple";
	Local_135.f_22[6 /*4*/].f_1 = 1;
	Local_135.f_22[6 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[6 /*4*/].f_2.f_1 = 0.059259f;
	Local_135.f_22[7 /*4*/] = "gang_car_yellow";
	Local_135.f_22[7 /*4*/].f_1 = 1;
	Local_135.f_22[7 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[7 /*4*/].f_2.f_1 = 0.059259f;
	Local_135.f_22[8 /*4*/] = "gang_car_blue";
	Local_135.f_22[8 /*4*/].f_1 = 1;
	Local_135.f_22[8 /*4*/].f_2 = 0.033333f;
	Local_135.f_22[8 /*4*/].f_2.f_1 = 0.059259f;
}

void func_341()
{
	Local_135.f_422[0] = "green";
	Local_135.f_422[1] = "purple";
	Local_135.f_422[2] = "yellow";
	Local_135.f_422[3] = "blue";
}

void func_342()
{
	func_213(&(Local_135.f_107[0 /*4*/]), 78, 187, 30, 255);
	func_213(&(Local_135.f_107[1 /*4*/]), 171, 0, 255, 255);
	func_213(&(Local_135.f_107[2 /*4*/]), 255, 228, 0, 255);
	func_213(&(Local_135.f_107[3 /*4*/]), 35, 92, 255, 255);
	func_213(&(Local_135.f_107.f_29), 221, 21, 10, 255);
	func_213(&(Local_135.f_107.f_17), 255, 255, 255, 255);
	func_213(&(Local_135.f_107.f_21), 55, 55, 55, 255);
	func_213(&(Local_135.f_107.f_25), 0, 0, 0, 255);
}

void func_343()
{
	Local_135[0 /*2*/] = { func_108(0.170833f, (0.909259f - 0.019444f)) };
	Local_135[1 /*2*/] = { func_108(0.170833f, (0.109259f + 0.019444f)) };
	Local_135[2 /*2*/] = { func_108(0.829167f, (0.109259f + 0.019444f)) };
	Local_135[3 /*2*/] = { func_108(0.829167f, (0.909259f - 0.019444f)) };
	Local_135.f_9[0 /*3*/][0] = 1;
	Local_135.f_9[0 /*3*/][1] = 2;
	Local_135.f_9[1 /*3*/][0] = 11;
	Local_135.f_9[1 /*3*/][1] = 2;
	Local_135.f_9[2 /*3*/][0] = 1;
	Local_135.f_9[2 /*3*/][1] = 6;
	Local_135.f_9[3 /*3*/][0] = 11;
	Local_135.f_9[3 /*3*/][1] = 6;
}

void func_344(int iParam0)
{
	Local_176.f_137 = iParam0;
	func_213(&(Local_176[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_176[1 /*17*/].f_6 = 1000;
	Local_176[1 /*17*/].f_7 = 10000;
	Local_176[2 /*17*/].f_1 = 1;
	Local_176[2 /*17*/].f_8 = 40;
	func_213(&(Local_176[2 /*17*/].f_9), 0, 0, 0, 0);
	func_213(&(Local_176[3 /*17*/].f_9), 255, 255, 255, 127);
	func_213(&(Local_176[4 /*17*/].f_9), 255, 255, 255, 127);
	func_213(&(Local_176[5 /*17*/].f_9), 255, 255, 255, 127);
	func_213(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_176.f_137)
	{
		case 2:
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 30);
			func_213(&(Local_176[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		
		case 3:
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 30);
			func_213(&(Local_176[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[4 /*17*/] = 1;
			break;
		
		case 4:
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 30);
			func_213(&(Local_176[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[5 /*17*/] = 1;
			break;
		
		case 1:
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		
		case 0:
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 10);
			func_213(&(Local_176[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[5 /*17*/] = 1;
			break;
		
		case 6:
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 10);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 8);
			func_213(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_176[0 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[7 /*17*/] = 1;
			break;
		
		case 7:
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_176[2 /*17*/] = 1;
			Local_176[0 /*17*/] = 1;
			func_213(&(Local_176[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_176[3 /*17*/] = 1;
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_176[6 /*17*/] = 1;
			break;
		
		case 5:
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		
		case 8:
			Local_176[1 /*17*/] = 0;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			func_213(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_176[6 /*17*/] = 1;
			func_213(&(Local_176[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_176[7 /*17*/] = 1;
			func_213(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_176[1 /*17*/] = 0;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			func_213(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_176[6 /*17*/] = 1;
			func_213(&(Local_176[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_176[7 /*17*/] = 1;
			func_213(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_176[1 /*17*/] = 0;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			func_213(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_176[6 /*17*/] = 1;
			func_213(&(Local_176[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_176[7 /*17*/] = 1;
			func_213(&(Local_176[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 15);
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 10);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			Local_176[1 /*17*/] = 1;
			Local_176[3 /*17*/] = 1;
			break;
		
		case 12:
			func_213(&(Local_176[1 /*17*/].f_9), 255, 255, 255, 3);
			func_213(&(Local_176[2 /*17*/].f_13), 0, 0, 0, 15);
			func_213(&(Local_176[0 /*17*/].f_9), 0, 0, 255, 90);
			func_213(&(Local_176[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_176[1 /*17*/] = 1;
			Local_176[2 /*17*/] = 0;
			Local_176[0 /*17*/] = 1;
			Local_176[6 /*17*/] = 1;
			break;
	}
}

void func_345()
{
	set_bit(&(Global_1853348[player_id() /*834*/].f_833), 16);
	Global_4718592.f_163007 = 1;
	Global_1640770 = 1;
	func_347();
	if (network_is_game_in_progress())
	{
		func_22(player_id(), 0, 0, 0);
		func_346();
	}
	else
	{
		set_player_control(player_id(), false, 0);
	}
	func_38(1, 0, 1, 0);
	func_21(0, 1, -1);
	func_21(1, 1, -1);
	func_21(2, 1, -1);
	func_21(3, 1, -1);
	func_21(4, 1, -1);
	func_21(6, 1, -1);
	func_21(7, 1, -1);
	func_21(8, 1, -1);
	func_21(9, 1, -1);
	func_21(10, 1, -1);
	func_21(11, 1, -1);
	func_21(12, 1, -1);
	func_21(13, 1, -1);
	func_21(14, 1, -1);
	func_21(15, 1, -1);
	func_21(16, 1, -1);
}

void func_346()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_347()
{
	if (func_353() || func_352())
	{
		func_351();
		func_348();
	}
}

void func_348()
{
	if ((!func_350() && !func_349()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

bool func_349()
{
	return Global_2714762.f_691;
}

bool func_350()
{
	return Global_1853348[player_id() /*834*/].f_192 != 0;
}

void func_351()
{
	Global_2714762.f_756 = 1;
}

var func_352()
{
	return Global_2714762.f_735;
}

var func_353()
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_354(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = -1887020194;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2689235[player_id() /*453*/].f_428, 1))
		{
			clear_bit(&(Global_2689235[player_id() /*453*/].f_428), true);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_97(&(uParam0->f_1)))
	{
		func_94(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_97(&(uParam0->f_1)) && !func_93(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_96(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_96(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_55(player_id());
		if (iVar3 != -1)
		{
			_trigger_script_event_2(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

int func_355(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_45(Global_2689235[iParam0 /*453*/].f_318.f_6) == 17;
			}
		}
	}
	return 0;
}

void func_356()
{
	bool bVar0;
	int iVar1;
	
	if (Global_1931416.f_1 != 0)
	{
		func_163(0);
	}
	Local_135.f_411 = (Local_135.f_411 + round((get_frame_time() * 1000f)));
	Local_135.f_412 = floor((IntToFloat(Local_135.f_411) / 66f));
	Local_135.f_411 = (Local_135.f_411 - round((66f * IntToFloat(Local_135.f_412))));
	Local_135.f_413 = (Local_135.f_413 + round((get_frame_time() * 1000f)));
	Local_135.f_414 = floor((IntToFloat(Local_135.f_413) / (66f * 3f)));
	Local_135.f_413 = (Local_135.f_413 - round(((66f * 3f) * IntToFloat(Local_135.f_414))));
	Local_135.f_311 = (Local_135.f_311 + Local_135.f_412);
	Local_135.f_416 = (Local_135.f_416 + Local_135.f_414);
	if (Local_135.f_416 >= 3)
	{
		Local_135.f_416 = 0;
	}
	func_398();
	func_397();
	func_396();
	if (Local_135.f_140 >= 11)
	{
		return;
	}
	if (!func_35())
	{
		func_15(11);
		return;
	}
	if (func_383())
	{
		if (func_355(player_id()))
		{
			Local_135.f_443.f_4 = 0;
			Local_135.f_443.f_3 = 0;
			func_354(&(Local_135.f_443), 11);
		}
		func_15(11);
		return;
	}
	if ((Local_135.f_178.f_1 && !Local_136.f_164) && (Local_135.f_435 == -2147483647 || (get_network_time() - Local_135.f_435) > 5000))
	{
		func_382(func_56(player_id()), 0);
		Local_135.f_435 = get_network_time();
	}
	func_373();
	clear_bit(&(Local_135.f_417), false);
	bVar0 = Local_135.f_140 >= 2;
	func_357(bVar0);
	Local_135.f_452 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Local_135.f_178 != iVar1 && network_is_participant_active(int_to_participantindex(iVar1)))
		{
			Local_135.f_452 = 0;
		}
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 <= 3)
	{
		if (!Local_135.f_452)
		{
			Local_175[bVar1 /*37*/].f_25 = 0;
			func_12(0);
		}
		if (Local_175[bVar1 /*37*/].f_25)
		{
			func_12(1);
		}
		bVar1++;
	}
}

void func_357(bool bParam0)
{
	func_370();
	_0x7F4724035FDCA1DD(0);
	_0x7F4724035FDCA1DD(2);
	if (is_pc_version())
	{
		disable_control_action(2, 200, true);
	}
	disable_control_action(2, 199, true);
	set_script_gfx_draw_behind_pausemenu(false);
	func_369(1);
	func_368(4, -1);
	hide_scripted_hud_component_this_frame(19);
	func_367();
	func_366();
	thefeed_hide_this_frame();
	if (bParam0)
	{
		func_359(0);
		if (!is_pause_menu_active())
		{
			hide_hud_and_radar_this_frame();
			set_script_gfx_draw_order(1);
		}
	}
	func_358();
	_stop_recording_this_frame();
}

void func_358()
{
	Global_23011.f_134 = 1;
}

void func_359(int iParam0)
{
	if (func_365())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_364(0))
		{
			func_360(iParam0);
		}
		set_bit(&Global_8137, 2);
	}
}

void func_360(int iParam0)
{
	if (func_365())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_363())
		{
			func_362(1, 1);
		}
		else
		{
			func_362(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		set_bit(&Global_8137, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_8136, 30);
	}
	else
	{
		clear_bit(&Global_8136, 30);
	}
	if (!func_361())
	{
		Global_20266.f_1 = 3;
	}
}

int func_361()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_362(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_364(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				get_mobile_phone_position(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			set_mobile_phone_position(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			set_mobile_phone_position(Global_20203);
		}
		else
		{
			set_mobile_phone_position(Global_20194);
		}
	}
}

bool func_363()
{
	return BitTest(Global_1958711, 5);
}

int func_364(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_365()
{
	return BitTest(Global_1958711, 19);
}

void func_366()
{
	Global_23011.f_6 = 1;
}

void func_367()
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), get_this_script_name(), 32);
	Global_1574747.f_9 = get_hash_key(&(Global_1574747.f_1));
}

void func_368(bool bParam0, int iParam1)
{
	set_bit(&(Global_1648034.f_1047), iParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_369(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_370()
{
	fLocal_130 = func_372();
	fLocal_131 = func_371();
}

float func_371()
{
	return (1.778f / fLocal_130);
}

float func_372()
{
	_get_active_screen_resolution(&uLocal_132, &iLocal_133);
	fLocal_130 = _get_aspect_ratio(false);
	if (is_pc_version())
	{
		if (fLocal_130 >= 4f)
		{
			fLocal_130 = (fLocal_130 / 3f);
		}
	}
	return fLocal_130;
}

void func_373()
{
	int iVar0;
	struct<3> Var1;
	struct<5> Var2;
	struct<4> Var3;
	struct<5> Var4;
	struct<15> Var5;
	struct<2> Var6;
	
	Var5.f_3 = 10;
	Var5.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) != 174)
		{
		}
		else if (get_event_data(1, iVar0, &Var1, 3))
		{
			if (Var1.f_0 == 1391426543)
			{
				func_381(Var1.f_2);
			}
			else if (get_event_data(1, iVar0, &Var2, 5))
			{
				if (Var2.f_0 == 166716001)
				{
					func_379(Var2.f_2, Var2.f_3, Var2.f_4);
				}
				else if (get_event_data(1, iVar0, &Var3, 4))
				{
					if (Var3.f_0 == 1719815852)
					{
						func_378(Var3.f_3, Var3.f_2);
					}
					else if (get_event_data(1, iVar0, &Var4, 5))
					{
						if (Var3.f_0 == 538776314)
						{
							func_377(Var4.f_2, Var4.f_3, Var4.f_4);
						}
						else if (get_event_data(1, iVar0, &Var5, 25))
						{
							if (Var5.f_0 == -1168862534)
							{
								if (Local_136.f_164)
								{
								}
								else if (Var5.f_2 != 0)
								{
								}
								else
								{
									func_375(&(Var5.f_3), &(Var5.f_14));
									Jump @301; //curOff = 264
									if (get_event_data(1, iVar0, &Var6, 2))
									{
										if (Var6.f_0 == -658279885)
										{
											func_374(Var6.f_1);
										}
									}
								}
								iVar0++;
							}

void func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = network_get_participant_index(iParam0);
	iVar1 = func_130(iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	Local_136.f_165[iVar1 /*3*/] = Local_173[iVar0 /*9*/].f_7;
	func_54(func_56(player_id()), 0, iVar1, Local_136.f_165[iVar1 /*3*/], Local_136.f_165[iVar1 /*3*/].f_1, 0);
}

void func_375(var uParam0, var uParam1)
{
	int iVar0;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_136.f_165[iVar0 /*3*/].f_1 = (50 - iVar0 * 2);
			Local_136.f_165[iVar0 /*3*/] = func_376(iVar0);
			func_54(func_56(player_id()), 0, iVar0, Local_136.f_165[iVar0 /*3*/], Local_136.f_165[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_136.f_165[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_136.f_165[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_136.f_164 = 1;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69644;
		
		case 1:
			return 356361;
		
		case 2:
			return 533761;
		
		case 3:
			return 861443;
		
		case 4:
			return 21638;
		
		case 5:
			return 336649;
		
		case 6:
			return 586639;
		
		case 7:
			return 795403;
		
		case 8:
			return 38023;
		
		case 9:
			return 341123;
		
		default:
	}
	return 0;
}

void func_377(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			func_164("Hit_By_Car", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_6));
		}
		else
		{
			func_164("Death", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_6));
		}
	}
	else
	{
		func_164("Pain", iParam0, &(Local_135.f_204[iParam0 /*19*/].f_6));
	}
}

void func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[2];
	var uVar4[2];
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar5 = 1;
	func_184(iParam1, &iVar1, &iVar2);
	if (func_73())
	{
		if ((iVar1 % 2) == 0)
		{
			iVar5 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar6 = func_73();
			iVar3[iVar0] = func_72(bVar6, 0, 1);
			uVar4[iVar0] = func_71((iVar1 + iVar5), func_72(bVar6, 8, 0));
			iVar5 = (iVar5 * -1);
			iVar0++;
		}
	}
	else
	{
		if ((iVar2 % 2) == 0)
		{
			iVar5 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar7 = func_73();
			iVar3[iVar0] = func_72(bVar7, 2, 3);
			uVar4[iVar0] = func_71(func_72(bVar7, 12, 0), (iVar2 + iVar5));
			iVar5 = (iVar5 * -1);
			iVar0++;
		}
	}
	iVar8 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_136.f_148[(iVar0 + iVar8) /*4*/].f_1 = uVar4[iVar0];
		Local_136.f_148[(iVar0 + iVar8) /*4*/] = get_network_time() + 1000;
		Local_136.f_148[(iVar0 + iVar8) /*4*/].f_2 = iVar3[iVar0];
		Local_136.f_148[(iVar0 + iVar8) /*4*/].f_3 = (5 + iParam0);
		iVar0++;
	}
	Local_136.f_161 = get_network_time();
}

void func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == iParam2)
		{
			if (!func_81(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
			{
				func_89(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
			}
		}
		else if (func_81(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
		{
			func_380(&(Local_136.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
		}
		iVar0++;
	}
}

void func_380(var uParam0, int iParam1)
{
	clear_bit(uParam0[func_83(iParam1)], func_82(iParam1));
}

void func_381(int iParam0)
{
	if (!Local_135.f_178.f_1)
	{
		return;
	}
	Local_136.f_62[iParam0 /*3*/].f_1 = -1;
	Local_136.f_62[iParam0 /*3*/] = -1;
	Local_136.f_62[iParam0 /*3*/].f_2 = -2147483647;
}

void func_382(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = 1086643333;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam1;
	iVar1 = func_55(iParam0);
	if (!iVar1 == 0 && func_61(iParam0, 0, 1))
	{
		_trigger_script_event_2(1, &Var0, 3, iVar1);
	}
}

int func_383()
{
	int iVar0;
	
	if (Global_1931418)
	{
		return 1;
	}
	if (func_395())
	{
		return 1;
	}
	if (func_394(get_player_index()))
	{
		return 1;
	}
	if (!func_393())
	{
		return 1;
	}
	if (func_387())
	{
		return 1;
	}
	if (Local_136.f_145 == 4 && Local_173[Local_135.f_178 /*9*/] != 4)
	{
		return 0;
	}
	if (Local_135.f_140 < 2)
	{
		return 0;
	}
	iVar0 = 202;
	if (_is_using_keyboard(2))
	{
		iVar0 = 214;
	}
	if (is_control_pressed(2, iVar0) || is_disabled_control_pressed(2, iVar0))
	{
		func_384((1000 - absi((get_network_time() - Local_135.f_431))), 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		func_384(0, 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (is_disabled_control_pressed(2, iVar0))
	{
		if (Local_135.f_431 == -2147483647)
		{
			Local_135.f_431 = get_network_time() + 1000;
		}
		if (get_network_time() > Local_135.f_431)
		{
			return 1;
		}
	}
	else if (Local_135.f_431 != -2147483647)
	{
		Local_135.f_431 = -2147483647;
	}
	if (func_355(player_id()))
	{
		if (func_387())
		{
			return 1;
		}
	}
	return 0;
}

void func_384(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_386(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_385(0, iVar0);
		Global_1649593.f_1177[iVar0] = iParam0;
		Global_1649593.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = iParam3;
		Global_1649593.f_1177.f_183[iVar0] = iParam4;
		Global_1649593.f_1177.f_216[iVar0] = iParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = iParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_385(int iParam0, bool bParam1)
{
	set_bit(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_386(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_387()
{
	if (func_355(player_id()))
	{
		if (func_392(player_id()))
		{
			return 1;
		}
		if (func_391(player_id(), 0) && func_389(player_id()))
		{
			return 1;
		}
	}
	if (func_388())
	{
		return 1;
	}
	if (Global_1578997.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_388()
{
	return BitTest(Global_1973079, 14);
}

var func_389(int iParam0)
{
	return func_390(iParam0, 20);
}

var func_390(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_391(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
	{
		if (iParam0 == player_id())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

int func_393()
{
	switch (func_44())
	{
		case 15:
		case 17:
			return 1;
			break;
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_1892703[iParam0 /*599*/].f_513, 3);
	}
	return 0;
}

bool func_395()
{
	return Global_1946250.f_4711.f_1 != -1;
}

void func_396()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Local_135.f_147 = 0;
	Local_135.f_148 = 0;
	Local_135.f_434 = Local_135.f_433;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Local_135.f_149[iVar2] = -1;
		if (iLocal_172[iVar2] > iVar0)
		{
			iVar0 = iLocal_172[iVar2];
			iVar1 = iVar2;
		}
		else if (iLocal_172[iVar2] == iVar0)
		{
			iVar1 = -1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!network_is_participant_active(int_to_participantindex(iVar2)) && !Local_175[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_173[bVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Local_135.f_149[Local_173[bVar2 /*9*/].f_6] = bVar2;
			if (Local_173[bVar2 /*9*/].f_6 == iVar1)
			{
				iVar1 = bVar2;
			}
			if (Local_135.f_154[Local_173[bVar2 /*9*/].f_6] == -2147483647 && Global_1931416.f_1 == 0)
			{
				func_163((12 + Local_173[bVar2 /*9*/].f_6));
				Local_135.f_154[Local_173[bVar2 /*9*/].f_6] = get_network_time();
			}
			Local_135.f_148++;
			if (Local_135.f_204[bVar2 /*19*/].f_9 != Local_173[bVar2 /*9*/].f_2)
			{
				iVar3 = (Local_173[bVar2 /*9*/].f_2 - Local_135.f_204[bVar2 /*19*/].f_9);
				if (iVar3 > 0)
				{
					Local_135.f_204[bVar2 /*19*/].f_9 = (Local_135.f_204[bVar2 /*19*/].f_9 + Local_135.f_412);
					if (Local_135.f_204[bVar2 /*19*/].f_9 > Local_173[bVar2 /*9*/].f_2)
					{
						Local_135.f_204[bVar2 /*19*/].f_9 = Local_173[bVar2 /*9*/].f_2;
					}
				}
				else
				{
					Local_135.f_204[bVar2 /*19*/].f_9 = (Local_135.f_204[bVar2 /*19*/].f_9 - Local_135.f_414);
					if (Local_135.f_204[bVar2 /*19*/].f_9 < Local_173[bVar2 /*9*/].f_2)
					{
						Local_135.f_204[bVar2 /*19*/].f_9 = Local_173[bVar2 /*9*/].f_2;
					}
				}
			}
			if (Local_173[bVar2 /*9*/] == 4)
			{
			}
			else
			{
				Local_135.f_147++;
			}
		}
		bVar2++;
	}
	Local_135.f_433 = iVar1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (Local_135.f_149[bVar2] == -1 && Local_135.f_154[bVar2] != -2147483647)
		{
			Local_135.f_154[bVar2] = -2147483647;
		}
		bVar2++;
	}
}

void func_397()
{
	bool bVar0;
	
	if (network_is_game_in_progress())
	{
		Local_135.f_178 = participant_id_to_int();
		bVar0 = network_is_host_of_this_script();
		Local_135.f_178.f_1 = bVar0;
	}
}

void func_398()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_175[iVar0 /*37*/].f_25)
		{
			Local_173[iVar0 /*9*/] = { Local_175[iVar0 /*37*/] };
		}
		iVar0++;
	}
}

void func_399()
{
	wait(0);
}

void func_400(struct<21> Param0)
{
	func_406(4, Param0);
	func_404(0, -1, 0);
	func_403();
	func_402();
	network_register_host_broadcast_variables(&Local_136, 201, 0);
	unk_0x2B297170E982E21E(&iLocal_172, 5, 0);
	network_register_player_broadcast_variables(&Local_173, 37, 0);
	unk_0x55B917F38CA35331(&Local_174, 65, 0);
	if (!func_401())
	{
		func_9();
	}
	Local_173[participant_id_to_int() /*9*/].f_6 = Param0.f_19;
}

int func_401()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!network_is_game_in_progress())
		{
			return 0;
		}
		if (network_has_received_host_broadcast_data())
		{
			return 1;
		}
		if (func_8())
		{
			return 0;
		}
		if (func_6(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

void func_402()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_136[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_136.f_62[iVar0 /*3*/] = -1;
		Local_136.f_62[iVar0 /*3*/].f_1 = -1;
		Local_136.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_136.f_148[iVar0 /*4*/] = -2147483647;
		Local_136.f_148[iVar0 /*4*/].f_1 = -1;
		Local_136.f_148[iVar0 /*4*/].f_2 = -1;
		Local_136.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_136.f_131[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_136.f_196[iVar0] = 99;
		iVar0++;
	}
}

void func_403()
{
}

int func_404(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_10();
			}
			else
			{
				return 0;
			}
		}
		if (!func_405(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_8())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_6(157))
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!bParam2)
				{
					func_10();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!network_is_game_in_progress())
		{
			if (!bParam2)
			{
				func_10();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!bParam2)
		{
			func_10();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_405(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_406(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!network_is_game_in_progress())
	{
		func_10();
	}
	network_set_this_script_is_network_script(iParam0, false, Param1.f_16);
}

