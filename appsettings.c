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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	network_set_script_is_safe_for_network_game();
	func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_45();
	if (Global_20211 == 0)
	{
		fLocal_43 = 0.75f;
		fLocal_44 = 0.8f;
	}
	else
	{
		fLocal_43 = 0.65f;
		fLocal_44 = 0.77f;
	}
	Global_8941[Global_20266 /*2811*/][2 /*281*/].f_259 = Global_113386.f_14051[Global_20266 /*20*/].f_6;
	Global_8941[Global_20266 /*2811*/][4 /*281*/].f_259 = Global_113386.f_14051[Global_20266 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_78319)
		{
			Global_8941[Global_20266 /*2811*/][1 /*281*/].f_259 = func_44(1199, -1, 0);
			Global_8941[Global_20266 /*2811*/][2 /*281*/].f_259 = func_44(2030, -1, 0);
			Global_8941[Global_20266 /*2811*/][4 /*281*/].f_259 = func_44(2029, -1, 0);
		}
		else if (are_strings_equal(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), &(Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_8941[Global_20266 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_78319)
	{
		Global_113386.f_14051[3 /*20*/].f_10 = func_44(1198, -1, 0);
	}
	Global_8941[Global_20266 /*2811*/][3 /*281*/].f_259 = Global_113386.f_14051[Global_20266 /*20*/].f_10;
	func_43();
	if (Global_78319)
	{
		Global_8941[3 /*2811*/][0 /*281*/] = 190;
		Global_8941[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_8941[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_8941[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_8941[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_8941[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_8941[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_8941[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_8941[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_8941[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_8941[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_44(2092, -1, 0) == 0)
		{
			Global_8941[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_8941[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		wait(0);
		if (iLocal_30)
		{
			if (timerb() > 3500)
			{
				if (!is_entity_dead(player_ped_id(), false))
				{
					stop_ped_ringtone(player_ped_id());
				}
				iLocal_30 = 0;
			}
		}
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = false;
							settimerb(0);
							Global_113386.f_14051.f_82 = 1;
							iLocal_37 = 1;
						}
						else if (timerb() > 7500)
						{
							iLocal_37 = 0;
							clear_help(true);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (func_10(2, Global_20234, 0))
						{
							if (!is_entity_dead(player_ped_id(), false))
							{
								stop_ped_ringtone(player_ped_id());
							}
							iLocal_33 = 0;
							func_9();
							Global_20244 = 1;
							func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_20266.f_1 > 3)
							{
								Global_20266.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_20268 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!is_entity_dead(player_ped_id(), false))
	{
		stop_ped_ringtone(player_ped_id());
	}
	if (bLocal_36)
	{
		clear_help(true);
	}
	if (Global_113386.f_14051.f_83 == 0 || Global_113386.f_14051.f_82 == 0)
	{
		func_3();
	}
	set_game_paused(false);
	terminate_this_thread();
}

void func_3()
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	clear_bit(&Global_8136, 25);
	set_bit(&Global_8137, 11);
}

int func_4(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_43052);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_45();
	Global_8941[Global_20266 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
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

void func_11()
{
	int iVar0;
	
	iLocal_34 = get_game_timer();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		set_pad_shake(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_23 == 1)
	{
		if (iLocal_32)
		{
			iLocal_34 = get_game_timer();
			if ((iLocal_34 - iLocal_35) > 1000)
			{
				iLocal_31 = 1;
				iLocal_32 = 0;
			}
		}
		if (_is_using_keyboard(2))
		{
			if (is_control_just_pressed(2, 180))
			{
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			if (is_control_just_pressed(2, 181))
			{
				iLocal_45 = 0;
				iLocal_46 = 1;
			}
		}
		if ((((func_10(2, Global_20242, 0) || func_10(2, Global_20243, 0)) || iLocal_31) || iLocal_45 == 1) || iLocal_46 == 1)
		{
			iLocal_45 = 0;
			iLocal_46 = 0;
			iLocal_31 = 0;
			iLocal_32 = 0;
			settimerb(0);
			iLocal_30 = 1;
			begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_21 = end_scaleform_movie_method_return_value();
			while (!is_scaleform_movie_method_return_value_ready(iLocal_21))
			{
				wait(0);
			}
			iLocal_27 = iLocal_18[get_scaleform_movie_method_return_value_int(iLocal_21)];
			if (!is_entity_dead(player_ped_id(), false))
			{
				stop_ped_ringtone(player_ped_id());
				wait(100);
				if (!is_entity_dead(player_ped_id(), false))
				{
					if (!is_ped_ringtone_playing(player_ped_id()))
					{
						if (are_strings_equal(&(Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							play_ped_ringtone(&(Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), player_ped_id(), true);
						}
					}
				}
			}
		}
	}
	if (Global_20244 == 0)
	{
		if (func_10(2, Global_20235, 0))
		{
			func_23();
			Global_20244 = 1;
			begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_21 = end_scaleform_movie_method_return_value();
			while (!is_scaleform_movie_method_return_value_ready(iLocal_21))
			{
				wait(0);
			}
			iLocal_26 = get_scaleform_movie_method_return_value_int(iLocal_21);
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
			if (iLocal_23 == 2)
			{
				iVar0 = Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259;
				Global_113386.f_14051[Global_20266 /*20*/].f_6 = Global_8941[Global_20266 /*2811*/][2 /*281*/].f_260[iVar0];
				func_46(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_78319)
				{
					Global_4541505 = Global_8941[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_8941[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_46(Global_20247, "SET_THEME", to_float(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_46(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(23), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_46(Global_20247, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 4)
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_9 = Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_78319)
				{
					Global_4541506 = Global_8941[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_8941[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4541506 == 0)
					{
						Var2 = { func_17(player_id()) };
						iVar3 = 0;
						if (network_have_user_content_privileges(0) == 0)
						{
						}
						if ((network_clan_player_is_active(&Var2) && network_have_user_content_privileges(0)) && Global_4541509 == 0)
						{
							settimera(0);
							while (!network_clan_get_emblem_txd_name(&Var2, &uVar1) && timera() < 3000)
							{
								wait(0);
								if (timera() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								begin_scaleform_movie_method(Global_20247, "SET_BACKGROUND_CREW_IMAGE");
								begin_text_command_scaleform_string("CELL_2000");
								add_text_component_substring_player_name(&uVar1);
								end_text_command_scaleform_string();
								end_scaleform_movie_method();
							}
						}
						else
						{
							func_46(Global_20247, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_46(Global_20247, "SET_BACKGROUND_IMAGE", to_float(Global_4541506), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_46(Global_20247, "SET_BACKGROUND_IMAGE", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(23), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_46(Global_20247, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 1)
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_11 = { Global_8941[Global_20266 /*2811*/][1 /*281*/].f_144[Global_8941[Global_20266 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_78319)
				{
					func_20(1199, Global_8941[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(18), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_46(Global_20247, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 3)
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_10 = Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_78319)
				{
					func_20(1198, Global_113386.f_14051[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
				{
					iLocal_33 = 1;
					iLocal_35 = get_game_timer();
				}
				else
				{
					iLocal_33 = 0;
				}
			}
			if (iLocal_23 == 0)
			{
				if (Global_78319 == 1)
				{
					Global_8941[3 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(19), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
					func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
					iLocal_25 = iLocal_26;
					func_46(Global_20247, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_8941[3 /*2811*/][iLocal_23 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_8941[0 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_8941[1 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_8941[2 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_43052 == 15)
						{
							if (Global_113386.f_14051.f_82 == 0)
							{
								clear_help(true);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
							else
							{
								func_46(Global_20247, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								set_bit(&Global_8136, 25);
								set_bit(&Global_8137, 11);
								if (Global_113386.f_14051.f_83 == 0)
								{
									clear_help(true);
									func_15("CELL_7051", -1);
									Global_113386.f_14051.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_46(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						clear_bit(&Global_8136, 25);
						set_bit(&Global_8137, 11);
					}
				}
			}
			func_13(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	func_14(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_14(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_14(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_14(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_14(sParam6);
	}
	end_scaleform_movie_method();
}

void func_14(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_15(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

void func_16(char* sParam0)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, true, true, -1);
}

struct<13> func_17(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_14(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_14(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_14(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_14(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_14(sParam11);
	}
	end_scaleform_movie_method();
}

void func_19()
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

void func_20(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

var func_22()
{
	return Global_1574918;
}

void func_23()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_20255, true);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		_cell_cam_move_finger(5);
	}
}

int func_25()
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

void func_26()
{
	if (Global_20244 == 0)
	{
		if (func_10(2, Global_20235, 0))
		{
			func_23();
			Global_20244 = 1;
			begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_21 = end_scaleform_movie_method_return_value();
			while (!is_scaleform_movie_method_return_value_ready(iLocal_21))
			{
				wait(0);
			}
			iLocal_24 = get_scaleform_movie_method_return_value_int(iLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0:
					if (Global_78319 == 0)
					{
						if (Global_43052 == 15)
						{
							if (Global_113386.f_14051.f_82 == 0)
							{
								clear_help(true);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 8;
			}
			func_27();
			iLocal_32 = 1;
			iLocal_35 = get_game_timer();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = 0;
	iVar1 = 0;
	if (Global_78319)
	{
		StringCopy(&(Global_8941[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(player_id()) };
		if (!network_clan_player_is_active(&Var2))
		{
			StringCopy(&(Global_8941[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_124[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] < Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_84[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_104[iVar4]), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (are_strings_equal(&(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0)
			{
				iLocal_28 = 0;
			}
			if ((iLocal_23 == 1 || iLocal_23 == 4) || iLocal_23 == 2)
			{
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0 && Global_78319 == 1)
			{
				func_18(Global_20247, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(48), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
		}
		if (Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_46(Global_20247, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20247, "SET_HEADER", &(Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_7[Global_8941[Global_20266 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_20254)
	{
		func_18(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_8136, 17);
}

void func_28()
{
	if (iLocal_42)
	{
		if (timera() > 50)
		{
			iLocal_42 = 0;
		}
	}
	if (_is_using_keyboard(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
		}
	}
	if (iLocal_42 == 0)
	{
		if (func_10(2, Global_20242, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
			iLocal_42 = 1;
			settimera(0);
		}
		if (func_10(2, Global_20243, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
			iLocal_42 = 1;
			settimera(0);
		}
	}
}

void func_29()
{
	func_46(Global_20247, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_30();
}

void func_30()
{
	if (func_25())
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

void func_31()
{
	func_46(Global_20247, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_32();
}

void func_32()
{
	if (func_25())
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

void func_33()
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_8941[Global_20266 /*2811*/][iVar3 /*281*/] = 5000;
		if (get_profile_setting(2) == 0)
		{
			Global_8941[Global_20266 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_8941[Global_20266 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_8941[Global_20266 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_8941[Global_20266 /*2811*/][iVar2 /*281*/] < Global_8941[Global_20266 /*2811*/][iVar3 /*281*/])
					{
						if (Global_78319)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_20247, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_20247, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_20247, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_42(iVar2, iVar3);
							func_18(Global_20247, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8941[Global_20266 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_8941[Global_20266 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_46(Global_20247, "DISPLAY_VIEW", 13f, to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
	func_13(Global_20247, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_20254)
	{
		func_18(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_8136, 17);
}

int func_34()
{
	if (Global_78319)
	{
		Global_20266 = 3;
	}
	else
	{
		Global_20266 = func_35();
	}
	if (Global_20266 > 3)
	{
		Global_20266 = 3;
	}
	return Global_113386.f_14051[Global_20266 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_40(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_39(player_ped_id());
			if (func_38(iVar0) && (!func_37(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_38(Global_113386.f_2363.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_78319)
			{
				iLocal_29 = 19;
			}
			else if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_29 = 26;
			}
			else
			{
				iLocal_29 = 25;
			}
			break;
		
		case 3:
			if (Global_8941[Global_20266 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_29 = 20;
			}
			else
			{
				iLocal_29 = 21;
			}
			break;
		
		default:
			iLocal_29 = Global_8941[Global_20266 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_43()
{
	if (Global_43052 != 15)
	{
		func_45();
		Global_8941[Global_20266 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_21(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_45()
{
	if (func_37(14))
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
		Global_20266 = func_35();
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

