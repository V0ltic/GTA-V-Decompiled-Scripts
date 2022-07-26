#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (has_force_cleanup_occurred(83))
	{
		func_10();
	}
	set_game_pauses_for_streaming(false);
	clear_bit(&(Global_113386.f_10016.f_25), 1);
	func_7();
	set_no_loading_screen(true);
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	iLocal_0 = request_scaleform_movie("OPENING_CREDITS");
	while (!has_scaleform_movie_loaded(iLocal_0))
	{
		func_7();
		wait(0);
	}
	while (!is_screen_faded_out())
	{
		func_7();
		wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (get_game_timer() + 8000 + round((2f * 1000f)));
	while (!is_cutscene_playing())
	{
		func_7();
		if (!BitTest(Global_113386.f_10016.f_25, 1))
		{
			draw_scaleform_movie_fullscreen(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (get_game_timer() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (get_game_timer() + round((2f * 1000f)));
				}
			}
			else if (get_game_timer() > iLocal_1)
			{
				set_bit(&(Global_113386.f_10016.f_25), 1);
				if (_0x6FDDF453C0C756EC() || is_pc_version())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		wait(0);
	}
	func_10();
}

void func_1()
{
	Global_100480 = 1;
}

int func_2()
{
	if (func_3(0))
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

int func_3(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	begin_scaleform_movie_method(iLocal_0, "HIDE_LOGO");
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam0);
	end_text_command_scaleform_string();
	end_scaleform_movie_method();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	begin_scaleform_movie_method(iLocal_0, "SHOW_LOGO");
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam0);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_float(fParam1);
	scaleform_movie_method_add_param_float(fParam2);
	scaleform_movie_method_add_param_float(fParam3);
	scaleform_movie_method_add_param_float(fParam4);
	scaleform_movie_method_add_param_float(fParam5);
	scaleform_movie_method_add_param_float(fParam6);
	scaleform_movie_method_add_param_float(fParam7);
	end_scaleform_movie_method();
}

void func_7()
{
	hide_loading_on_fade_this_frame();
	disable_control_action(2, 199, true);
	set_script_gfx_draw_order(7);
	func_8();
}

void func_8()
{
	_stop_recording_this_frame();
	func_9();
}

void func_9()
{
	Global_23011.f_134 = 1;
}

void func_10()
{
	set_bit(&(Global_113386.f_10016.f_25), 1);
	if (iLocal_0 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_0);
	}
	set_script_gfx_draw_order(4);
	set_no_loading_screen(false);
	set_game_pauses_for_streaming(true);
	terminate_this_thread();
}

