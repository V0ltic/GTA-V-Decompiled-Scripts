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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (has_force_cleanup_occurred(83))
	{
		func_6();
	}
	if ((!Global_1 && !is_pc_version()) && _0x6FDDF453C0C756EC())
	{
		set_no_loading_screen(true);
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out())
			{
				do_screen_fade_out(800);
			}
		}
		iLocal_20 = request_scaleform_movie("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = request_scaleform_movie("INSTRUCTIONAL_BUTTONS");
		while (!has_scaleform_movie_loaded(iLocal_20) || !has_scaleform_movie_loaded(iLocal_21))
		{
			wait(0);
		}
		begin_scaleform_movie_method(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		end_scaleform_movie_method();
		begin_scaleform_movie_method(iLocal_21, "SET_DATA_SLOT_EMPTY");
		end_scaleform_movie_method();
		begin_scaleform_movie_method(iLocal_21, "SET_DATA_SLOT");
		scaleform_movie_method_add_param_int(0);
		func_4(get_control_instructional_button(2, 201, true));
		func_5("HUD_CONTINUE");
		end_scaleform_movie_method();
		begin_scaleform_movie_method(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		scaleform_movie_method_add_param_bool(false);
		end_scaleform_movie_method();
		while (!is_screen_faded_out())
		{
			wait(0);
		}
		shutdown_loading_screen();
		while (!iLocal_22)
		{
			hide_loading_on_fade_this_frame();
			set_script_gfx_draw_order(7);
			draw_scaleform_movie_fullscreen(iLocal_20, 255, 255, 255, 0, 0);
			draw_scaleform_movie_fullscreen(iLocal_21, 255, 255, 255, 0, 0);
			if (is_control_pressed(2, 201))
			{
				iLocal_22 = 1;
			}
			wait(0);
		}
		set_no_loading_screen(false);
		func_3(1, 1);
		func_1();
	}
	Global_78588.f_1 = 0;
	set_bit(&(Global_113386.f_10016.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	scaleform_movie_method_add_param_player_name_string(sParam0);
}

void func_5(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_21);
	}
	set_script_gfx_draw_order(4);
	set_no_loading_screen(false);
	terminate_this_thread();
}

