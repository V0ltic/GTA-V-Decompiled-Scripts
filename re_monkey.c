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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int* iLocal_53 = NULL;
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58[4] = { 0, 0, 0, 0 };
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	char* sLocal_62 = NULL;
	char* sLocal_63 = NULL;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<2> Local_70 = { 0, 5 } ;
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
	var uLocal_83 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	Local_49 = { -336.6146f, -93.66808f, 46.0005f };
	fLocal_50 = 256.1257f;
	fLocal_54 = 0f;
	Local_59 = { -334.8087f, -85.713f, 47.4504f };
	sLocal_61 = "scr_lamgraff_paint_spray";
	sLocal_62 = "switch@franklin@lamar_tagging_wall";
	sLocal_63 = "lamar_tagging_wall_loop_lamar";
	sLocal_64 = "lamar_tagging_wall_exit_lamar";
	sLocal_65 = "lamar_tagging_exit_loop_lamar";
	Local_66 = { 0f, 0f, 0f };
	if (has_force_cleanup_occurred(11))
	{
		func_150();
	}
	func_85(ScriptParam_70.f_1[0 /*3*/]);
	while (true)
	{
		func_71();
		switch (iLocal_45)
		{
			case 0:
				if (func_55())
				{
					func_52();
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_52();
				}
				break;
		}
		wait(0);
	}
}

