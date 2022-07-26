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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (network_is_game_in_progress())
	{
		func_50(ScriptParam_87);
	}
	else
	{
		func_48();
	}
	while (true)
	{
		func_47();
		if (Global_262145.f_24104)
		{
			func_48();
		}
		if (func_39())
		{
			func_48();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4535591)
	{
		if (Global_4539666[iLocal_21 /*12*/].f_11)
		{
			func_36(iLocal_21);
			Global_4539666[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_66.f_8)
	{
		func_17(Local_22.f_66);
	}
	if ((Local_22.f_66.f_2 == 1 && Global_4535592) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4534105[iLocal_21 /*85*/].f_66 == 2147483647 && Local_22.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_48();
	}
	if (Local_22.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / round((get_frame_time() * 1000f)));
		if ((get_frame_count() - Local_22.f_66.f_18) > iVar2 * 10)
		{
			Local_22.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_66.f_2 == 1) && Local_22.f_66.f_13) && !Local_22.f_66.f_12)
	{
		if (get_frame_count() - Local_22.f_66.f_14) >= func_12(Local_22.f_66.f_5)
		{
			iVar1 = 0;
			if (!net_gameserver_is_session_valid(func_11()) || net_gameserver_is_session_refresh_pending())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_66.f_5 != 1 && !net_gameserver_begin_service(&(Local_22.f_66), Local_22.f_66.f_6, Local_22.f_66.f_4, Local_22.f_66.f_7, Local_22.f_66.f_1, Local_22.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!net_gameserver_checkout_start(Local_22.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_66.f_12 = 1;
				Global_4534105[iLocal_21 /*85*/].f_66.f_12 = 1;
				Global_4534105[iLocal_21 /*85*/].f_66 = Local_22.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_48();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			begin_text_command_busyspinner_on(&(uParam0->f_1));
			add_text_component_integer(uParam0->f_33);
			add_text_component_integer(uParam0->f_34);
			end_text_command_busyspinner_on(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			begin_text_command_busyspinner_on(&(uParam0->f_1));
			add_text_component_integer(uParam0->f_33);
			end_text_command_busyspinner_on(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			begin_text_command_busyspinner_on(&(uParam0->f_1));
			add_text_component_substring_player_name(&(uParam0->f_17));
			add_text_component_integer(uParam0->f_33);
			add_text_component_integer(uParam0->f_34);
			end_text_command_busyspinner_on(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			begin_text_command_busyspinner_on(&(uParam0->f_1));
			add_text_component_substring_player_name(&(uParam0->f_17));
			end_text_command_busyspinner_on(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			begin_text_command_busyspinner_on(&(uParam0->f_1));
			add_text_component_substring_time(uParam0->f_33, 70);
			end_text_command_busyspinner_on(uParam0->f_41);
		}
		else
		{
			begin_text_command_busyspinner_on(&(uParam0->f_1));
			end_text_command_busyspinner_on(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
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
		func_8(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
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
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
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

void func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1574918;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4535594;
			break;
		
		case 1:
			return Global_4535593;
			break;
	}
	return 0;
}

int func_13()
{
	if (is_pc_version())
	{
		return _net_gameserver_use_server_transactions();
	}
	return 0;
}

bool func_14()
{
	return Global_100493.f_376 > 0;
}

void func_15(bool bParam0)
{
	busyspinner_off();
	if (bParam0)
	{
		preload_busyspinner();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0.f_0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || get_event_data(1, iParam0, &Var0, 7))
	{
		Var4.f_66 = 2147483647;
		iVar3 = func_35(Var0.f_0, &Var4);
		if (iVar3 != -1)
		{
			Global_4534105[iVar3 /*85*/].f_66.f_8 = 0;
			if (Global_4534105[iVar3 /*85*/].f_66.f_18 == 0)
			{
				Global_4534105[iVar3 /*85*/].f_66.f_18 = get_frame_count();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4534105[iVar3 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4535579.f_4 = Var0.f_2;
			Global_4535579.f_6 = Var0.f_3;
			Global_4535579.f_7 = Var0.f_4;
			Global_4535579.f_8 = Var0.f_5;
			Global_4535579.f_9 = Var0.f_6;
			if (Global_4535579.f_10 == 0)
			{
				Global_4535579.f_10 = get_frame_count();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4539666[iVar3 /*12*/] = Global_4534105[iVar3 /*85*/].f_66.f_3;
					Global_4539666[iVar3 /*12*/].f_1 = Global_4534105[iVar3 /*85*/].f_66.f_7;
					Global_4539666[iVar3 /*12*/].f_2 = Global_4534105[iVar3 /*85*/].f_66.f_4;
					Global_4539666[iVar3 /*12*/].f_3 = Global_4534105[iVar3 /*85*/].f_66.f_1;
					Global_4539666[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4539666[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4539666[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4539666[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4539666[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4539666[iVar3 /*12*/].f_11 = 1;
					Global_4534105[iVar3 /*85*/].f_66.f_2 = 2;
					if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							net_gameserver_basket_apply_server_data(Global_4534105[iVar3 /*85*/].f_66, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4534105[iVar3 /*85*/].f_66.f_2 = 3;
					if ((Global_4534105[iVar3 /*85*/].f_66.f_11 & 1 != 0 && Global_4534105[iVar3 /*85*/].f_66.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4534105[iVar3 /*85*/].f_66.f_2 = 1;
								Global_4534105[iVar3 /*85*/].f_66.f_9++;
							}
							else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
								Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
								Global_4535612 = Var0.f_2;
								Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
								if (func_23(Global_4535609) && func_13())
								{
									if (!func_22(Global_4534105[iVar3 /*85*/].f_66))
									{
										iVar7 = func_21();
										Global_4535466[iVar7 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
										Global_4535466[iVar7 /*7*/].f_2 = Global_4535609;
										Global_4535466[iVar7 /*7*/].f_3 = Global_4535611;
										Global_4535466[iVar7 /*7*/].f_1 = Global_4535610;
										Global_4535466[iVar7 /*7*/].f_4 = get_network_time();
									}
								}
								else
								{
									Global_4535606 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4534105[iVar3 /*85*/].f_66.f_2 = 1;
							Global_4534105[iVar3 /*85*/].f_66.f_9++;
						}
						else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
							Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
							Global_4535612 = Var0.f_2;
							Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
							if (func_23(Global_4535609) && func_13())
							{
								if (!func_22(Global_4534105[iVar3 /*85*/].f_66))
								{
									iVar8 = func_21();
									Global_4535466[iVar8 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
									Global_4535466[iVar8 /*7*/].f_2 = Global_4535609;
									Global_4535466[iVar8 /*7*/].f_3 = Global_4535611;
									Global_4535466[iVar8 /*7*/].f_1 = Global_4535610;
									Global_4535466[iVar8 /*7*/].f_4 = get_network_time();
								}
							}
							else
							{
								Global_4535606 = 1;
							}
						}
					}
					else if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4535609 = Global_4534105[iVar3 /*85*/].f_66.f_4;
						Global_4535611 = Global_4534105[iVar3 /*85*/].f_66.f_6;
						Global_4535612 = Var0.f_2;
						Global_4535610 = Global_4534105[iVar3 /*85*/].f_66.f_1;
						if ((func_23(Global_4535609) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4534105[iVar3 /*85*/].f_66))
							{
								iVar9 = func_21();
								Global_4535466[iVar9 /*7*/] = Global_4534105[iVar3 /*85*/].f_66;
								Global_4535466[iVar9 /*7*/].f_2 = Global_4535609;
								Global_4535466[iVar9 /*7*/].f_3 = Global_4535611;
								Global_4535466[iVar9 /*7*/].f_1 = Global_4535610;
								Global_4535466[iVar9 /*7*/].f_4 = get_network_time();
							}
						}
						else
						{
							Global_4535606 = 1;
						}
					}
					if (Global_4534105[iVar3 /*85*/].f_66.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4534105[iVar3 /*85*/].f_66.f_4);
							Global_4535606 = 0;
						}
						if (Global_4534105[iVar3 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4534105[iVar3 /*85*/].f_66.f_4, Global_4534105[iVar3 /*85*/].f_66.f_10, Global_4534105[iVar3 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2689235[player_id() /*453*/].f_124.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2727893 = uParam1;
	Global_2727892 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!net_gameserver_is_session_valid(func_11()) || net_gameserver_is_session_refresh_pending())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || net_gameserver_checkout_start(Global_4534105[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4534105[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4534105[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4534105[*iParam0 /*85*/].f_66.f_14 = get_frame_count();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4534105[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4534105[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4534105[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4535466;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4535466[iVar0 /*7*/] != 0 && Global_4535466[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4535466;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4535466[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4535466[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4535466[iVar0 /*7*/].f_4 = get_network_time();
			Global_4535466[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == -842062976) || iParam0 == -518651910) || iParam0 == 14658715) || iParam0 == -604793592) || iParam0 == -823426392) || iParam0 == -1401862980) || iParam0 == -173354274) || iParam0 == 409533976) || iParam0 == -1472522337) || iParam0 == 542574408) || iParam0 == -1261799063) || iParam0 == 784631574) || iParam0 == -2027479156) || iParam0 == -837690641) || iParam0 == -1029672338) || iParam0 == -1503749970) || iParam0 == -1843409092) || iParam0 == 1669058563) || iParam0 == 2102747615) || iParam0 == 2030771998) || iParam0 == 1708747007) || iParam0 == 645293860) || iParam0 == -818859193) || iParam0 == 300796227) || iParam0 == -1999832346) || iParam0 == 1058055395) || iParam0 == -321151125) || iParam0 == 2078731875) || iParam0 == 1280785534) || iParam0 == -1878824774) || iParam0 == 247992227) || iParam0 == -229237358) || iParam0 == -1123183389) || iParam0 == 1814197076) || iParam0 == 713955548) || iParam0 == -2026544524) || iParam0 == -719580138) || iParam0 == -163417439) || iParam0 == -550417574) || iParam0 == 208223429) || iParam0 == -1433071892) || iParam0 == 761999406) || iParam0 == -1101941763) || iParam0 == 1748245957) || iParam0 == 1036772696) || iParam0 == -1384648535) || iParam0 == -800037808) || iParam0 == -695852120) || iParam0 == 77355315) || iParam0 == 2097889166) || iParam0 == 1707592130) || iParam0 == 1628412596)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!net_gameserver_is_session_valid(func_11()) || net_gameserver_is_session_refresh_pending())
		{
			if (func_29(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || net_gameserver_checkout_start(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = get_frame_count();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_27(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		_trigger_script_event_2(1, &Var0, 36, iVar1);
	}
}

void func_26()
{
	request_script("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		set_bit(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
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
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<10> Var3;
	var uVar4;
	
	if (iParam0 == -1)
	{
		return;
	}
	net_gameserver_set_telemetry_nonce_seed(func_28(iParam0));
	if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4534105[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_9 = -1;
	func_34(&Var3);
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case 631654431:
			_network_spent_move_yacht(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -180141073:
			unk_0x2E2B0A3651E8DCC2(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0, 0);
			break;
		
		case 68030260:
			network_spent_pay_vehicle_insurance_premium(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case -982394051:
			network_spent_cinema(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 454359403:
			network_spent_in_stripclub(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, Global_4534105[iParam0 /*85*/].f_2, bVar0);
			break;
		
		case -1586170317:
			unk_0xD20D79671A598594(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 650665123:
			network_spent_telescope(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 1654961868:
			network_spent_call_player(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case 1182673174:
			network_spent_carwash(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 563463121:
			network_earn_from_crate_drop(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1940862352:
			network_pay_match_entry_fee(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case -1389227906:
			network_pay_match_entry_fee(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case -516219046:
			network_buy_healthcare(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1398318418:
			network_earn_from_betting(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case 2043854386:
			network_spent_cash_drop(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 277665518:
			network_spent_arrest_bail(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1077156170:
			network_earn_from_daily_objectives(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case -96593501:
			network_spent_bounty(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case 742499889:
			_network_spent_wager(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2050093329:
			_network_spent_pay_boss(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1752488069:
			_network_spent_pay_goon(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 634375935:
			_network_spent_rename_organization(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -1027218631:
			network_earn_from_job(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -47546905:
			_network_earn_from_premium_job(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 291576838:
			network_buy_item(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 14, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0, 0, 0, bVar0);
			break;
		
		case 1612072658:
			unk_0xDC639BE2424A7A98(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		
		case -990286235:
			network_earn_from_bounty(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14), &(Global_4534105[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case 1349151477:
			network_earn_from_gangattack_pickup(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			network_earn_from_pickup(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1186079845:
			_network_earn_from_armour_truck(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1734805203:
			network_earn_from_holdups(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1645229221:
			network_pay_employee_wage(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case -585718395:
			_network_spent_aggregated_utility_bills(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, &Global_4539876);
			break;
		
		case -2129781826:
			_network_spent_pa_service_dancer(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1941570214:
			_network_spent_pa_service_heli_pickup(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1869490922:
			_network_spent_ba_service(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case -336803850:
			_network_spent_ba_service(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case -1412692765:
			_network_spent_ba_service(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 618167454:
			_network_spent_ba_service(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 980623936:
			_network_spent_ba_service(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
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
		case -664597565:
		case -1100963799:
			network_refund_cash(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), &(Global_4534105[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		
		case 312105838:
			network_earn_from_rockstar(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1922554349:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			network_buy_fairground_ride(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, bVar1, bVar0, 0);
			break;
		
		case 1839532116:
			unk_0xFD06E55DAF765B32(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case 941287179:
			network_earn_from_import_export(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_3);
			break;
		
		case -352356931:
			network_earn_from_ai_target_kill(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1948102096:
			network_spent_request_job(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1834046564:
			unk_0x633310C9B4B8972C(Global_4534105[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		
		case 393059668:
			network_earn_from_bend_job(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case -57868256:
			network_earn_from_challenge_win(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_34), Global_4534105[iParam0 /*85*/].f_4);
			break;
		
		case -1127021384:
			network_earn_from_not_badsport(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1564537328:
			network_pay_match_entry_fee(Global_4534105[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
			break;
		
		case -1359375127:
			network_spent_prostitutes(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case 283351220:
			network_buy_item(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
			break;
		
		case -2085313189:
			switch (Global_4534105[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					network_buy_item(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4534105[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		
		case 1704445500:
			network_spent_betting(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, &(Global_4534105[iParam0 /*85*/].f_14.f_34), false, false);
			break;
		
		case 1620609399:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			_network_earn_boss(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 569170531:
			_network_earn_goon(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -856006867:
			_network_earn_boss_agency(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		
		case 208223429:
			_network_earn_from_contraband(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case 848090538:
			_network_earn_from_destroying_contraband(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 665109499:
			_network_spent_order_bodyguard_vehicle(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		
		case -1330755006:
			_network_spent_order_warehouse_vehicle(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 1);
			break;
		
		case 1976384368:
			_network_spent_jukebox(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		
		case 268924934:
			_network_spent_business(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case -293060240:
			_network_earn_from_vehicle_export(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		
		case 437291904:
			_network_spent_vehicle_export_mods(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12);
			break;
		
		case -135813048:
			_network_spent_import_export_repair(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 463142405:
			_network_earn_from_smuggling(Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_8);
			break;
		
		case 1550217370:
			_network_earn_from_wage_payment_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -101307780:
			unk_0x771E4AB5C79C58E6(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 599804707:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			_network_earn_from_cashing_out(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1052472386:
			network_earn_from_job_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -2130199671:
			_network_earn_job_bonus_heist_award(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -1227654538:
			_network_earn_job_bonus_first_time_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_34));
			break;
		
		case -930104477:
			_network_spent_employ_assassins(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1864522104:
			_network_earn_from_target_refund(Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 215608230:
			_network_earn_from_target_refund(Global_4534105[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case -876012764:
			_network_earn_from_gangops_wages(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -722894325:
			_network_earn_from_gangops_wages_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1407278493:
			_network_earn_from_gangops_jobs_prep_participation(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			_network_earn_from_gangops_jobs_setup(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 1179783540:
			_network_earn_from_gangops_jobs_finale(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26));
			break;
		
		case 923419301:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case -308826175:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 603298940:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case -12619854:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case -311112675:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case 870439158:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case -974288740:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case -4138654:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case -1180954122:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case -1918051016:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case 844330594:
			_network_earn_from_gangops_awards(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case 1934825517:
			_network_earn_from_gangops_elite(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case 1852024236:
			_network_earn_from_gangops_elite(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case 2099238988:
			_network_earn_from_gangops_elite(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			_network_earn_from_doomsday_finale_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case -1733398043:
			_network_spent_gangops_start_mission(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case -1892760262:
			_network_spent_gangops_start_strand(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case -2015399333:
			_network_earn_bounty_hunter_reward(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 402505853:
			if (func_33(int_to_playerindex(Global_4534105[iParam0 /*85*/]), 0, 0))
			{
				_network_spent_nightclub_entry_fee(int_to_playerindex(Global_4534105[iParam0 /*85*/]), Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			}
			break;
		
		case 1678112166:
			_network_spent_rehire_dj(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		
		case -1143510182:
			_network_spent_nightclub_bar_drink(Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case -1574795641:
			_network_earn_from_business_battle(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -961034881:
			_network_earn_from_club_management_participation(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1135468152:
			_network_earn_from_fmbb_phonecall_mission(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1265272476:
			_network_earn_from_business_hub_sell(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9);
			break;
		
		case -634726636:
			_network_earn_from_fmbb_boss_work(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 696556762:
			_network_earn_fmbb_wage_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 837955913:
			_network_spent_arena_join_spectator(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, false, true);
			break;
		
		case 403506509:
			_network_earn_from_bb_event_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -883876414:
			_network_earn_from_arena_skill_level_progression(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			_network_earn_from_arena_career_progression(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1532467144:
			_network_spent_arena_spectator_box(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], false, true);
			break;
		
		case 1815541181:
			_network_spent_make_it_rain(Global_4534105[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case -561012053:
			_network_earn_from_spin_the_wheel_cash(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1342064661:
			_network_spent_spin_the_wheel_payment(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, true);
			break;
		
		case 1240683675:
			_network_earn_from_assassinate_target_killed_2(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1241904665:
			_network_earn_from_arena_war(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_1);
			break;
		
		case -494565059:
			_network_earn_from_rc_time_trial(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 827308208:
			_network_earn_from_daily_objective_event(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1857685192:
			_network_earn_from_collectables_action_figures(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1698417709:
			_network_earn_from_casino_mission_reward(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -2017925037:
			_network_earn_from_casino_story_mission_reward(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
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
			_network_earn_from_casino_award(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1693570755:
			_network_spent_casino_generic(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), Global_4534105[iParam0 /*85*/]);
			break;
		
		case 1868043300:
			_network_spent_arcade_game(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -697248883:
			_network_spent_arcade_generic(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -1295545795:
			_network_spent_casino_heist_skip_mission(Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case 914079366:
			_network_spent_casino_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case 395122350:
			_network_spent_casino_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -331981076:
			_network_spent_casino_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1671535231:
			_network_spent_casino_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1982688246:
			break;
	}
	switch (Global_4534105[iParam0 /*85*/].f_66.f_4)
	{
		case 1668610896:
			_network_earn_casino_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -2032529561:
			_network_earn_casino_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case -1224479447:
			_network_earn_casino_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			_network_earn_casino_heist_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case 1220095570:
		case 2050320631:
		case 592672421:
			_network_earn_casino_heist_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1775876058:
			unk_0xC0DE18944A7A9044(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -842062976:
			_network_earn_collectable_completed_collection(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1896606724:
			Var3.f_0 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1291433573:
			Var3.f_1 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 538631715:
			Var3.f_2 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 133782822:
			Var3.f_3 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 2081885153:
			Var3.f_4 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case -1314365345:
			Var3.f_5 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1322977732:
			Var3.f_6 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 396623013:
			Var3.f_7 = Global_4534105[iParam0 /*85*/].f_66.f_1;
			_network_spent_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case 1981664462:
			_network_spent_beach_party_generic(Global_4534105[iParam0 /*85*/]);
			break;
		
		case -518651910:
		case 14658715:
			_network_earn_from_complete_collection(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
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
			_network_earn_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/], 0, 0);
			break;
		
		case -837690641:
			_network_earn_island_heist(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1029672338:
			_0xE2BB399D90942091(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1921250821:
			_network_spent_submarine(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case -1370731547:
			_network_spent_submarine(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4534105[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case 1683798242:
			_network_spent_submarine(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case -910968288:
			_network_spent_casino_club_generic(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_10, Global_4534105[iParam0 /*85*/].f_11, Global_4534105[iParam0 /*85*/].f_12, Global_4534105[iParam0 /*85*/].f_6, Global_4534105[iParam0 /*85*/].f_7);
			break;
		
		case -1503749970:
			_network_earn_from_tuner_finale(Global_4534105[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1843409092:
			_network_earn_from_tuner_finale(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_1, get_hash_key(&(Global_4534105[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		
		case 1669058563:
			_network_earn_from_carclub_membership(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 2102747615:
			_network_earn_from_vehicle_autoshop(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 2030771998:
			_network_earn_from_vehicle_autoshop_bonus(Global_4534105[iParam0 /*85*/].f_66.f_1);
			break;
		
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			_network_earn_from_tuner_award(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &(Global_4534105[iParam0 /*85*/].f_14.f_44));
			break;
		
		case 1051883823:
			_network_spent_interaction_menu_ability(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1280785534:
			unk_0x5AA4C7A11447C2FD(Global_4534105[iParam0 /*85*/].f_66.f_1, 277);
			break;
		
		case -168319378:
			_network_spent_business_expenses(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4539859);
			break;
		
		case -1878824774:
			_network_earn_from_agency_security_contract(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 247992227:
			_network_earn_from_agency_phone_hit(Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -229237358:
			_network_earn_from_agency_story_prep(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1123183389:
			_network_earn_from_agency_story_finale(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1814197076:
			_network_earn_from_award_security_contract(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 713955548:
			_network_earn_from_award_phone_hit(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -2026544524:
			_network_earn_from_award_agency_story(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -719580138:
			_network_earn_from_award_short_trip(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -163417439:
			_network_earn_rival_delivery_security_contract(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1658225921:
			_network_spent_supply_contact_service(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -551835600:
			_network_spent_source_bike_contact_service(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1230687625:
			_network_spent_hidden_contact_service(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -550417574:
			_network_earn_from_agency_short_trip(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1637817605:
			_network_spent_agency_concierge(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/].f_66.f_16, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case 830018386:
			_network_spent_company_suv_contact_service(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case -1433071892:
			_network_earn_from_club_management_participation(Global_4534105[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		
		case -2013760296:
			unk_0x2CEB0E0BC2A77C05(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/]);
			break;
		
		case 761999406:
			unk_0x45087AE480B233AC(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15, Global_4534105[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1033889004:
			unk_0x02D24A35A9CC3503(Global_4534105[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4534105[iParam0 /*85*/], Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
			network_earn_from_ambient_job(Global_4534105[iParam0 /*85*/].f_66.f_1, &(Global_4534105[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		
		case 1628412596:
			unk_0x59498BC8B1C8B15C(Global_4534105[iParam0 /*85*/].f_66.f_1, Global_4534105[iParam0 /*85*/].f_1, Global_4534105[iParam0 /*85*/].f_9, Global_4534105[iParam0 /*85*/].f_66.f_15);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			net_gameserver_basket_apply_server_data(Global_4534105[iParam0 /*85*/].f_66, &uVar4);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
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

void func_34(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_35(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4534105[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_36(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4539666[iParam0 /*12*/].f_1 == Global_4539666[iParam0 /*12*/].f_6)
	{
		if (Global_4539666[iParam0 /*12*/].f_1 != 1445302971 && Global_4539666[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = get_hash_key(sVar2);
	iVar0 = (iVar0 || func_38());
	iVar0 = (iVar0 + Global_4537615);
	func_37(&uVar1);
	iVar0 = (iVar0 || uVar1);
	clear_bit(&iVar0, 28);
	clear_bit(&iVar0, 29);
	clear_bit(&iVar0, 26);
	iVar3 = (Global_4539666[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4539666[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4539666[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4539666[iParam0 /*12*/] != Global_4539666[iParam0 /*12*/].f_5 || Global_4539666[iParam0 /*12*/].f_1 != Global_4539666[iParam0 /*12*/].f_6) || Global_4539666[iParam0 /*12*/].f_2 != iVar5) || Global_4539666[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_110088 = 1;
	}
}

int func_37(var uParam0)
{
	*uParam0 = shift_left(1, 2);
	return 5410420;
}

int func_38()
{
	return shift_left(1, 25);
}

int func_39()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_46())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44(159))
	{
		if (!func_43())
		{
			return 1;
		}
	}
	if (func_44(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_40() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_40()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_40()
{
	switch (func_42())
	{
		case 0:
			return func_41();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_41()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_42()
{
	return Global_31959;
}

bool func_43()
{
	return Global_2714762.f_698;
}

int func_44(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return Global_2725403;
}

bool func_46()
{
	return Global_2714762.f_693;
}

void func_47()
{
	wait(0);
}

void func_48()
{
	func_49();
}

void func_49()
{
	terminate_this_thread();
}

void func_50(struct<34> Param0)
{
	if (Global_262145.f_24104)
	{
		func_48();
	}
	Local_22.f_66 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_14 = { Global_4534105[Param0.f_33 /*85*/].f_14 };
	iLocal_21 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_48();
	}
	if (!func_51(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_48();
	}
	if (Local_22.f_66.f_2 != 0)
	{
		Local_22.f_66.f_2 = 1;
	}
}

int func_51(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_4534105[iParam2 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

