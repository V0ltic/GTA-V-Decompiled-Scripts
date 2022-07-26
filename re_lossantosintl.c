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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51[4] = { 0, 0, 0, 0 };
	int iLocal_52 = 0;
	struct<3> Local_53[4];
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_56 = true;
	iLocal_62 = joaat("s_m_m_pilot_01");
	iLocal_77 = 500;
	if (has_force_cleanup_occurred(3))
	{
		func_12();
	}
	iLocal_75 = player_ped_id();
	while (true)
	{
		if (is_entity_dead(iLocal_75, false))
		{
			iLocal_76 = 5;
		}
		switch (iLocal_76)
		{
			case 0:
				iLocal_76 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_76 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_76 = 4;
				break;
			
			case 4:
				if (Global_97369)
				{
					iLocal_76 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		wait(iLocal_77);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_entity_exist(iLocal_49[iVar0]))
		{
			if (is_entity_occluded(iLocal_49[iVar0]) || (!is_entity_dead(iLocal_49[iVar0], false) && !is_entity_visible(iLocal_49[iVar0])))
			{
				delete_vehicle(&(iLocal_49[iVar0]));
				delete_ped(&(iLocal_51[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_51[iVar0]));
				set_vehicle_as_no_longer_needed(&(iLocal_49[iVar0]));
				set_ped_as_no_longer_needed(&(iLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	if (does_entity_exist(iLocal_50))
	{
		if (is_entity_occluded(iLocal_50))
		{
			delete_vehicle(&iLocal_50);
			delete_ped(&iLocal_52);
		}
		else
		{
			func_2(&iLocal_50, &iLocal_52);
			set_vehicle_as_no_longer_needed(&iLocal_50);
			set_ped_as_no_longer_needed(&iLocal_52);
		}
	}
	if (bLocal_60)
	{
		remove_vehicle_recording(101, "AirportJetTakeOff");
		remove_vehicle_recording(102, "AirportJetTakeOff");
		remove_vehicle_recording(101, "AirportNew");
		remove_vehicle_recording(102, "AirportNew");
		remove_vehicle_recording(103, "AirplaneLandingRedux");
		remove_vehicle_recording(104, "AirplaneLandingRedux");
		remove_vehicle_recording(101, "EastWestFlight");
	}
}

void func_2(int iParam0, var uParam1)
{
	if (((does_entity_exist(*iParam0) && does_entity_exist(*uParam1)) && !is_entity_dead(*iParam0, false)) && !is_entity_dead(*uParam1, false))
	{
		if (is_entity_in_air(*iParam0))
		{
			if (is_playback_going_on_for_vehicle(*iParam0))
			{
				if (!is_entity_dead(player_ped_id(), false))
				{
					task_plane_mission(*uParam1, *iParam0, 0, 0, get_entity_coords(player_ped_id(), true), 8, 50f, -1f, 30f, 1.401298E-43f, 7.006492E-44f, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_56)
	{
		if (does_entity_exist(iLocal_49[0]) && !is_entity_dead(iLocal_49[0], false))
		{
			if (is_entity_in_air(iLocal_49[0]))
			{
				if (!is_playback_going_on_for_vehicle(iLocal_49[0]))
				{
					if ((!is_ped_injured(player_ped_id()) && !is_entity_dead(iLocal_51[0], false)) && !is_entity_dead(iLocal_49[0], false))
					{
						task_plane_mission(iLocal_51[0], iLocal_49[0], 0, 0, get_entity_coords(player_ped_id(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, 1);
					}
				}
				else if (bParam0)
				{
					if ((!is_ped_injured(player_ped_id()) && !is_entity_dead(iLocal_51[0], false)) && !is_entity_dead(iLocal_49[0], false))
					{
						task_plane_mission(iLocal_51[0], iLocal_49[0], 0, 0, get_entity_coords(player_ped_id(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, 1);
					}
				}
			}
		}
		if (does_entity_exist(iLocal_49[2]) && !is_entity_dead(iLocal_49[2], false))
		{
			if (is_entity_in_air(iLocal_49[2]))
			{
				if (!is_playback_going_on_for_vehicle(iLocal_49[2]))
				{
					if ((!is_ped_injured(player_ped_id()) && !is_entity_dead(iLocal_51[2], false)) && !is_entity_dead(iLocal_49[2], false))
					{
						task_plane_mission(iLocal_51[2], iLocal_49[2], 0, 0, get_entity_coords(player_ped_id(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, 1);
					}
				}
				else if (bParam0)
				{
					if ((!is_ped_injured(player_ped_id()) && !is_entity_dead(iLocal_51[2], false)) && !is_entity_dead(iLocal_49[2], false))
					{
						task_plane_mission(iLocal_51[2], iLocal_49[2], 0, 0, get_entity_coords(player_ped_id(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_66)
	{
		case 0:
			Local_53[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_53[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_53[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_53[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_54 = { -1612.174f, -2688.442f, 12.9444f };
			if (!is_ped_injured(player_ped_id()))
			{
				if ((is_ped_in_any_heli(player_ped_id()) || is_ped_in_any_plane(player_ped_id())) || is_player_wanted_level_greater(player_id(), 0))
				{
					bLocal_56 = false;
				}
				else
				{
					bLocal_56 = true;
				}
			}
			iLocal_66 = 1;
			break;
		
		case 1:
			request_model(joaat("jet"));
			request_model(iLocal_62);
			request_vehicle_recording(101, "AirportJetTakeOff");
			request_vehicle_recording(103, "AirplaneLandingRedux");
			request_vehicle_recording(101, "EastWestFlight");
			request_vehicle_recording(101, "AirportNew");
			request_vehicle_recording(104, "AirplaneLandingRedux");
			iLocal_66 = 2;
			break;
		
		case 2:
			if (!bLocal_60)
			{
				if ((((((has_model_loaded(joaat("jet")) && has_model_loaded(iLocal_62)) && has_vehicle_recording_been_loaded(101, "AirportJetTakeOff")) && has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux")) && has_vehicle_recording_been_loaded(101, "AirportNew")) && has_vehicle_recording_been_loaded(104, "AirplaneLandingRedux")) && has_vehicle_recording_been_loaded(101, "EastWestFlight"))
				{
					bLocal_60 = true;
				}
				else
				{
					request_model(joaat("jet"));
					request_model(iLocal_62);
					request_vehicle_recording(101, "AirportJetTakeOff");
					request_vehicle_recording(102, "AirportJetTakeOff");
					request_vehicle_recording(101, "AirportNew");
					request_vehicle_recording(102, "AirportNew");
					request_vehicle_recording(101, "EastWestFlight");
				}
			}
			if (bLocal_60)
			{
				if (!is_sphere_visible(Local_53[0 /*3*/], 50f) && !is_sphere_visible(Local_54, 50f))
				{
					iLocal_66 = 3;
				}
				else
				{
					if (is_sphere_visible(Local_53[0 /*3*/], 50f))
					{
					}
					if (is_sphere_visible(Local_54, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_49[0] = create_vehicle(joaat("jet"), Local_53[0 /*3*/], 0f, true, true, false);
			set_entity_heading(iLocal_49[0], 240.3179f);
			set_vehicle_generates_engine_shocking_events(iLocal_49[0], false);
			iLocal_49[1] = create_vehicle(joaat("jet"), Local_53[1 /*3*/], 0f, true, true, false);
			set_vehicle_generates_engine_shocking_events(iLocal_49[1], false);
			iLocal_49[2] = create_vehicle(joaat("jet"), Local_53[2 /*3*/], 0f, true, true, false);
			set_vehicle_generates_engine_shocking_events(iLocal_49[2], false);
			iLocal_49[3] = create_vehicle(joaat("jet"), Local_53[3 /*3*/], 0f, true, true, false);
			set_vehicle_generates_engine_shocking_events(iLocal_49[3], false);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (does_entity_exist(iLocal_49[iVar0]))
				{
					iLocal_51[iVar0] = create_ped_inside_vehicle(iLocal_49[iVar0], 4, iLocal_62, -1, true, true);
					set_entity_lod_dist(iLocal_49[iVar0], 1000);
					set_vehicle_engine_on(iLocal_49[iVar0], true, true, false);
					set_blocking_of_non_temporary_events(iLocal_51[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_51[1]));
			func_8(&(iLocal_49[2]), &(iLocal_51[2]));
			func_8(&(iLocal_49[3]), &(iLocal_51[3]));
			if (bLocal_56)
			{
				if (does_entity_exist(iLocal_49[0]))
				{
					if (has_vehicle_recording_been_loaded(101, "AirportJetTakeOff"))
					{
						start_playback_recorded_vehicle_with_flags(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_55 = 1;
					}
					else
					{
						request_vehicle_recording(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_66 = 4;
			break;
		
		case 4:
			if (iLocal_59)
			{
				if (does_entity_exist(iLocal_49[3]) && !is_entity_dead(iLocal_49[3], false))
				{
					if (is_entity_occluded(iLocal_49[3]))
					{
						if (!iLocal_57)
						{
							func_8(&(iLocal_49[3]), &(iLocal_51[3]));
							iLocal_57 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_65)
			{
				case 0:
					if (!iLocal_55)
					{
						if (bLocal_56)
						{
							if (does_entity_exist(iLocal_49[0]) && !is_entity_dead(iLocal_49[0], false))
							{
								if (is_entity_occluded(iLocal_49[0]) && !is_sphere_visible(Local_53[0 /*3*/], 50f))
								{
									if (has_vehicle_recording_been_loaded(101, "AirportJetTakeOff"))
									{
										start_playback_recorded_vehicle_with_flags(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_55 = 1;
									}
									else
									{
										request_vehicle_recording(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_55)
					{
						if (does_entity_exist(iLocal_49[0]) && !is_entity_dead(iLocal_49[0], false))
						{
							if (is_playback_going_on_for_vehicle(iLocal_49[0]))
							{
								fLocal_63 = get_position_in_recording(iLocal_49[0]);
							}
						}
						if (fLocal_63 > 1100f)
						{
							iLocal_65 = 1;
						}
					}
					break;
				
				case 1:
					if (does_entity_exist(iLocal_49[1]) && !is_entity_dead(iLocal_49[1], false))
					{
						if (bLocal_56)
						{
							if (is_entity_occluded(iLocal_49[1]))
							{
								if (iLocal_59)
								{
									if (iLocal_57)
									{
										func_6(&(iLocal_49[1]), &(iLocal_51[1]));
										if (has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux"))
										{
											start_playback_recorded_vehicle_with_flags(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_58 = 0;
											iLocal_65 = 2;
										}
										else
										{
											request_vehicle_recording(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_51[1]));
									if (has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux"))
									{
										start_playback_recorded_vehicle_with_flags(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_58 = 0;
										iLocal_65 = 2;
									}
									else
									{
										request_vehicle_recording(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (does_entity_exist(iLocal_49[1]) && !is_entity_dead(iLocal_49[1], false))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_49[1]))
						{
							iLocal_65 = 3;
						}
					}
					break;
				
				case 3:
					if (does_entity_exist(iLocal_49[2]) && !is_entity_dead(iLocal_49[2], false))
					{
						if (has_vehicle_recording_been_loaded(101, "AirportNew"))
						{
							if (!is_sphere_visible(Local_53[2 /*3*/], 50f))
							{
								if (!is_playback_going_on_for_vehicle(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_51[2]));
									start_playback_recorded_vehicle(iLocal_49[2], 101, "AirportNew", true);
									iLocal_65 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (does_entity_exist(iLocal_49[2]) && !is_entity_dead(iLocal_49[2], false))
					{
						if (is_playback_going_on_for_vehicle(iLocal_49[2]))
						{
							fLocal_64 = get_position_in_recording(iLocal_49[2]);
						}
					}
					if (does_entity_exist(iLocal_49[1]) && !is_entity_dead(iLocal_49[1], false))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_49[1]))
						{
							if (is_entity_occluded(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_51[1]));
								iLocal_58 = 1;
							}
						}
					}
					if (fLocal_64 > 1100f)
					{
						if (does_entity_exist(iLocal_49[3]) && !is_entity_dead(iLocal_49[3], false))
						{
							if (has_vehicle_recording_been_loaded(104, "AirplaneLandingRedux"))
							{
								if (!is_sphere_visible(Local_53[3 /*3*/], 50f))
								{
									if (!is_playback_going_on_for_vehicle(iLocal_49[3]) && iLocal_58)
									{
										func_6(&(iLocal_49[3]), &(iLocal_51[3]));
										start_playback_recorded_vehicle(iLocal_49[3], 104, "AirplaneLandingRedux", true);
										iLocal_65 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (does_entity_exist(iLocal_49[3]) && !is_entity_dead(iLocal_49[3], false))
					{
						if (!is_playback_going_on_for_vehicle(iLocal_49[3]))
						{
							func_5();
							iLocal_65 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_63 = 0f;
	iLocal_55 = 0;
	iLocal_59 = 1;
	iLocal_57 = 0;
}

void func_6(var uParam0, var uParam1)
{
	set_entity_visible(*uParam0, true, false);
	set_entity_visible(*uParam1, true, false);
	set_entity_collision(*uParam0, true, false);
	freeze_entity_position(*uParam0, false);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 0:
			if (!does_entity_exist(iLocal_50))
			{
				iLocal_50 = create_vehicle(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0f, true, true, false);
				set_entity_lod_dist(iLocal_50, 1000);
				set_vehicle_engine_on(iLocal_50, true, true, false);
				set_vehicle_generates_engine_shocking_events(iLocal_50, false);
				iLocal_52 = create_ped_inside_vehicle(iLocal_50, 4, iLocal_62, -1, true, true);
				set_blocking_of_non_temporary_events(iLocal_52, true);
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			if (does_entity_exist(iLocal_50) && !is_entity_dead(iLocal_50, false))
			{
				if (has_vehicle_recording_been_loaded(101, "EastWestFlight"))
				{
					if (!is_playback_going_on_for_vehicle(iLocal_50))
					{
						start_playback_recorded_vehicle_with_flags(iLocal_50, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_61 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!is_entity_dead(player_ped_id(), false))
			{
				Var0 = { get_entity_coords(player_ped_id(), true) };
			}
			if (does_entity_exist(iLocal_50) && !is_entity_dead(iLocal_50, false))
			{
				if (!is_playback_going_on_for_vehicle(iLocal_50))
				{
					if ((is_entity_occluded(iLocal_50) && !is_sphere_visible(-1602.086f, -2674.039f, 12.9444f, 50f)) && vdist2(Var0, get_entity_coords(iLocal_50, true)) > 62500f)
					{
						iLocal_61 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	set_entity_visible(*uParam0, false, false);
	set_entity_visible(*uParam1, false, false);
	set_entity_collision(*uParam0, false, false);
	freeze_entity_position(*uParam0, true);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	terminate_this_thread();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (does_entity_exist(iLocal_67))
	{
		if (is_entity_occluded(iLocal_67))
		{
			delete_vehicle(&iLocal_67);
		}
		else if (!is_entity_dead(iLocal_67, false) && !is_ped_injured(iLocal_68))
		{
			stop_playback_recorded_vehicle(iLocal_67);
			set_ped_keep_task(iLocal_68, true);
			Var0 = { get_entity_coords(iLocal_67, true) };
			fVar3 = get_entity_heading(iLocal_67);
			Var1 = { 0f, 500f, 50f };
			Var2 = { _get_object_offset_from_coords(Var0, fVar3, Var1) };
			task_heli_mission(iLocal_68, iLocal_67, 0, 0, Var2, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_73)
	{
		remove_vehicle_recording(102, "HelicopterTakeOff");
	}
}

