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
	func_4(21);
	if (has_force_cleanup_occurred(18))
	{
		if (get_cause_of_most_recent_force_cleanup() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		wait(0);
		if (_get_number_of_references_of_script_with_name_hash(joaat("docks_setup")) == 0)
		{
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					iLocal_28 = get_vehicle_ped_is_in(player_ped_id(), false);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (does_entity_exist(iLocal_28))
			{
				if (is_vehicle_driveable(iLocal_28, false))
				{
					if (is_vehicle_model(iLocal_28, joaat("handler")))
					{
						set_input_exclusive(0, 51);
						if (!is_any_entity_attached_to_handler_frame(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!does_entity_exist(iLocal_29) || (does_entity_exist(iLocal_29) && get_closest_object_of_type(get_entity_coords(iLocal_28, true), 15f, joaat("prop_contr_03b_ld"), true, false, true) != iLocal_29))
								{
									iLocal_29 = get_closest_object_of_type(get_entity_coords(iLocal_28, true), 15f, joaat("prop_contr_03b_ld"), true, false, true);
								}
								if (does_entity_exist(iLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (_is_handler_frame_above_container(iLocal_28, iLocal_29))
										{
											if (is_control_just_pressed(0, 51))
											{
												_0x6A98C2ECF57FA5D4(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = get_game_timer();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (is_control_just_pressed(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_game_timer();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	terminate_this_thread();
}

int func_3(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		clear_bit(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	set_bit(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
	return 1;
}

