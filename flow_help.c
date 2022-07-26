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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (has_force_cleanup_occurred(50))
	{
		func_23();
	}
	while (true)
	{
		if (Global_113386.f_20410.f_145 > 0 || Global_112026)
		{
			if (!Global_112026)
			{
				if ((Global_43052 != 6 && Global_43052 != 15) && !Global_96448)
				{
					func_23();
				}
				if (!Global_112025)
				{
					if (Global_113386.f_20410.f_145 > 0)
					{
						if (func_20(&(Global_113386.f_20410[iLocal_21 /*16*/])))
						{
							if (func_18(func_19()))
							{
								if (BitTest(Global_113386.f_20410[iLocal_21 /*16*/].f_11, func_12()))
								{
									if (Global_113386.f_20410[iLocal_21 /*16*/].f_12 == Global_113386.f_20410.f_146[func_12()])
									{
										if (get_game_timer() > Global_112028)
										{
											if (get_game_timer() > Global_113386.f_20410[iLocal_21 /*16*/].f_8)
											{
												if (are_strings_equal(&(Global_113386.f_20410[iLocal_21 /*16*/].f_4), ""))
												{
													add_next_message_to_previous_briefs(true);
													func_11(&(Global_113386.f_20410[iLocal_21 /*16*/]));
												}
												else
												{
													add_next_message_to_previous_briefs(true);
													func_10(&(Global_113386.f_20410[iLocal_21 /*16*/]), &(Global_113386.f_20410[iLocal_21 /*16*/].f_4));
												}
												if (Global_113386.f_20410[iLocal_21 /*16*/].f_13 != 0)
												{
													func_9(Global_113386.f_20410[iLocal_21 /*16*/].f_13, 0);
												}
												Local_20 = { Global_113386.f_20410[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_113386.f_20410[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_113386.f_20410[iLocal_21 /*16*/].f_8;
												Local_20.f_10 = Global_113386.f_20410[iLocal_21 /*16*/].f_10;
												Local_20.f_9 = Global_113386.f_20410[iLocal_21 /*16*/].f_9;
												Local_20.f_11 = Global_113386.f_20410[iLocal_21 /*16*/].f_11;
												Local_20.f_12 = Global_113386.f_20410[iLocal_21 /*16*/].f_12;
												Local_20.f_13 = Global_113386.f_20410[iLocal_21 /*16*/].f_13;
												Local_20.f_14 = Global_113386.f_20410[iLocal_21 /*16*/].f_14;
												Local_20.f_15 = Global_113386.f_20410[iLocal_21 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_112029 = { Global_113386.f_20410[iLocal_21 /*16*/] };
												Global_112027 = get_game_timer();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_113386.f_20410.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_113386.f_20410.f_145 - 1));
												Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
												func_6();
												Global_112026 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (are_strings_equal(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						clear_help(false);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					clear_help(false);
				}
				if ((get_game_timer() - Global_112027) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_112028 = get_game_timer() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_112027 = 0;
				Global_112026 = 0;
			}
			if (!are_strings_equal(&(Global_113386.f_20410[iLocal_21 /*16*/]), &Local_20) && !are_strings_equal(&(Global_113386.f_20410[iLocal_21 /*16*/]), ""))
			{
				if (Global_113386.f_20410[iLocal_21 /*16*/].f_10 != -1)
				{
					if (get_game_timer() > Global_113386.f_20410[iLocal_21 /*16*/].f_10)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_113386.f_20410.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_113386.f_20410.f_145 - 1));
						Global_113386.f_20410.f_145 = (Global_113386.f_20410.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_113386.f_20410.f_145)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_43052 != 6 && Global_43052 != 15) && !Global_96448)
		{
			func_23();
		}
		wait(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (are_strings_equal(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (get_game_timer() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((get_game_timer() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_6();
	}
}

bool func_2(char* sParam0, char* sParam1)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	add_text_component_substring_text_label(sParam1);
	return end_text_command_is_this_help_message_being_displayed(0);
}

bool func_3(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

int func_4()
{
	if (is_cutscene_playing())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (get_game_timer() - Global_112027) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_112025)
	{
		return 0;
	}
	if (is_cutscene_playing())
	{
		return 0;
	}
	if (are_strings_equal(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113386.f_20410[iParam0 /*16*/].f_4), "", 16);
	Global_113386.f_20410[iParam0 /*16*/].f_8 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = -1;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = 0;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_113386.f_20410[iParam0 /*16*/] = { Global_113386.f_20410[iParam1 /*16*/] };
	Global_113386.f_20410[iParam0 /*16*/].f_4 = { Global_113386.f_20410[iParam1 /*16*/].f_4 };
	Global_113386.f_20410[iParam0 /*16*/].f_8 = Global_113386.f_20410[iParam1 /*16*/].f_8;
	Global_113386.f_20410[iParam0 /*16*/].f_10 = Global_113386.f_20410[iParam1 /*16*/].f_10;
	Global_113386.f_20410[iParam0 /*16*/].f_9 = Global_113386.f_20410[iParam1 /*16*/].f_9;
	Global_113386.f_20410[iParam0 /*16*/].f_11 = Global_113386.f_20410[iParam1 /*16*/].f_11;
	Global_113386.f_20410[iParam0 /*16*/].f_12 = Global_113386.f_20410[iParam1 /*16*/].f_12;
	Global_113386.f_20410[iParam0 /*16*/].f_13 = Global_113386.f_20410[iParam1 /*16*/].f_13;
	Global_113386.f_20410[iParam0 /*16*/].f_14 = Global_113386.f_20410[iParam1 /*16*/].f_14;
	Global_113386.f_20410[iParam0 /*16*/].f_15 = Global_113386.f_20410[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113386.f_8613[iParam0] = 1;
	Global_113386.f_8613.f_236[iParam0] = (get_game_timer() + iParam1);
}

void func_10(char* sParam0, char* sParam1)
{
	begin_text_command_display_help(sParam0);
	add_text_component_substring_text_label(sParam1);
	end_text_command_display_help(0, true, true, -1);
}

void func_11(char* sParam0)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, true, true, -1);
}

bool func_12()
{
	func_13();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_13()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_16(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_15(player_ped_id());
			if (func_18(iVar0) && (!func_14(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_18(Global_113386.f_2363.f_539.f_4321))
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

bool func_14(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_17(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19()
{
	func_13();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_20(var uParam0)
{
	if (is_help_message_being_displayed())
	{
		return 0;
	}
	if (is_cutscene_playing())
	{
		return 0;
	}
	if (!is_screen_faded_in())
	{
		return 0;
	}
	if (is_warning_message_active())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_21())
		{
			return 0;
		}
		if (Global_78317)
		{
			return 0;
		}
		if (Global_97361)
		{
			return 0;
		}
		if (!BitTest(uParam0->f_15, 1))
		{
			if (Global_97369)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_21()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

int func_22()
{
	if (!network_is_game_in_progress())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_23()
{
	if (Global_112026)
	{
		if (are_strings_equal(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				clear_help(true);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			clear_help(true);
		}
	}
	Global_112027 = 0;
	Global_112026 = 0;
	terminate_this_thread();
}

