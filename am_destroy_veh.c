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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<48> Local_83 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_84 = 0;
	struct<3> Local_85[32];
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int* iLocal_93 = NULL;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<8> Local_101[3];
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	struct<21> Local_104 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_90 = 1076369579;
	iLocal_91 = 20;
	if (network_is_game_in_progress() && func_240(player_id(), 0, 1))
	{
		func_229(ScriptParam_104);
	}
	else
	{
		func_225();
	}
	while (true)
	{
		func_224();
		if (func_216() || func_212(17))
		{
			func_225();
		}
		if (network_is_in_tutorial_session())
		{
			func_225();
		}
		switch (func_211(participant_id_to_int()))
		{
			case 0:
				if (func_210() == 1)
				{
					func_209();
					func_207();
					if (func_206(60000))
					{
						if (!func_205())
						{
							if (!is_this_model_a_bike(Local_83.f_10))
							{
								func_204("DSV_HELP1", -1);
							}
							else
							{
								func_204("DSV_HELP2", -1);
							}
						}
					}
					Local_85[participant_id_to_int() /*3*/] = 1;
				}
				else if (func_210() == 4)
				{
					Local_85[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_210() == 1)
				{
					func_45();
				}
				else if (func_210() == 4)
				{
					Local_85[participant_id_to_int() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_44(&(Local_83.f_45));
				if (func_43(&(Local_83.f_45)))
				{
					Local_85[participant_id_to_int() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_85[participant_id_to_int() /*3*/] = 4;
			
			case 4:
				func_225();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_210())
			{
				case 0:
					if (func_10())
					{
						func_209();
						func_9(&(Local_83.f_43), 0, 0);
						Local_83.f_0 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
					if (func_1())
					{
						Local_83.f_0 = 4;
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
	struct<14> Var0;
	struct<14> Var1;
	
	if (Local_83.f_42 == 0)
	{
		if (Local_83.f_0 != 4)
		{
			if (is_entity_dead(net_to_veh(Local_83.f_2), false))
			{
				if (func_6(&(Local_83.f_47), 3000, 0))
				{
					if (Local_83.f_8 == func_5())
					{
						Var0.f_2 = 1884920006;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 613904624;
						Var0.f_10 = Local_83.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_83.f_43), Global_262145.f_11603, 0))
			{
				Var1.f_2 = -134157105;
				func_3(Var1, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = player_id();
	if (!iParam13 == 0)
	{
		_trigger_script_event_2(1, &Param0, 14, iParam13);
	}
}

int func_4(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			bVar2 = network_get_player_index(int_to_participantindex(iVar1));
			if (func_240(bVar2, 0, 0))
			{
				if (bVar2 != player_id() || iParam0)
				{
					set_bit(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5()
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7()
{
	switch (Local_83.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()
{
	struct<14> Var0;
	int iVar1;
	
	if (Local_83.f_0 != 4)
	{
		iLocal_88 = 0;
		while (iLocal_88 < network_get_max_num_participants())
		{
			if (network_is_participant_active(int_to_participantindex(iLocal_88)))
			{
				iVar1 = network_get_player_index(int_to_participantindex(iLocal_88));
				if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 0))
				{
					Var0.f_2 = 613904624;
					Var0.f_10 = iVar1;
					Local_83.f_8 = iVar1;
					func_3(Var0, func_4(1));
					Local_83.f_0 = 4;
					return;
				}
				if (!BitTest(Local_83.f_1, 0))
				{
					if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 1))
					{
						set_bit(&(Local_83.f_1), false);
					}
					if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 2))
					{
						set_bit(&(Local_83.f_1), false);
					}
				}
				else
				{
					if (!BitTest(Local_83.f_1, 1))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 3))
						{
							set_bit(&(Local_83.f_1), true);
						}
					}
					if (!BitTest(Local_83.f_1, 2))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 4))
						{
							set_bit(&(Local_83.f_1), 2);
						}
					}
					if (!BitTest(Local_83.f_1, 3))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 5))
						{
							set_bit(&(Local_83.f_1), 3);
						}
					}
					if (!BitTest(Local_83.f_1, 4))
					{
						if (BitTest(Local_85[iLocal_88 /*3*/].f_1, 6))
						{
							set_bit(&(Local_83.f_1), 4);
						}
					}
				}
			}
			iLocal_88++;
		}
	}
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	if (func_42(Local_83.f_10) && func_42(Local_83.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			set_model_as_no_longer_needed(Local_83.f_10);
			set_model_as_no_longer_needed(Local_83.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_83.f_14)
	{
		if ((!network_does_network_id_exist(Local_83.f_4[iVar0]) && func_42(Local_83.f_11)) && network_does_network_id_exist(Local_83.f_2))
		{
			if (func_17(Local_83.f_2))
			{
				if (Local_83.f_12 == 0)
				{
					if (func_16(&(Local_83.f_4[iVar0]), Local_83.f_2, 22, Local_83.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_83.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_83.f_4[iVar0]), 22, Local_83.f_11, Local_83.f_28[iVar0 /*3*/], Local_83.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_83.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_83.f_14)
	{
		if (!network_does_network_id_exist(Local_83.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	
	if (!can_register_mission_peds(1))
	{
		return 0;
	}
	iVar0 = create_ped(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_set_entity_cleanup_by_engine(iVar0, bParam7);
		if (network_get_entity_is_networked(iVar0))
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

void func_13(var uParam0)
{
	int iVar0;
	
	set_ped_relationship_group_hash(net_to_ped(*uParam0), Global_1837196);
	set_ped_random_component_variation(net_to_ped(*uParam0), 0);
	set_ped_keep_task(net_to_ped(*uParam0), true);
	give_delayed_weapon_to_ped(net_to_ped(*uParam0), func_15(), 25000, true);
	iVar0 = get_random_int_in_range(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		set_ped_combat_ability(net_to_ped(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		set_ped_combat_ability(net_to_ped(*uParam0), 2);
	}
	else
	{
		set_ped_combat_ability(net_to_ped(*uParam0), 1);
	}
	iVar0 = get_random_int_in_range(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		set_ped_combat_attributes(net_to_ped(*uParam0), 5, true);
	}
	else if (iVar0 == 3)
	{
		set_ped_combat_attributes(net_to_ped(*uParam0), 17, true);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		set_ped_combat_attributes(net_to_ped(*uParam0), 13, true);
	}
	if (func_14())
	{
		set_ped_combat_attributes(net_to_ped(*uParam0), 20, true);
	}
	set_ped_combat_attributes(net_to_ped(*uParam0), 2, true);
	iVar0 = get_random_int_in_range(0, 4);
	if (iVar0 == 0)
	{
		set_ped_combat_movement(net_to_ped(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		set_ped_combat_movement(net_to_ped(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		set_ped_combat_movement(net_to_ped(*uParam0), 3);
	}
	_0x49E50BDB8BA4DAB2(net_to_ped(*uParam0), true);
	set_ped_get_out_upside_down_vehicle(net_to_ped(*uParam0), true);
	set_ped_config_flag(net_to_ped(*uParam0), 29, true);
	set_ped_can_be_knocked_off_vehicle(net_to_ped(*uParam0), 3);
	set_entity_health(net_to_ped(*uParam0), round((200f * Global_262145.f_164)), 0);
}

int func_14()
{
	if (BitTest(get_random_int_in_range(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	switch (Local_83.f_11)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

int func_17(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_18(net_to_veh(iParam0));
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19()
{
	if ((!network_does_network_id_exist(Local_83.f_3) && func_42(Local_83.f_11)) && network_does_network_id_exist(Local_83.f_2))
	{
		if (func_17(Local_83.f_2))
		{
			if (Local_83.f_12 == 1)
			{
				if (func_12(&(Local_83.f_3), 22, Local_83.f_11, Local_83.f_24, Local_83.f_27, 1, 1, 1))
				{
					func_13(&(Local_83.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_83.f_3), Local_83.f_2, 22, Local_83.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_83.f_3));
				func_20();
			}
		}
	}
	if (!network_does_network_id_exist(Local_83.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()
{
	if (Local_83.f_12 == 0)
	{
		if (func_14())
		{
			task_vehicle_drive_wander(net_to_ped(Local_83.f_3), net_to_veh(Local_83.f_2), get_random_float_in_range(7f, 18f), 786468);
		}
		else
		{
			task_vehicle_drive_wander(net_to_ped(Local_83.f_3), net_to_veh(Local_83.f_2), get_random_float_in_range(7f, 18f), 786599);
		}
	}
	else if (Local_83.f_12 == 2)
	{
		func_209();
		task_perform_sequence(net_to_ped(Local_83.f_3), iLocal_87);
	}
}

int func_21()
{
	int iVar0;
	
	if (!network_does_network_id_exist(Local_83.f_2))
	{
		if (func_42(Local_83.f_10))
		{
			if (func_25(&(Local_83.f_16), &(Local_83.f_19)))
			{
				if (func_22(&(Local_83.f_2), Local_83.f_10, Local_83.f_16, Local_83.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					freeze_entity_position(net_to_veh(Local_83.f_2), false);
					set_entity_dynamic(net_to_veh(Local_83.f_2), true);
					activate_physics(net_to_veh(Local_83.f_2));
					set_vehicle_engine_on(net_to_veh(Local_83.f_2), true, true, false);
					_set_entity_cleanup_by_engine(net_to_veh(Local_83.f_2), false);
					if (decor_is_registered_as_type("Not_Allow_As_Saved_Veh", 3))
					{
						decor_set_int(net_to_veh(Local_83.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (decor_is_registered_as_type("MPBitset", 3))
					{
						if (decor_exist_on(net_to_veh(Local_83.f_2), "MPBitset"))
						{
							iVar0 = decor_get_int(net_to_veh(Local_83.f_2), "MPBitset");
						}
						set_bit(&iVar0, 10);
						decor_set_int(net_to_veh(Local_83.f_2), "MPBitset", iVar0);
					}
					if (Local_83.f_12 == 0)
					{
						if (get_vehicle_max_number_of_passengers(net_to_veh(Local_83.f_2)) < Local_83.f_14)
						{
							Local_83.f_14 = get_vehicle_max_number_of_passengers(net_to_veh(Local_83.f_2));
						}
					}
				}
			}
		}
	}
	if (!network_does_network_id_exist(Local_83.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_23(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_24(player_id(), Param0, iParam2) > -1)
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

int func_24(int iParam0, struct<3> Param1, int iParam2)
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

bool func_25(int iParam0, float* fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	
	Var3 = { func_41(player_id()) };
	if (Local_83.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (_0xA4822F1CF23F4810(&Var3, iParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			get_nth_closest_vehicle_node_with_heading(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (get_distance_between_coords(-1367.557f, -3220.598f, 12.9448f, Var3, true) >= 600f && get_distance_between_coords(750f, -3200f, 6f, Var3, true) >= 700f)
				{
					if (iLocal_92 <= 5)
					{
						if (func_26(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_83.f_0 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_91 += 4;
		if (iLocal_91 >= 80)
		{
			iLocal_91 = 20;
			iLocal_92++;
		}
	}
	return bVar0;
}

int func_26(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
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
		if (func_35(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_27(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_27(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_240(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (get_distance_between_coords(func_32(player_id()), Param0, true) <= (fVar2 + fParam1))
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
		if (func_240(iVar1, 1, 1))
		{
			if (!func_29(iVar1, 0) && _network_is_player_equal_to_index(player_id(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != player_id()))
				{
					if ((func_28(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
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
								if (get_distance_between_coords(func_32(iVar1), Param0, true) <= (fVar2 + fParam1))
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
							if (get_distance_between_coords(func_32(iVar1), Param0, true) <= (fVar2 + fParam1))
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

int func_28(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_30(-1, 0) == 8;
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

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()
{
	return Global_1574918;
}

Vector3 func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_34() && Global_1853348[iVar0 /*834*/].f_804) && !func_33(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_41(iParam0);
}

int func_33(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_34()
{
	return Global_2714762.f_19;
}

int func_35(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && player_id() != iVar1) || iParam6 == 0)
		{
			if (func_240(iVar1, bParam2, bParam3))
			{
				if (iParam8 || _network_is_player_equal_to_index(player_id(), iVar1))
				{
					if (!bParam5 || (!is_ped_injured(get_player_ped(iVar1)) && func_28(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam7) && bParam4) && func_36(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_41(iVar1), Param0, true) < fParam1)
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

int func_36(int iParam0)
{
	if (func_40(player_id(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_39(iParam0) };
	if (network_is_friend(&Global_2787505))
	{
		return 1;
	}
	if (func_37(player_id(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_38(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_5();
}

struct<13> func_39(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

int func_40(int iParam0, int iParam1)
{
	if (network_clan_service_is_valid())
	{
		Global_2787505 = { func_39(iParam0) };
		Global_2787518 = { func_39(iParam1) };
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

Vector3 func_41(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

int func_43(var uParam0)
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

void func_44(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_45()
{
	switch (Local_85[participant_id_to_int() /*3*/].f_2)
	{
		case 0:
			func_207();
			func_51();
			func_46();
			if (Local_83.f_42 > 0)
			{
				Local_85[participant_id_to_int() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_225();
			break;
	}
}

void func_46()
{
	int iVar0;
	
	func_47(Local_83.f_3, &iLocal_93, -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
	iVar0 = 0;
	while (iVar0 < Local_83.f_14)
	{
		func_47(Local_83.f_4[iVar0], &(Local_101[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
		iVar0++;
	}
	if (BitTest(Local_83.f_1, 0))
	{
		if (!BitTest(Local_83.f_1, 1) && !BitTest(Local_85[participant_id_to_int() /*3*/].f_1, 3))
		{
			if (network_does_network_id_exist(Local_83.f_3))
			{
				if (network_has_control_of_network_id(Local_83.f_3) || (!is_network_id_owned_by_participant(Local_83.f_3) && network_is_host_of_this_script()))
				{
					set_ped_relationship_group_hash(net_to_ped(Local_83.f_3), Global_1837197);
					set_bit(&(Local_85[participant_id_to_int() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!BitTest(Local_83.f_1, (2 + iVar0)) && !BitTest(Local_85[participant_id_to_int() /*3*/].f_1, (4 + iVar0)))
			{
				if (network_does_network_id_exist(Local_83.f_4[iVar0]))
				{
					if (network_has_control_of_network_id(Local_83.f_4[iVar0]) || (!is_network_id_owned_by_participant(Local_83.f_4[iVar0]) && network_is_host_of_this_script()))
					{
						set_ped_relationship_group_hash(net_to_ped(Local_83.f_4[iVar0]), Global_1837197);
						if (!is_ped_injured(net_to_ped(Local_83.f_4[iVar0])))
						{
							task_combat_hated_targets_around_ped(net_to_ped(Local_83.f_4[iVar0]), 100f, 0);
						}
						set_bit(&(Local_85[participant_id_to_int() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_47(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (network_does_network_id_exist(iParam0))
	{
		if (func_50(0))
		{
			Global_2703735 = player_id();
		}
		if (bParam3)
		{
			func_49(net_to_ped(iParam0), iParam1, 1, Global_2703735, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_49(net_to_ped(iParam0), iParam1, -1, Global_2703735, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (does_blip_exist(*iParam1))
	{
		func_48(iParam1);
	}
}

void func_48(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
		bVar0 = true;
	}
	if (does_blip_exist(iParam0->f_1))
	{
		remove_blip(&(iParam0->f_1));
		bVar0 = true;
	}
	if (does_entity_exist(iParam0->f_7))
	{
		if (!is_entity_dead(iParam0->f_7, false))
		{
			if (does_ped_have_ai_blip(iParam0->f_7))
			{
				set_ped_has_ai_blip(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_49(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!is_ped_injured(iParam0))
	{
		if (!does_ped_have_ai_blip(iParam0))
		{
			bVar0 = true;
			if (is_ped_in_flying_vehicle(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					set_ped_has_ai_blip(iParam0, true);
				}
				else
				{
					_set_ped_has_ai_blip_with_color(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				set_ped_ai_blip_gang_id(iParam0, iParam2);
				set_ped_ai_blip_notice_range(iParam0, fParam6);
				if (does_blip_exist(*uParam1))
				{
					set_blip_priority(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			_set_ped_ai_blip_sprite(iParam0, iParam9);
		}
		set_ped_ai_blip_forced_on(iParam0, bParam4);
		set_ped_ai_blip_has_cone(iParam0, bParam5);
		*uParam1 = _get_ai_blip_2(iParam0);
		if (!iParam9 == -1)
		{
			if (does_blip_exist(*uParam1))
			{
				if (!iParam8 == -1)
				{
					set_blip_colour(*uParam1, iParam8);
				}
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("STRING");
					if (bParam10)
					{
						add_text_component_substring_player_name(sParam7);
					}
					else
					{
						add_text_component_substring_text_label(sParam7);
					}
					end_text_command_set_blip_name(*uParam1);
				}
				set_blip_priority(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				set_bit(&(uParam1->f_6), 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, false))
		{
			uParam1->f_1 = _get_ai_blip(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (does_blip_exist(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						set_blip_colour(uParam1->f_1, iParam8);
					}
					if (!is_string_null_or_empty(sParam7))
					{
						begin_text_command_set_blip_name("STRING");
						if (bParam10)
						{
							add_text_component_substring_player_name(sParam7);
						}
						else
						{
							add_text_component_substring_text_label(sParam7);
						}
						end_text_command_set_blip_name(uParam1->f_1);
					}
					set_blip_priority(uParam1->f_1, 7);
					set_bit(&(uParam1->f_6), 3);
				}
			}
			else if (!does_blip_exist(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				clear_bit(&(uParam1->f_6), 3);
			}
		}
		else if (does_blip_exist(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			clear_bit(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_50(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_51()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (network_does_network_id_exist(Local_83.f_2))
	{
		if (!BitTest(Local_85[participant_id_to_int() /*3*/].f_1, 0))
		{
			if (!is_vehicle_driveable(net_to_veh(Local_83.f_2), false))
			{
			}
			if (is_entity_dead(net_to_veh(Local_83.f_2), false))
			{
			}
			if (is_entity_dead(net_to_veh(Local_83.f_2), false))
			{
				if (player_id() == network_get_destroyer_of_network_id(Local_83.f_2, &uVar0))
				{
					func_201(2106, 1, -1);
					func_198(68, 1, -1);
					func_148(0, player_ped_id(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_8567, 1, -1, 0, 0, 0);
					if (func_14())
					{
						func_135(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_135(86, "DSV_PASS1", 0, 0, -99);
					}
					iVar1 = Global_262145.f_8568;
					Global_2727753 = iVar1;
					func_76(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_72(iVar1, 1, 1, 1092616192);
						if (func_71())
						{
							func_59(-1922554349, iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							network_earn_from_ambient_job(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					set_bit(&(Local_85[participant_id_to_int() /*3*/].f_1), false);
				}
			}
			else
			{
				if (!BitTest(Local_83.f_1, 0))
				{
					if (!BitTest(Local_85[participant_id_to_int() /*3*/].f_1, 1))
					{
						if (func_58(player_ped_id(), net_to_veh(Local_83.f_2), 1))
						{
							set_bit(&(Local_85[participant_id_to_int() /*3*/].f_1), true);
						}
					}
					if (!BitTest(Local_85[participant_id_to_int() /*3*/].f_1, 2))
					{
						if (has_entity_been_damaged_by_entity(net_to_veh(Local_83.f_2), player_ped_id(), true))
						{
							set_bit(&(Local_85[participant_id_to_int() /*3*/].f_1), 2);
						}
					}
				}
				if (func_240(player_id(), 1, 1) && func_58(player_ped_id(), net_to_veh(Local_83.f_2), 0))
				{
					if (!BitTest(Global_2815059.f_4662, 1))
					{
						set_bit(&(Global_2815059.f_4662), true);
					}
				}
				else if (BitTest(Global_2815059.f_4662, 1))
				{
					clear_bit(&(Global_2815059.f_4662), true);
				}
				func_52();
			}
		}
	}
}

void func_52()
{
	if (!BitTest(uLocal_86, 0))
	{
		if (func_57(27, -1) == 0)
		{
			if (func_240(player_id(), 1, 1))
			{
				if (func_58(player_ped_id(), net_to_veh(Local_83.f_2), 0))
				{
					if (func_6(&uLocal_102, 300000, 0))
					{
						func_55(27, 1, -1);
						set_bit(&uLocal_86, false);
					}
				}
				else if (func_54(&uLocal_102))
				{
					func_53(&uLocal_102);
				}
			}
			else if (func_54(&uLocal_102))
			{
				func_53(&uLocal_102);
			}
		}
		else
		{
			set_bit(&uLocal_86, false);
		}
	}
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_54(var uParam0)
{
	return uParam0->f_1;
}

void func_55(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2869167[iParam0 /*3*/][func_56(iParam2)];
	stat_set_bool(iVar0, bParam1, true);
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
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

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2869167[iParam0 /*3*/][func_56(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0, false))
	{
		if ((does_entity_exist(iParam1) && !is_entity_dead(iParam1, false)) && is_entity_a_vehicle(iParam1))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_59(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_71())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_60(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_60(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_60(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_60(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_60(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_71())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!net_gameserver_is_session_valid(func_31()) || net_gameserver_is_session_refresh_pending())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || net_gameserver_begin_service(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || net_gameserver_checkout_start(iVar4))
		{
			*uParam0 = func_67(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_66(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_61(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2689235[player_id() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_62(iParam0);
	}
}

void func_62(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_71())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_65(iParam0))
		{
			if (!bVar0)
			{
				net_gameserver_basket_end();
			}
		}
		else if (!bVar0)
		{
			net_gameserver_end_service(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_63(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_63(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_64(&(uParam0->f_14));
	func_64(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_64(var uParam0)
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

int func_65(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_66(int iParam0, int iParam1)
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_71())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = get_frame_count();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_68(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_68(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = player_id();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_70(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_69();
		_trigger_script_event_2(1, &Var0, 36, iVar1);
	}
}

void func_69()
{
	request_script("AM_ARENA_SHP");
}

var func_70(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		set_bit(&uVar0, bParam0);
	}
	return uVar0;
}

int func_71()
{
	if (is_pc_version())
	{
		return _net_gameserver_use_server_transactions();
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_73(iParam0, iParam1, iParam2, fParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_74(iParam0, iParam1, iParam2, fParam3);
}

void func_74(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[player_id() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[player_id() /*834*/].f_205.f_3 = (Global_1853348[player_id() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_75(iVar1, 0);
	}
}

void func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_76(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_134())
		{
			if (func_133(0))
			{
				if (!func_129(0))
				{
					if (network_is_player_active(func_128()))
					{
						if (func_127() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_127());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_125(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_81("GB_BCUT_TICK1", func_128(), iVar0, 0, 0, 1);
						}
						func_80(20);
						func_77(func_128(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_77(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_240(bParam0, 0, 1))
	{
		Var0.f_0 = 1146470621;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_79(bParam0);
		func_78(&(Var0.f_6), &(Var0.f_7));
		_trigger_script_event_2(1, &Var0, 8, func_70(bParam0));
	}
}

void func_78(var uParam0, var uParam1)
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

var func_79(int iParam0)
{
	return Global_1892703[iParam0 /*599*/].f_510;
}

void func_80(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	set_bit(&(Global_2815059.f_5195.f_7[iVar0]), bVar1);
}

int func_81(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (_network_is_player_equal_to_index(player_id(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		if (is_string_null_or_empty(&Var1))
		{
		}
		begin_text_command_thefeed_post(sParam0);
		set_colour_of_next_text_component(func_88(iParam1, -2, 1, 0, 0));
		add_text_component_substring_player_name(func_86(&Var1));
		if (!iParam3 == 0)
		{
			set_colour_of_next_text_component(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = end_text_command_thefeed_post_ticker(false, true);
		func_82(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_82(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_85() || !network_is_activity_session()) || !func_29(player_id(), 0))
	{
		return;
	}
	iVar0 = func_83(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_84(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_85()
{
	return is_dlc_present(-1762644250);
}

var func_86(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_87(&cVar0);
}

var func_87(char[4] cParam0)
{
	return cParam0;
}

int func_88(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_123(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = get_player_team(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_123(player_id()) || (func_122() && func_121())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_120();
		if (does_entity_exist(iVar1))
		{
			if (is_ped_a_player(iVar1))
			{
				if (network_get_player_index_from_ped(iVar1) != -1)
				{
					if (func_240(network_get_player_index_from_ped(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_118(iParam1, iParam0, 0);
							}
							else
							{
								return func_101(iParam0, network_get_player_index_from_ped(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_101(iParam0, network_get_player_index_from_ped(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_118(iParam1, iParam0, 0);
				}
				else
				{
					return func_89(0, -1, 0);
				}
			}
			else
			{
				return func_89(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_118(iParam1, iParam0, 0);
		}
		else
		{
			return func_101(iParam0, player_id(), iParam1, bParam2, bParam3);
		}
	}
	return func_101(iParam0, player_id(), iParam1, bParam2, bParam3);
}

int func_89(bool bParam0, int iParam1, bool bParam2)
{
	return func_90(player_id(), bParam0, iParam1, bParam2);
}

int func_90(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!network_is_player_active(iParam0))
	{
		return 3;
	}
	iVar0 = get_player_team(iParam0);
	if ((func_100() || (func_99() && func_97())) && Global_1659814.f_1)
	{
		if (bParam1)
		{
			return func_96(iParam2, iVar0);
		}
		else
		{
			return func_96(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_95(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_94(1);
				}
				else
				{
					return func_94(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_91(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_91(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_94(1);
	}
	return func_94(0);
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_93(iParam0, iParam1, iParam3);
	if (func_92(Global_4718592.f_116524, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_95(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_94(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_97()
{
	if (func_98())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

bool func_98()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_99()
{
	if (network_is_activity_session())
	{
		return BitTest(Global_4718592.f_172946, 0);
	}
	return ((BitTest(Global_4718592.f_172946, 0) || Global_1922895) && _get_number_of_references_of_script_with_name_hash(joaat("fm_deathmatch_creator")) > 0);
}

int func_100()
{
	if (func_98() && network_is_activity_session())
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = get_player_team(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[player_id() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_109())
			{
				iVar3 = func_106(iParam0);
				if (!iVar3 == -1)
				{
					return func_104(iVar3);
				}
			}
			if ((func_103(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_95(get_player_team(iParam1), get_player_team(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_94(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_102(1);
			}
			else
			{
				return func_90(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return func_94(1);
			}
			else
			{
				return func_90(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_106(iParam0);
	if (!iVar4 == -1)
	{
		return func_104(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_102(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return 0;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_105(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_105(int iParam0)
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_106(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_107(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_38(iParam0)];
		}
	}
	return -1;
}

bool func_107(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_5();
}

int func_108(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_5())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_109()
{
	if ((((((func_117() || func_116()) || func_34()) || func_115()) || func_114()) || func_112()) || func_110())
	{
		return 1;
	}
	if (network_is_activity_session() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	return func_111(Global_4718592.f_116524);
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_112()
{
	return func_113(Global_4718592.f_116524);
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_114()
{
	return Global_2714762.f_24;
}

var func_115()
{
	return Global_2714762.f_21;
}

var func_116()
{
	return Global_2714762.f_18;
}

var func_117()
{
	return Global_2714762.f_17;
}

int func_118(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058069.f_14[iParam0];
	if (func_109())
	{
		iVar2 = func_106(iParam1);
		if (!iVar2 == -1)
		{
			return func_104(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = func_90(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_119(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_95(iParam0, get_player_team(iParam1), 0))
		{
			iVar0 = func_102(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_168917;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_120()
{
	return Global_2621446.f_2;
}

var func_121()
{
	return BitTest(Global_2621446, 4);
}

var func_122()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 14);
}

int func_123(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_124())
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

bool func_124()
{
	return BitTest(Global_2621446, 3);
}

void func_125(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_126(1);
	}
	else
	{
		iVar1 = func_126(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_126(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12862;
}

int func_127()
{
	return Global_262145.f_12861;
}

bool func_128()
{
	return Global_1892703[player_id() /*599*/].f_10;
}

bool func_129(bool bParam0)
{
	return func_130(player_id(), bParam0);
}

int func_130(int iParam0, bool bParam1)
{
	return func_131(iParam0, bParam1, 1);
}

int func_131(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_132(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_5() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_5())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_133(bool bParam0)
{
	return func_107(player_id(), bParam0);
}

bool func_134()
{
	return func_108(player_id());
}

void func_135(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_136(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_136(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_137(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_137(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	if (get_length_of_literal_string_in_bytes(sParam1) > 15)
	{
		return;
	}
	if (!is_string_null_or_empty(sParam4))
	{
		if (get_length_of_literal_string_in_bytes(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_146();
	if (iVar0 == -1)
	{
		return;
	}
	func_145(iVar0);
	func_144(iVar0, uParam0);
	func_143(iVar0, uParam2, bParam3);
	func_142(iVar0, sParam1);
	if (is_string_null_or_empty(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_141(iVar0);
	if (!is_string_null_or_empty(sParam4))
	{
		func_139(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_138(iVar0, iParam6);
	}
}

void func_138(int iParam0, int iParam1)
{
	Global_1641031.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_139(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1641031.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_140(iParam0);
}

void func_140(int iParam0)
{
	set_bit(&(Global_1641031.f_59[iParam0 /*16*/]), 5);
}

void func_141(int iParam0)
{
	set_bit(&(Global_1641031.f_59[iParam0 /*16*/]), 4);
}

void func_142(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1641031.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_143(int iParam0, var uParam1, bool bParam2)
{
	Global_1641031.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		set_bit(&(Global_1641031.f_59[iParam0 /*16*/]), 2);
		clear_bit(&(Global_1641031.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		set_bit(&(Global_1641031.f_59[iParam0 /*16*/]), 3);
		clear_bit(&(Global_1641031.f_59[iParam0 /*16*/]), 2);
	}
}

void func_144(int iParam0, var uParam1)
{
	Global_1641031.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_145(int iParam0)
{
	set_bit(&(Global_1641031.f_59[iParam0 /*16*/]), false);
}

int func_146()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_147(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_147(int iParam0)
{
	return BitTest(Global_1641031.f_59[iParam0 /*16*/], 0);
}

int func_148(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_149(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_149(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_159(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (network_is_activity_session() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (does_entity_exist(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_155(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_150(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_150(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_153(iParam0, 1) };
	if (iParam0 == func_152(player_ped_id()))
	{
		func_151(1);
	}
	func_155(Var0, iParam1, 0, sParam2, iParam3);
}

void func_151(int iParam0)
{
	Global_2703735.f_1568 = iParam0;
}

int func_152(int iParam0)
{
	return iParam0;
}

Vector3 func_153(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (is_gameplay_cam_rendering())
	{
		Var1 = { get_gameplay_cam_rot(2) };
	}
	if (iParam0 == func_154(player_ped_id()) && get_cam_view_mode_for_context(_get_cam_active_view_mode_context()) == 4)
	{
		Var0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { get_entity_coords(iParam0, false) };
	}
	fVar2 = 0f;
	if (!is_entity_dead(iParam0, false))
	{
		fVar2 = get_entity_heading(iParam0);
		if (get_cam_view_mode_for_context(_get_cam_active_view_mode_context()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	get_model_dimensions(get_entity_model(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { _get_object_offset_from_coords(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_154(int iParam0)
{
	return iParam0;
}

void func_155(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703735.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703735.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703735.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703735.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703735.f_967[iVar1 /*30*/].f_4 = func_158(Global_2703735.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703735.f_967[iVar1 /*30*/].f_7 = get_network_time();
			Global_2703735.f_967[iVar1 /*30*/].f_3 = iParam1;
			Global_2703735.f_967[iVar1 /*30*/].f_8 = iParam2;
			Global_2703735.f_967[iVar1 /*30*/].f_9 = func_157();
			Global_2703735.f_967[iVar1 /*30*/].f_10 = func_156();
			StringCopy(&(Global_2703735.f_967[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703735.f_967[iVar1 /*30*/].f_26 = get_time_offset(get_network_time(), iParam4);
		}
	}
}

int func_156()
{
	if (Global_2703735.f_1568)
	{
		Global_2703735.f_1568 = 0;
		return 1;
	}
	Global_2703735.f_1568 = 0;
	return 0;
}

var func_157()
{
	var uVar0;
	
	uVar0 = Global_2703735.f_1570;
	Global_2703735.f_1570 = 1;
	return uVar0;
}

float func_158(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = get_distance_between_coords(get_gameplay_cam_coord(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_160(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_160(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_189();
	if (func_188(sParam2))
	{
	}
	if (func_187())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_185(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_184(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_182(0, &iVar1);
					break;
				
				case 3:
					func_182(1, &iVar1);
					break;
				
				case 1:
					func_180(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_201(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_170((func_179(player_id()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1853348[player_id() /*834*/].f_36.f_2 != -1)
				{
					func_201(1166, iVar1, -1);
				}
				func_165(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_161((func_163(player_id()) + iVar1));
			}
			else
			{
				func_161((func_163(player_id()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_161(int iParam0)
{
	if (func_187())
	{
		Global_1853348[player_id() /*834*/].f_205.f_5 = iParam0;
		func_162(joaat("mpply_globalxp"), iParam0);
	}
}

void func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, true);
	}
}

int func_163(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_240(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_164(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_164(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_165(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_39(player_id()) };
	if (network_clan_service_is_valid())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar1 = func_168(func_169(&Var0));
			if (iVar1 == 0)
			{
				func_167(&Global_1659614, iParam0);
				func_166(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				func_167(&Global_1659615, iParam0);
				func_166(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				func_167(&Global_1659616, iParam0);
				func_166(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				func_167(&Global_1659617, iParam0);
				func_166(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				func_167(&Global_1659618, iParam0);
				func_166(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_168(int iParam0)
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_169(var* uParam0)
{
	if (network_clan_service_is_valid())
	{
		if (network_clan_player_is_active(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	if (func_187())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_56(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_56(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 == 0)
			{
				playstats_award_xp(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 < 0)
			{
				playstats_award_xp(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_178(player_id()))
		{
			Global_1853348[player_id() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[player_id() /*834*/].f_205.f_6 = func_176(iParam0, 1);
		}
		func_175(640, iParam0, -1, 1);
		func_174(641, func_176(iParam0, 1), -1, 1, 0);
		Global_1659759[func_56(-1)] = iParam0;
		func_171(-1109644434, 7, 0);
	}
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_173(iParam1, iParam2))
	{
		iVar0 = func_172();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_172()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_173(int iParam0, var uParam1)
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_174(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_56(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

void func_175(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_56(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_56(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_56(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_56(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_56(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_56(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_56(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_56(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_56(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_56(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_56(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_56(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_56(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_56(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_56(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_56(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_56(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_56(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_56(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_56(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_56(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_56(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_56(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_56(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_56(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_56(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_56(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_56(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_56(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_56(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_56(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_56(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_56(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_56(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_56(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_56(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_56(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_56(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_56(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_56(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_56(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_56(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_56(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_56(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_56(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_56(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_56(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_56(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_56(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_56(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_56(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_56(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_56(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_56(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_177(iParam0, 0);
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_178(int iParam0)
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

int func_179(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1659759[func_56(-1)];
			}
			else if (func_178(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_56(-1)];
	}
	return 0;
}

void func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = get_player_team(player_id());
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar4))
		{
			iVar5 = network_get_player_index(iVar4);
			if (get_player_team(iVar5) != -1)
			{
				if (get_player_team(iVar5) == iVar1 || func_95(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_40(player_id(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_181(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_181(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_181(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_182(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < network_get_max_num_participants())
		{
			iVar3 = iVar0;
			if (network_is_participant_active(iVar3))
			{
				iVar4 = network_get_player_index(iVar3);
				if (func_240(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_40(player_id(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_240(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_183(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_40(player_id(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_181(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_181(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_183(int iParam0, int iParam1)
{
	return vdist(func_41(iParam0), func_41(iParam1));
	return 0f;
}

int func_184(int iParam0)
{
	int iVar0;
	
	if (get_local_player_aim_state() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_181(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_185(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_179(player_id()))
		{
			iParam0 = -func_179(player_id());
		}
	}
	if (func_186(8000, 0, 0) > 0)
	{
		if (func_186(8000, 0, 0) < (iParam0 + func_179(player_id())))
		{
			iParam0 = (func_186(8000, 0, 0) - func_179(player_id()));
		}
	}
	return iParam0;
}

int func_186(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_295824[iParam0];
}

int func_187()
{
	return 1;
}

int func_188(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return 1;
	}
	else if (are_strings_equal(sParam0, "") || are_strings_equal(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_189()
{
	int iVar0;
	
	if (func_197(player_id()) || func_196(player_id()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_194() || func_190(player_id()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_190(int iParam0)
{
	return func_191(func_192(iParam0));
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_192(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (network_is_activity_session())
	{
		return func_34();
	}
	return func_195(Global_4718592.f_116524);
}

int func_195(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_196(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_197(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_198(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_200(iParam0, func_56(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_199(iParam0, iVar0, iParam2);
}

void func_199(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_56(uParam2)];
	stat_set_int(iVar0, iParam1, true);
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_56(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_203(iParam0, func_56(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_202(iParam0))
	{
		func_174(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_175(iParam0, iVar0, iParam2, 1);
	}
}

int func_202(int iParam0)
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_203(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_56(uParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_204(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

int func_205()
{
	return 1;
}

bool func_206(int iParam0)
{
	return absi(get_time_difference(Global_2676209, get_network_time())) > iParam0;
}

void func_207()
{
	if (does_blip_exist(iLocal_89))
	{
		if (func_205() || func_208())
		{
			set_blip_display(iLocal_89, 0);
		}
		else
		{
			set_blip_display(iLocal_89, 4);
		}
	}
	else if (network_does_entity_exist_with_network_id(Local_83.f_2))
	{
		if (!is_entity_dead(net_to_veh(Local_83.f_2), false))
		{
			iLocal_89 = add_blip_for_entity(net_to_veh(Local_83.f_2));
			if (!is_this_model_a_bike(Local_83.f_10))
			{
				set_blip_sprite(iLocal_89, 225);
			}
			else
			{
				set_blip_sprite(iLocal_89, 348);
			}
			set_blip_colour(iLocal_89, 1);
			set_blip_flash_timer(iLocal_89, 7000);
			set_blip_priority(iLocal_89, 6);
			set_blip_name_from_text_file(iLocal_89, "DSV_BLIP");
			if (func_205())
			{
				set_blip_display(iLocal_89, 0);
			}
		}
	}
}

var func_208()
{
	return Global_2678393.f_1865;
}

void func_209()
{
	if (Local_83.f_12 == 2)
	{
		if (network_does_entity_exist_with_network_id(Local_83.f_2))
		{
			if (is_vehicle_driveable(net_to_veh(Local_83.f_2), false))
			{
				open_sequence_task(&iLocal_87);
				task_vehicle_drive_to_coord_longrange(0, net_to_veh(Local_83.f_2), Local_83.f_20, 7f, iLocal_90, 3f);
				task_leave_any_vehicle(0, 0, 0);
				task_follow_nav_mesh_to_coord(0, Local_83.f_24, 1f, -1, 0.25f, false, Local_83.f_27);
				close_sequence_task(iLocal_87);
			}
		}
	}
}

int func_210()
{
	return Local_83.f_0;
}

int func_211(int iParam0)
{
	return Local_85[iParam0 /*3*/];
}

bool func_212(int iParam0)
{
	return !func_213(iParam0);
}

int func_213(int iParam0)
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
			if (func_215(player_id(), 7))
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
			if (func_215(player_id(), 7))
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
			if (func_215(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(player_id(), 7))
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
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(player_id(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 0) || BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(player_id(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(player_id(), 7))
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

int func_214(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_240(int_to_playerindex(iVar0), 0, 1))
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

bool func_215(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_216()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_223())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_222())
	{
		return 1;
	}
	if (func_221(159))
	{
		if (!func_220())
		{
			return 1;
		}
	}
	if (func_221(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_217() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_217()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_217()
{
	switch (func_219())
	{
		case 0:
			return func_218();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_218()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_219()
{
	return Global_31959;
}

bool func_220()
{
	return Global_2714762.f_698;
}

int func_221(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_222()
{
	return Global_2725403;
}

bool func_223()
{
	return Global_2714762.f_693;
}

void func_224()
{
	wait(0);
}

void func_225()
{
	if (does_blip_exist(iLocal_89))
	{
		remove_blip(&iLocal_89);
	}
	func_228();
	if (func_210() == 4 && Local_83.f_10 != 0)
	{
		set_vehicle_model_is_suppressed(Local_83.f_10, false);
	}
	clear_bit(&(Global_2815059.f_4662), true);
	func_227(17, 0);
	func_226();
}

void func_226()
{
	terminate_this_thread();
}

void func_227(bool bParam0, bool bParam1)
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

void func_228()
{
	if (Local_83.f_12 == 2)
	{
		clear_sequence_task(&iLocal_87);
	}
}

void func_229(struct<21> Param0)
{
	func_236(func_237(Param0.f_0), Param0);
	reserve_network_mission_peds(4);
	reserve_network_mission_vehicles(1);
	func_235(0, -1, 0);
	network_register_host_broadcast_variables(&Local_83, 49, 0);
	network_register_player_broadcast_variables(&Local_85, 97, 0);
	if (!func_234())
	{
		func_225();
	}
	if (network_is_game_in_progress())
	{
		set_this_script_can_be_paused(false);
		if (network_is_host_of_this_script())
		{
			func_230();
			Local_83.f_8 = func_5();
		}
		func_227(17, 1);
		Local_85[participant_id_to_int() /*3*/] = 0;
	}
	else
	{
		func_225();
	}
}

void func_230()
{
	func_233();
	Local_83.f_12 = get_random_int_in_range(0, 3);
	if (Local_83.f_12 == 1 || Local_83.f_12 == 2)
	{
		Local_83.f_15 = get_random_int_in_range(0, 5);
		if (Local_83.f_12 == 1)
		{
			func_232(&(Local_83.f_16), &(Local_83.f_19));
		}
		else
		{
			func_232(&(Local_83.f_20), &(Local_83.f_23));
		}
		func_231();
	}
	Local_83.f_14 = get_random_int_in_range(0, 3);
	if (Global_262145.f_8571 >= 0 && Global_262145.f_8571 < 5)
	{
		Local_83.f_13 = Global_262145.f_8571;
	}
	else
	{
		Local_83.f_13 = get_random_int_in_range(0, 5);
	}
}

void func_231()
{
	switch (Local_83.f_15)
	{
		case 0:
			Local_83.f_24 = { -2195.782f, -420.2502f, 12.0819f };
			Local_83.f_27 = 117.3927f;
			Local_83.f_28[0 /*3*/] = { -2189.975f, -422.8502f, 12.0709f };
			Local_83.f_38[0] = 152.6699f;
			Local_83.f_28[1 /*3*/] = { -2184.031f, -400.948f, 12.2027f };
			Local_83.f_38[1] = 337.9892f;
			Local_83.f_28[2 /*3*/] = { -2175.282f, -426.3756f, 12.128f };
			Local_83.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_83.f_24 = { -981.5774f, -1487.319f, 4.5867f };
			Local_83.f_27 = 300.0815f;
			Local_83.f_28[0 /*3*/] = { -977.8269f, -1494.568f, 4.5867f };
			Local_83.f_38[0] = 0.731f;
			Local_83.f_28[1 /*3*/] = { -977.7324f, -1491.717f, 4.5867f };
			Local_83.f_38[1] = 173.7717f;
			Local_83.f_28[2 /*3*/] = { -954.6693f, -1486.713f, 4.16f };
			Local_83.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_83.f_24 = { 697.3923f, -1375.27f, 25.196f };
			Local_83.f_27 = 111.1953f;
			Local_83.f_28[0 /*3*/] = { 717.8624f, -1360.491f, 25.0461f };
			Local_83.f_38[0] = 55.1674f;
			Local_83.f_28[1 /*3*/] = { 703.9843f, -1361.094f, 24.6728f };
			Local_83.f_38[1] = 306.7133f;
			Local_83.f_28[2 /*3*/] = { 707.1707f, -1388.706f, 25.2759f };
			Local_83.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_83.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_83.f_27 = 180.4109f;
			Local_83.f_28[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_83.f_38[0] = 43.0354f;
			Local_83.f_28[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_83.f_38[1] = 191.8736f;
			Local_83.f_28[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_83.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_83.f_24 = { 862.7026f, 2875.148f, 56.9868f };
			Local_83.f_27 = 206.7217f;
			Local_83.f_28[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_83.f_38[0] = 191.0122f;
			Local_83.f_28[1 /*3*/] = { 865.2399f, 2853.536f, 56.2583f };
			Local_83.f_38[1] = 305.8056f;
			Local_83.f_28[2 /*3*/] = { 867.6559f, 2841.155f, 56.944f };
			Local_83.f_38[2] = 235.4465f;
			break;
	}
}

void func_232(var uParam0, var uParam1)
{
	switch (Local_83.f_15)
	{
		case 0:
			*uParam0 = { -2192.39f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.866f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.477f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_233()
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(0, 8);
	if (Global_262145.f_8570 >= 0 && Global_262145.f_8570 < 8)
	{
		iVar0 = Global_262145.f_8570;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_83.f_10 = joaat("baller");
			}
			else
			{
				Local_83.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_83.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_83.f_10 = joaat("emperor");
			}
			else
			{
				Local_83.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_83.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_83.f_10 = joaat("daemon");
			}
			else
			{
				Local_83.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_83.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_83.f_10 = joaat("pcj");
			}
			else
			{
				Local_83.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_83.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_83.f_10 = joaat("rocoto");
			}
			else
			{
				Local_83.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_83.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_83.f_10 = joaat("journey");
			}
			else
			{
				Local_83.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_83.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_83.f_10 = joaat("habanero");
			}
			else
			{
				Local_83.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_83.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_83.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_83.f_10 = joaat("dubsta");
			}
			if (func_14())
			{
				Local_83.f_11 = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_83.f_11 = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}

int func_234()
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
		if (func_223())
		{
			return 0;
		}
		if (func_221(157))
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

int func_235(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_226();
			}
			else
			{
				return 0;
			}
		}
		if (!func_50(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_226();
					}
					else
					{
						return 0;
					}
				}
				if (func_223())
				{
					if (!bParam2)
					{
						func_226();
					}
					else
					{
						return 0;
					}
				}
				if (func_221(157))
				{
					if (!bParam2)
					{
						func_226();
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
					func_226();
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
				func_226();
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
			func_226();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_236(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!network_is_game_in_progress())
	{
		func_226();
	}
	network_set_this_script_is_network_script(iParam0, false, Param1.f_16);
}

int func_237(int iParam0)
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
	switch (func_238(func_239(iParam0, 1)))
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

int func_238(int iParam0)
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

int func_239(int iParam0, bool bParam1)
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

int func_240(int iParam0, bool bParam1, bool bParam2)
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
