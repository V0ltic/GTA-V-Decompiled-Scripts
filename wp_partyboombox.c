#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("wp_partyboombox")) > 1)
	{
		terminate_this_thread();
	}
	if (has_force_cleanup_occurred(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (!is_world_point_within_brain_activation_range())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (get_clock_hours() >= 22 || get_clock_hours() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!is_ipl_active("ID2_21_G_Night"))
				{
					request_ipl("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!is_new_load_scene_active() && !is_player_switch_in_progress())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (is_ipl_active("ID2_21_G_Night"))
	{
		remove_ipl("ID2_21_G_Night");
	}
	terminate_this_thread();
}

