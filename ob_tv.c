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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int* iLocal_26 = NULL;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (has_force_cleanup_occurred(2))
	{
		func_68();
	}
	if (does_entity_exist(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		wait(0);
		func_67();
		if (does_entity_exist(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_66() && !func_65())) && !func_64(iLocal_41))
			{
				func_68();
			}
			if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (has_object_been_broken(iScriptParam_69, 0))
			{
				func_68();
			}
			if (is_object_within_brain_activation_range(iScriptParam_69))
			{
				if (is_player_playing(player_id()))
				{
					func_62();
					if (get_entity_health(iScriptParam_69) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_41 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									iLocal_39 = get_rayfire_map_object(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (does_rayfire_map_object_exist(iLocal_39))
									{
										set_state_of_rayfire_map_object(iLocal_39, 9);
									}
									terminate_this_thread();
								}
							}
							if (iLocal_41 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								hint_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								register_script_with_audio(0);
								Global_32020[iLocal_41 /*11*/].f_2 = 0;
								Global_32020[iLocal_41 /*11*/].f_6 = 1;
								Global_32020[iLocal_41 /*11*/] = get_random_int_in_range(0, 2);
								Global_32020[iLocal_41 /*11*/].f_1 = 0;
								Global_32020[iLocal_41 /*11*/].f_4 = 0;
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								Global_32020[iLocal_41 /*11*/].f_8 = 0;
								Global_32020[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&iLocal_26);
								func_53();
								func_52();
								wait(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (is_player_wanted_level_greater(player_id(), 0))
							{
								wait(0);
							}
							else if (is_entity_static(iLocal_35) && is_entity_upright(iLocal_35, 90f))
							{
								if (func_44() || Global_32020[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_40);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_41))
							{
								func_43(&iLocal_40);
								if (func_42("TV_HLP1"))
								{
									clear_help(true);
								}
							}
							if (does_entity_exist(iLocal_35))
							{
								if (!is_entity_visible(iLocal_35))
								{
									set_entity_visible(iLocal_35, true, false);
								}
							}
							if (does_entity_exist(iLocal_37))
							{
								if (!is_entity_visible(iLocal_37))
								{
									set_entity_visible(iLocal_37, true, false);
								}
							}
							if (does_entity_exist(iLocal_36))
							{
								if (is_entity_visible(iLocal_36))
								{
									set_entity_visible(iLocal_36, false, false);
								}
							}
							if (!are_strings_equal(&cLocal_44, "NULL"))
							{
								set_static_emitter_enabled(&cLocal_44, false);
							}
							set_tv_audio_frontend(false);
							wait(0);
							if (does_entity_exist(iLocal_38))
							{
								attach_tv_audio_to_entity(iLocal_38);
							}
							if (!func_64(iLocal_41))
							{
								if ((Global_32020[iLocal_41 /*11*/] == 3 || Global_32020[iLocal_41 /*11*/] == 2) || Global_32020[iLocal_41 /*11*/] == -1)
								{
									Global_32020[iLocal_41 /*11*/] = get_random_int_in_range(0, 2);
								}
								set_tv_channel(Global_32020[iLocal_41 /*11*/]);
								set_tv_volume(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_32020[iLocal_41 /*11*/];
								iLocal_43 = Global_32020[iLocal_41 /*11*/].f_1;
								set_tv_channel_playlist(iLocal_42, func_41(iLocal_43), Global_32020[iLocal_41 /*11*/].f_9);
								set_tv_channel(iLocal_42);
								if (Global_32020[iLocal_41 /*11*/].f_7)
								{
									Global_32020[iLocal_41 /*11*/].f_5 = 0;
									Global_32020[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_32020[iLocal_41 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_32020[iLocal_41 /*11*/].f_7 && func_64(iLocal_41))
							{
								Global_32020[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_41))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (get_tv_channel() == -1)
								{
									set_tv_channel(Global_32020[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_32020[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_43(&iLocal_40);
							}
							Global_32020[iLocal_41 /*11*/].f_5 = 0;
							Global_32020[iLocal_41 /*11*/].f_4 = 0;
							Global_32020[iLocal_41 /*11*/].f_1 = 0;
							Global_32020[iLocal_41 /*11*/].f_2 = 0;
							Global_32020[iLocal_41 /*11*/].f_7 = 0;
							Global_32020[iLocal_41 /*11*/].f_8 = 0;
							Global_32020[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			terminate_this_thread();
		}
	}
	func_68();
	terminate_this_thread();
}

void func_1()
{
	if (iLocal_41 != -1)
	{
		Global_32020[iLocal_41 /*11*/] = get_tv_channel();
	}
	fLocal_30 = get_tv_volume();
	set_tv_channel(-1);
	func_4();
	if (_get_number_of_references_of_script_with_name_hash(joaat("family5")) == 0)
	{
		if (!are_strings_equal(&cLocal_44, "NULL"))
		{
			set_static_emitter_enabled(&cLocal_44, true);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		clear_help(true);
	}
	func_3();
	func_52();
	if (does_entity_exist(iLocal_36))
	{
		if (!is_entity_visible(iLocal_36))
		{
			set_entity_visible(iLocal_36, true, false);
		}
	}
	enable_movie_subtitles(false);
	func_2();
}

void func_2()
{
	if (is_pc_version())
	{
		if (iLocal_67 == 1)
		{
			shutdown_pc_scripted_controls();
			iLocal_67 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_33 == -1)
	{
		set_text_render_id(iLocal_33);
		if (does_entity_exist(iLocal_35))
		{
			if (get_entity_model(iLocal_35) == joaat("v_ilev_mm_screen2") || get_entity_model(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				set_entity_visible(iLocal_35, false, false);
				if (get_entity_model(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					draw_rect(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
				}
			}
			else
			{
				draw_rect(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}
	if (does_entity_exist(iLocal_37))
	{
		set_entity_visible(iLocal_37, false, false);
	}
}

void func_4()
{
	if (iLocal_65)
	{
		render_script_cams(false, false, 3000, true, false, 0);
		if (is_cam_active(iLocal_62))
		{
			set_cam_active(iLocal_62, false);
		}
		destroy_cam(iLocal_62, false);
		set_gameplay_cam_relative_heading(0f);
		if (!is_ped_injured(player_ped_id()))
		{
			freeze_entity_position(player_ped_id(), false);
			clear_ped_tasks(player_ped_id());
			task_look_at_coord(player_ped_id(), Local_31, 1, 0, 2);
			if (!is_player_control_on(player_id()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					set_player_control(player_id(), true, 0);
				}
			}
			set_entity_visible(player_ped_id(), true, false);
		}
		if (!are_strings_equal(&cLocal_53, "NULL"))
		{
			if (is_audio_scene_active(&cLocal_53))
			{
				stop_audio_scene(&cLocal_53);
			}
		}
		if (does_entity_exist(iLocal_37))
		{
			set_entity_visible(iLocal_37, true, false);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		enable_movie_subtitles(false);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		special_ability_deactivate_fast(player_id(), 0);
		set_all_random_peds_flee(player_id(), true);
		set_police_ignore_player(player_id(), true);
		func_14(1);
		thefeed_flush_queue();
		thefeed_pause();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_13())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_12(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_14(0);
		thefeed_resume();
		Global_63160 = 0;
		if (bParam1)
		{
			cascade_shadows_init_session();
		}
		set_all_random_peds_flee(player_id(), false);
		set_police_ignore_player(player_id(), false);
		func_12(0, bParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((((!is_ped_injured(player_ped_id()) && !func_10(player_id())) && !func_7(player_id(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (((!is_ped_injured(player_ped_id()) && !func_10(player_id())) && !bParam4) && !bParam5)
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_78317 = 0;
	}
}

bool func_6()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1574918;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
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

bool func_11()
{
	return BitTest(Global_2621446, 3);
}

int func_12(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_8136, 13);
	}
	else
	{
		clear_bit(&Global_8136, 13);
	}
}

int func_15()
{
	if (!func_64(iLocal_41))
	{
		if (((((((func_31(&iLocal_26) >= 1f && is_entity_at_coord(player_ped_id(), Local_68, 1f, 1f, 1.5f, false, true, 0)) && get_interior_from_entity(iLocal_35) == get_interior_from_entity(player_ped_id())) && !func_30(8, -1)) && !is_ped_in_any_vehicle(player_ped_id(), false)) && is_ped_heading_towards_position(player_ped_id(), Local_31, 90f)) && !is_ped_ragdoll(player_ped_id())) && !is_player_switch_in_progress())
		{
			if (iLocal_40 == -1)
			{
				func_29();
				func_28(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_40, 1))
			{
				func_43(&iLocal_40);
				func_55(&iLocal_26);
				Global_32020[iLocal_41 /*11*/].f_7 = 0;
				if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					play_sound_frontend(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				clear_help(true);
			}
			func_2();
			func_43(&iLocal_40);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_65 == 0)
	{
		set_input_exclusive(2, 222);
		if (is_control_just_pressed(2, 222))
		{
			func_43(&iLocal_40);
			func_28(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		disable_control_action(2, 200, true);
		if (is_entity_visible(player_ped_id()))
		{
			set_entity_visible(player_ped_id(), false, false);
		}
		if (bLocal_34)
		{
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 0);
			}
		}
		hide_hud_and_radar_this_frame();
		_0xD1C55B110E4DF534(player_ped_id());
		func_23(1, 1);
		set_input_exclusive(2, 222);
		func_17(0);
		if (is_control_just_pressed(2, 222) || (_is_using_keyboard(2) && is_disabled_control_just_released(2, 200)))
		{
			func_43(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		set_bit(&Global_8137, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
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
	if (!func_13())
	{
		Global_20266.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
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

bool func_20()
{
	return BitTest(Global_1958711, 5);
}

int func_21(int iParam0)
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

bool func_22()
{
	return BitTest(Global_1958711, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					play_sound_frontend(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (get_tv_channel() == 0)
				{
					set_tv_channel(1);
				}
				else
				{
					set_tv_channel(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (get_control_value(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = get_tv_volume();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				set_tv_volume(fVar2);
				iLocal_24 = get_game_timer();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = get_tv_volume();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				set_tv_volume(fVar2);
				iLocal_24 = get_game_timer();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						play_sound_frontend(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || get_game_timer() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (get_control_value(2, 218) - 127);
	if (iParam0 || timera() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			settimera(0);
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		iLocal_62 = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", Local_63, Local_64, fVar0, false, 2);
		set_cam_far_clip(iLocal_62, 100f);
		set_cam_active(iLocal_62, true);
		render_script_cams(true, false, 3000, true, false, 0);
		if (does_entity_exist(iLocal_37))
		{
			set_entity_visible(iLocal_37, false, false);
		}
		if (!is_ped_injured(player_ped_id()))
		{
			freeze_entity_position(player_ped_id(), true);
			clear_ped_tasks(player_ped_id());
			if (is_player_control_on(player_id()))
			{
				set_player_control(player_id(), false, 0);
				bLocal_34 = true;
			}
			task_look_at_coord(player_ped_id(), Local_31, -1, 0, 2);
			set_entity_visible(player_ped_id(), false, false);
		}
		if (!are_strings_equal(&cLocal_53, "NULL"))
		{
			if (!is_audio_scene_active(&cLocal_53))
			{
				start_audio_scene(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		enable_movie_subtitles(true);
		iLocal_65 = 1;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!is_player_playing(get_player_index()))
	{
		return 0;
	}
	if (func_21(0))
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

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_references_of_script_with_name_hash(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
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

void func_29()
{
	if (is_pc_version())
	{
		if (iLocal_67 == 0)
		{
			init_pc_scripted_controls("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)
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

float func_31(int* iParam0)
{
	if (func_34(iParam0))
	{
		if (func_33(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_32(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_32(bool bParam0)
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

bool func_33(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	set_text_render_id(iLocal_33);
	set_script_gfx_draw_order(4);
	set_script_gfx_draw_behind_pausemenu(true);
	draw_tv_channel(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	set_text_render_id(get_default_script_rendertarget_render_id());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = _get_aspect_ratio(false);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_32020[iLocal_41 /*11*/].f_7 = 0;
	Global_32020[iLocal_41 /*11*/] = get_tv_channel();
	fLocal_30 = get_tv_volume();
	if (is_audio_scene_active(&cLocal_53))
	{
		stop_audio_scene(&cLocal_53);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		clear_help(true);
	}
	func_43(&iLocal_40);
	set_tv_channel(-1);
	wait(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(player_id()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

void func_40(int iParam0, int iParam1)
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

char* func_41(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
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

int func_44()
{
	if (func_31(&iLocal_26) < 1f)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if ((!is_entity_at_coord(player_ped_id(), Local_68, 1f, 1f, 1.5f, false, true, 0) || !is_ped_heading_towards_position(player_ped_id(), Local_31, 90f)) || is_ped_ragdoll(player_ped_id()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (get_interior_from_entity(iLocal_35) != get_interior_from_entity(player_ped_id()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_97369)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_32020[iLocal_41 /*11*/].f_8)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_28(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_40, 1))
	{
		func_43(&iLocal_40);
		func_55(&iLocal_26);
		Global_32020[iLocal_41 /*11*/].f_7 = 1;
		if (request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
		{
			play_sound_frontend(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
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
		func_51((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
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
		func_46();
	}
}

void func_46()
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
		func_50(13, floor(Global_113386.f_10194.f_3853));
	}
	if (!datafile_is_save_pending())
	{
		if (!Global_78319)
		{
			if (func_49() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
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

int func_48(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_49()
{
	return Global_31959;
}

int func_50(int iParam0, int iParam1)
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

void func_51(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

void func_52()
{
	wait(0);
	if (is_named_rendertarget_registered("tvscreen"))
	{
		release_named_rendertarget("tvscreen");
		iLocal_33 = -1;
		set_text_render_id(get_default_script_rendertarget_render_id());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_54();
	}
	if (is_named_rendertarget_registered("tvscreen"))
	{
		release_named_rendertarget("tvscreen");
	}
	wait(0);
	if (!does_entity_exist(iLocal_35))
	{
		func_68();
	}
	iVar0 = get_entity_model(iLocal_35);
	register_named_rendertarget("tvscreen", false);
	link_named_rendertarget(iVar0);
	wait(0);
	if (iLocal_41 != 4)
	{
		while (!is_named_rendertarget_linked(iVar0))
		{
			if (!does_entity_exist(iLocal_35))
			{
				func_68();
			}
			if (!is_object_within_brain_activation_range(iLocal_35))
			{
				func_68();
			}
			if (!is_named_rendertarget_registered("tvscreen"))
			{
				register_named_rendertarget("tvscreen", false);
			}
			if (!is_named_rendertarget_linked(iVar0))
			{
				link_named_rendertarget(iVar0);
			}
			wait(0);
		}
	}
	iLocal_33 = get_named_rendertarget_render_id("tvscreen");
	func_3();
}

void func_54()
{
	if (does_entity_exist(iLocal_35))
	{
		if (get_entity_model(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = create_object_no_offset(joaat("v_ilev_mm_screen2"), Local_31, true, true, false);
	set_entity_heading(iLocal_35, fLocal_32);
	freeze_entity_position(iLocal_35, true);
	set_entity_visible(iLocal_35, false, false);
	iLocal_37 = 0;
	iLocal_37 = create_object_no_offset(joaat("v_ilev_mm_screen2_vl"), Local_31, true, true, false);
	set_entity_heading(iLocal_37, fLocal_32);
	freeze_entity_position(iLocal_37, true);
	set_entity_visible(iLocal_37, false, false);
}

void func_55(int* iParam0)
{
	func_56(iParam0, 0f);
}

void func_56(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_32(BitTest(*iParam0, 4)) - fParam1);
	set_bit(iParam0, 1);
	clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_59()
{
	Local_31 = { get_entity_coords(iLocal_35, true) };
	fLocal_32 = get_entity_heading(iLocal_35);
	func_61();
	if (get_entity_model(iLocal_35) == joaat("prop_tv_03"))
	{
		if (vdist(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0;
			Local_63 = { -9.8135f, -1440.913f, 31.3654f };
			Local_64 = { 0f, 0f, -134.3211f };
			Local_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (get_entity_model(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (vdist(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			Local_63 = { 1978.23f, 3819.65f, 34.2724f };
			Local_64 = { 0f, 0f, -105.15f };
			Local_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (get_entity_model(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (vdist(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			Local_63 = { 2.5724f, 527.9989f, 176.1619f };
			Local_64 = { 0f, 0f, -29.9488f };
			Local_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (get_entity_model(iLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (vdist(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			Local_63 = { -1160.502f, -1520.76f, 10.7393f };
			Local_64 = { 0f, 0f, 60.061f };
			Local_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (get_entity_model(iLocal_35) == joaat("v_ilev_mm_screen2") || get_entity_model(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (vdist(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			Local_63 = { -802.8972f, 172.537f, 74.5801f };
			Local_64 = { 0f, 0f, -69.0273f };
			Local_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (get_entity_model(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (vdist(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			Local_63 = { -808.3051f, 171.2623f, 77.2822f };
			Local_64 = { 1.8886f, 0f, 110.9232f };
			Local_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	iLocal_36 = create_object_no_offset(joaat("prop_tt_screenstatic"), Local_31, true, true, false);
	set_entity_heading(iLocal_36, fLocal_32);
	set_entity_visible(iLocal_36, true, false);
	freeze_entity_position(iLocal_36, true);
}

void func_61()
{
	set_tv_channel_playlist(0, func_41(1), false);
	if (func_58(22))
	{
		set_tv_channel_playlist(1, func_41(12), false);
	}
	else
	{
		set_tv_channel_playlist(1, func_41(2), false);
	}
}

void func_62()
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_32020[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (does_entity_exist(iLocal_38))
			{
				set_entity_invincible(iLocal_38, false);
			}
			if (does_entity_exist(iLocal_35))
			{
				set_entity_invincible(iLocal_35, false);
			}
			if (does_entity_exist(iLocal_37))
			{
				set_entity_invincible(iLocal_37, false);
			}
			if (does_entity_exist(iLocal_36))
			{
				set_entity_invincible(iLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (does_entity_exist(iLocal_38))
		{
			set_entity_invincible(iLocal_38, true);
		}
		if (does_entity_exist(iLocal_35))
		{
			set_entity_invincible(iLocal_35, true);
		}
		if (does_entity_exist(iLocal_37))
		{
			set_entity_invincible(iLocal_37, true);
		}
		if (does_entity_exist(iLocal_36))
		{
			set_entity_invincible(iLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_32020[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
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

int func_66()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_41 == -1)
	{
		terminate_this_thread();
	}
	func_43(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_32020[iLocal_41 /*11*/].f_6 = 0;
		Global_32020[iLocal_41 /*11*/].f_7 = 0;
		Global_32020[iLocal_41 /*11*/].f_8 = 0;
		Global_32020[iLocal_41 /*11*/].f_4 = 0;
		Global_32020[iLocal_41 /*11*/].f_5 = 0;
		Global_32020[iLocal_41 /*11*/].f_2 = 0;
		Global_32020[iLocal_41 /*11*/] = -1;
		Global_32020[iLocal_41 /*11*/].f_1 = 0;
		Global_32020[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		clear_help(true);
	}
	wait(0);
	func_69();
	if (is_audio_scene_active(&cLocal_53))
	{
		stop_audio_scene(&cLocal_53);
	}
	_0x19AF7ED9B9D23058();
	func_2();
	terminate_this_thread();
}

void func_69()
{
	func_52();
	if (does_entity_exist(iLocal_35))
	{
		if (get_entity_model(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			delete_object(&iLocal_35);
			set_model_as_no_longer_needed(joaat("v_ilev_mm_screen2"));
		}
	}
	if (does_entity_exist(iLocal_37))
	{
		delete_object(&iLocal_37);
		set_model_as_no_longer_needed(joaat("v_ilev_mm_screen2_vl"));
	}
	if (does_entity_exist(iLocal_36))
	{
		delete_object(&iLocal_36);
		set_model_as_no_longer_needed(joaat("prop_tt_screenstatic"));
	}
}

