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
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71[2] = { 0f, 0f };
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<21> Local_77 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> Local_79 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
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
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_68 = -1f;
	iLocal_72 = 23;
	if (network_is_game_in_progress())
	{
		func_96(ScriptParam_79);
	}
	while (true)
	{
		func_95();
		if (func_87())
		{
			func_84();
		}
		if (network_is_host_of_this_script())
		{
			if (Global_2815059.f_444)
			{
				Local_77.f_20 = 1;
				if (network_get_num_participants() == 1)
				{
					func_84();
				}
			}
		}
		else if (Local_77.f_20)
		{
			func_84();
		}
		if (network_is_game_in_progress())
		{
			func_83();
			switch (func_82(participant_id_to_int()))
			{
				case 0:
					if (func_81() > 0)
					{
						iLocal_78[participant_id_to_int()] = 2;
					}
					break;
				
				case 2:
					func_61();
					if (func_81() == 3)
					{
						iLocal_78[participant_id_to_int()] = 3;
					}
					break;
				
				case 3:
					func_84();
					break;
			}
			if (network_is_host_of_this_script())
			{
				switch (func_81())
				{
					case 0:
						Local_77.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_77.f_1.f_2 == 5)
	{
		Local_77.f_0 = 3;
	}
	if (func_6(&(Local_77.f_1.f_17)))
	{
		if (func_4(&(Local_77.f_1.f_17), 20000, 0))
		{
			Local_77.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_77.f_0 = 3;
	}
	if (bLocal_62)
	{
		if (!network_is_in_tutorial_session())
		{
			Local_77.f_0 = 3;
		}
	}
	else if (network_is_in_tutorial_session())
	{
		Local_77.f_0 = 3;
	}
	if (func_2())
	{
		Local_77.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1922955.f_3;
}

bool func_3()
{
	return Global_1574582;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)
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

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_60(1);
			break;
		
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					func_5(&(Local_77.f_1.f_15), 0, 0);
					func_60(2);
				}
			}
			break;
		
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_60(3);
				func_14(0);
			}
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[1 /*2*/]))
			{
				func_60(3);
			}
			else
			{
				if (func_6(&(Local_77.f_1.f_15)))
				{
					if (func_4(&(Local_77.f_1.f_15), Global_262145.f_11082, 0))
					{
						func_60(3);
					}
				}
				if (func_10(player_id(), 0))
				{
					func_60(3);
				}
				if (bLocal_63)
				{
					func_60(3);
				}
				if (func_8(player_id(), 136))
				{
					func_60(3);
				}
			}
			break;
		
		case 3:
			func_18();
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

int func_11(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return is_ped_injured(net_to_ped(iParam0));
	}
	return 1;
}

int func_12(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_13(net_to_veh(iParam0));
	}
	return 0;
}

int func_13(int iParam0)
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

void func_14(int iParam0)
{
	Global_2815059.f_443 = iParam0;
}

bool func_15()
{
	return Global_2815059.f_443;
}

void func_16()
{
	if (Global_2703735.f_3689)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
	if (Global_2703735.f_3688 >= 250f)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
}

void func_17(int iParam0, int iParam1)
{
	if (Global_2703735.f_3572[iParam0] < iParam1)
	{
		Global_2703735.f_3572[iParam0] = iParam1;
	}
	set_bit(&(Global_2703735.f_3571), iParam0);
}

