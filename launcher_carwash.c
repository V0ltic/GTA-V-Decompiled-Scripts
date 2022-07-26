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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59[2];
	var uLocal_60[2] = { 0, 0 };
	int iLocal_61[2] = { 0, 0 };
	struct<2> Local_62 = { 0, 5 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 5;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	
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
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	Var2 = { ScriptParam_62.f_1[0 /*3*/] };
	if (_get_number_of_references_of_script_with_name_hash(joaat("launcher_carwash")) > 1)
	{
		terminate_this_thread();
	}
	if (network_is_game_in_progress())
	{
		network_set_script_is_safe_for_network_game();
		set_this_script_can_be_paused(false);
	}
	else if (has_force_cleanup_occurred(99))
	{
		func_74();
	}
	if (Global_2883694)
	{
		if (_get_number_of_references_of_script_with_name_hash(-949873222) == 0)
		{
			request_script_with_name_hash(-949873222);
			while (!has_script_with_name_hash_loaded(-949873222))
			{
				wait(0);
			}
			start_new_script_with_name_hash_and_args(-949873222, &ScriptParam_62, 23, 1424);
		}
		terminate_this_thread();
	}
	if (func_73(player_ped_id()))
	{
	}
	func_65();
	while (true)
	{
		func_73(player_ped_id());
		if (func_64(player_ped_id(), Var2, 0) > (100f + 20f))
		{
			func_74();
		}
		bVar0 = false;
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar1 = get_vehicle_ped_is_in(player_ped_id(), false);
			bVar0 = (func_60(iVar1) || func_59(iVar1));
			bLocal_58 = does_vehicle_have_roof(iVar1);
			func_58(bLocal_58);
		}
		iVar3 = 0;
		while (iVar3 < Local_40.f_0)
		{
			func_57(iVar3);
			iVar3++;
		}
		if (func_1(&Local_40, &uLocal_41, bVar0, 0, 1, 1424))
		{
			func_74();
		}
		wait(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_45(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (get_mission_flag() && uParam1->f_16 == 0))
						{
							func_41(uParam1, 6);
						}
						else if (get_player_wanted_level(player_id()) > 0)
						{
							func_41(uParam1, 8);
						}
						else if (bParam2)
						{
							func_41(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_41(uParam1, 1);
						}
						else if (func_25())
						{
							func_41(uParam1, 7);
						}
						else
						{
							func_41(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || get_player_wanted_level(player_id()) == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			set_input_exclusive(2, 51);
			disable_control_action(0, 101, true);
			func_8();
			if (get_player_wanted_level(player_id()) > 0)
			{
				func_41(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_41(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			if (Global_75485)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), false) || func_4(player_ped_id(), 0) != -1)
				{
					func_41(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (get_mission_flag() && uParam1->f_16 == 0))
			{
				func_41(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_41(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), false) && !is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					return 0;
				}
			}
			if (is_pause_menu_active() || is_system_ui_being_displayed())
			{
				return 0;
			}
			if (is_ped_on_foot(player_ped_id()))
			{
				if ((is_ped_falling(player_ped_id()) || is_ped_jumping(player_ped_id())) || is_ped_jumping_out_of_vehicle(player_ped_id()))
				{
					return 0;
				}
				if ((is_ped_running_ragdoll_task(player_ped_id()) || is_ped_ragdoll(player_ped_id())) || is_ped_getting_up(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_climbing(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_ducking(player_ped_id()) || is_ped_swimming(player_ped_id()))
				{
					return 0;
				}
				if (get_entity_speed(player_ped_id()) > 0.05f)
				{
					return 0;
				}
			}
			if (is_control_just_pressed(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_41(uParam1, 9);
				}
				else
				{
					func_41(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_41(uParam1, 0);
				return 1;
			}
			clear_help(true);
			clear_area_of_projectiles(get_entity_coords(player_ped_id(), true), 20f, 0);
			if (!is_string_null_or_empty((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				request_script((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!has_script_loaded((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_73(player_ped_id()))
					{
						if (is_ped_in_any_vehicle(player_ped_id(), false) && !Global_78319)
						{
							func_2(get_vehicle_ped_is_in(player_ped_id(), false), 2f, 1, 1056964608, 0, 1, 0);
							set_vehicle_brake_lights(get_vehicle_ped_is_in(player_ped_id(), false), false);
						}
					}
					set_input_exclusive(2, 51);
					request_script((iParam0[uParam1->f_12 /*24*/])->f_5);
					disable_control_action(0, 101, true);
					disable_control_action(0, 75, true);
					disable_control_action(0, 23, true);
					wait(0);
				}
				if (bParam3)
				{
					do_screen_fade_out(250);
				}
				if (has_script_loaded((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!is_screen_faded_out())
						{
							if (func_73(player_ped_id()))
							{
								if (is_ped_in_any_vehicle(player_ped_id(), false) && !Global_78319)
								{
									func_2(get_vehicle_ped_is_in(player_ped_id(), false), 2f, 1, 1056964608, 0, 1, 0);
									set_vehicle_brake_lights(get_vehicle_ped_is_in(player_ped_id(), false), false);
								}
							}
							set_input_exclusive(2, 51);
							disable_control_action(0, 101, true);
							disable_control_action(0, 75, true);
							disable_control_action(0, 23, true);
							func_8();
							wait(0);
						}
					}
					start_new_script((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					set_script_as_no_longer_needed((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_3(iParam0);
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

void func_3(int iParam0)
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

int func_4(int iParam0, bool bParam1)
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

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_7()
{
	if (Global_112331)
	{
		return 1;
	}
	if (!func_6(14) && _get_number_of_references_of_script_with_name_hash(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_23011.f_6 = 1;
}

int func_9(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = player_ped_id();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iVar1 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (func_73(iVar1))
		{
			Var0 = { get_entity_rotation(iVar1, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar2 = iVar1;
		}
	}
	Var0 = { get_entity_forward_vector(iVar2) };
	if (func_10(uParam0->f_12, Var0) > cos(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0.f_0 * Param2.f_0) + (Param0.f_1 * Param2.f_1));
}

int func_11(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
		return is_entity_upright(iVar0, 90f);
	}
	return is_entity_upright(player_ped_id(), 90f);
}

int func_13(var uParam0, char* sParam1, int iParam2)
{
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !is_help_message_being_displayed())
	{
		clear_help(true);
		func_14(sParam1, iParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = iParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	add_text_component_integer(iParam1);
	end_text_command_display_help(0, true, true, -1);
}

int func_15(var uParam0)
{
	if (is_string_null_or_empty(uParam0->f_14))
	{
		return 0;
	}
	if (!is_help_message_being_displayed())
	{
		return 0;
	}
	if (are_strings_equal(*uParam0, uParam0->f_14) || are_strings_equal(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

bool func_16(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

bool func_17(char* sParam0, int iParam1)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	add_text_component_integer(iParam1);
	return end_text_command_is_this_help_message_being_displayed(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!is_ped_in_any_vehicle(player_ped_id(), false))
		{
			return 1;
		}
		if (func_4(player_ped_id(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(player_ped_id(), uParam0->f_1, (uParam0->f_10 + 2f), 1);
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !is_entity_in_angled_area(player_ped_id(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, false, true, 0);
}

struct<8> func_19(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	struct<3> Var1;
	
	Var0 = 2;
	Var1 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_20(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_21(int iParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	return vdist2(get_entity_coords(iParam0, bParam3), Param1) <= (fParam2 * fParam2);
}

int func_22(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !is_help_message_being_displayed())
	{
		clear_help(true);
		func_23(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(char* sParam0)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, true, true, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		clear_help(true);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!is_ped_in_any_vehicle(player_ped_id(), false))
	{
		return 0;
	}
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
	if (is_entity_on_fire(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !is_vehicle_driveable(iVar0, false);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (is_vehicle_tyre_burst(iParam0, 0, false) && is_vehicle_tyre_burst(iParam0, 1, false))
		{
			return 1;
		}
		if (is_vehicle_tyre_burst(iParam0, 4, false) && is_vehicle_tyre_burst(iParam0, 5, false))
		{
			return 1;
		}
		if (is_vehicle_tyre_burst(iParam0, 0, false))
		{
			iVar0++;
		}
		if (is_vehicle_tyre_burst(iParam0, 1, false))
		{
			iVar0++;
		}
		if (is_vehicle_tyre_burst(iParam0, 4, false))
		{
			iVar0++;
		}
		if (is_vehicle_tyre_burst(iParam0, 5, false))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (func_28(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)
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

int func_30()
{
	if (network_is_game_in_progress())
	{
		return func_38(player_id());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_60328[iParam0];
}

int func_32()
{
	func_33();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_36(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_35(player_ped_id());
			if (func_34(iVar0) && (!func_6(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_34(Global_113386.f_2363.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = func_39(iParam0);
	return uVar0;
}

int func_39(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == player_id())
		{
			return network_get_vc_wallet_balance(-1);
		}
		else if (func_40(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_40(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)
{
	func_73(player_ped_id());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!is_ped_in_any_vehicle(player_ped_id(), false))
		{
			return 0;
		}
		if (func_4(player_ped_id(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return is_entity_in_angled_area(player_ped_id(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, false, true, 0);
	}
	return func_21(player_ped_id(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_43()
{
	return get_game_timer() <= Global_23150.f_6269 + 100;
}

bool func_44(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_51())
		{
			return 0;
		}
	}
	if (is_pause_menu_active())
	{
		return 0;
	}
	if (is_system_ui_being_displayed())
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (Global_63148)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (func_46(player_id()))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (func_49(iParam0))
	{
		return 1;
	}
	if (func_47(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_48(iParam0, 9);
	}
	return 0;
}

var func_48(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)
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

int func_51()
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	return 1;
}

void func_52(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_54(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_53(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar1 = (360f / to_float(iParam6));
	Var2 = { Param0 };
	Var3 = { Param0 };
	fVar4 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (sin((fVar4 - fVar1)) * fParam1));
	Var2.f_1 = (Var2.f_1 + (cos((fVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= iParam6)
	{
		Var3 = { Param0 };
		Var3.f_0 = (Var3.f_0 + (sin(fVar4) * fParam1));
		Var3.f_1 = (Var3.f_1 + (cos(fVar4) * fParam1));
		draw_debug_line(Var2, Var3, iParam2, iParam3, iParam4, iParam5);
		Var2 = { Var3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_55(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_55(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	Var0 = { func_20(Param1 - Param0) };
	Var1 = { func_56(Var0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	Var3 = { Param0 };
	Var4 = { Param1 };
	Var4.f_2 = Param0.f_2;
	Var5[0 /*3*/] = { Var3 - Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[1 /*3*/] = { Var3 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[2 /*3*/] = { Var4 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[3 /*3*/] = { Var4 - Var1 * Vector(fVar2, fVar2, fVar2) };
	draw_debug_line(Var5[0 /*3*/], Var5[1 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[1 /*3*/], Var5[2 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[2 /*3*/], Var5[3 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[3 /*3*/], Var5[0 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		Var5[(4 + iVar6) /*3*/] = { Var5[iVar6 /*3*/] };
		Var5[(4 + iVar6) /*3*/].f_2 = Param1.f_2;
		iVar6++;
	}
	draw_debug_line(Var5[4 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[5 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[6 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[7 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[0 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[1 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[2 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	draw_debug_line(Var5[3 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_56(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (!is_ped_in_any_vehicle(player_ped_id(), false))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (iLocal_61[iParam0] == 0)
	{
		if (get_game_timer() > uLocal_60[iParam0])
		{
			iLocal_61[iParam0] = start_shape_test_swept_sphere(Local_59[iParam0 /*3*/], Local_59[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, get_vehicle_ped_is_in(player_ped_id(), false), 4);
		}
	}
	else
	{
		iVar0 = get_shape_test_result(iLocal_61[iParam0], &iVar4, &uVar2, &uVar3, &iVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_vehicle(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_61[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_61[iParam0] = 0;
		}
		uLocal_60[iParam0] = get_game_timer() + 250;
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_59(int iParam0)
{
	if (!is_this_model_a_car(get_entity_model(iParam0)))
	{
		return 1;
	}
	if (is_vehicle_door_damaged(iParam0, 0))
	{
		return 1;
	}
	if (is_vehicle_door_damaged(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_door_damaged(iParam0, 2))
	{
		return 1;
	}
	if (is_vehicle_door_damaged(iParam0, 3))
	{
		return 1;
	}
	if (is_vehicle_a_convertible(iParam0, true))
	{
		if (get_convertible_roof_state(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!does_vehicle_have_roof(iParam0))
	{
		return 1;
	}
	if (is_vehicle_attached_to_trailer(iParam0))
	{
		return 1;
	}
	if (!is_this_model_a_car(get_entity_model(iParam0)))
	{
		return 1;
	}
	if (is_entity_on_fire(iParam0))
	{
		return 1;
	}
	if (func_63(iParam0, 1))
	{
		return 1;
	}
	if (func_61(iParam0))
	{
		return 1;
	}
	get_model_dimensions(get_entity_model(iParam0), &Var0, &Var1);
	if (get_entity_model(iParam0) != joaat("zeno"))
	{
		if (absf((Var1.f_0 - Var0.f_0)) > 3.4f)
		{
			return 1;
		}
	}
	if (absf((Var1.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_78319)
	{
		if (!network_has_control_of_entity(iParam0))
		{
			return 0;
		}
	}
	if (is_vehicle_a_convertible(iParam0, true) && !does_vehicle_have_roof(iParam0))
	{
		return 1;
	}
	if (!is_vehicle_a_convertible(iParam0, true) && !does_vehicle_have_roof(iParam0))
	{
		return 1;
	}
	if (get_entity_model(iParam0) == joaat("btype") || get_entity_model(iParam0) == joaat("btype3"))
	{
		if (((((func_28(get_ped_in_vehicle_seat(iParam0, 3, false)) || func_28(get_ped_in_vehicle_seat(iParam0, 4, false))) || func_28(get_ped_in_vehicle_seat(iParam0, 5, false))) || func_28(get_ped_in_vehicle_seat(iParam0, 6, false))) || func_28(get_ped_in_vehicle_seat(iParam0, 7, false))) || func_28(get_ped_in_vehicle_seat(iParam0, 8, false)))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = get_entity_model(iParam0);
	if (func_62(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (is_vehicle_extra_turned_on(iParam0, 2))
		{
			return 1;
		}
		if (is_vehicle_extra_turned_on(iParam0, 3) && is_vehicle_extra_turned_on(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !does_vehicle_have_roof(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !is_vehicle_extra_turned_on(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && is_vehicle_extra_turned_on(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !is_vehicle_extra_turned_on(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (is_vehicle_extra_turned_on(iParam0, 3) && !is_vehicle_extra_turned_on(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	if (iVar0 == joaat("yosemite3"))
	{
		if (get_vehicle_mod(iParam0, 5) == 4)
		{
			return 1;
		}
	}
	if (iVar0 == joaat("rt3000") && get_vehicle_mod(iParam0, 10) == 3)
	{
		return 1;
	}
	if (iVar0 == 15214558)
	{
		switch (get_vehicle_mod(iParam0, 10))
		{
			case 1:
			case 4:
			case 7:
			case 10:
				return 1;
			}
		
		default:
	}
	if (iVar0 == joaat("zr350") && get_vehicle_mod(iParam0, 0) > 11)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (!is_this_model_a_car(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("caddy3"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
		case joaat("comet7"):
		case 775514032:
		case -768236378:
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0, bool bParam1)
{
	if (Global_78319)
	{
		if (does_entity_exist(iParam0) && (!bParam1 || is_vehicle_driveable(iParam0, false)))
		{
			if (decor_is_registered_as_type("TestDrive", 2))
			{
				if (decor_exist_on(iParam0, "TestDrive"))
				{
					return decor_get_bool(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

float func_64(int iParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!is_entity_dead(iParam0, false))
	{
		Var0 = { get_entity_coords(iParam0, true) };
	}
	else
	{
		Var0 = { get_entity_coords(iParam0, false) };
	}
	return get_distance_between_coords(Var0, Param1, bParam2);
}

void func_65()
{
	func_71(&(Local_40[0 /*24*/]), 1, "Carwash1", func_72(156), 15, "", 0, 4f);
	func_71(&(Local_40[1 /*24*/]), 1, "Carwash2", func_72(157), 15, "", 0, 4f);
	func_69(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_69(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_66(&uLocal_41, 0);
	Local_59[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_59[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_78319)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (is_ps3_version() || func_68())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (is_xbox360_version() || func_67())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

bool func_67()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

bool func_68()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

void func_69(var uParam0, struct<3> Param1, float fParam2)
{
	uParam0->f_12 = { func_20(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_70(fParam2, 0f, 360f);
}

float func_70(float fParam0, float fParam1, float fParam2)
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

void func_71(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_10 = fParam7;
	}
}

Vector3 func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

bool func_73(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	return !is_entity_dead(iParam0, false);
}

void func_74()
{
	func_75(&Local_40);
	func_24(&uLocal_41);
	terminate_this_thread();
}

void func_75(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_76(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_76(var uParam0)
{
	*uParam0 = 0;
}

