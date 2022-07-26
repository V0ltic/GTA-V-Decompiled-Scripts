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
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	if (has_force_cleanup_occurred(3))
	{
		func_2();
	}
	iLocal_18 = request_scaleform_movie("graphic_design");
	while (!has_scaleform_movie_loaded(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		draw_scaleform_movie(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_20245 == 0)
	{
		if (((((((is_control_pressed(2, 189) || is_control_pressed(2, 190)) || is_control_pressed(2, 188)) || is_control_pressed(2, 187)) || is_control_pressed(2, 205)) || is_control_pressed(2, 206)) || is_control_pressed(2, 201)) || is_control_pressed(2, 202))
		{
			Global_20245 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_20245 = 0;
	}
	if (Global_20245 == 0)
	{
		if (is_control_pressed(2, 189))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(10);
			end_scaleform_movie_method();
		}
		if (is_control_pressed(2, 190))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(11);
			end_scaleform_movie_method();
		}
		if (is_control_pressed(2, 205))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(4);
			end_scaleform_movie_method();
		}
		if (is_control_pressed(2, 206))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(6);
			end_scaleform_movie_method();
		}
		if (is_control_pressed(2, 188))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(8);
			end_scaleform_movie_method();
		}
		if (is_control_pressed(2, 187))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(9);
			end_scaleform_movie_method();
		}
		if (is_control_pressed(2, 201))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(16);
			end_scaleform_movie_method();
		}
		if (is_control_pressed(2, 202))
		{
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(17);
			end_scaleform_movie_method();
		}
	}
}

void func_2()
{
	func_3(0);
	set_game_paused(false);
	set_scaleform_movie_as_no_longer_needed(&iLocal_18);
	terminate_this_thread();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			set_bit(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20266.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return BitTest(Global_1958711, 5);
}

bool func_8()
{
	return BitTest(Global_1958711, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

