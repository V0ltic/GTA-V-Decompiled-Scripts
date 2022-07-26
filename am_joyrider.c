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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
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
	struct<11> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 0;
	struct<3> Local_63[32];
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<21> Local_73 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_69 = 20;
	if (network_is_game_in_progress() && func_70(player_id(), 0, 1))
	{
		func_61(ScriptParam_73);
	}
	else
	{
		func_57();
	}
	while (true)
	{
		func_56();
		if (func_48() || func_44(9))
		{
			func_57();
		}
		if (network_is_in_tutorial_session())
		{
			func_57();
		}
		switch (func_43(participant_id_to_int()))
		{
			case 0:
				if (func_42() == 1)
				{
					func_41();
					Local_63[participant_id_to_int() /*3*/] = 1;
				}
				else if (func_42() == 4)
				{
					Local_63[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_42() == 1)
				{
					func_39();
				}
				else if (func_42() == 4)
				{
					Local_63[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_61.f_10));
				if (func_36(&(Local_61.f_10)))
				{
					Local_63[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_63[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_57();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_42())
			{
				case 0:
					if (func_35())
					{
						if (func_8())
						{
							Local_61.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_61.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_61.f_9 == 0)
	{
		if (!func_4(Local_61.f_2))
		{
			return 1;
		}
		else if (func_3(Local_61.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_72 == 1)
			{
				if (BitTest(Local_61.f_1, 0))
				{
					return 1;
				}
			}
			if (!is_ped_in_vehicle(net_to_ped(Local_61.f_3), net_to_veh(Local_61.f_2), false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return is_ped_injured(net_to_ped(iParam0));
	}
	return 1;
}

int func_4(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_5(net_to_veh(iParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0, false))
		{
			return 1;
		}
		else if (!is_vehicle_driveable(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	switch (Local_61.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_71 == 0)
	{
		iLocal_72 = 0;
		set_bit(&(Local_61.f_1), false);
	}
	if (func_4(Local_61.f_2))
	{
		iVar0 = 1;
	}
	if (network_is_participant_active(int_to_participantindex(iLocal_71)))
	{
		iVar1 = network_get_player_index(int_to_participantindex(iLocal_71));
		iVar2 = get_player_ped(iVar1);
		if (func_70(iVar1, 1, 1))
		{
			if (BitTest(Local_61.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (is_entity_at_entity(iVar2, net_to_veh(Local_61.f_2), 250f, 250f, 250f, false, true, 0))
					{
						clear_bit(&(Local_61.f_1), false);
					}
				}
				else
				{
					clear_bit(&(Local_61.f_1), false);
				}
			}
		}
	}
	iLocal_71++;
	if (iLocal_71 == network_get_max_num_participants())
	{
		iLocal_71 = 0;
		iLocal_72 = 1;
	}
}

int func_8()
{
	if (can_register_mission_entities(1, 1, 0, 0))
	{
		if (func_34(Local_61.f_4) && func_34(Local_61.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	if ((!network_does_network_id_exist(Local_61.f_3) && func_34(Local_61.f_5)) && network_does_network_id_exist(Local_61.f_2))
	{
		if (func_4(Local_61.f_2))
		{
			if (func_11(&(Local_61.f_3), Local_61.f_2, 22, Local_61.f_5, -1, 1, 1, 1))
			{
				set_ped_random_component_variation(net_to_ped(Local_61.f_3), 0);
				if (func_10())
				{
					set_ped_relationship_group_hash(net_to_ped(Local_61.f_3), Global_1837196);
				}
				else
				{
					set_ped_relationship_group_hash(net_to_ped(Local_61.f_3), Global_1837199);
				}
				set_ped_keep_task(net_to_ped(Local_61.f_3), true);
				if (func_10())
				{
					iVar0 = get_random_int_in_range(0, 10);
					if (iVar0 < 5)
					{
						give_delayed_weapon_to_ped(net_to_ped(Local_61.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						give_delayed_weapon_to_ped(net_to_ped(Local_61.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						give_delayed_weapon_to_ped(net_to_ped(Local_61.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = get_random_int_in_range(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					set_ped_combat_ability(net_to_ped(Local_61.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					set_ped_combat_ability(net_to_ped(Local_61.f_3), 2);
				}
				else
				{
					set_ped_combat_ability(net_to_ped(Local_61.f_3), 1);
				}
				iVar0 = get_random_int_in_range(0, 4);
				if (iVar0 == 0)
				{
					set_ped_combat_attributes(net_to_ped(Local_61.f_3), 5, true);
				}
				else if (iVar0 == 1)
				{
					set_ped_combat_attributes(net_to_ped(Local_61.f_3), 17, true);
				}
				else if (iVar0 == 2)
				{
					set_ped_combat_attributes(net_to_ped(Local_61.f_3), 13, true);
				}
				if (func_10())
				{
					set_ped_combat_attributes(net_to_ped(Local_61.f_3), 20, true);
				}
				if (func_10())
				{
					set_ped_combat_attributes(net_to_ped(Local_61.f_3), 2, true);
				}
				iVar0 = get_random_int_in_range(0, 4);
				if (iVar0 == 0)
				{
					set_ped_combat_movement(net_to_ped(Local_61.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					set_ped_combat_movement(net_to_ped(Local_61.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					set_ped_combat_movement(net_to_ped(Local_61.f_3), 3);
				}
				_0x49E50BDB8BA4DAB2(net_to_ped(Local_61.f_3), true);
				set_ped_get_out_upside_down_vehicle(net_to_ped(Local_61.f_3), true);
				set_ped_config_flag(net_to_ped(Local_61.f_3), 29, true);
				set_ped_can_be_knocked_off_vehicle(net_to_ped(Local_61.f_3), 3);
				set_entity_health(net_to_ped(Local_61.f_3), round((200f * Global_262145.f_164)), 0);
				set_vehicle_radio_loud(net_to_veh(Local_61.f_2), true);
				set_disable_pretend_occupants(net_to_veh(Local_61.f_2), true);
				func_41();
				task_perform_sequence(net_to_ped(Local_61.f_3), iLocal_65);
				set_model_as_no_longer_needed(Local_61.f_5);
			}
		}
	}
	if (!network_does_network_id_exist(Local_61.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (BitTest(get_random_int_in_range(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!can_register_mission_peds(1))
	{
		return 0;
	}
	if (!network_does_network_id_exist(iParam1))
	{
		return 0;
	}
	if (!is_vehicle_driveable(net_to_veh(iParam1), false))
	{
		return 0;
	}
	*uParam0 = ped_to_net(create_ped_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (network_does_network_id_exist(*uParam0))
	{
		_set_entity_cleanup_by_engine(net_to_ped(*uParam0), bParam7);
		if (network_get_entity_is_networked(net_to_ped(*uParam0)))
		{
			if (bParam5)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_12()
{
	struct<3> Var0;
	float fVar1;
	
	if (!network_does_network_id_exist(Local_61.f_2))
	{
		if (func_34(Local_61.f_4))
		{
			if (func_16(&Var0, &fVar1))
			{
				if (func_13(&(Local_61.f_2), Local_61.f_4, Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					set_vehicle_engine_on(net_to_veh(Local_61.f_2), true, true, false);
					set_vehicle_is_wanted(net_to_veh(Local_61.f_2), true);
					set_vehicle_is_stolen(net_to_veh(Local_61.f_2), true);
					add_entity_to_audio_mix_group(net_to_veh(Local_61.f_2), "JOYRIDER_GROUP", 0f);
					set_model_as_no_longer_needed(Local_61.f_4);
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_61.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!is_model_valid(iParam1))
	{
		return 0;
	}
	if (!can_register_mission_vehicles(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		clear_area_of_vehicles(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = create_vehicle(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (does_entity_exist(iVar1))
	{
		*uParam0 = veh_to_net(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (network_does_network_id_exist(*uParam0))
		{
			if (bParam13)
			{
				_network_set_entity_invisible_to_network(iVar1, true);
			}
			_set_entity_cleanup_by_engine(iVar1, bParam8);
			if (network_get_entity_is_networked(iVar1))
			{
				if (bParam6)
				{
					set_network_id_exists_on_all_machines(*uParam0, true);
				}
				else
				{
					set_network_id_exists_on_all_machines(*uParam0, false);
				}
				if (bParam11)
				{
					set_network_id_always_exists_for_player(*uParam0, player_id(), true);
				}
			}
			set_vehicle_is_stolen(iVar1, bParam7);
			_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				set_car_boot_open(iVar1);
				set_vehicle_door_control(iVar1, 5, 5, 1f);
			}
			func_14(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_14(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_15(player_id(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && vdist(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_15(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (absf((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_16(int iParam0, float* fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (_0xA4822F1CF23F4810(&(Local_61.f_6), iParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			get_nth_closest_vehicle_node_with_heading(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1 || get_hash_of_map_area_at_coords(*iParam0) == joaat("City"))
			{
				if (get_distance_between_coords(-1367.557f, -3220.598f, 12.9448f, Local_61.f_6, true) >= 600f && get_distance_between_coords(750f, -3200f, 6f, Local_61.f_6, true) >= 700f)
				{
					if (get_distance_between_coords(func_33(player_id()), *iParam0, true) <= (250f - 50f))
					{
						if (iLocal_70 <= 5)
						{
							if (func_17(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_61.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_69 += 4;
		if (iLocal_69 >= 80)
		{
			iLocal_69 = 20;
			iLocal_70++;
		}
	}
	return bVar0;
}

int func_17(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (is_any_vehicle_near_point(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (is_any_ped_near_point(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || is_any_ped_near_point(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (is_any_object_near_point(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (get_number_of_fires_in_range(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_26(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_18(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_18(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_70(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (get_distance_between_coords(func_23(player_id()), Param0, true) <= (fVar2 + fParam1))
				{
					if (is_sphere_visible(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_70(iVar1, 1, 1))
		{
			if (!func_20(iVar1, 0) && _network_is_player_equal_to_index(player_id(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != player_id()))
				{
					if ((func_19(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!get_player_team(iVar1) == -1)
							{
								if (get_player_team(iVar1) == get_player_team(player_id()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (get_distance_between_coords(func_23(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (is_sphere_visible_to_player(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam6 || get_player_team(iVar1) == -1)
						{
							if (get_distance_between_coords(func_23(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (is_sphere_visible_to_player(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()
{
	return Global_1574918;
}

Vector3 func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_25() && Global_1853348[iVar0 /*834*/].f_804) && !func_24(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_33(iParam0);
}

int func_24(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_25()
{
	return Global_2714762.f_19;
}

int func_26(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && player_id() != iVar1) || iParam6 == 0)
		{
			if (func_70(iVar1, bParam2, bParam3))
			{
				if (iParam8 || _network_is_player_equal_to_index(player_id(), iVar1))
				{
					if (!bParam5 || (!is_ped_injured(get_player_ped(iVar1)) && func_19(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam7) && bParam4) && func_27(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_33(iVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (func_32(player_id(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_31(iParam0) };
	if (network_is_friend(&Global_2787505))
	{
		return 1;
	}
	if (func_28(player_id(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_30(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	return -1;
}

int func_30(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_29();
}

struct<13> func_31(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

int func_32(int iParam0, int iParam1)
{
	if (network_clan_service_is_valid())
	{
		Global_2787505 = { func_31(iParam0) };
		Global_2787518 = { func_31(iParam1) };
		if (network_clan_player_is_active(&Global_2787505))
		{
			if (network_clan_player_is_active(&Global_2787518))
			{
				network_clan_player_get_desc(&Global_2787435, 35, &Global_2787505);
				network_clan_player_get_desc(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_33(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

bool func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

bool func_35()
{
	if (!BitTest(uLocal_64, 1))
	{
		if (get_nth_closest_vehicle_node(func_33(player_id()), iLocal_68, &(Local_61.f_6), 4, 1077936128, 0))
		{
			set_bit(&uLocal_64, true);
		}
		else
		{
			iLocal_68++;
		}
	}
	return BitTest(uLocal_64, 1);
}

int func_36(var uParam0)
{
	if (uParam0->f_1)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_38(uParam0, 0, 0);
		}
	}
}

void func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (network_is_game_in_progress() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = get_network_time_accurate();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

void func_39()
{
	switch (Local_63[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			func_41();
			func_40();
			if (Local_61.f_9 > 0)
			{
				Local_63[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_57();
			break;
	}
}

void func_40()
{
	int iVar0;
	float fVar1;
	
	if (!BitTest(Local_63[participant_id_to_int() /*3*/].f_1, 0))
	{
		if (func_4(Local_61.f_2) && !func_3(Local_61.f_3))
		{
			iVar0 = get_entity_health(net_to_veh(Local_61.f_2));
			fVar1 = get_entity_speed(net_to_veh(Local_61.f_2));
			if (iVar0 < 200)
			{
				func_41();
				task_perform_sequence(net_to_ped(Local_61.f_3), iLocal_67);
				set_bit(&(Local_63[participant_id_to_int() /*3*/].f_1), false);
			}
			else if (fVar1 < 3f)
			{
				if ((((is_entity_upsidedown(net_to_veh(Local_61.f_2)) || is_vehicle_stuck_timer_up(net_to_veh(Local_61.f_2), 3, 10000)) || is_vehicle_stuck_timer_up(net_to_veh(Local_61.f_2), 1, 10000)) || is_vehicle_stuck_timer_up(net_to_veh(Local_61.f_2), 0, 10000)) || is_vehicle_stuck_timer_up(net_to_veh(Local_61.f_2), 2, 10000))
				{
					func_41();
					task_perform_sequence(net_to_ped(Local_61.f_3), iLocal_66);
					set_bit(&(Local_63[participant_id_to_int() /*3*/].f_1), false);
				}
			}
		}
	}
}

void func_41()
{
	if (!BitTest(uLocal_64, 0))
	{
		if (func_4(Local_61.f_2))
		{
			open_sequence_task(&iLocal_65);
			task_vehicle_mission_coors_target(0, net_to_veh(Local_61.f_2), Local_61.f_6, 14, 30f, 786468, 15f, 1f, false);
			task_vehicle_drive_wander(0, net_to_veh(Local_61.f_2), 30f, 786468);
			close_sequence_task(iLocal_65);
			open_sequence_task(&iLocal_66);
			task_leave_any_vehicle(0, 0, 1);
			close_sequence_task(iLocal_66);
			open_sequence_task(&iLocal_67);
			task_vehicle_mission_coors_target(0, net_to_veh(Local_61.f_2), Local_61.f_6, 5, 30f, 786468, 99999f, 1f, false);
			task_leave_any_vehicle(0, 0, 1);
			close_sequence_task(iLocal_67);
			set_bit(&uLocal_64, false);
		}
	}
}

int func_42()
{
	return Local_61.f_0;
}

int func_43(int iParam0)
{
	return Local_63[iParam0 /*3*/];
}

bool func_44(int iParam0)
{
	return !func_45(iParam0);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7119)
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7120)
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7121)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7122)
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_46(4))
			{
				return 0;
			}
			if (func_47(player_id(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_46(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_70(int_to_playerindex(iVar0), 0, 1))
		{
			if (BitTest(Global_2689235[iVar0 /*453*/].f_216, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_48()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_55())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (func_53(159))
	{
		if (!func_52())
		{
			return 1;
		}
	}
	if (func_53(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_49() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_49()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_49()
{
	switch (func_51())
	{
		case 0:
			return func_50();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_50()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_51()
{
	return Global_31959;
}

bool func_52()
{
	return Global_2714762.f_698;
}

int func_53(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return Global_2725403;
}

bool func_55()
{
	return Global_2714762.f_693;
}

void func_56()
{
	wait(0);
}

void func_57()
{
	func_60();
	if (func_42() == 4 && Local_61.f_4 != 0)
	{
		set_vehicle_model_is_suppressed(Local_61.f_4, false);
	}
	if (func_4(Local_61.f_2))
	{
		remove_entity_from_audio_mix_group(net_to_veh(Local_61.f_2), 0f);
	}
	stop_audio_scene("JOYRIDER_RADIO_SCENE");
	func_59(9, 0);
	func_58();
}

void func_58()
{
	terminate_this_thread();
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2689235[player_id() /*453*/].f_216, bParam0))
		{
			set_bit(&(Global_2689235[player_id() /*453*/].f_216), bParam0);
		}
	}
	else if (BitTest(Global_2689235[player_id() /*453*/].f_216, bParam0))
	{
		clear_bit(&(Global_2689235[player_id() /*453*/].f_216), bParam0);
	}
}

void func_60()
{
	clear_sequence_task(&iLocal_65);
}

void func_61(struct<21> Param0)
{
	int iVar0;
	
	func_66(func_67(Param0.f_0), Param0);
	reserve_network_mission_peds(1);
	reserve_network_mission_vehicles(1);
	func_64(0, -1, 0);
	network_register_host_broadcast_variables(&Local_61, 12, 0);
	network_register_player_broadcast_variables(&Local_63, 97, 0);
	if (!func_63())
	{
		func_57();
	}
	if (network_is_game_in_progress())
	{
		set_this_script_can_be_paused(false);
		if (network_is_host_of_this_script())
		{
			if (Global_2815059.f_4451 == 0)
			{
				iVar0 = get_random_int_in_range(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_61.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_61.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_61.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_61.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_61.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_61.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_61.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_61.f_4 = Global_2815059.f_4451;
				Global_2815059.f_4451 = 0;
			}
			set_vehicle_model_is_suppressed(Local_61.f_4, true);
			Local_61.f_5 = func_62(1);
		}
		func_59(9, 1);
		start_audio_scene("JOYRIDER_RADIO_SCENE");
		Local_63[participant_id_to_int() /*3*/] = 0;
	}
	else
	{
		func_57();
	}
}

int func_62(bool bParam0)
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_63()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!network_is_game_in_progress())
		{
			return 0;
		}
		if (network_has_received_host_broadcast_data())
		{
			return 1;
		}
		if (func_55())
		{
			return 0;
		}
		if (func_53(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_58();
			}
			else
			{
				return 0;
			}
		}
		if (!func_65(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_58();
					}
					else
					{
						return 0;
					}
				}
				if (func_55())
				{
					if (!bParam2)
					{
						func_58();
					}
					else
					{
						return 0;
					}
				}
				if (func_53(157))
				{
					if (!bParam2)
					{
						func_58();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!bParam2)
				{
					func_58();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!network_is_game_in_progress())
		{
			if (!bParam2)
			{
				func_58();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!bParam2)
		{
			func_58();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_65(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_66(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!network_is_game_in_progress())
	{
		func_58();
	}
	network_set_this_script_is_network_script(iParam0, false, Param1.f_16);
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 163:
			return 32;
		
		case 164:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 165:
			return 32;
		
		case 166:
			return 32;
		
		case 170:
			return 32;
		
		case 168:
			return 32;
		
		case 169:
			return 32;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 171:
			return 32;
		
		case 172:
			return 32;
		
		case 177:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 180:
			return 32;
		
		case 181:
			return 2;
		
		case 186:
			return 1;
		
		case 182:
			return 2;
		
		case 183:
			return 4;
		
		case 184:
			return 2;
		
		case 185:
			return 2;
		
		case 167:
			return 1;
		
		case 187:
			return 2;
		
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		
		case 209:
			return 1;
		
		case 194:
			return 4;
		
		case 197:
			return 4;
		
		case 198:
			return 1;
		
		case 199:
			return 1;
		
		case 205:
			return 1;
		
		case 201:
			return 2;
		
		case 206:
			return 1;
		
		case 202:
			return 1;
		
		case 200:
			return 2;
		
		case 203:
			return 8;
		
		case 204:
			return 8;
		
		case 207:
			return 1;
		
		case 208:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 195:
			return 16;
		
		case 196:
			return 32;
		
		default:
	}
	switch (func_68(func_69(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		default:
	}
	return -1;
}

int func_69(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 181:
			return 15;
		
		case 188:
			return 8;
		
		case 182:
			return 14;
		
		case 186:
			return 122;
		
		case 189:
			return 1;
		
		case 187:
			return 5;
		
		case 190:
			return 6;
		
		case 183:
			return 11;
		
		case 191:
			return 0;
		
		case 192:
			return 2;
		
		case 184:
			return 13;
		
		case 193:
			return 3;
		
		case 185:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		default:
	}
	if (bParam1)
	{
	}
	return 304;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
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

