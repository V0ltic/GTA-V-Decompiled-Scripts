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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_82 = 0;
	struct<3> Local_83[5];
	int* iLocal_84 = NULL;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int* iLocal_87 = NULL;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int* iLocal_90 = NULL;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 16;
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
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	struct<100> Local_267 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<2> Local_274 = { 0, 5 } ;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
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
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	bLocal_78 = true;
	iLocal_79 = 6;
	iLocal_80 = 18;
	iLocal_82 = -1;
	bLocal_96 = true;
	iLocal_97 = 1;
	Local_56 = { ScriptParam_274.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (has_force_cleanup_occurred(82))
	{
		func_153(1);
	}
	iLocal_53 = get_player_ped(player_id());
	iLocal_59 = 0;
	func_151(&Global_112037, 0);
	func_145();
	_0x6F2135B6129620C1(true);
	if (func_144(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_38391)
	{
		wait(0);
	}
	if (!func_144(uLocal_58, 8))
	{
		if (!func_142(iLocal_64))
		{
			if (func_141(0, iLocal_63))
			{
				func_153(0);
			}
			else
			{
				func_153(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_141(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (func_144(uLocal_58, 8388608))
	{
		func_153(1);
	}
	if (func_144(uLocal_58, 524288) && (func_140() && !func_139()))
	{
		func_153(1);
	}
	if (_get_number_of_references_of_script_with_name_hash(get_hash_of_this_script_name()) > 1 && !func_144(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_138(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_137(10);
	}
	while (true)
	{
		if (!func_144(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (get_ground_z_for_3d_coord(ScriptParam_274.f_1[0 /*3*/], &fVar1, false, false))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_274.f_1[0 /*3*/].f_2 = fVar1;
					func_136(&uLocal_58, 268435456);
				}
			}
		}
		iLocal_53 = get_player_ped(player_id());
		if (func_144(uLocal_58, 1048576))
		{
			if (is_entity_dead(iLocal_53, false))
			{
				func_153(1);
			}
		}
		if (does_entity_exist(iLocal_53) && !is_entity_dead(iLocal_53, false))
		{
			Local_55 = { get_entity_coords(iLocal_53, true) };
			fLocal_57 = vdist2(Local_55, ScriptParam_274.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_274.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = vdist2(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_142(iLocal_64) || (func_144(uLocal_58, 16) && !func_144(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_132();
						func_137(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_138(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_137(10);
						}
						if ((Local_55.f_2 - ScriptParam_274.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_130() && fLocal_57 > ((fLocal_77 * 1.5f) * (fLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						func_137(3);
					}
					else
					{
						func_132();
					}
					break;
				
				case 3:
					if (network_is_in_session())
					{
						func_153(1);
						return;
					}
					if (!func_142(iLocal_64))
					{
						if (!func_144(uLocal_58, 8))
						{
							bVar2 = true;
							if (are_strings_equal(&(Global_100441.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_153(0);
								break;
							}
						}
					}
					if (!func_144(uLocal_58, 4))
					{
						func_119();
						func_136(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100475)
					{
						if (iLocal_69 != 263)
						{
							if (func_118(6) && !func_117(iLocal_69))
							{
							}
							else
							{
								func_138(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_137(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_144(uLocal_58, 64);
						func_151(&uLocal_58, 128);
						if (!func_116(3) && !Global_100475)
						{
							if (func_144(uLocal_58, 2097152))
							{
								if ((!func_144(uLocal_58, 1) || !does_entity_exist(func_115())) && !Global_100475)
								{
									func_137(10);
									break;
								}
							}
						}
						if (func_144(uLocal_58, 524288) && (func_140() && !func_139()))
						{
							func_153(1);
						}
						if (func_114())
						{
							func_153(1);
						}
						if ((!func_106(6) || Global_112433) || func_105())
						{
							bVar3 = false;
						}
						if (!bLocal_78)
						{
							func_103(&uLocal_58, 128);
							bVar3 = false;
						}
						if (func_144(uLocal_58, 1))
						{
							if (!func_102())
							{
								func_103(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_101(1))
						{
							bVar3 = false;
						}
						if (Global_78319)
						{
							bVar3 = false;
						}
						if (func_100())
						{
							bVar3 = false;
						}
						if (is_player_switch_in_progress())
						{
							bVar3 = false;
						}
						if (func_99() || func_98(8, -1))
						{
							bVar3 = false;
						}
						if (!can_player_start_mission(player_id()))
						{
							bVar3 = false;
						}
						if (!is_player_script_control_on(player_id()))
						{
							bVar3 = false;
						}
						if (func_97(0) || func_96())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!is_entity_at_coord(iLocal_53, ScriptParam_274.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar3 = false;
							}
							iVar4 = get_clock_hours();
							if (iLocal_79 > iLocal_80)
							{
								if (iVar4 < iLocal_79 && iVar4 >= iLocal_80)
								{
									func_103(&uLocal_58, 128);
									bVar3 = false;
									if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
									{
										if (!func_144(uLocal_58, 134217728))
										{
											func_95("MG_NA_TIME", iLocal_79, iLocal_80);
											func_103(&uLocal_58, 134217728);
										}
									}
									else
									{
										func_151(&uLocal_58, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_79 || iVar4 >= iLocal_80)
							{
								func_103(&uLocal_58, 128);
								bVar3 = false;
								if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
								{
									if (!func_144(uLocal_58, 134217728))
									{
										func_95("MG_NA_TIME", iLocal_79, iLocal_80);
										func_103(&uLocal_58, 134217728);
									}
								}
								else
								{
									func_151(&uLocal_58, 134217728);
								}
							}
							if (!is_player_control_on(player_id()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								set_input_exclusive(0, 51);
								if (func_94(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_93(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_103(&uLocal_58, 2048);
									}
									else if (!func_144(uLocal_58, 2048) || !is_help_message_being_displayed())
									{
										func_92(&iLocal_60);
										func_151(&uLocal_58, 2048);
									}
									if (func_90(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_92(&iLocal_60);
										func_151(&uLocal_58, 2048);
										request_script(&Local_52);
										set_player_control(player_id(), false, 56);
										func_137(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_92(&iLocal_60);
									func_151(&uLocal_58, 2048);
									request_script(&Local_52);
									set_player_control(player_id(), false, 56);
									func_137(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_92(&iLocal_60);
								func_151(&uLocal_58, 2048);
								clear_help(false);
							}
						}
					}
					func_52();
					break;
				
				case 5:
					set_input_exclusive(0, 51);
					if (has_script_loaded(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_92(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_144(uLocal_58, 1))
						{
							if (func_118(6) || func_118(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_49(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!is_entity_dead(iLocal_54, false))
							{
								set_vehicle_as_no_longer_needed(&iLocal_54);
							}
							if (is_player_playing(player_id()))
							{
								clear_player_wanted_level(player_id());
							}
							func_48();
							if (Global_44238)
							{
								func_39(player_ped_id());
							}
							set_player_control(player_id(), true, 56);
							iLocal_50 = func_38();
							func_103(&uLocal_58, 2);
							func_137(6);
							func_34(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_33(iLocal_63);
								func_31(func_32(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_30();
						}
						else if (iVar5 == 0)
						{
							func_137(10);
						}
					}
					else
					{
						func_30();
					}
					break;
				
				case 6:
					if (func_144(Global_112037, 262144))
					{
						func_151(&Global_112037, 262144);
						func_29();
					}
					if (func_144(uLocal_58, 2097152))
					{
						if (!func_116(3) && !is_thread_active(iLocal_50))
						{
							func_137(10);
						}
					}
					if (!is_thread_active(iLocal_50))
					{
						playstats_oddjob_done(round((func_25(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_24(&iLocal_71);
						func_151(&uLocal_58, 256);
						func_21();
						if (bVar0)
						{
							func_151(&uLocal_58, 2);
						}
						else if (func_144(uLocal_58, 2))
						{
							if (func_144(Global_112037, 0))
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_151(&uLocal_58, 2);
							}
							else
							{
								func_20(&iLocal_62);
								iLocal_62 = -1;
								func_151(&uLocal_58, 2);
							}
						}
						func_137(0);
						if (iLocal_63 != -1)
						{
							if (func_144(Global_112037, 0))
							{
								playstats_mission_checkpoint(func_32(iLocal_63), 0, Global_100478, 0);
								func_19(func_32(iLocal_63), 0, Global_100478, 1, 0);
							}
							else
							{
								playstats_mission_checkpoint(func_32(iLocal_63), 0, Global_100478, 0);
								func_19(func_32(iLocal_63), 0, Global_100478, 0, 0);
							}
						}
						func_5();
						func_151(&Global_112037, 0);
						if (func_144(uLocal_58, 16777216))
						{
							func_153(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_113386.f_9085)
							{
								if (!func_141(0, iLocal_63))
								{
									func_153(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_137(0);
					break;
				
				case 10:
					func_153(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_138(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_137(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_138(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_92(&iLocal_60);
					}
					if (!is_string_null_or_empty(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							clear_help(true);
						}
					}
					func_137(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!is_ped_injured(player_ped_id()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_142(iLocal_64) && func_141(0, iLocal_63))
									{
										func_145();
										if (iLocal_69 != 263)
										{
											func_138(iLocal_69, 1, 0);
										}
										func_137(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_138(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_137(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_145();
									if (iLocal_69 != 263)
									{
										func_138(iLocal_69, 1, 0);
									}
									func_137(0);
								}
							}
						}
						else
						{
							func_138(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		wait(0);
	}
}

bool func_1(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

void func_2()
{
	char* sVar0;
	
	func_3(&(Local_267.f_71));
	func_3(&(Local_267.f_77));
	func_3(&(Local_267.f_99));
	remove_anim_dict("amb@world_human_hang_out_street@male_a@idle_a");
	remove_anim_dict("amb@world_human_hang_out_street@male_b@idle_a");
	remove_anim_dict("amb@world_human_hang_out_street@male_c@idle_a");
	remove_anim_dict("amb@world_human_aa_smoke@male@idle_a");
	remove_anim_dict("random@street_race");
	remove_anim_dict("gestures@m@standing@casual");
	switch (iLocal_82)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		if (does_scenario_group_exist(sVar0))
		{
			if (is_scenario_group_enabled(sVar0))
			{
				set_scenario_group_enabled(sVar0, false);
			}
		}
	}
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			set_model_as_no_longer_needed((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
	if (func_144(Global_113386.f_19016, 1))
	{
		func_151(&(Global_113386.f_19016), 1);
		func_18();
		func_8();
		func_6();
	}
}

int func_6()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_7(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_8()
{
	if (Global_113386.f_19016.f_18 < Global_113386.f_19016.f_19[iLocal_82] || Global_113386.f_19016.f_19[iLocal_82] == 0)
	{
		Global_113386.f_19016.f_19[iLocal_82] = Global_113386.f_19016.f_18;
		Global_113386.f_19016.f_18 = 999;
	}
	if (iLocal_82 == Global_113386.f_19016.f_1 || Global_113386.f_19016.f_1 == -1)
	{
		if (Global_113386.f_19016.f_1 != 5)
		{
			Global_113386.f_19016.f_1++;
			switch (Global_113386.f_19016.f_1)
			{
				case 1:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					break;
				
				case 2:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					break;
				
				case 3:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					break;
				
				case 4:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					break;
				
				case 5:
					func_138(70, 1, 0);
					func_17(70, 1);
					func_138(71, 1, 0);
					func_17(71, 1);
					func_138(72, 1, 0);
					func_17(72, 1);
					func_138(73, 1, 0);
					func_17(73, 1);
					func_138(74, 1, 0);
					func_17(74, 1);
					func_138(75, 1, 0);
					break;
			}
			func_14("OFFR_NEW", 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			func_138(70, 1, 0);
			func_17(70, 1);
			func_138(71, 1, 0);
			func_17(71, 1);
			func_138(73, 1, 0);
			func_17(73, 1);
			func_138(74, 1, 0);
			func_17(74, 1);
			func_138(75, 1, 0);
			func_17(75, 1);
			func_138(72, 1, 0);
			func_17(72, 1);
		}
		switch (Global_113386.f_19016.f_1)
		{
			case 0:
				func_13(70);
				func_9(71);
				break;
			
			case 1:
				func_13(71);
				func_9(72);
				break;
			
			case 2:
				func_13(72);
				func_9(73);
				break;
			
			case 3:
				func_13(73);
				func_9(74);
				break;
			
			case 4:
				func_13(74);
				func_9(75);
				break;
			
			case 5:
				func_13(75);
				break;
			}
	}
}

void func_9(int iParam0)
{
	func_12(iParam0, 1, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 4);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	set_bit(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 5);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	set_bit(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 11);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	set_bit(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0)
{
	func_12(iParam0, 0, 0);
	func_11(iParam0, 1);
	func_10(iParam0, 1);
}

void func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_15(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_15(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (are_strings_equal(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (get_game_timer() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((get_game_timer() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_16();
	}
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == BitTest(Global_32338[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 20);
	}
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	set_bit(&(Global_32338[iVar0 /*23*/].f_11), 20);
}

void func_18()
{
	remove_scenario_blocking_areas();
	reset_scenario_types_enabled();
	switch (iLocal_82)
	{
		case 0:
			set_roads_back_to_original_in_angled_area(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		
		case 1:
			set_roads_back_to_original_in_angled_area(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 1);
			break;
		
		case 3:
			set_roads_back_to_original_in_angled_area(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1);
			break;
		
		case 4:
			break;
		
		case 5:
			set_roads_back_to_original_in_angled_area(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		
		case 2:
			set_roads_back_to_original_in_angled_area(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

void func_19(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (is_string_null_or_empty(&Global_97511))
	{
		return;
	}
	if (compare_strings(sParam0, &Global_97511, false, -1) != 0)
	{
		return;
	}
	playstats_mission_over(sParam0, iParam1, iParam2, bParam3, bParam4, Global_94618);
	StringCopy(&Global_97511, "", 64);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43014)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

void func_21()
{
	char cVar0[24];
	
	if (is_xbox360_version() || func_23())
	{
		network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (is_ps3_version() || func_22())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network_set_rich_presence_string(0, &cVar0);
	}
}

bool func_22()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

bool func_23()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

void func_24(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_25(int* iParam0)
{
	if (func_28(iParam0))
	{
		if (func_27(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_26(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_26(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(get_game_timer());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (network_is_game_in_progress())
	{
		iVar2 = get_network_time();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_27(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_28(int* iParam0)
{
	return BitTest(*iParam0, 1);
}

int func_29()
{
	func_8();
	return 1;
}

void func_30()
{
}

void func_31(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null_or_empty(&Global_97511))
	{
		playstats_mission_over(&Global_97511, 0, 0, false, true, false);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	playstats_mission_started(sParam0, iParam1, iParam2, func_7(0));
}

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_33(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (is_xbox360_version() || func_23())
	{
		uVar0 = iParam0;
		network_set_rich_presence(8, &uVar0, 1, 1);
	}
	else if (is_ps3_version() || func_22())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		network_set_rich_presence_string(8, &cVar1);
	}
}

void func_34(int* iParam0)
{
	if (!func_28(iParam0))
	{
		func_37(iParam0);
	}
	else
	{
		func_35(iParam0);
	}
}

void func_35(int* iParam0)
{
	func_36(iParam0, 0f);
}

void func_36(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_26(BitTest(*iParam0, 4)) - fParam1);
	set_bit(iParam0, 1);
	clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_37(int* iParam0)
{
	if (!func_28(iParam0))
	{
		func_35(iParam0);
	}
}

int func_38()
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	
	clear_help(true);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_82;
	Var0.f_1 = { Local_81 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_267[iVar1 /*14*/];
		Var0.f_10[iVar1] = Local_267[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_16 = Local_267.f_83;
	Var0.f_17 = Local_267.f_83.f_1;
	animpostfx_play("SwitchSceneNeutral", 0, true);
	wait(400);
	iVar2 = start_new_script_with_args(&Local_51, &Var0, 18, iLocal_61);
	set_script_as_no_longer_needed(&Local_51);
	return iVar2;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_47(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_42(1, iVar1, 1);
		return;
	}
	iVar2 = func_41(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_40(iVar2);
}

void func_40(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == player_ped_id())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	func_43(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_45(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_44();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	if (func_46(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_48()
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	clear_bit(&Global_8136, 25);
	set_bit(&Global_8137, 11);
}

int func_49(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_51(0))
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		set_player_invincible(get_player_index(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *iParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_142(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_50(iParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_51(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_52()
{
	float fVar0;
	
	fVar0 = vdist2(get_entity_coords(player_ped_id(), true), Local_81);
	if (fVar0 < 62500f)
	{
		func_82();
		func_79();
		if (iLocal_97)
		{
			if (fVar0 < 64f)
			{
				func_78();
				iLocal_97 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_56();
		}
	}
	if (!iLocal_98)
	{
		if (func_54())
		{
			iLocal_98 = 1;
			func_53();
		}
	}
}

void func_53()
{
	iLocal_46++;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_55())
	{
		if (!does_entity_exist(Local_267[iVar0 /*14*/]) || !does_entity_exist(Local_267[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!does_entity_exist(Local_267.f_83) || !does_entity_exist(Local_267.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_55()
{
	switch (iLocal_82)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_56()
{
	int iVar0;
	char* sVar1;
	
	if (!func_28(&iLocal_90))
	{
		func_37(&iLocal_90);
		return;
	}
	if (does_entity_exist(iLocal_95) && !is_entity_dead(iLocal_95, false))
	{
		if (is_ambient_speech_playing(iLocal_95))
		{
			return;
		}
	}
	if (func_25(&iLocal_90) >= 8f)
	{
		iVar0 = (get_random_int_in_range(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (is_entity_dead(Local_267[(iVar0 - 1) /*14*/], false))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			func_57(&uLocal_101, "ORRAUD", sVar1, 3, 0, 0, 0);
			func_35(&iLocal_90);
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_77(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_58(sParam2, iParam3, 0);
}

int func_58(char* sParam0, int iParam1, bool bParam2)
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
					func_76();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_75();
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
			clear_bit(&Global_8138, 0);
			if (bParam2)
			{
				func_68();
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
				if (func_67())
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
			if (func_66())
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
			func_65();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_64();
		func_59();
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
		func_76();
	}
	return 0;
}

void func_59()
{
	if (!func_60())
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

int func_60()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_63())
	{
		return 0;
	}
	if (func_61(player_id()))
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

bool func_61(int iParam0)
{
	return func_62(iParam0, 20);
}

var func_62(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_63()
{
	return -1;
}

void func_64()
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

void func_65()
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

int func_66()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_67()
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

void func_68()
{
	if (func_118(14))
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
		Global_20266 = func_69();
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

var func_69()
{
	func_70();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_70()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_73(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_72(player_ped_id());
			if (func_71(iVar0) && (!func_118(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_71(Global_113386.f_2363.f_539.f_4321))
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

bool func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return func_74(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_74(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_75()
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

void func_76()
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

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
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

void func_78()
{
	int iVar0;
	
	if (is_player_playing(player_id()) && !is_entity_dead(Local_267.f_83, false))
	{
		iVar0 = get_clock_hours();
		if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
		{
			iLocal_97 = 0;
			return;
		}
		set_gameplay_entity_hint(Local_267.f_83, 0f, 0f, 0.75f, true, 2000, 2000, 2000, 0);
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = get_clock_hours();
	if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
	{
		iLocal_266 = 0;
		return;
	}
	if (!is_entity_dead(iLocal_95, false) && !is_entity_dead(player_ped_id(), false))
	{
		switch (iLocal_266)
		{
			case 0:
				if (vdist2(get_entity_coords(iLocal_95, true), get_entity_coords(player_ped_id(), true)) < 64f && !is_ped_in_any_vehicle(player_ped_id(), false))
				{
					iLocal_99 = 0;
					iLocal_100 = 0;
					iLocal_266 = 1;
				}
				break;
			
			case 1:
				open_sequence_task(&iVar1);
				task_look_at_entity(0, player_ped_id(), -1, 0, 2);
				task_turn_ped_to_face_entity(0, player_ped_id(), 0);
				close_sequence_task(iVar1);
				task_perform_sequence(iLocal_95, iVar1);
				clear_sequence_task(&iVar1);
				iLocal_266 = 2;
				break;
			
			case 2:
				if ((get_script_task_status(iLocal_95, 242628503) != 1 || is_ped_facing_ped(iLocal_95, player_ped_id(), 20f)) && !is_scripted_conversation_ongoing())
				{
					task_turn_ped_to_face_entity(iLocal_95, player_ped_id(), -1);
					if (!iLocal_100)
					{
						func_80(iLocal_95, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_80(iLocal_95, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_266 = 3;
				}
				break;
			
			case 3:
				if (!is_ambient_speech_playing(iLocal_95))
				{
					func_35(&iLocal_87);
					task_play_anim(iLocal_95, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0f, false, false, false);
					iLocal_266 = 4;
				}
				break;
			
			case 4:
				if (vdist2(get_entity_coords(iLocal_95, true), get_entity_coords(player_ped_id(), true)) > 225f)
				{
					open_sequence_task(&iVar2);
					task_achieve_heading(0, Local_267.f_83.f_9, 1000);
					task_play_anim(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					close_sequence_task(iVar2);
					task_perform_sequence(iLocal_95, iVar2);
					clear_sequence_task(&iVar2);
					iLocal_266 = 0;
				}
				if (func_28(&iLocal_87))
				{
					if (func_25(&iLocal_87) >= 5f && !iLocal_99)
					{
						iLocal_99 = 1;
						iLocal_266 = 1;
					}
					else if (func_25(&iLocal_87) >= 10f && !iLocal_100)
					{
						iLocal_100 = 1;
						iLocal_266 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_80(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	play_ped_ambient_speech_with_voice_native(iParam0, sParam1, sParam2, func_81(iParam3), false);
}

int func_81(int iParam0)
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

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (does_entity_exist(Local_267[iVar2 /*14*/].f_1) && does_entity_exist(Local_267[iVar2 /*14*/]))
		{
			if (func_87(Local_267[iVar2 /*14*/], 1, 0, 0, 0) || is_ped_in_vehicle(player_ped_id(), Local_267[iVar2 /*14*/].f_1, true))
			{
				func_85();
				func_84(iLocal_69);
				set_player_control(player_id(), true, 0);
			}
			if (!is_ped_injured(Local_267[iVar2 /*14*/]))
			{
				if (func_28(&(Local_83[iVar2 /*3*/])))
				{
					if (func_25(&(Local_83[iVar2 /*3*/])) > fLocal_93[iVar2])
					{
						if (is_vehicle_driveable(Local_267[iVar2 /*14*/].f_1, false) && is_ped_in_vehicle(Local_267[iVar2 /*14*/], Local_267[iVar2 /*14*/].f_1, false))
						{
							iVar0 = get_random_int_in_range(250, 500);
							iVar1 = get_random_int_in_range(250, 500);
							open_sequence_task(&iVar3);
							task_vehicle_temp_action(0, Local_267[iVar2 /*14*/].f_1, 1, iVar0);
							task_vehicle_temp_action(0, Local_267[iVar2 /*14*/].f_1, 31, iVar1);
							close_sequence_task(iVar3);
							if (!is_ped_injured(Local_267[iVar2 /*14*/]))
							{
								task_perform_sequence(Local_267[iVar2 /*14*/], iVar3);
							}
							clear_sequence_task(&iVar3);
						}
						func_35(&(Local_83[iVar2 /*3*/]));
						fLocal_93[iVar2] = get_random_float_in_range(0f, 3f);
					}
				}
				else
				{
					func_37(&(Local_83[iVar2 /*3*/]));
				}
			}
			if (!is_entity_dead(Local_267[iVar2 /*14*/], false))
			{
				if ((is_entity_touching_entity(player_ped_id(), Local_267[iVar2 /*14*/]) && !is_ped_ragdoll(Local_267[iVar2 /*14*/])) && !is_ped_getting_up(Local_267[iVar2 /*14*/]))
				{
					Local_267[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_11)
				{
					open_sequence_task(&iVar3);
					task_achieve_heading(0, Local_267[iVar2 /*14*/].f_9, 1000);
					task_play_anim(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					close_sequence_task(iVar3);
					task_perform_sequence(Local_267[iVar2 /*14*/], iVar3);
					clear_sequence_task(&iVar3);
					Local_267[iVar2 /*14*/].f_11 = 0;
				}
				if (is_ped_ragdoll(Local_267[iVar2 /*14*/]) || is_ped_getting_up(Local_267[iVar2 /*14*/]))
				{
					if (!Local_267[iVar2 /*14*/].f_10 && (is_ped_ragdoll(Local_267[iVar2 /*14*/]) || is_ped_getting_up(Local_267[iVar2 /*14*/])))
					{
						Local_267.f_101++;
					}
					Local_267[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_10)
				{
					open_sequence_task(&iVar3);
					task_turn_ped_to_face_entity(0, player_ped_id(), 1000);
					task_play_anim(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0f, false, false, false);
					task_achieve_heading(0, Local_267[iVar2 /*14*/].f_9, 1000);
					task_play_anim(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					close_sequence_task(iVar3);
					task_perform_sequence(Local_267[iVar2 /*14*/], iVar3);
					clear_sequence_task(&iVar3);
					Local_267[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (does_entity_exist(Local_267.f_83.f_1) && does_entity_exist(Local_267.f_83))
	{
		if (is_ped_in_vehicle(player_ped_id(), Local_267.f_83.f_1, false))
		{
			iLocal_54 = Local_267.f_83.f_1;
		}
		if (func_87(Local_267.f_83, 1, 0, 0, 0))
		{
			func_85();
			func_84(iLocal_69);
			set_player_control(player_id(), true, 0);
		}
		if (!is_ped_injured(Local_267.f_83))
		{
			if (func_28(&iLocal_84))
			{
				if (func_25(&iLocal_84) > fLocal_94)
				{
					if (is_vehicle_driveable(Local_267.f_83.f_1, false) && is_ped_in_vehicle(Local_267.f_83, Local_267.f_83.f_1, false))
					{
						iVar0 = get_random_int_in_range(250, 500);
						iVar1 = get_random_int_in_range(250, 500);
						open_sequence_task(&iVar3);
						task_vehicle_temp_action(0, Local_267.f_83.f_1, 1, iVar0);
						task_vehicle_temp_action(0, Local_267.f_83.f_1, 31, iVar1);
						close_sequence_task(iVar3);
						if (!is_ped_injured(Local_267.f_83))
						{
							task_perform_sequence(Local_267.f_83, iVar3);
						}
						clear_sequence_task(&iVar3);
					}
					func_35(&iLocal_84);
					fLocal_94 = get_random_float_in_range(0f, 3f);
				}
			}
			else
			{
				func_37(&iLocal_84);
			}
		}
		if (!is_entity_dead(Local_267.f_83, false))
		{
			if ((is_entity_touching_entity(player_ped_id(), Local_267.f_83) && !is_ped_ragdoll(Local_267.f_83)) && !is_ped_getting_up(Local_267.f_83))
			{
				Local_267.f_83.f_11 = 1;
			}
			else if (Local_267.f_83.f_11)
			{
				open_sequence_task(&iVar3);
				task_achieve_heading(0, Local_267.f_83.f_9, 1000);
				task_play_anim(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0f, false, false, false);
				close_sequence_task(iVar3);
				task_perform_sequence(Local_267.f_83, iVar3);
				clear_sequence_task(&iVar3);
				Local_267.f_83.f_11 = 0;
			}
			if (is_ped_ragdoll(Local_267.f_83) || is_ped_getting_up(Local_267.f_83))
			{
				if (!Local_267.f_83.f_10)
				{
					Local_267.f_101++;
				}
				Local_267.f_83.f_10 = 1;
			}
			else if (Local_267.f_83.f_10)
			{
				open_sequence_task(&iVar3);
				task_turn_ped_to_face_entity(0, player_ped_id(), 1000);
				task_play_anim(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0f, false, false, false);
				task_achieve_heading(0, Local_267.f_83.f_9, 1000);
				task_play_anim(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 8f, -8f, -1, 0, 0f, false, false, false);
				close_sequence_task(iVar3);
				task_perform_sequence(Local_267.f_83, iVar3);
				clear_sequence_task(&iVar3);
				iLocal_266 = 4;
				func_35(&iLocal_87);
				Local_267.f_83.f_10 = 0;
			}
		}
	}
}

char* func_83()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = (get_random_int_in_range(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_84(int iParam0)
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_138(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_92(&iLocal_60);
		iLocal_59 = 9;
	}
}

void func_85()
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	
	get_ped_nearby_peds(player_ped_id(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (does_entity_exist(iVar0[iVar2]) && !is_ped_injured(iVar0[iVar2]))
		{
			if (is_ped_armed(player_ped_id(), 4))
			{
				task_smart_flee_ped(iVar0[iVar2], player_ped_id(), 100f, -1, false, false);
			}
			else
			{
				open_sequence_task(&iVar1);
				task_turn_ped_to_face_entity(0, player_ped_id(), get_random_int_in_range(300, 900));
				task_combat_ped(0, player_ped_id(), 0, 0);
				close_sequence_task(iVar1);
				task_perform_sequence(iVar0[iVar2], iVar1);
				clear_sequence_task(&iVar1);
			}
		}
		iVar2++;
	}
	switch (Global_113386.f_19016.f_1)
	{
		case 0:
			func_86(0);
			break;
		
		case 1:
			func_86(0);
			break;
		
		case 3:
			func_86(0);
			break;
		
		case 4:
			func_86(0);
			break;
		
		case 5:
			func_86(0);
			break;
		
		case 2:
			func_86(0);
			break;
	}
}

void func_86(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = player_ped_id();
	if (Local_267.f_101 >= 3)
	{
		return 1;
	}
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			Var1 = { get_entity_coords(iParam0, true) };
			if (bParam1)
			{
				if (has_entity_been_damaged_by_entity(iParam0, player_ped_id(), true))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (is_ped_in_combat(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (is_entity_touching_entity(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
				{
					if (func_88(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (is_ped_in_any_vehicle(iParam0, false))
			{
				if (has_entity_been_damaged_by_entity(get_vehicle_ped_is_in(iParam0, false), iVar0, true))
				{
					return 1;
				}
			}
			if (is_ped_fleeing(iParam0))
			{
				return 1;
			}
			if (is_ped_armed(iVar0, 4))
			{
				if (is_ped_shooting(iVar0))
				{
					if (is_entity_at_coord(iParam0, get_entity_coords(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (is_bullet_in_area(Var1, 4f, true))
			{
				return 1;
			}
			if (is_projectile_in_area((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), false))
			{
				return 1;
			}
			if (is_ped_being_jacked(iParam0))
			{
				if (get_peds_jacker(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((is_explosion_in_sphere(-1, Var1, 25f) && !is_explosion_in_sphere(11, Var1, 25f)) && !is_explosion_in_sphere(13, Var1, 25f))
			{
				return 1;
			}
			clear_entity_last_damage_entity(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_88(int iParam0, bool bParam1)
{
	return func_89(get_player_ped(get_player_index()), iParam0, bParam1);
}

float func_89(int iParam0, int iParam1, bool bParam2)
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

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_91(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!is_player_playing(get_player_index()))
	{
		return 0;
	}
	if (func_97(0))
	{
		return 0;
	}
	if (is_cutscene_playing())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_92(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_91(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_references_of_script_with_name_hash(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_92(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = get_id_of_this_thread();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!is_string_null_or_empty(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_94(int iParam0)
{
	if (does_entity_exist(iParam0) && is_ped_in_vehicle(player_ped_id(), iParam0, false))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_95(char* sParam0, int iParam1, int iParam2)
{
	begin_text_command_display_help(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	end_text_command_display_help(0, false, true, -1);
}

var func_96()
{
	return Global_75485;
}

int func_97(int iParam0)
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

bool func_98(int iParam0, int iParam1)
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

bool func_99()
{
	return get_game_timer() <= Global_23150.f_6269 + 100;
}

int func_100()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_101(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_102()
{
	return 1;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_105()
{
	int iVar0;
	bool bVar1;
	
	if (is_ped_injured(player_ped_id()))
	{
		return 0;
	}
	get_current_ped_weapon(player_ped_id(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		return ((((bVar1 && is_control_pressed(0, 69)) || (bVar1 && is_control_pressed(0, 70))) || (bVar1 && is_control_pressed(0, 68))) || is_player_targetting_anything(player_id()));
	}
	return (((((bVar1 && is_control_pressed(0, 24)) || (bVar1 && is_control_pressed(0, 25))) || (bVar1 && is_control_pressed(0, 47))) || is_ped_performing_melee_action(player_ped_id())) || is_player_targetting_anything(player_id()));
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_69();
				if (!func_71(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_109()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), true) || func_113()) || Global_31962) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_109()) || func_111()) || func_110()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_ped_in_combat(player_ped_id(), 0)) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_111()) || func_110()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_113() || get_player_wanted_level(player_id()) > 0) || func_98(8, -1)) || func_100()) || func_108()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_111()) || func_110()) || func_108()) || func_107())
						{
							return 0;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (does_entity_exist(player_ped_id()))
						{
							if ((((((((((((((is_ped_in_combat(player_ped_id(), 0) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_113()) || Global_31962) || func_112()) || func_98(8, -1)) || func_110()) || func_109()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || func_113()) || func_110()) || Global_112433) || Global_31962) || func_112()) || Global_44238) || func_98(8, -1)) || func_109()) || func_108()) || func_100()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), true)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_113()) || Global_112433) || Global_31962) || func_112()) || func_98(8, -1)) || func_109()) || func_108()) || func_111()) || func_110()) || func_100())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_107()
{
	return Global_100480.f_1;
}

int func_108()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_109()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return Global_100493.f_376 > 0;
}

bool func_111()
{
	return Global_100493.f_375 > 0;
}

var func_112()
{
	return Global_1575058;
}

int func_113()
{
	if (!network_is_game_in_progress())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_114()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_115()
{
	return Global_96273;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_118(6) || func_118(7))
			{
				return 1;
			}
			else
			{
				return func_116(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_142(5))
			{
				if (func_106(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return does_blip_exist(Global_32338[iVar0 /*23*/].f_19);
}

bool func_118(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_119()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_clock_hours();
	if ((iVar0 <= iLocal_79 && iVar0 >= iLocal_80) || get_player_wanted_level(player_id()) != 0)
	{
		return;
	}
	if (bLocal_96)
	{
		func_129();
		func_128();
		switch (iLocal_82)
		{
			case 0:
				func_127(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.442f, 4440.866f, 37.2504f, 184.125f);
				func_127(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.795f, 4438.275f, 37.402f, 78.7749f);
				func_127(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_127(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.251f, 4438.761f, 36.9256f, 23.8377f);
				func_127(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.319f, 4439.913f, 36.7166f, 250.6112f);
				func_126(-1939.564f, 4443.306f, 36.3803f, 262.3551f, -1936.208f, 4444.125f, 36.8594f, 123.8187f);
				break;
			
			case 1:
				func_127(-520.2097f, 2010.816f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_127(-516.9937f, 2013.98f, 203.5907f, 19.3803f, -517.1741f, 2010.813f, 203.8412f, 125.7555f);
				func_127(-518.3414f, 2005.449f, 204.1878f, 20.7231f, -519.0882f, 2013.649f, 203.3304f, 195.7951f);
				func_127(-514.8247f, 2008.574f, 204.3629f, 20.2278f, -514.2933f, 2004.923f, 204.5935f, 126.8655f);
				func_126(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.622f, 204.5549f, 1.757f);
				break;
			
			case 3:
				func_127(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_127(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.25f, 43.8681f, 179.3787f);
				func_127(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.102f, 43.8909f, 311.8915f);
				func_127(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_127(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.683f, 43.8597f, 28.0083f);
				func_126(-225.6736f, 4224.503f, 43.8435f, 77.7579f, -227.2893f, 4224.699f, 43.8335f, 36.55f);
				break;
			
			case 4:
				func_127(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.163f, 32.9854f, 29.8332f);
				func_127(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.908f, 3841.492f, 32.9721f, 78.3f);
				func_127(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.097f, 3842.676f, 33.3217f, 198.5355f);
				func_127(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.427f, 3837.368f, 32.9989f, 9.9463f);
				func_126(1603.405f, 3836.324f, 33.1144f, 305.055f, 1605.788f, 3840.236f, 33.2826f, 288.7775f);
				break;
			
			case 5:
				func_127(2046.772f, 2130.442f, 91.9486f, 233.1493f, 2036.123f, 2133.981f, 92.615f, 260.0519f);
				func_127(2045.344f, 2126.352f, 91.9358f, 236.3633f, 2044.422f, 2128.961f, 92.088f, 47.8797f);
				func_127(2036.512f, 2137.807f, 92.6507f, 237.2446f, 2041.778f, 2131.354f, 92.4544f, 226.7534f);
				func_127(2041.739f, 2134.324f, 92.4013f, 232.956f, 2039.603f, 2132.563f, 92.6648f, 61.0834f);
				func_127(2039.775f, 2130.025f, 92.5324f, 241.6337f, 2038.744f, 2134.523f, 92.6235f, 128.98f);
				func_126(2030.898f, 2134.197f, 92.5014f, 249.4471f, 2036.58f, 2135.382f, 92.605f, 233.2111f);
				break;
			
			case 2:
				func_127(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.392f, 42.1008f, 29.7228f);
				func_127(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.12f, 2779.783f, 42.3128f, 286.9825f);
				func_127(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.253f, 2783.97f, 42.5421f, 108.7426f);
				func_127(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.582f, 2787.476f, 42.6953f, 157.4885f);
				func_127(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.719f, 2784.905f, 42.6444f, 213.8879f);
				func_126(2995.525f, 2775.522f, 41.98f, 4.3249f, 2993.511f, 2776.948f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_82)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!is_string_null_or_empty(sVar1))
		{
			if (does_scenario_group_exist(sVar1))
			{
				if (!is_scenario_group_enabled(sVar1))
				{
					set_scenario_group_enabled(sVar1, true);
				}
			}
		}
	}
	func_120();
}

void func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	if (fLocal_74 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_267.f_0)
		{
			if (!func_125(Local_267[iVar5 /*14*/].f_2))
			{
				Local_267[iVar5 /*14*/].f_1 = create_vehicle(func_124(0), Local_267[iVar5 /*14*/].f_2, Local_267[iVar5 /*14*/].f_5, true, true, false);
				set_vehicle_on_ground_properly(Local_267[iVar5 /*14*/].f_1, 5f);
				set_vehicle_has_strong_axles(Local_267[iVar5 /*14*/].f_1, true);
				if (func_125(Local_267[iVar5 /*14*/].f_6))
				{
					Local_267[iVar5 /*14*/] = create_ped_inside_vehicle(Local_267[iVar5 /*14*/].f_1, 4, func_123(), -1, true, true);
					set_vehicle_engine_on(Local_267[iVar5 /*14*/].f_1, true, false, false);
				}
				else
				{
					Local_267[iVar5 /*14*/] = create_ped(4, func_123(), Local_267[iVar5 /*14*/].f_6, Local_267[iVar5 /*14*/].f_9, true, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_267[iVar5 /*14*/].f_12 = sVar3;
					Local_267[iVar5 /*14*/].f_13 = sVar4;
					open_sequence_task(&iVar0);
					task_pause(0, get_random_int_in_range(100, 500));
					task_play_anim(0, sVar3, sVar4, 8f, -8f, -1, 8193, get_random_float_in_range(0f, 1f), false, false, false);
					close_sequence_task(iVar0);
					task_perform_sequence(Local_267[iVar5 /*14*/], iVar0);
					clear_sequence_task(&iVar0);
				}
				set_ped_helmet(Local_267[iVar5 /*14*/], true);
				give_ped_helmet(Local_267[iVar5 /*14*/], true, 4096, -1);
			}
			iVar5++;
		}
		Local_267.f_83.f_1 = create_vehicle(func_124(1), Local_267.f_83.f_2, Local_267.f_83.f_5, true, true, false);
		set_vehicle_on_ground_properly(Local_267.f_83.f_1, 5f);
		set_vehicle_has_strong_axles(Local_267.f_83.f_1, true);
		if (func_125(Local_267.f_83.f_6))
		{
			Local_267.f_83 = create_ped_inside_vehicle(Local_267.f_83.f_1, 4, func_123(), -1, true, true);
			set_vehicle_engine_on(Local_267.f_83.f_1, true, false, false);
		}
		else
		{
			Local_267.f_83 = create_ped(4, func_123(), Local_267.f_83.f_6, Local_267.f_83.f_9, true, true);
			iVar1 = (get_random_int_in_range(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				
				case 1:
					sVar4 = "idle_b";
					break;
				
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_267.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_267.f_83.f_13 = sVar4;
			open_sequence_task(&iVar0);
			task_stand_still(0, func_122((get_random_int_in_range(0, 65535) % 1000), 1, 1000));
			task_play_anim(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, get_random_float_in_range(0f, 1f), false, false, false);
			close_sequence_task(iVar0);
			task_perform_sequence(Local_267.f_83, iVar0);
			clear_sequence_task(&iVar0);
		}
	}
	else if (fLocal_74 < 225f)
	{
	}
	iLocal_95 = Local_267.f_83;
	if (!is_entity_dead(Local_267[0 /*14*/], false))
	{
		func_121(&uLocal_101, 1, Local_267[0 /*14*/], "MALE1", 0, 1);
	}
	if (!is_entity_dead(Local_267[1 /*14*/], false))
	{
		func_121(&uLocal_101, 2, Local_267[1 /*14*/], "MALE2", 0, 1);
	}
	if (!is_entity_dead(Local_267[2 /*14*/], false))
	{
		func_121(&uLocal_101, 3, Local_267[3 /*14*/], "MALE3", 0, 1);
	}
	if (!func_28(&iLocal_90))
	{
		func_37(&iLocal_90);
	}
	else
	{
		func_35(&iLocal_90);
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_123()
{
	return joaat("a_m_y_motox_01");
}

int func_124(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_267.f_71)
	{
		if (is_model_a_vehicle(Local_267.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_82 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = get_random_int_in_range(0, iVar0);
	if (Local_267.f_71[iVar0] == 0)
	{
		if (Local_267.f_71[0] == 0)
		{
			switch (iLocal_82)
			{
				case 0:
					return joaat("sanchez");
					break;
				
				case 1:
					return joaat("mesa");
					break;
				
				case 3:
					return joaat("sanchez");
					break;
				
				case 4:
					return joaat("sanchez");
					break;
				
				case 5:
					return joaat("mesa");
					break;
				
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_267.f_71[0];
		}
	}
	return Local_267.f_71[iVar0];
}

int func_125(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_126(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	if (func_125(Local_267.f_83.f_2))
	{
		Local_267.f_83.f_2 = { Param0 };
		Local_267.f_83.f_5 = fParam1;
		Local_267.f_83.f_6 = { Param2 };
		Local_267.f_83.f_9 = fParam3;
	}
}

void func_127(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_267.f_0)
	{
		if (!bVar1 && func_125(Local_267[iVar0 /*14*/].f_2))
		{
			Local_267[iVar0 /*14*/].f_2 = { Param0 };
			Local_267[iVar0 /*14*/].f_5 = fParam1;
			Local_267[iVar0 /*14*/].f_6 = { Param2 };
			Local_267[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_128()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_267.f_0)
	{
		Local_267[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_267[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_267.f_83.f_2 = { 0f, 0f, 0f };
	Local_267.f_83.f_5 = 0f;
}

void func_129()
{
	switch (iLocal_82)
	{
		case 0:
			set_roads_in_angled_area(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, true, false, true);
			clear_area_of_vehicles(-227.43f, 3888.9f, 36.41f, 50f, true, false, false, false, false, false, 0);
			set_scenario_type_enabled("WORLD_HUMAN_HIKER", false);
			break;
		
		case 1:
			set_roads_in_angled_area(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, false, false, true);
			break;
		
		case 3:
			set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", false);
			set_roads_in_angled_area(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, true, false, true);
			clear_angled_area_of_vehicles(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, false, false, false, false, false, 0, 0);
			set_roads_in_angled_area(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, true, false, true);
			set_scenario_type_enabled("WORLD_HUMAN_HIKER", false);
			set_scenario_type_enabled("WORLD_VEHICLE_EMPTY", false);
			set_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER", false);
			break;
		
		case 4:
			set_scenario_type_enabled("WORLD_VEHICLE_DRIVE_SOLO", false);
			set_scenario_type_enabled("WORLD_VEHICLE_EMPTY", true);
			set_scenario_type_enabled("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", true);
			break;
		
		case 5:
			set_scenario_type_enabled("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
			set_roads_in_angled_area(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, true, false, true);
			clear_angled_area_of_vehicles(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, false, false, false, false, false, 0, 0);
			break;
		
		case 2:
			set_scenario_group_enabled("QUARRY", false);
			set_roads_in_angled_area(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, true, false, true);
			clear_angled_area_of_vehicles(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, false, false, false, false, false, 0, 0);
			break;
	}
}

bool func_130()
{
	return ((((((((func_131(&(Local_267.f_71)) && func_131(&(Local_267.f_77))) && func_131(&(Local_267.f_99))) && has_anim_dict_loaded("amb@world_human_hang_out_street@male_a@idle_a")) && has_anim_dict_loaded("amb@world_human_hang_out_street@male_b@idle_a")) && has_anim_dict_loaded("amb@world_human_hang_out_street@male_c@idle_a")) && has_anim_dict_loaded("amb@world_human_aa_smoke@male@idle_a")) && has_anim_dict_loaded("random@street_race")) && has_anim_dict_loaded("gestures@m@standing@casual"));
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]))
			{
				if (!has_model_loaded((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_132()
{
	char cVar0[64];
	
	func_134(&(Local_267.f_77), joaat("a_m_y_motox_01"));
	func_134(&(Local_267.f_99), joaat("a_m_y_motox_01"));
	switch (iLocal_82)
	{
		case 0:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 1:
			func_134(&(Local_267.f_71), joaat("mesa"));
			func_134(&(Local_267.f_71), joaat("bjxl"));
			func_134(&(Local_267.f_71), joaat("patriot"));
			func_134(&(Local_267.f_71), joaat("dubsta2"));
			func_134(&(Local_267.f_71), joaat("bfinjection"));
			break;
		
		case 3:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 4:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
		
		case 5:
			func_134(&(Local_267.f_71), joaat("mesa"));
			func_134(&(Local_267.f_71), joaat("bfinjection"));
			func_134(&(Local_267.f_71), joaat("bjxl"));
			func_134(&(Local_267.f_71), joaat("sadler"));
			func_134(&(Local_267.f_71), joaat("rebel"));
			break;
		
		case 2:
			func_134(&(Local_267.f_71), joaat("sanchez"));
			func_134(&(Local_267.f_71), joaat("blazer"));
			break;
	}
	request_anim_dict("amb@world_human_hang_out_street@male_a@idle_a");
	request_anim_dict("amb@world_human_hang_out_street@male_b@idle_a");
	request_anim_dict("amb@world_human_hang_out_street@male_c@idle_a");
	request_anim_dict("amb@world_human_aa_smoke@male@idle_a");
	request_anim_dict("random@street_race");
	request_anim_dict("gestures@m@standing@casual");
	if (iLocal_82 == 0)
	{
		request_model(joaat("prop_fncwood_14c"));
		request_model(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_82)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	request_vehicle_recording(1, &cVar0);
	func_133(&(Local_267.f_77));
	func_133(&(Local_267.f_71));
	func_133(&(Local_267.f_99));
}

void func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			request_model((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_135(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_137(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_138(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 18);
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	if (bParam1)
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 0);
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 15);
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 0);
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		if (does_blip_exist(Global_32338[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&(Global_32338[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(false);
		}
	}
}

int func_139()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_142(int iParam0)
{
	return func_143(iParam0, Global_43052);
}

int func_143(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_145()
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	_0x6F2135B6129620C1(true);
	fLocal_77 = (6f + 4f);
	iLocal_63 = 4;
	func_103(&uLocal_58, 4194304);
	iLocal_61 = 51000;
	iLocal_54 = 0;
	iLocal_79 = 0;
	iLocal_80 = 25;
	iLocal_67 = 0;
	iLocal_82 = func_149(Local_56, &Local_81);
	iLocal_69 = func_148(iLocal_82);
	fLocal_66 = (to_float(func_147(iLocal_69)) + 5f);
	if (func_141(0, iLocal_63))
	{
		bLocal_96 = true;
	}
	else
	{
		func_84(iLocal_69);
		bLocal_96 = false;
	}
	if (iLocal_82 > Global_113386.f_19016.f_1)
	{
		if (func_117(func_148(iLocal_82)))
		{
		}
		iLocal_69 = 263;
		func_84(iLocal_69);
	}
	if (!func_117(func_148(iLocal_82)) && is_screen_faded_in())
	{
		if (iLocal_69 != 263)
		{
			if (func_146(iLocal_69, 1))
			{
				iLocal_69 = 263;
			}
		}
		func_84(iLocal_69);
	}
	if (iLocal_82 == 2)
	{
		iLocal_79 = 20;
		iLocal_80 = 3;
	}
	if (iLocal_82 == 1 || iLocal_82 == 5)
	{
		sLocal_65 = "PLAY_OFFROAD_V";
	}
	else
	{
		sLocal_65 = "PLAY_OFFROAD_M";
	}
}

int func_146(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
	}
	return BitTest(Global_32338[iVar0 /*23*/].f_11, 0);
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70;
		
		case 1:
			return 71;
		
		case 3:
			return 73;
		
		case 4:
			return 74;
		
		case 5:
			return 75;
		
		case 2:
			return 72;
		
		default:
	}
	return 263;
}

int func_149(struct<3> Param0, var uParam1)
{
	int iVar0;
	struct<3> Var1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	
	iVar0 = 0;
	Var1[0 /*3*/] = { func_150(0) };
	Var1[1 /*3*/] = { func_150(1) };
	Var1[3 /*3*/] = { func_150(3) };
	Var1[4 /*3*/] = { func_150(4) };
	Var1[5 /*3*/] = { func_150(5) };
	Var1[2 /*3*/] = { func_150(2) };
	Var1[6 /*3*/] = { func_150(6) };
	fVar2 = vdist2(Param0, Var1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = vdist2(Param0, Var1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

Vector3 func_150(int iParam0)
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 3:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 4:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 5:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_151(var uParam0, int iParam1)
{
	func_152(uParam0, iParam1);
}

void func_152(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_138(iLocal_69, 0, 0);
		}
	}
	func_92(&iLocal_60);
	if (func_144(uLocal_58, 2))
	{
		func_5();
		func_151(&uLocal_58, 2);
		func_20(&iLocal_62);
	}
	iLocal_62 = -1;
	func_154();
	terminate_this_thread();
}

void func_154()
{
	func_151(&uLocal_58, 4);
	func_155();
	if (is_thread_active(iLocal_50))
	{
		force_cleanup_for_thread_with_this_id(iLocal_50, 3);
	}
	if (!is_string_null(&Local_52))
	{
		if (get_length_of_literal_string(&Local_52) != 0)
		{
			set_script_as_no_longer_needed(&Local_52);
		}
	}
}

void func_155()
{
}

