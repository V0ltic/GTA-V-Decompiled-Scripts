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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<2> Local_87 = { 0, 0 } ;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<2> Local_90 = { 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<2> Local_93 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<2> Local_96 = { 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	struct<2> Local_99 = { 0, 0 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_84, "CELL_206", 16);
	StringCopy(&Local_87, "CELL_214", 16);
	StringCopy(&Local_90, "CELL_243", 16);
	StringCopy(&Local_93, "CELL_244", 16);
	StringCopy(&Local_96, "CELL_265", 16);
	StringCopy(&Local_99, "CELL_300", 16);
	network_set_script_is_safe_for_network_game();
	func_98(&iLocal_105);
	iLocal_102 = 0;
	func_96();
	func_95(Global_20247, "SET_THEME", to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_85(0);
	while (true)
	{
		wait(0);
		func_84();
		func_83();
		if (!Global_20266.f_1 == 9 && Global_20266.f_1 > 3)
		{
			switch (iLocal_83)
			{
				case 0:
					func_47();
					break;
				
				case 1:
					func_31();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_20266.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
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
	Global_1888478.f_6 = 0;
	terminate_this_thread();
}

int func_3()
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1888478.f_6 = 1;
	if (iLocal_104)
	{
		if (is_control_just_released(2, Global_20235))
		{
			iLocal_104 = 0;
		}
		return;
	}
	if (is_control_just_released(2, 201))
	{
		iLocal_83 = 1;
		iVar0 = func_29(iLocal_102, 0);
		func_6(iVar0);
		return;
	}
	if (is_control_just_released(2, 202))
	{
		iLocal_83 = 1;
		return;
	}
	set_warning_message_with_header("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1888478.f_7[iParam0 /*8*/].f_2;
	if (Global_1888478.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_103 == iVar0)
	{
		func_26(iVar0, Global_1888478.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1888478.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_20266.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

bool func_11()
{
	return BitTest(Global_1958711, 5);
}

bool func_12()
{
	return BitTest(Global_1958711, 19);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1888478.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (BitTest(Global_1888478.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_25();
				if (Global_1888478.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_25();
				}
				else
				{
					Global_1888478.f_4 = (Global_1888478.f_4 - 1);
					if (Global_1888478.f_4 < 0)
					{
						Global_1888478.f_4 = 0;
					}
					func_18();
				}
			}
			clear_bit(&(Global_1892703[player_id() /*599*/].f_10.f_22), Global_1888478.f_7[iParam0 /*8*/].f_2);
			thefeed_remove_item(Global_1888478.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1888478.f_7[iVar0 /*8*/] = { Global_1888478.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1888478.f_7[9 /*8*/].f_1 = 0;
		Global_1888478.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		set_bit(&(Global_1888478.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return BitTest(Global_1888478.f_3, iParam0);
}

void func_17()
{
	Global_1888478 = (Global_1888478 - 1);
}

void func_18()
{
	Global_22668 = (Global_22668 - 1);
	if (Global_22668 < 0)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_95(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_95(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
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
		if (func_23(14))
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
								func_22(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar2);
								end_scaleform_movie_method();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_21(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_21(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_21(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_22(&(Global_8143[iVar1 /*15*/]));
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
								func_22(&(Global_8143[iVar1 /*15*/]));
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
								func_22(&(Global_8143[iVar1 /*15*/]));
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
								func_22(&(Global_8143[iVar1 /*15*/]));
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
								func_22(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_21(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_22(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_22(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_22(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_22(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_22(sParam11);
	}
	end_scaleform_movie_method();
}

void func_22(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

bool func_23(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_22668 != 0)
	{
		if (!is_string_null_or_empty(sParam0))
		{
		}
		Global_22668 = 0;
	}
}

void func_25()
{
	Global_1888478.f_1 = (Global_1888478.f_1 - 1);
	if (Global_1888478.f_1 < 0)
	{
		Global_1888478.f_1 = 0;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_1892703[player_id() /*599*/].f_10.f_26 == func_14())
	{
		if (network_is_player_active(iParam0))
		{
			Global_1892703[player_id() /*599*/].f_10.f_26 = iParam0;
			Global_2815059.f_5195.f_225 = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 1922361302;
	Var0.f_1 = player_id();
	if (!iParam0 == 0)
	{
		_trigger_script_event_2(1, &Var0, 2, iParam0);
	}
}

int func_28(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		set_bit(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1888478.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30()
{
	return Global_1888478;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_102, 0);
	if (iLocal_102 == -1)
	{
		func_85(1);
		return;
	}
	iVar1 = Global_1888478.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0, 1) || iLocal_103 != iVar1)
	{
		func_85(1);
		return;
	}
	func_41(&iLocal_105);
	if (func_39(&iLocal_105))
	{
		func_85(1);
		return;
	}
	if (func_38(&iLocal_105))
	{
		func_13(iVar0);
		func_85(1);
		return;
	}
	if (func_34(&iLocal_105))
	{
		if (func_33())
		{
			iLocal_104 = 1;
			iLocal_83 = 3;
		}
		else if (Global_1888478.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1888478.f_7[iVar0 /*8*/] == 1)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_32(int iParam0)
{
	set_bit(&Global_1836068, 15);
	func_13(iParam0);
	Global_1888478.f_6 = 0;
	func_7(0);
}

bool func_33()
{
	return Global_1574582;
}

int func_34(int* iParam0)
{
	if (!BitTest(*iParam0, 0))
	{
		return 0;
	}
	if (Global_20244)
	{
		return 0;
	}
	if (!is_screen_faded_in())
	{
		return 0;
	}
	if (!is_control_just_pressed(2, Global_20235))
	{
		return 0;
	}
	func_35();
	Global_20244 = 1;
	return 1;
}

void func_35()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Accept", &Global_20255, true);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		_cell_cam_move_finger(5);
	}
}

int func_37()
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

int func_38(int* iParam0)
{
	if (!BitTest(*iParam0, 1))
	{
		return 0;
	}
	if (Global_20244)
	{
		return 0;
	}
	if (!is_screen_faded_in())
	{
		return 0;
	}
	if (!is_control_just_pressed(2, Global_20238))
	{
		return 0;
	}
	func_35();
	Global_20244 = 1;
	return 1;
}

int func_39(int* iParam0)
{
	if (!BitTest(*iParam0, 2))
	{
		return 0;
	}
	if (Global_20244)
	{
		return 0;
	}
	if (!is_screen_faded_in())
	{
		return 0;
	}
	if (!is_control_just_pressed(2, Global_20236))
	{
		return 0;
	}
	func_40();
	Global_20244 = 1;
	return 1;
}

void func_40()
{
	if (!is_entity_dead(player_ped_id(), false))
	{
		play_sound_frontend(-1, "Menu_Back", &Global_20255, true);
	}
}

void func_41(int* iParam0)
{
	if (get_game_timer() < iParam0->f_1)
	{
		return;
	}
	if (!is_screen_faded_in())
	{
		return;
	}
	if (is_control_just_pressed(2, Global_20242) || is_control_just_pressed(2, 181))
	{
		func_44();
		iParam0->f_1 = get_game_timer() + 50;
	}
	if (is_control_just_pressed(2, Global_20243) || is_control_just_pressed(2, 180))
	{
		func_42();
		iParam0->f_1 = get_game_timer() + 50;
	}
}

void func_42()
{
	func_95(Global_20247, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_43();
}

void func_43()
{
	if (func_37())
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

void func_44()
{
	func_95(Global_20247, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	play_sound_frontend(-1, "Menu_Navigate", &Global_20255, true);
	func_45();
}

void func_45()
{
	if (func_37())
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

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_30() > 1)
	{
		func_41(&iLocal_105);
	}
	if (func_34(&iLocal_105))
	{
		begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
		iVar0 = end_scaleform_movie_method_return_value();
		while (!is_scaleform_movie_method_return_value_ready(iVar0))
		{
			wait(0);
		}
		iLocal_102 = get_scaleform_movie_method_return_value_int(iVar0);
		iVar1 = func_29(iLocal_102, 0);
		switch (Global_1888478.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_49();
				break;
			
			default:
				return;
		}
		Global_20266.f_1 = 8;
		return;
	}
	if (func_38(&iLocal_105))
	{
		begin_scaleform_movie_method(Global_20247, "GET_CURRENT_SELECTION");
		iVar2 = end_scaleform_movie_method_return_value();
		while (!is_scaleform_movie_method_return_value_ready(iVar2))
		{
			wait(0);
		}
		iLocal_102 = get_scaleform_movie_method_return_value_int(iVar2);
		iVar3 = func_29(iLocal_102, 0);
		switch (Global_1888478.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_85(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_48(0);
		func_85(0);
	}
}

void func_48(int iParam0)
{
	if (func_16(iParam0))
	{
		clear_bit(&(Global_1888478.f_3), iParam0);
	}
}

void func_49()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_20266.f_1 != 8)
	{
		Global_20266.f_1 = 8;
	}
	func_95(Global_20247, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_29(iLocal_102, 0);
	iLocal_103 = Global_1888478.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1888478.f_7[iVar3 /*8*/].f_2;
	begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
	scaleform_movie_method_add_param_int(26);
	scaleform_movie_method_add_param_int(0);
	if (func_46(iVar4, 0, 1))
	{
		Var5 = { func_82(iVar4) };
		begin_text_command_scaleform_string("STRING");
		set_colour_of_next_text_component(func_76(iVar4));
		add_text_component_substring_player_name(&Var5);
		end_text_command_scaleform_string();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1888478.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15474)
		{
			bVar7 = func_75(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8] != func_14())
					{
						if (func_46(Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1892703[iVar4 /*599*/].f_10.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				begin_text_command_scaleform_string(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_82(uVar6[iVar8]) };
					add_text_component_substring_player_name(&Var11);
					iVar8++;
				}
				end_text_command_scaleform_string();
			}
		}
		else
		{
			if (Global_1888478.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1888478.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1888478.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			begin_text_command_scaleform_string(&cVar12);
			add_text_component_integer(Global_1888478.f_88[iVar3 /*5*/]);
			add_text_component_integer(func_74(iVar4));
			add_text_component_integer(Global_1888478.f_88[iVar3 /*5*/].f_3);
			add_text_component_integer(Global_1888478.f_88[iVar3 /*5*/].f_4);
			end_text_command_scaleform_string();
		}
	}
	else if (Global_1888478.f_7[iVar3 /*8*/] == 1)
	{
		begin_text_command_scaleform_string("BA_APP_BODY_DM2");
		set_colour_of_next_text_component(func_76(Global_1888478.f_7[iVar3 /*8*/].f_2));
		add_text_component_substring_player_name(func_61(Global_1888478.f_7[iVar3 /*8*/].f_2));
		end_text_command_scaleform_string();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_1888478.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = get_pedheadshot_txd_string(iVar2);
		}
	}
	if (bVar0)
	{
		scaleform_movie_method_add_param_texture_name_string(sVar1);
	}
	else
	{
		func_22(&Local_99);
	}
	end_scaleform_movie_method();
	func_95(Global_20247, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53(&Local_96);
	func_50(13, &Local_90, 12, &Local_93, 4, &Local_84, &iLocal_105);
	iLocal_83 = 1;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int* iParam6)
{
	func_51(2, iParam0, sParam1, 0, iParam6, -1);
	func_51(1, iParam2, sParam3, 1, iParam6, 17);
	func_51(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, int* iParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_20247, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		clear_bit(iParam4, iParam3);
		func_52(iParam5, 0);
		return;
	}
	if (Global_20254)
	{
		func_21(Global_20247, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		set_bit(iParam4, iParam3);
		func_52(iParam5, 1);
		return;
	}
	func_21(Global_20247, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	set_bit(iParam4, iParam3);
	func_52(iParam5, 1);
}

void func_52(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		set_bit(&Global_8136, iParam0);
		return;
	}
	clear_bit(&Global_8136, iParam0);
}

void func_53(char* sParam0)
{
	func_54(Global_20247, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_54(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	begin_scaleform_movie_method(iParam0, sParam1);
	func_22(sParam2);
	if (!is_string_null_or_empty(sParam3))
	{
		func_22(sParam3);
	}
	if (!is_string_null_or_empty(sParam4))
	{
		func_22(sParam4);
	}
	if (!is_string_null_or_empty(sParam5))
	{
		func_22(sParam5);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		func_22(sParam6);
	}
	end_scaleform_movie_method();
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == -1)
	{
		func_56(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0, 1))
	{
		return;
	}
	if (func_58(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (!func_46(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1660944 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660944)
	{
		if (Global_1660783[iVar0 /*5*/].f_1 == iParam0)
		{
			if (is_pedheadshot_valid(Global_1660783[iVar0 /*5*/].f_2) && is_pedheadshot_ready(Global_1660783[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_59(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (is_pedheadshot_valid(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, get_pedheadshot_txd_string(Global_1660783[iParam0 /*5*/].f_2), 64);
			_thefeed_add_txd_ref(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unregister_pedheadshot(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1660944)
	{
		Global_1660783[iVar2 /*5*/] = { Global_1660783[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_60(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_60(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (network_is_game_in_progress())
	{
		uParam0->f_3 = get_network_time();
	}
}

char* func_61(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_73(&(Global_1892703[iParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1892703[iParam0 /*599*/].f_10.f_121 != Global_1892703[player_id() /*599*/].f_10.f_121)
	{
		sVar0 = func_68(iParam0, 0);
		return sVar0;
	}
	if (((func_67(iParam0, 28) || func_67(player_id(), 28)) || func_66(iParam0)) && !func_64(iParam0))
	{
		return func_68(iParam0, 0);
	}
	iVar1 = func_63(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != player_id())
		{
			if (!func_62() && !network_check_user_content_privileges(0, -1, true))
			{
				return func_68(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		sVar0 = func_73(&(Global_1892703[iVar1 /*599*/].f_10.f_105));
		if (is_string_null_or_empty(sVar0))
		{
			return func_68(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_62()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

int func_63(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_14();
}

int func_64(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
	if (func_62())
	{
		if (iParam0 == player_id())
		{
			return 1;
		}
		else if (network_have_user_content_privileges(0))
		{
			if (network_can_view_gamer_user_content(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_65(iParam0) };
		if ((is_orbis_version() && !unk_0x807ABE1AB65C24D2()) || is_pc_version())
		{
			if (network_have_user_content_privileges(0))
			{
				return 0;
			}
		}
		else if (func_62() || unk_0x807ABE1AB65C24D2())
		{
			if (network_have_user_content_privileges(0))
			{
				if (network_can_view_gamer_user_content(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_67(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

char* func_68(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_70(iParam0, 1))
		{
			return func_69();
		}
	}
	return _get_label_text("GB_REST_ACC");
}

char* func_69()
{
	return _get_label_text("GB_REST_ACCM");
}

bool func_70(int iParam0, bool bParam1)
{
	return func_71(iParam0, bParam1, 1);
}

int func_71(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_72(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_14() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_14())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_73(var uParam0)
{
	return uParam0;
}

int func_74(int iParam0)
{
	if (func_63(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_19;
}

int func_75(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 26);
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_79(iParam0);
	if (iVar0 != -1)
	{
		return func_77(iVar0);
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_78(int iParam0)
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_80(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_63(iParam0)];
		}
	}
	return -1;
}

bool func_80(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_81(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_14();
}

int func_81(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_14())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

struct<16> func_82(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, get_player_name(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_83()
{
	if (Global_1888478.f_6)
	{
		if (iLocal_83 != 3)
		{
			if (!is_warning_message_active())
			{
				Global_1888478.f_6 = 0;
			}
		}
	}
}

void func_84()
{
	set_input_exclusive(0, 176);
	set_input_exclusive(0, 177);
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_103 = func_14();
	if (!Global_20266.f_1 == 7)
	{
		Global_20266.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_102;
	}
	if (iVar0 >= Global_1659409)
	{
		iVar0 = 0;
	}
	if (Global_22665)
	{
		func_49();
		Global_22665 = 0;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_94());
	if ((func_80(player_id(), 0) && !func_93(1)) && iVar1 <= 0)
	{
		func_91();
		return;
	}
	func_86();
	func_95(Global_20247, "DISPLAY_VIEW", to_float(25), to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_50(13, &Local_87, 12, &Local_93, 4, &Local_84, &iLocal_105);
	}
	else
	{
		func_50(1, "", 1, "", 4, &Local_84, &iLocal_105);
	}
	iLocal_83 = 0;
}

void func_86()
{
	int iVar0;
	int iVar1;
	
	func_95(Global_20247, "SET_DATA_SLOT_EMPTY", to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1888478.f_7[iVar0 /*8*/].f_1 == 1 && Global_1888478.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1888478.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_90(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_88(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_87();
}

void func_87()
{
	bool bVar0;
	
	begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
	scaleform_movie_method_add_param_int(25);
	scaleform_movie_method_add_param_int(0);
	if (func_81(player_id()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	scaleform_movie_method_add_param_int(-1);
	scaleform_movie_method_add_param_int(1);
	bVar0 = network_is_game_in_progress();
	scaleform_movie_method_add_param_bool(bVar0);
	end_scaleform_movie_method();
}

int func_88(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1888478.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1888478.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
	scaleform_movie_method_add_param_int(25);
	scaleform_movie_method_add_param_int(iParam1);
	Var0 = { func_82(Global_1888478.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	begin_text_command_scaleform_string("BA_APP_BODY_DM1");
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_int(-1);
	iVar1 = 1;
	iVar2 = func_79(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_77(iVar2);
	}
	scaleform_movie_method_add_param_int(iVar1);
	scaleform_movie_method_add_param_bool(true);
	end_scaleform_movie_method();
	return 1;
}

void func_89(char* sParam0)
{
	scaleform_movie_method_add_param_player_name_string(sParam0);
}

int func_90(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1888478.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_1888478.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
	scaleform_movie_method_add_param_int(25);
	scaleform_movie_method_add_param_int(iParam1);
	Var0 = { func_82(Global_1888478.f_7[iParam0 /*8*/].f_2) };
	func_89(&Var0);
	bVar1 = func_75(Global_1888478.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_74(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			begin_text_command_scaleform_string("BA_APP_BODYCT3");
		}
		else
		{
			begin_text_command_scaleform_string("BA_APP_BODY_T3");
		}
		add_text_component_integer(iVar2);
		end_text_command_scaleform_string();
	}
	else
	{
		if (bVar1)
		{
			begin_text_command_scaleform_string("BA_APP_BODYCT2");
		}
		else
		{
			begin_text_command_scaleform_string("BA_APP_BODY_T2");
		}
		add_text_component_integer(iVar2);
		end_text_command_scaleform_string();
	}
	scaleform_movie_method_add_param_int(-1);
	iVar3 = 1;
	iVar4 = func_79(Global_1888478.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_77(iVar4);
	}
	scaleform_movie_method_add_param_int(iVar3);
	scaleform_movie_method_add_param_bool(true);
	end_scaleform_movie_method();
	return 1;
}

void func_91()
{
	func_95(Global_20247, "SET_DATA_SLOT_EMPTY", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
	scaleform_movie_method_add_param_int(26);
	scaleform_movie_method_add_param_int(0);
	begin_text_command_scaleform_string("STRING");
	set_colour_of_next_text_component(func_76(player_id()));
	add_text_component_substring_player_name(func_92());
	end_text_command_scaleform_string();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	end_scaleform_movie_method();
	func_95(Global_20247, "DISPLAY_VIEW", to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_53("CELL_BOSSAGE");
	func_50(1, "", 1, "", 4, &Local_84, &iLocal_105);
	iLocal_83 = 2;
}

char* func_92()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_63(player_id());
	if (iVar0 != func_14())
	{
		if (iVar0 != player_id())
		{
			if (((func_67(iVar0, 28) || func_67(player_id(), 28)) || func_66(iVar0)) && !func_64(iVar0))
			{
				return func_68(iVar0, 0);
			}
			if (!func_62() && !network_check_user_content_privileges(0, -1, true))
			{
				return func_68(iVar0, 0);
			}
		}
		sVar1 = func_73(&(Global_1892703[iVar0 /*599*/].f_10.f_105));
		if (is_string_null_or_empty(sVar1))
		{
			return func_68(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_93(bool bParam0)
{
	return func_70(player_id(), bParam0);
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (Global_1888478.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_95(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_96()
{
	Global_1888478.f_1 = 0;
	func_97();
}

void func_97()
{
	Global_1888478.f_5 = 0;
}

void func_98(var uParam0)
{
	*uParam0 = 0;
}

