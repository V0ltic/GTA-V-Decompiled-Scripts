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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<6> Local_49[165];
	struct<6> Local_50[165];
	struct<8> Local_51[19];
	int iLocal_52 = 0;
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
		func_57();
	}
	func_47();
	Global_22671 = 0;
	Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
	Global_20463 = 0;
	func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	func_43();
	if (Global_20266.f_1 > 3)
	{
		Global_20266.f_1 = 7;
	}
	iLocal_30 = get_game_timer();
	Global_20270 = 1;
	while (true)
	{
		wait(0);
		if (iLocal_29 == 0)
		{
			iLocal_31 = get_game_timer();
			if ((iLocal_31 - iLocal_30) > 500)
			{
				iLocal_29 = 1;
			}
		}
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (Global_22671 == 0)
					{
						if (Global_2825434 == 0)
						{
							func_38();
							func_33();
						}
					}
					break;
				
				case 8:
					if (Global_22671 == 1)
					{
						func_5();
						func_38();
					}
					break;
				
				default:
					break;
			}
			if (Global_22671 == 0)
			{
				if (func_4())
				{
					func_57();
				}
			}
			else if (func_3(2, Global_20234, 0) || BitTest(Global_8137, 12))
			{
				if (are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/]), "CELL_FINV"))
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
						func_57();
					}
					func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_44();
					func_43();
					if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
					{
						if (Global_113386.f_14141[iLocal_23 /*104*/].f_31 == 1)
						{
							Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 4;
							Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
						}
						else
						{
							Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 4;
							Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
		{
			func_57();
		}
		if (func_1())
		{
			func_57();
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
	func_6();
}

void func_6()
{
	if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 == 1)
	{
		if (Global_20244 == 0)
		{
			if (is_control_just_pressed(2, Global_20237))
			{
				func_2();
				Global_20244 = 1;
				func_26();
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_27 == 1)
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[0] = 0;
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[1] = 0;
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_99[Global_20266] = 0;
				}
				if (func_25(iLocal_23))
				{
				}
				else
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 0;
					Global_113386.f_14141[iLocal_23 /*104*/].f_28 = 0;
				}
				thefeed_remove_item(Global_113386.f_14141[iLocal_23 /*104*/].f_16);
				func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				if (iLocal_21 > 0)
				{
					iLocal_21 = (iLocal_21 - 1);
				}
				func_43();
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
			if (iLocal_25 == 1)
			{
				if (Global_20266.f_1 > 3)
				{
					StringCopy(&Global_75468, _get_label_text(&Global_22646), 64);
					Global_75598 = 7;
					set_bit(&Global_8137, 10);
					Global_20266.f_1 = 6;
				}
				func_57();
			}
		}
	}
	if (Global_113386.f_14141[iLocal_23 /*104*/].f_31 == 1)
	{
		if (Global_20244 == 0)
		{
			if (func_3(2, Global_20238, 0))
			{
				func_22();
				Global_20244 = 1;
				Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 2;
				Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
				Global_113386.f_14141[iLocal_23 /*104*/].f_31 = 0;
				clear_bit(&Global_8136, 17);
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
		}
	}
	if (Global_20244 == 0 && iLocal_29 == 1)
	{
		if (func_3(2, Global_20235, 0))
		{
			Global_20244 = 1;
			if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
			{
				func_22();
				Global_113386.f_14141[iLocal_23 /*104*/].f_29 = 3;
				Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
				Global_22671 = 0;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 7;
				}
				func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
			else if (Global_113386.f_14141[iLocal_23 /*104*/].f_30 == 1)
			{
				func_22();
				Global_7451 = 144;
				if (Global_20266.f_1 > 3)
				{
					Global_20266.f_1 = 10;
					if (func_21() == 0)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_20264 = start_new_script("appContacts", 4000);
				set_script_as_no_longer_needed("appContacts");
				Global_7451 = Global_113386.f_14141[iLocal_23 /*104*/].f_17;
				if (func_17(Global_7451, Global_20266) == 0)
				{
					func_16(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_16(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_211", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_7();
				func_57();
			}
		}
	}
}

void func_7()
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
			func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_8741);
			if (Global_8741 == 1)
			{
				func_46(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_46(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				clear_bit(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				set_bit(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_12();
				clear_bit(&Global_8138, 9);
				func_46(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_16(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_11();
				func_46(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					end_scaleform_movie_method();
				}
				else if (func_17(Global_7451, Global_20266) == 0)
				{
					func_16(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_16(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_46(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_46(Global_20247, "SET_THEME", to_float(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_21618)
				{
					begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(4);
					scaleform_movie_method_add_param_int(0);
					scaleform_movie_method_add_param_int(2);
					begin_text_command_scaleform_string("CELL_CONDFON");
					add_text_component_substring_player_name(&Global_21620);
					end_text_command_scaleform_string();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
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
					if (func_17(Global_7451, Global_20266) == 0)
					{
						func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_20247, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &cVar0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_46(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (has_scaleform_movie_loaded(Global_20247))
	{
		func_9();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else
		{
			func_16(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()
{
	if (Global_78319)
	{
		func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(&Global_8136, 17);
	}
}

void func_10(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_11()
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

void func_12()
{
	if (Global_78319)
	{
		if (func_13() == 0)
		{
			return;
		}
		func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		set_bit(&Global_8136, 17);
	}
}

int func_13()
{
	return 0;
}

void func_14(int iParam0)
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
		if (func_15(14))
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
								func_10(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar2);
								end_scaleform_movie_method();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_16(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_16(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_16(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_16(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_16(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_10(&(Global_8143[iVar1 /*15*/]));
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
								func_10(&(Global_8143[iVar1 /*15*/]));
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
								func_10(&(Global_8143[iVar1 /*15*/]));
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
								func_10(&(Global_8143[iVar1 /*15*/]));
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
								func_10(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_16(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_16(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_15(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_16(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_10(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_10(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_10(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_10(sParam11);
	}
	end_scaleform_movie_method();
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_18(char* sParam0)
{
	request_script(sParam0);
	while (!has_script_loaded(sParam0))
	{
		wait(0);
	}
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_20() && is_ped_in_cover(player_ped_id(), false))
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

int func_20()
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

int func_21()
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
		if (func_15(14))
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

void func_22()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_20255, true);
		func_23();
	}
}

void func_23()
{
	if (func_24())
	{
		_cell_cam_move_finger(5);
	}
}

int func_24()
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

int func_25(int iParam0)
{
	if ((Global_113386.f_14141[iParam0 /*104*/].f_99[0] == 1 || Global_113386.f_14141[iParam0 /*104*/].f_99[1] == 1) || Global_113386.f_14141[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_15(14))
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
		Global_20266 = func_27();
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

var func_27()
{
	func_28();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_28()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_31(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_30(player_ped_id());
			if (func_29(iVar0) && (!func_15(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_29(Global_113386.f_2363.f_539.f_4321))
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

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_33()
{
	struct<16> Var0;
	char* sVar1;
	int iVar2;
	
	if (Global_20244 == 0)
	{
		if ((func_3(2, Global_20235, 0) || Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1) || Global_22665 == 1)
		{
			if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 0 && Global_22665 == 0)
			{
				func_22();
			}
			Global_20244 = 1;
			iLocal_29 = 0;
			iLocal_23 = iLocal_19[iLocal_21];
			if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 != 0)
			{
				if (Global_20266.f_1 > 3)
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					clear_bit(&Global_8136, 17);
					Global_20266.f_1 = 8;
				}
				if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1 || Global_22665 == 1)
				{
					iLocal_23 = iLocal_19[0];
					iLocal_22 = 0;
					if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
					{
					}
					Global_22665 = 0;
				}
				else
				{
					settimerb(0);
					iLocal_27 = 0;
					begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
					iLocal_32 = end_scaleform_movie_method_return_value();
					while (!is_scaleform_movie_method_return_value_ready(iLocal_32) && iLocal_27 == 0)
					{
						wait(0);
						if (timerb() > 2000)
						{
							iLocal_27 = 1;
						}
					}
					if (iLocal_27 == 1)
					{
						iLocal_28 = 0;
					}
					else
					{
						iLocal_28 = get_scaleform_movie_method_return_value_int(iLocal_32);
					}
					if (iLocal_28 < 0)
					{
						iLocal_28 = 0;
					}
					iLocal_23 = iLocal_19[iLocal_28];
					iLocal_22 = iLocal_28;
				}
				Global_113386.f_14141[iLocal_23 /*104*/].f_28 = 1;
				iLocal_25 = 0;
				StringCopy(&Global_22646, "NO_HYPERLINK", 64);
				Var0 = { Global_113386.f_14141[iLocal_23 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (does_text_label_exist(&Var0))
				{
					Global_22646 = { Var0 };
					iLocal_25 = 1;
					if (Global_20254)
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					set_bit(&Global_8136, 17);
					Global_113386.f_14141[iLocal_23 /*104*/].f_26 = 1;
					Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 2;
				}
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_26 == 0)
				{
					Global_113386.f_14141[iLocal_23 /*104*/].f_24 = 1;
				}
				func_37();
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(7);
				scaleform_movie_method_add_param_int(0);
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_17 == 145)
				{
					begin_text_command_scaleform_string("CELL_2000");
					add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_50));
					end_text_command_scaleform_string();
				}
				else
				{
					func_10(&(Global_1998[Global_113386.f_14141[iLocal_23 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113386.f_14141[iLocal_23 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						break;
					
					case 1:
						begin_text_command_scaleform_string(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_33));
						if (Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
						}
						end_text_command_scaleform_string();
						break;
					
					case 2:
						begin_text_command_scaleform_string(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						add_text_component_integer(Global_113386.f_14141[iLocal_23 /*104*/].f_49);
						end_text_command_scaleform_string();
						break;
					
					case 3:
						begin_text_command_scaleform_string(&(Global_113386.f_14141[iLocal_23 /*104*/]));
						add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_33));
						add_text_component_integer(Global_113386.f_14141[iLocal_23 /*104*/].f_49);
						if (Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iLocal_23 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iLocal_23 /*104*/].f_83));
							}
						}
						end_text_command_scaleform_string();
						break;
					
					case 4:
						func_36(iLocal_23);
						break;
					
					case 5:
						func_36(iLocal_23);
						break;
					
					case 6:
						func_36(iLocal_23);
						break;
					
					case 7:
						func_36(iLocal_23);
						break;
					
					case 8:
						func_36(iLocal_23);
						break;
					
					case 9:
						func_36(iLocal_23);
						break;
					
					case 10:
						func_36(iLocal_23);
						break;
					
					case 11:
						func_36(iLocal_23);
						break;
					
					case 12:
						func_35(iLocal_23);
						break;
				}
				if (Global_22674[iLocal_23] == 0)
				{
					if (Global_113386.f_14141[iLocal_23 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_1998[Global_113386.f_14141[iLocal_23 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (is_pedheadshot_valid(Global_22674[iLocal_23]))
					{
						if (is_pedheadshot_ready(Global_22674[iLocal_23]))
						{
							sVar1 = get_pedheadshot_txd_string(Global_22674[iLocal_23]);
						}
						else
						{
							sVar1 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar1 = "CHAR_DEFAULT";
					}
					begin_text_command_scaleform_string("CELL_2000");
					add_text_component_substring_player_name(sVar1);
					end_text_command_scaleform_string();
				}
				end_scaleform_movie_method();
				Global_22671 = 1;
				func_46(Global_20247, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_34(Global_20247, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				thefeed_remove_item(Global_113386.f_14141[iLocal_23 /*104*/].f_16);
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
				{
					if (Global_20254)
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_113386.f_14141[iLocal_23 /*104*/].f_30 == 1)
				{
					if (Global_20254)
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_29 > 0)
				{
					if (are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/]), "CELL_FINV"))
					{
						if (Global_20254)
						{
							func_16(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20254)
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 == 2)
				{
					if (Global_113386.f_14141[iLocal_23 /*104*/].f_31 == 1)
					{
						iLocal_25 = 0;
						if (Global_20254)
						{
							func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						set_bit(&Global_8136, 17);
					}
					else if (iLocal_25 == 0)
					{
						func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						clear_bit(&Global_8136, 17);
					}
				}
				else if (Global_20254)
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					set_bit(&Global_8136, 17);
				}
				else
				{
					func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					set_bit(&Global_8136, 17);
				}
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_113386.f_14051[Global_20266 /*20*/].f_17 = 0;
			}
			else
			{
				iVar2 = 0;
				if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1 || Global_22665 == 1)
				{
					if (Global_22665)
					{
					}
					iVar2 = 1;
				}
				Global_113386.f_14051[Global_20266 /*20*/].f_18 = 0;
				Global_113386.f_14051[Global_20266 /*20*/].f_17 = 0;
				if (iVar2 == 1)
				{
					iVar2 = 0;
					Global_20266.f_1 = 3;
				}
			}
		}
		if (Global_2825434 == 0)
		{
			if (Global_78319)
			{
				set_input_exclusive(0, Global_20238);
				if (func_3(2, Global_20238, 0))
				{
					Global_20244 = 1;
					Global_2825434 = 1;
				}
			}
		}
	}
}

void func_34(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	func_10(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_10(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_10(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_10(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_10(sParam6);
	}
	end_scaleform_movie_method();
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113386.f_14141[iParam0 /*104*/].f_49)
	{
		case 1:
			begin_text_command_scaleform_string("TUN_CBL_L01");
			break;
		
		case 2:
			begin_text_command_scaleform_string("TUN_CBL_L02");
			break;
		
		case 3:
			begin_text_command_scaleform_string("TUN_CBL_L03");
			break;
		
		case 4:
			begin_text_command_scaleform_string("TUN_CBL_L04");
			break;
		
		case 5:
			begin_text_command_scaleform_string("TUN_CBL_L05");
			break;
		
		case 6:
			begin_text_command_scaleform_string("TUN_CBL_L06");
			break;
		
		case 7:
			begin_text_command_scaleform_string("TUN_CBL_L07");
			break;
		
		case 8:
			begin_text_command_scaleform_string("TUN_CBL_L08");
			break;
		
		case 9:
			begin_text_command_scaleform_string("TUN_CBL_L09");
			break;
		
		case 10:
			begin_text_command_scaleform_string("TUN_CBL_L10");
			break;
	}
	while (iVar0 < Global_113386.f_14141[iParam0 /*104*/].f_49)
	{
		switch (Global_113386.f_14141[iParam0 /*104*/].f_32)
		{
			case 12:
				add_text_component_substring_text_label(&(Global_1931569[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	end_text_command_scaleform_string();
}

void func_36(int iParam0)
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

void func_37()
{
	int iVar0;
	
	if (iLocal_52)
	{
		set_streamed_texture_dict_as_no_longer_needed(&uLocal_33);
	}
	iLocal_52 = 0;
	if (Global_113386.f_14141[iLocal_23 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (!is_string_null_or_empty(&(Local_49[iVar0 /*6*/])) && are_strings_equal(&(Global_113386.f_14141[iLocal_23 /*104*/]), &(Local_49[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_33, {Local_51[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_33, {Local_50[iVar0 /*6*/]}, 16);
				}
				iLocal_52 = 1;
				request_streamed_texture_dict(&uLocal_33, false);
				while (!has_streamed_texture_dict_loaded(&uLocal_33))
				{
					wait(100);
				}
			}
			iVar0++;
		}
	}
}

void func_38()
{
	if (iLocal_26)
	{
		if (timera() > 50)
		{
			iLocal_26 = 0;
		}
	}
	if (iLocal_26 == 0)
	{
		if (func_3(2, Global_20242, 0) || is_control_just_pressed(2, 181))
		{
			if (iLocal_21 > 0)
			{
				iLocal_21 = (iLocal_21 - 1);
			}
			func_41();
			iLocal_26 = 1;
			settimera(0);
		}
		if (func_3(2, Global_20243, 0) || is_control_just_pressed(2, 180))
		{
			iLocal_21++;
			if (iLocal_21 == iLocal_20)
			{
				iLocal_21 = 0;
			}
			func_39();
			iLocal_26 = 1;
			settimera(0);
		}
	}
}

void func_39()
{
	func_46(Global_20247, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_40();
}

void func_40()
{
	if (func_24())
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

void func_41()
{
	func_46(Global_20247, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_42();
}

void func_42()
{
	if (func_24())
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

void func_43()
{
	if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 0)
	{
		if (iLocal_22 < 0)
		{
			iLocal_22 = 0;
		}
		func_46(Global_20247, "DISPLAY_VIEW", 6f, to_float(iLocal_22), -1082130432, -1082130432, -1082130432);
		func_34(Global_20247, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_20254)
		{
			if (iLocal_20 > 0)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_78319)
		{
			func_16(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
		else
		{
			func_16(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			clear_bit(&Global_8136, 17);
		}
	}
	else
	{
		iLocal_22 = 0;
	}
}

void func_44()
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_20 = 0;
	func_26();
	iVar1 = 0;
	while (iVar1 < 34)
	{
		if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
		{
			func_57();
		}
		iVar2 = 0;
		iVar3 = 34;
		Global_113386.f_14141[iVar3 /*104*/].f_18 = -1;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_1 = 0;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_2 = 0;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_3 = 0;
		Global_113386.f_14141[iVar3 /*104*/].f_18.f_5 = 0;
		while (iVar2 < 35)
		{
			if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
			{
				func_57();
			}
			if (iVar0[iVar2] == 0)
			{
				if (Global_113386.f_14141[iVar2 /*104*/].f_24 != 0)
				{
					if (Global_113386.f_14141[iVar2 /*104*/].f_99[Global_20266] == 1)
					{
						if (func_45(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[iVar3 /*104*/].f_18))
						{
							iVar3 = iVar2;
							if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
							{
								iLocal_24 = 33;
							}
							else
							{
								iLocal_24 = 34;
							}
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_19[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
		{
			if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
			{
				begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(6);
				scaleform_movie_method_add_param_int(iVar1);
				scaleform_movie_method_add_param_int(Global_113386.f_14141[iVar3 /*104*/].f_18.f_2);
				scaleform_movie_method_add_param_int(Global_113386.f_14141[iVar3 /*104*/].f_18.f_1);
				scaleform_movie_method_add_param_int(iLocal_24);
				if (Global_113386.f_14141[iVar3 /*104*/].f_17 == 145)
				{
					begin_text_command_scaleform_string("CELL_CONDFNH");
					add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_50));
					end_text_command_scaleform_string();
				}
				else
				{
					func_10(&(Global_1998[Global_113386.f_14141[iVar3 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113386.f_14141[iVar3 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113386.f_14141[iVar3 /*104*/]));
						break;
					
					case 1:
						begin_text_command_scaleform_string(&(Global_113386.f_14141[iVar3 /*104*/]));
						add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_33));
						if (Global_113386.f_14141[iVar3 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iVar3 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_113386.f_14141[iVar3 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_113386.f_14141[iVar3 /*104*/].f_67)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_113386.f_14141[iVar3 /*104*/].f_83)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
						}
						end_text_command_scaleform_string();
						break;
					
					case 2:
						begin_text_command_scaleform_string(&(Global_113386.f_14141[iVar3 /*104*/]));
						add_text_component_integer(Global_113386.f_14141[iVar3 /*104*/].f_49);
						end_text_command_scaleform_string();
						break;
					
					case 3:
						begin_text_command_scaleform_string(&(Global_113386.f_14141[iVar3 /*104*/]));
						add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_33));
						add_text_component_integer(Global_113386.f_14141[iVar3 /*104*/].f_49);
						if (Global_113386.f_14141[iVar3 /*104*/].f_66 == 1 && !are_strings_equal(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL"))
						{
							add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
						}
						if ((Global_113386.f_14141[iVar3 /*104*/].f_66 == 2 && !are_strings_equal(&(Global_113386.f_14141[iVar3 /*104*/].f_67), "NULL")) && !are_strings_equal(&(Global_113386.f_14141[iVar3 /*104*/].f_83), "NULL"))
						{
							if (does_text_label_exist(&(Global_113386.f_14141[iVar3 /*104*/].f_67)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_67));
							}
							if (does_text_label_exist(&(Global_113386.f_14141[iVar3 /*104*/].f_83)))
							{
								add_text_component_substring_text_label(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
							else
							{
								add_text_component_substring_player_name(&(Global_113386.f_14141[iVar3 /*104*/].f_83));
							}
						}
						end_text_command_scaleform_string();
						break;
					
					case 4:
						func_36(iVar3);
						break;
					
					case 5:
						func_36(iVar3);
						break;
					
					case 6:
						func_36(iVar3);
						break;
					
					case 7:
						func_36(iVar3);
						break;
					
					case 8:
						func_36(iVar3);
						break;
					
					case 9:
						func_36(iVar3);
						break;
					
					case 10:
						func_36(iVar3);
						break;
					
					case 11:
						func_36(iVar3);
						break;
					
					case 12:
						func_35(iVar3);
						break;
				}
				end_scaleform_movie_method();
			}
		}
		if (Global_113386.f_14141[iVar1 /*104*/].f_24 != 0)
		{
			if (Global_113386.f_14141[iVar1 /*104*/].f_99[Global_20266] == 1)
			{
				iLocal_20++;
			}
		}
		iVar1++;
	}
}

int func_45(struct<6> Param0, struct<6> Param1)
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_47()
{
	StringCopy(&(Local_49[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_51[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_51[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_51[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_51[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_49[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_51[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_49[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_51[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_49[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_51[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_51[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_51[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_51[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_51[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_51[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_51[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_49[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_51[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_49[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_51[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_49[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_51[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_51[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_51[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_51[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_49[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_50[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_49[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_50[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_49[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_50[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_49[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_50[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_49[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_50[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_49[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_50[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_49[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_50[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_49[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_50[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_49[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_50[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_49[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_50[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_49[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_50[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_49[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_50[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_49[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_50[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_49[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_50[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_49[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_50[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_49[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_50[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_49[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_50[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_49[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_50[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_49[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_50[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_49[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_50[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_49[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_50[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_49[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_50[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_49[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_50[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_49[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_50[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_49[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_50[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_49[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_50[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_49[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_50[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_49[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_50[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_49[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_50[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_49[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_50[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_49[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_50[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_49[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_50[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_49[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_50[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_49[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_50[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_49[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_50[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_49[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_50[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_49[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_50[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_49[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_50[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_49[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_50[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_49[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_50[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_49[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_50[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_49[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_50[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_49[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_50[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_49[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_50[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_49[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_50[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_49[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_50[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_49[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_50[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_49[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_50[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_49[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_50[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_49[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_50[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_49[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_50[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_49[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_50[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_49[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_50[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_49[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_50[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_49[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_50[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_49[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_50[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_49[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_50[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_49[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_50[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_49[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_50[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_49[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_50[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_49[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_50[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_49[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_50[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_49[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_50[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_49[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_50[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_49[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_50[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_49[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_50[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_49[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_50[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_49[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_50[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_49[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_50[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_49[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_50[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_49[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_50[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_49[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_50[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_49[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_50[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_49[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_50[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_49[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_50[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_49[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_50[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_49[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_50[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_49[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_50[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_49[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_50[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_49[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_50[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_49[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_50[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_49[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_50[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_49[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_50[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_49[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_50[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_49[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_50[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_49[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_50[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_49[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_50[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_49[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_50[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_49[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_50[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_49[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_50[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_49[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_50[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_49[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_50[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_49[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_50[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_49[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_50[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_49[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_50[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_49[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_50[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_49[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_50[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_49[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_50[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_49[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_50[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_49[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_50[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_49[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_50[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_49[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_50[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_49[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_50[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_49[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_50[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_49[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_50[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_49[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_50[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_49[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_50[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_49[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_50[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_49[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_50[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_49[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_50[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_49[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_50[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_49[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_50[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_49[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_50[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_49[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_50[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_49[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_50[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_49[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_50[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_49[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_50[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_49[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_50[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_49[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_50[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_49[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_50[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_49[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_50[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_49[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_50[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_49[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_50[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_49[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_50[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_49[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_50[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_49[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_50[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_49[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_50[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_49[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_50[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_49[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_50[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_49[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_50[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_49[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_50[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_49[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_50[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_49[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_50[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_49[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_50[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_49[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_50[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_49[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_50[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_49[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_50[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_49[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_50[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_49[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_50[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_49[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_50[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_49[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_50[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_49[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_50[160 /*6*/]), "ib_aircon", 24);
	if (func_56(player_id()) == 19)
	{
		StringCopy(&(Local_49[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_50[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_50[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_50[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_50[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_50[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_50[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_50[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_50[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_50[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_50[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_50[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_50[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_50[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_50[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_50[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_50[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_50[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_50[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_50[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_50[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_50[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_50[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_50[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_50[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_50[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_50[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_50[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_50[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_50[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_50[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_55(player_id()) == 14)
	{
		StringCopy(&(Local_49[44 /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_50[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[45 /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_50[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[46 /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_50[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[47 /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_50[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[48 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_50[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[49 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_50[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[50 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_50[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[51 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_50[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[52 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_50[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[53 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_50[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[54 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_50[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[55 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_50[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[56 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_50[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[57 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_50[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[58 /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_50[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[59 /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_50[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[60 /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_50[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[61 /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_50[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[62 /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_50[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[63 /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_50[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[64 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_50[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[65 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_50[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[66 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_50[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[67 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_50[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_54(player_id()) == 30)
	{
		StringCopy(&(Local_49[44 /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_50[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_49[45 /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_50[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_54(player_id()) == 32)
	{
		StringCopy(&(Local_49[44 /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_50[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_49[45 /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_50[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_49[46 /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_50[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_49[47 /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_50[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_53(player_id()) == 17)
	{
		StringCopy(&(Local_49[44 /*6*/]), "ILHTEXT_SFE00M", 24);
		StringCopy(&(Local_50[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_52(player_id()) == 4)
	{
		StringCopy(&(Local_49[44 /*6*/]), "TR_TXT_CV1", 24);
		StringCopy(&(Local_50[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_49[45 /*6*/]), "TR_TXT_CV2", 24);
		StringCopy(&(Local_50[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_49[46 /*6*/]), "TR_TXT_CV3", 24);
		StringCopy(&(Local_50[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_52(player_id()) == 11)
	{
		StringCopy(&(Local_49[44 /*6*/]), "ROBTEXT_IAA00M", 24);
		StringCopy(&(Local_50[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (func_48(player_id()) == 4)
	{
		StringCopy(&(Local_49[44 /*6*/]), "FXR_TXT_WI1", 24);
		StringCopy(&(Local_50[44 /*6*/]), "FXR_WAYIN", 24);
	}
}

int func_48(int iParam0)
{
	if (func_51(iParam0) == 264)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_49(int iParam0)
{
	if (func_50(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_50(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_50(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_52(int iParam0)
{
	if (func_51(iParam0) == 271)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_53(int iParam0)
{
	if (func_51(iParam0) == 256)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_54(int iParam0)
{
	if (func_51(iParam0) == 158)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_55(int iParam0)
{
	if (func_51(iParam0) == 243)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_56(int iParam0)
{
	if (func_51(iParam0) == 237 || func_51(iParam0) == 250)
	{
		return func_49(iParam0);
	}
	return -1;
}

void func_57()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
	{
		func_58(0);
	}
	if (iLocal_52)
	{
		set_streamed_texture_dict_as_no_longer_needed(&uLocal_33);
	}
	terminate_this_thread();
}

void func_58(int iParam0)
{
	if (func_63())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_62())
		{
			func_60(1, 1);
		}
		else
		{
			func_60(0, 0);
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
	if (!func_59())
	{
		Global_20266.f_1 = 3;
	}
}

int func_59()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_61(0))
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

int func_61(int iParam0)
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

bool func_62()
{
	return BitTest(Global_1958711, 5);
}

bool func_63()
{
	return BitTest(Global_1958711, 19);
}

