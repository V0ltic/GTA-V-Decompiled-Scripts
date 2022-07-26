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
	int* iLocal_40 = NULL;
	int* iLocal_41 = NULL;
	int* iLocal_42 = NULL;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	disable_control_action(0, 26, true);
	if (func_25(player_ped_id()))
	{
		if (get_player_wanted_level(player_id()) != 0)
		{
			set_player_wanted_level(player_id(), 0, false);
		}
	}
	if (has_force_cleanup_occurred(83))
	{
		func_22(0);
	}
	request_anim_dict(sLocal_44);
	request_additional_text("BARY1", 7);
	while (!has_anim_dict_loaded(sLocal_44) || !has_additional_text_loaded(7))
	{
		disable_control_action(0, 26, true);
		wait(0);
	}
	disable_control_action(0, 26, true);
	func_25(player_ped_id());
	iLocal_46 = get_game_timer() + 13000;
	iLocal_47 = get_random_int_in_range(0, 5);
	func_19();
	while (!func_13(&iLocal_43, 49, Local_50, func_18(1.12f), 0))
	{
		disable_control_action(0, 26, true);
		wait(0);
	}
	disable_control_action(0, 26, true);
	func_12();
	iLocal_48 = get_game_timer() + 1000;
	disable_control_action(0, 26, true);
	while (true)
	{
		func_25(player_ped_id());
		if (get_game_timer() < iLocal_48)
		{
			disable_control_action(0, 26, true);
		}
		func_11();
		if (!func_25(iLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(player_ped_id(), Local_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_22(0);
		}
		wait(0);
	}
}

void func_1(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, true, true);
		}
		if (!bParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			_mark_object_for_deletion(*iParam0);
		}
	}
}

float func_2(int iParam0, struct<3> Param1, bool bParam2)
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

int func_3()
{
	var uVar0;
	
	if (((((func_10(player_ped_id()) && func_10(iLocal_43)) && !func_9()) && get_game_timer() > iLocal_46) && func_8(player_ped_id(), iLocal_43, 1) < 20f) && !get_mission_flag())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (get_game_timer() + get_random_int_in_range(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	set_bit(&Global_20471, 0);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

float func_8(int iParam0, int iParam1, bool bParam2)
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

int func_9()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
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

void func_11()
{
	if (is_explosion_in_sphere(-1, Local_50, 5f))
	{
		if (func_10(iLocal_43))
		{
			freeze_entity_position(iLocal_43, false);
			apply_damage_to_ped(iLocal_43, 1000, true, 0);
		}
		if (func_10(iLocal_41))
		{
			freeze_entity_position(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			freeze_entity_position(iLocal_40, false);
		}
	}
}

void func_12()
{
	if (func_10(iLocal_43))
	{
		if (!is_entity_a_mission_entity(iLocal_43))
		{
			set_entity_as_mission_entity(iLocal_43, true, false);
		}
		set_ped_prop_index(iLocal_43, 1, 0, 0, false);
		set_blocking_of_non_temporary_events(iLocal_43, true);
		set_ped_money(iLocal_43, 0);
		set_ped_can_be_targetted(iLocal_43, false);
		set_ped_name_debug(iLocal_43, "POSTBARRY");
		set_ped_relationship_group_hash(iLocal_43, joaat("player"));
		set_entity_collision(iLocal_43, false, false);
		freeze_entity_position(iLocal_43, true);
		set_entity_coords(iLocal_43, Local_50, true, false, false, true);
		set_entity_heading(iLocal_43, func_18(1.12f));
		freeze_entity_position(iLocal_43, true);
		task_play_anim(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0f, false, false, false);
		task_look_at_entity(iLocal_43, player_ped_id(), -1, 0, 2);
	}
}

int func_13(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, Param2, fParam3, false, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (does_object_of_type_exist_at_coords(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false))
	{
		iLocal_41 = get_closest_object_of_type(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
		if (func_25(iLocal_41))
		{
			if (!is_entity_a_mission_entity(iLocal_41))
			{
				set_entity_as_mission_entity(iLocal_41, true, false);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			set_entity_coords(iLocal_41, Local_49, true, false, false, true);
			set_entity_heading(iLocal_41, func_18(-2.01f));
			freeze_entity_position(iLocal_41, true);
		}
	}
	if (does_object_of_type_exist_at_coords(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false))
	{
		iLocal_40 = get_closest_object_of_type(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
		if (func_25(iLocal_40))
		{
			if (!is_entity_a_mission_entity(iLocal_40))
			{
				set_entity_as_mission_entity(iLocal_40, true, false);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			set_entity_coords(iLocal_40, Local_49, true, false, false, true);
			set_entity_heading(iLocal_40, func_18(-1.68f));
			freeze_entity_position(iLocal_40, true);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&iLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		set_entity_coords(iLocal_40, Local_49, true, false, false, true);
		set_entity_heading(iLocal_40, func_18(-1.68f));
		freeze_entity_position(iLocal_40, true);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (does_object_of_type_exist_at_coords(Local_49, 25f, joaat("prop_protest_sign_01"), false))
	{
		iLocal_42 = get_closest_object_of_type(Local_49, 25f, joaat("prop_protest_sign_01"), false, false, true);
		if (func_25(iLocal_42))
		{
			if (!is_entity_a_mission_entity(iLocal_42))
			{
				set_entity_as_mission_entity(iLocal_42, true, false);
			}
			Local_49.f_2 = 29.603f;
			set_entity_coords(iLocal_42, Local_49, true, false, false, true);
			set_entity_heading(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&iLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		set_entity_coords(iLocal_42, Local_49, true, false, false, true);
		set_entity_heading(iLocal_42, 23.45f);
	}
}

void func_20(int* iParam0, int iParam1, struct<3> Param2, float fParam3)
{
	func_21(iParam0);
	*iParam0 = create_object(iParam1, Param2, true, true, false);
	set_entity_heading(*iParam0, fParam3);
}

void func_21(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, true, true);
		}
		delete_object(iParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&iLocal_43);
	}
	else
	{
		func_23(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		freeze_entity_position(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		freeze_entity_position(iLocal_40, false);
	}
	if (bParam0)
	{
		func_21(&iLocal_40);
		func_21(&iLocal_41);
		func_21(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	remove_anim_dict(sLocal_44);
	clear_additional_text(7, false);
	terminate_this_thread();
}

void func_23(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_ped_injured(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

void func_24(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_dead(*iParam0, false))
		{
			set_entity_load_collision_flag(*iParam0, false, 1);
		}
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, false);
		}
		delete_ped(iParam0);
	}
}

bool func_25(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	return !is_entity_dead(iParam0, false);
}