void func_18()
{
	iLocal_66 = 0;
	iLocal_67 = 0;
	if (func_12(Local_77.f_1))
	{
		iLocal_66++;
	}
	else if (does_entity_exist(net_to_veh(Local_77.f_1)))
	{
		func_26(&(Local_77.f_1));
		iLocal_66++;
	}
	if (func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (network_does_entity_exist_with_network_id(Local_77.f_1.f_3[0 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[0 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (network_does_entity_exist_with_network_id(Local_77.f_1.f_3[1 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[1 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (get_num_reserved_mission_vehicles(false, 0) != iLocal_66)
	{
		if (func_25(iLocal_66, 0, 1))
		{
			reserve_network_mission_vehicles(iLocal_66);
		}
	}
	if (get_num_reserved_mission_peds(false, 0) != iLocal_67)
	{
		if (func_19(iLocal_67, 0, 1))
		{
			reserve_network_mission_peds(iLocal_67);
		}
	}
}

bool func_19(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(0, iParam0, 1, bParam1, bParam2);
}

int func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_24(iParam0) - func_23(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_22(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_23(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[player_id() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_21(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return get_num_reserved_mission_peds(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return get_num_reserved_mission_objects(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(1, iParam0, 1, bParam1, bParam2);
}

void func_26(var uParam0)
{
	int iVar0;
	
	if (network_does_entity_exist_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

int func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = joaat("a_m_m_farmer_01");
	if (func_39(Local_77.f_1.f_1))
	{
		if (func_39(Local_77.f_1.f_3[1 /*2*/].f_1) && func_39(iVar0))
		{
			if (!func_12(Local_77.f_1))
			{
				if (func_36(&(Local_77.f_1), Local_77.f_1.f_1, Local_77.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					iVar1 = net_to_veh(Local_77.f_1);
					if (get_num_mod_kits(iVar1) > 0)
					{
						set_vehicle_mod_kit(iVar1, 0);
					}
					set_vehicle_colours(iVar1, 127, 0);
					set_heli_blades_full_speed(iVar1);
					set_vehicle_engine_on(iVar1, true, true, false);
					set_vehicle_doors_locked(iVar1, 1);
					activate_physics(iVar1);
					set_entity_dynamic(iVar1, true);
					func_35(iVar1, 4);
					Global_2703735.f_3690 = iVar1;
					set_entity_health(iVar1, Global_262145.f_11083, 0);
					if (func_34(&(Local_77.f_1.f_3[0 /*2*/]), Local_77.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						iVar2 = net_to_ped(Local_77.f_1.f_3[0 /*2*/]);
						func_29(Local_77.f_1.f_3[0 /*2*/]);
						func_28(iVar2, 0, 0, 1);
						_0x0EDE326D47CD0F3E(iVar2, player_id());
						func_35(iVar2, 4);
						Global_2703735.f_3690.f_1[0] = iVar2;
						set_ped_component_variation(iVar2, 0, 1, 1, 0);
						set_ped_component_variation(iVar2, 2, 1, 1, 0);
						set_ped_component_variation(iVar2, 3, 0, 0, 0);
						set_ped_component_variation(iVar2, 4, 0, 0, 0);
						set_ped_component_variation(iVar2, 8, 0, 1, 0);
						set_ped_prop_index(iVar2, 1, 0, 0, false);
						set_ped_prop_index(iVar2, 0, 0, 0, false);
						if (func_34(&(Local_77.f_1.f_3[1 /*2*/]), Local_77.f_1, 4, Local_77.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_29(Local_77.f_1.f_3[1 /*2*/]);
							func_28(net_to_ped(Local_77.f_1.f_3[1 /*2*/]), 1, 1, 1);
							_0x0EDE326D47CD0F3E(net_to_ped(Local_77.f_1.f_3[1 /*2*/]), player_id());
							func_35(net_to_ped(Local_77.f_1.f_3[1 /*2*/]), 4);
							Global_2703735.f_3690.f_1[1] = net_to_ped(Local_77.f_1.f_3[1 /*2*/]);
							set_model_as_no_longer_needed(Local_77.f_1.f_3[1 /*2*/].f_1);
							set_model_as_no_longer_needed(iVar0);
							set_model_as_no_longer_needed(Local_77.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	give_delayed_weapon_to_ped(iParam0, joaat("weapon_assaultrifle"), 300, true);
	set_ped_combat_attributes(iParam0, 5, true);
	set_ped_combat_attributes(iParam0, 3, false);
	set_ped_combat_movement(iParam0, 2);
	set_ped_combat_ability(iParam0, 2);
	set_ped_combat_range(iParam0, 2);
	set_ped_target_loss_response(iParam0, 1);
	set_ped_highly_perceptive(iParam0, true);
	set_ped_can_be_targetted(iParam0, true);
	set_ped_seeing_range(iParam0, (fLocal_71[iParam1] + 100f));
	set_ped_visual_field_peripheral_range(iParam0, 400f);
	set_combat_float(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			set_entity_max_health(iParam0, 250);
			set_entity_health(iParam0, 250, 0);
			set_ped_armour(iParam0, 250);
		}
	}
	else
	{
		set_entity_invincible(iParam0, true);
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	if (!func_31(player_id(), 0, 0) && !func_30())
	{
		iVar0 = Global_1837209[5];
	}
	else
	{
		iVar0 = get_ped_relationship_group_hash(player_ped_id());
	}
	set_ped_relationship_group_hash(net_to_ped(iParam0), iVar0);
}

bool func_30()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 0);
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_32(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_32(int iParam0)
{
	return func_33(iParam0);
}

var func_33(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

void func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (decor_exist_on(iParam0, "AttributeDamage"))
	{
		iVar0 = decor_get_int(iParam0, "AttributeDamage");
	}
	set_bit(&iVar0, iParam1);
	decor_set_int(iParam0, "AttributeDamage", iVar0);
}

int func_36(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_37(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_37(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_38(player_id(), Param0, iParam2) > -1)
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

int func_38(int iParam0, struct<3> Param1, int iParam2)
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

bool func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

int func_40()
{
	struct<3> Var0;
	
	if (func_59(Local_77.f_1.f_8))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_entity_dead(player_ped_id(), false))
			{
				Var0 = { func_57(func_58(player_id()), 0f, (-200f * sin((to_float(Local_77.f_1.f_13) * 30f))), (200f * cos((to_float(Local_77.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = get_approx_height_for_point(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_41(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_77.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_77.f_1.f_13++;
					if (Local_77.f_1.f_13 >= 12)
					{
						Local_77.f_1.f_13 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_41(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)
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
		if (func_50(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_42(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_42(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_49(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (get_distance_between_coords(func_47(player_id()), Param0, true) <= (fVar2 + fParam1))
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
		if (func_49(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && _network_is_player_equal_to_index(player_id(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != player_id()))
				{
					if ((func_43(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
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
								if (get_distance_between_coords(func_47(iVar1), Param0, true) <= (fVar2 + fParam1))
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
							if (get_distance_between_coords(func_47(iVar1), Param0, true) <= (fVar2 + fParam1))
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

int func_43(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()
{
	return Global_1574918;
}

Vector3 func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_48() && Global_1853348[iVar0 /*834*/].f_804) && !func_59(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_58(iParam0);
}

var func_48()
{
	return Global_2714762.f_19;
}

int func_49(int iParam0, bool bParam1, bool bParam2)
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

int func_50(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && player_id() != iVar1) || iParam6 == 0)
		{
			if (func_49(iVar1, bParam2, bParam3))
			{
				if (iParam8 || _network_is_player_equal_to_index(player_id(), iVar1))
				{
					if (!bParam5 || (!is_ped_injured(get_player_ped(iVar1)) && func_43(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && uParam7) && bParam4) && func_51(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_58(iVar1), Param0, true) < fParam1)
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

int func_51(int iParam0)
{
	if (func_56(player_id(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_55(iParam0) };
	if (network_is_friend(&Global_2787505))
	{
		return 1;
	}
	if (func_52(player_id(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (!iVar0 == func_53())
	{
		if (iVar0 == func_54(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	return -1;
}

int func_54(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_53();
}

struct<13> func_55(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

int func_56(int iParam0, int iParam1)
{
	if (network_clan_service_is_valid())
	{
		Global_2787505 = { func_55(iParam0) };
		Global_2787518 = { func_55(iParam1) };
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

Vector3 func_57(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

Vector3 func_58(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

int func_59(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)
{
	Local_77.f_1.f_2 = iParam0;
}

void func_61()
{
	func_67();
	func_62();
}

void func_62()
{
	if (Local_77.f_1.f_2 == 2)
	{
		func_64();
	}
	else
	{
		func_63();
	}
}

void func_63()
{
	if (does_blip_exist(iLocal_61))
	{
		remove_blip(&iLocal_61);
	}
}

void func_64()
{
	int iVar0;
	
	iVar0 = net_to_veh(Local_77.f_1);
	if (!does_blip_exist(iLocal_61) && does_entity_exist(iVar0))
	{
		iLocal_61 = add_blip_for_entity(iVar0);
		set_blip_sprite(iLocal_61, 422);
		show_height_on_blip(iLocal_61, false);
		set_blip_name_from_text_file(iLocal_61, "MPCT_MERRY3");
		func_65(&iLocal_61, 1);
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	if (does_blip_exist(*iParam0))
	{
		iVar0 = func_66(iParam1);
		set_blip_colour(*iParam0, iVar0);
	}
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_63();
			break;
		
		case 1:
			func_63();
			break;
		
		case 2:
			if (func_12(Local_77.f_1))
			{
				iVar1 = net_to_veh(Local_77.f_1);
				func_64();
				if (func_80(Local_77.f_1))
				{
					if (network_has_control_of_network_id(Local_77.f_1))
					{
						if (_does_vehicle_have_searchlight(iVar1))
						{
							if (func_79())
							{
								if (!is_vehicle_searchlight_on(iVar1))
								{
									set_vehicle_searchlight(iVar1, true, false);
								}
							}
							else if (is_vehicle_searchlight_on(iVar1))
							{
								set_vehicle_searchlight(iVar1, false, false);
							}
						}
					}
				}
				func_69();
				if (network_does_network_id_exist(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = net_to_ped(Local_77.f_1.f_3[0 /*2*/]);
					if (!is_ped_injured(iVar0))
					{
						iVar2 = get_active_vehicle_mission_type(iVar1);
						if (iVar2 != iLocal_72 || fLocal_71[0] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (network_has_control_of_network_id(Local_77.f_1.f_3[0 /*2*/]))
								{
									fLocal_71[0] = fLocal_68;
									set_blocking_of_non_temporary_events(iVar0, true);
									func_28(iVar0, 0, 0, 0);
									set_heli_blades_full_speed(iVar1);
									set_vehicle_engine_on(iVar1, true, true, false);
									if (does_entity_exist(player_ped_id()))
									{
										if (!is_entity_dead(player_ped_id(), false))
										{
											task_heli_mission(iVar0, iVar1, 0, player_ped_id(), 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, ceil(fLocal_71[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
					}
				}
				if (network_does_network_id_exist(Local_77.f_1.f_3[1 /*2*/]))
				{
					iVar0 = net_to_ped(Local_77.f_1.f_3[1 /*2*/]);
					if (!is_ped_injured(iVar0))
					{
						if (!is_ped_in_combat(iVar0, 0) || fLocal_71[1] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (network_has_control_of_network_id(Local_77.f_1.f_3[1 /*2*/]))
								{
									fLocal_71[1] = fLocal_68;
									set_blocking_of_non_temporary_events(iVar0, false);
									func_28(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 3:
			func_63();
			if (!func_6(&(Local_77.f_1.f_17)))
			{
				func_5(&(Local_77.f_1.f_17), 0, 0);
			}
			if (func_12(Local_77.f_1))
			{
				iVar1 = net_to_veh(Local_77.f_1);
				if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = net_to_ped(Local_77.f_1.f_3[0 /*2*/]);
					if (iLocal_64 == 0)
					{
						if (func_80(Local_77.f_1))
						{
							if (network_has_control_of_network_id(Local_77.f_1.f_3[0 /*2*/]))
							{
								set_blocking_of_non_temporary_events(iVar0, false);
								clear_ped_tasks(iVar0);
								set_ped_relationship_group_hash(iVar0, Global_1837194);
								if (does_entity_exist(player_ped_id()))
								{
									if (!is_entity_dead(player_ped_id(), false))
									{
										task_heli_mission(iVar0, iVar1, 0, player_ped_id(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										set_ped_keep_task(iVar0, true);
										iLocal_64 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_65 == 0)
					{
						iVar0 = net_to_ped(Local_77.f_1.f_3[1 /*2*/]);
						if (func_80(Local_77.f_1))
						{
							if (network_has_control_of_network_id(Local_77.f_1.f_3[1 /*2*/]))
							{
								clear_ped_tasks(iVar0);
								set_blocking_of_non_temporary_events(iVar0, true);
								set_ped_keep_task(iVar0, true);
								iLocal_65 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 5:
			func_63();
			break;
	}
}

void func_68()
{
	int iVar0;
	
	if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[0 /*2*/]))
		{
			if (network_has_control_of_network_id(Local_77.f_1.f_3[0 /*2*/]))
			{
				iVar0 = net_to_ped(Local_77.f_1.f_3[0 /*2*/]);
				set_entity_health(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[1 /*2*/]))
		{
			if (network_has_control_of_network_id(Local_77.f_1.f_3[1 /*2*/]))
			{
				iVar0 = net_to_ped(Local_77.f_1.f_3[1 /*2*/]);
				set_entity_health(iVar0, 0, 0);
			}
		}
	}
}

void func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (!Global_1958700)
	{
		return;
	}
	if (!network_has_control_of_network_id(Local_77.f_1))
	{
		return;
	}
	iVar0 = net_to_veh(Local_77.f_1);
	if (func_78(iVar0))
	{
		return;
	}
	if (!func_77(iVar0))
	{
		return;
	}
	if (iLocal_75 == func_53())
	{
		func_71();
		return;
	}
	iVar1 = get_player_ped(iLocal_75);
	if (!func_6(&uLocal_73))
	{
		if (iLocal_75 != func_53() && func_77(iVar1))
		{
			if (get_distance_between_coords(get_entity_coords(iVar1, true), get_entity_coords(iVar0, true), false) > 50f)
			{
				return;
			}
		}
	}
	if (!func_4(&uLocal_73, Global_1958699, 0))
	{
		return;
	}
	func_70(&uLocal_73);
	iVar3 = Local_77.f_1.f_3;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar5 = net_to_ped(Local_77.f_1.f_3[iVar2 /*2*/]);
		if (func_77(iVar5) && is_ped_in_combat(iVar5, 0))
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		iLocal_75 = func_53();
	}
}

void func_70(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = player_id();
	iVar3 = net_to_ped(Local_77.f_1.f_3[0 /*2*/]);
	iVar4 = net_to_veh(Local_77.f_1);
	iVar5 = func_74(player_id());
	iVar6 = get_player_ped(iVar5);
	iLocal_75 = func_53();
	iLocal_76++;
	iLocal_76 = func_73(iLocal_76, 32);
	iVar0 = iLocal_76;
	if (iVar0 == func_53())
	{
		return;
	}
	if (iVar0 == iLocal_75)
	{
		return;
	}
	if (!func_49(iVar0, 1, 1))
	{
		return;
	}
	iVar2 = get_player_ped(iVar0);
	if (!func_77(iVar2))
	{
		return;
	}
	if (func_77(iVar6))
	{
		if (get_distance_between_coords(get_entity_coords(iVar6, true), get_entity_coords(iVar2, true), false) > Global_1958701)
		{
			return;
		}
	}
	if (func_52(iVar1, iVar0) || func_72(iVar1, iVar0, -2, 0))
	{
		task_heli_mission(iVar3, iVar4, 0, iVar2, 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, ceil(fLocal_71[0]), 10, -1f, 0);
		iLocal_75 = iVar0;
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_73(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

int func_74(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		return Global_1892703[func_54(iParam0) /*599*/].f_10.f_462;
	}
	return func_53();
}

bool func_75(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_76(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_53();
}

int func_76(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_53())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_77(int iParam0)
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

int func_78(int iParam0)
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

int func_79()
{
	if (get_clock_hours() >= 22)
	{
		return 1;
	}
	if (get_clock_hours() <= 6 && get_clock_hours() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (is_network_id_owned_by_participant(iParam0))
	{
		return 1;
	}
	if (network_is_host_of_this_script())
	{
		network_request_control_of_network_id(iParam0);
	}
	return 0;
}

int func_81()
{
	return Local_77.f_0;
}

int func_82(int iParam0)
{
	return iLocal_78[iParam0];
}

void func_83()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_68 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_69))
	{
		func_5(&uLocal_69, 0, 0);
	}
	else if (func_4(&uLocal_69, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_58(player_id()) };
		fLocal_68 = get_approx_height_for_point(Var1.f_0, Var1.f_1);
		if (fLocal_68 < Global_262145.f_11084)
		{
			fLocal_68 = Global_262145.f_11084;
		}
		func_70(&uLocal_69);
	}
}

void func_84()
{
	if (does_entity_exist(Global_2703735.f_3690.f_1[0]))
	{
		delete_ped(&(Global_2703735.f_3690.f_1[0]));
	}
	if (does_entity_exist(Global_2703735.f_3690.f_1[1]))
	{
		delete_ped(&(Global_2703735.f_3690.f_1[1]));
	}
	if (does_entity_exist(Global_2703735.f_3690))
	{
		delete_vehicle(&(Global_2703735.f_3690));
	}
	Global_2703735.f_3690.f_5 = 0f;
	Global_2703735.f_3690.f_6 = 0;
	Global_2703735.f_3690.f_7 = 0;
	func_86(0);
	func_85();
}

void func_85()
{
	terminate_this_thread();
}

void func_86(int iParam0)
{
	Global_2815059.f_444 = iParam0;
}

int func_87()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_94())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (func_92(159))
	{
		if (!func_91())
		{
			return 1;
		}
	}
	if (func_92(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_90())
	{
		case 0:
			return func_89();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_90()
{
	return Global_31959;
}

bool func_91()
{
	return Global_2714762.f_698;
}

int func_92(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return Global_2725403;
}

bool func_94()
{
	return Global_2714762.f_693;
}

void func_95()
{
	wait(0);
}

void func_96(struct<21> Param0)
{
	func_86(0);
	func_100(32, Param0);
	reserve_network_mission_peds(2);
	reserve_network_mission_vehicles(1);
	func_98(0, -1, 0);
	network_register_host_broadcast_variables(&Local_77, 21, 0);
	network_register_player_broadcast_variables(&iLocal_78, 33, 0);
	set_this_script_can_be_paused(false);
	if (!func_97())
	{
		func_84();
	}
	if (network_is_in_tutorial_session())
	{
		bLocal_62 = true;
	}
	iLocal_75 = player_id();
	iLocal_78[participant_id_to_int()] = 0;
}

int func_97()
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
		if (func_94())
		{
			return 0;
		}
		if (func_92(157))
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

int func_98(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_85();
			}
			else
			{
				return 0;
			}
		}
		if (!func_99(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_94())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_92(157))
				{
					if (!bParam2)
					{
						func_85();
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
					func_85();
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
				func_85();
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
			func_85();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_99(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_100(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!network_is_game_in_progress())
	{
		func_85();
	}
	network_set_this_script_is_network_script(iParam0, false, Param1.f_16);
}

