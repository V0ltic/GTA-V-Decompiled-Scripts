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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_95[2];
	struct<3> Local_96 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
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
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
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
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
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
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
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
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
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
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	Local_92 = { 27.7189f, -608.7927f, 30.6293f };
	Local_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (has_force_cleanup_occurred(3))
	{
		trigger_music_event("FHPRB_STOP");
		func_221();
		func_220();
	}
	if (func_219(0))
	{
		request_additional_text("FINPRB", 0);
	}
	add_relationship_group("WorkerPedMainGroup", &iLocal_264);
	add_relationship_group("GuardMainGroup", &iLocal_265);
	set_vehicle_model_is_suppressed(joaat("packer"), true);
	set_relationship_between_groups(5, iLocal_265, joaat("player"));
	set_relationship_between_groups(5, iLocal_264, joaat("player"));
	set_relationship_between_groups(1, iLocal_265, iLocal_264);
	set_relationship_between_groups(1, iLocal_264, iLocal_265);
	set_relationship_between_groups(1, iLocal_265, joaat("COP"));
	set_relationship_between_groups(1, joaat("COP"), iLocal_265);
	set_relationship_between_groups(1, iLocal_264, joaat("COP"));
	set_relationship_between_groups(1, joaat("COP"), iLocal_264);
	while (true)
	{
		_0x208784099002BC30("M_FINPRB", 0);
		if (!is_ped_injured(player_ped_id()))
		{
			set_ped_config_flag(player_ped_id(), 230, false);
		}
		func_217();
		if (iLocal_272 == 0)
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				func_216(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_212();
		}
		func_209();
		func_202();
		func_194();
		func_189();
		func_186();
		switch (iLocal_28)
		{
			case 0:
				func_185();
				break;
			
			case 1:
				func_182();
				break;
			
			case 2:
				func_158();
				break;
			
			case 3:
				func_156();
				break;
			
			case 4:
				func_128();
				break;
			
			case 5:
				func_21();
				break;
			
			case 6:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_53)
	{
		case 0:
			clear_prints();
			clear_help(true);
			trigger_music_event("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_220();
			}
			break;
	}
}

