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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int* iLocal_40 = NULL;
	int iLocal_41 = 0;
	int* iLocal_42 = NULL;
	int* iLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	if (has_force_cleanup_occurred(18))
	{
		func_18();
	}
	set_max_wanted_level(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		set_text_colour(255, 255, 255, 255);
		set_text_scale(0.75f, 0.9f);
		set_text_wrap(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		set_text_colour(255, 255, 255, 255);
		set_text_scale(0.4f, 0.45f);
		set_text_wrap(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		wait(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (does_entity_exist(iLocal_40))
	{
		if ((is_entity_dead(iLocal_40, false) || get_entity_health(iLocal_40) <= 0) || get_vehicle_engine_health(iLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (is_playback_going_on_for_vehicle(iLocal_40))
			{
				stop_playback_recorded_vehicle(iLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { get_entity_coords(iLocal_40, false) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (is_playback_going_on_for_vehicle(iLocal_40))
		{
			set_playback_speed(iLocal_40, 0.25f);
		}
	}
}

void func_2(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		is_entity_dead(*iParam0, false);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, true))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

void func_3(int* iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_4(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, false);
		}
		if (func_6(*iParam0))
		{
			if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, true))
			{
				if (func_5(player_ped_id()))
				{
					if (is_ped_in_vehicle(player_ped_id(), *iParam0, false))
					{
						set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				delete_vehicle(iParam0);
			}
		}
		else
		{
			if (func_5(player_ped_id()))
			{
				if (is_ped_in_vehicle(player_ped_id(), *iParam0, false))
				{
					set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			delete_vehicle(iParam0);
		}
	}
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (func_5(iParam0))
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

void func_7(int* iParam0)
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

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	add_explosion(Param0, 8, 1f, true, false, 1f, false);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		add_explosion(Param0 + Var2[iVar0 /*3*/], 8, 1f, true, false, 1f, false);
		iVar0++;
	}
}

void func_9(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	begin_text_command_display_text(sParam2);
	end_text_command_display_text(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&iLocal_45);
	request_model(iLocal_46);
	while (!has_model_loaded(iLocal_46))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_45 = create_vehicle(iLocal_46, get_offset_from_entity_in_world_coords(iLocal_40, 50f, 0f, 15f), 0f, true, true, false);
		set_heli_blades_full_speed(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(player_ped_id()))
		{
			set_ped_into_vehicle(player_ped_id(), iLocal_45, -1);
			set_gameplay_cam_relative_pitch(0f, 1f);
			set_gameplay_cam_relative_heading(0f);
			clear_area(get_entity_coords(player_ped_id(), true), 500f, true, false, false, false);
		}
	}
	set_model_as_no_longer_needed(iLocal_46);
}

void func_12(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_13(get_entity_coords(iParam0, true), get_entity_coords(iParam1, true), 1);
	set_entity_heading(iParam0, fVar0);
}

float func_13(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&iLocal_42);
	if (func_6(iLocal_40))
	{
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = add_blip_for_entity(iParam0);
		set_blip_as_friendly(iVar0, bParam1);
		set_blip_priority(iVar0, iParam2);
		set_blip_scale(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	request_model(iLocal_44);
	while (!has_model_loaded(iLocal_44))
	{
		wait(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_43 = create_ped_inside_vehicle(iLocal_40, 26, iLocal_44, -1, true, true);
		if (func_5(iLocal_43))
		{
			set_blocking_of_non_temporary_events(iLocal_43, true);
			set_ped_config_flag(iLocal_43, 118, false);
			set_ped_config_flag(iLocal_43, 29, false);
			set_ped_config_flag(iLocal_43, 116, false);
		}
	}
	if (func_6(iLocal_40))
	{
		start_playback_recorded_vehicle(iLocal_40, 1, "Blimp_City", true);
	}
	set_model_as_no_longer_needed(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(iLocal_40) && is_playback_going_on_for_vehicle(iLocal_40))
	{
		stop_playback_recorded_vehicle(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	request_model(iLocal_41);
	request_vehicle_recording(1, "Blimp_City");
	while (!has_model_loaded(iLocal_41) || !has_vehicle_recording_been_loaded(1, "Blimp_City"))
	{
		wait(0);
	}
	Var0 = { get_rotation_of_vehicle_recording_id_at_time(get_vehicle_recording_id(1, "Blimp_City"), 0f) };
	iLocal_40 = create_vehicle(iLocal_41, get_position_of_vehicle_recording_id_at_time(get_vehicle_recording_id(1, "Blimp_City"), 0f), Var0.f_2, true, true, false);
	set_model_as_no_longer_needed(iLocal_41);
}

void func_18()
{
	if (func_6(iLocal_40) && is_playback_going_on_for_vehicle(iLocal_40))
	{
		stop_playback_recorded_vehicle(iLocal_40);
	}
	remove_vehicle_recording(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	set_model_as_no_longer_needed(iLocal_44);
	set_model_as_no_longer_needed(iLocal_41);
	set_model_as_no_longer_needed(iLocal_46);
	set_max_wanted_level(6);
	terminate_this_thread();
}

