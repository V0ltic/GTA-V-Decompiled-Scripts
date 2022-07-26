void __EntryFunction__()
{
	network_set_script_is_safe_for_network_game();
	while (true)
	{
		wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112038)
	{
		if (Global_112038[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (get_game_timer() > Global_112038[iVar0 /*28*/].f_21 && Global_112038[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					clear_floating_help(iVar1, false);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_112038[iVar0 /*28*/].f_21 != -1)
				{
					if (!BitTest(Global_112038[iVar0 /*28*/].f_27, 0))
					{
						Global_112038[iVar0 /*28*/].f_21 = (Global_112038[iVar0 /*28*/].f_21 + round((get_frame_time() * 1000f)));
						if (is_floating_help_text_on_screen(iVar1))
						{
							set_bit(&(Global_112038[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_112038[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_112038[iVar0 /*28*/].f_23 != 0)
					{
						if (!is_entity_dead(Global_112038[iVar0 /*28*/].f_23, false))
						{
							if (!BitTest(Global_112038[iVar0 /*28*/].f_27, 3))
							{
								set_floating_help_text_world_position(iVar1, get_offset_from_entity_in_world_coords(Global_112038[iVar0 /*28*/].f_23, Global_112038[iVar0 /*28*/].f_24));
							}
							else
							{
								set_floating_help_text_to_entity(iVar1, Global_112038[iVar0 /*28*/].f_23, Global_112038[iVar0 /*28*/].f_24, Global_112038[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_112038[iVar0 /*28*/].f_24 != 0f || Global_112038[iVar0 /*28*/].f_24.f_1 != 0f) || Global_112038[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						set_floating_help_text_world_position(iVar1, Global_112038[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					set_floating_help_text_screen_position(iVar1, Global_112038[iVar0 /*28*/].f_24, Global_112038[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((get_game_timer() - Global_112038[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_112038[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112038[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112038[iParam0 /*28*/].f_4), "", 64);
	Global_112038[iParam0 /*28*/].f_23 = 0;
	Global_112038[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112038[iParam0 /*28*/].f_27 = 0;
	Global_112038[iParam0 /*28*/].f_20 = 0;
	Global_112038[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!are_strings_equal(&(Global_112038[iParam0 /*28*/]), "") && !is_string_null(&(Global_112038[iParam0 /*28*/])))
	{
		if (BitTest(Global_112038[iParam0 /*28*/].f_27, 1))
		{
			if (BitTest(Global_112038[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_112038[iParam0 /*28*/]), &(Global_112038[iParam0 /*28*/].f_4), Global_112038[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_112038[iParam0 /*28*/]), &(Global_112038[iParam0 /*28*/].f_4));
			}
		}
		else if (BitTest(Global_112038[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_112038[iParam0 /*28*/]), Global_112038[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_112038[iParam0 /*28*/]));
		}
	}
	return 0;
}

bool func_4(int iParam0, char* sParam1)
{
	begin_text_command_is_this_help_message_being_displayed(sParam1);
	return end_text_command_is_this_help_message_being_displayed((1 + iParam0));
}

bool func_5(int iParam0, char* sParam1, int iParam2)
{
	begin_text_command_is_this_help_message_being_displayed(sParam1);
	add_text_component_integer(iParam2);
	return end_text_command_is_this_help_message_being_displayed((1 + iParam0));
}

bool func_6(int iParam0, char* sParam1, char* sParam2)
{
	begin_text_command_is_this_help_message_being_displayed(sParam1);
	add_text_component_substring_text_label(sParam2);
	return end_text_command_is_this_help_message_being_displayed((1 + iParam0));
}

bool func_7(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	begin_text_command_is_this_help_message_being_displayed(sParam1);
	add_text_component_substring_text_label(sParam2);
	add_text_component_integer(iParam3);
	return end_text_command_is_this_help_message_being_displayed((1 + iParam0));
}

