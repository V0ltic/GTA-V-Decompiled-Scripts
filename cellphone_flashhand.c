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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<2> Local_77 = { 0, 0 } ;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_63 = ((0.05f + 0.275f) - 0.01f);
	fLocal_65 = 0.73f;
	fLocal_66 = 0.55f;
	fLocal_67 = 0.73f;
	fLocal_68 = 0.45f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	network_set_script_is_safe_for_network_game();
	Global_20461 = 145;
	clear_bit(&Global_8137, 8);
	clear_bit(&Global_8136, 14);
	clear_bit(&Global_4541229, 3);
	clear_bit(&Global_8137, 10);
	clear_bit(&Global_8136, 17);
	clear_bit(&Global_8136, 9);
	clear_bit(&Global_8136, 26);
	clear_bit(&Global_8136, 23);
	clear_bit(&Global_8137, 24);
	clear_bit(&Global_8137, 25);
	clear_bit(&Global_8137, 27);
	clear_bit(&Global_8137, 26);
	clear_bit(&Global_8136, 30);
	Global_2825434 = 0;
	iLocal_116 = 0;
	draw_low_quality_photo_to_phone(false, false);
	script_is_moving_mobile_phone_offscreen(false);
	Global_20232 = 0;
	iLocal_74 = 0;
	Global_20210 = 0;
	Global_20250 = 0;
	Global_20251 = 0;
	func_122();
	Global_20197 = { Global_20229 };
	Global_20270 = 4;
	Global_20271 = 0;
	Global_8741 = 1;
	Global_20246 = Global_20270;
	if (Global_20248 == 0)
	{
		Global_20249 = 0;
		if (Global_78319)
		{
			if (func_121())
			{
				Global_20247 = request_scaleform_movie("cellphone_badger");
			}
			else
			{
				Global_20247 = request_scaleform_movie("cellphone_ifruit");
			}
			iLocal_85 = 1;
			if (iLocal_85 == 1)
			{
			}
		}
		else if (Global_20209)
		{
			Global_20254 = 1;
			Global_20247 = request_scaleform_movie("cellphone_prologue");
		}
		else
		{
			Global_20247 = request_scaleform_movie(&(Global_113386.f_14051[Global_20266 /*20*/]));
		}
		settimera(0);
		while (!has_scaleform_movie_loaded(Global_20247) && Global_20249 == 0)
		{
			wait(0);
			if (timera() > 20000)
			{
				Global_20249 = 1;
			}
			if (is_pc_version())
			{
				if (decor_exist_on(player_ped_id(), "Synched"))
				{
					if (timera() > 2000)
					{
						Global_20249 = 1;
					}
				}
			}
			if (Global_20265 == 1)
			{
				func_120();
			}
		}
		if (Global_20249 == 1)
		{
			if (has_scaleform_movie_loaded(Global_20247))
			{
				func_119(Global_20247, "SHUTDOWN_MOVIE");
			}
			wait(0);
			set_scaleform_movie_as_no_longer_needed(&Global_20247);
			Global_20207 = 0;
			Global_20248 = 0;
			Global_20462 = 0;
			if (Global_113386.f_14051.f_84 == 1)
			{
				Global_113386.f_14051.f_84 = 0;
				clear_floating_help(0, true);
			}
			Global_20210 = 1;
			Global_20266.f_1 = 3;
			func_118();
			Global_20254 = 0;
			destroy_mobile_phone();
			clear_bit(&Global_8136, 9);
			clear_bit(&Global_8136, 27);
			clear_bit(&Global_8136, 30);
			clear_bit(&Global_8137, 5);
			clear_bit(&Global_8137, 21);
			clear_bit(&Global_8138, 2);
			if (!is_entity_dead(player_ped_id(), false))
			{
				stop_ped_ringtone(player_ped_id());
			}
			if (is_entity_dead(player_ped_id(), false))
			{
				stop_ped_ringtone(player_ped_id());
			}
			Global_20464 = 0;
			Global_22665 = 0;
			Global_22664 = 0;
			Global_21618 = 0;
			func_116();
			func_114();
			Global_4541508 = 0;
			terminate_this_thread();
		}
		Global_20190 = 0.1f;
		Global_20191 = 0.38f;
		Global_20192 = 0.195f;
		Global_20193 = 0.05f;
		if ((is_xbox360_version() || func_113()) || is_pc_version())
		{
			get_hud_colour(18, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
			get_hud_colour(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
			get_hud_colour(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
		}
		else
		{
			if (!_is_japanese_version())
			{
				get_hud_colour(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
				get_hud_colour(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
				get_hud_colour(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
			}
			if (_is_japanese_version())
			{
				get_hud_colour(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
				get_hud_colour(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
				get_hud_colour(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_104), to_float(iLocal_105), to_float(iLocal_106), -1082130432);
			}
		}
		if (Global_20249 == 0)
		{
		}
		func_111();
		if (Global_78319)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
		}
		Global_20248 = 1;
	}
	Global_8139 = 99;
	func_110();
	if (is_player_playing(player_id()))
	{
		iLocal_96 = get_entity_health(player_ped_id());
	}
	if (is_radar_hidden())
	{
		Global_22619 = 1;
	}
	else
	{
		Global_22619 = 0;
	}
	func_112(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_20208 = 1;
	if (Global_78319)
	{
		Global_20466 = 0;
		if (func_121())
		{
			if (Global_1836488 == 1)
			{
				Global_4541505 = 4;
			}
			else
			{
				Global_4541505 = 2;
			}
		}
		else
		{
			Global_4541505 = func_107(2030, -1, 0);
		}
		if (Global_4541505 < 1 || Global_4541505 > 7)
		{
			Global_4541505 = 1;
		}
		func_112(Global_20247, "SET_THEME", to_float(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
		func_106();
		if (func_121())
		{
			if (Global_1836488 == 1)
			{
				Global_4541506 = 16;
			}
			else
			{
				Global_4541506 = 9;
			}
		}
		else
		{
			Global_4541506 = func_107(2029, -1, 0);
		}
		if (Global_4541506 == 0)
		{
			Var1 = { func_105(player_id()) };
			iVar2 = 0;
			if (network_have_user_content_privileges(0) == 0)
			{
			}
			if (Global_4541509 == 1)
			{
			}
			if ((network_clan_player_is_active(&Var1) && network_have_user_content_privileges(0)) && Global_4541509 == 0)
			{
				if (network_clan_get_emblem_txd_name(&Var1, &uVar0))
				{
				}
				else
				{
					iVar2 = 1;
				}
				if (iVar2 == 0)
				{
					begin_scaleform_movie_method(Global_20247, "SET_BACKGROUND_CREW_IMAGE");
					begin_text_command_scaleform_string("CELL_2000");
					add_text_component_substring_player_name(&uVar0);
					end_text_command_scaleform_string();
					end_scaleform_movie_method();
				}
				else
				{
					func_112(Global_20247, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_112(Global_20247, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_112(Global_20247, "SET_BACKGROUND_IMAGE", to_float(Global_4541506), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_20209)
		{
			Global_20466 = 0;
		}
		else if (Global_113386.f_14051.f_88 == 1 || Global_113386.f_14051.f_89 == 1)
		{
			Global_20466 = 0;
		}
		else
		{
			Global_20466 = 0;
		}
		func_112(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_8940 == 0)
		{
			func_112(Global_20247, "SET_BACKGROUND_IMAGE", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			set_mobile_phone_scale(575f);
		}
		func_106();
	}
	iLocal_86 = func_104();
	if (Global_20209 == 0)
	{
		func_92();
	}
	Global_20244 = 0;
	Global_20465 = 0;
	clear_bit(&Global_8136, 9);
	Global_2725398 = 0;
	if (func_87(0) && network_is_signed_online())
	{
		Global_2725398 = 1;
	}
	func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_85();
	func_84();
	func_83(1);
	play_sound_frontend(-1, "Pull_Out", &Global_20255, true);
	settimerb(0);
	while (Global_20266.f_1 < 6 && Global_20249 == 0)
	{
		wait(0);
		if (timerb() > 10000)
		{
			Global_20249 = 1;
		}
		if (Global_20266.f_1 < 4)
		{
			Global_20249 = 1;
		}
	}
	if (Global_20266.f_1 == 5 || Global_20266.f_1 == 6)
	{
		if (func_82(14))
		{
			func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
		}
		if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_112(Global_20247, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_112(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_20254)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_20254)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_20466 == 0)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else if (Global_78319)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else
		{
			if (Global_20465 == 1)
			{
				if (Global_20254)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			set_bit(&Global_8136, 17);
		}
		func_80();
	}
	Global_20252 = 1;
	func_79();
	if (network_is_game_in_progress())
	{
		iLocal_102 = get_network_time();
	}
	else
	{
		iLocal_97 = get_game_timer();
	}
	if (Global_20462 == 1)
	{
		if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_113386.f_14051.f_84 == 0)
			{
				Global_113386.f_14051.f_84 = 1;
				if (Global_20211 == 0)
				{
					fVar3 = 0.75f;
					fVar4 = 0.8f;
				}
				else
				{
					fVar3 = 0.65f;
					fVar4 = 0.77f;
				}
				if (fVar3 == fVar4)
				{
				}
				func_78("CELL_7052", 10000);
			}
		}
	}
	if (Global_78319 == 0)
	{
		iLocal_18 = get_game_timer() + 375;
	}
	if (func_77())
	{
		iLocal_79 = 1;
	}
	else
	{
		iLocal_79 = 0;
	}
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (is_ped_in_cover(player_ped_id(), false))
		{
			iLocal_80 = 1;
			if (func_77())
			{
				func_76();
			}
		}
		else
		{
			iLocal_80 = 0;
		}
	}
	if (is_pc_version())
	{
		if (Global_78319 == 0)
		{
			iLocal_99 = get_game_timer();
			iLocal_101 = 0;
		}
	}
	clear_bit(&Global_8138, 9);
	while (true)
	{
		wait(0);
		if (BitTest(Global_4541229, 24))
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6 || Global_20266.f_1 > 6)
				{
					clear_bit(&Global_4541229, 24);
					func_85();
					func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83(1);
					if (Global_20266.f_1 == 6)
					{
						func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_75())
		{
			disable_control_action(0, 114, true);
		}
		if (Global_78319 == 0)
		{
			if (iLocal_76)
			{
				if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
				{
					iLocal_76 = 0;
				}
			}
			if (Global_20266.f_1 > 4)
			{
				if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
				{
					if (!is_entity_dead(player_ped_id(), false))
					{
						if (func_74())
						{
							get_mobile_phone_position(&Local_77);
							if (Global_20212[Global_20211 /*3*/].f_1 != Local_77.f_1)
							{
								func_72();
							}
						}
						else
						{
							get_mobile_phone_position(&Local_77);
							if (Global_20219[Global_20211 /*3*/].f_1 != Local_77.f_1)
							{
								if (!func_75())
								{
								}
								if (_get_number_of_references_of_script_with_name_hash(joaat("appemail")) < 1)
								{
									func_70();
								}
							}
						}
						if (iLocal_80 == 0)
						{
							if (is_ped_in_cover(player_ped_id(), false))
							{
								iLocal_80 = 1;
								func_70();
								func_76();
							}
						}
						else if (!is_ped_in_cover(player_ped_id(), false))
						{
							iLocal_80 = 0;
							func_72();
							if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
							{
								if (Global_21605 != 2)
								{
									func_69();
								}
							}
						}
						if (iLocal_79 == 0)
						{
							if (func_77())
							{
								iLocal_79 = 1;
								if (is_ped_in_cover(player_ped_id(), false))
								{
									func_76();
								}
								func_72();
							}
						}
						else
						{
							if (get_ped_stealth_movement(player_ped_id()))
							{
								if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
								{
									disable_control_action(0, 26, true);
								}
							}
							if (func_77() == 0)
							{
								iLocal_79 = 0;
								func_70();
							}
						}
					}
				}
			}
		}
		if (Global_2725398 == 1)
		{
			if (!func_87(0) || !network_is_signed_online())
			{
				if (_get_number_of_references_of_script_with_name_hash(joaat("appcamera")) == 0)
				{
					if (Global_20266.f_1 > 3)
					{
						Global_20251 = 1;
						func_68();
						func_65(0);
						Global_2725398 = 0;
					}
				}
			}
		}
		if (Global_20467 == 0)
		{
			if ((Global_43052 != 15 || Global_8141 == 1) || func_64(0))
			{
				if (!Global_20465)
				{
					if (Global_20266.f_1 == 6)
					{
						Global_8142 = 42;
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_20467 = 1;
			}
		}
		else if ((Global_43052 == 15 && func_64(0) == 0) && Global_8141 == 0)
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6)
				{
					Global_8142 = 255;
					func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_20467 = 0;
		}
		if (Global_20468 == 0)
		{
			if (BitTest(Global_8137, 3))
			{
				if (!Global_20465)
				{
					if (Global_20266.f_1 == 6)
					{
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_20468 = 1;
			}
		}
		else if (!BitTest(Global_8137, 3))
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6)
				{
					func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_20468 = 0;
		}
		if (!is_pause_menu_active())
		{
			if (Global_20194.f_1 != Global_20212[Global_20211 /*3*/].f_1 || func_77())
			{
				if (Global_20266.f_1 > 3)
				{
					if (_get_number_of_references_of_script_with_name_hash(joaat("apptrackify")) == 0)
					{
						if (Global_78319)
						{
							if (Global_20266.f_1 == 9)
							{
								if (Global_21658 == 1 || BitTest(Global_8137, 23))
								{
									set_input_exclusive(0, Global_20235);
								}
							}
							else
							{
								set_input_exclusive(0, Global_20235);
							}
						}
						else
						{
							set_input_exclusive(0, Global_20235);
						}
					}
					if (_get_number_of_references_of_script_with_name_hash(joaat("appsecurohack")) == 0)
					{
						set_input_exclusive(0, Global_20236);
						if (BitTest(Global_8136, 17))
						{
							set_input_exclusive(0, Global_20237);
						}
					}
					if (!func_63() && _get_number_of_references_of_script_with_name_hash(joaat("appsecurohack")) == 0)
					{
						set_input_exclusive(0, Global_20238);
					}
				}
			}
			if (Global_20194.f_1 == Global_20212[Global_20211 /*3*/].f_1)
			{
			}
		}
		if (!_is_using_keyboard(2))
		{
			disable_control_action(0, 140, true);
			disable_control_action(0, 141, true);
		}
		if (!is_pause_menu_active())
		{
			if (!Global_75485)
			{
				if (!func_75())
				{
					set_input_exclusive(0, 180);
					set_input_exclusive(0, 181);
					enable_control_action(0, 180, true);
					enable_control_action(0, 181, true);
				}
				set_input_exclusive(0, Global_20240);
				if (!func_63())
				{
					set_input_exclusive(0, Global_20241);
				}
				if (Global_20266.f_1 > 4)
				{
					set_input_exclusive(0, Global_20243);
				}
			}
		}
		if (func_62(2, Global_20234, 0))
		{
			iLocal_94 = 1;
			settimera(0);
		}
		if (iLocal_75 == 1)
		{
			if (!is_control_pressed(2, Global_20235))
			{
				Global_8140 = 1;
				iLocal_75 = 0;
			}
			if (!Global_20266.f_1 > 3)
			{
				iLocal_75 = 0;
			}
		}
		if (iLocal_94)
		{
			if (is_control_pressed(2, Global_20234))
			{
				if (timera() > 5000)
				{
					Global_20266.f_1 = 3;
					func_60();
				}
			}
			else
			{
				iLocal_94 = 0;
			}
		}
		Global_8744 = get_game_timer();
		if (Global_20253)
		{
			func_79();
			Global_20252 = 1;
			Global_20253 = 0;
		}
		if (Global_20464 == 0)
		{
			hide_hud_component_this_frame(6);
			hide_hud_component_this_frame(7);
			hide_hud_component_this_frame(8);
			hide_hud_component_this_frame(9);
			func_53();
			func_52();
			set_text_render_id(iLocal_83);
			if (Global_20252 == 1)
			{
				set_script_gfx_draw_order(4);
				if (Global_20209)
				{
					draw_scaleform_movie(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_scaleform_movie(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				func_110();
			}
			if (Global_20206 == 1)
			{
				if (Global_20266.f_1 > 3)
				{
					func_51();
				}
			}
			else if (Global_20266.f_1 > 3)
			{
				if (Global_4541508 == 1)
				{
					func_50();
				}
				if (BitTest(Global_8137, 25))
				{
					if (Global_78319 == 1)
					{
						func_49();
					}
				}
				else if (!BitTest(Global_8137, 24))
				{
					if (BitTest(Global_8137, 26))
					{
						if (func_62(2, Global_20233, 0))
						{
							set_bit(&Global_8137, 25);
							clear_bit(&Global_8137, 26);
							clear_bit(&Global_8138, 2);
						}
					}
				}
				else if (Global_78319 == 1)
				{
					func_48();
				}
			}
		}
		if (iLocal_74)
		{
			if (Global_20266.f_1 == 6)
			{
				func_44();
			}
		}
		else if (!BitTest(Global_8136, 23))
		{
			if (Global_20266.f_1 == 5 || Global_20266.f_1 == 6)
			{
				if (Global_20464 == 0)
				{
					if (_get_number_of_references_of_script_with_name_hash(joaat("appcamera")) < 1 && _get_number_of_references_of_script_with_name_hash(joaat("appemail")) < 1)
					{
						if (Global_20209 == 0)
						{
							if (BitTest(Global_8136, 14))
							{
								if (!Global_78319)
								{
									if (iLocal_75 == 0)
									{
										if (!func_82(14))
										{
											func_43();
										}
										else if (Global_2725398)
										{
											func_42();
										}
									}
								}
								else if (BitTest(Global_8138, 9))
								{
									func_41();
								}
								else
								{
									func_24();
								}
							}
						}
						if (BitTest(Global_8136, 9))
						{
							func_22(0, 0, 1, 1);
						}
						else if (Global_22664 == 0)
						{
							if (!BitTest(Global_4541229, 3))
							{
								if (Global_78319)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_78319)
							{
								func_21();
							}
							if (!BitTest(Global_4541229, 3))
							{
								if (Global_22664 == 1)
								{
									if (BitTest(Global_4541229, 1))
									{
										if (BitTest(Global_8136, 14))
										{
											if (Global_78319)
											{
												func_22(7, 0, 1, 0);
											}
											else
											{
												Global_22665 = 0;
											}
											Global_22664 = 0;
											clear_bit(&Global_4541229, 1);
										}
									}
									else if (BitTest(Global_8136, 14))
									{
										func_22(7, 0, 1, 0);
										Global_22664 = 0;
									}
								}
								else
								{
									if (Global_22664 == 3)
									{
										func_22(1, 0, 1, 0);
										Global_22664 = 0;
									}
									if (Global_22664 == 2)
									{
										func_22(14, 0, 1, 0);
										Global_22664 = 0;
									}
									if (Global_22664 == 4)
									{
										func_22(23, 0, 1, 0);
										Global_22664 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (has_script_loaded(&(Global_8143[Global_20269 /*15*/].f_5)))
		{
			if (Global_20269 == 0)
			{
				if (_get_number_of_references_of_script_with_name_hash(Global_8143[Global_20269 /*15*/].f_9) == 0)
				{
					Global_20264 = start_new_script(&(Global_8143[Global_20269 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar5 = 0;
				if (Global_20269 == 23)
				{
					if (BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0)
					{
					}
				}
				if (Global_20269 == 2 || iVar5 == 1)
				{
					if (_get_number_of_references_of_script_with_name_hash(Global_8143[Global_20269 /*15*/].f_9) == 0)
					{
						Global_20264 = start_new_script(&(Global_8143[Global_20269 /*15*/].f_5), 4592);
					}
				}
				else if (_get_number_of_references_of_script_with_name_hash(Global_8143[Global_20269 /*15*/].f_9) == 0)
				{
					Global_20264 = start_new_script(&(Global_8143[Global_20269 /*15*/].f_5), 2552);
				}
			}
			set_script_as_no_longer_needed(&(Global_8143[Global_20269 /*15*/].f_5));
			Global_8139 = 99;
			clear_bit(&Global_8136, 23);
		}
		if (_is_using_keyboard(2))
		{
			if (is_pause_menu_active())
			{
				disable_control_action(2, 200, true);
			}
		}
		if (Global_20266.f_1 == 1)
		{
			func_9();
		}
		if (Global_20266.f_1 == 0)
		{
			func_9();
		}
		if (Global_20266.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_21618)
			{
				if (Global_20266.f_1 == 9)
				{
					if (Global_78319)
					{
						if (!BitTest(Global_8137, 31))
						{
							if (!BitTest(Global_8137, 27))
							{
								if (func_8())
								{
									if (!BitTest(Global_8136, 9))
									{
										if (func_62(2, Global_20238, 0))
										{
											if (!is_pc_version())
											{
												if (!Global_20265 == 1)
												{
													if (Global_20266.f_1 > 6)
													{
														set_bit(&Global_8137, 24);
														set_bit(&Global_8137, 27);
														clear_bit(&Global_8137, 26);
														clear_bit(&Global_8137, 25);
														set_bit(&(Global_2815059.f_1795), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_20249 == 1)
			{
				Global_20251 = 1;
				func_65(0);
			}
			if (Global_20250 == 1)
			{
				Global_20251 = 1;
				func_65(0);
			}
			if (Global_78319)
			{
				if (!BitTest(Global_8138, 0))
				{
					if (is_pause_menu_active() && !func_7())
					{
						if (Global_2821909.f_1 == 1)
						{
						}
						else
						{
							func_68();
							func_65(0);
						}
					}
				}
			}
			if (is_player_playing(player_id()))
			{
				if (is_entity_in_water(player_ped_id()))
				{
					if (get_entity_submerged_level(player_ped_id()) > 0.3f)
					{
						set_bit(&Global_8137, 4);
					}
					if (get_entity_submerged_level(player_ped_id()) == 1f)
					{
						if (BitTest(Global_4718592.f_37, 17) && (network_is_activity_session() || Global_1922883))
						{
							func_5(1, 1);
							set_bit(&Global_8136, 14);
						}
						else
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
				}
				if (func_82(14))
				{
					if ((get_entity_model(player_ped_id()) == Global_113386.f_28050[0 /*29*/] || get_entity_model(player_ped_id()) == Global_113386.f_28050[1 /*29*/]) || get_entity_model(player_ped_id()) == Global_113386.f_28050[2 /*29*/])
					{
						iLocal_117 = 0;
					}
					else if (is_ped_in_any_vehicle(player_ped_id(), false))
					{
						iLocal_117 = 1;
					}
				}
				if ((((((((((((((is_ped_in_any_train(player_ped_id()) || is_player_riding_train(player_id())) || is_ped_on_mount(player_ped_id())) || is_stunt_jump_in_progress()) || is_player_climbing(player_id())) || is_ped_jacking(player_ped_id())) || is_ped_in_cover(player_ped_id(), false)) || is_ped_hanging_on_to_vehicle(player_ped_id())) || _get_number_of_references_of_script_with_name_hash(joaat("michael1")) > 0) || Global_78580 == 1) || func_3(player_ped_id())) || is_vehicle_driveable(get_vehicle_ped_is_entering(player_ped_id()), false)) || is_ped_in_melee_combat(player_ped_id())) || get_usingnightvision()) || iLocal_117)
				{
					if (!Global_20209)
					{
						set_bit(&Global_8137, 4);
					}
				}
				if (is_pc_version())
				{
					if (Global_78319 == 0)
					{
						if (iLocal_101 == 0)
						{
							if (is_ped_in_any_vehicle(player_ped_id(), false))
							{
								if (!is_ped_sitting_in_vehicle(player_ped_id(), get_vehicle_ped_is_in(player_ped_id(), false)))
								{
									iLocal_99 = get_game_timer();
									iLocal_101 = 1;
								}
							}
						}
						else
						{
							iLocal_100 = get_game_timer();
							iLocal_103 = (iLocal_100 - iLocal_99);
							if (iLocal_103 < 4000)
							{
								set_bit(&Global_8137, 4);
							}
							else
							{
								iLocal_101 = 0;
							}
						}
					}
				}
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
				{
					if (Global_78319)
					{
						get_current_ped_weapon(player_ped_id(), &iLocal_109, true);
						if (iLocal_109 != joaat("weapon_unarmed") && Global_20266.f_1 < 7)
						{
							set_bit(&Global_8137, 4);
						}
					}
				}
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					iLocal_110 = get_vehicle_ped_is_in(player_ped_id(), false);
					if (get_entity_model(iLocal_110) == joaat("submersible") || get_entity_model(iLocal_110) == joaat("submersible2"))
					{
						iLocal_113 = 1;
					}
					else
					{
						iLocal_113 = 0;
					}
					if (((((get_entity_model(iLocal_110) == joaat("rhino") || get_entity_model(iLocal_110) == joaat("cutter")) || get_entity_model(iLocal_110) == joaat("chernobog")) || get_entity_model(iLocal_110) == joaat("khanjali")) || iLocal_113) || is_vehicle_driveable(iLocal_110, false) == 0)
					{
						set_bit(&Global_8137, 4);
					}
					if (((((((((((((((get_entity_model(iLocal_110) == joaat("valkyrie") || get_entity_model(iLocal_110) == joaat("insurgent")) || get_entity_model(iLocal_110) == joaat("technical")) || get_entity_model(iLocal_110) == joaat("trash")) || get_entity_model(iLocal_110) == joaat("trash2")) || get_entity_model(iLocal_110) == joaat("limo2")) || get_entity_model(iLocal_110) == joaat("insurgent3")) || get_entity_model(iLocal_110) == joaat("halftrack")) || get_entity_model(iLocal_110) == joaat("dune3")) || get_entity_model(iLocal_110) == joaat("trailersmall2")) || get_entity_model(iLocal_110) == joaat("technical2")) || get_entity_model(iLocal_110) == joaat("boxville5")) || get_entity_model(iLocal_110) == joaat("mogul")) || get_entity_model(iLocal_110) == joaat("bombushka")) || get_entity_model(iLocal_110) == joaat("tula")) || get_entity_model(iLocal_110) == joaat("chernobog"))
					{
						if (is_ped_sitting_in_vehicle(player_ped_id(), iLocal_110))
						{
							iVar6 = func_2(player_ped_id(), iLocal_110);
							if (iVar6 != -2)
							{
								if (get_entity_model(iLocal_110) == joaat("insurgent") || get_entity_model(iLocal_110) == joaat("limo2"))
								{
									if (iVar6 == 3)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (get_entity_model(iLocal_110) == joaat("trash") || get_entity_model(iLocal_110) == joaat("trash2"))
								{
									if (iVar6 == 2 || iVar6 == 1)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (get_entity_model(iLocal_110) == joaat("technical2"))
								{
									if (iVar6 == 1)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (get_entity_model(iLocal_110) == joaat("boxville5"))
								{
									if (iVar6 == 3)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (get_entity_model(iLocal_110) == joaat("insurgent3"))
								{
									if (iVar6 == 3)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (get_entity_model(iLocal_110) == joaat("halftrack"))
								{
									if (iVar6 == 1)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (get_entity_model(iLocal_110) == joaat("dune3"))
								{
									if (iVar6 == 0)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (get_entity_model(iLocal_110) == joaat("trailersmall2"))
								{
									if (iVar6 == -1)
									{
										set_bit(&Global_8137, 4);
									}
								}
								if (is_turret_seat(iLocal_110, iVar6))
								{
									set_bit(&Global_8137, 4);
								}
							}
						}
					}
					if (is_control_just_pressed(0, 69))
					{
						if (Global_78319 == 0)
						{
							if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
							{
								bVar7 = true;
								if (get_entity_model(iLocal_110) == joaat("stromberg") && is_entity_in_water(iLocal_110))
								{
									bVar7 = false;
								}
								if (((is_this_model_a_heli(get_entity_model(iLocal_110)) || is_this_model_a_plane(get_entity_model(iLocal_110))) || get_entity_model(iLocal_110) == joaat("submersible")) || get_entity_model(iLocal_110) == joaat("submersible2"))
								{
									bVar7 = false;
								}
								if (bVar7)
								{
									func_65(0);
								}
							}
						}
					}
				}
				else
				{
					if (is_control_just_pressed(0, 24))
					{
						if (Global_78319 == 0)
						{
							if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
							{
								func_65(0);
							}
						}
					}
					iLocal_113 = 0;
				}
				if (is_ped_swimming_under_water(player_ped_id()))
				{
					if (BitTest(Global_4718592.f_37, 17) && (network_is_activity_session() || Global_1922883))
					{
						func_5(1, 1);
					}
					else
					{
						Global_20251 = 1;
						func_68();
						func_65(0);
					}
				}
				if (Global_78319 == 0)
				{
					if (get_entity_health(player_ped_id()) < iLocal_96)
					{
						if (!is_ped_in_any_vehicle(player_ped_id(), false))
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
					if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
					{
						if (is_ped_swimming_under_water(player_ped_id()))
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
				}
				else if (func_75())
				{
					if (get_entity_health(player_ped_id()) < iLocal_96)
					{
						if (!is_ped_in_any_vehicle(player_ped_id(), false))
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
				}
				if (is_aim_cam_active())
				{
					if (!is_ped_in_cover(player_ped_id(), true))
					{
						if (!func_75())
						{
							get_current_ped_weapon(player_ped_id(), &iLocal_109, true);
							if ((iLocal_109 == joaat("weapon_sniperrifle") || iLocal_109 == joaat("weapon_heavysniper")) || iLocal_109 == joaat("weapon_remotesniper"))
							{
								bLocal_108 = true;
							}
							else
							{
								bLocal_108 = false;
							}
							if (is_first_person_aim_cam_active())
							{
								if (bLocal_108)
								{
									Global_20251 = 1;
									func_68();
									func_65(0);
								}
							}
						}
					}
				}
				if (is_ped_being_jacked(player_ped_id()))
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
				if (is_ped_being_stunned(player_ped_id(), 0))
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
				if (is_player_being_arrested(player_id(), true))
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
				if (is_ped_ragdoll(player_ped_id()) || is_ped_in_parachute_free_fall(player_ped_id()))
				{
					if (Global_78319 == 0)
					{
						Global_20251 = 1;
						func_68();
						func_65(0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (((Global_78319 && Global_2821909.f_1) && Global_2821909.f_37) && Global_20266.f_1 == 9)
				{
					iVar8 = 1;
					if (!BitTest(Global_8137, 24))
					{
						if (BitTest(Global_8137, 26))
						{
							set_bit(&Global_8137, 25);
							clear_bit(&Global_8137, 26);
							clear_bit(&Global_8138, 2);
						}
					}
				}
				if (iVar8 == 0)
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
			}
		}
		if (Global_20244 == 1)
		{
			func_1();
		}
		if (Global_20265 == 2)
		{
			if (_is_using_keyboard(2))
			{
				set_input_exclusive(0, Global_20235);
				set_input_exclusive(0, Global_20236);
				disable_control_action(0, 24, true);
				disable_control_action(0, 257, true);
			}
			if (!is_entity_dead(player_ped_id(), false))
			{
				stop_ped_ringtone(player_ped_id());
			}
		}
	}
}

void func_1()
{
	if (!is_control_pressed(2, Global_20235) && !is_control_pressed(2, Global_20234))
	{
		Global_20244 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0, false) && !is_entity_dead(iParam1, false))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
			if (get_ped_in_vehicle_seat(iParam1, 3, false) == iParam0)
			{
				return 3;
			}
			if (get_ped_in_vehicle_seat(iParam1, 4, false) == iParam0)
			{
				return 4;
			}
			if (get_ped_in_vehicle_seat(iParam1, 5, false) == iParam0)
			{
				return 5;
			}
			if (get_ped_in_vehicle_seat(iParam1, 6, false) == iParam0)
			{
				return 6;
			}
			if (get_ped_in_vehicle_seat(iParam1, 7, false) == iParam0)
			{
				return 3;
			}
			if (get_ped_in_vehicle_seat(iParam1, 8, false) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)
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

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_6(0))
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

int func_6(int iParam0)
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

bool func_7()
{
	return BitTest(Global_1958711, 5);
}

bool func_8()
{
	return Global_2821909.f_1;
}

void func_9()
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_22664 = 0;
	Global_22665 = 0;
	set_input_exclusive(0, Global_20236);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	if (Global_20232 == 0)
	{
		set_mobile_phone_scale(500f);
		if (func_74())
		{
			iLocal_18 = get_game_timer();
		}
		else
		{
			iLocal_18 = 0;
		}
		script_is_moving_mobile_phone_offscreen(true);
		Global_20232 = 1;
	}
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (is_ped_ringtone_playing(player_ped_id()))
		{
			stop_ped_ringtone(player_ped_id());
		}
	}
	if (is_entity_dead(player_ped_id(), false))
	{
		if (is_ped_ringtone_playing(player_ped_id()))
		{
			stop_ped_ringtone(player_ped_id());
		}
	}
	if (Global_113386.f_14051.f_84 == 1)
	{
		Global_113386.f_14051.f_84 = 0;
		clear_floating_help(0, true);
	}
	fVar0 = 350f;
	if (BitTest(Global_8136, 30) || BitTest(Global_8138, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_20226 };
	if (Global_20251 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((BitTest(Global_8137, 26) || BitTest(Global_8136, 30)) || BitTest(Global_8138, 2))
	{
		Local_115 = { Global_20212[Global_20211 /*3*/] };
	}
	else
	{
		Local_115 = { Global_20219[Global_20211 /*3*/] };
	}
	fVar2 = func_15(Local_115, Global_20212[Global_20211 /*3*/], Global_20226, Var1, fVar0, 0);
	if (!iLocal_84 && fVar2 >= 1f)
	{
		destroy_mobile_phone();
		iLocal_84 = 1;
	}
	if (iLocal_84 && (get_game_timer() - iLocal_18) > 500)
	{
		set_input_exclusive(0, Global_20236);
		if (Global_20266.f_1 == 3)
		{
		}
		if (Global_20266.f_1 == 1)
		{
		}
		if (Global_20266.f_1 == 0)
		{
		}
		script_is_moving_mobile_phone_offscreen(false);
		Global_20207 = 0;
		Global_20248 = 0;
		Global_20462 = 0;
		if (Global_113386.f_14051.f_84 == 1)
		{
			Global_113386.f_14051.f_84 = 0;
			clear_floating_help(0, true);
		}
		Global_20210 = 1;
		if (!is_entity_dead(player_ped_id(), false))
		{
			stop_ped_ringtone(player_ped_id());
		}
		if (Global_22619 == 0)
		{
		}
		Global_20464 = 0;
		if (func_12(0))
		{
			func_11();
		}
		clear_bit(&Global_8137, 8);
		clear_bit(&Global_8136, 14);
		clear_bit(&Global_8136, 9);
		clear_bit(&Global_8136, 27);
		clear_bit(&Global_8136, 30);
		clear_bit(&Global_8137, 5);
		clear_bit(&Global_8137, 19);
		clear_bit(&Global_8137, 21);
		clear_bit(&Global_8137, 24);
		clear_bit(&Global_8137, 25);
		clear_bit(&Global_8137, 27);
		clear_bit(&Global_8137, 26);
		clear_bit(&Global_8138, 2);
		Global_2825434 = 0;
		iLocal_116 = 0;
		if (!is_player_playing(player_id()))
		{
			func_10();
		}
		settimera(0);
		if (_get_number_of_references_of_script_with_name_hash(Global_8143[2 /*15*/].f_9) == 0)
		{
			while (is_thread_active(Global_20264))
			{
				wait(0);
				set_input_exclusive(0, Global_20236);
				if (has_scaleform_movie_loaded(Global_20247))
				{
					set_text_render_id(iLocal_83);
					draw_scaleform_movie(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				if (timera() > 5000)
				{
					terminate_thread(Global_20264);
				}
			}
		}
		Global_20254 = 0;
		if (has_scaleform_movie_loaded(Global_20247))
		{
			func_119(Global_20247, "SHUTDOWN_MOVIE");
		}
		wait(0);
		set_scaleform_movie_as_no_longer_needed(&Global_20247);
		Global_20232 = 0;
		set_input_exclusive(0, Global_20236);
		if (is_entity_dead(player_ped_id(), false))
		{
			if (Global_2821909.f_1)
			{
				if (Global_78319)
				{
					play_sound_frontend(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					play_sound_frontend(-1, "Hang_Up", &Global_20255, true);
				}
			}
		}
		func_116();
		func_114();
		Global_21618 = 0;
		Global_4541508 = 0;
		terminate_this_thread();
	}
}

void func_10()
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

void func_11()
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

int func_12(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_13(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_14(iParam0, Global_43052);
}

int func_14(int iParam0, int iParam1)
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

float func_15(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4541508 == 0)
	{
		if (BitTest(Global_8136, 14) && Global_20266.f_1 < 4)
		{
			get_mobile_phone_position(&Var0);
			if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
			{
				Global_4541508 = 1;
			}
		}
	}
	if (func_74() && Global_4541508 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = get_game_timer();
	}
	fVar1 = func_17((to_float((get_game_timer() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_20194 = { func_16(Param0, Param1, fVar2) };
		Global_20197 = { func_16(Param2, Param3, fVar2) };
	}
	else
	{
		Global_20194 = { Param1 };
		Global_20197 = { Param3 };
	}
	set_mobile_phone_position(Global_20194);
	set_mobile_phone_rotation(Global_20197, 0);
	return fVar1;
}

Vector3 func_16(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_17(float fParam0, float fParam1, float fParam2)
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

void func_18()
{
	if (Global_20244 == 0)
	{
		if (func_62(2, Global_20238, 0))
		{
			if (Global_78319 == 0)
			{
				if (Global_20466)
				{
					if (Global_20465 == 0)
					{
						Global_20465 = 1;
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(2);
						func_19();
						func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20271), -1082130432, -1082130432, -1082130432);
						Global_20246 = Global_20271;
					}
					else
					{
						Global_20465 = 0;
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(1);
						func_19();
						func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
						Global_20246 = Global_20270;
					}
				}
			}
		}
	}
}

void func_19()
{
	if (Global_20466 == 0)
	{
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_8136, 17);
	}
	else if (Global_78319)
	{
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_8136, 17);
	}
	else
	{
		if (Global_20465 == 1)
		{
			if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_20254)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		set_bit(&Global_8136, 17);
	}
}

void func_20()
{
	if (BitTest(Global_8137, 10) || iLocal_116 == 1)
	{
		Global_8743 = get_game_timer();
		Global_8742 = 0;
		Global_20244 = 1;
		begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
		iLocal_73 = end_scaleform_movie_method_return_value();
		iLocal_74 = 1;
	}
	else if (Global_20244 == 0)
	{
		if (func_62(2, Global_20235, 0))
		{
			if (iLocal_75 == 0)
			{
				Global_8743 = get_game_timer();
				Global_8742 = 0;
				Global_20244 = 1;
				begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
				iLocal_73 = end_scaleform_movie_method_return_value();
				iLocal_74 = 1;
			}
		}
	}
}

void func_21()
{
	if (Global_20244 == 0)
	{
		if (func_62(2, Global_20233, 1))
		{
			if (func_107(2092, -1, 0) == 1)
			{
				if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 0)
				{
					if (!BitTest(Global_8137, 3))
					{
						if (!Global_20209)
						{
							if (!BitTest(Global_4541229, 3))
							{
								if (!BitTest(Global_8136, 14))
								{
									Global_20244 = 1;
									set_bit(&Global_4541229, 3);
									func_22(3, 0, 1, 0);
									Global_22664 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_122();
	if (Global_78319 == 0)
	{
		if (func_82(14))
		{
			if (Global_22664 == 2 || Global_22664 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_20266.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_6(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20232 == 1)
	{
		return 0;
	}
	if (Global_20266.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!is_thread_active(Global_20263))
	{
		if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20266.f_1 < 4)
			{
				func_23("cellphone_flashhand");
				if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
				{
					Global_20263 = start_new_script("cellphone_flashhand", 1424);
				}
				set_script_as_no_longer_needed("cellphone_flashhand");
			}
		}
	}
	while (!Global_20248)
	{
		wait(0);
	}
	func_85();
	func_84();
	if (_get_number_of_references_of_script_with_name_hash(Global_8143[iParam0 /*15*/].f_9) == 0)
	{
		Global_8742 = 0;
		Global_20266.f_1 = 7;
		func_23(&(Global_8143[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (_get_number_of_references_of_script_with_name_hash(Global_8143[iParam0 /*15*/].f_9) == 0)
			{
				Global_20264 = start_new_script(&(Global_8143[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (_get_number_of_references_of_script_with_name_hash(Global_8143[iParam0 /*15*/].f_9) == 0)
		{
			Global_20264 = start_new_script(&(Global_8143[iParam0 /*15*/].f_5), 2552);
		}
		set_script_as_no_longer_needed(&(Global_8143[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_23(char* sParam0)
{
	request_script(sParam0);
	while (!has_script_loaded(sParam0))
	{
		wait(0);
	}
}

void func_24()
{
	if (func_40())
	{
		if (func_62(2, Global_20238, 0))
		{
			func_38();
			Global_20270 = Global_20246;
			func_35();
			return;
		}
	}
	if (Global_20245)
	{
		if (timera() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (_is_using_keyboard(2))
	{
		if (is_control_just_pressed(2, 180))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[1])
					{
						func_33();
						Global_20246 = 1;
					}
					break;
				
				case 1:
					if (Global_8705[2])
					{
						func_33();
						Global_20246 = 2;
					}
					break;
				
				case 2:
					if (Global_8705[3])
					{
						func_33();
						func_31();
						Global_20246 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 4;
					}
					break;
				
				case 3:
					if (Global_8705[4])
					{
						func_33();
						Global_20246 = 4;
					}
					break;
				
				case 4:
					if (Global_8705[5])
					{
						func_33();
						Global_20246 = 5;
					}
					break;
				
				case 5:
					if (Global_8705[6])
					{
						func_33();
						func_31();
						Global_20246 = 6;
					}
					break;
				
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[8])
					{
						func_33();
						Global_20246 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 0;
					}
					break;
				
				case 8:
					if (Global_8705[0])
					{
						func_33();
						func_31();
						Global_20246 = 0;
					}
					else
					{
						func_29();
						func_31();
					}
					break;
				}
		}
		if (is_control_just_pressed(2, 181))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[8])
					{
						func_29();
						func_26();
						Global_20246 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20246 = 7;
					}
					break;
				
				case 1:
					if (Global_8705[0])
					{
						func_29();
						Global_20246 = 0;
					}
					else if (Global_8705[8])
					{
						func_26();
						func_33();
					}
					else
					{
						func_26();
					}
					break;
				
				case 2:
					if (Global_8705[1])
					{
						func_29();
						Global_20246 = 1;
					}
					break;
				
				case 3:
					if (Global_8705[2])
					{
						func_29();
						func_26();
						Global_20246 = 2;
					}
					break;
				
				case 4:
					if (Global_8705[3])
					{
						func_29();
						Global_20246 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 5:
					if (Global_8705[4])
					{
						func_29();
						Global_20246 = 4;
					}
					break;
				
				case 6:
					if (Global_8705[5])
					{
						func_26();
						func_29();
						Global_20246 = 5;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				
				case 8:
					if (Global_8705[7])
					{
						func_29();
						Global_20246 = 7;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (func_62(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					if (Global_8705[0] == 1)
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20246 = 1;
						Global_20469 = 1;
					}
					break;
				
				case 5:
					Global_20246 = 3;
					break;
				
				case 6:
					Global_20246 = 7;
					break;
				
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				
				case 8:
					Global_20246 = 6;
					break;
				
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_20245 = 1;
			settimera(0);
		}
		if (func_62(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				
				case 1:
					if (Global_8705[0] == 1)
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20246 = 2;
						Global_20469 = 1;
					}
					break;
				
				case 3:
					Global_20246 = 5;
					break;
				
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_20245 = 1;
			settimera(0);
		}
		if (func_62(2, Global_20242, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 1:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 4;
					}
					break;
				
				case 2:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 6;
					}
					break;
				
				case 4:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 5:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 7:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 8:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_20245 = 1;
			settimera(0);
		}
		if (func_62(2, Global_20243, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 1:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 2:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 4:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 1;
					}
					break;
				
				case 5:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 3;
					}
					break;
				
				case 7:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 8:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_20245 = 1;
			settimera(0);
		}
	}
	if (Global_8143[23 /*15*/].f_10 == 57)
	{
		if (Global_20245 == 1 && Global_20246 == 8)
		{
			if (iLocal_118 == 0)
			{
				iLocal_118 = 1;
				func_25(12);
			}
		}
	}
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(&(Global_2815059.f_5195.f_7[iVar0]), iVar1);
}

void func_26()
{
	func_112(Global_20247, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_27();
}

void func_27()
{
	if (func_28())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(1);
		}
		else
		{
			_cell_cam_move_finger(2);
		}
	}
}

int func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	func_112(Global_20247, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_30();
}

void func_30()
{
	if (func_28())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(3);
		}
		else
		{
			_cell_cam_move_finger(4);
		}
	}
}

void func_31()
{
	func_112(Global_20247, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_32();
}

void func_32()
{
	if (func_28())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(2);
		}
		else
		{
			_cell_cam_move_finger(1);
		}
	}
}

void func_33()
{
	func_112(Global_20247, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_34();
}

void func_34()
{
	if (func_28())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(4);
		}
		else
		{
			_cell_cam_move_finger(3);
		}
	}
}

void func_35()
{
	set_bit(&Global_8138, 9);
	func_37(10, "CELL_16", 0, "appSettings", 24, 1, 1, 0, 0);
	func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_71 = 0;
	while (iLocal_71 < 9)
	{
		begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
		scaleform_movie_method_add_param_int(1);
		scaleform_movie_method_add_param_int(iLocal_71);
		scaleform_movie_method_add_param_int(25);
		scaleform_movie_method_add_param_int(0);
		func_36(&(Global_8143[10 /*15*/]));
		scaleform_movie_method_add_param_int(225);
		end_scaleform_movie_method();
		iLocal_71++;
	}
	Global_8669[0] = 10;
	begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
	scaleform_movie_method_add_param_int(1);
	scaleform_movie_method_add_param_int(0);
	scaleform_movie_method_add_param_int(Global_8143[10 /*15*/].f_10);
	scaleform_movie_method_add_param_int(0);
	func_36(&(Global_8143[10 /*15*/]));
	scaleform_movie_method_add_param_int(255);
	end_scaleform_movie_method();
	func_19();
	func_112(Global_20247, "DISPLAY_VIEW", 4f, to_float(0), -1082130432, -1082130432, -1082130432);
	func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(0), -1082130432, -1082130432, -1082130432);
	func_80();
}

void func_36(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_8143[iParam0 /*15*/]), sParam1, 16);
	Global_8143[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8143[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8143[iParam0 /*15*/].f_9 = get_hash_key(sParam3);
	Global_8143[iParam0 /*15*/].f_10 = iParam4;
	Global_8143[iParam0 /*15*/].f_11 = iParam5;
	Global_8143[iParam0 /*15*/].f_12 = iParam6;
	Global_8143[iParam0 /*15*/].f_13 = iParam7;
	Global_8143[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8143[iParam0 /*15*/].f_12 == 0)
	{
		Global_8143[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_13 == 0)
	{
		Global_8143[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_14 == 0)
	{
		Global_8143[iParam0 /*15*/].f_14 = 0;
	}
}

void func_38()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_20255, true);
		func_39();
	}
}

void func_39()
{
	if (func_28())
	{
		_cell_cam_move_finger(5);
	}
}

int func_40()
{
	return 0;
}

void func_41()
{
	if (func_62(2, Global_20238, 0))
	{
		func_38();
		clear_bit(&Global_8138, 9);
		func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_83(1);
		func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
		func_80();
	}
}

void func_42()
{
	if (Global_20245)
	{
		if (timera() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (_is_using_keyboard(2))
	{
		if (is_control_just_pressed(2, 180))
		{
			switch (Global_20246)
			{
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				}
		}
		if (is_control_just_pressed(2, 181))
		{
			switch (Global_20246)
			{
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (func_62(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					Global_20246 = 0;
					break;
				
				case 5:
					Global_20246 = 3;
					break;
				
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				
				case 8:
					Global_20246 = 6;
					break;
				
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_20245 = 1;
			settimera(0);
		}
		if (func_62(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				
				case 3:
					Global_20246 = 5;
					break;
				
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_20245 = 1;
			settimera(0);
		}
	}
}

void func_43()
{
	if (Global_20245)
	{
		if (timera() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (_is_using_keyboard(2))
	{
		if (is_control_just_pressed(2, 180))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[1])
					{
						func_33();
						Global_20246 = 1;
					}
					break;
				
				case 1:
					if (Global_8705[2])
					{
						func_33();
						Global_20246 = 2;
					}
					break;
				
				case 2:
					if (Global_8705[3])
					{
						func_33();
						func_31();
						Global_20246 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 4;
					}
					break;
				
				case 3:
					if (Global_8705[4])
					{
						func_33();
						Global_20246 = 4;
					}
					break;
				
				case 4:
					if (Global_8705[5])
					{
						func_33();
						Global_20246 = 5;
					}
					break;
				
				case 5:
					if (Global_8705[6])
					{
						func_33();
						func_31();
						Global_20246 = 6;
					}
					break;
				
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[8])
					{
						func_33();
						Global_20246 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 0;
					}
					break;
				
				case 8:
					if (Global_8705[0])
					{
						func_33();
						func_31();
						Global_20246 = 0;
					}
					break;
				}
		}
		if (is_control_just_pressed(2, 181))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[8])
					{
						func_29();
						func_26();
						Global_20246 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20246 = 7;
					}
					break;
				
				case 1:
					if (Global_8705[0])
					{
						func_29();
						Global_20246 = 0;
					}
					break;
				
				case 2:
					if (Global_8705[1])
					{
						func_29();
						Global_20246 = 1;
					}
					break;
				
				case 3:
					if (Global_8705[2])
					{
						func_29();
						func_26();
						Global_20246 = 2;
					}
					break;
				
				case 4:
					if (Global_8705[3])
					{
						func_29();
						Global_20246 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 5:
					if (Global_8705[4])
					{
						func_29();
						Global_20246 = 4;
					}
					break;
				
				case 6:
					if (Global_8705[5])
					{
						func_26();
						func_29();
						Global_20246 = 5;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				
				case 8:
					if (Global_8705[7])
					{
						func_29();
						Global_20246 = 7;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (func_62(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					Global_20246 = 0;
					break;
				
				case 5:
					Global_20246 = 3;
					break;
				
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				
				case 8:
					Global_20246 = 6;
					break;
				
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_20245 = 1;
			settimera(0);
		}
		if (func_62(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				
				case 3:
					Global_20246 = 5;
					break;
				
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_20245 = 1;
			settimera(0);
		}
		if (func_62(2, Global_20242, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 1:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					break;
				
				case 2:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					break;
				
				case 4:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 5:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 7:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 8:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_20245 = 1;
			settimera(0);
		}
		if (func_62(2, Global_20243, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 1:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 2:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 4:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					break;
				
				case 5:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					break;
				
				case 7:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 8:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_20245 = 1;
			settimera(0);
		}
	}
}

void func_44()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (is_scaleform_movie_method_return_value_ready(iLocal_73))
	{
		iLocal_74 = 0;
		iLocal_72 = get_scaleform_movie_method_return_value_int(iLocal_73);
		if (Global_20465 == 0)
		{
			Global_20270 = iLocal_72;
		}
		else
		{
			Global_20271 = iLocal_72;
		}
		if (iLocal_72 < 0)
		{
			iLocal_72 = 0;
		}
		Global_20269 = Global_8669[iLocal_72];
		if (BitTest(Global_8137, 10))
		{
			Global_20269 = 2;
			clear_bit(&Global_8137, 10);
		}
		if (iLocal_116 == 1)
		{
			Global_20270 = 1;
			Global_20269 = 0;
			Global_2825434 = 0;
			iLocal_116 = 0;
		}
		iVar0 = 0;
		if (Global_78319)
		{
			if (Global_20269 == 24 && func_40())
			{
			}
		}
		if (is_thread_active(Global_20264))
		{
			iVar0 = 1;
		}
		if (Global_20269 == 3)
		{
			if (BitTest(Global_8137, 3))
			{
				iVar0 = 1;
			}
			else if (!is_entity_dead(player_ped_id(), false))
			{
				if (((((((is_ped_on_mount(player_ped_id()) || is_stunt_jump_in_progress()) || is_player_climbing(player_id())) || is_ped_jacking(player_ped_id())) || is_ped_hanging_on_to_vehicle(player_ped_id())) || is_ped_in_melee_combat(player_ped_id())) || is_vehicle_driveable(get_vehicle_ped_is_entering(player_ped_id()), false)) || get_usingnightvision())
				{
					iVar0 = 1;
				}
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = get_vehicle_ped_is_in(player_ped_id(), false);
					if (get_entity_upright_value(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (is_player_targetting_anything(player_id()))
				{
					iVar0 = 1;
				}
				if (Global_78319)
				{
					if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
					{
						get_current_ped_weapon(player_ped_id(), &iLocal_109, true);
						if (iLocal_109 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_20269 == 2)
		{
			if (BitTest(Global_8137, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_20269 == 23 && are_strings_equal(&(Global_8143[Global_20269 /*15*/]), "CELL_BENWEB"))
		{
			if (BitTest(Global_8137, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_78319)
		{
			if (Global_20269 == 15 || Global_20269 == 5)
			{
			}
			else
			{
				if (Global_20269 == 23)
				{
					if (((BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0) && BitTest(Global_4541229, 20) == 0) && BitTest(Global_4541229, 22) == 0)
					{
					}
					if ((((BitTest(Global_4541229, 20) == 1 && BitTest(Global_4541229, 4) == 0) && Global_1836092 == 0) && BitTest(Global_4541229, 22) == 0) && BitTest(Global_4541229, 26) == 0)
					{
						iVar0 = 1;
						set_bit(&Global_4541229, 21);
					}
				}
				if (!is_entity_dead(player_ped_id(), false))
				{
					if (get_ped_config_flag(player_ped_id(), 78, true) || is_player_free_aiming(player_id()))
					{
						if (Global_20269 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (Global_75484 && Global_20269 == 2)
				{
					iVar0 = 1;
					sVar2 = func_47();
					if (!func_46(sVar2))
					{
						func_78(sVar2, -1);
					}
				}
				if (func_121())
				{
					if (Global_20269 == 10)
					{
						if (!func_46("FIX_MPCHAR_BLCK"))
						{
							func_78("FIX_MPCHAR_BLCK", -1);
						}
						iVar0 = 1;
					}
				}
				if (iVar0 == 0)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					clear_bit(&Global_8136, 17);
					Global_20266.f_1 = 7;
					if (BitTest(Global_8136, 23))
					{
					}
					else
					{
						func_38();
						request_script(&(Global_8143[Global_20269 /*15*/].f_5));
						set_bit(&Global_8136, 23);
					}
				}
				else
				{
					if (Global_20269 == 2 || Global_20269 == 3)
					{
					}
					func_45();
				}
			}
		}
		else
		{
			switch (Global_20269)
			{
				case 3:
					if (Global_112439 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					set_bit(&Global_8136, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_20467 == 0)
					{
						if ((Global_8140 == 0 && iLocal_75 == 0) && Global_43052 == 15)
						{
							iLocal_75 = 1;
							func_38();
							if (!Global_113386.f_14051.f_85)
							{
							}
						}
					}
					else
					{
						func_45();
					}
					break;
				
				default:
					break;
			}
			if (_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_20269 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_82(14))
			{
				if (Global_20269 != 3 && Global_20269 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
				Global_20266.f_1 = 7;
				if (BitTest(Global_8136, 23))
				{
				}
				else
				{
					request_script(&(Global_8143[Global_20269 /*15*/].f_5));
					set_bit(&Global_8136, 23);
				}
			}
			else if (Global_20269 != 20)
			{
				if (Global_113386.f_14051.f_86 == 0)
				{
					if (_get_number_of_references_of_script_with_name_hash(joaat("paparazzo3b")) > 0)
					{
						if (Global_20269 == 3)
						{
							if (is_player_playing(player_id()))
							{
								if (is_ped_in_cover(player_ped_id(), false))
								{
									func_78("CELL_38", -1);
									Global_113386.f_14051.f_86 = 1;
								}
							}
						}
					}
				}
				func_45();
			}
		}
	}
}

void func_45()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_20255, true);
	}
}

bool func_46(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

char* func_47()
{
	return "BLOCK_APP_WEB";
}

void func_48()
{
	if (Global_20232 == 0)
	{
		if (func_15(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			clear_bit(&Global_8137, 24);
			set_bit(&Global_8137, 26);
		}
	}
}

void func_49()
{
	if (Global_20232 == 0)
	{
		if (func_15(Global_20212[Global_20211 /*3*/], Global_20219[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			clear_bit(&Global_8137, 25);
			if (Global_21618)
			{
				clear_bit(&Global_8137, 27);
			}
		}
	}
}

void func_50()
{
	if (Global_20232 == 0 && Global_20206 == 0)
	{
		if (func_15(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4541508 = 0;
		}
	}
}

void func_51()
{
	float fVar0;
	float fVar1;
	
	if (BitTest(Global_8138, 2))
	{
		set_bit(&Global_8137, 8);
		set_bit(&Global_8136, 14);
		Global_20206 = 0;
		iLocal_18 = 0;
		set_mobile_phone_rotation(Global_20226, 0);
	}
	else if (_get_number_of_references_of_script_with_name_hash(joaat("appemail")) < 1)
	{
		fVar0 = func_15(Global_20212[Global_20211 /*3*/], Global_20219[Global_20211 /*3*/], Global_20229, Global_20226, 450f, 1);
		if (fVar0 >= 1f)
		{
			set_bit(&Global_8137, 8);
			set_bit(&Global_8136, 14);
			Global_20206 = 0;
			iLocal_18 = 0;
			clear_bit(&Global_8138, 2);
			iLocal_81 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			set_bit(&Global_8137, 8);
		}
	}
	else
	{
		if (iLocal_81 == 0)
		{
			Local_82 = { Global_20219[Global_20211 /*3*/] };
			Local_82.f_0 = (Local_82.f_0 - 10f);
			Local_82.f_1 = (Local_82.f_1 + 20f);
			iLocal_81 = 1;
		}
		fVar1 = func_15(Global_20212[Global_20211 /*3*/], Local_82, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			set_bit(&Global_8137, 8);
			set_bit(&Global_8136, 14);
			Global_20206 = 0;
			iLocal_18 = 0;
			clear_bit(&Global_8138, 2);
			iLocal_81 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			set_bit(&Global_8137, 8);
		}
	}
}

void func_52()
{
	if (network_is_game_in_progress())
	{
		iLocal_103 = get_time_difference(get_network_time(), iLocal_102);
	}
	else
	{
		iLocal_98 = get_game_timer();
		iLocal_103 = (iLocal_98 - iLocal_97);
	}
	if (iLocal_103 > 4000)
	{
		iLocal_86 = func_104();
		if (is_mobile_phone_call_ongoing())
		{
		}
		if (network_is_game_in_progress())
		{
			iLocal_102 = get_network_time();
		}
		else
		{
			iLocal_97 = get_game_timer();
		}
	}
}

void func_53()
{
	if (Global_20265 == 1)
	{
		func_120();
		if (Global_20244 == 0)
		{
			if (func_62(2, Global_20236, 0))
			{
				if (BitTest(Global_8137, 8))
				{
					if (Global_21652 == 0)
					{
						func_45();
						Global_20244 = 1;
						Global_20265 = 3;
						Global_21654 = 1;
						if (!is_entity_dead(player_ped_id(), false))
						{
							stop_ped_ringtone(player_ped_id());
						}
					}
				}
			}
		}
		if (Global_20244 == 0)
		{
			if (func_62(2, Global_20235, 0))
			{
				if (BitTest(Global_8137, 8))
				{
					func_38();
					Global_20244 = 1;
					Global_20265 = 2;
					if (!is_entity_dead(player_ped_id(), false))
					{
						stop_ped_ringtone(player_ped_id());
					}
					func_59();
					func_58();
				}
			}
		}
	}
	else
	{
		if (iLocal_95 == 0)
		{
			if (BitTest(Global_8136, 27))
			{
				iLocal_95 = 1;
				settimerb(0);
			}
		}
		else
		{
			if (Global_20266.f_1 > 3)
			{
				if (timerb() > 1500)
				{
					if (!is_entity_dead(player_ped_id(), false))
					{
						if (!is_ped_ringtone_playing(player_ped_id()))
						{
							if (Global_20209)
							{
								play_ped_ringtone("Dial_and_Remote_Ring", player_ped_id(), true);
							}
							else if (!BitTest(Global_8138, 5))
							{
								play_ped_ringtone("Remote_Ring", player_ped_id(), true);
							}
						}
					}
				}
			}
			if (!BitTest(Global_8136, 27))
			{
				iLocal_95 = 0;
				if (!is_entity_dead(player_ped_id(), false))
				{
					stop_ped_ringtone(player_ped_id());
				}
			}
		}
		if (Global_20265 == 0)
		{
			if (Global_20244 == 0)
			{
				if (func_62(2, Global_20234, 0) || Global_2825434 == 1)
				{
					if (is_player_playing(player_id()))
					{
						if (is_player_control_on(player_id()))
						{
							if (BitTest(Global_8137, 8))
							{
								switch (Global_20266.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_20464 == 0)
										{
											if (Global_20465 == 1)
											{
												func_45();
												Global_20465 = 0;
												func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_85();
												func_84();
												func_83(1);
												func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!is_entity_dead(player_ped_id(), false))
												{
													play_sound_frontend(-1, "Put_Away", &Global_20255, true);
												}
												iLocal_18 = 0;
												Global_20266.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_20266.f_1 = 3;
										break;
									
									case 7:
										if (BitTest(Global_8136, 23) == 1)
										{
										}
										if ((Global_8744 - Global_8743) > Global_8745 && BitTest(Global_8136, 23) == 0)
										{
											if (BitTest(Global_8137, 0))
											{
											}
											else
											{
												func_45();
												Global_8742 = 1;
												Global_20266.f_1 = 6;
												if (Global_78319)
												{
													func_112(Global_20247, "SET_THEME", to_float(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_8139 = 99;
												if (Global_2825434 == 0)
												{
													func_54();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_7451 == 132)
										{
											if (Global_2821909.f_1 || BitTest(Global_8137, 20))
											{
												func_45();
												func_76();
											}
										}
										else
										{
											func_45();
											func_76();
											Global_21654 = 1;
										}
										break;
									
									case 9:
										if (Global_21605 == 0)
										{
											Global_20266.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2825434 == 1)
								{
									iLocal_116 = 1;
									Global_2825434 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_54()
{
	char cVar0[24];
	
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!has_scaleform_movie_loaded(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		wait(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_83(Global_8741);
			if (Global_8741 == 1)
			{
				func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				set_bit(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_80();
				clear_bit(&Global_8138, 9);
				func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_106();
				func_112(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_36("CELL_300");
					func_36("CELL_217");
					func_36("CELL_217");
					end_scaleform_movie_method();
				}
				else if (func_57(Global_7451, Global_20266) == 0)
				{
					func_81(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_81(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_112(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_106();
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_36("CELL_300");
					func_36("CELL_219");
					func_36("CELL_219");
					end_scaleform_movie_method();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_57(Global_7451, Global_20266) == 0)
					{
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &cVar0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_55();
			break;
		
		default:
			break;
	}
}

void func_55()
{
	if (has_scaleform_movie_loaded(Global_20247))
	{
		func_56();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_56()
{
	if (Global_78319)
	{
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_8136, 17);
	}
}

int func_57(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_58()
{
	if (Global_21618)
	{
		if (Global_78319)
		{
			if (has_scaleform_movie_loaded(Global_20247))
			{
				if (!is_pc_version())
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					set_bit(&(Global_2815059.f_1795), 15);
				}
			}
		}
	}
}

void func_59()
{
	if (has_scaleform_movie_loaded(Global_20247))
	{
		if (!Global_21613)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21618)
			{
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(4);
				scaleform_movie_method_add_param_int(0);
				scaleform_movie_method_add_param_int(2);
				begin_text_command_scaleform_string("CELL_CONDFON");
				add_text_component_substring_player_name(&Global_21620);
				end_text_command_scaleform_string();
				func_36("CELL_300");
				func_36("CELL_219");
				func_36("CELL_219");
				end_scaleform_movie_method();
			}
			else if (func_57(Global_7451, Global_20266) == 0)
			{
				func_81(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_81(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_219", &(Global_1998[Global_7451 /*29*/].f_3), 0);
			}
		}
		func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_60()
{
	Global_20471 = 0;
	func_61();
}

void func_61()
{
	if (is_mobile_phone_call_ongoing() || Global_20265 == 1)
	{
		restart_scripted_conversation();
		Global_22616 = 0;
		stop_scripted_conversation(false);
		Global_21605 = 6;
		Global_20266.f_1 = Global_20268;
		return;
	}
}

int func_62(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (is_pc_version())
		{
			if (update_onscreen_keyboard() == 0 || (_network_is_text_chat_active() && _is_using_keyboard(2)))
			{
				return 0;
			}
		}
		if (is_pause_menu_active() || is_warning_message_active())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_64(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_65(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_7())
		{
			func_5(1, 1);
		}
		else
		{
			func_5(0, 0);
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
	if (!func_66())
	{
		Global_20266.f_1 = 3;
	}
}

int func_66()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return BitTest(Global_1958711, 19);
}

void func_68()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_77() && is_ped_in_cover(player_ped_id(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_78319)
	{
		if (!is_ped_injured(player_ped_id()) && iVar1 == 0)
		{
			iVar2 = get_ped_prop_index(player_ped_id(), 0);
			if (Global_78319)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || is_ped_wearing_helmet(player_ped_id()))
				{
					iVar0 = 1;
				}
			}
			else if (is_ped_wearing_helmet(player_ped_id()))
			{
				iVar0 = 1;
			}
			if (!Global_20209)
			{
				if (Global_7451 != 128)
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(player_ped_id(), false))
						{
							if (is_ped_in_any_vehicle(player_ped_id(), false))
							{
							}
							else
							{
								if (Global_78319)
								{
									set_ped_config_flag(player_ped_id(), 244, false);
									set_ped_config_flag(player_ped_id(), 243, false);
									set_ped_config_flag(player_ped_id(), 242, false);
								}
								set_bit(&Global_8136, 11);
								task_use_mobile_phone(player_ped_id(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_70()
{
	if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
	{
		if (func_75())
		{
		}
		else
		{
			func_71();
		}
		if (Global_20266.f_1 == 9)
		{
			if (Global_21618 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_71()
{
	struct<2> Var0;
	
	get_mobile_phone_position(&Var0);
	if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_20206 = 1;
	}
}

void func_72()
{
	if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
	{
		if (iLocal_76 == 0)
		{
			if (BitTest(Global_8137, 26))
			{
				clear_bit(&Global_8137, 24);
				clear_bit(&Global_8137, 25);
				clear_bit(&Global_8137, 27);
				clear_bit(&Global_8137, 26);
				if (!is_entity_dead(player_ped_id(), false))
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), false))
					{
						func_71();
					}
					else if (func_74() == 0)
					{
						func_71();
					}
				}
			}
		}
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (func_74())
			{
				func_73();
			}
		}
		else if (func_75())
		{
		}
		else if (func_74())
		{
			func_73();
		}
		if (Global_20266.f_1 == 9)
		{
			if (Global_21618 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_73()
{
	struct<2> Var0;
	
	get_mobile_phone_position(&Var0);
	if (Global_20212[Global_20211 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4541508 = 1;
	}
}

int func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (Global_20209 == 0)
			{
				if (Global_7451 != 128)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), false))
					{
						if (Global_21605 != 2)
						{
						}
					}
				}
			}
		}
		if (func_82(14))
		{
			return 0;
		}
		if (is_ped_in_cover(player_ped_id(), false))
		{
			return 0;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			if (!_is_in_vehicle_cam_disabled())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(player_ped_id(), false)))
				{
					return 0;
				}
			}
		}
		if (((is_ped_swimming(player_ped_id()) || is_ped_swimming_under_water(player_ped_id())) || is_player_climbing(player_id())) || (is_ped_hanging_on_to_vehicle(player_ped_id()) && !(BitTest(Global_4718592.f_37, 17) && (network_is_activity_session() || Global_1922883))))
		{
			return 0;
		}
		if (Global_112434)
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _is_in_vehicle_cam_disabled()))
	{
		iVar2 = 1;
		if (!is_entity_dead(player_ped_id(), false))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), false))
			{
				iVar3 = get_vehicle_ped_is_in(player_ped_id(), false);
				if ((((((((is_this_model_a_bike(get_entity_model(iVar3)) || is_this_model_a_bicycle(get_entity_model(iVar3))) || is_this_model_a_quadbike(get_entity_model(iVar3))) || get_entity_model(iVar3) == joaat("seashark")) || get_entity_model(iVar3) == joaat("seashark2")) || get_entity_model(iVar3) == joaat("rhino")) || get_entity_model(iVar3) == joaat("submersible")) || get_entity_model(iVar3) == joaat("submersible2")) || get_entity_model(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4541507 || iVar2 == 1)
	{
		if (_get_number_of_references_of_script_with_name_hash(joaat("apptrackify")) > 0 || Global_113386.f_14051.f_89)
		{
			if (_get_number_of_references_of_script_with_name_hash(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_75()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_76()
{
	if (!Global_78319)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (BitTest(Global_8136, 11))
			{
				if (!Global_20209)
				{
					task_use_mobile_phone(player_ped_id(), 0, 1);
				}
				if (Global_78319)
				{
					set_ped_config_flag(player_ped_id(), 244, true);
					set_ped_config_flag(player_ped_id(), 243, true);
					set_ped_config_flag(player_ped_id(), 242, true);
				}
				clear_bit(&Global_8136, 11);
			}
		}
	}
}

int func_77()
{
	int iVar0;
	int iVar1;
	
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_78(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

void func_79()
{
	get_mobile_phone_render_id(&iLocal_83);
	if (iLocal_83 == -1)
	{
	}
}

void func_80()
{
	if (Global_78319)
	{
		if (func_40() == 0)
		{
			return;
		}
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		set_bit(&Global_8136, 17);
	}
}

void func_81(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	scaleform_movie_method_add_param_int(round(fParam2));
	if (fParam3 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam6));
	}
	if (!is_string_null_or_empty(sParam7))
	{
		func_36(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_36(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_36(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_36(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_36(sParam11);
	}
	end_scaleform_movie_method();
}

bool func_82(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_83(int iParam0)
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
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_82(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar2);
								end_scaleform_movie_method();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_81(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_81(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_81(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_81(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_81(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(Global_8142);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar7);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar8);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 8)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_81(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_81(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_84()
{
	if (Global_78319 == 0)
	{
		Global_8143[14 /*15*/].f_4 = -99;
		Global_8143[4 /*15*/].f_4 = -99;
		if (Global_2725398)
		{
			if (func_82(14))
			{
				func_37(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_37(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_37(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8143[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_78319 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_86(iVar2, Global_20266) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_37(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43052 == 15 && func_64(0) == 0) && Global_8141 == 0)
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 0;
			Global_8142 = 255;
		}
		else
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 1;
			Global_8142 = 42;
		}
		if (iVar1 == 1)
		{
			func_37(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_37(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113386.f_14051.f_89 == 1)
		{
			func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113386.f_14051.f_88 == 1)
		{
			func_37(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_37(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_37(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_37(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_37(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_37(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_37(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4541229, 4) == 1)
		{
			func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_37(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_37(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_37(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_37(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_37(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_37(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_37(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_37(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_37(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4541229, 4) == 1)
		{
			if (Global_1836092)
			{
				func_37(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 20) == 1)
			{
				func_37(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 22) == 1)
			{
				func_37(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 26) == 1)
			{
				if (func_121())
				{
					func_37(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_37(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0) && BitTest(Global_4541229, 20) == 0) && BitTest(Global_4541229, 22) == 0) && BitTest(Global_4541229, 26) == 0)
		{
			if (func_121())
			{
				func_37(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_37(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_90() == 0)
		{
			return 0;
		}
	}
	if (func_88(&iVar0) && get_profile_setting(903) == 1)
	{
		return 1;
	}
	if (!func_88(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 13)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
	}
	return 0;
}

bool func_88(int* iParam0)
{
	if (func_89())
	{
		*iParam0 = 11;
		return 1;
	}
	return network_can_access_multiplayer(iParam0);
}

bool func_89()
{
	return Global_32236;
}

int func_90()
{
	if (func_91())
	{
		if (!_0xBD545D44CCE70597())
		{
			if (_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_91()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

void func_92()
{
	if (is_player_playing(player_id()))
	{
		iLocal_111 = get_zone_scumminess(get_zone_at_coords(get_entity_coords(player_ped_id(), true)));
	}
	switch (iLocal_111)
	{
		case 0:
			iLocal_87 = 5;
			break;
		
		case 1:
			iLocal_87 = 5;
			break;
		
		case 2:
			iLocal_87 = 4;
			break;
		
		case 3:
			iLocal_87 = 4;
			break;
		
		case 4:
			iLocal_87 = 3;
			break;
		
		case 5:
			iLocal_87 = 2;
			break;
		
		default:
			iLocal_87 = 3;
			break;
	}
	iLocal_112 = get_random_int_in_range(0, 8);
	if (iLocal_112 < 2)
	{
		if (iLocal_87 > 2)
		{
			iLocal_87 = (iLocal_87 - 1);
		}
	}
	if (iLocal_113 == 1 || func_93())
	{
		iLocal_87 = 0;
	}
	func_112(Global_20247, "SET_PROVIDER_ICON", to_float(iLocal_86), to_float(iLocal_87), -1082130432, -1082130432, -1082130432);
}

int func_93()
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		bVar0 = func_99();
		if (func_98(bVar0))
		{
			Var1 = { get_entity_coords(player_ped_id(), true) };
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_136)
			{
				if (BitTest(Global_113386.f_7688[iVar2 /*15*/].f_2, bVar0))
				{
					if (func_96(Var1, func_97(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_764)
			{
				if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bVar0))
				{
					if (func_96(Var1, func_95(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_866)
			{
				if (BitTest(Global_113386.f_7688.f_765[iVar2 /*10*/].f_2, bVar0))
				{
					if (func_96(Var1, func_94(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	return Global_113386.f_7688.f_765[iParam0 /*10*/].f_7;
}

int func_95(int iParam0)
{
	return Global_113386.f_7688.f_651[iParam0 /*14*/].f_7;
}

int func_96(struct<3> Param0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_43053)
		{
			return 0;
		}
		if (vdist2(Param0, Global_43053[iParam1 /*5*/]) <= (Global_43053[iParam1 /*5*/].f_3 * Global_43053[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_43053[iParam1 /*5*/].f_4 != -1)
		{
			return func_96(Param0, Global_43053[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	return Global_113386.f_7688[iParam0 /*15*/].f_7;
}

bool func_98(int iParam0)
{
	return iParam0 < 3;
}

var func_99()
{
	func_100();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_100()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_102(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_101(player_ped_id());
			if (func_98(iVar0) && (!func_82(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_98(Global_113386.f_2363.f_539.f_4321))
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

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_102(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_102(int iParam0)
{
	if (func_98(iParam0))
	{
		return func_103(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_103(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_104()
{
	func_122();
	return Global_113386.f_14051[Global_20266 /*20*/].f_8;
}

struct<13> func_105(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_106()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (Global_20266 == 0)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 1)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 2)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 3)
		{
			switch (Global_4541505)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_108(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_109();
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

var func_109()
{
	return Global_1574918;
}

void func_110()
{
	if (func_82(14))
	{
		if (Global_2725398)
		{
			if (Global_20266.f_1 == 6)
			{
				if (Global_20246 == 7)
				{
					func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_20246 = 6;
					func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_20266.f_1 == 6)
		{
			func_112(Global_20247, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_89 = get_clock_minutes();
	if (iLocal_89 != Global_8139)
	{
		Global_8139 = iLocal_89;
		iLocal_88 = get_clock_hours();
		iLocal_90 = get_clock_day_of_week();
		switch (iLocal_90)
		{
			case 0:
				StringCopy(&Local_91, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_91, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_91, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_91, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_91, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_91, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_91, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_91, "CELL_206", 16);
				break;
		}
		func_81(Global_20247, "SET_TITLEBAR_TIME", to_float(iLocal_88), to_float(iLocal_89), -1f, -1f, -1f, &Local_91, 0, 0, 0, 0);
		if (Global_20209 == 0)
		{
			func_92();
		}
		if (is_player_playing(player_id()))
		{
			iLocal_96 = get_entity_health(player_ped_id());
		}
	}
}

void func_111()
{
	if (Global_78319)
	{
		StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
		create_mobile_phone(0);
	}
	else if (Global_20209)
	{
		create_mobile_phone(4);
		StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				create_mobile_phone(0);
				break;
			
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				create_mobile_phone(1);
				break;
			
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				create_mobile_phone(2);
				break;
			
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				create_mobile_phone(0);
				break;
			}
	}
	Global_20229 = { -90f, -130f, 0f };
	if (get_is_hidef())
	{
		Global_20211 = 0;
		Global_20212[0 /*3*/] = { (get_safe_zone_size() * 117.2f), (get_safe_zone_size() * -158.8f), -113f };
		Global_20219[0 /*3*/] = { (get_safe_zone_size() * 117.2f), (get_safe_zone_size() * -53.3f), -113f };
	}
	else
	{
		Global_20211 = 0;
		Global_20212[0 /*3*/] = { (get_safe_zone_size() * 85.7f), (get_safe_zone_size() * -121.8f), -91.5f };
		Global_20219[0 /*3*/] = { (get_safe_zone_size() * 85.7f), (get_safe_zone_size() * -35.3f), -91.5f };
	}
	Global_20194 = { Global_20212[Global_20211 /*3*/] };
	set_mobile_phone_position(Global_20212[Global_20211 /*3*/]);
	set_mobile_phone_rotation(Global_20229, 0);
	Global_20206 = 1;
}

void func_112(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	scaleform_movie_method_add_param_int(round(fParam2));
	if (fParam3 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam6));
	}
	end_scaleform_movie_method();
}

bool func_113()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

void func_114()
{
	Global_2821909.f_1 = 0;
	Global_2821909 = 0;
	Global_2821909.f_2 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
	Global_2821909.f_38 = 0;
	Global_2821909.f_56 = 0;
	Global_2821909.f_57 = 0;
	Global_2821909.f_58 = -2;
	Global_2821909.f_3 = 0;
	func_115(&(Global_2821909.f_20));
}

void func_115(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_116()
{
	Global_2821909.f_2 = 1;
	Global_2821909.f_38 = 1;
	if (network_is_signed_online())
	{
		if (network_session_is_in_voice_session())
		{
			while (network_session_is_voice_session_busy())
			{
				wait(0);
			}
			network_session_voice_leave();
			Global_2821909 = 0;
			Global_2821909.f_2 = 0;
		}
		else if (func_117(Global_2821909.f_20))
		{
			if (network_is_friend(&(Global_2821909.f_20)))
			{
				if (!network_is_friend_handle_online(&(Global_2821909.f_20)))
				{
					func_114();
				}
			}
		}
		else
		{
			func_114();
		}
	}
	else
	{
		func_114();
	}
	if (Global_2821909.f_37)
	{
		func_65(0);
	}
	Global_2821909.f_37 = 0;
	Global_2821909.f_3 = 0;
}

bool func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

void func_118()
{
	Global_20471 = 0;
	func_10();
}

void func_119(int iParam0, char* sParam1)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	end_scaleform_movie_method();
}

void func_120()
{
	set_input_exclusive(0, Global_20235);
	disable_control_action(0, 70, true);
	disable_control_action(0, 69, true);
	if (_is_using_keyboard(2))
	{
		set_input_exclusive(0, Global_20235);
		set_input_exclusive(0, Global_20236);
		disable_control_action(0, 24, true);
		disable_control_action(0, 257, true);
	}
	if (Global_78319)
	{
		Global_113386.f_14051[3 /*20*/].f_10 = func_107(1198, -1, 0);
	}
	if (is_pc_version())
	{
		if (decor_exist_on(player_ped_id(), "Synched"))
		{
		}
		else if (((get_game_timer() - iLocal_114) >= 300 || iLocal_114 == 0) || iLocal_114 > get_game_timer())
		{
			set_pad_shake(0, 100, 100);
			iLocal_114 = get_game_timer();
		}
	}
	else if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
	{
		if (((get_game_timer() - iLocal_114) >= 300 || iLocal_114 == 0) || iLocal_114 > get_game_timer())
		{
			set_pad_shake(0, 100, 100);
			iLocal_114 = get_game_timer();
		}
	}
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (!is_ped_ringtone_playing(player_ped_id()))
		{
			if (Global_78319)
			{
				if (!are_strings_equal(&(Global_8941[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					play_ped_ringtone(&(Global_8941[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/]), player_ped_id(), true);
				}
			}
			else if (!are_strings_equal(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (is_pc_version())
					{
						if (decor_exist_on(player_ped_id(), "Synched"))
						{
						}
						else
						{
							play_ped_ringtone(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), player_ped_id(), true);
						}
					}
					else
					{
						play_ped_ringtone(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), player_ped_id(), true);
					}
				}
			}
		}
	}
}

int func_121()
{
	if (Global_78319)
	{
		if (Global_1836487 || Global_1836488 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	if (func_82(14))
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
		Global_20266 = func_99();
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

