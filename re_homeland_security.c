#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[2] = { 0, 0 };
	struct<3> Local_51[2];
	float fLocal_52[2] = { 0f, 0f };
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_63 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 16;
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
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
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
	struct<2> Local_285 = { 0, 5 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	StringCopy(&Local_62, "", 24);
	if (has_force_cleanup_occurred(11))
	{
		if (!is_ped_injured(iLocal_58))
		{
			if (is_ped_in_group(iLocal_58))
			{
				remove_ped_from_group(iLocal_58);
			}
		}
		func_212();
	}
	if (func_170(ScriptParam_285.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_167(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(0);
		if ((is_world_point_within_brain_activation_range() || iLocal_76) || iLocal_103)
		{
			if (!func_166())
			{
				if (func_165())
				{
					func_212();
				}
			}
			_0x208784099002BC30("RE_RA", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_153())
					{
						func_212();
					}
					if (!iLocal_71)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_72)
					{
						iLocal_70 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (is_player_playing(player_id()))
					{
						switch (iLocal_47)
						{
							case 0:
								func_144();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!func_143())
								{
									if ((is_entity_at_coord(player_ped_id(), Local_59, 75f, 75f, 75f, false, true, 0) && !is_entity_occluded(iLocal_58)) || is_entity_at_entity(player_ped_id(), iLocal_58, 15f, 15f, 15f, false, true, 0))
									{
										if (!func_166())
										{
											task_look_at_entity(player_ped_id(), iLocal_58, -1, 0, 2);
											set_wanted_level_multiplier(0.1f);
											func_142();
											func_133(1);
										}
										bLocal_79 = true;
									}
									if (!is_ped_injured(iLocal_50[0]) && !is_ped_injured(iLocal_50[1]))
									{
										if (has_entity_been_damaged_by_entity(iLocal_50[0], player_ped_id(), true) || has_entity_been_damaged_by_entity(iLocal_50[1], player_ped_id(), true))
										{
											func_142();
											bLocal_79 = true;
										}
									}
									if (bLocal_79)
									{
										func_127();
									}
									if (!is_ped_injured(iLocal_58) && is_vehicle_driveable(iLocal_53, false))
									{
										if (is_ped_in_vehicle(iLocal_58, iLocal_53, false))
										{
											iLocal_103 = 1;
										}
									}
									if (bLocal_104)
									{
										if (is_vehicle_driveable(iLocal_53, false))
										{
											if (!is_entity_at_entity(player_ped_id(), iLocal_53, 150f, 150f, 150f, false, true, 0))
											{
												iLocal_47 = 9;
											}
										}
									}
								}
								if (func_126())
								{
									func_142();
									iLocal_47 = 3;
								}
								else if (func_143())
								{
									func_142();
									func_124();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_98)
								{
									case 0:
										iLocal_47 = 3;
										break;
									
									case 1:
										iLocal_47 = 3;
										break;
									
									case 3:
										iLocal_47 = 3;
										break;
									
									case 4:
										iLocal_47 = 3;
										break;
									
									case 5:
										if (is_ped_armed(player_ped_id(), 4))
										{
											iLocal_106 = 1;
											iLocal_49 = 9;
										}
										else
										{
											iLocal_49 = 13;
										}
										iLocal_47 = 1;
										break;
								}
								if (func_143())
								{
									switch (iLocal_48)
									{
										case 2:
											func_123();
											break;
										
										case 4:
											func_122();
											break;
										
										case 5:
											func_121();
											break;
										}
								}
								break;
							
							case 3:
								func_118();
								task_clear_look_at(player_ped_id());
								if (!is_ped_injured(iLocal_58))
								{
									play_pain(iLocal_58, 3, 0, 0);
									if (!is_ped_in_any_vehicle(iLocal_58, false))
									{
										if (!iLocal_85)
										{
											if (is_entity_playing_anim(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !is_ped_ragdoll(iLocal_58))
											{
												set_ragdoll_blocking_flags(iLocal_58, 16);
												open_sequence_task(&iLocal_102);
												task_play_anim(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0f, false, false, false);
												task_play_anim(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0f, false, false, false);
												close_sequence_task(iLocal_102);
												task_perform_sequence(iLocal_58, iLocal_102);
												clear_sequence_task(&iLocal_102);
												iLocal_85 = 1;
											}
											else
											{
												task_cower(iLocal_58, -1);
												iLocal_85 = 1;
											}
										}
										else if ((((!is_entity_playing_anim(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !is_entity_playing_anim(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !is_entity_playing_anim(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && get_script_task_status(iLocal_58, 474215631) != 0) && get_script_task_status(iLocal_58, 474215631) != 1)
										{
											iLocal_85 = 0;
										}
									}
									else if (is_vehicle_driveable(iLocal_53, false))
									{
										if (is_ped_in_vehicle(player_ped_id(), iLocal_53, false))
										{
											if (does_blip_exist(iLocal_88))
											{
												remove_blip(&iLocal_88);
											}
										}
									}
								}
								else
								{
									func_117();
								}
								if (!func_116())
								{
									if (iLocal_95 < get_game_timer())
									{
										if (func_115())
										{
											if (!is_ped_injured(iLocal_50[0]))
											{
												func_114(&uLocal_120, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!is_ped_injured(iLocal_50[1]))
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_95 = (get_game_timer() + get_random_int_in_range(4500, 5000));
									}
								}
								if (is_ped_injured(iLocal_50[0]))
								{
									if (does_blip_exist(iLocal_89[0]))
									{
										remove_blip(&(iLocal_89[0]));
									}
									func_113(&uLocal_120, 5);
								}
								else if (can_ped_see_hated_ped(iLocal_50[0], player_ped_id()) || is_entity_at_entity(iLocal_50[0], player_ped_id(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (does_blip_exist(iLocal_89[0]))
								{
									remove_blip(&(iLocal_89[0]));
								}
								if (is_ped_injured(iLocal_50[1]))
								{
									if (does_blip_exist(iLocal_89[1]))
									{
										remove_blip(&(iLocal_89[1]));
									}
									func_113(&uLocal_120, 4);
								}
								else if (can_ped_see_hated_ped(iLocal_50[1], player_ped_id()) || is_entity_at_entity(iLocal_50[1], player_ped_id(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (does_blip_exist(iLocal_89[1]))
								{
									remove_blip(&(iLocal_89[1]));
								}
								if (does_entity_exist(iLocal_50[0]) && does_entity_exist(iLocal_50[1]))
								{
									if (((has_entity_been_damaged_by_weapon(iLocal_50[0], joaat("weapon_stungun"), 0) && has_entity_been_damaged_by_weapon(iLocal_50[1], joaat("weapon_stungun"), 0)) || (is_ped_dead_or_dying(iLocal_50[0], true) && is_ped_dead_or_dying(iLocal_50[1], true))) || func_112())
									{
										if (does_blip_exist(iLocal_89[0]))
										{
											remove_blip(&(iLocal_89[0]));
										}
										if (does_blip_exist(iLocal_89[1]))
										{
											remove_blip(&(iLocal_89[1]));
										}
										if (!is_ped_injured(iLocal_58))
										{
											if (is_entity_at_entity(player_ped_id(), iLocal_58, 15f, 15f, 15f, false, true, 0))
											{
												if (!func_116())
												{
													func_114(&uLocal_120, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_64 = false;
													iLocal_76 = 1;
													clear_ragdoll_blocking_flags(iLocal_58, 16);
													clear_entity_last_damage_entity(iLocal_58);
													iLocal_47 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_64)
								{
									if (!is_ped_injured(iLocal_58))
									{
										if ((is_entity_playing_anim(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1) || is_entity_playing_anim(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && !is_ped_ragdoll(iLocal_58))
										{
											task_play_anim(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, false, false, false);
										}
										else
										{
											clear_ped_tasks(iLocal_58);
										}
										set_ped_group_member_passenger_index(iLocal_58, 0);
										set_ped_as_group_member(iLocal_58, func_111());
										set_ped_never_leaves_group(iLocal_58, true);
										func_110();
										bLocal_64 = true;
									}
								}
								if (!is_ped_injured(iLocal_58))
								{
									if (is_entity_playing_anim(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (get_entity_anim_current_time(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											clear_ped_tasks(iLocal_58);
										}
									}
								}
								if (!iLocal_66)
								{
									if (!func_116())
									{
										if (func_114(&uLocal_120, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_66 = 1;
										}
									}
								}
								else if (!iLocal_65)
								{
									if (!func_116())
									{
										if (func_109() == 0)
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_109() == 1)
										{
											func_114(&uLocal_120, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_65 = 1;
									}
								}
								if (bLocal_64)
								{
									if (!is_ped_injured(iLocal_58))
									{
										if (is_entity_at_entity(player_ped_id(), iLocal_58, 8f, 8f, 8f, false, true, 0) || is_ped_in_any_taxi(player_ped_id()))
										{
											if (does_blip_exist(iLocal_88))
											{
												remove_blip(&iLocal_88);
											}
										}
										else if (!does_blip_exist(iLocal_88))
										{
											iLocal_88 = func_107(iLocal_58, 0, 145);
										}
									}
								}
								if (!is_ped_injured(iLocal_50[0]))
								{
									if (can_ped_see_hated_ped(iLocal_50[0], player_ped_id()))
									{
										if (get_player_wanted_level(player_id()) < 2)
										{
										}
									}
								}
								if (!is_ped_injured(iLocal_50[1]))
								{
									if (can_ped_see_hated_ped(iLocal_50[1], player_ped_id()))
									{
										if (get_player_wanted_level(player_id()) < 2)
										{
										}
									}
								}
								if (iLocal_65 && func_106())
								{
									if (!func_116())
									{
										func_104();
										wait(0);
										func_114(&uLocal_120, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										set_ped_as_no_longer_needed(&(iLocal_50[0]));
										set_ped_as_no_longer_needed(&(iLocal_50[1]));
										if (!is_ped_injured(iLocal_58))
										{
											if (is_ped_in_group(iLocal_58))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_50)
												{
													if (does_entity_exist(iLocal_50[iVar0]))
													{
														set_ped_as_no_longer_needed(&(iLocal_50[iVar0]));
													}
													iVar0++;
												}
												set_wanted_level_multiplier(1f);
												iLocal_47 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_98();
								func_93();
								func_92();
								func_89();
								func_88();
								if (func_87(Local_67))
								{
									func_68(0);
									func_104();
									wait(0);
									func_114(&uLocal_120, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_66())
								{
									func_68(0);
									func_104();
									wait(0);
									func_114(&uLocal_120, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!is_ped_injured(iLocal_58))
								{
									if (is_entity_at_coord(player_ped_id(), Local_67, Global_22, true, true, 0) && is_entity_at_entity(iLocal_58, player_ped_id(), 8f, 8f, 8f, false, true, 0))
									{
										if (is_ped_in_group(iLocal_58))
										{
											if (does_blip_exist(iLocal_88))
											{
												remove_blip(&iLocal_88);
											}
											if (does_blip_exist(iLocal_90))
											{
												remove_blip(&iLocal_90);
											}
											if (does_blip_exist(iLocal_91))
											{
												remove_blip(&iLocal_91);
											}
											if (is_ped_in_group(iLocal_58))
											{
												remove_ped_from_group(iLocal_58);
											}
											if (func_106())
											{
												if (is_ped_in_any_vehicle(player_ped_id(), false))
												{
													bring_vehicle_to_halt(get_players_last_vehicle(), 5f, 2, false);
												}
												iLocal_47 = 6;
											}
											else
											{
												func_104();
												wait(0);
												func_114(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!is_ped_injured(iLocal_58))
												{
													open_sequence_task(&iLocal_102);
													task_look_at_entity(0, player_ped_id(), 5000, 2052, 2);
													task_follow_nav_mesh_to_coord(0, Local_68, 1f, -1, 0.25f, false, 38.9844f);
													task_start_scenario_in_place(0, "WORLD_HUMAN_SMOKING", 0, true);
													close_sequence_task(iLocal_102);
													task_perform_sequence(iLocal_58, iLocal_102);
													clear_sequence_task(&iLocal_102);
													set_ped_keep_task(iLocal_58, true);
												}
												func_35(func_109(), 1, 80, 0, 1);
												iLocal_47 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_34();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_117();
								break;
						}
						if (iLocal_116 && !iLocal_117)
						{
							if (iLocal_47 != 6)
							{
								if (is_synchronized_scene_running(iLocal_115))
								{
									if (get_synchronized_scene_phase(iLocal_115) > 0.85f)
									{
										if (is_vehicle_driveable(iLocal_53, false))
										{
											if (!is_ped_injured(iLocal_58))
											{
												if (!is_ped_in_vehicle(iLocal_58, iLocal_53, false))
												{
													if (!is_ped_ragdoll(iLocal_58))
													{
														clear_ped_tasks(iLocal_58);
														set_ped_into_vehicle(iLocal_58, iLocal_53, 2);
														set_ped_keep_task(iLocal_58, true);
														iLocal_117 = 1;
													}
													else
													{
														iLocal_117 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (does_entity_exist(iLocal_58))
							{
								delete_ped(&iLocal_58);
							}
							func_4();
						}
						if ((iLocal_47 != 0 && iLocal_47 != 6) && iLocal_47 != 7)
						{
							if (func_1())
							{
								iLocal_47 = 9;
							}
						}
						if (iLocal_47 == 4 || iLocal_47 == 5)
						{
							if (!is_ped_injured(iLocal_58))
							{
								if (!is_entity_at_entity(player_ped_id(), iLocal_58, 150f, 150f, 150f, false, true, 0) || has_entity_been_damaged_by_entity(iLocal_58, player_ped_id(), true))
								{
									task_smart_flee_ped(iLocal_58, player_ped_id(), 150f, -1, false, false);
									func_104();
									func_117();
								}
							}
						}
						if (iLocal_47 < 5)
						{
							set_all_random_peds_flee_this_frame(player_id());
						}
						if (is_ped_injured(iLocal_50[0]))
						{
							if (does_blip_exist(iLocal_89[0]))
							{
								remove_blip(&(iLocal_89[0]));
							}
						}
						if (is_ped_injured(iLocal_50[1]))
						{
							if (does_blip_exist(iLocal_89[1]))
							{
								remove_blip(&(iLocal_89[1]));
							}
						}
						if (is_ped_injured(iLocal_58))
						{
							if (does_blip_exist(iLocal_88))
							{
								remove_blip(&iLocal_88);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (does_entity_exist(iLocal_50[0]))
	{
		if (is_ped_injured(iLocal_50[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (does_entity_exist(iLocal_50[1]))
	{
		if (is_ped_injured(iLocal_50[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (does_entity_exist(iLocal_58))
	{
		if (is_ped_injured(iLocal_58))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_32198)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)
{
	Global_113372 = iParam0;
}

void func_4()
{
	while (func_116())
	{
		wait(0);
	}
	while (!func_33())
	{
		wait(0);
	}
	func_8(-1, 0);
	func_5();
	func_212();
}

void func_5()
{
	func_6();
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

void func_8(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_30(iParam0))
	{
		func_29(iParam0, iParam1);
		if (!func_28(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_3(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_13((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			presence_event_updatestat_int(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			presence_event_updatestat_int(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			presence_event_updatestat_int(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_10();
	}
}

void func_10()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					presence_event_updatestat_int(joaat("num_rndevents_completed"), Global_113109, 0);
					set_bit(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	stat_set_int(joaat("num_missions_completed"), Global_113122, true);
	stat_set_int(joaat("num_missions_available"), Global_113105, true);
	stat_set_int(joaat("num_minigames_completed"), Global_113123, true);
	stat_set_int(joaat("num_minigames_available"), Global_113106, true);
	stat_set_int(joaat("num_oddjobs_completed"), Global_113124, true);
	stat_set_int(joaat("num_oddjobs_available"), Global_113107, true);
	stat_set_int(joaat("num_rndpeople_completed"), Global_113125, true);
	stat_set_int(joaat("num_rndpeople_available"), Global_113108, true);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, true);
	stat_set_int(joaat("num_rndevents_available"), Global_113112, true);
	stat_set_int(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	stat_set_int(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	stat_set_float(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	stat_set_int(joaat("percent_story_missions"), Global_113129, true);
	stat_set_int(joaat("percent_ambient_missions"), Global_113130, true);
	stat_set_int(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_113386.f_10194.f_3853))
	{
		func_12(13, floor(Global_113386.f_10194.f_3853));
	}
	if (!datafile_is_save_pending())
	{
		if (!Global_78319)
		{
			if (func_11() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()
{
	return Global_31959;
}

int func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _get_achievement_progress(iParam0);
	if (iParam1 > iVar0)
	{
		return _set_achievement_progress(iParam0, iParam1);
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

int func_14()
{
	return Global_1574918;
}

int func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		set_bit(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_20();
	}
}

void func_20()
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

int func_21()
{
	func_22();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_22()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_26(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_25(player_ped_id());
			if (func_24(iVar0) && (!func_23(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_24(Global_113386.f_2363.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_29(int iParam0, int iParam1)
{
	set_bit(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_31()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, get_this_script_name(), 64);
	uVar1 = func_32(Var0);
	return uVar1;
}

int func_32(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (get_hash_key(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_33()
{
	return 1;
}

void func_34()
{
	switch (iLocal_118)
	{
		case 0:
			func_104();
			wait(0);
			func_114(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_118++;
			break;
		
		case 1:
			iLocal_118++;
			break;
		
		case 2:
			iLocal_118++;
			break;
		
		case 3:
			if (!is_ped_injured(iLocal_58))
			{
				open_sequence_task(&iLocal_102);
				task_look_at_entity(0, player_ped_id(), 5000, 2052, 2);
				task_follow_nav_mesh_to_coord(0, Local_68, 1f, -1, 0.25f, false, 38.9844f);
				task_start_scenario_in_place(0, "WORLD_HUMAN_SMOKING", 0, true);
				close_sequence_task(iLocal_102);
				task_perform_sequence(iLocal_58, iLocal_102);
				clear_sequence_task(&iLocal_102);
				set_ped_keep_task(iLocal_58, true);
			}
			iLocal_118++;
			break;
		
		case 4:
			func_35(func_109(), 1, 80, 0, 1);
			set_player_control(player_id(), true, 0);
			func_4();
			break;
	}
}

void func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_65(iParam0) == 3)
	{
		return;
	}
	if (func_65(iParam0) == 4)
	{
		return;
	}
	func_36(func_65(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		stat_get_int(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		stat_set_int(iVar1, iVar0, true);
	}
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_64();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_63(99, 1);
					func_62(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_62(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_62(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_48(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_45(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_45(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_62(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_62(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_62(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (get_hash_of_this_script_name())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_45(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_62(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_62(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_62(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_44(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_63(95, iParam3);
					break;
				
				case 1:
					func_63(97, iParam3);
					break;
				
				case 2:
					func_63(96, iParam3);
					break;
			}
			func_63(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_39(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_39(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_62(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_62(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_62(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_38(iParam0);
	if (Global_43052 == 15)
	{
		func_37(0);
	}
	return 1;
}

void func_37(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			stat_set_int(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			stat_set_int(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			stat_set_int(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_39(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_13(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_13(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_13(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_13(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_42(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_42(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_42(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_42(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_42(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_42(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!network_is_game_in_progress())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			clear_bit(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_41() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		clear_bit(&(Global_113386.f_20564.f_471), bParam0);
		clear_bit(&(Global_2359296[func_41() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		begin_text_command_thefeed_post("COUP_RED");
		add_text_component_substring_text_label(func_40(bParam0));
		end_text_command_thefeed_post_messagetext(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_40(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_41()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_43(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

void func_44(int iParam0)
{
	func_63(93, iParam0);
	func_63(29, iParam0);
	func_63(30, iParam0);
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_47(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_47(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_47(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_47(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = get_cloud_time_as_int();
		iVar1 = func_46(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = get_cloud_time_as_int();
		iVar3 = func_46(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = get_cloud_time_as_int();
		iVar5 = func_46(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = get_cloud_time_as_int();
		iVar7 = func_46(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = get_cloud_time_as_int();
		iVar9 = func_46(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = get_cloud_time_as_int();
		iVar11 = func_46(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!network_is_game_in_progress())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_41() /*5567*/].f_681.f_10, iParam0);
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_43(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	return _get_packed_stat_bool(iParam0, iParam1);
}

int func_48(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (has_achievement_been_passed(27))
	{
		return 0;
	}
	if (stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		stat_set_int(joaat("num_cash_spent"), iVar1, true);
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_49(27, 1);
	return 1;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_50(iParam0, iParam1);
}

int func_50(int iParam0, int iParam1)
{
	if (func_23(14) && !func_61(iParam0))
	{
		return 0;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_60(&Global_4541529))
	{
		if (func_58(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_51(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return 0;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_51(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (has_achievement_been_passed(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_61(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	if (func_57(uParam0) < 0f)
	{
		func_56(uParam0, 0);
	}
	func_54(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_52(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_52(var uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_61(iParam1))
	{
		return 0;
	}
	if (func_58(uParam0, iParam1))
	{
		return 0;
	}
	if (func_57(uParam0) < 0f)
	{
		func_56(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_53(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_53(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_54(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_55(uParam0, iVar0);
		iVar0++;
	}
	func_56(uParam0, (Global_4541528 - 0.5f));
}

void func_55(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_56(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_57(var uParam0)
{
	return uParam0->f_80;
}

bool func_58(var uParam0, int iParam1)
{
	return func_59(uParam0, iParam1) != -1;
}

int func_59(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_60(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	stat_set_int(iParam0, iVar0, true);
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		stat_get_int(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		stat_set_int(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_64()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_65(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_66()
{
	if (func_109() == 2)
	{
		if (func_67())
		{
			if (get_distance_between_coords(-1014.154f, 4881.411f, 245.0001f, get_entity_coords(get_player_ped(get_player_index()), false), true) < 400f)
			{
				if (!Global_32202)
				{
					trigger_music_event("AC_EN_ROUTE_CULT");
					Global_32202 = 1;
					if (!Global_32201)
					{
						Global_32201 = 1;
						return 1;
					}
				}
			}
			else if (Global_32202)
			{
				trigger_music_event("AC_LEFT_AREA");
				Global_32202 = 0;
			}
		}
	}
	return 0;
}

bool func_67()
{
	return Global_32197;
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_61)
		{
			if (func_71(&uLocal_120, "REHOMAU", &Local_63, &Local_62, 8, 0, 0))
			{
				iLocal_61 = 0;
			}
		}
	}
	else if (!iLocal_61 && is_scripted_conversation_ongoing())
	{
		Local_63 = { func_70() };
		Local_62 = { func_69() };
		func_124();
		iLocal_61 = 1;
	}
}

struct<6> func_69()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = get_current_scripted_conversation_line();
		iVar1 = (iVar1 + Global_22615);
		if (iVar1 > -1)
		{
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_70()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

bool func_71(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_72(sParam2, iParam4, 0);
}

int func_72(char* sParam0, int iParam1, bool bParam2)
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
					func_85();
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
		if (func_84(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_83();
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
				func_82();
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
				if (func_81())
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
			if (func_80())
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
			func_79();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_78();
		func_73();
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
		func_85();
	}
	return 0;
}

void func_73()
{
	if (!func_74())
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

int func_74()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_77())
	{
		return 0;
	}
	if (func_75(player_id()))
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

bool func_75(int iParam0)
{
	return func_76(iParam0, 20);
}

var func_76(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_77()
{
	return -1;
}

void func_78()
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

void func_79()
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

int func_80()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
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

void func_82()
{
	if (func_23(14))
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
		Global_20266 = func_109();
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

void func_83()
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

bool func_84(int iParam0, int iParam1)
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

void func_85()
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_87(struct<3> Param0)
{
	if (func_109() == 2)
	{
		if (func_67() && !Global_32200)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = vdist(get_entity_coords(player_ped_id(), true), Param0);
			}
			if (vdist(get_entity_coords(player_ped_id(), true), Param0) > (fLocal_45 + 200f) || get_distance_between_coords(-1014.154f, 4881.411f, 245.0001f, get_entity_coords(get_player_ped(get_player_index()), false), true) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_88()
{
	if (!is_ped_injured(iLocal_58))
	{
		if (!iLocal_73)
		{
			if (!is_entity_dead(get_players_last_vehicle(), false))
			{
				if (!is_ped_in_vehicle(player_ped_id(), get_players_last_vehicle(), true) && is_ped_in_vehicle(iLocal_58, get_players_last_vehicle(), false))
				{
					func_68(0);
					func_104();
					wait(0);
					func_114(&uLocal_120, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_73 = 1;
				}
			}
		}
		else if (!is_entity_dead(get_players_last_vehicle(), false))
		{
			if (is_ped_in_vehicle(player_ped_id(), get_players_last_vehicle(), false) && is_ped_in_vehicle(iLocal_58, get_players_last_vehicle(), false))
			{
				iLocal_73 = 0;
			}
		}
		if (!iLocal_74)
		{
			if (is_ped_jacking(player_ped_id()))
			{
				func_68(0);
				func_104();
				wait(0);
				func_114(&uLocal_120, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_74 = 1;
			}
		}
		else if (!is_ped_jacking(player_ped_id()))
		{
			iLocal_74 = 0;
		}
		if (!iLocal_75)
		{
			if (is_ped_shooting(player_ped_id()))
			{
				func_68(0);
				func_104();
				wait(0);
				func_114(&uLocal_120, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_75 = 1;
			}
		}
		else if (is_ped_shooting(player_ped_id()))
		{
			iLocal_75 = 0;
		}
	}
}

void func_89()
{
	if (!func_90())
	{
		func_68(1);
	}
	if (!func_116())
	{
		switch (iLocal_96)
		{
			case 0:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 1:
				func_114(&uLocal_120, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 2:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 3:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 4:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 5:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 6:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 7:
				func_114(&uLocal_120, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 8:
				if (func_109() == 0)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_109() == 1)
				{
					func_114(&uLocal_120, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 9:
				func_114(&uLocal_120, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_96++;
				break;
			}
	}
}

int func_90()
{
	if (((((((((func_91("REHOM_QM") || func_91("REHOM_GETOUT")) || func_91("REHOM_SHOOT")) || func_91("REHOM_JACK")) || func_91("REHOM_WRONG")) || func_91("REHOM_CULT")) || func_91("REHOM_STOP")) || func_91("REHOM_NOVEH")) || func_91("REHOM_UNS1")) || func_91("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_91(char* sParam0)
{
	var uVar0;
	
	if (func_116())
	{
		MemCopy(&uVar0, {func_70()}, 4);
		if (are_strings_equal(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_92()
{
	if (!is_ped_injured(iLocal_58))
	{
		if (is_ped_on_foot(iLocal_58))
		{
			if (!iLocal_108)
			{
				iLocal_109 = get_game_timer();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = get_game_timer();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
		if ((iLocal_110 - iLocal_109) > 180000)
		{
			if (is_ped_in_group(iLocal_58))
			{
				remove_ped_from_group(iLocal_58);
				func_114(&uLocal_120, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_117();
			}
		}
	}
}

void func_93()
{
	if (is_ped_stopped(player_ped_id()))
	{
		if (!iLocal_111)
		{
			iLocal_113 = get_game_timer();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_114 = get_game_timer();
		}
	}
	else
	{
		iLocal_114 = 0;
		iLocal_111 = 0;
		iLocal_112 = 0;
	}
	if ((iLocal_114 - iLocal_113) > 50000 && !iLocal_112)
	{
		func_68(0);
		func_104();
		wait(0);
		func_114(&uLocal_120, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_112 = 1;
	}
	if ((iLocal_114 - iLocal_113) > 60000 && iLocal_112)
	{
		if (!is_ped_injured(iLocal_58))
		{
			task_smart_flee_ped(iLocal_58, player_ped_id(), 150f, -1, false, false);
			func_94(iLocal_58, 120000, 0);
			set_ped_keep_task(iLocal_58, true);
			if (is_ped_in_group(iLocal_58))
			{
				remove_ped_from_group(iLocal_58);
			}
		}
		func_117();
	}
}

int func_94(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = func_97(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_96(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_95();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_43998[iVar2 /*5*/] = 0;
	Global_43998[iVar2 /*5*/].f_1 = iParam0;
	Global_43998[iVar2 /*5*/].f_2 = iParam1;
	Global_43998[iVar2 /*5*/].f_3 = iParam1;
	Global_43998[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == player_ped_id())
	{
		Global_44236 = 1;
	}
	Global_43996++;
	return 1;
}

int func_95()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_96(int iParam0)
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

int func_97(int iParam0)
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
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_98()
{
	if (!is_ped_injured(iLocal_58))
	{
		if (is_entity_at_entity(player_ped_id(), iLocal_58, 8f, 8f, 8f, false, true, 0) || is_ped_in_any_taxi(player_ped_id()))
		{
			if (does_blip_exist(iLocal_88))
			{
				remove_blip(&iLocal_88);
			}
			if (!is_ped_in_group(iLocal_58))
			{
				set_ped_as_group_member(iLocal_58, get_player_group(player_id()));
				set_ped_group_member_passenger_index(iLocal_58, 0);
			}
			if (!is_player_wanted_level_greater(player_id(), 0))
			{
				if (!does_blip_exist(iLocal_90))
				{
					iLocal_90 = func_102(Local_67, 1);
				}
				if (is_ped_in_any_taxi(player_ped_id()))
				{
					if (!does_blip_exist(iLocal_90))
					{
						iLocal_90 = func_102(Local_67, 1);
					}
				}
				if (func_109() == 2 && !func_101())
				{
					if (!does_blip_exist(iLocal_91))
					{
						iLocal_91 = func_102(Local_69, 0);
						set_blip_sprite(iLocal_91, 269);
						func_99();
					}
				}
			}
		}
		else
		{
			if (!does_blip_exist(iLocal_88))
			{
				iLocal_88 = func_107(iLocal_58, 0, 145);
			}
			if (does_blip_exist(iLocal_90))
			{
				remove_blip(&iLocal_90);
			}
		}
	}
}

void func_99()
{
	if (func_109() == 2)
	{
		if (!Global_32199)
		{
			func_100("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_100(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

int func_101()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_102(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(Param0);
	set_blip_scale(iVar0, func_103(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, bParam1);
	return iVar0;
}

float func_103(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_104()
{
	Global_20471 = 0;
	func_105();
}

void func_105()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
}

int func_106()
{
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iLocal_86 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (is_vehicle_driveable(iLocal_86, false))
		{
			if (!is_ped_injured(iLocal_58))
			{
				if (is_ped_sitting_in_vehicle(iLocal_58, iLocal_86))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_108(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_108(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_103(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_103(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_103(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_109()
{
	func_22();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_110()
{
	if (!func_101())
	{
		if (func_109() == 2)
		{
			Global_32197 = 1;
		}
	}
}

int func_111()
{
	return get_player_group(get_player_index());
}

int func_112()
{
	if (does_entity_exist(iLocal_53))
	{
		if (((is_ped_in_vehicle(player_ped_id(), iLocal_53, false) && is_ped_in_vehicle(iLocal_58, iLocal_53, false)) && !is_ped_in_vehicle(iLocal_50[0], iLocal_53, false)) && !is_ped_in_vehicle(iLocal_50[1], iLocal_53, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_114(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_72(sParam2, iParam3, 0);
}

int func_115()
{
	if (BitTest(get_random_int_in_range(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

void func_117()
{
	func_212();
}

void func_118()
{
	if (!iLocal_77)
	{
		if (!is_ped_injured(iLocal_50[0]))
		{
			set_ped_combat_movement(iLocal_50[0], 0);
			clear_ped_tasks(iLocal_50[0]);
			open_sequence_task(&iLocal_102);
			task_clear_look_at(0);
			task_combat_ped(0, player_ped_id(), 0, 16);
			close_sequence_task(iLocal_102);
			task_perform_sequence(iLocal_50[0], iLocal_102);
			clear_sequence_task(&iLocal_102);
			set_ped_keep_task(iLocal_50[0], true);
			if (does_blip_exist(iLocal_89[0]))
			{
				set_blip_as_friendly(iLocal_89[0], false);
			}
			settimerb(0);
			iLocal_77 = 1;
		}
		else
		{
			settimerb(500);
			iLocal_77 = 1;
		}
	}
	if (!iLocal_78)
	{
		if (does_blip_exist(iLocal_89[1]))
		{
			set_blip_as_friendly(iLocal_89[1], false);
		}
		func_104();
		wait(0);
		if (!is_ped_injured(iLocal_50[1]))
		{
			func_119(iLocal_50[1], "GENERIC_INSULT_HIGH", 24);
			set_ped_combat_movement(iLocal_50[1], 2);
			if ((is_entity_playing_anim(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) || is_synchronized_scene_running(iLocal_115)) && !is_ped_ragdoll(iLocal_50[1]))
			{
				set_ragdoll_blocking_flags(iLocal_50[1], 16);
				open_sequence_task(&iLocal_102);
				task_play_anim(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0f, false, false, false);
				task_combat_ped(0, player_ped_id(), 0, 16);
				close_sequence_task(iLocal_102);
				task_perform_sequence(iLocal_50[1], iLocal_102);
				clear_sequence_task(&iLocal_102);
				set_ped_keep_task(iLocal_50[1], true);
				iLocal_78 = 1;
			}
			else
			{
				task_combat_ped(iLocal_50[1], player_ped_id(), 0, 16);
				set_ped_keep_task(iLocal_50[1], true);
				iLocal_78 = 1;
			}
		}
	}
	else if (!is_ped_injured(iLocal_50[1]))
	{
		if (((!is_entity_playing_anim(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) && !is_entity_playing_anim(iLocal_50[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && get_script_task_status(iLocal_50[1], 780511057) != 0) && get_script_task_status(iLocal_50[1], 780511057) != 1)
		{
			iLocal_78 = 1;
		}
	}
}

void func_119(int iParam0, char* sParam1, int iParam2)
{
	play_ped_ambient_speech_native(iParam0, sParam1, func_120(iParam2), 1);
}

int func_120(int iParam0)
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

void func_121()
{
	iLocal_47 = 3;
}

void func_122()
{
	func_104();
	wait(0);
	func_114(&uLocal_120, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_47 = 3;
}

void func_123()
{
	iLocal_47 = 3;
}

void func_124()
{
	Global_20471 = 0;
	func_125();
}

void func_125()
{
	if (is_scripted_conversation_ongoing())
	{
		restart_scripted_conversation();
		Global_22616 = 0;
		stop_scripted_conversation(true);
		Global_21605 = 6;
		return;
	}
}

int func_126()
{
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (is_entity_dead(iLocal_50[iLocal_92], false))
		{
			if (has_entity_been_damaged_by_entity(iLocal_50[iLocal_92], player_ped_id(), true))
			{
				return 1;
			}
		}
		iLocal_92++;
	}
	return 0;
}

void func_127()
{
	iLocal_94 = get_game_timer();
	if (!bLocal_104)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_93 = get_game_timer();
					iLocal_49 = 1;
				}
				break;
			
			case 1:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_93 = get_game_timer();
					iLocal_49 = 2;
				}
				break;
			
			case 2:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 6000)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = get_game_timer();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_114(&uLocal_120, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_93 = get_game_timer();
					iLocal_49 = 4;
				}
				break;
			
			case 4:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 5500)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = get_game_timer();
						iLocal_49 = 5;
					}
				}
				break;
			
			case 5:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (!iLocal_83 && timera() > 5000)
				{
					open_sequence_task(&iLocal_102);
					task_look_at_entity(0, iLocal_58, -1, 2054, 2);
					task_turn_ped_to_face_entity(0, iLocal_58, -1);
					close_sequence_task(iLocal_102);
					task_perform_sequence(iLocal_50[0], iLocal_102);
					set_ped_keep_task(iLocal_50[0], true);
					iLocal_83 = 1;
				}
				if ((iLocal_94 - iLocal_93) > 3000 || iLocal_82)
				{
					if (((is_vehicle_driveable(iLocal_53, false) && !is_ped_injured(iLocal_50[0])) && !is_ped_injured(iLocal_50[1])) && !is_ped_injured(iLocal_58))
					{
						if (is_synchronized_scene_running(iLocal_115))
						{
							if (get_synchronized_scene_phase(iLocal_115) > 0.98f)
							{
								if (!func_116())
								{
									if (is_ped_facing_ped(iLocal_50[0], iLocal_58, 10f))
									{
										if (func_114(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											task_clear_look_at(iLocal_50[0]);
											iLocal_115 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
											attach_synchronized_scene_to_entity(iLocal_115, iLocal_53, 0);
											task_synchronized_scene(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
											task_synchronized_scene(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
											task_synchronized_scene(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
											play_entity_anim(iLocal_53, "exit_car", "random@homelandsecurity", 4f, false, false, false, 0f, 0);
											iLocal_116 = 1;
											iLocal_93 = get_game_timer();
											iLocal_49 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_130())
				{
					iLocal_49 = 15;
				}
				break;
			
			case 15:
				if (((is_vehicle_driveable(iLocal_53, false) && !is_ped_injured(iLocal_50[0])) && !is_ped_injured(iLocal_50[1])) && !is_ped_injured(iLocal_58))
				{
					if (is_synchronized_scene_running(iLocal_115))
					{
						if (!func_116())
						{
							if (is_ped_facing_ped(iLocal_50[0], iLocal_58, 10f))
							{
								if (func_114(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									task_clear_look_at(iLocal_50[0]);
									iLocal_115 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
									attach_synchronized_scene_to_entity(iLocal_115, iLocal_53, 0);
									task_synchronized_scene(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
									task_synchronized_scene(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
									task_synchronized_scene(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
									play_entity_anim(iLocal_53, "exit_car", "random@homelandsecurity", 2f, false, false, false, 0f, 0);
									iLocal_116 = 1;
									iLocal_93 = get_game_timer();
									iLocal_49 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_128();
				if (is_synchronized_scene_running(iLocal_115))
				{
					if (get_synchronized_scene_phase(iLocal_115) > 0.45f)
					{
						if ((is_vehicle_driveable(iLocal_53, false) && !is_ped_injured(iLocal_58)) && !is_ped_injured(iLocal_50[0]))
						{
						}
					}
				}
				if (is_synchronized_scene_running(iLocal_115))
				{
					if (get_synchronized_scene_phase(iLocal_115) > 0.9f)
					{
						if (is_vehicle_driveable(iLocal_53, false))
						{
							if (!is_ped_injured(iLocal_50[0]))
							{
								task_enter_vehicle(iLocal_50[0], iLocal_53, -1, -1, 1f, 9, 0);
								iLocal_49 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_128();
				if (is_synchronized_scene_running(iLocal_115))
				{
					if (get_synchronized_scene_phase(iLocal_115) > 0.95f)
					{
						if (is_vehicle_driveable(iLocal_53, false))
						{
							if (!is_ped_injured(iLocal_50[1]))
							{
								task_enter_vehicle(iLocal_50[1], iLocal_53, -1, 0, 1f, 9, 0);
								set_ped_keep_task(iLocal_50[1], true);
								iLocal_49 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_128();
				if ((is_vehicle_driveable(iLocal_53, false) && !is_ped_injured(iLocal_50[0])) && !is_ped_injured(iLocal_50[1]))
				{
					if ((is_ped_sitting_in_vehicle(iLocal_58, iLocal_53) && is_ped_sitting_in_vehicle(iLocal_50[0], iLocal_53)) && is_ped_sitting_in_vehicle(iLocal_50[1], iLocal_53))
					{
						task_vehicle_drive_wander(iLocal_50[0], iLocal_53, 15f, 786468);
						set_vehicle_siren(iLocal_53, true);
						bLocal_104 = true;
					}
				}
				break;
			
			case 9:
				open_sequence_task(&iLocal_102);
				task_clear_look_at(0);
				task_look_at_entity(0, player_ped_id(), 20000, 0, 2);
				task_aim_gun_at_entity(0, player_ped_id(), -1, false);
				close_sequence_task(iLocal_102);
				if (!is_ped_injured(iLocal_50[0]))
				{
					task_perform_sequence(iLocal_50[0], iLocal_102);
				}
				clear_sequence_task(&iLocal_102);
				if (!iLocal_80)
				{
					if (is_ped_armed(player_ped_id(), 4) && !is_ped_armed(player_ped_id(), 3))
					{
						func_104();
						wait(0);
						func_114(&uLocal_120, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (is_ped_armed(player_ped_id(), 3) && !is_ped_armed(player_ped_id(), 4))
					{
						func_104();
						wait(0);
						if (!is_ped_injured(iLocal_50[0]))
						{
							func_119(iLocal_50[0], "GUN_COOL", 24);
						}
					}
					iLocal_80 = 1;
					iLocal_100 = get_game_timer();
				}
				iLocal_49 = 10;
				break;
			
			case 10:
				if (is_ped_armed(player_ped_id(), 6) && is_entity_at_entity(player_ped_id(), iLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_101 = get_game_timer();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 6000 && is_ped_armed(player_ped_id(), 6)) && !iLocal_81)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_100 = get_game_timer();
						iLocal_81 = 1;
					}
					iLocal_49 = 11;
				}
				break;
			
			case 11:
				if (is_ped_armed(player_ped_id(), 6) && is_entity_at_entity(player_ped_id(), iLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_101 = get_game_timer();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 9000 && is_ped_armed(player_ped_id(), 6)) || iLocal_106)
				{
					if (func_114(&uLocal_120, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_49 = 12;
					}
				}
				break;
			
			case 12:
				if (is_ped_armed(player_ped_id(), 6))
				{
					iLocal_101 = get_game_timer();
				}
				else
				{
					iLocal_49 = 13;
				}
				if ((iLocal_101 - iLocal_100) > 13000)
				{
					iLocal_47 = 3;
				}
				break;
			
			case 13:
				if (!is_ped_injured(iLocal_50[0]))
				{
					open_sequence_task(&iLocal_102);
					task_clear_look_at(0);
					task_look_at_entity(0, player_ped_id(), -1, 2052, 4);
					task_turn_ped_to_face_entity(0, player_ped_id(), -1);
					close_sequence_task(iLocal_102);
					task_perform_sequence(iLocal_50[0], iLocal_102);
					clear_sequence_task(&iLocal_102);
				}
				if (iLocal_107)
				{
					if (!is_ped_injured(iLocal_50[1]))
					{
						if (!is_ped_injured(iLocal_58))
						{
							if (get_script_task_status(iLocal_50[1], 1785177548) != 1)
							{
								open_sequence_task(&iLocal_102);
								task_clear_look_at(0);
								task_turn_ped_to_face_entity(0, iLocal_58, 0);
								task_look_at_entity(0, iLocal_58, 20000, 0, 2);
								task_follow_to_offset_of_entity(0, iLocal_58, -1f, 0f, 0f, 1f, -1, 0.1f, true);
								close_sequence_task(iLocal_102);
								task_perform_sequence(iLocal_50[1], iLocal_102);
								clear_sequence_task(&iLocal_102);
							}
						}
						else if (get_script_task_status(iLocal_50[1], 1785177548) != 1)
						{
							open_sequence_task(&iLocal_102);
							task_clear_look_at(0);
							task_turn_ped_to_face_entity(0, player_ped_id(), 0);
							task_look_at_entity(0, player_ped_id(), 20000, 0, 2);
							close_sequence_task(iLocal_102);
							task_perform_sequence(iLocal_50[1], iLocal_102);
							clear_sequence_task(&iLocal_102);
						}
					}
					if (!is_ped_injured(iLocal_58))
					{
						if (get_script_task_status(iLocal_58, 1785177548) != 1)
						{
							task_seek_cover_from_ped(iLocal_58, player_ped_id(), -1, false);
							set_ped_keep_task(iLocal_58, true);
						}
					}
				}
				iLocal_49 = 14;
				break;
			
			case 14:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_130())
				{
					if (is_synchronized_scene_running(iLocal_115))
					{
						if (!iLocal_107)
						{
							if (!is_ped_injured(iLocal_50[1]))
							{
							}
							if (!is_ped_injured(iLocal_58))
							{
								task_seek_cover_from_ped(iLocal_58, player_ped_id(), -1, false);
								set_ped_keep_task(iLocal_58, true);
							}
							iLocal_107 = 1;
						}
					}
				}
				if (!is_ped_injured(iLocal_50[0]))
				{
					if (!func_116() && !iLocal_82)
					{
						if (func_115())
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_82 = 1;
					}
					iLocal_83 = 0;
					settimera(0);
					iLocal_93 = (get_game_timer() - 4500);
					iLocal_49 = 5;
				}
			}
	}
}

void func_128()
{
	if (!func_116())
	{
		if (is_vehicle_driveable(iLocal_53, false))
		{
			if (!is_ped_injured(iLocal_58))
			{
				if (is_ped_in_vehicle(iLocal_58, iLocal_53, false))
				{
					if (func_129(iLocal_58, 0) == 2)
					{
						if (iLocal_95 < get_game_timer())
						{
							func_114(&uLocal_120, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_95 = (get_game_timer() + get_random_int_in_range(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_129(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, bParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, bParam1);
			if (does_entity_exist(iVar0))
			{
				iVar1 = get_vehicle_model_number_of_seats(get_entity_model(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!is_vehicle_seat_free(iVar0, iVar3, false))
					{
						if (get_ped_in_vehicle_seat(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_130()
{
	if ((!is_ped_injured(iLocal_50[0]) && !is_ped_injured(iLocal_50[1])) && !is_ped_injured(iLocal_58))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			if ((is_entity_at_entity(player_ped_id(), iLocal_50[0], 1.5f, 1.5f, 5f, false, true, 2) || is_entity_at_entity(player_ped_id(), iLocal_50[1], 2.5f, 2.5f, 5f, false, true, 2)) || is_entity_at_entity(player_ped_id(), iLocal_58, 1.5f, 1.5f, 5f, false, true, 2))
			{
				return 1;
			}
		}
		else if ((is_entity_at_entity(player_ped_id(), iLocal_50[0], 0.5f, 0.5f, 5f, false, true, 1) || is_entity_at_entity(player_ped_id(), iLocal_50[1], 0.5f, 0.5f, 5f, false, true, 1)) || is_entity_at_entity(player_ped_id(), iLocal_58, 0.5f, 0.5f, 5f, false, true, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_131()
{
	if (!is_ped_injured(iLocal_50[1]))
	{
		if (is_entity_at_entity(player_ped_id(), iLocal_50[1], 6f, 6f, 6f, false, true, 0))
		{
			if (is_ped_facing_ped(iLocal_50[1], player_ped_id(), 120f))
			{
				if (!is_ped_armed(player_ped_id(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!is_ped_injured(iLocal_50[0]))
	{
		if (is_entity_at_entity(player_ped_id(), iLocal_50[0], 6f, 6f, 6f, false, true, 0))
		{
			if (!is_ped_armed(player_ped_id(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()
{
	if (!is_ped_injured(iLocal_50[1]))
	{
		if (is_entity_at_entity(player_ped_id(), iLocal_50[1], 6f, 6f, 6f, false, true, 1))
		{
			if (is_ped_facing_ped(iLocal_50[1], player_ped_id(), 120f))
			{
				if (is_ped_armed(player_ped_id(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!is_ped_injured(iLocal_50[0]))
	{
		if (is_entity_at_entity(player_ped_id(), iLocal_50[0], 6f, 6f, 6f, false, true, 1))
		{
			if (is_ped_facing_ped(iLocal_50[0], player_ped_id(), 120f))
			{
				if (is_ped_armed(player_ped_id(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	if (func_136())
	{
		Global_113376 = 1;
		Global_113373 = get_game_timer();
		if (func_16(Global_113375))
		{
			func_134(0);
		}
		set_mission_name(true, "RE_TITLE");
		if (iParam0 && func_16(Global_113375))
		{
			flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_100(func_135(iParam0), -1);
					Global_113386.f_24995.f_2++;
					set_bit(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!is_help_message_on_screen())
				{
					func_100(func_135(iParam0), -1);
					Global_113386.f_24995.f_3++;
					set_bit(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!is_help_message_on_screen())
				{
					func_100(func_135(iParam0), -1);
					Global_113386.f_24995.f_4++;
					set_bit(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_135(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_136()
{
	switch (func_137(&Global_32019, 0, 5, 0, get_id_of_this_thread()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_141(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		set_player_invincible(get_player_index(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_139(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
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

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_43052);
}

int func_140(int iParam0, int iParam1)
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

int func_141(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_142()
{
	if (does_blip_exist(iLocal_87))
	{
		remove_blip(&iLocal_87);
	}
	if (!does_blip_exist(iLocal_88))
	{
		if (!is_entity_dead(iLocal_58, false))
		{
			iLocal_88 = func_107(iLocal_58, 0, 145);
			show_height_on_blip(iLocal_88, false);
		}
	}
	else
	{
		show_height_on_blip(iLocal_88, true);
	}
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (!does_blip_exist(iLocal_89[iLocal_92]))
		{
			if (!is_entity_dead(iLocal_50[iLocal_92], false))
			{
				iLocal_89[iLocal_92] = func_107(iLocal_50[iLocal_92], 0, 145);
				show_height_on_blip(iLocal_89[iLocal_92], false);
			}
		}
		else
		{
			show_height_on_blip(iLocal_89[iLocal_92], true);
		}
		iLocal_92++;
	}
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_99)
	{
		if (is_projectile_in_area(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), true) || is_bullet_in_box(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), true))
		{
			iLocal_48 = 2;
			return 1;
		}
		if (!is_ped_injured(iLocal_50[0]) && !is_ped_injured(iLocal_50[1]))
		{
			if (is_entity_at_entity(iLocal_50[0], player_ped_id(), 20f, 20f, 20f, false, true, 0))
			{
				if (is_ped_armed(player_ped_id(), 7) || (is_ped_in_melee_combat(player_ped_id()) && is_entity_at_entity(iLocal_50[0], player_ped_id(), 6f, 6f, 6f, false, true, 0)))
				{
					if (((is_player_targetting_entity(player_id(), iLocal_50[0]) || is_player_free_aiming_at_entity(player_id(), iLocal_50[0])) || is_player_targetting_entity(player_id(), iLocal_50[1])) || is_player_free_aiming_at_entity(player_id(), iLocal_50[1]))
					{
						if (can_ped_see_hated_ped(iLocal_50[0], player_ped_id()) || can_ped_see_hated_ped(iLocal_50[1], player_ped_id()))
						{
							iLocal_48 = 2;
							return 1;
						}
					}
				}
			}
		}
		iVar0 = get_players_last_vehicle();
		if (does_entity_exist(iLocal_53))
		{
			if (!is_entity_dead(iLocal_53, false))
			{
				if (has_entity_been_damaged_by_entity(iLocal_53, player_ped_id(), true))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (is_ped_on_specific_vehicle(player_ped_id(), iLocal_53) && get_entity_speed(player_ped_id()) > 0.1f)
				{
					iLocal_48 = 2;
					return 1;
				}
				if (is_ped_in_vehicle(player_ped_id(), iLocal_53, false))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (is_vehicle_driveable(iVar0, false))
				{
					if (has_entity_been_damaged_by_entity(iLocal_53, iVar0, true))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
			else if (has_entity_been_damaged_by_entity(iLocal_53, player_ped_id(), true))
			{
				iLocal_48 = 2;
				return 1;
			}
		}
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			if (is_ped_in_model(player_ped_id(), joaat("towtruck")) || is_ped_in_model(player_ped_id(), joaat("towtruck2")))
			{
				iVar1 = get_vehicle_ped_is_in(player_ped_id(), false);
				if (!is_entity_dead(iLocal_53, false))
				{
					if (is_vehicle_attached_to_tow_truck(iVar1, iLocal_53))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
		}
		if (!is_ped_injured(iLocal_50[0]) || is_entity_dead(iLocal_50[0], false))
		{
			if (has_entity_been_damaged_by_entity(iLocal_50[0], player_ped_id(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (is_entity_touching_entity(player_ped_id(), iLocal_50[0]) && get_entity_speed(player_ped_id()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (is_vehicle_driveable(iVar0, false))
			{
				if (has_entity_been_damaged_by_entity(iLocal_50[0], iVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!is_ped_injured(iLocal_50[1]) || is_entity_dead(iLocal_50[1], false))
		{
			if (has_entity_been_damaged_by_entity(iLocal_50[1], player_ped_id(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (is_entity_touching_entity(player_ped_id(), iLocal_50[1]) && get_entity_speed(player_ped_id()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (is_vehicle_driveable(iVar0, false))
			{
				if (has_entity_been_damaged_by_entity(iLocal_50[1], iVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!is_entity_dead(iLocal_58, false))
		{
			if (has_entity_been_damaged_by_entity(iLocal_58, player_ped_id(), true))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (is_entity_touching_entity(player_ped_id(), iLocal_58))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (is_vehicle_driveable(iVar0, false))
			{
				if (has_entity_been_damaged_by_entity(iLocal_58, iVar0, true))
				{
					iLocal_48 = 4;
					return 1;
				}
			}
		}
		else if (has_entity_been_damaged_by_entity(iLocal_58, player_ped_id(), true))
		{
			iLocal_48 = 4;
			return 1;
		}
	}
	return 0;
}

void func_144()
{
	func_146(39, 1);
	func_146(40, 1);
	func_146(41, 1);
	func_146(42, 1);
	func_146(43, 1);
	func_146(44, 1);
	add_scenario_blocking_area(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, false, true, true, true);
	add_scenario_blocking_area(Local_68 - Vector(20f, 20f, 20f), Local_68 + Vector(20f, 20f, 20f), false, true, true, true);
	clear_area_of_peds(Local_59, 50f, 0);
	set_ped_paths_in_area(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	set_bit(&uLocal_97, 5);
	iLocal_58 = create_ped(26, iLocal_60, Local_59, 0f, true, true);
	set_blocking_of_non_temporary_events(iLocal_58, true);
	set_model_as_no_longer_needed(iLocal_60);
	set_ped_can_be_targetted(iLocal_58, false);
	set_ped_config_flag(iLocal_58, 185, true);
	set_ped_config_flag(iLocal_58, 206, true);
	set_ped_flee_attributes(iLocal_58, 2, false);
	stop_ped_speaking(iLocal_58, true);
	set_ambient_voice_name(iLocal_58, "REHOMGirl");
	set_ped_component_variation(iLocal_58, 0, 2, 1, 0);
	set_ped_component_variation(iLocal_58, 2, 0, 0, 0);
	set_ped_component_variation(iLocal_58, 3, 1, 4, 0);
	set_ped_component_variation(iLocal_58, 4, 0, 5, 0);
	set_ped_component_variation(iLocal_58, 6, 1, 0, 0);
	add_relationship_group("OFFICERS", &iLocal_119);
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		iLocal_50[iLocal_92] = create_ped(6, iLocal_56, Local_51[iLocal_92 /*3*/], fLocal_52[iLocal_92], true, true);
		set_blocking_of_non_temporary_events(iLocal_50[iLocal_92], true);
		set_model_as_no_longer_needed(iLocal_56);
		set_ped_relationship_group_hash(iLocal_50[iLocal_92], iLocal_119);
		set_ped_config_flag(iLocal_50[iLocal_92], 42, true);
		iLocal_92++;
	}
	give_weapon_to_ped(iLocal_50[0], joaat("weapon_pistol"), -1, true, true);
	give_weapon_to_ped(iLocal_50[1], joaat("weapon_pistol"), -1, false, true);
	set_relationship_between_groups(5, iLocal_119, joaat("player"));
	set_relationship_between_groups(1, iLocal_119, joaat("COP"));
	set_relationship_between_groups(1, joaat("COP"), iLocal_119);
	iLocal_53 = create_vehicle(iLocal_57, Local_54, fLocal_55, true, true, false);
	set_vehicle_model_is_suppressed(iLocal_57, true);
	set_vehicle_on_ground_properly(iLocal_53, 5f);
	set_vehicle_siren(iLocal_53, true);
	func_145(&uLocal_120, 5, iLocal_50[0], "ACULTMember1", 0, 1);
	func_145(&uLocal_120, 4, iLocal_50[1], "ACULTMember2", 0, 1);
	func_145(&uLocal_120, 3, iLocal_58, "REHOMGirl", 0, 1);
	if (func_109() == 0)
	{
		func_145(&uLocal_120, 0, player_ped_id(), "MICHAEL", 0, 1);
	}
	else if (func_109() == 1)
	{
		func_145(&uLocal_120, 1, player_ped_id(), "FRANKLIN", 0, 1);
	}
	iLocal_115 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
	attach_synchronized_scene_to_entity(iLocal_115, iLocal_53, 0);
	task_synchronized_scene(iLocal_58, iLocal_115, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1000f, 0);
	task_synchronized_scene(iLocal_50[0], iLocal_115, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1000f, 0);
	task_synchronized_scene(iLocal_50[1], iLocal_115, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1000f, 0);
	set_synchronized_scene_looped(iLocal_115, true);
}

void func_145(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_150(iParam0, 2, 1))
		{
			func_149(iParam0, 2, 1);
		}
	}
	else if (func_150(iParam0, 2, 1))
	{
		func_147(iParam0, 2, 1);
	}
}

void func_147(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		clear_bit(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_11() == 0)
		{
			iVar0 = func_46(func_148(iParam0), -1, 0);
			clear_bit(&iVar0, bParam1);
			func_42(func_148(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		clear_bit(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 11352;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

void func_149(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		set_bit(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_11() == 0)
		{
			iVar0 = func_46(func_148(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_42(func_148(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		set_bit(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

int func_150(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_11() == 0)
		{
			return BitTest(func_46(func_148(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_151()
{
	request_model(iLocal_60);
	request_model(iLocal_56);
	request_model(iLocal_57);
	request_anim_dict("random@homelandsecurity");
	if (((has_model_loaded(iLocal_60) && has_model_loaded(iLocal_56)) && has_model_loaded(iLocal_57)) && has_anim_dict_loaded("random@homelandsecurity"))
	{
		bLocal_72 = true;
	}
	else
	{
		request_model(iLocal_60);
		request_model(iLocal_56);
		request_model(iLocal_57);
		request_anim_dict("random@homelandsecurity");
	}
}

void func_152()
{
	iLocal_60 = joaat("a_f_y_tourist_01");
	iLocal_56 = joaat("a_m_o_acult_01");
	iLocal_57 = joaat("fugitive");
	Local_59 = { -174.0522f, 1905.611f, 197.0466f };
	Local_51[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_52[0] = 147.8596f;
	Local_51[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_52[1] = 164.5974f;
	Local_54 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_55 = 187.3899f;
	Local_67 = { 469.8768f, 2617.532f, 42.2566f };
	Local_68 = { 472.2393f, 2611.611f, 42.2676f };
	Local_69 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_71 = 1;
}

int func_153()
{
	if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
	{
		if (vdist2(get_entity_coords(player_ped_id(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (is_player_playing(player_id()))
	{
		if (func_24(func_109()))
		{
			iVar5 = func_21();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_155(iVar1, &Var0);
					fVar4 = get_distance_between_coords(get_entity_coords(player_ped_id(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_159(iParam0) };
	if (is_string_null_or_empty(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_159(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_160()
{
	if (func_163() && !func_164())
	{
		return 1;
	}
	if (func_162() && func_161())
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_113104 > 0;
}

int func_162()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_164()
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

int func_165()
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_164())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if ((Global_113375 == func_31() && get_random_event_flag()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_169(iParam0);
	_0x65D2EBB47E1CEC21(false);
	set_random_event_flag(true);
	Global_113372 = 0;
	func_168();
}

void func_168()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			set_vehicle_model_is_suppressed(get_entity_model(get_vehicle_ped_is_in(player_ped_id(), false)), true);
		}
		set_ped_config_flag(player_ped_id(), 32, false);
	}
}

void func_169(int iParam0)
{
	Global_113375 = iParam0;
}

int func_170(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
		{
			Var1 = { get_entity_coords(player_ped_id(), true) };
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_164())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_160())
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_24(func_109()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (is_player_playing(player_id()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_209(iParam1))
		{
			return 0;
		}
		if (func_24(func_109()))
		{
			if (func_208(func_109()) == 4 || func_208(func_109()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_109()))
		{
			if (!func_207(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_206(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((get_game_timer() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_205())
		{
			return 0;
		}
		if (get_mission_flag())
		{
			return 0;
		}
		if (get_random_event_flag())
		{
			return 0;
		}
		if (!func_196(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_195(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (is_valid_interior(get_interior_from_entity(player_ped_id())))
		{
			if ((get_interior_from_entity(player_ped_id()) == get_interior_at_coords(377.153f, -717.567f, 10.0536f) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(320.9934f, 265.2515f, 82.1221f)) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_195(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_209(30) && !func_195(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_109()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_194(iVar4))
				{
					if (func_172(iVar2))
					{
						if (!func_171(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), false), Var3) < (210f * 210f))
							{
								if (func_109() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_171(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_173(iVar0);
}

int func_173(int iParam0)
{
	return func_174(iParam0, 1);
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_194(iParam0))
	{
		return 0;
	}
	func_175(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_176(func_187(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_186(iParam0, iParam1))
	{
		iVar0 = func_185(iParam1);
		iVar1 = func_183(iParam0);
		iVar2 = (func_183(iParam0) - func_183(iParam1));
		iVar3 = (func_185(iParam0) - func_185(iParam1));
		iVar4 = (func_182(iParam0) - func_182(iParam1));
		iVar5 = (func_181(iParam0) - func_181(iParam1));
		iVar6 = (func_180(iParam0) - func_180(iParam1));
		iVar7 = (func_179(iParam0) - func_179(iParam1));
	}
	else
	{
		iVar0 = func_185(iParam0);
		iVar1 = func_183(iParam1);
		iVar2 = (func_183(iParam1) - func_183(iParam0));
		iVar3 = (func_185(iParam1) - func_185(iParam0));
		iVar4 = (func_182(iParam1) - func_182(iParam0));
		iVar5 = (func_181(iParam1) - func_181(iParam0));
		iVar6 = (func_180(iParam1) - func_180(iParam0));
		iVar7 = (func_179(iParam1) - func_179(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_178(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_177(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_177(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_178(int iParam0, int iParam1)
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

int func_179(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_180(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_181(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_182(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_183(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_184(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_185(int iParam0)
{
	return iParam0 & 15;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_194(iParam1) || !func_194(iParam0))
	{
		return 1;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	var uVar0;
	
	func_193(&uVar0, get_clock_seconds());
	func_192(&uVar0, get_clock_minutes());
	func_191(&uVar0, get_clock_hours());
	func_190(&uVar0, get_clock_day_of_month());
	func_189(&uVar0, get_clock_month());
	func_188(&uVar0, get_clock_year());
	return uVar0;
}

void func_188(var uParam0, int iParam1)
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

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_185(*uParam0);
	iVar1 = func_183(*uParam0);
	if (iParam1 < 1 || iParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_180(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_181(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_183(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_185(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_182(iParam0);
	if (iVar5 < 1 || iVar5 > func_178(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_109();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), true) || func_204()) || Global_31962) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_ped_in_combat(player_ped_id(), 0)) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_202()) || func_201()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || get_player_wanted_level(player_id()) > 0) || func_84(8, -1)) || func_199()) || func_198()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_84(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), 0) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_204()) || Global_31962) || func_203()) || func_84(8, -1)) || func_201()) || func_200()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || func_204()) || func_201()) || Global_112433) || Global_31962) || func_203()) || Global_44238) || func_84(8, -1)) || func_200()) || func_198()) || func_199()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), true)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_204()) || Global_112433) || Global_31962) || func_203()) || func_84(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_100480.f_1;
}

int func_198()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
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

bool func_201()
{
	return Global_100493.f_376 > 0;
}

bool func_202()
{
	return Global_100493.f_375 > 0;
}

var func_203()
{
	return Global_1575058;
}

int func_204()
{
	if (!network_is_game_in_progress())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_82();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	return func_186(func_187(), iParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_109();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_208(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_210()
{
	int iVar0;
	
	if (Global_32110)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (is_vehicle_driveable(iVar0, false))
			{
				if (!is_ped_injured(get_ped_in_vehicle_seat(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211()
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
					set_bit(&iVar0, 0);
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

void func_212()
{
	int iVar0;
	
	if (iLocal_70)
	{
		func_226(0);
		if (Global_32201)
		{
			trigger_music_event("AC_STOP");
		}
		func_225();
		remove_scenario_blocking_areas();
		set_ped_paths_back_to_original(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		reset_wanted_level_difficulty(player_id());
		set_wanted_level_multiplier(1f);
		func_104();
		if (iLocal_71)
		{
			set_model_as_no_longer_needed(iLocal_60);
			set_model_as_no_longer_needed(iLocal_56);
			set_model_as_no_longer_needed(iLocal_57);
			set_vehicle_model_is_suppressed(iLocal_57, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (does_entity_exist(iLocal_50[iVar0]))
			{
				if (!is_ped_injured(iLocal_50[iVar0]))
				{
					if (is_ped_injured(player_ped_id()))
					{
						task_aim_gun_at_coord(iLocal_50[iVar0], func_224(player_id()), -1, false, false);
						set_ped_keep_task(iLocal_50[iVar0], true);
						if (!is_ped_injured(iLocal_58))
						{
							task_cower(iLocal_58, -1);
							set_ped_keep_task(iLocal_58, true);
						}
					}
					set_blocking_of_non_temporary_events(iLocal_50[iVar0], false);
				}
				set_ped_as_no_longer_needed(&(iLocal_50[iVar0]));
			}
			iVar0++;
		}
		if (does_entity_exist(iLocal_58))
		{
			if (!is_ped_injured(iLocal_58))
			{
				set_ped_config_flag(iLocal_58, 317, true);
				if (is_ped_in_group(iLocal_58))
				{
					remove_ped_from_group(iLocal_58);
				}
				if (!is_ped_in_any_vehicle(iLocal_58, false))
				{
					reset_ped_last_vehicle(iLocal_58);
				}
				set_blocking_of_non_temporary_events(iLocal_58, false);
			}
			set_ped_as_no_longer_needed(&iLocal_58);
		}
		if (does_entity_exist(iLocal_53))
		{
			set_vehicle_as_no_longer_needed(&iLocal_53);
		}
		enable_dispatch_service(5, true);
		if (is_player_playing(player_id()))
		{
			if (!is_player_control_on(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
	}
	func_213(-1);
	terminate_this_thread();
}

void func_213(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_166())
	{
		func_217(iParam0);
		set_mission_name(false, 0);
		Global_113377 = get_game_timer();
		func_216(30000);
		StringCopy(&cVar0, func_215(Global_113375, 1), 64);
		if (func_30(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		playstats_random_mission_done(&cVar0, Global_113372, (get_game_timer() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		clear_bit(&Global_113382, false);
	}
	func_214(&Global_32019);
	Global_113376 = 0;
	func_169(-1);
}

void func_214(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

char* func_215(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_216(int iParam0)
{
	Global_43603 = (get_game_timer() + iParam0);
}

void func_217(int iParam0)
{
	func_218(iParam0, 0, func_223(iParam0));
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_187();
	func_221(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &uVar0);
	Var1 = { func_219(&uVar0) };
}

struct<16> func_219(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_181(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_182(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_185(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_183(*uParam0), 64);
	return Var0;
}

void func_220(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_183(*uParam0);
	iVar1 = func_185(*uParam0);
	iVar2 = func_182(*uParam0);
	iVar3 = func_181(*uParam0);
	iVar4 = func_180(*uParam0);
	iVar5 = func_179(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_178(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_178(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_222(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_193(uParam0, iParam1);
	func_192(uParam0, iParam2);
	func_191(uParam0, iParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_188(uParam0, iParam6);
}

int func_223(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

Vector3 func_224(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

void func_225()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_226(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_146(iVar0, bParam0);
		iVar0++;
	}
}

