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
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	struct<4> Local_94 = { 0, 0, 0, 0 } ;
	struct<16> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	iLocal_99 = -1;
	if (_get_number_of_references_of_script_with_name_hash(joaat("context_controller")) > 1)
	{
		terminate_this_thread();
	}
	network_set_script_is_safe_for_network_game();
	iVar0 = 0;
	iVar1 = iVar0;
	settimera(0);
	Global_43986 = 0;
	func_41();
	StringCopy(&Global_43987, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_78319;
	while (true)
	{
		if (Global_78319)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_78319 != iVar8)
		{
			func_25();
			func_41();
			iVar2 = -1;
			iVar8 = Global_78319;
			while (is_player_switch_in_progress())
			{
				wait(2000);
			}
		}
		if (Global_43992)
		{
			if (Global_43994 > -1)
			{
				if (!Global_43792[Global_43994 /*32*/].f_6)
				{
					if (!func_23(Global_43994, 1))
					{
						Global_43994 = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_43992)
			{
				if (Global_43994 != iVar2)
				{
					if (func_18(Global_43994))
					{
						func_25();
						if (!Global_43792[iVar2 /*32*/].f_5 && Global_43792[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_43792[iVar2 /*32*/].f_7)
								{
									if (!Global_43792[iVar2 /*32*/].f_6)
									{
										if (!Global_43792[iVar2 /*32*/].f_12)
										{
											func_17(Global_43792[iVar2 /*32*/].f_8, Global_43792[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_43792[iVar2 /*32*/].f_8, Global_43792[iVar2 /*32*/].f_13, Global_43792[iVar2 /*32*/].f_3, Global_43792[iVar2 /*32*/].f_30);
										}
										Global_43994 = iVar2;
									}
								}
							}
						}
					}
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
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (is_control_released(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (is_control_just_pressed(2, 51))
						{
							Global_43792[iVar2 /*32*/].f_4 = 1;
							Global_43792[iVar2 /*32*/].f_29 = 0;
							iVar7 = Global_43792[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_43985 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!is_ped_dead_or_dying(get_player_ped(get_player_index()), true))
						{
							if (is_ped_in_any_vehicle(get_player_ped(get_player_index()), false))
							{
								if (is_control_enabled(0, 101))
								{
									bVar5 = true;
									disable_control_action(0, 101, true);
								}
								if (is_control_enabled(0, 74))
								{
									bVar4 = true;
									disable_control_action(0, 74, true);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							enable_control_action(0, 101, true);
							bVar5 = false;
						}
						if (bVar4)
						{
							enable_control_action(0, 74, true);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (timera() > 5000)
					{
						Global_43792[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_43792[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_43792[iVar2 /*32*/].f_7 || Global_43792[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_43985)
				{
					func_25();
				}
				if (is_control_just_pressed(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_43792[iVar2 /*32*/].f_29 = 0;
					}
				}
				if (Global_43986)
				{
					Global_43986 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_43792[iVar2 /*32*/].f_4 || Global_43792[iVar2 /*32*/].f_7))
					{
						Global_43986 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_43792[iVar2 /*32*/].f_7 || Global_43792[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			disable_control_action(0, 46, true);
			disable_control_action(0, 54, true);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_43991 = 0;
		Global_43992 = 0;
		func_1();
		wait(0);
	}
}

void func_1()
{
	bool bVar0;
	
	if (!bLocal_91)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_96 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_92)
	{
		if (bLocal_93)
		{
			add_next_message_to_previous_briefs(false);
		}
		begin_text_command_display_help(&Local_94);
		if (bLocal_93)
		{
			add_text_component_substring_player_name(&Local_95);
		}
		else
		{
			add_text_component_substring_text_label(&Global_43987);
			add_text_component_substring_text_label(&Local_95);
		}
		end_text_command_display_help(0, false, bVar0, 50);
	}
	else
	{
		begin_text_command_display_help(&Local_94);
		add_text_component_substring_text_label(&Global_43987);
		end_text_command_display_help(0, false, bVar0, 50);
	}
	switch (iLocal_96)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		play_sound_frontend(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_3()
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)
{
	return func_5(player_id(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_8() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_8())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

void func_9(int iParam0)
{
	_set_help_message_text_style(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		play_sound_frontend(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] && Global_43792[iVar0 /*32*/].f_4)
		{
			if (Global_43792[iVar0 /*32*/].f_31 != 0)
			{
				if (!is_thread_active(Global_43792[iVar0 /*32*/].f_31))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_43792[iVar0 /*32*/] = 0;
					Global_43792[iVar0 /*32*/].f_31 = 0;
					Global_43792[iVar0 /*32*/] = 0;
					Global_43792[iVar0 /*32*/].f_4 = 0;
					Global_43792[iVar0 /*32*/].f_5 = 0;
					Global_43792[iVar0 /*32*/].f_2 = 0;
					Global_43792[iVar0 /*32*/].f_7 = 0;
					Global_43792[iVar0 /*32*/].f_6 = 0;
					Global_43792[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_43994 != -1 || bLocal_91)
	{
		bLocal_91 = false;
		Global_43994 = -1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_43994)
			{
				func_25();
			}
			Global_43792[iVar0 /*32*/].f_31 = 0;
			Global_43792[iVar0 /*32*/] = 0;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = 0;
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_6 = 0;
			Global_43792[iVar0 /*32*/].f_1 = -1;
			Global_43792[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_43792[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1)
		{
			if (Global_43792[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			if (Global_43792[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_43792[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)
{
	Local_94 = { Param0 };
	Local_95 = { Param1 };
	bLocal_91 = true;
	bLocal_92 = true;
	iLocal_96 = uParam2;
	bLocal_93 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)
{
	Local_94 = { Param0 };
	bLocal_91 = true;
	bLocal_92 = false;
	iLocal_96 = uParam1;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_97370 && Global_97369)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_91)
		{
			return 1;
		}
	}
	if (is_help_message_being_displayed() && !_0x214CD562A939246A())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_75485)
	{
		return 1;
	}
	if (!is_player_playing(get_player_index()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (is_cutscene_playing())
	{
		return 1;
	}
	if (Global_43991)
	{
		return 1;
	}
	if (is_hud_component_active(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (is_player_switch_in_progress())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_22(int iParam0)
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

bool func_23(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_43792[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_43792[iVar0 /*32*/].f_12)
	{
		begin_text_command_is_this_help_message_being_displayed(&(Global_43792[iVar0 /*32*/].f_8));
		add_text_component_substring_text_label(&Global_43987);
		bVar1 = end_text_command_is_this_help_message_being_displayed(0);
	}
	else
	{
		begin_text_command_is_this_help_message_being_displayed(&(Global_43792[iVar0 /*32*/].f_8));
		add_text_component_substring_text_label(&Global_43987);
		if (Global_43792[iVar0 /*32*/].f_30)
		{
			add_text_component_substring_player_name(&(Global_43792[iVar0 /*32*/].f_13));
		}
		else
		{
			add_text_component_substring_text_label(&(Global_43792[iVar0 /*32*/].f_13));
		}
		bVar1 = end_text_command_is_this_help_message_being_displayed(0);
	}
	return bVar1;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()
{
	func_11();
	Global_43994 = -1;
}

void func_26()
{
	if (!is_player_switch_in_progress() && !func_32())
	{
		if (func_31(0))
		{
			if (!is_string_null_or_empty(&(Global_2714762.f_785.f_12)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_75598 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_75598)
	{
		case 3:
			Global_75596 = 0;
			break;
		
		case 4:
			Global_75596 = 3;
			break;
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_78319 && func_29())
	{
		return 0;
	}
	if (!Global_78319 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!has_script_loaded("appSecuroServ"))
		{
			request_script("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!has_script_loaded("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4592);
		set_script_as_no_longer_needed("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!has_script_loaded("appBikerBusiness"))
		{
			request_script("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!has_script_loaded("appBikerBusiness"))
		{
			wait(0);
		}
		start_new_script("appBikerBusiness", 4592);
		set_script_as_no_longer_needed("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!has_script_loaded("appImportExport"))
		{
			request_script("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!has_script_loaded("appImportExport"))
		{
			wait(0);
		}
		start_new_script("appImportExport", 4592);
		set_script_as_no_longer_needed("appImportExport");
		return 1;
	}
	if (!has_script_loaded("appInternet"))
	{
		request_script("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!has_script_loaded("appInternet"))
	{
		wait(0);
	}
	start_new_script("appInternet", 4592);
	set_script_as_no_longer_needed("appInternet");
	return 1;
}

var func_28()
{
	return Global_75486;
}

var func_29()
{
	return Global_1931939;
}

void func_30()
{
	Global_2714762.f_785.f_28 = 0;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2714762.f_785.f_28 && get_hash_key(get_this_script_name()) == Global_2714762.f_785.f_31);
	}
	return Global_2714762.f_785.f_28;
}

bool func_32()
{
	return Global_75485;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_60328[iVar1] < 0)
		{
			Global_60328[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			stat_set_int(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			stat_set_int(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			stat_set_int(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_35()
{
	struct<13> Var0[1];
	struct<16> Var1[1];
	int iVar2;
	
	if (Global_1835455 != -1)
	{
		Var0[0 /*13*/] = Global_1835456[0];
		Var0[0 /*13*/].f_1 = Global_1835456[1];
		Var0[0 /*13*/].f_2 = Global_1835456[2];
		Var0[0 /*13*/].f_3 = Global_1835456[3];
		Var0[0 /*13*/].f_4 = Global_1835456[4];
		Var0[0 /*13*/].f_5 = Global_1835456[5];
		Var0[0 /*13*/].f_6 = Global_1835456[6];
		Var0[0 /*13*/].f_7 = Global_1835456[7];
		Var0[0 /*13*/].f_8 = Global_1835456[8];
		Var0[0 /*13*/].f_9 = Global_1835456[9];
		Var0[0 /*13*/].f_10 = Global_1835456[10];
		Var0[0 /*13*/].f_11 = Global_1835456[11];
		Var0[0 /*13*/].f_12 = Global_1835456[12];
		if (is_xbox360_version() || func_40())
		{
			if (!iLocal_97)
			{
				if (network_gamertag_from_handle_start(&(Var0[0 /*13*/])))
				{
					iLocal_97 = 1;
				}
			}
			if (iLocal_97)
			{
				if (network_gamertag_from_handle_pending())
				{
				}
				else
				{
					if (network_gamertag_from_handle_succeeded())
					{
						StringCopy(&(Global_2359296[func_39() /*5567*/].f_5390.f_18[Global_1835455 /*6*/]), network_get_gamertag_from_handle(&(Var0[0 /*13*/])), 24);
					}
					func_38();
				}
			}
		}
		else if (is_ps3_version() || func_37())
		{
			if (func_36(Var0[0 /*13*/]))
			{
				switch (iLocal_98)
				{
					case 0:
						iLocal_99 = network_displaynames_from_handles_start(&Var0, 1);
						if (iLocal_99 >= 0)
						{
							iLocal_98++;
						}
						break;
					
					case 1:
						iVar2 = network_get_displaynames_from_handles(iLocal_99, &Var1, 1);
						switch (iVar2)
						{
							case -1:
								func_38();
								break;
							
							case 0:
								MemCopy(&(Global_2359296[func_39() /*5567*/].f_5390.f_18[Global_1835455 /*6*/]), {Var1[0 /*16*/]}, 6);
								func_38();
								break;
							
							case 1:
								break;
						}
						break;
				}
			}
			else
			{
				func_38();
			}
		}
		else
		{
			if (func_36(Var0[0 /*13*/]))
			{
				StringCopy(&(Global_2359296[func_39() /*5567*/].f_5390.f_18[Global_1835455 /*6*/]), network_member_id_from_gamer_handle(&(Var0[0 /*13*/])), 24);
			}
			func_38();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

bool func_37()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

void func_38()
{
	Global_1835455 = -1;
	iLocal_97 = 0;
	iLocal_99 = -1;
	iLocal_98 = 0;
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_40()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

void func_41()
{
	int iVar0;
	
	Global_43985 = 0;
	Global_43991 = 0;
	Global_43992 = 0;
	Global_43993 = 1;
	Global_43994 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_43792[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

