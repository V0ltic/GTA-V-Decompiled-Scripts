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
	int iLocal_20 = 0;
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
	network_set_script_is_safe_for_network_game();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		settimera(0);
	}
	while (true)
	{
		wait(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && timera() > 1500)
					{
						func_6();
						settimera(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_20234, 0))
					{
						func_4();
						Global_20244 = 1;
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
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
	terminate_this_thread();
}

int func_3()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)
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

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_20247, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
	scaleform_movie_method_add_param_int(24);
	scaleform_movie_method_add_param_int(0);
	if (BitTest(Global_4541229, 23))
	{
		scaleform_movie_method_add_param_bool(false);
		func_8("CELL_EXTBYOU");
		scaleform_movie_method_add_param_int(Global_4541230);
		scaleform_movie_method_add_param_int(floor(Global_4541510));
		scaleform_movie_method_add_param_int(Global_4541231);
		scaleform_movie_method_add_param_int(floor(Global_4541510.f_1));
		scaleform_movie_method_add_param_int(Global_4541232);
		scaleform_movie_method_add_param_int(floor(Global_4541510.f_2));
		func_8("CELL_BODYG");
		scaleform_movie_method_add_param_int(Global_4541233);
		scaleform_movie_method_add_param_int(floor(Global_4541513));
		scaleform_movie_method_add_param_int(Global_4541234);
		scaleform_movie_method_add_param_int(floor(Global_4541513.f_1));
		scaleform_movie_method_add_param_int(Global_4541235);
		scaleform_movie_method_add_param_int(floor(Global_4541513.f_2));
	}
	else
	{
		scaleform_movie_method_add_param_bool(false);
		func_8("CELL_EXTBYOU");
		scaleform_movie_method_add_param_int(Global_4541233);
		scaleform_movie_method_add_param_int(floor(Global_4541513));
		scaleform_movie_method_add_param_int(Global_4541234);
		scaleform_movie_method_add_param_int(floor(Global_4541513.f_1));
		scaleform_movie_method_add_param_int(Global_4541235);
		scaleform_movie_method_add_param_int(floor(Global_4541513.f_2));
		func_8("CELL_EXTBTARG");
		scaleform_movie_method_add_param_int(Global_4541230);
		scaleform_movie_method_add_param_int(floor(Global_4541510));
		scaleform_movie_method_add_param_int(Global_4541231);
		scaleform_movie_method_add_param_int(floor(Global_4541510.f_1));
		scaleform_movie_method_add_param_int(Global_4541232);
		scaleform_movie_method_add_param_int(floor(Global_4541510.f_2));
	}
	end_scaleform_movie_method();
	func_9(Global_20247, "DISPLAY_VIEW", 24f, to_float(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_20254)
	{
		func_12(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	clear_bit(&Global_8136, 17);
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_8(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_8(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_8(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_8(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_8(sParam11);
	}
	end_scaleform_movie_method();
}

