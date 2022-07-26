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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	char cLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	char cLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	char cLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	network_set_script_is_safe_for_network_game();
	while (true)
	{
		wait(0);
		if (BitTest(Global_8137, 1))
		{
			if (!BitTest(Global_8136, 20))
			{
				if (is_mobile_phone_call_ongoing())
				{
					if (Global_20254)
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_20209)
						{
							func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					clear_bit(&Global_8137, 1);
				}
			}
		}
		if (BitTest(Global_20471, 0))
		{
			if (!func_120())
			{
				if (!BitTest(Global_20471, 1))
				{
					set_bit(&Global_20471, 1);
					if (network_is_game_in_progress())
					{
						iLocal_89 = get_network_time();
					}
					else
					{
						iLocal_85 = get_game_timer();
					}
				}
				if (network_is_game_in_progress())
				{
					iLocal_91 = get_time_difference(get_network_time(), iLocal_89);
				}
				else
				{
					iLocal_86 = get_game_timer();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_113(&Global_21059, &Global_21675, &Global_21595, Global_21608, Global_22590, Global_22591, 0))
					{
						Global_20471 = 0;
					}
				}
				else
				{
					Global_20471 = 0;
				}
			}
		}
		if (((!is_player_playing(player_id()) && !BitTest(Global_4718592.f_17, 4)) && !func_112()) && _get_number_of_references_of_script_with_name_hash(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21605 != 0)
			{
				if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
				{
					func_111();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_107();
		}
		switch (Global_21605)
		{
			case 0:
				break;
			
			case 1:
				if (Global_21611)
				{
					if (Global_21601 == 0)
					{
						func_105();
					}
					else
					{
						func_104();
						func_105();
					}
				}
				else if (Global_21601 == 0)
				{
					func_92();
				}
				else
				{
					func_104();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_21611)
				{
					if (Global_21613)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_21615 = 0;
	Global_20265 = 0;
	func_2();
}

void func_2()
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_21616 = 0;
	Global_21617 = 0;
	Global_21618 = 0;
	Global_21619 = 0;
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
	Global_21609 = 0;
	Global_21610 = 0;
	Global_21652 = 0;
	Global_21653 = 0;
	Global_21656 = 0;
	Global_21658 = 0;
	Global_21657 = 0;
	Global_21660 = 0;
	Global_21659 = 0;
	Global_22622 = 0;
	Global_21662 = 0;
	if (Global_20266.f_1 == 10)
	{
	}
	else if (BitTest(Global_8136, 11))
	{
		func_3();
	}
	Global_21611 = 0;
	Global_21612 = 0;
	Global_21613 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22595 = 0;
	Global_22602 = 0;
	Global_22601 = 0;
	Global_22598 = 0;
	Global_22597 = 0;
	Global_22599 = 0;
	Global_22600 = 0;
	Global_21601 = 0;
	Global_21602 = 0;
	Global_21603 = 0;
	Global_21604 = 0;
	Global_21863 = 0;
	Global_22626 = 5000;
	Global_20249 = 0;
	clear_bit(&Global_8136, 20);
	clear_bit(&Global_8136, 24);
	clear_bit(&Global_8137, 23);
	clear_bit(&Global_8138, 0);
	clear_bit(&Global_8137, 9);
	clear_bit(&Global_8137, 31);
	clear_bit(&Global_8137, 17);
	clear_bit(&Global_8138, 5);
	Global_22589 = 0;
	Global_22588 = 0;
	if (is_scripted_conversation_ongoing())
	{
		Global_21605 = 4;
	}
	else
	{
		Global_21605 = 0;
		Global_22616 = 0;
		Global_22627 = get_game_timer();
	}
}

void func_3()
{
	if (!Global_78319)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (BitTest(Global_8136, 11))
			{
				if (!Global_20209)
				{
					task_use_mobile_phone(player_ped_id(), 0, 1);
				}
				if (Global_78319)
				{
					set_ped_config_flag(player_ped_id(), 244, true);
					set_ped_config_flag(player_ped_id(), 243, true);
					set_ped_config_flag(player_ped_id(), 242, true);
				}
				clear_bit(&Global_8136, 11);
			}
		}
	}
}

void func_4()
{
	Global_21615 = 0;
	Global_20265 = 0;
	func_2();
}

void func_5()
{
	if (is_player_playing(player_id()))
	{
		if (is_ped_swimming_under_water(player_ped_id()))
		{
			if (Global_21661 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_22597 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22616 == 1)
			{
				pause_scripted_conversation(true);
				iLocal_31 = 1;
			}
		}
		else if (Global_22616 == 0)
		{
			restart_scripted_conversation();
			iLocal_31 = 0;
		}
	}
	else if (Global_22599 > 0)
	{
		iLocal_37 = get_game_timer();
		if ((iLocal_37 - iLocal_36) > Global_22599)
		{
			start_preloaded_conversation();
			Global_22597 = 0;
		}
	}
	if (Global_22616 == 0)
	{
		if (!is_scripted_conversation_ongoing())
		{
			Global_21605 = 6;
		}
	}
}

