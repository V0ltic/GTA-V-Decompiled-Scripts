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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	network_set_script_is_safe_for_network_game();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_27) * 30 && timerb() > 150)
					{
						begin_scaleform_movie_method(Global_20247, "APP_FUNCTION");
						scaleform_movie_method_add_param_int(1);
						end_scaleform_movie_method();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						begin_scaleform_movie_method(Global_20247, "APP_FUNCTION");
						scaleform_movie_method_add_param_int(1);
						end_scaleform_movie_method();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_20234, 0))
					{
						func_5();
						Global_20244 = 1;
						func_10();
						func_7();
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	clear_bit(&Global_8137, 22);
	terminate_this_thread();
}

void func_3(int iParam0, int iParam1)
{
	Global_4541482[iParam0] = iParam1;
}

int func_4()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_20254)
	{
		func_8(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_8136, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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

void func_9(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!is_entity_dead(player_ped_id(), false))
		{
			Local_20 = { get_entity_coords(player_ped_id(), true) };
			fLocal_21 = get_entity_heading(player_ped_id());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(23);
				scaleform_movie_method_add_param_int(0);
				if (BitTest(Global_8137, 30))
				{
					scaleform_movie_method_add_param_int(-99);
					scaleform_movie_method_add_param_int(0);
				}
				else
				{
					scaleform_movie_method_add_param_int(floor(fLocal_25));
					scaleform_movie_method_add_param_int(floor(fLocal_26));
				}
				scaleform_movie_method_add_param_int(100);
				if (BitTest(Global_8137, 22))
				{
					scaleform_movie_method_add_param_int(1);
				}
				else
				{
					scaleform_movie_method_add_param_int(0);
				}
				if (BitTest(Global_8137, 29))
				{
					scaleform_movie_method_add_param_bool(false);
				}
				else
				{
					scaleform_movie_method_add_param_bool(true);
				}
				if (BitTest(Global_8138, 1))
				{
					scaleform_movie_method_add_param_float(fLocal_28);
				}
				end_scaleform_movie_method();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_20247, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!is_entity_dead(player_ped_id(), false))
	{
		Local_20 = { get_entity_coords(player_ped_id(), true) };
		fLocal_21 = get_entity_heading(player_ped_id());
		if (Global_4541504 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4541504)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(23);
				scaleform_movie_method_add_param_int(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (BitTest(Global_4541229, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (BitTest(Global_4541229, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (BitTest(Global_4541229, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (BitTest(Global_4541229, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					scaleform_movie_method_add_param_int(-99);
					scaleform_movie_method_add_param_int(0);
				}
				else
				{
					scaleform_movie_method_add_param_int(floor(fLocal_25));
					scaleform_movie_method_add_param_int(floor(fLocal_26));
				}
				scaleform_movie_method_add_param_int(100);
				if (BitTest(Global_8137, 22))
				{
					scaleform_movie_method_add_param_bool(true);
				}
				else
				{
					scaleform_movie_method_add_param_bool(true);
				}
				if (BitTest(Global_8137, 29))
				{
					scaleform_movie_method_add_param_bool(false);
				}
				else
				{
					scaleform_movie_method_add_param_bool(true);
				}
				scaleform_movie_method_add_param_float(fLocal_28);
				scaleform_movie_method_add_param_int(Global_4541482[iVar0]);
				end_scaleform_movie_method();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_20247, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4541418[iParam0 /*3*/] - Local_20.f_0);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.f_0)) * (Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_25 = atan2(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = sqrt(vdist2(Global_4541418[iParam0 /*3*/], Local_20));
	fLocal_28 = (Global_4541418[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = sqrt((((Global_4541418[iParam0 /*3*/] - Local_20.f_0) * (Global_4541418[iParam0 /*3*/] - Local_20.f_0)) + ((Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_23 = (Global_22711 - Local_20.f_0);
	fLocal_24 = (cos(((3.14159f / 180f) * Local_20.f_0)) * (Global_22711.f_1 - Local_20.f_1));
	fLocal_25 = atan2(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = sqrt(vdist2(Global_22711, Local_20));
	fLocal_28 = (Global_22711.f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = sqrt((((Global_22711 - Local_20.f_0) * (Global_22711 - Local_20.f_0)) + ((Global_22711.f_1 - Local_20.f_1) * (Global_22711.f_1 - Local_20.f_1))));
	return fLocal_26;
}

int func_18()
{
	if (Global_78319 == 1)
	{
		return 1;
	}
	return 0;
}

