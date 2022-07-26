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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = add_blip_for_coord(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	if (has_force_cleanup_occurred(3))
	{
		func_2();
	}
	iLocal_18 = request_scaleform_movie("p_bubblegum");
	while (!has_scaleform_movie_loaded(iLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = create_cam("DEFAULT_SCRIPTED_CAMERA", true);
			if (does_cam_exist(iLocal_19))
			{
				set_cam_params(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				set_cam_near_clip(iLocal_19, 0.01f);
				set_cam_far_clip(iLocal_19, 0.02f);
				render_script_cams(true, false, 3000, true, false, 0);
			}
			set_blip_sprite(iLocal_20, 66);
		}
		iLocal_21 = 1;
		draw_scaleform_movie(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		wait(0);
	}
}

void func_1(int iParam0)
{
	if (Global_20245 == 0)
	{
		if (is_control_pressed(2, 189) || is_control_pressed(2, 190))
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
		if (is_control_just_pressed(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (is_control_pressed(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!is_control_pressed(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(10);
			scaleform_movie_method_add_param_float(fLocal_25);
			end_scaleform_movie_method();
		}
		if (is_control_just_pressed(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (is_control_pressed(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!is_control_pressed(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(11);
			scaleform_movie_method_add_param_float(fLocal_28);
			end_scaleform_movie_method();
		}
		if (is_control_just_pressed(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (is_control_pressed(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!is_control_pressed(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(8);
			scaleform_movie_method_add_param_float(fLocal_31);
			end_scaleform_movie_method();
		}
		if (is_control_just_pressed(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (is_control_pressed(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!is_control_pressed(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(9);
			scaleform_movie_method_add_param_float(fLocal_34);
			end_scaleform_movie_method();
		}
		if (is_control_just_pressed(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (is_control_pressed(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!is_control_pressed(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(17);
			scaleform_movie_method_add_param_float(fLocal_37);
			end_scaleform_movie_method();
		}
		if (is_control_just_pressed(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (is_control_pressed(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!is_control_pressed(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(15);
			scaleform_movie_method_add_param_float(fLocal_40);
			end_scaleform_movie_method();
		}
		if (is_control_just_pressed(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (is_control_pressed(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!is_control_pressed(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(16);
			scaleform_movie_method_add_param_float(fLocal_43);
			end_scaleform_movie_method();
		}
		if (is_control_just_pressed(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (is_control_pressed(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!is_control_pressed(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			begin_scaleform_movie_method(iParam0, "SET_INPUT_EVENT");
			scaleform_movie_method_add_param_int(14);
			scaleform_movie_method_add_param_float(fLocal_46);
			end_scaleform_movie_method();
		}
	}
}

void func_2()
{
	if (does_cam_exist(iLocal_19))
	{
		destroy_cam(iLocal_19, false);
	}
	render_script_cams(false, false, 3000, true, false, 0);
	func_3(0);
	set_game_paused(false);
	clear_help(true);
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