void func_6()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_mobile_phone_call_ongoing())
	{
		if (!BitTest(Global_8136, 11))
		{
			if (!is_entity_dead(player_ped_id(), false))
			{
				if (!is_ped_in_any_vehicle(player_ped_id(), false))
				{
					if (Global_78319 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!is_entity_dead(player_ped_id(), false))
		{
			if (is_ped_sitting_in_any_vehicle(player_ped_id()))
			{
				if (Global_78319 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_78319 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22616 == 1)
		{
			if (Global_22617 == 1)
			{
				pause_scripted_conversation(true);
				iLocal_31 = 1;
				Global_22617 = 0;
			}
		}
	}
	else if (Global_22616 == 0)
	{
		if (Global_22617 == 1)
		{
			restart_scripted_conversation();
			iLocal_31 = 0;
			Global_22617 = 0;
		}
	}
	if (Global_21658 == 0)
	{
		if (!Global_21618)
		{
			if (!BitTest(Global_8137, 31))
			{
				if (!BitTest(Global_8137, 27))
				{
					if (func_54())
					{
						if (Global_20266.f_1 > 6)
						{
							set_bit(&Global_8137, 24);
							set_bit(&Global_8137, 27);
							clear_bit(&Global_8137, 26);
							clear_bit(&Global_8137, 25);
						}
					}
				}
			}
		}
	}
	if (is_mobile_phone_call_ongoing() == 0 && Global_21618 == 0)
	{
		if (Global_21658 == 1)
		{
			set_bit(&Global_8137, 23);
		}
		else
		{
			clear_bit(&Global_8137, 23);
		}
		if (Global_21662)
		{
			if (Global_21658 == 0)
			{
				Global_21224 = { Global_21663 };
				Global_21681 = { Global_21669 };
				Global_21615 = 0;
				Global_22622 = 6;
				func_53();
				return;
			}
		}
		if (!Global_21660)
		{
			while (Global_21658 == 1)
			{
				wait(0);
				if (Global_20266.f_1 < 6)
				{
					Global_21658 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21660)
						{
							iLocal_30 = 1;
							Global_22620 = 1;
							func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
							func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_20254)
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								set_bit(&Global_8136, 17);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								set_bit(&Global_8136, 17);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22618 = 1;
							if (func_50(Global_7451, Global_20266) == 0)
							{
								func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21747, "CELL_300", &(Global_117[Global_7451 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
								func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_20254)
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							clear_bit(&Global_8136, 17);
						}
					}
					if (func_49(2, Global_20235, 0))
					{
						func_47();
						Global_20192 = 0.19f;
						Global_21658 = 0;
						func_45();
						if (Global_21660)
						{
							Global_21224 = { Global_21741 };
							Global_22622 = 5;
						}
						else if (Global_21603 > 0)
						{
							Global_21863 = 1;
							Global_21605 = 0;
							Global_22626 = 0;
							if (BitTest(Global_8137, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_22589 + 1)
								{
									uLocal_94[iVar0] = func_44(&(Global_21864[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_44(&(Global_22226[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_22589, &Global_20894, Global_7451, &Global_21681, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_21603 == 2)
							{
								func_25(&Global_20894, Global_7451, &Global_21681, &(Global_21759[0 /*6*/]), &(Global_21811[0 /*6*/]), &(Global_21759[1 /*6*/]), &(Global_21811[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22622 = 1;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							func_23();
							return;
						}
						else
						{
							Global_21224 = { Global_21699 };
							Global_22622 = 1;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20236, 0) || BitTest(Global_8136, 24))
					{
						func_47();
						Global_20192 = 0.19f;
						Global_21658 = 0;
						func_45();
						if (Global_21660)
						{
							Global_21224 = { Global_21735 };
							Global_22622 = 4;
						}
						else if (Global_21603 > 0)
						{
							Global_21863 = 1;
							Global_21605 = 0;
							Global_22626 = 0;
							if (BitTest(Global_8137, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_22588 + 1)
								{
									uLocal_96[iVar1] = func_44(&(Global_22045[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_44(&(Global_22407[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_22588, &Global_20894, Global_7451, &Global_21681, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_21603 == 2)
							{
								func_25(&Global_20894, Global_7451, &Global_21681, &(Global_21772[0 /*6*/]), &(Global_21824[0 /*6*/]), &(Global_21772[1 /*6*/]), &(Global_21824[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22622 = 2;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							func_23();
							return;
						}
						else
						{
							Global_21224 = { Global_21705 };
							Global_22622 = 2;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20238, 0))
					{
						if (Global_21660)
						{
							Global_20192 = 0.19f;
							Global_21658 = 0;
							func_45();
							func_47();
							Global_21224 = { Global_21729 };
							Global_22622 = 3;
							Global_22618 = 0;
							Global_22620 = 0;
							Global_21615 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_21658)
			{
				wait(0);
				if (Global_20266.f_1 < 6)
				{
					Global_21658 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20247, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_121(Global_20247, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_121(Global_20247, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_20247, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_20254)
						{
							func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						clear_bit(&Global_8136, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_20235, 0))
					{
						func_47();
						Global_21658 = 0;
						func_45();
						begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
						iLocal_99 = end_scaleform_movie_method_return_value();
						while (!is_scaleform_movie_method_return_value_ready(iLocal_99))
						{
							wait(0);
						}
						iVar2 = get_scaleform_movie_method_return_value_int(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_21224 = { Global_21735 };
								Global_22622 = 4;
								break;
							
							case 1:
								Global_21224 = { Global_21729 };
								Global_22622 = 3;
								break;
							
							case 2:
								Global_21224 = { Global_21741 };
								Global_22622 = 5;
								break;
						}
						Global_22618 = 0;
						Global_22620 = 0;
						Global_21615 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20236, 0))
					{
						Global_21658 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_21606 == 0)
		{
			stop_scripted_conversation(false);
			settimera(0);
			while (timera() < 900 && Global_20266.f_1 == 9)
			{
				wait(0);
			}
			Global_21605 = 6;
		}
		if (!Global_1574982)
		{
			play_sound_frontend(-1, "Hang_Up", &Global_20255, true);
		}
		func_15();
		Global_20266.f_1 = Global_20268;
		func_8();
	}
	else if (Global_20464 == 0)
	{
		if (func_49(2, Global_20234, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (is_player_control_on(player_id()))
				{
					if (BitTest(Global_8136, 20))
					{
					}
					else
					{
						Global_20244 = 1;
						func_45();
						stop_scripted_conversation(false);
						Global_21654 = 1;
						Global_21655 = 1;
						Global_21605 = 6;
						func_15();
						Global_20266.f_1 = Global_20268;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	char cVar0[24];
	
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!has_scaleform_movie_loaded(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		wait(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_8741);
			if (Global_8741 == 1)
			{
				func_51(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_51(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				set_bit(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_11();
				clear_bit(&Global_8138, 9);
				func_51(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_10();
				func_51(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					end_scaleform_movie_method();
				}
				else if (func_50(Global_7451, Global_20266) == 0)
				{
					func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_51(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					end_scaleform_movie_method();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_50(Global_7451, Global_20266) == 0)
					{
						func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &cVar0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_10()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (Global_20266 == 0)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 1)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 2)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 3)
		{
			switch (Global_4541505)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()
{
	if (Global_78319)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		set_bit(&Global_8136, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_14(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar2);
								end_scaleform_movie_method();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_121(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_121(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_121(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_121(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_121(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(Global_8142);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar7);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar8);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 8)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_9(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_121(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_14(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_15()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return;
	}
	switch (Global_20268)
	{
		case 5:
			Global_20268 = 6;
			break;
		
		case 6:
			if (BitTest(Global_8137, 5))
			{
				Global_20268 = 6;
				clear_bit(&Global_8137, 5);
			}
			else
			{
				Global_20268 = 3;
			}
			break;
		
		case 7:
			Global_20268 = 3;
			break;
		
		case 3:
			if (BitTest(Global_8137, 5))
			{
				Global_20268 = 6;
				clear_bit(&Global_8137, 5);
			}
			else
			{
				Global_20268 = 3;
			}
			break;
		
		default:
			Global_20268 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_98)
	{
		if (timera() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_49(2, Global_20242, 0) || is_control_just_pressed(2, 181))
		{
			func_20();
			iLocal_98 = 1;
			settimera(0);
		}
		if (func_49(2, Global_20243, 0) || is_control_just_pressed(2, 180))
		{
			func_17();
			iLocal_98 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_51(Global_20247, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(2);
		}
		else
		{
			_cell_cam_move_finger(1);
		}
	}
}

int func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_51(Global_20247, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(1);
		}
		else
		{
			_cell_cam_move_finger(2);
		}
	}
}

void func_22(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	func_9(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_9(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_9(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_9(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_9(sParam6);
	}
	end_scaleform_movie_method();
}

void func_23()
{
	if (has_scaleform_movie_loaded(Global_20247))
	{
		func_24();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_78319)
	{
		func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_8136, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_39(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					stop_scripted_conversation(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					func_111();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_37();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			clear_bit(&Global_8136, 20);
			clear_bit(&Global_8137, 17);
			clear_bit(&Global_8138, 0);
			if (bParam3)
			{
				func_30();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return 0;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (Global_21863 == 0)
					{
						if (is_entity_in_water(player_ped_id()))
						{
							return 0;
						}
						if (is_player_climbing(player_id()))
						{
							return 0;
						}
						if (is_ped_planting_bomb(player_ped_id()))
						{
							return 0;
						}
						if (is_special_ability_active(player_id(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_27();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		func_53();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_111();
	}
	return 0;
}

void func_27()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	clear_bit(&Global_8137, 16);
}

int func_28()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, true);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(player_ped_id(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_30()
{
	if (func_14(14))
	{
		if (!is_entity_dead(player_ped_id(), false))
		{
			if (get_entity_model(player_ped_id()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_31();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

var func_31()
{
	func_32();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_35(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_34(player_ped_id());
			if (func_33(iVar0) && (!func_14(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_33(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_38(int iParam0, int iParam1)
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

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_40(var uParam0)
{
	Global_21602 = uParam0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
}

void func_41()
{
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_21619 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_20255, true);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		_cell_cam_move_finger(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!is_ped_in_any_vehicle(player_ped_id(), false))
			{
				if (!Global_20209)
				{
					if (!BitTest(Global_8136, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (Global_20209 == 0)
			{
				if (Global_7451 != 128)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), false))
					{
						if (Global_21605 != 2)
						{
						}
					}
				}
			}
		}
		if (func_14(14))
		{
			return 0;
		}
		if (is_ped_in_cover(player_ped_id(), false))
		{
			return 0;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			if (!_is_in_vehicle_cam_disabled())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(player_ped_id(), false)))
				{
					return 0;
				}
			}
		}
		if (((is_ped_swimming(player_ped_id()) || is_ped_swimming_under_water(player_ped_id())) || is_player_climbing(player_id())) || (is_ped_hanging_on_to_vehicle(player_ped_id()) && !(BitTest(Global_4718592.f_37, 17) && (network_is_activity_session() || Global_1922883))))
		{
			return 0;
		}
		if (Global_112434)
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _is_in_vehicle_cam_disabled()))
	{
		iVar2 = 1;
		if (!is_entity_dead(player_ped_id(), false))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), false))
			{
				iVar3 = get_vehicle_ped_is_in(player_ped_id(), false);
				if ((((((((is_this_model_a_bike(get_entity_model(iVar3)) || is_this_model_a_bicycle(get_entity_model(iVar3))) || is_this_model_a_quadbike(get_entity_model(iVar3))) || get_entity_model(iVar3) == joaat("seashark")) || get_entity_model(iVar3) == joaat("seashark2")) || get_entity_model(iVar3) == joaat("rhino")) || get_entity_model(iVar3) == joaat("submersible")) || get_entity_model(iVar3) == joaat("submersible2")) || get_entity_model(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4541507 || iVar2 == 1)
	{
		if (_get_number_of_references_of_script_with_name_hash(joaat("apptrackify")) > 0 || Global_113386.f_14051.f_89)
		{
			if (_get_number_of_references_of_script_with_name_hash(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (is_control_just_pressed(iParam0, iParam1) || (iParam2 == 1 && is_disabled_control_just_pressed(iParam0, iParam1)))
	{
		if (is_pc_version())
		{
			if (update_onscreen_keyboard() == 0 || (_network_is_text_chat_active() && _is_using_keyboard(2)))
			{
				return 0;
			}
		}
		if (is_pause_menu_active() || is_warning_message_active())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_51(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	scaleform_movie_method_add_param_int(round(fParam2));
	if (fParam3 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam6));
	}
	end_scaleform_movie_method();
}

void func_52()
{
	if (func_48())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!is_ped_in_any_vehicle(player_ped_id(), false))
			{
				if (!Global_20209)
				{
					if (BitTest(Global_8136, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_21605 = 1;
}

int func_54()
{
	if (network_is_game_in_progress())
	{
		iLocal_91 = get_time_difference(get_network_time(), iLocal_90);
	}
	else
	{
		iLocal_88 = get_game_timer();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		set_bit(&Global_8137, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_8136, 30);
	}
	else
	{
		clear_bit(&Global_8136, 30);
	}
	if (!func_28())
	{
		Global_20266.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				get_mobile_phone_position(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			set_mobile_phone_position(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			set_mobile_phone_position(Global_20203);
		}
		else
		{
			set_mobile_phone_position(Global_20194);
		}
	}
}

int func_57(int iParam0)
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

bool func_58()
{
	return BitTest(Global_1958711, 5);
}

bool func_59()
{
	return BitTest(Global_1958711, 19);
}

void func_60()
{
	if (func_49(2, Global_20243, 0))
	{
		if (Global_22616 == 0)
		{
			if (Global_21611)
			{
				if (BitTest(Global_8137, 17))
				{
				}
				else
				{
					skip_to_next_scripted_conversation_line();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_62() && is_ped_in_cover(player_ped_id(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_78319)
	{
		if (!is_ped_injured(player_ped_id()) && iVar1 == 0)
		{
			iVar2 = get_ped_prop_index(player_ped_id(), 0);
			if (Global_78319)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || is_ped_wearing_helmet(player_ped_id()))
				{
					iVar0 = 1;
				}
			}
			else if (is_ped_wearing_helmet(player_ped_id()))
			{
				iVar0 = 1;
			}
			if (!Global_20209)
			{
				if (Global_7451 != 128)
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(player_ped_id(), false))
						{
							if (is_ped_in_any_vehicle(player_ped_id(), false))
							{
							}
							else
							{
								if (Global_78319)
								{
									set_ped_config_flag(player_ped_id(), 244, false);
									set_ped_config_flag(player_ped_id(), 243, false);
									set_ped_config_flag(player_ped_id(), 242, false);
								}
								set_bit(&Global_8136, 11);
								task_use_mobile_phone(player_ped_id(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	int iVar0;
	int iVar1;
	
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_78319 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_22618 = 1;
		if (func_50(Global_7451, Global_20266) == 0)
		{
			func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21747, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21747, &(Global_1998[Global_7451 /*29*/].f_7), &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_3), 0);
			func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_20192 = 0.2f;
		if (Global_20254)
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_8136, 17);
	}
	if (Global_21658 == 1)
	{
		if (Global_20266.f_1 < 6)
		{
			Global_21658 = 0;
		}
		else
		{
			if (Global_20206 == 0)
			{
				if (func_49(2, Global_20235, 0))
				{
					Global_20192 = 0.19f;
					Global_21658 = 0;
					func_45();
					Global_22623 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_20236, 0))
			{
				Global_20192 = 0.19f;
				Global_21658 = 0;
				func_45();
				Global_22623 = 2;
			}
		}
	}
	else if (Global_22623 == 2)
	{
		if (Global_21606 == 0)
		{
			stop_scripted_conversation(false);
			Global_21605 = 6;
		}
		func_15();
		Global_20266.f_1 = Global_20268;
		func_8();
	}
	else if (!is_mobile_phone_call_ongoing())
	{
		iLocal_32 = 0;
		stop_scripted_conversation(false);
		Global_21605 = 6;
		play_sound_frontend(-1, "Hang_Up", &Global_20255, true);
		func_15();
		Global_20266.f_1 = Global_20268;
		func_8();
	}
}

void func_64()
{
	if (Global_20472 == 1)
	{
		if (is_mobile_phone_call_ongoing())
		{
			if (get_is_preloaded_conversation_ready())
			{
				Global_20472 = 0;
			}
		}
		if (!is_player_playing(player_id()))
		{
			Global_20472 = 0;
			stop_scripted_conversation(false);
			Global_21605 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_20472 == 1)
		{
			Global_20472 = 0;
		}
	}
	if (timera() < Global_22626 || Global_20472 == 1)
	{
		if (func_49(2, Global_20234, 0))
		{
			if (is_player_playing(player_id()))
			{
				if (is_player_control_on(player_id()))
				{
					if (BitTest(Global_8136, 20))
					{
					}
					else
					{
						Global_20244 = 1;
						func_45();
						stop_scripted_conversation(false);
						Global_21654 = 1;
						Global_21605 = 6;
						clear_bit(&Global_8136, 27);
						if (!Global_21616)
						{
							set_bit(&Global_8137, 5);
						}
						func_15();
						Global_20266.f_1 = Global_20268;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		clear_bit(&Global_8136, 27);
		Global_21605 = 4;
		Global_21662 = 0;
		func_67();
		func_66();
		if (!Global_21618)
		{
			if (Global_22622 == 0)
			{
				if (!BitTest(Global_8138, 5))
				{
					start_preloaded_conversation();
				}
				clear_bit(&Global_8138, 5);
			}
			else
			{
				start_script_phone_conversation(Global_21224.f_368, Global_21224.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (network_is_game_in_progress())
	{
		iLocal_90 = get_network_time();
	}
	else
	{
		iLocal_87 = get_game_timer();
	}
}

void func_66()
{
	if (Global_21618)
	{
		if (Global_78319)
		{
			if (has_scaleform_movie_loaded(Global_20247))
			{
				if (!is_pc_version())
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					set_bit(&(Global_2815059.f_1795), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (has_scaleform_movie_loaded(Global_20247))
	{
		if (!Global_21613)
		{
			func_121(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21618)
			{
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(4);
				scaleform_movie_method_add_param_int(0);
				scaleform_movie_method_add_param_int(2);
				begin_text_command_scaleform_string("CELL_CONDFON");
				add_text_component_substring_player_name(&Global_21620);
				end_text_command_scaleform_string();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				end_scaleform_movie_method();
			}
			else if (func_50(Global_7451, Global_20266) == 0)
			{
				func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_121(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_219", &(Global_1998[Global_7451 /*29*/].f_3), 0);
			}
		}
		func_51(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (network_is_game_in_progress())
	{
		iLocal_92 = get_time_difference(get_network_time(), iLocal_78);
		iLocal_93 = get_time_difference(get_network_time(), iLocal_81);
	}
	else
	{
		iLocal_77 = get_game_timer();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = get_game_timer();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_21652 == 1)
	{
		if (func_48())
		{
			if (iLocal_92 > 4000)
			{
				if (BitTest(Global_8136, 14))
				{
					if (has_scaleform_movie_loaded(Global_20247))
					{
						func_45();
						Global_20265 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (BitTest(Global_8136, 14))
			{
				if (has_scaleform_movie_loaded(Global_20247))
				{
					func_45();
					Global_20265 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_20265 = 3;
	}
	if (Global_20265 == 2)
	{
		iLocal_30 = 0;
		Global_21605 = 4;
		func_61();
		Global_21662 = 0;
		func_67();
		func_66();
		if (!Global_21618)
		{
			if (Global_22622 == 0)
			{
				start_preloaded_conversation();
			}
			else
			{
				start_script_phone_conversation(Global_21224.f_368, Global_21224.f_369);
			}
		}
		func_65();
		Global_22621 = 0;
	}
	if (Global_21652 == 0)
	{
		if (Global_20265 == 3)
		{
			if (Global_21618)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_22621 = 1;
				stop_scripted_conversation(false);
				Global_21605 = 6;
				func_15();
				Global_20266.f_1 = Global_20268;
				func_8();
			}
		}
	}
	else if (Global_20265 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2821909.f_2 = 1;
	Global_2821909.f_38 = 1;
	if (network_is_signed_online())
	{
		if (network_session_is_in_voice_session())
		{
			while (network_session_is_voice_session_busy())
			{
				wait(0);
			}
			network_session_voice_leave();
			Global_2821909 = 0;
			Global_2821909.f_2 = 0;
		}
		else if (func_73(Global_2821909.f_20))
		{
			if (network_is_friend(&(Global_2821909.f_20)))
			{
				if (!network_is_friend_handle_online(&(Global_2821909.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2821909.f_37)
	{
		func_55(0);
	}
	Global_2821909.f_37 = 0;
	Global_2821909.f_3 = 0;
}

void func_71()
{
	Global_2821909.f_1 = 0;
	Global_2821909 = 0;
	Global_2821909.f_2 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
	Global_2821909.f_38 = 0;
	Global_2821909.f_56 = 0;
	Global_2821909.f_57 = 0;
	Global_2821909.f_58 = -2;
	Global_2821909.f_3 = 0;
	func_72(&(Global_2821909.f_20));
}

void func_72(var uParam0)
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

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_21601)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_21224.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_20473[iVar2 /*6*/] = { Global_21224.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_20473[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_20473[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_20473[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (does_text_label_exist(&cLocal_38))
			{
				StringCopy(&cLocal_46, _get_label_text(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				iVar5 = func_85(iVar13);
				bLocal_67 = func_84();
				bLocal_68 = func_83();
				bLocal_69 = func_82();
				bVar6 = func_81(iVar13);
				bVar7 = func_80(iVar13);
				bVar8 = func_79(iVar13);
				iVar12 = func_78(iVar13);
				bVar9 = func_77(iVar13);
				bVar10 = func_76(iVar13);
				bVar11 = func_75(iVar13);
				if (does_text_label_exist(&(Global_20473[iVar2 /*6*/])))
				{
					if (are_strings_equal(&(Global_20473[iVar2 /*6*/]), &(Global_21224.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						add_line_to_conversation(iVar3, &cLocal_46, &(Global_20473[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (does_text_label_exist(&cLocal_42))
			{
				StringCopy(&cLocal_46, _get_label_text(&cLocal_42), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				iVar5 = func_85(0);
				bLocal_67 = func_84();
				bLocal_68 = func_83();
				bLocal_69 = func_82();
				bVar6 = func_81(0);
				bVar7 = func_80(0);
				bVar8 = func_79(0);
				iVar12 = func_78(0);
				bVar9 = func_77(0);
				bVar10 = func_76(0);
				bVar11 = func_75(0);
				add_line_to_conversation(iVar3, &cLocal_46, &(Global_21224.f_6[iLocal_75 /*6*/]), iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				StringCopy(&(Global_20473[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_20473[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_21611 == 0)
	{
		_0x0B568201DD99F0EB(bLocal_68);
		_0x61631F5DF50D1C34(bLocal_69);
		start_script_conversation(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, bLocal_67);
		Global_21605 = 4;
	}
}

int func_75(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (are_strings_equal(sVar0, "0"))
	{
		return 1;
	}
	if (are_strings_equal(sVar0, "1"))
	{
		return 1;
	}
	if (are_strings_equal(sVar0, "2"))
	{
		return 2;
	}
	if (are_strings_equal(sVar0, "3"))
	{
		return 3;
	}
	if (are_strings_equal(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_60), 2, 3);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_60), 1, 2);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_60), 0, 1);
	if (are_strings_equal(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(sVar0);
}

int func_86(char* sParam0)
{
	if (are_strings_equal(sParam0, "0"))
	{
		return 0;
	}
	if (are_strings_equal(sParam0, "1"))
	{
		return 1;
	}
	if (are_strings_equal(sParam0, "2"))
	{
		return 2;
	}
	if (are_strings_equal(sParam0, "3"))
	{
		return 3;
	}
	if (are_strings_equal(sParam0, "4"))
	{
		return 4;
	}
	if (are_strings_equal(sParam0, "5"))
	{
		return 5;
	}
	if (are_strings_equal(sParam0, "6"))
	{
		return 6;
	}
	if (are_strings_equal(sParam0, "7"))
	{
		return 7;
	}
	if (are_strings_equal(sParam0, "8"))
	{
		return 8;
	}
	if (are_strings_equal(sParam0, "9"))
	{
		return 9;
	}
	if (are_strings_equal(sParam0, "A"))
	{
		return 10;
	}
	if (are_strings_equal(sParam0, "B"))
	{
		return 11;
	}
	if (are_strings_equal(sParam0, "C"))
	{
		return 12;
	}
	if (are_strings_equal(sParam0, "D"))
	{
		return 13;
	}
	if (are_strings_equal(sParam0, "E"))
	{
		return 14;
	}
	if (are_strings_equal(sParam0, "F"))
	{
		return 15;
	}
	if (are_strings_equal(sParam0, "G"))
	{
		return 16;
	}
	if (are_strings_equal(sParam0, "H"))
	{
		return 17;
	}
	if (are_strings_equal(sParam0, "I"))
	{
		return 18;
	}
	if (are_strings_equal(sParam0, "J"))
	{
		return 19;
	}
	if (are_strings_equal(sParam0, "K"))
	{
		return 20;
	}
	if (are_strings_equal(sParam0, "L"))
	{
		return 21;
	}
	if (are_strings_equal(sParam0, "M"))
	{
		return 22;
	}
	if (are_strings_equal(sParam0, "N"))
	{
		return 23;
	}
	if (are_strings_equal(sParam0, "O"))
	{
		return 24;
	}
	if (are_strings_equal(sParam0, "P"))
	{
		return 25;
	}
	if (are_strings_equal(sParam0, "Q"))
	{
		return 26;
	}
	if (are_strings_equal(sParam0, "R"))
	{
		return 27;
	}
	if (are_strings_equal(sParam0, "S"))
	{
		return 28;
	}
	if (are_strings_equal(sParam0, "T"))
	{
		return 29;
	}
	if (are_strings_equal(sParam0, "U"))
	{
		return 30;
	}
	if (are_strings_equal(sParam0, "V"))
	{
		return 31;
	}
	if (are_strings_equal(sParam0, "W"))
	{
		return 32;
	}
	if (are_strings_equal(sParam0, "X"))
	{
		return 33;
	}
	if (are_strings_equal(sParam0, "Y"))
	{
		return 34;
	}
	if (are_strings_equal(sParam0, "Z"))
	{
		return 35;
	}
	if (are_strings_equal(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(sVar0);
}

int func_88(int iParam0)
{
	char* sVar0;
	
	sVar0 = _get_text_substring(_get_label_text(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(sVar0);
}

void func_89()
{
	cLocal_70 = { Global_21224.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (does_text_label_exist(&cLocal_70))
	{
		sLocal_74 = _get_label_text(&cLocal_70);
		if (is_string_null(sLocal_74))
		{
		}
	}
}

void func_90()
{
	cLocal_60 = { Global_21224.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (does_text_label_exist(&cLocal_60))
	{
		sLocal_64 = _get_text_substring(_get_label_text(&cLocal_60), 0, 1);
		if (is_string_null(sLocal_64))
		{
		}
		sLocal_65 = _get_text_substring(_get_label_text(&cLocal_60), 1, 2);
		if (is_string_null(sLocal_65))
		{
		}
		sLocal_66 = _get_text_substring(_get_label_text(&cLocal_60), 2, 3);
		if (is_string_null(sLocal_66))
		{
		}
	}
}

void func_91()
{
	cLocal_55 = { Global_21224.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (does_text_label_exist(&cLocal_55))
	{
		sLocal_59 = _get_label_text(&cLocal_55);
		if (is_string_null(sLocal_59))
		{
		}
	}
}

void func_92()
{
	func_93();
	_0x0B568201DD99F0EB(bLocal_68);
	_0x61631F5DF50D1C34(bLocal_69);
	if (Global_22597)
	{
		preload_script_conversation(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, bLocal_67);
		iLocal_36 = get_game_timer();
	}
	else
	{
		start_script_conversation(Global_21224.f_368, Global_21224.f_369, Global_21224.f_370, bLocal_67);
	}
	Global_21605 = 4;
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (does_text_block_exist(&Global_21681))
	{
		if (are_strings_equal(&Global_21681, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_103() || func_102())
		{
			if (Global_1835497 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_78319 || func_101(0))
		{
			if (Global_1835497 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(get_hash_key(&Global_21681)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_21607 < 5 || Global_21607 == 10) || Global_21607 == 12) || Global_21607 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				request_additional_text(&Global_21681, 7);
				while (!has_additional_text_loaded(7))
				{
					wait(0);
				}
			}
			else
			{
				request_additional_text_for_dlc(&Global_21681, 15);
				while (!has_additional_text_loaded(15))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			request_additional_text(&Global_21681, 6);
			while (!has_additional_text_loaded(6))
			{
				wait(0);
			}
		}
		else if (_get_number_of_references_of_script_with_name_hash(joaat("fm_mission_controller_2020")) == 0)
		{
			request_additional_text_for_dlc(&Global_21681, 14);
			while (!has_additional_text_loaded(14))
			{
				wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	create_new_scripted_conversation();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22615 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_21224 };
		StringConCat(&cLocal_42, "A", 24);
		Global_20473[iVar2 /*6*/] = { Global_21224 };
		StringConCat(&(Global_20473[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_20473[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_20473[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (does_text_label_exist(&cLocal_38))
		{
			StringCopy(&cLocal_46, _get_label_text(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4541417 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			iVar5 = func_85(iVar2);
			bLocal_67 = func_84();
			bLocal_68 = func_83();
			bLocal_69 = func_82();
			bVar6 = func_81(iVar2);
			bVar7 = func_80(iVar2);
			bVar8 = func_79(iVar2);
			iVar12 = func_78(iVar2);
			bVar9 = func_77(iVar2);
			bVar10 = func_76(iVar2);
			bVar11 = func_75(iVar2);
			if (does_text_label_exist(&(Global_20473[iVar2 /*6*/])))
			{
				if (Global_22595 == 0 && Global_22601 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					add_line_to_conversation(iVar3, &cLocal_46, &(Global_20473[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				}
				else if (are_strings_equal(&(Global_20473[iVar2 /*6*/]), &Global_22603))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					add_line_to_conversation(iVar3, &cLocal_46, &(Global_20473[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					Global_22615 = iVar2;
					if (Global_22601 == 1)
					{
						Global_22601 = 0;
					}
				}
			}
			else if (Global_22601 == 0 && Global_22595 == 0)
			{
				add_line_to_conversation(iVar3, &cLocal_46, &cLocal_46, iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (does_text_label_exist(&cLocal_42))
			{
				StringCopy(&cLocal_46, _get_label_text(&cLocal_42), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				iVar5 = func_85(iVar2);
				bLocal_67 = func_84();
				bLocal_68 = func_83();
				bLocal_69 = func_82();
				bVar6 = func_81(iVar2);
				bVar7 = func_80(iVar2);
				bVar8 = func_79(iVar2);
				iVar12 = func_78(iVar2);
				bVar9 = func_77(iVar2);
				bVar10 = func_76(iVar2);
				bVar11 = func_75(iVar2);
				add_line_to_conversation(iVar3, &cLocal_46, &Global_21224, iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20894[iVar0 /*10*/].f_7 == 1)
		{
			if (does_entity_exist(Global_20894[iVar0 /*10*/]) || Global_20894[iVar0 /*10*/] == 0)
			{
				add_ped_to_conversation(iVar0, Global_20894[iVar0 /*10*/], &(Global_20894[iVar0 /*10*/].f_1));
			}
			if (Global_20894.f_161 == iVar0)
			{
				if ((Global_20894.f_162 != 0f && Global_20894.f_162.f_1 != 0f) && Global_20894.f_162.f_2 != 0f)
				{
					wait(0);
					_0x33E3C6C6F2F0B506(Global_20894.f_161, Global_20894.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4541417 == 1)
	{
		Global_4541417 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4541236[iVar0 /*9*/].f_7 == 1)
			{
				if (does_entity_exist(Global_4541236[iVar0 /*9*/]) || Global_4541236[iVar0 /*9*/] == 0)
				{
					add_ped_to_conversation(Global_4541236[iVar0 /*9*/].f_8, Global_4541236[iVar0 /*9*/], &(Global_4541236[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_70 = { Global_21224 };
	StringConCat(&cLocal_70, "LF", 24);
	if (does_text_label_exist(&cLocal_70))
	{
		sLocal_74 = _get_label_text(&cLocal_70);
		if (is_string_null(sLocal_74))
		{
		}
	}
}

void func_96()
{
	cLocal_60 = { Global_21224 };
	StringConCat(&cLocal_60, "IF", 24);
	if (does_text_label_exist(&cLocal_60))
	{
		sLocal_64 = _get_text_substring(_get_label_text(&cLocal_60), 0, 1);
		if (is_string_null(sLocal_64))
		{
		}
		sLocal_65 = _get_text_substring(_get_label_text(&cLocal_60), 1, 2);
		if (is_string_null(sLocal_65))
		{
		}
		sLocal_66 = _get_text_substring(_get_label_text(&cLocal_60), 2, 3);
		if (is_string_null(sLocal_66))
		{
		}
	}
}

void func_97()
{
	cLocal_55 = { Global_21224 };
	StringConCat(&cLocal_55, "SL", 24);
	if (does_text_label_exist(&cLocal_55))
	{
		sLocal_59 = _get_label_text(&cLocal_55);
		if (is_string_null(sLocal_59))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case -342942601:
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case -519616352:
		case 718322585:
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
		case -1018917633:
		case 1332392277:
		case -1889985881:
		case -1536828534:
		case -580715848:
		case -947428706:
		case -790967848:
		case 1475512972:
		case -9119060:
		case 1748914928:
		case -105714609:
		case -1463539315:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2883694)
	{
		if (func_14(0))
		{
			if (Global_3407872 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_14(0))
		{
			if (Global_3932160 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

var func_101(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

bool func_102()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

bool func_103()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_103() || func_102())
	{
		if (Global_1835497 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_78319)
	{
		if (Global_1835497 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (does_text_block_exist(&Global_21681))
	{
		if (are_strings_equal(&Global_21681, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_98(get_hash_key(&Global_21681)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_21607 < 5 || Global_21607 == 10) || Global_21607 == 12) || Global_21607 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			request_additional_text(&Global_21681, 7);
			while (!has_additional_text_loaded(7))
			{
				wait(0);
			}
		}
		else
		{
			request_additional_text_for_dlc(&Global_21681, 15);
			while (!has_additional_text_loaded(15))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		request_additional_text(&Global_21681, 6);
		while (!has_additional_text_loaded(6))
		{
			wait(0);
		}
	}
	else
	{
		request_additional_text_for_dlc(&Global_21681, 14);
		while (!has_additional_text_loaded(14))
		{
			wait(0);
		}
	}
	create_new_scripted_conversation();
	func_94();
}

void func_105()
{
	while (Global_20249 == 1 && _get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_20249 = 0;
	if (BitTest(Global_8136, 20))
	{
		set_bit(&Global_8137, 1);
	}
	else
	{
		clear_bit(&Global_8137, 1);
	}
	Global_20250 = 0;
	if (Global_21601 == 0)
	{
		if (!Global_21618)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_20472 = 0;
	if (Global_21615)
	{
		if (Global_22622 == 0)
		{
			if (Global_21618 == 0)
			{
				iLocal_34 = 5000;
				preload_script_phone_conversation(Global_21224.f_368, Global_21224.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_20472 = 1;
		settimerb(0);
		while ((Global_20472 == 1 && Global_21605 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!is_player_playing(player_id()))
			{
				Global_20472 = 0;
				stop_scripted_conversation(false);
				Global_21605 = 6;
			}
			if (is_mobile_phone_call_ongoing())
			{
				if (get_is_preloaded_conversation_ready())
				{
					Global_20472 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_21605 != 1)
		{
		}
		if (Global_20472 == 0)
		{
		}
	}
	Global_20472 = 0;
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 0) || Global_21605 != 1) || Global_20232 == 1)
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
	else
	{
		if (Global_21613)
		{
			Global_22623 = 0;
			iLocal_32 = 0;
		}
		if (Global_21615 == 0)
		{
			if (Global_21656 == 0)
			{
				Global_20268 = Global_20266.f_1;
				Global_21656 = 1;
			}
			iLocal_30 = 0;
			if (Global_22622 == 0)
			{
				preload_script_phone_conversation(Global_21224.f_368, Global_21224.f_369);
				wait(0);
				Global_21605 = 3;
				Global_20472 = 1;
				settimerb(0);
				set_bit(&Global_8136, 27);
				settimera(0);
			}
			else
			{
				Global_20472 = 0;
				Global_21605 = 4;
			}
			Global_20265 = 0;
			if (Global_21616 == 1)
			{
				if (Global_20266.f_1 == 10)
				{
				}
				if (!Global_20266.f_1 == 9)
				{
					if (Global_20266.f_1 > 4)
					{
						if (Global_20249 == 0)
						{
							Global_20266.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_20266.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_20266.f_1 == 4)
				{
					wait(0);
					if (Global_20472 == 1)
					{
						if (is_mobile_phone_call_ongoing())
						{
							if (get_is_preloaded_conversation_ready())
							{
								Global_20472 = 0;
							}
						}
					}
				}
				if (Global_20266.f_1 == 6)
				{
				}
				if (Global_20266.f_1 == 10)
				{
				}
				if (Global_20266.f_1 == 3)
				{
					stop_scripted_conversation(false);
					Global_21605 = 6;
					Global_20250 = 1;
					return;
				}
				Global_20266.f_1 = 9;
				func_8();
			}
			if (network_is_game_in_progress())
			{
				iLocal_84 = get_network_time();
			}
			else
			{
				iLocal_82 = get_game_timer();
			}
			while (Global_20266.f_1 != 9 && Global_20249 == 0)
			{
				wait(0);
				if (Global_20472 == 1)
				{
					if (is_mobile_phone_call_ongoing())
					{
						if (get_is_preloaded_conversation_ready())
						{
							Global_20472 = 0;
						}
					}
				}
				if (network_is_game_in_progress())
				{
					iLocal_91 = get_time_difference(get_network_time(), iLocal_84);
				}
				else
				{
					iLocal_83 = get_game_timer();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_22621 = 1;
						Global_20249 = 1;
					}
				}
			}
			if (!BitTest(Global_8136, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_20249 == 0)
			{
				if (!Global_22622 == 0)
				{
					Global_21662 = 0;
					func_67();
					func_66();
					if (!Global_21618)
					{
						if (Global_22622 == 0)
						{
							start_preloaded_conversation();
						}
						else
						{
							start_script_phone_conversation(Global_21224.f_368, Global_21224.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_106();
				Global_20250 = 1;
			}
		}
		else
		{
			Global_20265 = 1;
			if (!is_entity_dead(player_ped_id(), false))
			{
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					if (Global_20266.f_1 == 3)
					{
					}
				}
				else
				{
					clear_bit(&Global_8137, 21);
				}
			}
			if (Global_21656 == 0)
			{
				Global_20268 = Global_20266.f_1;
				Global_21656 = 1;
			}
			if (Global_20266.f_1 == 3)
			{
				Global_20266.f_1 = 4;
			}
			else
			{
				while (Global_20266.f_1 == 4)
				{
					wait(0);
				}
				if (Global_20266.f_1 == 6)
				{
				}
				Global_20266.f_1 = 9;
				func_8();
			}
			if (network_is_game_in_progress())
			{
				iLocal_84 = get_network_time();
			}
			else
			{
				iLocal_82 = get_game_timer();
			}
			while (Global_20266.f_1 != 9 && Global_20249 == 0)
			{
				wait(0);
				if (network_is_game_in_progress())
				{
					iLocal_91 = get_time_difference(get_network_time(), iLocal_84);
				}
				else
				{
					iLocal_83 = get_game_timer();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_22621 = 1;
						Global_20249 = 1;
						clear_bit(&Global_8137, 21);
					}
				}
			}
			if (Global_20249 == 0)
			{
				Global_21605 = 2;
			}
			else
			{
				func_106();
				Global_20250 = 1;
			}
			if (network_is_game_in_progress())
			{
				iLocal_78 = get_network_time();
				iLocal_81 = get_network_time();
			}
			else
			{
				iLocal_76 = get_game_timer();
				iLocal_79 = get_game_timer();
			}
		}
	}
}

void func_106()
{
	Global_20471 = 0;
	func_111();
}

void func_107()
{
	float fVar0;
	
	fVar0 = func_108(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20197, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22619 == 0)
		{
			display_radar(true);
		}
		iLocal_32 = 0;
	}
}

float func_108(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4541508 == 0)
	{
		if (BitTest(Global_8136, 14) && Global_20266.f_1 < 4)
		{
			get_mobile_phone_position(&Var0);
			if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
			{
				Global_4541508 = 1;
			}
		}
	}
	if (func_48() && Global_4541508 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = get_game_timer();
	}
	fVar1 = func_110((to_float((get_game_timer() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_20194 = { func_109(Param0, Param1, fVar2) };
		Global_20197 = { func_109(Param2, Param3, fVar2) };
	}
	else
	{
		Global_20194 = { Param1 };
		Global_20197 = { Param3 };
	}
	set_mobile_phone_position(Global_20194);
	set_mobile_phone_rotation(Global_20197, 0);
	return fVar1;
}

Vector3 func_109(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_110(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_111()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_21605 = 6;
		return;
	}
}

bool func_112()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_114(sParam2, iParam3, 0);
}

int func_114(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					stop_scripted_conversation(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_111();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return 0;
		}
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_37();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			clear_bit(&Global_8136, 20);
			clear_bit(&Global_8137, 17);
			clear_bit(&Global_8138, 0);
			if (bParam2)
			{
				func_30();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return 0;
				}
				if (func_29())
				{
					return 0;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return 0;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return 0;
					}
					if (is_player_climbing(player_id()))
					{
						return 0;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return 0;
					}
					if (is_special_ability_active(player_id(), 0))
					{
						return 0;
					}
				}
			}
			if (func_28())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_27();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_53();
		func_115();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_111();
	}
	return 0;
}

void func_115()
{
	if (!func_116())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_116()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_119())
	{
		return 0;
	}
	if (func_117(player_id()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[player_id() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (network_is_activity_session())
	{
		return 0;
	}
	return 1;
}

bool func_117(int iParam0)
{
	return func_118(iParam0, 20);
}

var func_118(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_119()
{
	return -1;
}

int func_120()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	scaleform_movie_method_add_param_int(round(fParam2));
	if (fParam3 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		scaleform_movie_method_add_param_int(round(fParam6));
	}
	if (!is_string_null_or_empty(sParam7))
	{
		func_9(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_9(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_9(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_9(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_9(sParam11);
	}
	end_scaleform_movie_method();
}

