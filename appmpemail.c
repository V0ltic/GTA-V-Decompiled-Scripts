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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	struct<3> Local_38 = { 0, 0, 0 } ;
	struct<3> Local_39 = { 0, 0, 0 } ;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
	{
		func_59();
	}
	func_58();
	Global_22671 = 0;
	Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
	Global_20463 = 0;
	func_57();
	func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_53();
	func_51();
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 7;
	}
	iLocal_31 = get_game_timer();
	Global_20270 = 0;
	get_mobile_phone_position(&Local_39);
	Local_38 = { Local_39 };
	Local_38.f_0 = (Local_38.f_0 - 10f);
	Local_38.f_1 = (Local_38.f_1 + 20f);
	Global_22638 = 0;
	Global_22639 = 1;
	while (true)
	{
		wait(0);
		if (Global_22639 == 0 && Global_22638 == 1)
		{
			func_50();
		}
		if (Global_22639 == 1 && Global_22638 == 0)
		{
			func_45();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = get_game_timer();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_20266.f_1 != 9 && Global_22639 == 0) && Global_22638 == 0)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (Global_22671 == 0)
					{
						if (Global_2825434 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				
				case 8:
					if (Global_22671 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_22671 == 0)
			{
				if (func_4())
				{
					Global_22638 = 1;
				}
			}
			else if (func_3(2, Global_20234, 0) || BitTest(Global_8137, 12))
			{
				if (are_strings_equal(&(Global_4539964[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					wait(0);
					clear_bit(&Global_8137, 12);
					func_2();
					Global_20244 = 1;
					Global_22671 = 0;
					if (Global_20266.f_1 > 3)
					{
						Global_20266.f_1 = 7;
					}
					if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
					{
						func_59();
					}
					func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_53();
					func_51();
					if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
					{
						if (Global_4539964[iLocal_24 /*104*/].f_31 == 1)
						{
							Global_4539964[iLocal_24 /*104*/].f_29 = 4;
							Global_4539964[iLocal_24 /*104*/].f_24 = 1;
						}
						else
						{
							Global_4539964[iLocal_24 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		if (func_1())
		{
			func_59();
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
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
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
	if (iLocal_27)
	{
		if (timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (_is_using_keyboard(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_20242, 0))
		{
			func_9();
			iLocal_27 = 1;
			settimera(0);
		}
		if (func_3(2, Global_20243, 0))
		{
			func_6();
			iLocal_27 = 1;
			settimera(0);
		}
	}
}

void func_6()
{
	func_56(Global_20247, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(2);
		}
		else
		{
			_cell_cam_move_finger(1);
		}
	}
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_56(Global_20247, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_20469 == 0)
		{
			_cell_cam_move_finger(1);
		}
		else
		{
			_cell_cam_move_finger(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4539964[iLocal_24 /*104*/].f_24 == 1)
	{
		if (Global_20244 == 0)
		{
			if (is_control_pressed(2, Global_20237))
			{
				func_2();
				Global_20244 = 1;
				func_30();
				if (Global_4539964[iLocal_24 /*104*/].f_27 == 1)
				{
					Global_4539964[iLocal_24 /*104*/].f_99[0] = 0;
					Global_4539964[iLocal_24 /*104*/].f_99[1] = 0;
					Global_4539964[iLocal_24 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_4539964[iLocal_24 /*104*/].f_99[Global_20266] = 0;
				}
				if (func_29(iLocal_24))
				{
				}
				else
				{
					Global_4539964[iLocal_24 /*104*/].f_24 = 0;
					Global_4539964[iLocal_24 /*104*/].f_28 = 0;
				}
				thefeed_remove_item(Global_4539964[iLocal_24 /*104*/].f_16);
				func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_51();
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
					Global_22671 = 0;
				}
			}
		}
	}
	else if (Global_20244 == 0)
	{
		if (is_control_pressed(2, Global_20238))
		{
			if (iLocal_26 == 1)
			{
				if (Global_20266.f_1 > 3)
				{
					StringCopy(&Global_75468, _get_label_text(&Global_22646), 64);
					if (are_strings_equal(&Global_75468, "HARDCODED_4207156"))
					{
						Global_20266.f_1 = 3;
						Global_1963987 = 1;
					}
					else
					{
						Global_75598 = 7;
						set_bit(&Global_8137, 10);
						Global_20266.f_1 = 6;
					}
				}
				func_59();
			}
		}
	}
	if (Global_4539964[iLocal_24 /*104*/].f_31 == 1)
	{
		if (Global_20244 == 0)
		{
			if (func_3(2, Global_20238, 0))
			{
				func_27();
				Global_20244 = 1;
				Global_4539964[iLocal_24 /*104*/].f_29 = 2;
				Global_4539964[iLocal_24 /*104*/].f_24 = 1;
				Global_4539964[iLocal_24 /*104*/].f_31 = 0;
				clear_bit(&Global_8136, 17);
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
		}
	}
	if (Global_20244 == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_20235, 0))
		{
			Global_20244 = 1;
			if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
			{
				func_27();
				Global_4539964[iLocal_24 /*104*/].f_29 = 3;
				Global_4539964[iLocal_24 /*104*/].f_24 = 1;
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_53();
				func_51();
			}
			else if (Global_4539964[iLocal_24 /*104*/].f_30 == 1)
			{
				func_27();
				Global_7451 = 144;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 10;
					func_25();
				}
				func_24("appContacts");
				Global_20264 = start_new_script("appContacts", 4000);
				set_script_as_no_longer_needed("appContacts");
				Global_7451 = Global_4539964[iLocal_24 /*104*/].f_17;
				if (func_23(Global_7451, Global_20266) == 0)
				{
					func_22(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_22(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_211", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_13();
				func_59();
			}
		}
	}
}

void func_13()
{
	char cVar0[24];
	
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!has_scaleform_movie_loaded(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		wait(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(Global_8741);
			if (Global_8741 == 1)
			{
				func_56(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_56(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				set_bit(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_18();
				clear_bit(&Global_8138, 9);
				func_56(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_56(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_22(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_17();
				func_56(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					end_scaleform_movie_method();
				}
				else if (func_23(Global_7451, Global_20266) == 0)
				{
					func_22(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_22(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_56(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_56(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_17();
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
					end_scaleform_movie_method();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_23(Global_7451, Global_20266) == 0)
					{
						func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_56(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &cVar0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_56(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (has_scaleform_movie_loaded(Global_20247))
	{
		func_15();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else
		{
			func_22(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_78319)
	{
		func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_8136, 17);
	}
}

void func_16(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_17()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (Global_20266 == 0)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 1)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 2)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 3)
		{
			switch (Global_4541505)
			{
				case 1:
					set_player_reset_flag_prefer_rear_seats(player_id(), 0);
					break;
				
				case 2:
					set_player_reset_flag_prefer_rear_seats(player_id(), 1);
					break;
				
				case 3:
					set_player_reset_flag_prefer_rear_seats(player_id(), 2);
					break;
				
				case 4:
					set_player_reset_flag_prefer_rear_seats(player_id(), 3);
					break;
				
				case 5:
					set_player_reset_flag_prefer_rear_seats(player_id(), 4);
					break;
				
				case 6:
					set_player_reset_flag_prefer_rear_seats(player_id(), 5);
					break;
				
				case 7:
					set_player_reset_flag_prefer_rear_seats(player_id(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_18()
{
	if (Global_78319)
	{
		if (func_19() == 0)
		{
			return;
		}
		func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		set_bit(&Global_8136, 17);
	}
}

int func_19()
{
	return 0;
}

void func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_21(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_16(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar2);
								end_scaleform_movie_method();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_22(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_22(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_22(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_22(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_22(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_16(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(Global_8142);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_16(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar7);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_16(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar8);
								end_scaleform_movie_method();
							}
							else if (iVar1 == 8)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_16(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if ((iVar1 == 23 && are_strings_equal(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_16(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_22(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_22(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_21(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_22(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_16(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_16(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_16(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_16(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_16(sParam11);
	}
	end_scaleform_movie_method();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_24(char* sParam0)
{
	request_script(sParam0);
	while (!has_script_loaded(sParam0))
	{
		wait(0);
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_26() && is_ped_in_cover(player_ped_id(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_78319)
	{
		if (!is_ped_injured(player_ped_id()) && iVar1 == 0)
		{
			iVar2 = get_ped_prop_index(player_ped_id(), 0);
			if (Global_78319)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || is_ped_wearing_helmet(player_ped_id()))
				{
					iVar0 = 1;
				}
			}
			else if (is_ped_wearing_helmet(player_ped_id()))
			{
				iVar0 = 1;
			}
			if (!Global_20209)
			{
				if (Global_7451 != 128)
				{
					if (iVar0 == 0)
					{
						if (!is_entity_dead(player_ped_id(), false))
						{
							if (is_ped_in_any_vehicle(player_ped_id(), false))
							{
							}
							else
							{
								if (Global_78319)
								{
									set_ped_config_flag(player_ped_id(), 244, false);
									set_ped_config_flag(player_ped_id(), 243, false);
									set_ped_config_flag(player_ped_id(), 242, false);
								}
								set_bit(&Global_8136, 11);
								task_use_mobile_phone(player_ped_id(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_20255, true);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		_cell_cam_move_finger(5);
	}
}

int func_29(int iParam0)
{
	if ((Global_113386.f_14141[iParam0 /*104*/].f_99[0] == 1 || Global_113386.f_14141[iParam0 /*104*/].f_99[1] == 1) || Global_113386.f_14141[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (func_21(14))
	{
		if (!is_entity_dead(player_ped_id(), false))
		{
			if (get_entity_model(player_ped_id()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_31();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

var func_31()
{
	func_32();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_35(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_34(player_ped_id());
			if (func_33(iVar0) && (!func_21(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_33(Global_113386.f_2363.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_37()
{
	struct<16> Var0;
	
	if (Global_20244 == 0)
	{
		if ((func_3(2, Global_20235, 0) || Global_4541214 == 1) || Global_22665 == 1)
		{
			if (Global_4541214 == 0 && Global_22665 == 0)
			{
				func_27();
			}
			Global_20244 = 1;
			iLocal_30 = 0;
			func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 8;
					Global_22671 = 1;
					iLocal_23 = iLocal_22;
					_0x4737980E8A283806(iLocal_19[iLocal_22], &Local_45);
				}
				settimerb(0);
				iLocal_28 = 0;
				begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
				iLocal_33 = end_scaleform_movie_method_return_value();
				while (!is_scaleform_movie_method_return_value_ready(iLocal_33) && iLocal_28 == 0)
				{
					wait(0);
					if (timerb() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_42();
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(9);
				scaleform_movie_method_add_param_int(0);
				func_16("CELL_1");
				begin_text_command_scaleform_string("CELL_TO_FIELD");
				add_text_component_substring_player_name(get_player_name(player_id()));
				end_text_command_scaleform_string();
				begin_text_command_scaleform_string("CELL_FROM_FIELD");
				add_text_component_substring_player_name(&(Local_45.f_2));
				end_text_command_scaleform_string();
				begin_text_command_scaleform_string("CELL_EMAIL_BCON");
				add_text_component_substring_player_name(&(Local_45.f_56[0 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[1 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[2 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[3 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[4 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[5 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[6 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[7 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[8 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_56[9 /*16*/]));
				end_text_command_scaleform_string();
				begin_text_command_scaleform_string("CELL_2000");
				add_text_component_substring_player_name(&(Local_45.f_2));
				end_text_command_scaleform_string();
				switch (Local_45.f_313)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						scaleform_movie_method_add_param_texture_name_string("EmailAds_Dock_Tease");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 3:
						scaleform_movie_method_add_param_texture_name_string("EmailAds_Warstock");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 4:
						scaleform_movie_method_add_param_texture_name_string("EmailAds_Legendary_Motorsport");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 5:
						scaleform_movie_method_add_param_texture_name_string("EmailAds_LS_Customs");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 6:
						scaleform_movie_method_add_param_texture_name_string("EmailAds_Elitas_Travel");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 7:
						scaleform_movie_method_add_param_texture_name_string("EmailAds_LS_Tourist_Info");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 8:
						scaleform_movie_method_add_param_texture_name_string("emailads_dynasty8");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 9:
						scaleform_movie_method_add_param_texture_name_string("emailads_bennys");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 10:
						scaleform_movie_method_add_param_texture_name_string("emailads_ammunation");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 11:
						scaleform_movie_method_add_param_texture_name_string("emailads_SSSA");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 12:
						scaleform_movie_method_add_param_texture_name_string("emailads_maze_bank");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 13:
						scaleform_movie_method_add_param_texture_name_string("emailads_shark");
						scaleform_movie_method_add_param_bool(true);
						break;
					
					case 14:
						scaleform_movie_method_add_param_texture_name_string("emailads_RP");
						scaleform_movie_method_add_param_bool(true);
						break;
				}
				end_scaleform_movie_method();
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_56(Global_20247, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_22 == iLocal_21)
				{
					if (BitTest(Global_4541229, 25))
					{
						clear_bit(&Global_4541229, 25);
					}
					if (Global_4539963 > 0)
					{
						func_39(11355, iLocal_40, -1, 1, 0);
						if (Global_4539963 > 0)
						{
							Global_4539963 = 0;
						}
					}
				}
				return;
			}
			if (Global_4539964[iLocal_24 /*104*/].f_24 != 0)
			{
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 8;
				}
				if (Global_4541214 == 1 || Global_22665 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_4541214 == 1)
					{
					}
					Global_22665 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_28 = 0;
					begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
					iLocal_33 = end_scaleform_movie_method_return_value();
					while (!is_scaleform_movie_method_return_value_ready(iLocal_33) && iLocal_28 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = get_scaleform_movie_method_return_value_int(iLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4539964[iLocal_24 /*104*/].f_28 = 1;
				iLocal_26 = 0;
				StringCopy(&Global_22646, "NO_HYPERLINK", 64);
				Var0 = { Global_4539964[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (does_text_label_exist(&Var0))
				{
					Global_22646 = { Var0 };
					iLocal_26 = 1;
					if (Global_20254)
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					set_bit(&Global_8136, 17);
					Global_4539964[iLocal_24 /*104*/].f_26 = 1;
					Global_4539964[iLocal_24 /*104*/].f_24 = 2;
				}
				if (Global_4539964[iLocal_24 /*104*/].f_26 == 0)
				{
					Global_4539964[iLocal_24 /*104*/].f_24 = 1;
				}
				func_42();
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(9);
				scaleform_movie_method_add_param_int(0);
				func_16("CELL_1");
				begin_text_command_scaleform_string("CELL_TO_FIELD");
				add_text_component_substring_player_name(get_player_name(player_id()));
				end_text_command_scaleform_string();
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 145)
				{
					begin_text_command_scaleform_string("CELL_FROM_FIELD");
					add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_50));
					end_text_command_scaleform_string();
				}
				else
				{
					begin_text_command_scaleform_string("CELL_FROM_FIELD");
					add_text_component_substring_text_label(&(Global_1998[Global_4539964[iLocal_24 /*104*/].f_17 /*29*/].f_3));
					end_text_command_scaleform_string();
				}
				switch (Global_4539964[iLocal_24 /*104*/].f_32)
				{
					case 0:
						func_16(&(Global_4539964[iLocal_24 /*104*/]));
						break;
					
					case 1:
						begin_text_command_scaleform_string(&(Global_4539964[iLocal_24 /*104*/]));
						add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_33));
						if (Global_4539964[iLocal_24 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4539964[iLocal_24 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_4539964[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_4539964[iLocal_24 /*104*/].f_67)))
							{
								add_text_component_substring_text_label(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_4539964[iLocal_24 /*104*/].f_83)))
							{
								add_text_component_substring_text_label(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
						}
						end_text_command_scaleform_string();
						break;
					
					case 2:
						begin_text_command_scaleform_string(&(Global_4539964[iLocal_24 /*104*/]));
						add_text_component_integer(Global_4539964[iLocal_24 /*104*/].f_49);
						end_text_command_scaleform_string();
						break;
					
					case 3:
						begin_text_command_scaleform_string(&(Global_4539964[iLocal_24 /*104*/]));
						add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_33));
						add_text_component_integer(Global_4539964[iLocal_24 /*104*/].f_49);
						if (Global_4539964[iLocal_24 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_67));
						}
						if ((Global_4539964[iLocal_24 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_4539964[iLocal_24 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_4539964[iLocal_24 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_4539964[iLocal_24 /*104*/].f_67)))
							{
								add_text_component_substring_text_label(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_4539964[iLocal_24 /*104*/].f_83)))
							{
								add_text_component_substring_text_label(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_83));
							}
						}
						end_text_command_scaleform_string();
						break;
					
					case 4:
						func_38(iLocal_24);
						break;
					
					case 5:
						func_38(iLocal_24);
						break;
					
					case 6:
						func_38(iLocal_24);
						break;
					
					case 7:
						func_38(iLocal_24);
						break;
					
					case 8:
						func_38(iLocal_24);
						break;
					
					case 9:
						func_38(iLocal_24);
						break;
					
					case 10:
						func_38(iLocal_24);
						break;
					
					case 11:
						func_38(iLocal_24);
						break;
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 145)
				{
					begin_text_command_scaleform_string("CELL_2000");
					add_text_component_substring_player_name(&(Global_4539964[iLocal_24 /*104*/].f_50));
					end_text_command_scaleform_string();
				}
				else
				{
					func_16(&(Global_1998[Global_4539964[iLocal_24 /*104*/].f_17 /*29*/].f_3));
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 149)
				{
					scaleform_movie_method_add_param_texture_name_string("emailads_maze_bank");
					scaleform_movie_method_add_param_bool(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 140)
				{
					scaleform_movie_method_add_param_texture_name_string("EmailAds_Warstock");
					scaleform_movie_method_add_param_bool(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 155)
				{
					scaleform_movie_method_add_param_texture_name_string("emailads_arena");
					scaleform_movie_method_add_param_bool(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 160)
				{
					scaleform_movie_method_add_param_texture_name_string("emailads_diamond");
					scaleform_movie_method_add_param_bool(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 174)
				{
					scaleform_movie_method_add_param_texture_name_string("emailads_ls_car_meet");
					scaleform_movie_method_add_param_bool(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 185)
				{
					scaleform_movie_method_add_param_texture_name_string("SUM2_EMAIL_LUXURY_AUTOS");
					scaleform_movie_method_add_param_bool(true);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_17 == 186)
				{
					scaleform_movie_method_add_param_texture_name_string("SUM2_EMAIL_PREMIUM_DELUXE");
					scaleform_movie_method_add_param_bool(true);
				}
				end_scaleform_movie_method();
				Global_22671 = 1;
				func_56(Global_20247, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				thefeed_remove_item(Global_4539964[iLocal_24 /*104*/].f_16);
				if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
				{
					if (Global_20254)
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4539964[iLocal_24 /*104*/].f_30 == 1)
				{
					if (Global_20254)
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_29 > 0)
				{
					if (are_strings_equal(&(Global_4539964[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_20254)
						{
							func_22(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20254)
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4539964[iLocal_24 /*104*/].f_24 == 2)
				{
					if (Global_4539964[iLocal_24 /*104*/].f_31 == 1)
					{
						iLocal_26 = 0;
						if (Global_20254)
						{
							func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						set_bit(&Global_8136, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						clear_bit(&Global_8136, 17);
					}
				}
				else if (Global_20254)
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					set_bit(&Global_8136, 17);
				}
				else
				{
					func_22(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					set_bit(&Global_8136, 17);
				}
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_4541214 = 0;
			}
			else
			{
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_4541214 = 0;
			}
		}
		if (Global_2825434 == 0)
		{
			if (Global_78319)
			{
			}
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113386.f_14141[iParam0 /*104*/].f_49)
	{
		case 1:
			begin_text_command_scaleform_string("CELL_CL01");
			break;
		
		case 2:
			begin_text_command_scaleform_string("CELL_CL02");
			break;
		
		case 3:
			begin_text_command_scaleform_string("CELL_CL03");
			break;
		
		case 4:
			begin_text_command_scaleform_string("CELL_CL04");
			break;
		
		case 5:
			begin_text_command_scaleform_string("CELL_CL05");
			break;
		
		case 6:
			begin_text_command_scaleform_string("CELL_CL06");
			break;
		
		case 7:
			begin_text_command_scaleform_string("CELL_CL07");
			break;
		
		case 8:
			begin_text_command_scaleform_string("CELL_CL08");
			break;
		
		case 9:
			begin_text_command_scaleform_string("CELL_CL09");
			break;
	}
	add_text_component_substring_text_label(&(Global_113386.f_14141[iParam0 /*104*/]));
	while (iVar0 < Global_113386.f_14141[iParam0 /*104*/].f_49)
	{
		switch (Global_113386.f_14141[iParam0 /*104*/].f_32)
		{
			case 4:
				add_text_component_substring_text_label(&(Global_2815059.f_1725[iVar0 /*4*/]));
				break;
			
			case 5:
				add_text_component_substring_text_label(&(Global_1931438[iVar0 /*4*/]));
				break;
			
			case 6:
				add_text_component_substring_text_label(&(Global_1931479[iVar0 /*4*/]));
				break;
			
			case 7:
				add_text_component_substring_text_label(&(Global_1931500[iVar0 /*4*/]));
				break;
			
			case 8:
				add_text_component_substring_text_label(&(Global_1931517[iVar0 /*4*/]));
				break;
			
			case 9:
				add_text_component_substring_text_label(&(Global_1931530[iVar0 /*4*/]));
				break;
			
			case 10:
				add_text_component_substring_text_label(&(Global_1931543[iVar0 /*4*/]));
				break;
			
			case 11:
				add_text_component_substring_text_label(&(Global_1931556[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	end_text_command_scaleform_string();
}

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_41()
{
	return Global_1574918;
}

void func_42()
{
	int iVar0;
	
	if (iLocal_37)
	{
		set_streamed_texture_dict_as_no_longer_needed(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4539964[iLocal_24 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (are_strings_equal(&(Global_4539964[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_43(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_1963979, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				request_streamed_texture_dict(&Local_34, false);
				while (!has_streamed_texture_dict_loaded(&Local_34))
				{
					wait(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(char* sParam0)
{
	switch (get_hash_key(sParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_44()
{
	if (iLocal_27)
	{
		if (timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (_is_using_keyboard(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_20242, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			settimera(0);
		}
		if (func_3(2, Global_20243, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			settimera(0);
		}
	}
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_46(Local_39, Local_38, Global_20226, -90f, 0f, 90f, 350f, 0);
	set_mobile_phone_scale((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_22639 = 0;
		iLocal_18 = 0;
	}
}

float func_46(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4541508 == 0)
	{
		if (BitTest(Global_8136, 14) && Global_20266.f_1 < 4)
		{
			get_mobile_phone_position(&Var0);
			if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
			{
				Global_4541508 = 1;
			}
		}
	}
	if (func_49() && Global_4541508 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = get_game_timer();
	}
	fVar1 = func_48((to_float((get_game_timer() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_20194 = { func_47(Param0, Param1, fVar2) };
		Global_20197 = { func_47(Param2, Param3, fVar2) };
	}
	else
	{
		Global_20194 = { Param1 };
		Global_20197 = { Param3 };
	}
	set_mobile_phone_position(Global_20194);
	set_mobile_phone_rotation(Global_20197, 0);
	return fVar1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_48(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (Global_20209 == 0)
			{
				if (Global_7451 != 128)
				{
					if (!is_ped_in_any_vehicle(player_ped_id(), false))
					{
						if (Global_21605 != 2)
						{
						}
					}
				}
			}
		}
		if (func_21(14))
		{
			return 0;
		}
		if (is_ped_in_cover(player_ped_id(), false))
		{
			return 0;
		}
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			if (!_is_in_vehicle_cam_disabled())
			{
				if (is_entity_in_water(get_vehicle_ped_is_in(player_ped_id(), false)))
				{
					return 0;
				}
			}
		}
		if (((is_ped_swimming(player_ped_id()) || is_ped_swimming_under_water(player_ped_id())) || is_player_climbing(player_id())) || (is_ped_hanging_on_to_vehicle(player_ped_id()) && !(BitTest(Global_4718592.f_37, 17) && (network_is_activity_session() || Global_1922883))))
		{
			return 0;
		}
		if (Global_112434)
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _get_cam_active_view_mode_context();
	iVar1 = get_cam_view_mode_for_context(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _is_in_vehicle_cam_disabled()))
	{
		iVar2 = 1;
		if (!is_entity_dead(player_ped_id(), false))
		{
			if (is_ped_in_any_vehicle(player_ped_id(), false))
			{
				iVar3 = get_vehicle_ped_is_in(player_ped_id(), false);
				if ((((((((is_this_model_a_bike(get_entity_model(iVar3)) || is_this_model_a_bicycle(get_entity_model(iVar3))) || is_this_model_a_quadbike(get_entity_model(iVar3))) || get_entity_model(iVar3) == joaat("seashark")) || get_entity_model(iVar3) == joaat("seashark2")) || get_entity_model(iVar3) == joaat("rhino")) || get_entity_model(iVar3) == joaat("submersible")) || get_entity_model(iVar3) == joaat("submersible2")) || get_entity_model(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4541507 || iVar2 == 1)
	{
		if (_get_number_of_references_of_script_with_name_hash(joaat("apptrackify")) > 0 || Global_113386.f_14051.f_89)
		{
			if (_get_number_of_references_of_script_with_name_hash(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_50()
{
	float fVar0;
	
	fVar0 = func_46(Local_38, Local_39, -90f, 0f, 90f, Global_20226, 350f, 0);
	set_mobile_phone_scale((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_22638 = 0;
		func_59();
		iLocal_18 = 0;
	}
}

void func_51()
{
	if (Global_4541214 == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_52(Global_20247, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_56(Global_20247, "DISPLAY_VIEW", 8f, to_float(iLocal_23), -1082130432, -1082130432, -1082130432);
		if (Global_20254)
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_78319)
		{
			func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else
		{
			func_22(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_52(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	func_16(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_16(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_16(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_16(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_16(sParam6);
	}
	end_scaleform_movie_method();
}

void func_53()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_30();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
		{
			func_59();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4539964[iVar4 /*104*/].f_18 = -1;
		Global_4539964[iVar4 /*104*/].f_18.f_1 = 0;
		Global_4539964[iVar4 /*104*/].f_18.f_2 = 0;
		Global_4539964[iVar4 /*104*/].f_18.f_3 = 0;
		Global_4539964[iVar4 /*104*/].f_18.f_5 = 0;
		while (iVar3 < 12)
		{
			if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
			{
				func_59();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4539964[iVar3 /*104*/].f_24 != 0)
				{
					if (Global_4539964[iVar3 /*104*/].f_99[Global_20266] == 1)
					{
						if (func_55(Global_4539964[iVar3 /*104*/].f_18, Global_4539964[iVar4 /*104*/].f_18))
						{
							iVar4 = iVar3;
							if (Global_4539964[iVar4 /*104*/].f_28 == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4539964[iVar4 /*104*/].f_24 != 0)
		{
			if (Global_4539964[iVar4 /*104*/].f_99[Global_20266] == 1)
			{
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(8);
				scaleform_movie_method_add_param_int(iVar1);
				scaleform_movie_method_add_param_int(iLocal_25);
				scaleform_movie_method_add_param_bool(false);
				if (Global_4539964[iVar4 /*104*/].f_17 == 145)
				{
					begin_text_command_scaleform_string("CELL_2000");
					add_text_component_substring_player_name(&(Global_4539964[iVar4 /*104*/].f_50));
					end_text_command_scaleform_string();
				}
				else
				{
					func_16(&(Global_1998[Global_4539964[iVar4 /*104*/].f_17 /*29*/].f_3));
				}
				Var5 = { Global_4539964[iVar4 /*104*/] };
				if (func_43(&(Global_4539964[iVar4 /*104*/])))
				{
					iVar6 = func_54(7315, -1);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_16(&Var5);
				end_scaleform_movie_method();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			_0x4737980E8A283806(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(8);
				scaleform_movie_method_add_param_int(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4539963 == 0)
					{
						scaleform_movie_method_add_param_int(1);
					}
					else
					{
						scaleform_movie_method_add_param_int(0);
					}
				}
				else
				{
					scaleform_movie_method_add_param_int(1);
				}
				scaleform_movie_method_add_param_bool(false);
				begin_text_command_scaleform_string("CELL_2000");
				add_text_component_substring_player_name(&(Local_45.f_2));
				end_text_command_scaleform_string();
				begin_text_command_scaleform_string("CELL_EMAIL_SUBJ");
				add_text_component_substring_player_name(&(Local_45.f_23[0 /*16*/]));
				add_text_component_substring_player_name(&(Local_45.f_23[1 /*16*/]));
				end_text_command_scaleform_string();
				end_scaleform_movie_method();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_54(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	return _get_packed_stat_int(iParam0, iParam1);
}

int func_55(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_56(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_57()
{
	switch (get_current_language())
	{
		case -1:
			_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 0:
			_0x07DBD622D9533857("gta5mkt_en");
			break;
		
		case 1:
			_0x07DBD622D9533857("gta5mkt_fr");
			break;
		
		case 2:
			_0x07DBD622D9533857("gta5mkt_ge");
			break;
		
		case 3:
			_0x07DBD622D9533857("gta5mkt_it");
			break;
		
		case 4:
			_0x07DBD622D9533857("gta5mkt_sp");
			break;
		
		case 5:
			_0x07DBD622D9533857("gta5mkt_pt");
			break;
		
		case 6:
			_0x07DBD622D9533857("gta5mkt_pl");
			break;
		
		case 7:
			_0x07DBD622D9533857("gta5mkt_ru");
			break;
		
		case 8:
			_0x07DBD622D9533857("gta5mkt_ko");
			break;
		
		case 9:
			_0x07DBD622D9533857("gta5mkt_ch");
			break;
		
		case 10:
			_0x07DBD622D9533857("gta5mkt_ja");
			break;
		
		case 11:
			_0x07DBD622D9533857("gta5mkt_me");
			break;
		
		case 12:
			_0x07DBD622D9533857("gta5mkt_cn");
			break;
	}
	_sc_inbox_get_emails(0, 6);
	wait(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_20266.f_1 > 3)
	{
		wait(0);
		iLocal_43 = _0x16DA8172459434AA();
		if (func_4())
		{
			Global_20266.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = _0x7DB18CA8CAD5B098();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_58()
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_59()
{
	if (func_49() == 0)
	{
		set_mobile_phone_position(Global_20219[Global_20211 /*3*/]);
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
	{
		func_60(0);
	}
	if (iLocal_37)
	{
		set_streamed_texture_dict_as_no_longer_needed(&Local_34);
	}
	Global_22639 = 0;
	Global_22638 = 0;
	terminate_this_thread();
}

void func_60(int iParam0)
{
	if (func_65())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_64())
		{
			func_62(1, 1);
		}
		else
		{
			func_62(0, 0);
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
	if (!func_61())
	{
		Global_20266.f_1 = 3;
	}
}

int func_61()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_63(0))
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

int func_63(int iParam0)
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

bool func_64()
{
	return BitTest(Global_1958711, 5);
}

bool func_65()
{
	return BitTest(Global_1958711, 19);
}