int func_1()
{
	if (iLocal_46 == 0)
	{
		return 1;
	}
	else if (iLocal_46 == 1)
	{
		func_51();
		if (func_50(player_ped_id()))
		{
			func_49(player_ped_id(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
		}
		set_gameplay_cam_relative_heading(0f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		do_screen_fade_in(250);
		return 1;
	}
	else if (iLocal_46 == 2)
	{
		switch (iLocal_47)
		{
			case 0:
				func_36(-899711929);
				func_31();
				func_5(-1, 0);
				func_2();
				func_150();
				break;
			}
	}
	return 0;
}

void func_2()
{
	func_3();
}

int func_3()
{
	if (func_4(0))
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

int func_4(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_5(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
		if (func_14(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_13(iParam0, iParam1) != 322)
		{
			func_7(func_13(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_6(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_6(int iParam0)
{
	Global_113372 = iParam0;
}

void func_7(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_11((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			presence_event_updatestat_int(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			presence_event_updatestat_int(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			presence_event_updatestat_int(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_8();
	}
}

void func_8()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					presence_event_updatestat_int(joaat("num_rndevents_completed"), Global_113109, 0);
					set_bit(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	stat_set_int(joaat("num_missions_completed"), Global_113122, true);
	stat_set_int(joaat("num_missions_available"), Global_113105, true);
	stat_set_int(joaat("num_minigames_completed"), Global_113123, true);
	stat_set_int(joaat("num_minigames_available"), Global_113106, true);
	stat_set_int(joaat("num_oddjobs_completed"), Global_113124, true);
	stat_set_int(joaat("num_oddjobs_available"), Global_113107, true);
	stat_set_int(joaat("num_rndpeople_completed"), Global_113125, true);
	stat_set_int(joaat("num_rndpeople_available"), Global_113108, true);
	stat_set_int(joaat("num_rndevents_completed"), iVar9, true);
	stat_set_int(joaat("num_rndevents_available"), Global_113112, true);
	stat_set_int(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	stat_set_int(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	stat_set_float(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	stat_set_int(joaat("percent_story_missions"), Global_113129, true);
	stat_set_int(joaat("percent_ambient_missions"), Global_113130, true);
	stat_set_int(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_113386.f_10194.f_3853))
	{
		func_10(13, floor(Global_113386.f_10194.f_3853));
	}
	if (!datafile_is_save_pending())
	{
		if (!Global_78319)
		{
			if (func_9() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_3();
				}
			}
		}
	}
}

int func_9()
{
	return Global_31959;
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _get_achievement_progress(iParam0);
	if (iParam1 > iVar0)
	{
		return _set_achievement_progress(iParam0, iParam1);
	}
	return 0;
}

void func_11(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_12();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

int func_12()
{
	return Global_1574918;
}

int func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		set_bit(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_16(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_17(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_18();
	}
}

void func_18()
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

int func_19()
{
	func_20();
	switch (Global_113386.f_2363.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_24(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_23(player_ped_id());
			if (func_22(iVar0) && (!func_21(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_22(Global_113386.f_2363.f_539.f_4321))
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

bool func_21(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_25(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_27(int iParam0, int iParam1)
{
	set_bit(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_29()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, get_this_script_name(), 64);
	uVar1 = func_30(Var0);
	return uVar1;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (get_hash_key(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_31()
{
	func_32(1751306471, 6, func_35(), 133, 30000, 10000, -1, 0, -1, 0, 0);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;
	
	if (func_4(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_34(iParam1);
		Var0.f_4 = (get_game_timer() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		clear_bit(&(Var0.f_1), 0);
		Global_113386.f_7688.f_651[Global_113386.f_7688.f_764 /*14*/] = { Var0 };
		Global_113386.f_7688.f_764++;
		func_33(0);
		func_33(1);
		func_33(2);
		return 1;
	}
	return 0;
}

void func_33(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_22(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113386.f_7688[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113386.f_7688[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113386.f_7688.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113386.f_7688.f_919[bParam0] = iVar1;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_35()
{
	int iVar0;
	
	iVar0 = get_entity_model(player_ped_id());
	switch (iVar0)
	{
		case joaat("player_zero"):
			return 1;
		
		case joaat("player_one"):
			return 2;
		
		case joaat("player_two"):
			return 4;
		
		default:
	}
	return -1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (Global_113386.f_7688[iVar0 /*15*/] == iParam0)
		{
			if (Global_43599 != iVar0)
			{
				func_48(iVar0);
				func_40(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_198)
	{
		if (Global_113386.f_7688.f_137[iVar0 /*15*/] == iParam0)
		{
			func_40(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar0 /*15*/] == iParam0)
		{
			func_39(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_764)
	{
		if (Global_113386.f_7688.f_651[iVar0 /*14*/] == iParam0)
		{
			func_38(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_866)
	{
		if (Global_113386.f_7688.f_765[iVar0 /*10*/] == iParam0)
		{
			func_37(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_37(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_866)
	{
		return;
	}
	if (Global_113386.f_7688.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113386.f_7688.f_866 - 2))
		{
			Global_113386.f_7688.f_765[iVar0 /*10*/] = { Global_113386.f_7688.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_113386.f_7688.f_866 > 0)
	{
		Global_113386.f_7688.f_765[(Global_113386.f_7688.f_866 - 1) /*10*/] = { Var1 };
		Global_113386.f_7688.f_866 = (Global_113386.f_7688.f_866 - 1);
	}
}

void func_38(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_764)
	{
		return;
	}
	if (Global_113386.f_7688.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113386.f_7688.f_764 - 2))
		{
			Global_113386.f_7688.f_651[iVar0 /*14*/] = { Global_113386.f_7688.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_113386.f_7688.f_764 > 0)
	{
		Global_113386.f_7688.f_651[(Global_113386.f_7688.f_764 - 1) /*14*/] = { Var1 };
		Global_113386.f_7688.f_764 = (Global_113386.f_7688.f_764 - 1);
	}
	func_33(0);
	func_33(1);
	func_33(2);
}

void func_39(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_650)
	{
		if (Global_113386.f_7688.f_199[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_113386.f_7688.f_650 - 2))
			{
				Global_113386.f_7688.f_199[iVar2 /*15*/] = { Global_113386.f_7688.f_199[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_113386.f_7688.f_199[(Global_113386.f_7688.f_650 - 1) /*15*/] = { Var0 };
			Global_113386.f_7688.f_650 = (Global_113386.f_7688.f_650 - 1);
			return;
		}
		iVar1++;
	}
}

void func_40(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_113386.f_7688.f_198)
	{
		if (Global_113386.f_7688.f_137[iVar1 /*15*/] == iParam0)
		{
			func_41(Global_113386.f_7688.f_137[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_113386.f_7688.f_198 - 2))
			{
				Global_113386.f_7688.f_137[iVar2 /*15*/] = { Global_113386.f_7688.f_137[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_113386.f_7688.f_137[(Global_113386.f_7688.f_198 - 1) /*15*/] = { Var0 };
			Global_113386.f_7688.f_198 = (Global_113386.f_7688.f_198 - 1);
			return;
		}
		iVar1++;
	}
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (func_47(iParam0, Global_20266) == 1)
		{
			func_46(iParam0, Global_20266, 0);
			if (func_45(iParam0, Global_20266) == 0)
			{
				iVar0 = Global_20266;
				func_42(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_44(iParam0, iVar0, 0);
			func_43(iParam0, iVar0, 0);
		}
	}
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_45(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	Global_1998[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

int func_47(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

void func_48(int iParam0)
{
	bool bVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_113386.f_7688.f_136)
	{
		return;
	}
	uVar1 = Global_113386.f_7688[iParam0 /*15*/].f_2;
	if (Global_113386.f_7688.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_113386.f_7688.f_136 - 2))
		{
			Global_113386.f_7688[bVar0 /*15*/] = { Global_113386.f_7688[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_113386.f_7688.f_136 > 0)
	{
		Global_113386.f_7688[(Global_113386.f_7688.f_136 - 1) /*15*/] = { Var2 };
		Global_113386.f_7688.f_136 = (Global_113386.f_7688.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(uVar1, bVar0))
		{
			func_33(bVar0);
		}
		bVar0++;
	}
}

void func_49(int iParam0, struct<3> Param1, float fParam2)
{
	set_entity_coords(iParam0, Param1, true, false, false, true);
	set_entity_heading(iParam0, fParam2);
}

int func_50(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_51()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				break;
			
			case 1:
				iLocal_58[iVar1] = create_object(joaat("prop_paints_can02"), -335.66f, -95.24f, 46.16f, true, true, false);
				set_entity_coords_no_offset(iLocal_58[iVar1], -335.66f, -95.24f, 46.16f, false, false, true);
				set_entity_rotation(iLocal_58[iVar1], -2.32f, 0.66f, -0.8f, 2, true);
				break;
			
			case 2:
				iLocal_58[iVar1] = create_object(joaat("prop_paint_brush05"), -336.04f, -94.9f, 46.02f, true, true, false);
				set_entity_coords_no_offset(iLocal_58[iVar1], -336.04f, -94.9f, 46.02f, false, false, true);
				set_entity_rotation(iLocal_58[iVar1], 0.01f, 3.85f, 2.72f, 2, true);
				break;
			
			case 3:
				iLocal_58[iVar1] = create_object(joaat("prop_paint_spray01b"), -336.34f, -95.66f, 46.02f, true, true, false);
				set_entity_coords_no_offset(iLocal_58[iVar1], -336.34f, -95.66f, 46.02f, false, false, true);
				set_entity_rotation(iLocal_58[iVar1], -2.86f, 0.76f, 28.89f, 2, true);
				break;
		}
		iVar0++;
	}
}

void func_52()
{
	if (iLocal_46 == 2)
	{
		func_54();
		iLocal_47 = 0;
	}
	func_53();
}

void func_53()
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 2;
			break;
		
		case 1:
			iLocal_46 = 2;
			break;
		
		case 2:
			iLocal_46 = 0;
			break;
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = iLocal_45 + 1;
	if (iVar0 >= 0 && iVar0 < 2)
	{
		iLocal_45 = iVar0;
	}
}

int func_55()
{
	if (iLocal_46 == 0)
	{
		return 1;
	}
	else if (iLocal_46 == 1)
	{
		if (func_50(player_ped_id()))
		{
			func_49(player_ped_id(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
		}
		set_gameplay_cam_relative_heading(0f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		do_screen_fade_in(250);
		return 1;
	}
	else if (iLocal_46 == 2)
	{
		if (does_entity_exist(iLocal_48))
		{
			if (is_ped_dead_or_dying(iLocal_48, true))
			{
				func_150();
			}
		}
		else if (iLocal_47 > 0)
		{
			if (iLocal_52)
			{
				return 1;
			}
			else
			{
				func_150();
			}
		}
		switch (iLocal_47)
		{
			case 0:
				if (func_57())
				{
					func_51();
					iLocal_47++;
				}
				break;
			
			case 1:
				if (func_56())
				{
					if (func_50(iLocal_48))
					{
						if (get_focus_ped_on_screen(30f, 31086, 0.8f, 0.7f, 0.25f, 8f, 0.333f, 31086, 24818) == iLocal_48)
						{
							iLocal_69 = get_game_timer() + 2000;
							iLocal_47++;
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_69 < get_game_timer())
				{
					iLocal_52 = 1;
					iLocal_47++;
				}
				break;
			}
	}
	return 0;
}

int func_56()
{
	if (Global_22641)
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (does_entity_exist(iLocal_48))
	{
		return 1;
	}
	else
	{
		request_model(joaat("u_m_m_streetart_01"));
		if (has_model_loaded(joaat("u_m_m_streetart_01")))
		{
			iLocal_48 = create_ped(26, joaat("u_m_m_streetart_01"), Local_49, fLocal_50, true, true);
			set_model_as_no_longer_needed(joaat("u_m_m_streetart_01"));
			iLocal_58[0] = create_object(joaat("prop_cs_spray_can"), Local_59, true, true, false);
			attach_entity_to_entity(iLocal_58[0], iLocal_48, get_ped_bone_index(iLocal_48, 28422), 0f, -0.01f, -0.02f, Local_66, true, true, false, false, 2, true, 0);
			set_ped_keep_task(iLocal_48, true);
			set_ped_config_flag(iLocal_48, 42, true);
			iLocal_53 = func_68(iLocal_48, 0, 145);
			func_58(1);
			set_ped_relationship_group_hash(iLocal_48, joaat("player"));
			set_ped_lod_multiplier(iLocal_48, 2.5f);
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (func_62())
	{
		Global_113376 = 1;
		Global_113373 = get_game_timer();
		if (func_14(Global_113375))
		{
			func_59(0);
		}
		set_mission_name(true, "RE_TITLE");
		if (iParam0 && func_14(Global_113375))
		{
			flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

void func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!is_help_message_on_screen())
				{
					func_60(func_61(iParam0), -1);
					Global_113386.f_24995.f_2++;
					set_bit(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!is_help_message_on_screen())
				{
					func_60(func_61(iParam0), -1);
					Global_113386.f_24995.f_3++;
					set_bit(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!is_help_message_on_screen())
				{
					func_60(func_61(iParam0), -1);
					Global_113386.f_24995.f_4++;
					set_bit(&Global_113382, 2);
				}
			}
			break;
	}
}

void func_60(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

char* func_61(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_62()
{
	switch (func_63(&Global_32019, 0, 5, 0, get_id_of_this_thread()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_63(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_67(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		set_player_invincible(get_player_index(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_65(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_64(uParam0, iParam4);
		}
	}
	return 2;
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_65(int iParam0)
{
	return func_66(iParam0, Global_43052);
}

int func_66(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_65(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_68(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_69(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_70(network_is_game_in_progress(), 1f, 1f));
		if (!bParam2)
		{
			set_blip_as_friendly(iVar0, bParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_70(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_70(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_70(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_71()
{
	func_72();
	if (!is_world_point_within_brain_activation_range() && iLocal_51 < 3)
	{
		func_150();
	}
}

void func_72()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	if (func_50(iLocal_48))
	{
		bVar0 = func_50(iLocal_48);
		bVar1 = func_50(player_ped_id());
		Var2 = { get_entity_coords(iLocal_48, false) };
		fVar4 = 7.5f;
		Var5 = { fVar4, fVar4, fVar4 };
		if (bVar1)
		{
			Var3 = { get_entity_coords(player_ped_id(), false) };
			bVar6 = is_ped_in_any_vehicle(player_ped_id(), false);
			bVar7 = is_ped_in_any_heli(player_ped_id());
		}
		if (iLocal_51 < 3)
		{
			if (is_bullet_in_area(Var2, fVar4, false) || is_projectile_in_area(Var2 - Var5, Var2 + Var5, false))
			{
				iLocal_51 = 3;
			}
		}
		switch (iLocal_51)
		{
			case 0:
				request_anim_dict(sLocal_62);
				if (has_anim_dict_loaded(sLocal_62))
				{
					set_blocking_of_non_temporary_events(iLocal_48, true);
					task_play_anim(iLocal_48, sLocal_62, sLocal_63, 1000f, -8f, -1, 8193, 0f, false, false, false);
					iLocal_51++;
				}
				break;
			
			case 1:
				if (func_83(-2017877118))
				{
					iLocal_51 = 5;
				}
				if (func_82(player_ped_id(), iLocal_48, 35f))
				{
					open_sequence_task(&iLocal_68);
					task_play_anim(0, sLocal_62, sLocal_64, 8f, -8f, -1, 8192, 0f, false, false, false);
					task_play_anim(0, sLocal_62, sLocal_65, 8f, -2f, -1, 8193, 0f, false, false, false);
					close_sequence_task(iLocal_68);
					task_perform_sequence(iLocal_48, iLocal_68);
					clear_sequence_task(&iLocal_68);
					remove_anim_dict(sLocal_62);
					iLocal_51++;
				}
				break;
			
			case 2:
				if (func_83(242628503))
				{
					iLocal_51 = 5;
				}
				if (bVar7)
				{
					fVar8 = 30f;
				}
				else if (bVar6)
				{
					fVar8 = 17.5f;
				}
				else
				{
					fVar8 = 5f;
				}
				if ((bVar0 && bVar1) && func_82(player_ped_id(), iLocal_48, fVar8))
				{
					iLocal_51 = 3;
				}
				if (iLocal_52)
				{
					iLocal_51 = 3;
				}
				if (func_81())
				{
					iLocal_51 = 3;
				}
				if (bVar1 && func_80(Var3, Var2))
				{
					iLocal_51 = 3;
				}
				func_78();
				break;
			
			case 3:
				if (func_73())
				{
					iLocal_51++;
				}
				break;
			
			case 4:
				set_ped_flee_attributes(iLocal_48, 8, true);
				set_ped_flee_attributes(iLocal_48, 32, true);
				open_sequence_task(&iLocal_68);
				task_turn_ped_to_face_entity(0, player_ped_id(), 800);
				task_smart_flee_ped(0, player_ped_id(), 9999f, -1, true, false);
				close_sequence_task(iLocal_68);
				task_perform_sequence(iLocal_48, iLocal_68);
				clear_sequence_task(&iLocal_68);
				iLocal_51++;
				break;
			
			case 5:
				if (func_83(242628503))
				{
					iLocal_51 = 5;
				}
				if (!is_entity_on_screen(iLocal_48) && vdist2(Var2, get_entity_coords(player_ped_id(), false)) > 2500f)
				{
					iLocal_67 = start_shape_test_los_probe(Var3, Var2, 1, 0, 7);
					iLocal_51++;
				}
				break;
			
			case 6:
				if (func_83(242628503))
				{
					iLocal_51 = 5;
				}
				iVar13 = get_shape_test_result(iLocal_67, &iVar9, &uVar10, &uVar11, &uVar12);
				if (iVar13 == 2)
				{
					if (iVar9 == 1)
					{
						iLocal_51++;
					}
					else
					{
						iLocal_51 = (iLocal_51 - 1);
					}
				}
				else if (iVar13 == 0)
				{
					iLocal_51++;
				}
				break;
			
			case 7:
				delete_ped(&iLocal_48);
				break;
		}
	}
	else if (does_entity_exist(iLocal_48))
	{
		freeze_entity_position(iLocal_48, false);
	}
}

int func_73()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	Var0 = { -335.71f, -93.39f, 46f };
	Var1 = { -336.7188f, -93.5128f, 46f };
	switch (iLocal_56)
	{
		case 0:
			if (is_entity_playing_anim(iLocal_48, sLocal_62, sLocal_65, 3))
			{
				fLocal_54 = 0.349f;
				iLocal_55 = 900;
				Local_57 = { Var0 };
				iLocal_56 = 1;
			}
			else if (is_entity_playing_anim(iLocal_48, sLocal_62, sLocal_64, 3))
			{
				fLocal_54 = get_entity_anim_current_time(iLocal_48, sLocal_62, sLocal_64);
				fLocal_54 = func_77(fLocal_54, 0.2f, 0.349f);
				if (fLocal_54 != 0.2f)
				{
					fVar2 = ((1f / (0.349f - 0.161f)) * to_float(900));
					iLocal_55 = round(((fLocal_54 - 0.161f) * fVar2));
					Local_57 = { get_entity_coords(iLocal_48, false) - Vector(1f, 0f, 0f) };
					iLocal_56 = 1;
				}
				else
				{
					iLocal_56 = 3;
				}
			}
			else
			{
				iLocal_56 = 3;
			}
			break;
		
		case 1:
			freeze_entity_position(iLocal_48, true);
			task_play_anim(iLocal_48, sLocal_62, sLocal_64, 4f, -8f, -1, 0, fLocal_54, true, false, false);
			iLocal_69 = get_game_timer();
			func_76(&iLocal_53);
			func_75();
			if (does_entity_exist(iLocal_58[0]))
			{
				detach_entity(iLocal_58[0], true, true);
			}
			iLocal_56++;
			break;
		
		case 2:
			if (is_entity_playing_anim(iLocal_48, sLocal_62, sLocal_64, 3))
			{
				iVar3 = (get_game_timer() - iLocal_69);
				fVar4 = (to_float(iVar3) / to_float(iLocal_55));
				fVar5 = (fLocal_54 - ((fLocal_54 - 0.161f) * fVar4));
				fVar5 = func_77(fVar5, 0.161f, fLocal_54);
				set_entity_anim_current_time(iLocal_48, sLocal_62, sLocal_64, fVar5);
				fVar6 = (fVar4 - 0.12f);
				fVar6 = func_77(fVar6, 0f, 0.8f);
				Var7 = { func_74(Local_57, Var1, fVar6) };
				set_entity_coords(iLocal_48, Var7, false, true, false, true);
				if (fVar5 == 0.161f)
				{
					freeze_entity_position(iLocal_48, false);
					return 1;
				}
			}
			break;
		
		case 3:
			func_76(&iLocal_53);
			func_75();
			if (does_entity_exist(iLocal_58[0]))
			{
				detach_entity(iLocal_58[0], true, true);
			}
			return 1;
	}
	return 0;
}

Vector3 func_74(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

void func_75()
{
	if (iLocal_60 != 0)
	{
		stop_particle_fx_looped(iLocal_60, false);
		iLocal_60 = 0;
	}
}

void func_76(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

float func_77(float fParam0, float fParam1, float fParam2)
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

void func_78()
{
	float fVar0;
	
	if (is_entity_playing_anim(iLocal_48, sLocal_62, sLocal_64, 3))
	{
		fVar0 = get_entity_anim_current_time(iLocal_48, sLocal_62, sLocal_64);
		if (fVar0 < 0.383793f)
		{
			func_75();
		}
		else if (fVar0 < 0.612112f)
		{
			func_79();
		}
		else if (fVar0 < 1f)
		{
			func_75();
		}
	}
	else if (is_entity_playing_anim(iLocal_48, sLocal_62, sLocal_65, 3))
	{
		fVar0 = get_entity_anim_current_time(iLocal_48, sLocal_62, sLocal_65);
		if (fVar0 < 0.1124f)
		{
			func_75();
		}
		else if (fVar0 < 0.5566f)
		{
			func_79();
		}
		else if (fVar0 < 0.7546f)
		{
			func_75();
		}
		else if (fVar0 < 0.9f)
		{
			func_79();
		}
		else if (fVar0 < 1f)
		{
			func_75();
		}
	}
}

void func_79()
{
	if (iLocal_60 == 0)
	{
		iLocal_60 = start_particle_fx_looped_on_entity(sLocal_61, iLocal_58[0], Local_66, Local_66, 1f, false, false, false);
		set_particle_fx_looped_colour(iLocal_60, 1f, 1f, 1f, false);
		set_particle_fx_looped_alpha(iLocal_60, 0.2f);
	}
}

bool func_80(struct<3> Param0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = get_player_current_stealth_noise(player_id());
	fVar1 = func_77((fVar0 / 14f), 0f, 1f);
	fVar2 = vdist(Param0, Param1);
	fVar3 = (func_77((30f - fVar2), 0f, 30f) / 30f);
	fVar4 = (fVar1 * fVar3);
	return fVar4 > 0.25f;
}

bool func_81()
{
	return (is_entity_in_angled_area(player_ped_id(), -334.4651f, -93.42171f, 48.57328f, -332.2641f, -82.78552f, 45.8103f, 3f, false, true, 0) && !is_entity_in_angled_area(player_ped_id(), -329.1134f, -83.87273f, 45.79989f, -331.0937f, -88.05348f, 48.71878f, 3f, false, true, 0));
}

int func_82(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	
	if (does_entity_exist(iParam0) && does_entity_exist(iParam1))
	{
		fVar0 = (fParam2 * fParam2);
		return vdist2(get_entity_coords(iParam0, false), get_entity_coords(iParam1, false)) <= fVar0;
	}
	return 0;
}

int func_83(int iParam0)
{
	if (!func_84(iLocal_48, iParam0) && !func_84(iLocal_48, 1805844857))
	{
		func_76(&iLocal_53);
		task_smart_flee_ped(iLocal_48, player_ped_id(), 9999f, -1, true, false);
		return 1;
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_script_task_status(iParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}

void func_85(struct<3> Param0)
{
	if (func_89(Param0))
	{
		func_86(33);
	}
	else
	{
		func_150();
	}
	request_ptfx_asset();
}

void func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_88(iParam0);
	_0x65D2EBB47E1CEC21(false);
	set_random_event_flag(true);
	Global_113372 = 0;
	func_87();
}

void func_87()
{
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			set_vehicle_model_is_suppressed(get_entity_model(get_vehicle_ped_is_in(player_ped_id(), false)), true);
		}
		set_ped_config_flag(player_ped_id(), 32, false);
	}
}

void func_88(int iParam0)
{
	Global_113375 = iParam0;
}

int func_89(struct<3> Param0)
{
	if (func_95(Param0, 33, 0, 0, 0))
	{
		if (func_94(58))
		{
			if (func_91())
			{
				if (func_90())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_90()
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (network_is_signed_in())
	{
		if (network_has_valid_ros_credentials())
		{
			if (_network_get_ros_privilege_24())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (are_profile_settings_valid())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, 0);
					_set_has_content_unlocks_flags(iVar0);
				}
				return 1;
			}
		}
	}
	if (are_profile_settings_valid())
	{
		if (BitTest(get_profile_setting(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_91()
{
	return func_92(func_93(), 5);
}

int func_92(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

int func_93()
{
	int iVar0;
	
	iVar0 = get_entity_model(player_ped_id());
	switch (iVar0)
	{
		case joaat("player_zero"):
			return 21;
		
		case joaat("player_one"):
			return 22;
		
		case joaat("player_two"):
			return 23;
		
		default:
	}
	return -1;
}

int func_94(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_18574[iParam0 /*6*/], 3);
}

int func_95(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_90())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
		{
			Var1 = { get_entity_coords(player_ped_id(), true) };
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_149())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_4(0))
		{
			return 0;
		}
		if (func_145())
		{
			return 0;
		}
		if (func_144())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_22(func_143()))
		{
			if (func_137(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (is_player_playing(player_id()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_136(iParam1))
		{
			return 0;
		}
		if (func_22(func_143()))
		{
			if (func_135(func_143()) == 4 || func_135(func_143()) == 5)
			{
				return 0;
			}
		}
		if (func_22(func_143()))
		{
			if (!func_134(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_133(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((get_game_timer() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_131())
		{
			return 0;
		}
		if (get_mission_flag())
		{
			return 0;
		}
		if (get_random_event_flag())
		{
			return 0;
		}
		if (!func_121(4))
		{
			return 0;
		}
		if (!func_65(5))
		{
			return 0;
		}
		if (func_120(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (is_valid_interior(get_interior_from_entity(player_ped_id())))
		{
			if ((get_interior_from_entity(player_ped_id()) == get_interior_at_coords(377.153f, -717.567f, 10.0536f) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(320.9934f, 265.2515f, 82.1221f)) || get_interior_from_entity(player_ped_id()) == get_interior_at_coords(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_120(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_136(30) && !func_120(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_22(func_143()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_119(iVar4))
				{
					if (func_97(iVar2))
					{
						if (!func_96(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), false), Var3) < (210f * 210f))
							{
								if (func_143() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_96(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

int func_98(int iParam0)
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_119(iParam0))
	{
		return 0;
	}
	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_107(iParam0) - func_107(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_104(iParam0) - func_104(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_107(iParam1) - func_107(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_104(iParam1) - func_104(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_102(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_102(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_103(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_104(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_105(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_106(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_107(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_108(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_109(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 15;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_119(iParam1) || !func_119(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	var uVar0;
	
	func_118(&uVar0, get_clock_seconds());
	func_117(&uVar0, get_clock_minutes());
	func_116(&uVar0, get_clock_hours());
	func_115(&uVar0, get_clock_day_of_month());
	func_114(&uVar0, get_clock_month());
	func_113(&uVar0, get_clock_year());
	return uVar0;
}

void func_113(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_143();
				if (!func_22(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_130()) || Global_112433) || Global_31962) || func_129()) || func_128(8, -1)) || func_127()) || func_126()) || func_125()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), true) || func_130()) || Global_31962) || func_129()) || func_128(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_130()) || Global_112433) || Global_31962) || func_129()) || func_128(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_ped_in_combat(player_ped_id(), 0)) || func_130()) || Global_112433) || Global_31962) || func_129()) || func_128(8, -1)) || func_127()) || func_126()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_130() || get_player_wanted_level(player_id()) > 0) || func_128(8, -1)) || func_124()) || func_123()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_128(8, -1) || func_127()) || func_126()) || func_123()) || func_122())
						{
							return 0;
						}
						if ((is_player_switch_in_progress() && get_player_switch_type() != 3) && get_player_switch_state() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (does_entity_exist(player_ped_id()))
						{
							if ((((((((((((((is_ped_in_combat(player_ped_id(), 0) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_130()) || Global_31962) || func_129()) || func_128(8, -1)) || func_126()) || func_125()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || func_130()) || func_126()) || Global_112433) || Global_31962) || func_129()) || Global_44238) || func_128(8, -1)) || func_125()) || func_123()) || func_124()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), true)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_130()) || Global_112433) || Global_31962) || func_129()) || func_128(8, -1)) || func_125()) || func_123()) || func_127()) || func_126()) || func_124())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_122()
{
	return Global_100480.f_1;
}

int func_123()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_124()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
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

bool func_126()
{
	return Global_100493.f_376 > 0;
}

bool func_127()
{
	return Global_100493.f_375 > 0;
}

var func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

var func_129()
{
	return Global_1575058;
}

int func_130()
{
	if (!network_is_game_in_progress())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_131()
{
	func_132();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_132()
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
		Global_20266 = func_143();
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

bool func_133(int iParam0)
{
	return func_111(func_112(), iParam0);
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_143();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_135(int iParam0)
{
	if (!func_22(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_90())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_137(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (is_player_playing(player_id()))
	{
		if (func_22(func_143()))
		{
			iVar5 = func_19();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_138(iVar1, &Var0);
					fVar4 = get_distance_between_coords(get_entity_coords(player_ped_id(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_138(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
		
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
		
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
		
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
		
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
		
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
		
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
		
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
		
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_139(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_141(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_142(iParam0) };
	if (is_string_null_or_empty(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_142(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_143()
{
	func_20();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_144()
{
	int iVar0;
	
	if (Global_32110)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (is_vehicle_driveable(iVar0, false))
			{
				if (!is_ped_injured(get_ped_in_vehicle_seat(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_145()
{
	if (func_148() && !func_149())
	{
		return 1;
	}
	if (func_147() && func_146())
	{
		return 1;
	}
	return 0;
}

bool func_146()
{
	return Global_113104 > 0;
}

int func_147()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_149()
{
	if (is_pc_version())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_150()
{
	remove_ptfx_asset();
	func_76(&iLocal_53);
	func_151(-1);
	terminate_this_thread();
}

void func_151(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_162())
	{
		func_155(iParam0);
		set_mission_name(false, 0);
		Global_113377 = get_game_timer();
		func_154(30000);
		StringCopy(&cVar0, func_153(Global_113375, 1), 64);
		if (func_28(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		playstats_random_mission_done(&cVar0, Global_113372, (get_game_timer() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		clear_bit(&Global_113382, 0);
	}
	func_152(&Global_32019);
	Global_113376 = 0;
	func_88(-1);
}

void func_152(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

char* func_153(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_154(int iParam0)
{
	Global_43603 = (get_game_timer() + iParam0);
}

void func_155(int iParam0)
{
	func_156(iParam0, 0, func_161(iParam0));
}

void func_156(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_112();
	func_159(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_158(iParam0, &uVar0);
	Var1 = { func_157(&uVar0) };
}

struct<16> func_157(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_106(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_105(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_104(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

void func_158(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_160(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_161(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_162()
{
	if ((Global_113375 == func_29() && get_random_event_flag()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

