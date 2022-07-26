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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_45 = 0;
	int* iLocal_46 = NULL;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&iLocal_46))
	{
		while (!func_79())
		{
			func_67(&iLocal_46);
			if (func_57(&iLocal_46))
			{
			}
			else
			{
				func_17(&iLocal_46);
				wait(0);
			}
		}
	}
	func_1(&iLocal_46);
}

void func_1(int* iParam0)
{
	func_16();
	if (func_10(iParam0))
	{
		clear_help(true);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	set_max_wanted_level(5);
	func_3();
	_set_player_homing_rocket_disabled(player_id(), 0);
	func_2();
}

void func_2()
{
	terminate_this_thread();
}

void func_3()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_809), 3);
}

void func_4(int* iParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(iParam0->f_6), 5);
}

void func_5(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!is_thread_active(Global_2678393.f_1582) || Global_2678393.f_1582 == get_id_of_this_thread()) || bParam2)
	{
		if (bParam0)
		{
			Global_2678393.f_1582 = get_id_of_this_thread();
			Global_2678393.f_1583 = get_network_time();
		}
		else
		{
			Global_2678393.f_1582 = -1;
		}
		Global_2678393.f_1585 = iParam1;
		Global_2678393.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!is_thread_active(Global_2678393.f_1598) || Global_2678393.f_1598 == get_id_of_this_thread()) || bParam1)
	{
		if (bParam0)
		{
			Global_2678393.f_1598 = get_id_of_this_thread();
			set_bit(&(Global_2689235[player_id() /*453*/].f_71.f_2), 23);
		}
		else
		{
			Global_2678393.f_1598 = -1;
			clear_bit(&(Global_2689235[player_id() /*453*/].f_71.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(int* iParam0)
{
	return func_9(&(iParam0->f_6), 5);
}

bool func_9(int* iParam0, int iParam1)
{
	return BitTest(*iParam0, iParam1);
}

int func_10(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		if (func_14("STEALTH_OFF", func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P", func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON") || func_12(func_11())) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

bool func_12(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

bool func_13(char* sParam0, char* sParam1)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	add_text_component_substring_text_label(sParam1);
	return end_text_command_is_this_help_message_being_displayed(0);
}

bool func_14(char* sParam0, char* sParam1, char* sParam2)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	add_text_component_substring_text_label(sParam1);
	add_text_component_substring_text_label(sParam2);
	return end_text_command_is_this_help_message_being_displayed(0);
}

char* func_15(int iParam0)
{
	if (iParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH";
	}
	return get_display_name_from_vehicle_model(iParam0);
}

void func_16()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_809), 1);
}

void func_17(int* iParam0)
{
	func_54(iParam0);
	func_53(iParam0);
	if (func_52(iParam0))
	{
		if (((func_51(iParam0) && !func_50(iParam0)) && network_has_control_of_entity(iParam0->f_1)) && !func_49())
		{
			func_48(iParam0, 1, 0);
			func_47(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_50(iParam0))
		{
			if (network_has_control_of_entity(iParam0->f_1) && !func_49())
			{
				func_48(iParam0, 0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_46(iParam0))
	{
		_set_player_homing_rocket_disabled(player_id(), 1);
		func_45();
		func_44(iParam0);
	}
	else if (func_43(iParam0))
	{
		_set_player_homing_rocket_disabled(player_id(), 0);
		func_16();
		func_44(iParam0);
		func_42(iParam0, 5);
	}
	if (func_50(iParam0) && !func_51(iParam0))
	{
		func_40(iParam0);
		func_39();
		func_42(iParam0, 2);
		if (func_36(iParam0))
		{
			func_34();
		}
	}
	else
	{
		func_18(iParam0);
	}
	func_3();
	clear_bit(&(Global_1853348[player_id() /*834*/].f_809), 4);
}

void func_18(int* iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !is_help_message_being_displayed()) && func_33(iParam0)) && !func_32(0)) && !func_31()) && func_29()) && does_entity_exist(get_ped_in_vehicle_seat(iParam0->f_1, -1, false)))
	{
		func_25(iParam0, 1);
		func_24(&(iParam0->f_6), 3);
		iVar0 = func_23(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_52(iParam0))
		{
			func_21(func_22(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		else
		{
			func_20(func_22(iParam0), func_15(iParam0->f_2), iVar0);
		}
		func_19(iParam0);
		func_24(&(iParam0->f_6), 0);
	}
}

void func_19(int* iParam0)
{
	func_24(&(iParam0->f_6), 2);
}

void func_20(char* sParam0, char* sParam1, int iParam2)
{
	begin_text_command_display_help(sParam0);
	add_text_component_substring_text_label(sParam1);
	end_text_command_display_help(0, false, true, iParam2);
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	begin_text_command_display_help(sParam0);
	add_text_component_substring_text_label(sParam1);
	add_text_component_substring_text_label(sParam2);
	end_text_command_display_help(0, false, true, iParam3);
}

char* func_22(int* iParam0)
{
	if (func_52(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_24(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_25(int* iParam0, int iParam1)
{
	int iVar0;
	
	if (func_52(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				iVar0 = (func_28(19004, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_26(19004, iVar0, -1);
				}
				break;
			}
	}
}

void func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	_set_packed_stat_int(iParam0, iParam1, iParam2);
}

int func_27()
{
	return Global_1574918;
}

int func_28(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return _get_packed_stat_int(iParam0, iParam1);
}

bool func_29()
{
	return (!BitTest(Global_1853348[player_id() /*834*/].f_809, 4) && !func_30());
}

bool func_30()
{
	return ((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) && Global_4718592.f_2 == 20);
}

bool func_31()
{
	return Global_75485;
}

int func_32(int iParam0)
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

int func_33(int* iParam0)
{
	if (func_52(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
				return func_28(19004, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_34()
{
	if (!is_help_message_being_displayed())
	{
		func_35("STEALTH_WARN", 3000);
	}
}

void func_35(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

int func_36(int* iParam0)
{
	int iVar0;
	
	if (func_32(0) || func_31())
	{
		return 0;
	}
	iVar0 = func_37(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((is_disabled_control_just_pressed(0, 114) || is_disabled_control_just_pressed(0, 99)) || is_disabled_control_just_pressed(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (is_disabled_control_just_pressed(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (is_disabled_control_just_pressed(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (is_disabled_control_just_pressed(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_37(int* iParam0)
{
	if (!func_38(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
			break;
	}
	return 4;
}

bool func_38(int* iParam0)
{
	return (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id(), false));
}

void func_39()
{
	disable_control_action(0, 24, true);
	disable_control_action(0, 66, true);
	disable_control_action(0, 67, true);
	disable_control_action(0, 68, true);
	disable_control_action(0, 114, true);
	disable_control_action(0, 69, true);
	disable_control_action(0, 70, true);
	disable_control_action(0, 91, true);
	disable_control_action(0, 92, true);
	disable_control_action(0, 99, true);
	disable_control_action(0, 100, true);
	disable_control_action(0, 37, true);
}

void func_40(int* iParam0)
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !is_help_message_being_displayed()) && func_9(&(iParam0->f_6), 3)) && !func_32(0)) && !func_31()) && func_29()) && does_entity_exist(get_ped_in_vehicle_seat(iParam0->f_1, -1, false)))
	{
		iVar0 = func_23(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_52(iParam0))
		{
			func_35(func_41(iParam0), iVar0);
		}
		else
		{
			func_21(func_41(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		func_47(iParam0);
		func_24(&(iParam0->f_6), 0);
	}
}

char* func_41(int* iParam0)
{
	if (func_52(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_42(int* iParam0, int iParam1)
{
	if (func_51(iParam0))
	{
		return;
	}
	if (get_max_wanted_level() != iParam1)
	{
		set_max_wanted_level(iParam1);
	}
	if (get_player_wanted_level(player_id()) > iParam1)
	{
		set_player_wanted_level(player_id(), iParam1, false);
	}
}

bool func_43(int* iParam0)
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_44(int* iParam0)
{
	func_5(&(iParam0->f_6), 0);
	if (func_10(iParam0))
	{
		clear_help(true);
	}
	if (!func_52(iParam0))
	{
		if (func_50(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_45()
{
	set_bit(&(Global_1853348[player_id() /*834*/].f_809), 1);
}

bool func_46(int* iParam0)
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_47(int* iParam0)
{
	func_24(&(iParam0->f_6), 1);
}

void func_48(int* iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			_set_deploy_heli_stub_wings(iParam0->f_1, !bParam1, bParam2);
			break;
	}
}

bool func_49()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_809, 3);
}

bool func_50(int* iParam0)
{
	return func_9(iParam0, 0);
}

bool func_51(int* iParam0)
{
	return func_9(iParam0, 2);
}

bool func_52(int* iParam0)
{
	return ((func_38(iParam0) && iParam0->f_3 == player_ped_id()) || get_ped_in_vehicle_seat(iParam0->f_1, -1, false) == player_ped_id());
}

void func_53(int* iParam0)
{
	if (func_10(iParam0) && (func_32(0) || func_31()))
	{
		iParam0->f_6.f_2 = 1;
		clear_help(true);
		func_5(&(iParam0->f_6), 0);
		if (func_50(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_52(iParam0))
			{
				func_25(iParam0, -1);
			}
		}
	}
}

void func_54(int* iParam0)
{
	if (func_50(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_56())
			{
				func_4(iParam0);
			}
		}
		else if (!func_56())
		{
			func_55(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	clear_bit(&(Global_1853348[player_id() /*834*/].f_809), 2);
}

void func_55(int* iParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_24(&(iParam0->f_6), 5);
}

bool func_56()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_809, 2);
}

int func_57(int* iParam0)
{
	if (!func_38(iParam0))
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (!func_65(iParam0->f_2))
	{
		return 1;
	}
	if (func_64(player_id(), 1, 1))
	{
		return 1;
	}
	if (func_63(player_id()))
	{
		return 1;
	}
	if (func_60(player_id()))
	{
		return 1;
	}
	if (func_58(player_id()))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2689235[iParam0 /*453*/].f_244 > -1)
		{
			if (func_59(Global_2689235[iParam0 /*453*/].f_244) == 4)
			{
				return 1;
			}
		}
		if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

int func_60(int iParam0)
{
	if (iParam0 != func_62() && func_61(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (network_is_player_active(iParam0))
		{
			if (bParam1)
			{
				if (!is_player_playing(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	return -1;
}

int func_63(int iParam0)
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_66(int* iParam0)
{
	return (does_entity_exist(iParam0->f_1) && is_vehicle_driveable(iParam0->f_1, false));
}

void func_67(int* iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_78(iParam0);
	if (bVar0)
	{
		func_24(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_24(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_38(iParam0))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iParam0->f_1 = get_vehicle_ped_is_using(player_ped_id());
			if (func_66(iParam0))
			{
				iParam0->f_2 = get_entity_model(iParam0->f_1);
				if (get_is_task_active(player_ped_id(), 2))
				{
					func_24(iParam0, 2);
				}
			}
		}
	}
	if (func_66(iParam0))
	{
		if (!is_vehicle_seat_free(iParam0->f_1, -1, false))
		{
			iVar2 = get_ped_in_vehicle_seat(iParam0->f_1, -1, false);
			if ((does_entity_exist(iVar2) && !is_entity_dead(iVar2, false)) && is_ped_a_player(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == player_ped_id())
				{
					func_24(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_24(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_38(iParam0))
		{
			iParam0->f_4 = func_77(player_ped_id(), 0);
		}
		if (func_52(iParam0))
		{
			if (func_76() && func_70(iParam0))
			{
				func_24(iParam0, 0);
			}
		}
		else
		{
			func_68(iParam0);
		}
	}
	if (func_46(iParam0))
	{
		iParam0->f_6.f_3 = get_network_time();
	}
}

void func_68(int* iParam0)
{
	if (does_entity_exist(iParam0->f_3) && func_69(network_get_player_index_from_ped(iParam0->f_3)))
	{
		func_24(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_69(int iParam0)
{
	return (iParam0 != -1 && BitTest(Global_1853348[iParam0 /*834*/].f_809, 1));
}

bool func_70(int* iParam0)
{
	bool bVar0;
	
	bVar0 = func_75();
	if (network_has_control_of_entity(iParam0->f_1))
	{
		func_74(iParam0);
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !_are_heli_stub_wings_deployed(iParam0->f_1);
				break;
		}
	}
	else if (func_73(iParam0))
	{
		if (func_72(iParam0))
		{
			network_request_control_of_entity(iParam0->f_1);
		}
	}
	else
	{
		func_71(iParam0);
	}
	return bVar0;
}

void func_71(var uParam0)
{
	func_24(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = get_game_timer();
}

bool func_72(var uParam0)
{
	return (get_game_timer() - uParam0->f_6.f_1) >= 200;
}

bool func_73(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_74(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

var func_75()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_809, 1);
}

bool func_76()
{
	return !func_30();
}

int func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_in_any_vehicle(iParam0, bParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, bParam1);
			if (does_entity_exist(iVar0))
			{
				iVar1 = get_vehicle_model_number_of_seats(get_entity_model(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!is_vehicle_seat_free(iVar0, iVar3, false))
					{
						if (get_ped_in_vehicle_seat(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_78(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_79()
{
	if (func_80())
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_86())
	{
		return 1;
	}
	if (func_85(159))
	{
		if (!func_84())
		{
			return 1;
		}
	}
	if (func_85(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_81() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_81()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	switch (func_83())
	{
		case 0:
			return func_82();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_82()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_83()
{
	return Global_31959;
}

bool func_84()
{
	return Global_2714762.f_698;
}

int func_85(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return Global_2725403;
}

bool func_87()
{
	return Global_2714762.f_693;
}

int func_88(int* iParam0)
{
	func_67(iParam0);
	if (func_66(iParam0))
	{
		if (func_52(iParam0))
		{
			if (network_has_control_of_entity(iParam0->f_1))
			{
				if (!func_49())
				{
					func_48(iParam0, 0, 0);
				}
				else
				{
					func_24(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_24(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

