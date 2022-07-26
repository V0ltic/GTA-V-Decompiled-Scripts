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
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (network_is_game_in_progress())
	{
		if (BitTest(Global_1661006, 1))
		{
			func_25();
		}
		else
		{
			network_set_this_script_is_network_script(32, false, -1);
			func_22(0, -1, 0);
			set_this_script_can_be_paused(false);
			iLocal_20 = 1;
		}
	}
	else if (has_force_cleanup_occurred(2))
	{
		func_25();
	}
	while (true)
	{
		wait(0);
		if (iLocal_20 == 1)
		{
			if (func_14())
			{
				func_25();
			}
		}
		if (does_entity_exist(iScriptParam_21))
		{
			if (is_object_within_brain_activation_range(iScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (does_entity_have_drawable(iScriptParam_21))
						{
							Local_19 = { get_entity_coords(iScriptParam_21, true) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((has_object_been_broken(iScriptParam_21, 0) && is_entity_visible(iScriptParam_21)) && !is_entity_a_mission_entity(iScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = get_random_int_in_range(70, 121);
	if (network_is_game_in_progress())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = get_random_int_in_range(50, 101);
		iVar3 = func_13(iVar3, 1);
	}
	set_bit(&iVar2, 3);
	set_bit(&iVar2, 4);
	request_model(iVar0);
	while (!has_model_loaded(iVar0))
	{
		wait(0);
	}
	if (network_is_game_in_progress())
	{
		func_2(iVar1, get_safe_pickup_coords(Local_19, 1.2f, 1.5f), iVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		create_pickup(iVar1, get_safe_pickup_coords(Local_19, 1.2f, 1.5f), iVar2, iVar3, false, iVar0);
	}
}

struct<5> func_2(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	
	if (func_12() && func_11(iParam0))
	{
		Var0 = { func_3(iParam0, Param1, iParam2, iParam3, iParam4, bParam5) };
	}
	else
	{
		Var0.f_4 = create_ambient_pickup(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, bParam6);
	}
	return Var0;
}

struct<5> func_3(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar1;
	struct<5> Var2;
	int iVar3;
	
	if (func_10() == -1)
	{
		return Var0;
	}
	iVar1 = func_9(-1);
	if (iVar1 == -1)
	{
		return Var0;
	}
	Var2.f_0 = iParam0;
	Var2.f_1 = { Param1 };
	if (func_4(&Var2) != -1)
	{
		return Var0;
	}
	set_bit(&iParam2, 5);
	Var2.f_4 = _create_non_networked_ambient_pickup(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, false);
	iVar3 = network_player_id_to_int();
	if (bParam5)
	{
		Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_12 = get_hash_of_this_script_name();
		Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 = _network_get_position_hash_of_this_script();
		if (Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 == 0)
		{
			Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_13 = network_get_instance_id_of_this_script();
			Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_11 = 2;
		}
	}
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/] = { Var2 };
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_5 = { Param1 };
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_8 = iParam2;
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_9 = iParam3;
	Global_1911933[iVar3 /*260*/].f_94.f_21[iVar1 /*14*/].f_10 = iParam4;
	return Var2;
}

int func_4(var uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_5(uParam0, &(Global_2683918.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_6(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_7(var uParam0)
{
	if ((*uParam0 == 123 || func_8(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = network_player_id_to_int();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_1911933[iParam0 /*260*/].f_94.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_2683918.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
			return 1;
		
		default:
	}
	return 0;
}

var func_12()
{
	return Global_262145.f_30925;
}

int func_13(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_14()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_17()
{
	return Global_31959;
}

bool func_18()
{
	return Global_2714762.f_698;
}

int func_19(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2725403;
}

bool func_21()
{
	return Global_2714762.f_693;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_24();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_24();
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
					func_24();
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
				func_24();
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
			func_24();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_24()
{
	terminate_this_thread();
}

void func_25()
{
	terminate_this_thread();
}

