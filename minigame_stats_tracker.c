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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int* iLocal_47 = NULL;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (has_force_cleanup_occurred(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = request_scaleform_movie("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (has_scaleform_movie_loaded(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				call_scaleform_movie_method_with_string(iLocal_46, "SET_MISSION_TITLE", ScriptParam_50.f_0, ScriptParam_50.f_1, 0, 0, 0);
				call_scaleform_movie_method_with_number(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1f, -1f);
				if (ScriptParam_50.f_5.f_1 != -1f && !is_string_null(ScriptParam_50.f_5.f_2))
				{
					call_scaleform_movie_method_with_number_and_string(iLocal_46, "SET_TOTAL", to_float(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				call_scaleform_movie_method_with_number(iLocal_46, "SET_MEDAL", to_float(ScriptParam_50.f_5), -1f, -1f, -1f, -1f);
				call_scaleform_movie_method_with_number(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1f, -1f, -1f, -1f);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_66 + 1)
				{
					begin_scaleform_movie_method(iLocal_46, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(ScriptParam_50.f_9[iVar0 /*7*/]);
					scaleform_movie_method_add_param_int(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						scaleform_movie_method_add_param_int(2);
						scaleform_movie_method_add_param_int(0);
						scaleform_movie_method_add_param_int(0);
						begin_text_command_scaleform_string("STRING");
						add_text_component_substring_time(floor((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						end_text_command_scaleform_string();
						if (!is_string_null(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!is_string_null(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !is_string_null(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							begin_text_command_scaleform_string(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							add_text_component_substring_player_name(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							end_text_command_scaleform_string();
						}
					}
					else
					{
						scaleform_movie_method_add_param_int(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							scaleform_movie_method_add_param_float(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							begin_text_command_scaleform_string("NUMBER");
							add_text_component_float(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							end_text_command_scaleform_string();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							scaleform_movie_method_add_param_float(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							begin_text_command_scaleform_string("NUMBER");
							add_text_component_float(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							end_text_command_scaleform_string();
						}
						if (!is_string_null(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!is_string_null(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							func_18(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					end_scaleform_movie_method();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !is_string_null(ScriptParam_50.f_5.f_2))
				{
					begin_scaleform_movie_method(iLocal_46, "SET_TOTAL");
					scaleform_movie_method_add_param_int(ScriptParam_50.f_5);
					if (!is_string_null(ScriptParam_50.f_5.f_3))
					{
						func_18(ScriptParam_50.f_5.f_3);
					}
					else
					{
						scaleform_movie_method_add_param_float(ScriptParam_50.f_5.f_1);
					}
					func_18(ScriptParam_50.f_5.f_2);
					end_scaleform_movie_method();
				}
				begin_scaleform_movie_method(iLocal_46, "DRAW_MENU_LIST");
				end_scaleform_movie_method();
				func_12(1);
				func_9(&iLocal_47);
				if (!func_8(Global_113386.f_19097, 4096))
				{
					func_6(&(Global_113386.f_19097), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&iLocal_47) > ScriptParam_50.f_67 && ScriptParam_50.f_67 != -1f) || is_screen_faded_out()) || Global_32104)
				{
					func_19();
				}
				else
				{
					func_1(1);
					draw_scaleform_movie(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (is_hud_component_active(10))
					{
						hide_hud_component_this_frame(10);
					}
				}
				break;
		}
		wait(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

float func_2(int* iParam0)
{
	if (func_5(iParam0))
	{
		if (func_4(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_3(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(get_game_timer());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (network_is_game_in_progress())
	{
		iVar2 = get_network_time();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_4(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(int* iParam0)
{
	if (!func_5(iParam0))
	{
		func_10(iParam0);
	}
}

void func_10(int* iParam0)
{
	func_11(iParam0, 0f);
}

void func_11(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_3(BitTest(*iParam0, 4)) - fParam1);
	set_bit(iParam0, 1);
	clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_20266.f_1 = 3;
	}
}

int func_13()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return BitTest(Global_1958711, 5);
}

bool func_17()
{
	return BitTest(Global_1958711, 19);
}

void func_18(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_19()
{
	set_scaleform_movie_as_no_longer_needed(&iLocal_46);
	Global_32104 = 0;
	func_1(0);
	terminate_this_thread();
}