int func_2()
{
	if (Global_100441 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_219(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		set_bit(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	special_ability_charge_on_mission_failed(player_id(), 0);
	special_ability_deactivate(player_id(), 0);
	func_8(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!is_player_playing(player_id()))
		{
			set_fade_in_after_death_arrest(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_10(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_100476 = 1;
	if (is_player_being_arrested(player_id(), true))
	{
		if (is_string_null_or_empty(&Global_78551))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!is_player_playing(player_id()))
	{
		if (is_string_null_or_empty(&Global_78551))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		set_bit(&(Global_100441.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	func_15();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_19(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_18(player_ped_id());
			if (func_17(iVar0) && (!func_16(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_17(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_16(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_21()
{
	func_186();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		set_player_control(player_id(), false, 0);
		if (func_34(iLocal_37, 0))
		{
			if (!func_33(iLocal_37))
			{
				while (!func_32(iLocal_37, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_39, 0))
		{
			if (!func_33(iLocal_39))
			{
				while (!func_32(iLocal_39, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_38, 0))
		{
			if (!func_33(iLocal_38))
			{
				while (!func_32(iLocal_38, 0))
				{
					wait(0);
				}
			}
		}
		if (is_screen_faded_out())
		{
			if (!func_31())
			{
				load_scene(get_entity_coords(player_ped_id(), true));
			}
			func_28(iLocal_33, -1, 1);
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (does_entity_exist(iLocal_33))
		{
			if (is_vehicle_driveable(iLocal_33, false))
			{
				if (func_14() == 0)
				{
					if (func_34(iLocal_39, 0))
					{
						if (is_ped_in_vehicle(iLocal_39, iLocal_33, false))
						{
							clear_ped_tasks(iLocal_39);
							remove_ped_from_group(iLocal_39);
							set_blocking_of_non_temporary_events(iLocal_39, true);
							task_leave_vehicle(iLocal_39, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (is_ped_in_vehicle(iLocal_38, iLocal_33, false))
						{
							clear_ped_tasks(iLocal_38);
							remove_ped_from_group(iLocal_38);
							set_blocking_of_non_temporary_events(iLocal_38, true);
							task_leave_vehicle(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_34(iLocal_37, 0))
					{
						if (is_ped_in_vehicle(iLocal_37, iLocal_33, false))
						{
							clear_ped_tasks(iLocal_37);
							remove_ped_from_group(iLocal_37);
							set_blocking_of_non_temporary_events(iLocal_37, true);
							task_leave_vehicle(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (is_ped_in_vehicle(iLocal_38, iLocal_33, false))
						{
							clear_ped_tasks(iLocal_38);
							remove_ped_from_group(iLocal_38);
							set_blocking_of_non_temporary_events(iLocal_38, true);
							task_leave_vehicle(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_34(iLocal_37, 0))
					{
						if (is_ped_in_vehicle(iLocal_37, iLocal_33, false))
						{
							clear_ped_tasks(iLocal_37);
							remove_ped_from_group(iLocal_37);
							set_blocking_of_non_temporary_events(iLocal_37, true);
							task_leave_vehicle(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_39, 0))
					{
						if (is_ped_in_vehicle(iLocal_39, iLocal_33, false))
						{
							clear_ped_tasks(iLocal_39);
							remove_ped_from_group(iLocal_39);
							set_blocking_of_non_temporary_events(iLocal_39, true);
							task_leave_vehicle(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
				{
					task_leave_vehicle(player_ped_id(), iLocal_33, 0);
				}
			}
		}
		settimerb(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (does_entity_exist(iLocal_33))
		{
			if (is_vehicle_driveable(iLocal_33, false))
			{
				if (iLocal_275 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(iLocal_39, 0))
						{
							if (!is_ped_in_vehicle(iLocal_39, iLocal_33, false))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!is_ped_in_vehicle(iLocal_38, iLocal_33, false))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!is_ped_in_vehicle(iLocal_37, iLocal_33, false))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!is_ped_in_vehicle(iLocal_38, iLocal_33, false))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!is_ped_in_vehicle(iLocal_37, iLocal_33, false))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_39, 0))
						{
							if (!is_ped_in_vehicle(iLocal_39, iLocal_33, false))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!is_ped_in_vehicle(player_ped_id(), iLocal_33, true))
				{
					set_player_control(player_id(), true, 0);
					settimerb(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (does_entity_exist(iLocal_33))
		{
			if (is_vehicle_driveable(iLocal_33, false))
			{
				set_vehicle_doors_shut(iLocal_33, false);
				set_vehicle_doors_locked(iLocal_33, 2);
				freeze_entity_position(iLocal_33, true);
			}
		}
		if (does_entity_exist(iLocal_32))
		{
			if (is_vehicle_driveable(iLocal_32, false))
			{
				freeze_entity_position(iLocal_32, true);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0, 0);
	func_220();
}

void func_23(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_219(0) && Global_78565.f_1 == 1) && func_24(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_219(0))
	{
		iVar0 = func_13();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		set_bit(&(Global_91193[iVar0 /*5*/].f_1), 4);
		set_bit(&Global_78567, true);
		Global_78583 = uVar2;
		Global_78584 = get_game_timer();
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_25(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!is_ped_injured(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		clear_bit(&Global_96295, bVar0);
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return player_ped_id();
	}
	return Global_97919[func_27(iParam0)];
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
	{
		while (Global_100436 != 6)
		{
			wait(0);
		}
		set_game_paused(false);
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				clear_ped_wetness(player_ped_id());
			}
		}
		if (iParam0 != 0)
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (does_entity_exist(iParam0))
				{
					if (is_vehicle_driveable(iParam0, false))
					{
						if (!is_ped_in_vehicle(player_ped_id(), iParam0, false))
						{
							set_ped_into_vehicle(player_ped_id(), iParam0, iParam1);
							set_gameplay_cam_relative_pitch(0f, 1f);
							set_gameplay_cam_relative_heading(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (is_player_playing(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		animpostfx_stop_all();
		func_29(0);
	}
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&(Global_100441.f_20), 13);
	}
	else
	{
		clear_bit(&(Global_100441.f_20), 13);
	}
}

int func_30()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return BitTest(Global_100441.f_20, 13);
}

int func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!is_ped_injured(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == player_ped_id())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			set_ped_infinite_ammo(iParam0, false, 0);
			set_entity_load_collision_flag(iParam0, false, 1);
			set_bit(&Global_96295, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!is_ped_injured(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!is_ped_injured(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == player_ped_id())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	set_player_wanted_level(player_id(), 0, false);
	set_player_wanted_level_now(player_id(), false);
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	func_126();
	clear_prints();
	func_125();
	func_124();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	set_gameplay_cam_relative_heading(0f);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			set_entity_coords(player_ped_id(), 856.9501f, -1573.177f, 29.4751f, true, false, false, true);
			set_entity_heading(player_ped_id(), 288.3586f);
			break;
		
		case 3:
			set_entity_coords(player_ped_id(), 856.9501f, -1573.177f, 29.4751f, true, false, false, true);
			set_entity_heading(player_ped_id(), 288.3586f);
			break;
		
		case 4:
			if (does_entity_exist(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, false))
				{
					if (!is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
					{
						set_ped_into_vehicle(player_ped_id(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (does_entity_exist(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, false))
				{
					if (!is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
					{
						set_ped_into_vehicle(player_ped_id(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_120();
			if (func_119() && func_116(7f, 7f, 7f, 1))
			{
				func_114();
				while (!func_113())
				{
					wait(0);
				}
				iLocal_34 = func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			set_wanted_level_multiplier(0.01f);
			break;
		
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_120();
			if (does_entity_exist(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, false))
				{
					set_entity_coords(iLocal_33, 89.2131f, -596.9456f, 30.6224f, true, false, false, true);
					set_entity_heading(iLocal_33, 161.1163f);
				}
			}
			clear_area(41f, -615f, 30f, 50f, true, true, false, false);
			break;
		
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_120();
			clear_area(41f, -615f, 30f, 50f, true, true, false, false);
			if (does_entity_exist(iLocal_33))
			{
				if (is_vehicle_driveable(iLocal_33, false))
				{
					set_entity_coords(iLocal_33, 28.4065f, -608.9371f, 30.6293f, true, false, false, true);
					set_entity_heading(iLocal_33, 70.7778f);
				}
			}
			request_model(joaat("s_m_m_security_01"));
			while (!has_model_loaded(joaat("s_m_m_security_01")))
			{
				wait(0);
			}
			if (!does_entity_exist(iLocal_40))
			{
				iLocal_40 = create_ped(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
				set_ped_config_flag(iLocal_40, 324, true);
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam1)
{
	return func_39(&(Global_103950.f_2890), Param0, fParam1, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_112(uParam0))
	{
		if (func_111(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (is_point_in_angled_area(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_110(uParam0))
		{
			clear_area(Param1, 5f, true, false, false, false);
			func_109(Param1, 5f, 0);
			iVar0 = create_vehicle(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (does_entity_exist(iVar0))
			{
				Var1 = { get_entity_coords(iVar0, true) };
				if (vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, Param1, false, false, true);
				}
				func_82(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (is_this_model_a_boat(uParam0->f_12.f_66) || is_this_model_a_jetski(uParam0->f_12.f_66))
				{
					if (!test_probe_against_water(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					set_vehicle_on_ground_properly(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (is_this_model_a_car(get_entity_model(iVar0)))
						{
							func_81(uParam0->f_11, 1);
						}
						else if (is_this_model_a_bike(get_entity_model(iVar0)))
						{
							func_81(uParam0->f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, false);
					set_vehicle_can_save_in_garage(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_80(iVar0, uParam0->f_11);
				}
				else if ((!func_77(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && are_strings_equal(get_this_script_name(), "startup_positioning"))
				{
					iVar4 = func_76(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_69(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (get_hash_key(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_66(24, 0);
							func_69(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				set_model_as_no_longer_needed(uParam0->f_12.f_66);
				Var1 = { get_entity_coords(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_46(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1, false);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (does_entity_exist(iVar0) && !is_ped_injured(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (get_entity_model(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (get_entity_model(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (get_entity_model(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_41(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_41(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		func_45(uParam1);
		uParam1->f_66 = get_entity_model(iParam0);
		StringCopy(&(uParam1->f_1), get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		get_vehicle_extra_colours(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		get_vehicle_tyre_smoke_color(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = get_vehicle_window_tint(iParam0);
		uParam1->f_67 = get_vehicle_livery(iParam0);
		uParam1->f_69 = get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		_get_vehicle_neon_lights_colour(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			set_bit(&(uParam1->f_77), 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(&(uParam1->f_77), 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(&(uParam1->f_77), 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, false))
		{
			uParam1->f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(uParam1->f_66))
		{
			if (is_plane_landing_gear_intact(iParam0))
			{
				switch (get_landing_gear_state(iParam0))
				{
					case 3:
					case 0:
						clear_bit(&(uParam1->f_77), 23);
						set_bit(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						clear_bit(&(uParam1->f_77), 23);
						clear_bit(&(uParam1->f_77), 22);
						break;
					
					case 5:
						set_bit(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				set_bit(&(uParam1->f_77), 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(&(uParam1->f_77), 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(&(uParam1->f_77), 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(&(uParam1->f_77), 13);
			get_vehicle_custom_primary_colour(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(&(uParam1->f_77), 12);
		}
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(&(uParam1->f_77), func_42(iVar0 + 1));
			}
			iVar0++;
		}
		if (does_vehicle_have_crew_emblem(iParam0, 0))
		{
			set_bit(&(uParam1->f_77), 11);
		}
		else
		{
			clear_bit(&(uParam1->f_77), 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(&(uParam1->f_77), 27);
		}
		else
		{
			clear_bit(&(uParam1->f_77), 27);
		}
	}
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_43(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, false))
	{
		return 0;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				switch (_get_vehicle_xenon_lights_color(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_45(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_46(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, false)) || func_64(iParam0, 0, 0)) || func_64(iParam0, 1, 0)) || func_64(iParam0, 2, 0)) || func_63(iParam0) != 145) || func_62(iParam0)) || func_61(iParam0)) || func_60(iParam0)) || func_59(iParam0)) || !func_47(get_entity_model(iParam0)))
	{
		if (func_61(iParam0))
		{
		}
		if (func_61(iParam0))
		{
		}
		if (func_64(iParam0, 0, 0))
		{
		}
		if (func_64(iParam0, 1, 0))
		{
		}
		if (func_64(iParam0, 2, 0))
		{
		}
		if (func_63(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !network_is_game_in_progress()) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress()))
	{
		if (!func_58())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (is_content_item_locked(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_57() && !func_56()) && !func_55()) && !func_54()) && !func_58())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_53() || is_pc_version()) || func_52())
		{
		}
		else if (!func_55())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0))
		{
			return 0;
		}
	}
	if (!func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_50())
	{
		return 1;
	}
	_net_gameserver_get_transaction_manager_data(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!_net_gameserver_catalog_item_exists(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_50()
{
	if (is_pc_version())
	{
		return _net_gameserver_use_server_transactions();
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = get_cloud_time_as_int();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15214558)
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -754687673)
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -768236378)
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 40817712)
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -64075878)
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -10917683)
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -294678663)
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1855505138)
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 775514032)
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -893984159)
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 274946574)
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -165394758)
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758379524)
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -994371320)
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1706945532)
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1356880839)
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -477831899)
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -505223465)
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_52()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

bool func_53()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

int func_54()
{
	return 0;
}

int func_55()
{
	return 1;
}

int func_56()
{
	return 1;
}

int func_57()
{
	if (is_dlc_present(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (network_is_signed_in())
	{
		if (network_has_valid_ros_credentials())
		{
			if (_network_get_ros_privilege_24())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (are_profile_settings_valid())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, false);
					_set_has_content_unlocks_flags(iVar0);
				}
				return 1;
			}
		}
	}
	if (are_profile_settings_valid())
	{
		if (BitTest(get_profile_setting(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_48(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_97772[iVar0]) && is_vehicle_driveable(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && get_entity_model(Global_97772[iVar0]) == get_entity_model(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_65(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_66(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_68(iParam0, 0))
		{
			func_67(iParam0, 1, 0);
			func_67(iParam0, 2, 0);
			func_67(iParam0, 3, 0);
			func_67(iParam0, 4, 0);
			func_67(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_67(iParam0, 0, 0);
	}
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		set_bit(&(Global_113386.f_32749[iParam0]), bParam1);
	}
	else
	{
		clear_bit(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_69(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_vehicle_driveable(Global_77137.f_139[iParam0], false))
				{
					if (is_ped_in_vehicle(player_ped_id(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				set_entity_as_mission_entity(Global_77137.f_139[iParam0], true, true);
				delete_vehicle(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_68(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_71(0, Global_77137.f_555[0 /*21*/].f_12) || !func_71(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_70(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_66(iParam0, 0);
		}
	}
}

void func_70(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_72(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_48(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_72(var uParam0)
{
	return *uParam0;
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 19);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 19);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			set_bit(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			set_bit(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 28);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 28);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 28);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 27);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 27);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 27);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 11);
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 11);
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			set_bit(&(uParam0->f_9), 9);
			set_bit(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			set_bit(&(uParam0->f_9), 9);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			set_bit(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), 30);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_58())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), true);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_58())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), true);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 6);
			set_bit(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			set_bit(&(uParam0->f_9), 30);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			set_bit(&(uParam0->f_9), 30);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_111(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_111(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_111(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_74(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_75(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_75(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((does_entity_exist(Global_77137.f_484[iVar0]) && !is_entity_dead(Global_77137.f_484[iVar0], false)) && is_vehicle_driveable(Global_77137.f_484[iVar0], false))
		{
			get_vehicle_colours(iParam0, &iVar1, &iVar2);
			get_vehicle_colours(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((get_entity_model(iParam0) == get_entity_model(Global_77137.f_484[iVar0]) && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_77(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_79(iParam0, Global_77137.f_139[38], 0))
			{
				func_69(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_79(iParam0, Global_77137.f_139[43], 1))
			{
				func_69(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = get_ped_nearby_vehicles(player_ped_id(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_79(iParam0, uVar1[iVar3], 1) && func_78(get_entity_coords(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_111(Param1, 0f, 0f, 0f, 0)) || get_distance_between_coords(get_entity_coords(iParam0, true), get_entity_coords(uVar1[iVar3], true), true) < 10f)
					{
						delete_vehicle(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((does_entity_exist(Global_77137.f_484[14]) && is_vehicle_driveable(iParam0, false)) && is_vehicle_driveable(Global_77137.f_484[14], false))
			{
				if (get_entity_model(Global_77137.f_484[14]) == joaat("luxor2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_77137.f_484[14]))
				{
					func_69(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((does_entity_exist(Global_77137.f_484[20]) && is_vehicle_driveable(iParam0, false)) && is_vehicle_driveable(Global_77137.f_484[20], false))
			{
				if (get_entity_model(Global_77137.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_77137.f_484[20]))
				{
					func_69(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_78(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (absf((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (absf((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (absf((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (absf((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (absf((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((does_entity_exist(iParam1) && !is_entity_dead(iParam1, false)) && is_vehicle_driveable(iParam1, false))
	{
		if (bParam2)
		{
			get_vehicle_colours(iParam0, &iVar0, &iVar1);
			get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = get_entity_model(iParam0);
			if (is_this_model_a_car(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || get_entity_model(Global_97772[iVar0]) == func_74(iParam0, iParam1))
				{
					if (!is_ped_in_vehicle(player_ped_id(), Global_97772[iVar0], false))
					{
						set_entity_as_mission_entity(Global_97772[iVar0], false, true);
						delete_vehicle(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_82(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_101(iParam0))
		{
			if (get_hash_key(&(uParam1->f_1)) != 0)
			{
				set_vehicle_number_plate_text(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
			{
				set_vehicle_number_plate_text_index(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar0 + 1)))
			{
			}
			else
			{
				set_bit(&(uParam1->f_77), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar1 + 1)))
			{
			}
			else
			{
				set_bit(&(uParam1->f_77), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_42(iVar2)))
				{
				}
				else
				{
					set_bit(&(uParam1->f_77), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_42(iVar3)))
				{
				}
				else
				{
					set_bit(&(uParam1->f_77), func_42(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_42(iVar4)))
					{
					}
					else
					{
						set_bit(&(uParam1->f_77), func_42(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				set_bit(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (get_vehicle_mod(iParam0, 10) != 0)
			{
				set_bit(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			set_bit(&(uParam1->f_77), func_42(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_42(iVar5)))
				{
				}
				else
				{
					set_bit(&(uParam1->f_77), func_42(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			_set_disable_vehicle_window_collisions(iParam0, false);
			if (get_vehicle_mod(iParam0, 5) != -1)
			{
				_set_disable_vehicle_window_collisions(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_99(uParam1->f_5) || func_99(uParam1->f_6))
			{
			}
			else
			{
				set_vehicle_colours(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_98(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_97())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			set_vehicle_tyres_can_burst(iParam0, false);
			_set_drift_tyres_enabled(iParam0, false);
		}
		if (bParam2)
		{
			set_vehicle_doors_locked(iParam0, uParam1->f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, BitTest(uParam1->f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, BitTest(uParam1->f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, BitTest(uParam1->f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, BitTest(uParam1->f_77, 31));
		set_vehicle_is_stolen(iParam0, BitTest(uParam1->f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			set_vehicle_livery(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!is_this_model_a_bicycle(get_entity_model(iParam0)))
			{
				if (is_this_model_a_bike(get_entity_model(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_96(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_96(iParam0, uParam1->f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				raise_convertible_roof(iParam0, true);
			}
			else
			{
				lower_convertible_roof(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_89(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!is_this_model_a_heli(uParam1->f_66) && !is_this_model_a_boat(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_42(iVar6 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar6 + 1))
					{
						set_vehicle_extra(iParam0, iVar6 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar6 + 1))
				{
					set_vehicle_extra(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((get_entity_model(iParam0) == joaat("sheava") || get_entity_model(iParam0) == joaat("omnis")) || get_entity_model(iParam0) == joaat("le7b"))
		{
			if (get_vehicle_mod(iParam0, 0) == -1)
			{
				set_vehicle_extra(iParam0, 1, false);
			}
		}
		if (((func_83() && is_this_model_a_plane(uParam1->f_66)) && _does_vehicle_have_landing_gear(iParam0)) && !is_vehicle_model(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					control_landing_gear(iParam0, 2);
				}
				else
				{
					control_landing_gear(iParam0, 3);
				}
			}
			else
			{
				control_landing_gear(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_83()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_87(7))
	{
		if (func_85(Global_2703735.f_4.f_16) || func_84(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_84(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_86(iParam0, 9);
	}
	return 0;
}

var func_86(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_87(int iParam0)
{
	return func_88(&(Global_2703735.f_169), iParam0);
}

var func_88(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_89(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, false))
	{
		return 0;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return 0;
	}
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			toggle_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				toggle_vehicle_mod(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					_set_vehicle_xenon_lights_color(*iParam0, 255);
				}
				else
				{
					_set_vehicle_xenon_lights_color(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				toggle_vehicle_mod(*iParam0, iVar1, false);
			}
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_94(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_93(get_entity_model(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_92(*iParam0, ((*uParam1)[38] - 1)))
	{
		set_vehicle_mod(*iParam0, 24, func_92(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_91(iParam0);
	if (func_90(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return 1;
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 32);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_91(var uParam0)
{
	switch (get_entity_model(*uParam0))
	{
		case joaat("starling"):
			if (get_vehicle_mod(*uParam0, 4) == 0)
			{
				set_vehicle_mod(*uParam0, 13, 0, false);
			}
			else
			{
				remove_vehicle_mod(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			set_vehicle_mod(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
	{
		switch (get_entity_model(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_93(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_94(var uParam0, int iParam1, int iParam2)
{
	if (!func_95() && unk_0x00834EAC4A96E010(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		bVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (get_entity_model(iParam0) == joaat("tornado6") || get_entity_model(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

bool func_97()
{
	return is_dlc_present(joaat("mpindependence"));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (!func_95() && func_100(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		if (!func_107(player_id(), -1))
		{
			iParam0 = get_vehicle_ped_is_in(player_ped_id(), false);
		}
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0, false))
	{
		return 0;
	}
	if (!is_vehicle_driveable(iParam0, false))
	{
		return 0;
	}
	if (func_103(player_id()) == 3)
	{
		if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
		{
			if (func_102(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	if (decor_is_registered_as_type("FMDeliverableID", 3))
	{
		if (decor_exist_on(iParam0, "FMDeliverableID"))
		{
			return decor_get_int(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_103(int iParam0)
{
	if (func_106(iParam0) == 233)
	{
		return func_104(iParam0);
	}
	return -1;
}

int func_104(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_105(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_108(iParam0, 1, 1))
	{
		if (is_ped_in_any_vehicle(get_player_ped(iParam0), false))
		{
			iVar0 = get_vehicle_ped_is_in(get_player_ped(iParam0), false);
			if (is_vehicle_driveable(iVar0, false))
			{
				if (player_ped_id() == get_ped_in_vehicle_seat(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0, bool bParam1, bool bParam2)
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

void func_109(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_73(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(Param0, Global_77137.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_69(iVar0);
			}
		}
		iVar0++;
	}
}

int func_110(var uParam0)
{
	if (func_112(uParam0))
	{
		if (has_model_loaded(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_111(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_112(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_78(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_113()
{
	return func_110(&(Global_103950.f_2890));
}

void func_114()
{
	func_115(&(Global_103950.f_2890));
}

void func_115(var uParam0)
{
	if (func_112(uParam0))
	{
		request_model(uParam0->f_12.f_66);
	}
}

int func_116(struct<3> Param0, int iParam1)
{
	return func_117(Global_103950.f_2890.f_12.f_66, Param0, iParam1);
}

int func_117(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_118() };
	}
	get_model_dimensions(iParam0, &Var0, &Var1);
	if ((Var1.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_118()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_119()
{
	return func_112(&(Global_103950.f_2890));
}

void func_120()
{
	request_model(joaat("armytrailer2"));
	request_model(joaat("packer"));
	request_model(joaat("s_m_y_construct_01"));
	request_model(joaat("s_m_m_security_01"));
	request_model(joaat("bison2"));
	while ((((!has_model_loaded(joaat("armytrailer2")) || !has_model_loaded(joaat("packer"))) || !has_model_loaded(joaat("s_m_y_construct_01"))) || !has_model_loaded(joaat("s_m_m_security_01"))) || !has_model_loaded(joaat("bison2")))
	{
		wait(0);
	}
	if (!does_entity_exist(iLocal_32))
	{
		if (does_entity_exist(Global_96938[1]))
		{
			set_entity_as_mission_entity(Global_96938[1], true, true);
			iLocal_32 = Global_96938[1];
			add_vehicle_upsidedown_check(iLocal_32);
		}
		else
		{
			iLocal_32 = create_vehicle(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, true, true, false);
			add_vehicle_upsidedown_check(iLocal_32);
		}
	}
	if (!does_entity_exist(iLocal_33))
	{
		if (does_entity_exist(Global_96938[2]))
		{
			set_entity_as_mission_entity(Global_96938[2], true, true);
			iLocal_33 = Global_96938[2];
			set_vehicle_has_strong_axles(iLocal_33, true);
			set_vehicle_doors_locked(iLocal_33, 7);
			func_123(iLocal_33, -1);
			func_122(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = create_vehicle(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, true, true, false);
			set_vehicle_has_strong_axles(iLocal_33, true);
			set_vehicle_doors_locked(iLocal_33, 7);
			func_123(iLocal_33, -1);
			func_122(iLocal_33, -1);
		}
	}
	attach_vehicle_to_trailer(iLocal_33, iLocal_32, 0.5f);
	set_model_as_no_longer_needed(joaat("armytrailer2"));
	set_model_as_no_longer_needed(joaat("packer"));
	set_model_as_no_longer_needed(joaat("bison2"));
	if (!does_entity_exist(iLocal_35[0]))
	{
		if (does_entity_exist(Global_96938.f_9[0]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[0], true, true);
			iLocal_35[0] = Global_96938.f_9[0];
			set_ped_relationship_group_hash(iLocal_35[0], iLocal_264);
			func_121(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = create_ped(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, true, true);
			set_ped_relationship_group_hash(iLocal_35[0], iLocal_264);
			if (does_scenario_exist_in_area(912.3f, -1542.6f, 30.4f, 3f, false))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			set_blocking_of_non_temporary_events(iLocal_35[0], true);
			func_121(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!does_entity_exist(iLocal_35[1]))
	{
		if (does_entity_exist(Global_96938.f_9[1]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[1], true, true);
			iLocal_35[1] = Global_96938.f_9[1];
			set_ped_relationship_group_hash(iLocal_35[1], iLocal_264);
			func_121(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = create_ped(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, true, true);
			set_ped_relationship_group_hash(iLocal_35[1], iLocal_264);
			if (does_scenario_exist_in_area(917.5028f, -1517.401f, 29.9673f, 3f, false))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_121(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[1], true);
		}
	}
	if (!does_entity_exist(iLocal_35[2]))
	{
		if (does_entity_exist(Global_96938.f_9[2]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[2], true, true);
			iLocal_35[2] = Global_96938.f_9[2];
			set_ped_relationship_group_hash(iLocal_35[2], iLocal_264);
			func_121(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = create_ped(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, true, true);
			set_ped_relationship_group_hash(iLocal_35[2], iLocal_264);
			if (does_scenario_exist_in_area(869.6423f, -1541.423f, 29.2516f, 3f, false))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_121(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[2], true);
		}
	}
	if (!does_entity_exist(iLocal_35[3]))
	{
		if (does_entity_exist(Global_96938.f_9[3]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[3], true, true);
			iLocal_35[3] = Global_96938.f_9[3];
			set_ped_relationship_group_hash(iLocal_35[3], iLocal_264);
			func_121(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = create_ped(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, true, true);
			set_ped_relationship_group_hash(iLocal_35[3], iLocal_264);
			if (does_scenario_exist_in_area(884.3046f, -1573.188f, 29.8247f, 3f, false))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_121(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[3], true);
		}
	}
	if (!does_entity_exist(iLocal_35[4]))
	{
		if (does_entity_exist(Global_96938.f_9[4]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[4], true, true);
			iLocal_35[4] = Global_96938.f_9[4];
			set_ped_relationship_group_hash(iLocal_35[4], iLocal_264);
			func_121(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = create_ped(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, true, true);
			set_ped_relationship_group_hash(iLocal_35[4], iLocal_264);
			if (does_scenario_exist_in_area(903.8805f, -1575.02f, 29.8327f, 3f, false))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_121(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[4], true);
		}
	}
	if (!does_entity_exist(iLocal_35[5]))
	{
		if (does_entity_exist(Global_96938.f_9[5]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[5], true, true);
			iLocal_35[5] = Global_96938.f_9[5];
			set_ped_relationship_group_hash(iLocal_35[5], iLocal_264);
			func_121(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = create_ped(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, true, true);
			set_ped_relationship_group_hash(iLocal_35[5], iLocal_264);
			if (does_scenario_exist_in_area(906.2186f, -1575.108f, 29.8125f, 3f, false))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_121(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_35[5], true);
		}
	}
	if (!does_entity_exist(iLocal_35[6]))
	{
		if (does_entity_exist(Global_96938.f_9[8]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[8], true, true);
			iLocal_35[6] = Global_96938.f_9[8];
			set_ped_relationship_group_hash(iLocal_35[6], iLocal_264);
			func_121(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			set_blocking_of_non_temporary_events(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = create_ped(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, true, true);
			set_ped_relationship_group_hash(iLocal_35[6], iLocal_264);
			if (does_scenario_exist_in_area(889.285f, -1561.485f, 29.6539f, 3f, false))
			{
				task_use_nearest_scenario_to_coord_warp(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_121(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			set_blocking_of_non_temporary_events(iLocal_35[6], true);
		}
	}
	if (!does_entity_exist(iLocal_36[0]))
	{
		if (does_entity_exist(Global_96938.f_9[6]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[6], true, true);
			iLocal_36[0] = Global_96938.f_9[6];
			set_ped_relationship_group_hash(iLocal_36[0], iLocal_265);
			func_121(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_36[0], true);
			give_weapon_to_ped(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = create_ped(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, true, true);
			set_ped_relationship_group_hash(iLocal_36[0], iLocal_265);
			func_121(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_36[0], true);
			give_weapon_to_ped(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!does_entity_exist(iLocal_36[1]))
	{
		if (does_entity_exist(Global_96938.f_9[7]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[7], true, true);
			iLocal_36[1] = Global_96938.f_9[7];
			set_ped_relationship_group_hash(iLocal_36[1], iLocal_265);
			func_121(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_36[1], true);
			give_weapon_to_ped(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = create_ped(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, true, true);
			set_ped_relationship_group_hash(iLocal_36[1], iLocal_265);
			func_121(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			set_blocking_of_non_temporary_events(iLocal_36[1], true);
			give_weapon_to_ped(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			set_ambient_voice_name(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	set_model_as_no_longer_needed(joaat("s_m_y_construct_01"));
	set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
}

void func_121(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_ped_injured(iParam0))
	{
		set_ped_seeing_range(iParam0, fParam1);
		set_ped_visual_field_peripheral_range(iParam0, fParam2);
		set_ped_visual_field_center_angle(iParam0, (fParam3 / 2f));
		set_ped_visual_field_min_angle(iParam0, fParam4);
		set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

void func_122(int iParam0, int iParam1)
{
	Global_63165 = iParam0;
	Global_63166 = iParam1;
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63167 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = iParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_124()
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (does_entity_exist(iLocal_35[iLocal_54]) && does_entity_belong_to_this_script(iLocal_35[iLocal_54], true))
		{
			delete_ped(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (does_entity_exist(iLocal_36[0]) && does_entity_belong_to_this_script(iLocal_36[0], true))
	{
		delete_ped(&(iLocal_36[0]));
	}
	if (does_entity_exist(iLocal_36[1]) && does_entity_belong_to_this_script(iLocal_36[1], true))
	{
		delete_ped(&(iLocal_36[1]));
	}
	if (does_entity_exist(iLocal_37) && does_entity_belong_to_this_script(iLocal_37, true))
	{
		delete_ped(&iLocal_37);
	}
	if (does_entity_exist(iLocal_38) && does_entity_belong_to_this_script(iLocal_38, true))
	{
		delete_ped(&iLocal_38);
	}
	if (does_entity_exist(iLocal_39) && does_entity_belong_to_this_script(iLocal_39, true))
	{
		delete_ped(&iLocal_39);
	}
	if (does_entity_exist(iLocal_40) && does_entity_belong_to_this_script(iLocal_40, true))
	{
		delete_ped(&iLocal_40);
	}
	if (!func_31())
	{
		set_entity_coords(player_ped_id(), 519.1906f, -2980.994f, 5.0443f, true, false, false, true);
		set_entity_heading(player_ped_id(), 270.1911f);
	}
	if (does_entity_exist(iLocal_32) && does_entity_belong_to_this_script(iLocal_32, true))
	{
		delete_vehicle(&iLocal_32);
	}
	if (does_entity_exist(Global_96938[3]))
	{
		set_entity_as_mission_entity(Global_96938[3], true, false);
		delete_vehicle(&(Global_96938[3]));
	}
	if (does_entity_exist(iLocal_33) && does_entity_belong_to_this_script(iLocal_33, true))
	{
		delete_vehicle(&iLocal_33);
	}
	remove_anim_dict("cellphone@str");
	remove_anim_dict("misscarsteal4@director_grip");
	cancel_music_event("FHPRB_START");
	cancel_music_event("FHPRB_TRUCK");
	cancel_music_event("FHPRB_COPS");
	cancel_music_event("FHPRB_LOST");
	cancel_music_event("FHPRB_STOP");
	clear_area(889.5f, -1553.8f, 30f, 150f, true, false, false, false);
}

void func_125()
{
	if (does_blip_exist(iLocal_49))
	{
		remove_blip(&iLocal_49);
	}
	if (does_blip_exist(iLocal_50))
	{
		remove_blip(&iLocal_50);
	}
	if (does_blip_exist(iLocal_51))
	{
		remove_blip(&iLocal_51);
	}
	if (does_blip_exist(iLocal_52))
	{
		remove_blip(&iLocal_52);
	}
}

void func_126()
{
	Global_20471 = 0;
	func_127();
}

void func_127()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_21605 = 6;
		return;
	}
}

void func_128()
{
	func_150();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		set_max_wanted_level(5);
		remove_anim_dict("cellphone@str");
		remove_anim_dict("misscarsteal4@director_grip");
		if (!is_screen_faded_in())
		{
			load_scene(get_entity_coords(player_ped_id(), true));
			do_screen_fade_in(800);
		}
		set_wanted_level_multiplier(1f);
		_0x293220DA1B46CEBC(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		func_149(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_149(&uLocal_99, 0, player_ped_id(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_149(&uLocal_99, 1, player_ped_id(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_149(&uLocal_99, 2, player_ped_id(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (get_player_wanted_level(player_id()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_135(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_135(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_135(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!does_blip_exist(iLocal_50))
		{
			if (!func_134())
			{
				if (timera() > 10500)
				{
					iLocal_50 = func_132(Local_92, 1);
				}
			}
		}
		if (func_134())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (get_player_wanted_level(player_id()) == 0)
		{
			if (is_vehicle_driveable(iLocal_33, false))
			{
				if (is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
				{
					if (is_vehicle_attached_to_trailer(iLocal_33))
					{
						if (is_entity_at_coord(player_ped_id(), Local_92, 4f, 4f, 2f, true, true, 2))
						{
							if (func_130(get_vehicle_ped_is_in(player_ped_id(), false), 4f, 3, 0.5f, 0, 1, 0))
							{
								trigger_music_event("FHPRB_STOP");
								if (does_blip_exist(iLocal_50))
								{
									remove_blip(&iLocal_50);
								}
								_0x293220DA1B46CEBC(5f, 5f, 4);
								func_129(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_129(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	if (bParam0)
	{
		Global_63163 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75250[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] > 0)
			{
				if (Global_75250[iVar0 /*9*/] == iParam1)
				{
					Global_75250[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_130(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	disable_control_action(0, 71, true);
	disable_control_action(0, 72, true);
	disable_control_action(0, 76, true);
	disable_control_action(0, 73, true);
	disable_control_action(0, 59, true);
	disable_control_action(0, 60, true);
	if (bParam5)
	{
		disable_control_action(0, 75, true);
	}
	disable_control_action(0, 80, true);
	if (!bParam6)
	{
		disable_control_action(0, 69, true);
		disable_control_action(0, 70, true);
		disable_control_action(0, 68, true);
	}
	disable_control_action(0, 74, true);
	disable_control_action(0, 86, true);
	disable_control_action(0, 81, true);
	disable_control_action(0, 82, true);
	disable_control_action(0, 138, true);
	disable_control_action(0, 136, true);
	disable_control_action(0, 114, true);
	disable_control_action(0, 107, true);
	disable_control_action(0, 110, true);
	disable_control_action(0, 89, true);
	disable_control_action(0, 89, true);
	disable_control_action(0, 87, true);
	disable_control_action(0, 88, true);
	disable_control_action(0, 113, true);
	disable_control_action(0, 115, true);
	disable_control_action(0, 116, true);
	disable_control_action(0, 117, true);
	disable_control_action(0, 118, true);
	disable_control_action(0, 119, true);
	disable_control_action(0, 352, true);
	disable_control_action(0, 131, true);
	disable_control_action(0, 132, true);
	disable_control_action(0, 123, true);
	disable_control_action(0, 126, true);
	disable_control_action(0, 129, true);
	disable_control_action(0, 130, true);
	disable_control_action(0, 133, true);
	disable_control_action(0, 134, true);
	_0x17FCA7199A530203();
	func_131(iParam0);
	if ((get_game_timer() - Global_29) > 500)
	{
		bring_vehicle_to_halt(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = get_game_timer();
	if (!is_entity_dead(iParam0, false))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_131(int iParam0)
{
	if (!is_entity_dead(iParam0, false))
	{
		if (_get_has_rocket_boost(iParam0))
		{
			if (_is_vehicle_rocket_boost_active(iParam0))
			{
				_set_vehicle_rocket_boost_active(iParam0, false);
			}
		}
	}
}

int func_132(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(Param0);
	set_blip_scale(iVar0, func_133(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, bParam1);
	return iVar0;
}

float func_133(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_134()
{
	if (Global_21605 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_135(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_148(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return func_136(sParam3, iParam4, bParam8);
}

int func_136(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					stop_scripted_conversation(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_127();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return 0;
		}
		if (func_147(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_146();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			clear_bit(&Global_8136, 20);
			clear_bit(&Global_8137, 17);
			clear_bit(&Global_8138, false);
			if (bParam2)
			{
				func_145();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return 0;
				}
				if (func_144())
				{
					return 0;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return 0;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return 0;
					}
					if (is_player_climbing(player_id()))
					{
						return 0;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return 0;
					}
					if (is_special_ability_active(player_id(), 0))
					{
						return 0;
					}
				}
			}
			if (func_143())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_142();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_141();
		func_137();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_127();
	}
	return 0;
}

void func_137()
{
	if (!func_138())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_138()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_140())
	{
		return 0;
	}
	if (func_139(player_id()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[player_id() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (network_is_activity_session())
	{
		return 0;
	}
	return 1;
}

bool func_139(int iParam0)
{
	return func_86(iParam0, 20);
}

int func_140()
{
	return -1;
}

void func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_21605 = 1;
}

void func_142()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	clear_bit(&Global_8137, 16);
}

int func_143()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, true);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(player_ped_id(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_145()
{
	if (func_16(14))
	{
		if (!is_entity_dead(player_ped_id(), false))
		{
			if (get_entity_model(player_ped_id()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_14();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

void func_146()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_147(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_148(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

void func_149(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!is_ped_injured(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, false);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, true);
			}
		}
		if (!is_ped_injured(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, false);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, true);
			}
		}
	}
}

void func_150()
{
	if (is_vehicle_driveable(iLocal_33, false))
	{
		if (is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
		{
			if (is_vehicle_attached_to_trailer(iLocal_33))
			{
				if (func_155("HELP_1"))
				{
					clear_help(true);
				}
				if (does_blip_exist(iLocal_49))
				{
					remove_blip(&iLocal_49);
				}
				if (does_blip_exist(iLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (get_game_timer() < iLocal_85 + 7500)
						{
							clear_prints();
						}
					}
					remove_blip(&iLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (get_player_wanted_level(player_id()) == 0)
					{
						if (iLocal_346 == 0)
						{
							cancel_music_event("FHPRB_COPS");
							trigger_music_event("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (get_game_timer() < iLocal_86 + 7500)
							{
								clear_prints();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!does_blip_exist(iLocal_50))
							{
								iLocal_50 = func_132(Local_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!is_message_being_displayed())
								{
									func_154("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (does_blip_exist(iLocal_50))
						{
							remove_blip(&iLocal_50);
						}
						if (iLocal_269 == 0)
						{
							clear_prints();
							func_154("GOD_4", 7500, -1);
							trigger_music_event("FHPRB_COPS");
							iLocal_86 = get_game_timer();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(iLocal_49))
				{
					remove_blip(&iLocal_49);
				}
				if (does_blip_exist(iLocal_50))
				{
					remove_blip(&iLocal_50);
				}
				if (is_vehicle_driveable(iLocal_32, false))
				{
					if (!does_blip_exist(iLocal_52))
					{
						iLocal_52 = func_152(iLocal_32, 0, 0);
						set_blip_as_friendly(iLocal_52, true);
						if (is_message_being_displayed())
						{
							clear_prints();
						}
						if (iLocal_294 == 0)
						{
							func_154("GOD_6", 7500, -1);
							iLocal_85 = get_game_timer();
							iLocal_294 = 1;
						}
						if (!func_155("HELP_1"))
						{
							func_151("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (does_blip_exist(iLocal_52))
			{
				remove_blip(&iLocal_52);
			}
			if (does_blip_exist(iLocal_50))
			{
				remove_blip(&iLocal_50);
			}
			if (is_vehicle_driveable(iLocal_33, false))
			{
				if (!does_blip_exist(iLocal_49))
				{
					iLocal_49 = func_152(iLocal_33, 0, 0);
					set_blip_as_friendly(iLocal_49, true);
				}
			}
			if (iLocal_270 == 0)
			{
				clear_prints();
				func_154("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_151(char* sParam0)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, true, true, -1);
}

int func_152(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_133(network_is_game_in_progress(), 1f, 1f));
		if (!bParam2)
		{
			set_blip_as_friendly(iVar0, bParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_133(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_133(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_154(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	begin_text_command_print(sParam0);
	end_text_command_print(iParam1, true);
}

bool func_155(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

void func_156()
{
	if (iLocal_53 > 1)
	{
		func_150();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		request_anim_dict("cellphone@str");
		request_anim_dict("misscarsteal4@director_grip");
		if (is_vehicle_driveable(iLocal_33, false))
		{
			if (!does_blip_exist(iLocal_49))
			{
				iLocal_49 = func_152(iLocal_33, 0, 0);
				set_blip_as_friendly(iLocal_49, true);
			}
		}
		set_max_wanted_level(0);
		if (is_screen_faded_out())
		{
			if (!func_31())
			{
				load_scene(get_entity_coords(player_ped_id(), true));
			}
			if (does_entity_exist(iLocal_34))
			{
				func_28(iLocal_34, -1, 1);
				set_vehicle_as_no_longer_needed(&iLocal_34);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(800);
		}
		trigger_music_event("FHPRB_START");
		clear_area(43.5f, -615.8f, 32.4f, 50f, true, false, false, false);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!is_message_being_displayed())
			{
				_0x293220DA1B46CEBC(5f, 8f, 4);
				func_154("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (is_vehicle_driveable(iLocal_33, false))
		{
			if (is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
			{
				trigger_music_event("FHPRB_TRUCK");
				if (does_blip_exist(iLocal_49))
				{
					remove_blip(&iLocal_49);
				}
				func_157(656, 0);
				set_wanted_level_multiplier(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (is_vehicle_driveable(iLocal_33, false))
		{
			if (is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
			{
				if (is_vehicle_attached_to_trailer(iLocal_33))
				{
					if (func_155("HELP_1"))
					{
						clear_help(true);
					}
					if (does_blip_exist(iLocal_49))
					{
						remove_blip(&iLocal_49);
					}
					if (does_blip_exist(iLocal_52))
					{
						remove_blip(&iLocal_52);
					}
					if (get_distance_between_coords(Local_93, Local_96, true) < 100f)
					{
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (get_game_timer() < iLocal_86 + 7500)
								{
									clear_prints();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								_0x293220DA1B46CEBC(5f, 8f, 4);
								func_154("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							_0x293220DA1B46CEBC(5f, 8f, 4);
							play_police_report("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = get_game_timer();
							func_154("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (get_player_wanted_level(player_id()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (does_blip_exist(iLocal_49))
					{
						remove_blip(&iLocal_49);
					}
					if (is_vehicle_driveable(iLocal_32, false))
					{
						if (!does_blip_exist(iLocal_52))
						{
							iLocal_52 = func_152(iLocal_32, 0, 0);
							set_blip_as_friendly(iLocal_52, true);
							if (is_message_being_displayed())
							{
								clear_prints();
							}
							if (iLocal_294 == 0)
							{
								func_154("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!func_155("HELP_1"))
							{
								func_151("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(iLocal_52))
				{
					remove_blip(&iLocal_52);
				}
				if (is_vehicle_driveable(iLocal_33, false))
				{
					if (!does_blip_exist(iLocal_49))
					{
						iLocal_49 = func_152(iLocal_33, 0, 0);
						set_blip_as_friendly(iLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					clear_prints();
					func_154("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_157(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63164 = iParam0;
	if (!Global_63162)
	{
		Global_63162 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] == iParam0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_158()
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		func_181();
		func_120();
		if (!is_screen_faded_in())
		{
			load_scene(get_entity_coords(player_ped_id(), true));
			do_screen_fade_in(800);
		}
		if (does_entity_exist(Global_96938[3]))
		{
			if (is_vehicle_driveable(Global_96938[3], false))
			{
				if (is_this_model_a_heli(get_entity_model(Global_96938[3])))
				{
					set_entity_as_mission_entity(Global_96938[3], true, true);
					func_160(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((is_this_model_a_car(get_entity_model(Global_96938[3])) || is_this_model_a_bike(get_entity_model(Global_96938[3]))) || is_this_model_a_bicycle(get_entity_model(Global_96938[3]))) || is_this_model_a_quadbike(get_entity_model(Global_96938[3])))
				{
					set_entity_as_mission_entity(Global_96938[3], true, true);
					func_160(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_159(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_159(int iParam0)
{
	if (Global_97363 != -1)
	{
		if (iParam0 == Global_97363)
		{
			Global_97367 = 1;
			return;
		}
	}
}

void func_160(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (does_entity_exist(Global_103950.f_4))
	{
		if (is_vehicle_driveable(Global_103950.f_4, false))
		{
			if (func_180(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_177(get_entity_coords(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_161(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_161(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (does_entity_exist(Global_77137.f_484[25]) && is_vehicle_driveable(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((is_big_vehicle(iParam0) || get_entity_model(iParam0) == joaat("bus")) || get_entity_model(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_176(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_111(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { get_entity_coords(iParam0, true) };
			fParam2 = get_entity_heading(iParam0);
		}
		if (iParam3 == 24)
		{
			if (get_hash_key(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = get_hash_key(get_this_script_name());
			}
		}
		func_174(iParam3, &Var0, Param1, fParam2, func_63(iParam0));
		func_162(iParam3, iParam0, 0);
	}
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != get_entity_model(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_163();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_180(iParam0);
					if ((does_entity_exist(iVar0) && is_vehicle_driveable(iVar0, false)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

var func_163()
{
	var uVar0;
	
	func_173(&uVar0, get_clock_seconds());
	func_172(&uVar0, get_clock_minutes());
	func_171(&uVar0, get_clock_hours());
	func_166(&uVar0, get_clock_day_of_month());
	func_165(&uVar0, get_clock_month());
	func_164(&uVar0, get_clock_year());
	return uVar0;
}

void func_164(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_165(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_166(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_170(*uParam0);
	iVar1 = func_168(*uParam0);
	if (iParam1 < 1 || iParam1 > func_167(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_167(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_168(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_169(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_169(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_170(var uParam0)
{
	return uParam0 & 15;
}

void func_171(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_174(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_175(iParam0);
			func_70(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_66(iParam0, 1);
		}
	}
}

void func_175(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_77137.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_77137.f_139[iParam0], true, true);
			set_vehicle_as_no_longer_needed(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_66(iParam0, 0);
		}
	}
}

void func_176(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_175(iParam0);
	func_66(iParam0, 0);
}

int func_177(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_178(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_178(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_179(iVar0) || iParam2 == 0)
				{
					fVar1 = get_distance_between_coords(Param0, Global_95479[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_179(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_180(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

void func_181()
{
	Global_94619 = 1;
}

void func_182()
{
	set_all_random_peds_flee(player_id(), true);
	set_wanted_level_multiplier(0.01f);
	iLocal_44 = add_scenario_blocking_area(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, false, true, true, true);
	iLocal_45 = add_scenario_blocking_area(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, false, true, true, true);
	iLocal_46 = add_scenario_blocking_area(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, false, true, true, true);
	iLocal_47 = add_scenario_blocking_area(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, false, true, true, true);
	iLocal_42 = add_scenario_blocking_area(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, false, true, true, true);
	iLocal_43 = add_scenario_blocking_area(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, false, true, true, true);
	if (func_30())
	{
		if (Global_94618 == 1)
		{
			func_184(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (func_183() == 0)
		{
			if (func_119() && func_116(7f, 7f, 7f, 1))
			{
				func_184(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_184(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_219(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

int func_183()
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

void func_184(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_30())
	{
		set_this_script_can_be_paused(false);
		clear_bit(&(Global_100441.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = fParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			set_bit(&(Global_100441.f_20), 14);
		}
		else
		{
			clear_bit(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			set_bit(&(Global_100441.f_20), 24);
		}
		else
		{
			clear_bit(&(Global_100441.f_20), 24);
		}
		func_29(1);
	}
}

void func_185()
{
	if (!func_30())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_186()
{
	if (!does_entity_exist(iLocal_40))
	{
		if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			request_model(joaat("s_m_m_security_01"));
			if (has_model_loaded(joaat("s_m_m_security_01")))
			{
				iLocal_40 = create_ped(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				set_ped_config_flag(iLocal_40, 324, true);
			}
			set_model_as_no_longer_needed(joaat("s_m_m_security_01"));
		}
	}
	if (does_entity_exist(iLocal_40))
	{
		if (!is_ped_injured(iLocal_40))
		{
			if (does_scenario_exist_in_area(65.2f, -617.2f, 30.8f, 5f, false))
			{
				if (iLocal_337 == 0)
				{
					if (is_entity_on_screen(iLocal_40))
					{
						clear_ped_tasks(iLocal_40);
					}
					else
					{
						clear_ped_tasks_immediately(iLocal_40);
					}
					task_use_nearest_scenario_to_coord(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					set_ped_keep_task(iLocal_40, true);
					iLocal_89 = get_game_timer();
					iLocal_337 = 1;
				}
				else if (get_game_timer() > iLocal_89 + 5000)
				{
					if (!is_ped_using_any_scenario(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (func_188(player_ped_id(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					task_look_at_entity(iLocal_40, player_ped_id(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				task_look_at_entity(iLocal_40, player_ped_id(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			add_door_to_system(iLocal_90, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, true, true, false);
			add_door_to_system(iLocal_91, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, true, true, false);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (get_player_wanted_level(player_id()) == 0)
			{
				if (Local_93.f_0 > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						door_system_set_open_ratio(iLocal_90, fLocal_97, false, true);
						door_system_set_open_ratio(iLocal_91, fLocal_97, false, true);
						door_system_set_door_state(iLocal_90, 4, false, true);
						door_system_set_door_state(iLocal_91, 4, false, true);
						iLocal_317 = 0;
					}
				}
				if (Local_93.f_0 < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						door_system_set_open_ratio(iLocal_90, fLocal_97, false, true);
						door_system_set_open_ratio(iLocal_91, fLocal_97, false, true);
						door_system_set_door_state(iLocal_90, 4, false, true);
						door_system_set_door_state(iLocal_91, 4, false, true);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (Local_93.f_0 < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						door_system_set_open_ratio(iLocal_90, fLocal_97, false, true);
						door_system_set_open_ratio(iLocal_91, fLocal_97, false, true);
						door_system_set_door_state(iLocal_90, 4, false, true);
						door_system_set_door_state(iLocal_91, 4, false, true);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (is_entity_in_angled_area(player_ped_id(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, false, true, 0))
		{
			if (does_entity_exist(iLocal_40))
			{
				if (!is_ped_injured(iLocal_40))
				{
					if (get_player_wanted_level(player_id()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								func_149(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (func_187(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							func_149(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (func_187(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						func_149(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (func_187(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_187(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_148(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_136(sParam2, iParam3, 0);
}

float func_188(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!is_entity_dead(iParam0, false))
	{
		Var0 = { get_entity_coords(iParam0, true) };
	}
	else
	{
		Var0 = { get_entity_coords(iParam0, false) };
	}
	if (!is_entity_dead(iParam1, false))
	{
		Var1 = { get_entity_coords(iParam1, true) };
	}
	else
	{
		Var1 = { get_entity_coords(iParam1, false) };
	}
	return get_distance_between_coords(Var0, Var1, bParam2);
}

void func_189()
{
	int iVar0;
	
	if (!is_message_being_displayed())
	{
		if (!func_193() || !is_subtitle_preference_switched_on())
		{
			if (iLocal_28 == 3)
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), false) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_191() && func_190())
								{
									if (func_187(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = get_game_timer();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && get_game_timer() > iLocal_88 + 7000)
							{
								if (func_191() && func_190())
								{
									if (func_187(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = get_game_timer();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_191())
							{
								if (func_187(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = get_game_timer();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_191() && func_190())
						{
							if (func_187(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = get_game_timer();
								iLocal_336 = 1;
							}
						}
					}
					else if (get_game_timer() > iLocal_84 + 8000)
					{
						if (func_191() && func_190())
						{
							if (func_187(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = get_game_timer();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						func_126();
						if (func_191())
						{
							get_current_ped_weapon(player_ped_id(), &iVar0, true);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_187(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = get_game_timer();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = get_game_timer();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = get_game_timer();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (get_game_timer() > iLocal_61 + 9000)
							{
								if (func_191())
								{
									if (func_187(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_191())
								{
									if (func_187(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (does_entity_exist(iLocal_33))
						{
							if (is_vehicle_driveable(iLocal_33, false))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
								{
									if (func_191())
									{
										if (func_187(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = get_game_timer();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (get_game_timer() > iLocal_62 + 10000)
					{
						if (does_entity_exist(iLocal_33))
						{
							if (is_vehicle_driveable(iLocal_33, false))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_33, false))
								{
									if (func_191())
									{
										if (func_187(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = get_game_timer();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_191())
							{
								if (func_187(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_190()
{
	if (func_14() == 0)
	{
		func_149(&uLocal_99, 0, player_ped_id(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_149(&uLocal_99, 1, player_ped_id(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_149(&uLocal_99, 2, player_ped_id(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_191()
{
	int iVar0;
	
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (does_entity_exist(iLocal_35[iLocal_57]))
		{
			if (!is_ped_injured(iLocal_35[iLocal_57]))
			{
				iVar0 = func_192(player_ped_id(), iLocal_264, 0, 0, -1);
				if (does_entity_exist(iVar0))
				{
					if (!is_ped_injured(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_188(player_ped_id(), iVar0, 1) < 15f)
				{
					func_149(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!is_ped_injured(iParam0))
	{
		get_ped_nearby_peds(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (does_entity_exist(iVar0[iVar1]))
			{
				if (!is_ped_injured(iVar0[iVar1]))
				{
					if (get_ped_relationship_group_hash(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (is_entity_on_screen(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (does_entity_exist(iVar0[(iVar1 + iParam2)]))
							{
								if (!is_ped_injured(iVar0[(iVar1 + iParam2)]))
								{
									if (get_ped_relationship_group_hash(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (is_entity_on_screen(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_193()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

void func_194()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_current_weapon_silenced(player_ped_id()) && is_ped_shooting(player_ped_id()))
		{
			set_wanted_level_multiplier(0f);
		}
		else
		{
			set_wanted_level_multiplier(1f);
		}
	}
	func_201();
	if (iLocal_303[0])
	{
		if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f && can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
		{
			if (iLocal_328[0] == 0)
			{
				task_look_at_entity(iLocal_36[0], player_ped_id(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (get_script_task_status(iLocal_36[0], 150319005) != 0 || get_script_task_status(iLocal_36[0], 150319005) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			task_look_at_entity(iLocal_36[0], player_ped_id(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (func_188(player_ped_id(), iLocal_36[1], 1) < 20f && can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
		{
			if (iLocal_328[1] == 0)
			{
				task_look_at_entity(iLocal_36[1], player_ped_id(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (get_script_task_status(iLocal_36[1], 150319005) != 0 || get_script_task_status(iLocal_36[1], 150319005) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			task_look_at_entity(iLocal_36[1], player_ped_id(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (func_188(player_ped_id(), iLocal_36[0], 1) < func_188(player_ped_id(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (does_scenario_group_exist("SCRAP_SECURITY"))
			{
				if (!is_scenario_group_enabled("SCRAP_SECURITY"))
				{
					set_scenario_group_enabled("SCRAP_SECURITY", true);
				}
				if (is_scenario_group_enabled("SCRAP_SECURITY"))
				{
					if (does_entity_exist(iLocal_36[0]))
					{
						if (!is_ped_injured(iLocal_36[0]))
						{
							if (!is_ped_being_stealth_killed(iLocal_36[0]))
							{
								if (does_scenario_exist_in_area(863.1551f, -1564.572f, 29.3231f, 5f, true))
								{
									iLocal_83[0] = get_game_timer();
									if (!is_ped_active_in_scenario(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (get_game_timer() > iLocal_83[0] + 2000)
								{
									if (get_distance_between_coords(get_entity_coords(iLocal_36[0], true), 863.1551f, -1564.572f, 29.3231f, true) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											task_follow_nav_mesh_to_coord(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 0.25f, false, 40000f);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (does_entity_exist(iLocal_36[1]))
					{
						if (!is_ped_injured(iLocal_36[1]))
						{
							if (!is_ped_being_stealth_killed(iLocal_36[1]))
							{
								if (does_scenario_exist_in_area(940.2881f, -1573.877f, 29.3866f, 5f, true))
								{
									iLocal_83[1] = get_game_timer();
									if (!is_ped_active_in_scenario(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (get_game_timer() > iLocal_83[1] + 2000)
								{
									if (get_distance_between_coords(get_entity_coords(iLocal_36[1], true), 940.2881f, -1573.877f, 29.3866f, true) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											task_follow_nav_mesh_to_coord(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 0.25f, false, 40000f);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (does_entity_exist(iLocal_36[0]))
			{
				if (!is_ped_injured(iLocal_36[0]))
				{
					if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
					{
						if ((func_200(player_ped_id()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(player_ped_id(), false)) || func_199(0))
						{
							if (is_ped_facing_ped(player_ped_id(), iLocal_36[0], 100f) || can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
							{
								if (is_entity_in_angled_area(player_ped_id(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, false, true, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!is_ped_facing_ped(iLocal_36[0], player_ped_id(), 45f))
										{
											if (!is_entity_on_screen(iLocal_36[0]))
											{
												clear_ped_tasks_immediately(iLocal_36[0]);
											}
											else
											{
												clear_ped_tasks(iLocal_36[0]);
											}
											task_turn_ped_to_face_entity(iLocal_36[0], player_ped_id(), 5000);
											iLocal_82[0] = get_game_timer();
											func_198(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (get_game_timer() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_196(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = get_game_timer();
											iLocal_302 = 1;
										}
										else if (get_game_timer() > iLocal_66 + 15000)
										{
											func_196(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = get_game_timer();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_196(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = get_game_timer();
												iLocal_305 = 1;
											}
											else if (get_game_timer() > iLocal_72 + 15000)
											{
												func_196(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = get_game_timer();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_196(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = get_game_timer();
												iLocal_306 = 1;
											}
											else if (get_game_timer() > iLocal_73 + 15000)
											{
												func_196(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = get_game_timer();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (does_entity_exist(iLocal_36[1]))
			{
				if (!is_ped_injured(iLocal_36[1]))
				{
					if (func_188(player_ped_id(), iLocal_36[1], 1) < 15f)
					{
						if ((func_200(player_ped_id()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(player_ped_id(), false)) || func_199(0))
						{
							if (is_ped_facing_ped(player_ped_id(), iLocal_36[1], 100f))
							{
								if (is_entity_in_angled_area(player_ped_id(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, false, true, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!is_ped_facing_ped(iLocal_36[1], player_ped_id(), 45f))
										{
											if (!is_entity_on_screen(iLocal_36[1]))
											{
												clear_ped_tasks_immediately(iLocal_36[1]);
											}
											else
											{
												clear_ped_tasks(iLocal_36[1]);
											}
											task_turn_ped_to_face_entity(iLocal_36[1], player_ped_id(), 5000);
											iLocal_82[1] = get_game_timer();
											func_198(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (get_game_timer() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_196(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = get_game_timer();
											iLocal_302 = 1;
										}
										else if (get_game_timer() > iLocal_66 + 15000)
										{
											func_196(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = get_game_timer();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_196(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = get_game_timer();
												iLocal_305 = 1;
											}
											else if (get_game_timer() > iLocal_72 + 15000)
											{
												func_196(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = get_game_timer();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_196(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = get_game_timer();
												iLocal_306 = 1;
											}
											else if (get_game_timer() > iLocal_73 + 15000)
											{
												func_196(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = get_game_timer();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_195() || iLocal_297 == 1)
			{
				if (does_entity_exist(iLocal_36[0]))
				{
					if (!is_ped_injured(iLocal_36[0]))
					{
						if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
						{
							iLocal_81[0] = get_game_timer();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (is_entity_on_screen(iLocal_36[0]))
								{
									clear_ped_tasks(iLocal_36[0]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_36[0]);
								}
								set_ped_combat_attributes(iLocal_36[0], 50, true);
								task_combat_ped(iLocal_36[0], player_ped_id(), 0, 16);
								func_198(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (is_entity_on_screen(iLocal_36[0]))
								{
									clear_ped_tasks(iLocal_36[0]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_36[0]);
								}
								task_follow_nav_mesh_to_coord(iLocal_36[0], get_entity_coords(player_ped_id(), true), 3f, -1, 0.25f, false, 40000f);
								func_198(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (get_game_timer() > iLocal_81[0] + 500)
								{
									if (is_entity_on_screen(iLocal_36[0]))
									{
										clear_ped_tasks(iLocal_36[0]);
									}
									else
									{
										clear_ped_tasks_immediately(iLocal_36[0]);
									}
									task_follow_nav_mesh_to_coord(iLocal_36[0], get_entity_coords(player_ped_id(), true), 3f, -1, 0.25f, false, 40000f);
									func_198(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (does_entity_exist(iLocal_36[1]))
				{
					if (!is_ped_injured(iLocal_36[1]))
					{
						if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
						{
							iLocal_81[1] = get_game_timer();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (is_entity_on_screen(iLocal_36[1]))
								{
									clear_ped_tasks(iLocal_36[1]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_36[1]);
								}
								set_ped_combat_attributes(iLocal_36[1], 50, true);
								task_combat_ped(iLocal_36[1], player_ped_id(), 0, 16);
								func_198(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (is_entity_on_screen(iLocal_36[1]))
								{
									clear_ped_tasks(iLocal_36[1]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_36[1]);
								}
								task_follow_nav_mesh_to_coord(iLocal_36[1], get_entity_coords(player_ped_id(), true), 3f, -1, 0.25f, false, 40000f);
								func_198(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (get_game_timer() > iLocal_81[1] + 500)
								{
									if (is_entity_on_screen(iLocal_36[1]))
									{
										clear_ped_tasks(iLocal_36[1]);
									}
									else
									{
										clear_ped_tasks_immediately(iLocal_36[1]);
									}
									task_follow_nav_mesh_to_coord(iLocal_36[1], get_entity_coords(player_ped_id(), true), 3f, -1, 0.25f, false, 40000f);
									func_198(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_195())
				{
					if (iLocal_307 == 0)
					{
						if (get_player_wanted_level(player_id()) < 2)
						{
							set_max_wanted_level(5);
							set_wanted_level_multiplier(1f);
							set_player_wanted_level(player_id(), 2, false);
							set_player_wanted_level_now(player_id(), false);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_36[0]))
								{
									func_196(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = get_game_timer();
									iLocal_300 = 1;
								}
							}
						}
						else if (get_game_timer() > iLocal_71 + 7000)
						{
							if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_36[0]))
								{
									func_196(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = get_game_timer();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_188(player_ped_id(), iLocal_36[1], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_36[1]))
								{
									func_196(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = get_game_timer();
									iLocal_300 = 1;
								}
							}
						}
						else if (get_game_timer() > iLocal_71 + 7000)
						{
							if (func_188(player_ped_id(), iLocal_36[1], 1) < 20f)
							{
								if (!is_ambient_speech_playing(iLocal_36[1]))
								{
									func_196(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = get_game_timer();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = func_192(player_ped_id(), joaat("COP"), 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (does_entity_exist(iLocal_41))
							{
								if (!is_ped_injured(iLocal_41))
								{
									if (func_188(player_ped_id(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (get_player_wanted_level(player_id()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_36[0]))
									{
										func_196(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = get_game_timer();
										iLocal_301 = 1;
									}
								}
							}
							else if (get_game_timer() > iLocal_70 + 7000)
							{
								if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_36[0]))
									{
										func_196(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = get_game_timer();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_188(player_ped_id(), iLocal_36[1], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_36[1]))
									{
										func_196(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = get_game_timer();
										iLocal_301 = 1;
									}
								}
							}
							else if (get_game_timer() > iLocal_70 + 7000)
							{
								if (func_188(player_ped_id(), iLocal_36[1], 1) < 20f)
								{
									if (!is_ambient_speech_playing(iLocal_36[1]))
									{
										func_196(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = get_game_timer();
									}
								}
							}
						}
					}
				}
			}
			if (!func_195())
			{
				if (iLocal_309 == 0)
				{
					if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (does_entity_exist(iLocal_36[0]))
						{
							if (!is_ped_injured(iLocal_36[0]))
							{
								if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
								{
									iLocal_65 = get_game_timer();
									iLocal_309 = 1;
								}
							}
						}
						if (does_entity_exist(iLocal_36[1]))
						{
							if (!is_ped_injured(iLocal_36[1]))
							{
								if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
								{
									iLocal_65 = get_game_timer();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (does_entity_exist(iLocal_36[0]))
					{
						if (!is_ped_injured(iLocal_36[0]))
						{
							if (func_188(player_ped_id(), iLocal_36[0], 1) > 4f)
							{
								if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
								{
									if (iLocal_329[0] == 0)
									{
										if (is_entity_on_screen(iLocal_36[0]))
										{
											clear_ped_tasks(iLocal_36[0]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_36[0]);
										}
										task_go_to_entity(iLocal_36[0], player_ped_id(), -1, 0.5f, 2f, 2f, 0);
										func_198(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = get_game_timer();
								}
								else if (get_game_timer() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (is_entity_on_screen(iLocal_36[0]))
										{
											clear_ped_tasks(iLocal_36[0]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_36[0]);
										}
										task_follow_nav_mesh_to_coord(iLocal_36[0], get_entity_coords(player_ped_id(), true), 2f, -1, 0.25f, false, 40000f);
										func_198(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (is_entity_on_screen(iLocal_36[0]))
								{
									clear_ped_tasks(iLocal_36[0]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_36[0]);
								}
								open_sequence_task(&iLocal_48);
								task_turn_ped_to_face_entity(0, player_ped_id(), 0);
								task_stand_still(0, 2000);
								set_sequence_to_repeat(iLocal_48, true);
								close_sequence_task(iLocal_48);
								task_perform_sequence(iLocal_36[0], iLocal_48);
								clear_sequence_task(&iLocal_48);
								func_198(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_188(player_ped_id(), iLocal_36[0], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_36[0]))
											{
												func_196(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = get_game_timer();
												iLocal_68 = get_game_timer();
												iLocal_65 = get_game_timer();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (get_game_timer() > iLocal_67 + 7000)
									{
										if (func_188(player_ped_id(), iLocal_36[0], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_36[0]))
											{
												func_196(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = get_game_timer();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_188(player_ped_id(), iLocal_36[0], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_36[0]))
											{
												func_196(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (get_game_timer() > iLocal_68 + 7000)
							{
								if (func_188(player_ped_id(), iLocal_36[0], 1) < 15f)
								{
									if (!is_ambient_speech_playing(iLocal_36[0]))
									{
										func_196(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = get_game_timer();
									}
								}
							}
						}
					}
					if (does_entity_exist(iLocal_36[1]))
					{
						if (!is_ped_injured(iLocal_36[1]))
						{
							if (func_188(player_ped_id(), iLocal_36[1], 1) > 4f)
							{
								if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
								{
									if (iLocal_329[1] == 0)
									{
										if (is_entity_on_screen(iLocal_36[1]))
										{
											clear_ped_tasks(iLocal_36[1]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_36[1]);
										}
										task_go_to_entity(iLocal_36[1], player_ped_id(), -1, 0.5f, 2f, 2f, 0);
										func_198(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = get_game_timer();
								}
								else if (get_game_timer() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (is_entity_on_screen(iLocal_36[1]))
										{
											clear_ped_tasks(iLocal_36[1]);
										}
										else
										{
											clear_ped_tasks_immediately(iLocal_36[1]);
										}
										task_follow_nav_mesh_to_coord(iLocal_36[1], get_entity_coords(player_ped_id(), true), 2f, -1, 0.25f, false, 40000f);
										func_198(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (is_entity_on_screen(iLocal_36[1]))
								{
									clear_ped_tasks(iLocal_36[1]);
								}
								else
								{
									clear_ped_tasks_immediately(iLocal_36[1]);
								}
								open_sequence_task(&iLocal_48);
								task_turn_ped_to_face_entity(0, player_ped_id(), 0);
								task_stand_still(0, 2000);
								set_sequence_to_repeat(iLocal_48, true);
								close_sequence_task(iLocal_48);
								task_perform_sequence(iLocal_36[1], iLocal_48);
								clear_sequence_task(&iLocal_48);
								func_198(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_188(player_ped_id(), iLocal_36[1], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_36[1]))
											{
												func_196(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = get_game_timer();
												iLocal_69 = get_game_timer();
												iLocal_65 = get_game_timer();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (get_game_timer() > iLocal_67 + 7000)
									{
										if (func_188(player_ped_id(), iLocal_36[1], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_36[1]))
											{
												func_196(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = get_game_timer();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_188(player_ped_id(), iLocal_36[1], 1) < 10f)
										{
											if (!is_ambient_speech_playing(iLocal_36[1]))
											{
												func_196(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (get_game_timer() > iLocal_69 + 7000)
							{
								if (func_188(player_ped_id(), iLocal_36[1], 1) < 10f)
								{
									if (!is_ambient_speech_playing(iLocal_36[1]))
									{
										func_196(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = get_game_timer();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (get_game_timer() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (get_game_timer() > iLocal_65 + 30000)
							{
								set_player_wanted_level(player_id(), 2, false);
								iLocal_297 = 1;
							}
						}
					}
					if (does_entity_exist(iLocal_33))
					{
						if (is_vehicle_driveable(iLocal_33, false))
						{
							if (is_ped_in_vehicle(player_ped_id(), iLocal_33, true))
							{
								if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()) || can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
								{
									iLocal_297 = 1;
								}
							}
							if (func_188(player_ped_id(), iLocal_33, 1) < 5f && is_ped_getting_into_a_vehicle(player_ped_id()))
							{
								if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()) || can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (does_entity_exist(iLocal_36[0]))
					{
						if (!is_ped_injured(iLocal_36[0]))
						{
							if (is_ped_in_melee_combat(player_ped_id()))
							{
								if (is_ped_performing_melee_action(player_ped_id()))
								{
									if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (does_entity_exist(iLocal_36[1]))
					{
						if (!is_ped_injured(iLocal_36[1]))
						{
							if (is_ped_in_melee_combat(player_ped_id()))
							{
								if (is_ped_performing_melee_action(player_ped_id()))
								{
									if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_195()
{
	if (!is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (does_entity_exist(iLocal_35[iLocal_64]))
			{
				if (!is_ped_injured(iLocal_35[iLocal_64]))
				{
					if (func_200(player_ped_id()) != joaat("weapon_unarmed") && !func_199(0))
					{
						if (can_ped_see_hated_ped(iLocal_35[iLocal_64], player_ped_id()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (does_entity_exist(iLocal_36[0]))
		{
			if (!is_ped_injured(iLocal_36[0]))
			{
				if (func_200(player_ped_id()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
					{
						return 1;
					}
				}
			}
		}
		if (does_entity_exist(iLocal_36[1]))
		{
			if (!is_ped_injured(iLocal_36[1]))
			{
				if (func_200(player_ped_id()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_196(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	play_ped_ambient_speech_with_voice_native(iParam0, sParam1, sParam2, func_197(iParam3), false);
}

int func_197(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_198(int iParam0)
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

int func_199(int iParam0)
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

int func_200(int iParam0)
{
	var uVar0;
	
	get_current_ped_weapon(iParam0, &uVar0, true);
	return uVar0;
}

void func_201()
{
	if (does_entity_exist(player_ped_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			Local_93 = { get_entity_coords(player_ped_id(), true) };
		}
	}
	if (does_entity_exist(iLocal_36[0]))
	{
		if (!is_ped_injured(iLocal_36[0]))
		{
			Local_95[0 /*3*/] = { get_entity_coords(iLocal_36[0], true) };
		}
	}
	if (does_entity_exist(iLocal_36[1]))
	{
		if (!is_ped_injured(iLocal_36[1]))
		{
			Local_95[1 /*3*/] = { get_entity_coords(iLocal_36[1], true) };
		}
	}
	if (does_entity_exist(iLocal_36[0]))
	{
		if (!is_ped_injured(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (does_entity_exist(iLocal_36[1]))
	{
		if (!is_ped_injured(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (func_188(player_ped_id(), iLocal_36[0], 1) < func_188(player_ped_id(), iLocal_36[1], 1))
					{
						if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
						{
							if (((Local_93.f_0 < Local_95[0 /*3*/] && !is_ped_facing_ped(player_ped_id(), iLocal_36[0], 90f)) && !is_entity_in_angled_area(player_ped_id(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0)) && !is_entity_in_angled_area(player_ped_id(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, false, true, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = get_game_timer();
								iLocal_83[1] = get_game_timer();
							}
						}
						else if (Local_93.f_0 < Local_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = get_game_timer();
							iLocal_83[1] = get_game_timer();
						}
					}
					else if (func_188(player_ped_id(), iLocal_36[1], 1) < 15f)
					{
						if ((Local_93.f_0 > Local_95[1 /*3*/] && !is_ped_facing_ped(player_ped_id(), iLocal_36[1], 90f)) && !is_entity_in_angled_area(player_ped_id(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = get_game_timer();
							iLocal_83[1] = get_game_timer();
						}
					}
					else if (Local_93.f_0 > Local_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = get_game_timer();
						iLocal_83[1] = get_game_timer();
					}
				}
				else if (func_188(player_ped_id(), iLocal_36[0], 1) < func_188(player_ped_id(), iLocal_36[1], 1))
				{
					if (func_188(player_ped_id(), iLocal_36[0], 1) < 15f)
					{
						if ((Local_93.f_0 < Local_95[0 /*3*/] && !is_ped_facing_ped(player_ped_id(), iLocal_36[0], 90f)) && !is_entity_in_angled_area(player_ped_id(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = get_game_timer();
							iLocal_83[1] = get_game_timer();
						}
					}
					else if (Local_93.f_0 < Local_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = get_game_timer();
						iLocal_83[1] = get_game_timer();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (func_188(player_ped_id(), iLocal_36[1], 1) < 15f)
				{
					if ((Local_93.f_0 > Local_95[1 /*3*/] && !is_ped_facing_ped(player_ped_id(), iLocal_36[1], 90f)) && !is_entity_in_angled_area(player_ped_id(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = get_game_timer();
						iLocal_83[1] = get_game_timer();
					}
				}
				else if (Local_93.f_0 > Local_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = get_game_timer();
					iLocal_83[1] = get_game_timer();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (is_entity_in_angled_area(player_ped_id(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0) || Local_93.f_0 > 942f)
				{
					if (!is_ped_injured(iLocal_36[1]))
					{
						if (Local_93.f_0 > Local_95[1 /*3*/])
						{
							if (!is_ped_facing_ped(player_ped_id(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = get_game_timer();
								iLocal_83[1] = get_game_timer();
							}
						}
					}
					else if (Local_93.f_0 > 942f)
					{
						if (!is_ped_facing_ped(player_ped_id(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = get_game_timer();
							iLocal_83[1] = get_game_timer();
						}
					}
				}
				if (is_entity_in_angled_area(player_ped_id(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0) || Local_93.f_0 < 860f)
				{
					if (!is_ped_injured(iLocal_36[0]))
					{
						if (Local_93.f_0 < Local_95[0 /*3*/])
						{
							if (!is_ped_facing_ped(player_ped_id(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = get_game_timer();
								iLocal_83[1] = get_game_timer();
							}
						}
					}
					else if (Local_93.f_0 < 860f)
					{
						if (!is_ped_facing_ped(player_ped_id(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = get_game_timer();
							iLocal_83[1] = get_game_timer();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
				{
					if ((func_200(player_ped_id()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(player_ped_id(), false)) || func_199(0))
					{
						if (is_entity_in_angled_area(player_ped_id(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, false, true, 0))
						{
							if (Local_93.f_0 > Local_95[0 /*3*/] || is_ped_facing_ped(player_ped_id(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (is_entity_in_angled_area(player_ped_id(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, false, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_188(player_ped_id(), iLocal_36[1], 1) < 15f)
				{
					if ((func_200(player_ped_id()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(player_ped_id(), false)) || func_199(0))
					{
						if (is_entity_in_angled_area(player_ped_id(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, false, true, 0))
						{
							if (Local_93.f_0 < Local_95[1 /*3*/] || is_ped_facing_ped(player_ped_id(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (is_explosion_in_sphere(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (get_player_wanted_level(player_id()) != 0)
		{
			if (does_entity_exist(iLocal_36[0]))
			{
				if (!is_ped_injured(iLocal_36[0]))
				{
					if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (does_entity_exist(iLocal_36[1]))
			{
				if (!is_ped_injured(iLocal_36[1]))
				{
					if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (get_game_timer() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (func_193())
						{
							if (does_entity_exist(iLocal_35[iLocal_78]))
							{
								if (!is_ped_injured(iLocal_35[iLocal_78]))
								{
									if (is_ped_in_current_conversation(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!is_ped_in_any_vehicle(player_ped_id(), false))
		{
			if (iLocal_303[0] == 1)
			{
				if (func_200(player_ped_id()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_200(player_ped_id()) != joaat("weapon_unarmed") && !func_199(0))
				{
					if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (get_distance_between_coords(Local_93, Local_96, true) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()))
				{
					iLocal_31 = 2;
				}
				if (func_188(iLocal_36[0], player_ped_id(), 1) < 20f)
				{
					if (can_ped_hear_player(player_id(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (Local_93.f_2 < 36f || is_ped_in_any_vehicle(player_ped_id(), false))
				{
					if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()))
					{
						iLocal_31 = 2;
					}
					if (func_188(iLocal_36[1], player_ped_id(), 1) < 20f)
					{
						if (can_ped_hear_player(player_id(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (func_188(player_ped_id(), iLocal_36[0], 1) < 20f)
			{
				if (Local_93.f_0 > Local_95[0 /*3*/] && is_entity_in_angled_area(player_ped_id(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, false, true, 0))
				{
					if (can_ped_see_hated_ped(iLocal_36[0], player_ped_id()) || can_ped_hear_player(player_id(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (func_188(player_ped_id(), iLocal_36[1], 1) < 20f)
			{
				if (Local_93.f_0 < Local_95[1 /*3*/] && is_entity_in_angled_area(player_ped_id(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, false, true, 0))
				{
					if (can_ped_see_hated_ped(iLocal_36[1], player_ped_id()) || can_ped_hear_player(player_id(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_202()
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (does_entity_exist(iLocal_35[iLocal_55]))
		{
			if (!is_ped_injured(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (func_188(player_ped_id(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (func_188(player_ped_id(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (does_entity_exist(iLocal_35[iLocal_54]))
		{
			if (!is_ped_injured(iLocal_35[iLocal_54]))
			{
				func_207(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_206(1);
						if (iLocal_311 == 1)
						{
							func_126();
						}
					}
					if (has_ped_received_event(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_206(4);
							if (iLocal_311 == 1)
							{
								func_204();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (is_explosion_in_sphere(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_206(4);
							if (iLocal_311 == 1)
							{
								func_204();
							}
						}
					}
					if ((((((((func_203(iLocal_35[iLocal_54], iLocal_35[0]) || func_203(iLocal_35[iLocal_54], iLocal_35[1])) || func_203(iLocal_35[iLocal_54], iLocal_35[2])) || func_203(iLocal_35[iLocal_54], iLocal_35[3])) || func_203(iLocal_35[iLocal_54], iLocal_35[4])) || func_203(iLocal_35[iLocal_54], iLocal_35[5])) || func_203(iLocal_35[iLocal_54], iLocal_35[6])) || func_203(iLocal_35[iLocal_54], iLocal_36[0])) || func_203(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_206(4);
							if (iLocal_311 == 1)
							{
								func_204();
							}
							iLocal_359 = 1;
						}
					}
					if ((func_200(player_ped_id()) == joaat("weapon_unarmed") || is_ped_in_any_vehicle(player_ped_id(), true)) || func_199(0))
					{
						if (iLocal_297 == 0)
						{
							if (func_188(player_ped_id(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_206(0);
								}
							}
							if (func_188(player_ped_id(), iLocal_35[iLocal_54], 1) < 20f && can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_206(1);
										if (iLocal_311 == 1)
										{
											func_126();
										}
									}
									else
									{
										func_206(3);
										if (iLocal_311 == 1)
										{
											func_204();
										}
									}
								}
							}
							if (func_188(player_ped_id(), iLocal_35[iLocal_54], 1) < 20f && can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = get_game_timer();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (get_game_timer() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_206(2);
											if (iLocal_311 == 1)
											{
												func_204();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (func_188(player_ped_id(), iLocal_35[iLocal_54], 1) < 20f && can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_206(3);
									if (iLocal_311 == 1)
									{
										func_204();
									}
								}
							}
						}
						if (is_ped_in_melee_combat(player_ped_id()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = get_game_timer();
								iLocal_308 = 1;
							}
							else if (get_game_timer() > iLocal_74 + 3000)
							{
								if (func_188(player_ped_id(), iLocal_35[iLocal_54], 1) < 20f && can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_206(3);
										if (iLocal_311 == 1)
										{
											func_204();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (does_entity_exist(iLocal_33))
						{
							if (is_vehicle_driveable(iLocal_33, false))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_33, true))
								{
									if (can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_206(3);
											if (iLocal_311 == 1)
											{
												func_204();
											}
										}
									}
								}
								if (func_188(player_ped_id(), iLocal_33, 1) < 5f && is_ped_getting_into_a_vehicle(player_ped_id()))
								{
									if (can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_206(3);
											if (iLocal_311 == 1)
											{
												func_204();
											}
										}
									}
									if (is_entity_in_angled_area(player_ped_id(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, false, true, 0))
									{
										if (does_entity_exist(iLocal_35[0]))
										{
											if (!is_ped_injured(iLocal_35[0]))
											{
												if (is_entity_at_coord(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_206(3);
														if (iLocal_311 == 1)
														{
															func_204();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (does_entity_exist(iLocal_35[6]))
						{
							if (!is_ped_injured(iLocal_35[6]))
							{
								if (func_188(player_ped_id(), iLocal_35[6], 1) < 20f)
								{
									if ((is_entity_in_angled_area(player_ped_id(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, false, true, 0))
									{
										if (can_ped_see_hated_ped(iLocal_35[6], player_ped_id()))
										{
											if (Local_93.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_206(3);
													if (iLocal_311 == 1)
													{
														func_204();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_206(1);
												if (iLocal_311 == 1)
												{
													func_126();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_276 == 0)
						{
							iLocal_59 = get_game_timer();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (get_game_timer() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (func_188(player_ped_id(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()))
									{
										if (iLocal_29 != 4)
										{
											func_206(4);
											if (iLocal_311 == 1)
											{
												func_204();
											}
										}
									}
								}
							}
						}
						if (func_188(player_ped_id(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (is_ped_shooting(player_ped_id()))
							{
								if (can_ped_see_hated_ped(iLocal_35[iLocal_54], player_ped_id()) || can_ped_hear_player(player_id(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_206(4);
										if (iLocal_311 == 1)
										{
											func_204();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_203(int iParam0, int iParam1)
{
	if (((func_188(iParam0, iParam1, 1) < 20f && is_ped_facing_ped(iParam0, iParam1, 90f)) && !is_ped_injured(iParam0)) && is_ped_injured(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	Global_20471 = 0;
	func_205();
}

void func_205()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
}

void func_206(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_207(int iParam0)
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_188(player_ped_id(), iParam0, 1) < 20f && can_ped_see_hated_ped(iParam0, player_ped_id()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					task_look_at_entity(iParam0, player_ped_id(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				task_look_at_entity(iParam0, player_ped_id(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				set_blocking_of_non_temporary_events(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, false))
					{
						if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, false))
					{
						if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, false))
					{
						if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, false))
					{
						if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, false))
					{
						if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, false))
					{
						if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, false))
					{
						if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
						{
							task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (does_entity_exist(iLocal_35[4]))
				{
					if (!is_ped_injured(iLocal_35[4]))
					{
						if (does_entity_exist(iLocal_35[5]))
						{
							if (!is_ped_injured(iLocal_35[5]))
							{
								if (func_188(player_ped_id(), iLocal_35[4], 1) < 25f)
								{
									if (is_entity_in_angled_area(player_ped_id(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, false, true, 0) || Local_93.f_1 > -1573f)
									{
										if (iLocal_311 == 0)
										{
											func_149(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_149(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											task_look_at_entity(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											task_look_at_entity(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_193())
											{
												if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
												{
													if (func_187(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (is_entity_at_coord(player_ped_id(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = get_game_timer();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (get_game_timer() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												func_149(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_149(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												task_look_at_entity(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												task_look_at_entity(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_193())
												{
													if (!is_message_being_displayed() || !is_subtitle_preference_switched_on())
													{
														if (func_187(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !func_193())
								{
									if (iLocal_310 == 0)
									{
										if (does_scenario_exist_in_area(865f, -1558.1f, 29.5f, 3f, false))
										{
											task_clear_look_at(iLocal_35[4]);
											task_clear_look_at(iLocal_35[5]);
											task_use_nearest_scenario_to_coord(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = get_game_timer();
							iLocal_320 = 1;
						}
						if (get_game_timer() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (does_scenario_exist_in_area(925f, -1561f, 30f, 3f, false))
								{
									task_use_nearest_scenario_to_coord(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (is_entity_at_coord(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_188(player_ped_id(), iLocal_35[6], 1) < 15f && Local_93.f_2 < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (does_scenario_exist_in_area(909.5f, -1515.5f, 30f, 3f, false))
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_188(player_ped_id(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (can_ped_see_hated_ped(iParam0, player_ped_id()) || can_ped_hear_player(player_id(), iParam0))
									{
										if (!is_entity_on_screen(iParam0))
										{
											clear_ped_tasks_immediately(iParam0);
										}
										if (is_entity_on_screen(iParam0))
										{
											clear_ped_tasks(iParam0);
										}
										open_sequence_task(&iLocal_48);
										task_go_to_entity(0, player_ped_id(), -1, 2f, 1f, 2f, 0);
										task_turn_ped_to_face_entity(0, player_ped_id(), 0);
										close_sequence_task(iLocal_48);
										task_perform_sequence(iParam0, iLocal_48);
										clear_sequence_task(&iLocal_48);
										set_blocking_of_non_temporary_events(iParam0, true);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!is_ped_facing_ped(iParam0, player_ped_id(), 45f))
									{
										task_turn_ped_to_face_entity(iParam0, player_ped_id(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, false))
									{
										if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, false))
									{
										if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, false))
									{
										if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, false))
									{
										if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, false))
									{
										if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, false))
									{
										if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, false))
									{
										if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
										{
											task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											set_blocking_of_non_temporary_events(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_188(player_ped_id(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (can_ped_see_hated_ped(iParam0, player_ped_id()) || can_ped_hear_player(player_id(), iParam0))
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									open_sequence_task(&iLocal_48);
									task_turn_ped_to_face_entity(0, player_ped_id(), 0);
									task_look_at_entity(0, player_ped_id(), -1, 1072, 3);
									close_sequence_task(iLocal_48);
									task_perform_sequence(iParam0, iLocal_48);
									clear_sequence_task(&iLocal_48);
									set_blocking_of_non_temporary_events(iParam0, true);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!is_ped_facing_ped(iParam0, player_ped_id(), 45f))
								{
									task_turn_ped_to_face_entity(iParam0, player_ped_id(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				set_relationship_between_groups(5, iLocal_264, joaat("player"));
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_188(iParam0, player_ped_id(), 1) < 15f)
						{
							if (func_188(iParam0, player_ped_id(), 1) > 3f)
							{
								if (get_script_task_status(iParam0, 242628503) != 0 || get_script_task_status(iParam0, 242628503) != 1)
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									open_sequence_task(&iLocal_48);
									task_go_to_entity(0, player_ped_id(), -1, 1f, 1f, 2f, 0);
									task_turn_ped_to_face_entity(0, player_ped_id(), 0);
									close_sequence_task(iLocal_48);
									task_perform_sequence(iParam0, iLocal_48);
									clear_sequence_task(&iLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (does_scenario_exist_in_area(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[0], 1647992574) != 1 && get_script_task_status(iLocal_35[0], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (does_scenario_exist_in_area(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[1], 1647992574) != 1 && get_script_task_status(iLocal_35[1], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (does_scenario_exist_in_area(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[2], 1647992574) != 1 && get_script_task_status(iLocal_35[2], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (does_scenario_exist_in_area(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[3], 1647992574) != 1 && get_script_task_status(iLocal_35[3], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (does_scenario_exist_in_area(904f, -1575f, 30f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[4], 1647992574) != 1 && get_script_task_status(iLocal_35[4], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (does_scenario_exist_in_area(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[5], 1647992574) != 1 && get_script_task_status(iLocal_35[5], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (does_scenario_exist_in_area(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (get_script_task_status(iLocal_35[6], 1647992574) != 1 && get_script_task_status(iLocal_35[6], -1680762137) != 1)
									{
										task_use_nearest_scenario_chain_to_coord(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										set_blocking_of_non_temporary_events(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = get_game_timer();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (get_game_timer() > iLocal_63 + 9000)
					{
						set_max_wanted_level(5);
						set_wanted_level_multiplier(1f);
						set_player_wanted_level(player_id(), 2, false);
						set_player_wanted_level_now(player_id(), false);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				set_relationship_between_groups(5, iLocal_264, joaat("player"));
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_188(iParam0, player_ped_id(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									set_blocking_of_non_temporary_events(iParam0, true);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									task_combat_hated_targets_around_ped(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (does_entity_exist(iLocal_35[0]))
						{
							if (!is_ped_injured(iLocal_35[0]))
							{
								if (does_entity_exist(iLocal_33))
								{
									if (is_vehicle_driveable(iLocal_33, false))
									{
										if (is_ped_in_vehicle(player_ped_id(), iLocal_33, true) && is_entity_at_coord(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!is_entity_on_screen(iLocal_35[0]))
											{
												clear_ped_tasks_immediately(iLocal_35[0]);
											}
											if (is_entity_on_screen(iLocal_35[0]))
											{
												clear_ped_tasks(iLocal_35[0]);
											}
											open_sequence_task(&iLocal_48);
											task_follow_nav_mesh_to_coord(0, 917.8f, -1561f, 29f, 3f, -1, 0.25f, false, 40000f);
											task_turn_ped_to_face_entity(0, player_ped_id(), 0);
											task_play_anim(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0f, false, false, false);
											close_sequence_task(iLocal_48);
											task_perform_sequence(iLocal_35[0], iLocal_48);
											clear_sequence_task(&iLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (does_entity_exist(iLocal_35[0]))
						{
							if (!is_ped_injured(iLocal_35[0]))
							{
								if (is_entity_at_coord(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_149(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_196(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (get_game_timer() > iLocal_63 + 3000)
						{
							if (does_entity_exist(iLocal_35[5]))
							{
								if (!is_ped_injured(iLocal_35[5]))
								{
									task_play_anim(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0f, false, false, false);
									iLocal_87 = get_game_timer();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (get_game_timer() > iLocal_87 + 5000)
						{
							if (does_entity_exist(iLocal_35[5]))
							{
								if (!is_ped_injured(iLocal_35[5]))
								{
									clear_ped_tasks(iLocal_35[5]);
									task_combat_ped(iLocal_35[5], player_ped_id(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (does_entity_exist(iParam0))
							{
								if (!is_ped_injured(iParam0))
								{
									set_blocking_of_non_temporary_events(iParam0, true);
									if (is_ped_in_any_vehicle(iParam0, false))
									{
										if (func_188(iParam0, player_ped_id(), 1) > 200f)
										{
											if (!is_entity_on_screen(iParam0))
											{
												clear_ped_tasks_immediately(iParam0);
											}
											if (is_entity_on_screen(iParam0))
											{
												clear_ped_tasks(iParam0);
											}
											task_smart_flee_ped(iParam0, player_ped_id(), 1000f, -1, false, false);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (func_188(iParam0, player_ped_id(), 1) > 100f)
									{
										if (!is_entity_on_screen(iParam0))
										{
											clear_ped_tasks_immediately(iParam0);
										}
										if (is_entity_on_screen(iParam0))
										{
											clear_ped_tasks(iParam0);
										}
										task_smart_flee_ped(iParam0, player_ped_id(), 1000f, -1, false, false);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (does_entity_exist(iParam0))
							{
								if (!is_ped_injured(iParam0))
								{
									if (!is_entity_on_screen(iParam0))
									{
										clear_ped_tasks_immediately(iParam0);
									}
									if (is_entity_on_screen(iParam0))
									{
										clear_ped_tasks(iParam0);
									}
									set_blocking_of_non_temporary_events(iParam0, true);
									task_smart_flee_ped(iParam0, player_ped_id(), 1000f, -1, false, false);
									set_ped_keep_task(iParam0, true);
									set_ped_as_no_longer_needed(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = get_game_timer();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (get_game_timer() > iLocal_63 + 6000)
					{
						set_max_wanted_level(5);
						set_wanted_level_multiplier(1f);
						set_player_wanted_level(player_id(), 2, false);
						set_player_wanted_level_now(player_id(), false);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				set_relationship_between_groups(5, iLocal_264, joaat("player"));
				set_blocking_of_non_temporary_events(iParam0, true);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (does_entity_exist(iLocal_35[iLocal_56]))
					{
						if (!is_ped_injured(iLocal_35[iLocal_56]))
						{
							if (func_188(player_ped_id(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (func_208(iLocal_35[iLocal_56], 6))
								{
									if (can_ped_see_hated_ped(iLocal_35[iLocal_56], player_ped_id()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!is_entity_on_screen(iLocal_35[iLocal_56]))
											{
												clear_ped_tasks_immediately(iLocal_35[iLocal_56]);
											}
											if (is_entity_on_screen(iLocal_35[iLocal_56]))
											{
												clear_ped_tasks(iLocal_35[iLocal_56]);
											}
											task_hands_up(iLocal_35[iLocal_56], -1, player_ped_id(), -1, false);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = get_game_timer();
										}
									}
									else if (get_game_timer() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!is_entity_on_screen(iLocal_35[iLocal_56]))
									{
										clear_ped_tasks_immediately(iLocal_35[iLocal_56]);
									}
									if (is_entity_on_screen(iLocal_35[iLocal_56]))
									{
										clear_ped_tasks(iLocal_35[iLocal_56]);
									}
									task_smart_flee_ped(iLocal_35[iLocal_56], player_ped_id(), 250f, -1, false, false);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!is_entity_on_screen(iLocal_35[iLocal_56]))
								{
									clear_ped_tasks_immediately(iLocal_35[iLocal_56]);
								}
								if (is_entity_on_screen(iLocal_35[iLocal_56]))
								{
									clear_ped_tasks(iLocal_35[iLocal_56]);
								}
								task_smart_flee_ped(iLocal_35[iLocal_56], player_ped_id(), 250f, -1, false, false);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_208(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && !is_ped_injured(iParam0))
	{
		if (is_ped_armed(player_ped_id(), iParam1))
		{
			if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209()
{
	iLocal_37 = func_26(0);
	iLocal_38 = func_26(1);
	iLocal_39 = func_26(2);
	if (func_34(iLocal_37, 0))
	{
		if (!is_ped_injured(iLocal_37))
		{
			if (!func_33(iLocal_37))
			{
				if (!func_211())
				{
					if (func_210(iLocal_37))
					{
						if (func_32(iLocal_37, 0))
						{
							set_entity_as_mission_entity(iLocal_37, true, true);
							set_blocking_of_non_temporary_events(iLocal_37, true);
							clear_ped_tasks(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), false))
					{
						iLocal_350 = 1;
					}
					else if (is_ped_in_any_vehicle(iLocal_37, false))
					{
						if (!is_ped_in_vehicle(iLocal_37, get_vehicle_ped_is_in(player_ped_id(), false), false))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_211())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_210(iLocal_37) && does_entity_belong_to_this_script(iLocal_37, true)) && iLocal_350 == 0)
					{
						Local_94 = { get_entity_coords(iLocal_37, true) };
						_request_paths_prefer_accurate_boundingstruct(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (are_nodes_loaded_for_area(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									task_vehicle_mission_coors_target(iLocal_37, get_vehicle_ped_is_in(iLocal_37, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (does_entity_exist(get_closest_vehicle(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								task_vehicle_mission(iLocal_37, get_vehicle_ped_is_in(iLocal_37, false), get_closest_vehicle(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (are_nodes_loaded_for_area(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								task_vehicle_mission_coors_target(iLocal_37, get_vehicle_ped_is_in(iLocal_37, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_25(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_39, 0))
	{
		if (!is_ped_injured(iLocal_39))
		{
			if (!func_33(iLocal_39))
			{
				if (!func_211())
				{
					if (func_210(iLocal_39))
					{
						if (func_32(iLocal_39, 0))
						{
							set_entity_as_mission_entity(iLocal_39, true, true);
							set_blocking_of_non_temporary_events(iLocal_39, true);
							clear_ped_tasks(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), false))
					{
						iLocal_352 = 1;
					}
					else if (is_ped_in_any_vehicle(iLocal_39, false))
					{
						if (!is_ped_in_vehicle(iLocal_39, get_vehicle_ped_is_in(player_ped_id(), false), false))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (func_211())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_210(iLocal_39) && does_entity_belong_to_this_script(iLocal_39, true)) && iLocal_352 == 0)
					{
						Local_94 = { get_entity_coords(iLocal_39, true) };
						_request_paths_prefer_accurate_boundingstruct(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (are_nodes_loaded_for_area(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									task_vehicle_mission_coors_target(iLocal_39, get_vehicle_ped_is_in(iLocal_39, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (does_entity_exist(get_closest_vehicle(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								task_vehicle_mission(iLocal_39, get_vehicle_ped_is_in(iLocal_39, false), get_closest_vehicle(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (are_nodes_loaded_for_area(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								task_vehicle_mission_coors_target(iLocal_39, get_vehicle_ped_is_in(iLocal_39, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (func_25(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_38, 0))
	{
		if (!is_ped_injured(iLocal_38))
		{
			if (!func_33(iLocal_38))
			{
				if (!func_211())
				{
					if (func_210(iLocal_38))
					{
						if (func_32(iLocal_38, 0))
						{
							set_entity_as_mission_entity(iLocal_38, true, true);
							set_blocking_of_non_temporary_events(iLocal_38, true);
							clear_ped_tasks(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), false))
					{
						iLocal_351 = 1;
					}
					else if (is_ped_in_any_vehicle(iLocal_38, false))
					{
						if (!is_ped_in_vehicle(iLocal_38, get_vehicle_ped_is_in(player_ped_id(), false), false))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_211())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_210(iLocal_38) && does_entity_belong_to_this_script(iLocal_38, true)) && iLocal_351 == 0)
					{
						Local_94 = { get_entity_coords(iLocal_38, true) };
						_request_paths_prefer_accurate_boundingstruct(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (get_player_wanted_level(player_id()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (are_nodes_loaded_for_area(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									task_vehicle_mission_coors_target(iLocal_38, get_vehicle_ped_is_in(iLocal_38, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (does_entity_exist(get_closest_vehicle(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								task_vehicle_mission(iLocal_38, get_vehicle_ped_is_in(iLocal_38, false), get_closest_vehicle(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (are_nodes_loaded_for_area(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								task_vehicle_mission_coors_target(iLocal_38, get_vehicle_ped_is_in(iLocal_38, false), Local_92, 4, 30f, 786468, 3f, 15f, false);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_25(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_210(int iParam0)
{
	if (!is_ped_injured(player_ped_id()) && is_ped_in_any_vehicle(player_ped_id(), false))
	{
		if (!is_ped_injured(iParam0))
		{
			if (is_ped_in_vehicle(iParam0, get_vehicle_ped_is_in(player_ped_id(), false), false) && get_ped_in_vehicle_seat(get_vehicle_ped_is_in(player_ped_id(), false), -1, false) == iParam0)
			{
				if (does_entity_exist(iLocal_33))
				{
					if (is_vehicle_driveable(iLocal_33, false))
					{
						if ((is_ped_in_vehicle(iParam0, iLocal_33, false) && get_ped_in_vehicle_seat(iLocal_33, -1, false) == iParam0) && !is_entity_at_coord(iLocal_33, Local_92, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

bool func_211()
{
	return Global_23009;
}

void func_212()
{
	if (does_entity_exist(iLocal_33))
	{
		if (!is_vehicle_driveable(iLocal_33, false))
		{
			func_215(3);
			return;
		}
		else
		{
			if (func_214(&iLocal_33))
			{
				func_215(2);
				return;
			}
			if (does_entity_exist(iLocal_32))
			{
				if (!is_vehicle_driveable(iLocal_32, false))
				{
					func_215(1);
					return;
				}
				if (is_vehicle_driveable(iLocal_32, false))
				{
					if (!is_vehicle_attached_to_trailer(iLocal_33))
					{
						if ((is_vehicle_stuck_on_roof(iLocal_32) || func_213(iLocal_32)) || func_214(&iLocal_32))
						{
							func_215(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (does_entity_exist(iLocal_32))
		{
			if (is_vehicle_driveable(iLocal_32, false))
			{
				if (func_188(iLocal_32, player_ped_id(), 1) > 600f)
				{
					func_215(5);
					return;
				}
			}
		}
	}
	if (does_entity_exist(iLocal_40))
	{
		if (is_ped_injured(iLocal_40))
		{
			func_215(6);
			return;
		}
	}
}

int func_213(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0, false))
		{
			return 1;
		}
		else if (!is_vehicle_driveable(iParam0, false))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	if (is_vehicle_driveable(*iParam0, false))
	{
		if (((is_vehicle_stuck_timer_up(*iParam0, 0, 7000) || is_vehicle_stuck_timer_up(*iParam0, 3, 30000)) || is_vehicle_stuck_timer_up(*iParam0, 2, 30000)) || is_vehicle_stuck_timer_up(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_215(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_216(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113386.f_9085.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113386.f_9085.f_99.f_58[iParam0] = iParam1;
}

void func_217()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			func_218(657);
		}
	}
}

void func_218(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_63155 = 0;
	if (!Global_63379[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		if (Global_75250[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75250[iVar1 /*9*/].f_1 = 1;
			Global_75250[iVar1 /*9*/].f_2 = 0f;
			if (Global_75250[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_219(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_220()
{
	set_all_random_peds_flee(player_id(), false);
	set_vehicle_model_is_suppressed(joaat("packer"), false);
	set_vehicle_model_is_suppressed(joaat("phantom"), false);
	cancel_music_event("FHPRB_START");
	cancel_music_event("FHPRB_TRUCK");
	cancel_music_event("FHPRB_COPS");
	cancel_music_event("FHPRB_LOST");
	cancel_music_event("FHPRB_STOP");
	remove_scenario_blocking_area(iLocal_42, false);
	remove_scenario_blocking_area(iLocal_43, false);
	remove_scenario_blocking_area(iLocal_44, false);
	remove_scenario_blocking_area(iLocal_45, false);
	remove_scenario_blocking_area(iLocal_46, false);
	remove_scenario_blocking_area(iLocal_47, false);
	if (does_scenario_group_exist("SCRAP_SECURITY"))
	{
		if (is_scenario_group_enabled("SCRAP_SECURITY"))
		{
			set_scenario_group_enabled("SCRAP_SECURITY", false);
		}
	}
	set_max_wanted_level(5);
	if (is_door_registered_with_system(iLocal_90))
	{
		remove_door_from_system(iLocal_90, 0);
	}
	if (is_door_registered_with_system(iLocal_91))
	{
		remove_door_from_system(iLocal_91, 0);
	}
	terminate_this_thread();
}

void func_221()
{
	int iVar0;
	
	if (has_script_loaded("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_219(0))
	{
		if (!func_222())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				set_bit(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_222()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

