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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[30];
	int iLocal_49 = 0;
	int* iLocal_50 = NULL;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56[4] = { 0, 0, 0, 0 };
	float fLocal_57[4] = { 0f, 0f, 0f, 0f };
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_51 = -1;
	iLocal_61 = 1;
	iLocal_63 = get_sound_id();
	if (has_force_cleanup_occurred(210))
	{
		func_75(1);
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("ambient_diving")) > 1)
	{
		terminate_this_thread();
	}
	func_74(27);
	while (true)
	{
		wait(0);
		if (func_71(0))
		{
			if (!iLocal_67)
			{
				func_75(0);
				iLocal_67 = 1;
			}
		}
		else
		{
			iLocal_67 = 0;
			func_70(player_ped_id());
			switch (iLocal_49)
			{
				case 0:
					func_65();
					break;
				
				case 1:
					func_62();
					func_53();
					func_1();
					break;
				
				case 2:
					func_53();
					break;
				
				case 3:
					func_75(1);
					break;
				}
		}
	}
}

void func_1()
{
	if (func_18(&Local_42, &Local_48) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_62)
			{
				bLocal_62 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)
{
	iLocal_49 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	bool bVar1;
	
	if (func_7(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
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
	if (iParam4 < 3)
	{
		if (iParam4 != bParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_113386.f_7688.f_911 == Var0.f_0)
		{
			Global_113386.f_7688.f_911 = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (get_game_timer() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = bParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		clear_bit(&(Var0.f_1), true);
		clear_bit(&(Var0.f_1), false);
		if (iParam7 != -1)
		{
			set_bit(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			set_bit(&(Var0.f_1), 10);
		}
		Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/] = { Var0 };
		Global_113386.f_7688.f_136++;
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (BitTest(iParam2, bVar1))
			{
				func_4(bVar1);
			}
			bVar1++;
		}
		return 1;
	}
	return 0;
}

void func_4(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(bParam0))
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

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

int func_6(int iParam0)
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

int func_7(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_8(int iParam0, int iParam1, int iParam2)
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
		func_13((891 + iParam0), 1, -1);
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
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
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
		func_9();
	}
}

void func_9()
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
		func_12(13, floor(Global_113386.f_10194.f_3853));
	}
	if (!datafile_is_save_pending())
	{
		if (!Global_78319)
		{
			if (func_11() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()
{
	if (func_7(0))
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

int func_11()
{
	return Global_31959;
}

int func_12(int iParam0, int iParam1)
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

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

int func_14()
{
	return Global_1574918;
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		Global_113386.f_14051.f_89 = 1;
	}
	else
	{
		Global_113386.f_14051.f_89 = 0;
	}
}

int func_16()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	
	is_ped_injured(player_ped_id());
	Var2 = { get_entity_coords(player_ped_id(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_52(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!func_51((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_49(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_49(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_34(uParam0, iParam1, Var2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_78579)
		{
			func_26(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_52, &iLocal_50, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			Var3 = { get_entity_coords(player_ped_id(), true) };
			if (func_24(&Local_42, &Local_48, Var3, &iVar4))
			{
				if (get_distance_between_coords(func_23(iVar4), Var3, false) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_62)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_62 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_19(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		set_bit(&(Global_113386.f_20410.f_150[iVar1]), bVar0);
	}
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_22();
	}
}

void func_22()
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

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_52(&(uParam0->f_1), iVar0))
		{
			fVar1 = vdist2(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

int func_25(int iParam0)
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

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_33(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = request_scaleform_movie("MIDSIZED_MESSAGE");
				if (has_scaleform_movie_loaded(*iParam5))
				{
					iVar0 = get_sound_id();
					if (iParam3 == 6)
					{
						play_sound_frontend(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						play_sound_frontend(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				begin_scaleform_movie_method(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				begin_text_command_scaleform_string(sParam6);
				end_text_command_scaleform_string();
				begin_text_command_scaleform_string(sParam7);
				add_text_component_integer(func_28(iParam3));
				end_text_command_scaleform_string();
				end_scaleform_movie_method();
				*uParam2 = get_game_timer();
				*iParam4++;
				break;
			
			case 2:
				if ((get_game_timer() - *uParam2) > 7000)
				{
					begin_scaleform_movie_method(*iParam5, "SHARD_ANIM_OUT");
					scaleform_movie_method_add_param_int(1);
					scaleform_movie_method_add_param_float(0.33f);
					end_scaleform_movie_method();
					*iParam4++;
				}
				else if (!func_27())
				{
					if (has_scaleform_movie_loaded(*iParam5))
					{
						func_33(1);
						draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((get_game_timer() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (has_scaleform_movie_loaded(*iParam5))
					{
						func_33(1);
						draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (has_scaleform_movie_loaded(*iParam5))
				{
					set_scaleform_movie_as_no_longer_needed(iParam5);
				}
				func_33(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_27()
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

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_32(iParam0))
		{
			if (BitTest(Global_113386.f_10049.f_108, func_31(func_32(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		stat_get_int(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		stat_get_int(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		stat_get_int(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_32(iParam0))
		{
			iVar2 = (func_30(iParam0) + iVar1);
			if (func_29(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_29(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	return _get_packed_stat_bool(iParam0, iParam1);
}

int func_30(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_32(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_33(int iParam0)
{
	if (Global_78586 != iParam0)
	{
		Global_78586 = iParam0;
	}
}

int func_34(var uParam0, var uParam1, struct<3> Param2)
{
	bool bVar0;
	
	bVar0 = uParam0->f_10;
	if ((uParam1[bVar0 /*11*/])->f_10)
	{
		if ((uParam1[bVar0 /*11*/])->f_1 != 0)
		{
			if (has_pickup_been_collected((uParam1[bVar0 /*11*/])->f_1) || func_47((uParam1[bVar0 /*11*/])->f_1))
			{
				func_37(uParam0, uParam1, bVar0);
				return 1;
			}
		}
	}
	if (does_pickup_exist((uParam1[bVar0 /*11*/])->f_1))
	{
		if ((vdist2(Param2, get_pickup_coords((uParam1[bVar0 /*11*/])->f_1)) > (60f * 60f) || func_36(13)) || func_36(14))
		{
			func_35(&((uParam1[bVar0 /*11*/])->f_1));
			(uParam1[bVar0 /*11*/])->f_1 = 0;
			(uParam1[bVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_35(var uParam0)
{
	if (does_pickup_exist(*uParam0))
	{
		remove_pickup(*uParam0);
	}
}

bool func_36(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_37(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = (func_30(*uParam0) + bParam2);
	func_35(&((uParam1[bParam2 /*11*/])->f_1));
	func_46(&((uParam1[bParam2 /*11*/])->f_2));
	(uParam1[bParam2 /*11*/])->f_1 = 0;
	(uParam1[bParam2 /*11*/])->f_10 = 0;
	func_45(&(uParam0->f_1), bParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_44(*uParam0, bParam2, 1);
	}
	set_pad_shake(0, 200, 250);
	stat_increment(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_43(&(uParam0->f_1), bParam2);
	}
	else
	{
		func_41(&(uParam0->f_1));
	}
	func_39();
	playstats_acquired_hidden_package(iVar0);
	func_38(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

void func_38(int iParam0, int iParam1)
{
	Global_100480.f_7 = iParam0;
	Global_100480.f_8 = iParam1;
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	stat_get_int(func_40(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	stat_get_int(func_40(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	stat_get_int(func_40(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = ((func_32(0) + func_32(1)) + func_32(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	stat_set_int(joaat("percent_hidden_packages"), iVar3, true);
}

int func_40(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_52(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 1, -1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_42(168, 0);
	}
}

void func_42(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113386.f_8613[iParam0] = 1;
	Global_113386.f_8613.f_236[iParam0] = (get_game_timer() + iParam1);
}

void func_43(var uParam0, bool bParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (bParam1 >= uParam0->f_3)
	{
	}
	if (func_52(uParam0, bParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + bParam1), 1, -1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_42(168, 0);
	}
}

void func_44(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				set_bit(&(Global_113386.f_10049.f_122), bParam1);
			}
			else
			{
				clear_bit(&(Global_113386.f_10049.f_122), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			set_bit(&(Global_113386.f_10049.f_122.f_1), (bParam1 - 32));
		}
		else
		{
			clear_bit(&(Global_113386.f_10049.f_122.f_1), (bParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (bParam1 <= 31)
		{
			if (bParam2)
			{
				set_bit(&(Global_113386.f_10049.f_125), bParam1);
			}
			else
			{
				clear_bit(&(Global_113386.f_10049.f_125), bParam1);
			}
			return;
		}
		if (bParam2)
		{
			set_bit(&(Global_113386.f_10049.f_125.f_1), (bParam1 - 32));
		}
		else
		{
			clear_bit(&(Global_113386.f_10049.f_125.f_1), (bParam1 - 32));
		}
	}
}

void func_45(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 < 0 || bParam1 >= 64)
	{
		return;
	}
	if (bParam1 <= 31)
	{
		if (bParam2)
		{
			set_bit(iParam0, bParam1);
		}
		else
		{
			clear_bit(iParam0, bParam1);
		}
		return;
	}
	if (bParam2)
	{
		set_bit(&(iParam0->f_1), (bParam1 - 32));
	}
	else
	{
		clear_bit(&(iParam0->f_1), (bParam1 - 32));
	}
}

void func_46(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	if (func_48(player_ped_id()))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
			iVar1 = get_entity_model(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (vdist2(get_entity_coords(player_ped_id(), true), get_pickup_coords(iParam0)) < (5f * 5f) || is_entity_touching_entity(player_ped_id(), get_pickup_object(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_48(int iParam0)
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

void func_49(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!func_36(13) && !func_36(14))
			{
				if (!does_pickup_exist(uParam0->f_1))
				{
					if (vdist2(get_entity_coords(player_ped_id(), true), uParam0->f_3) <= (50f * 50f))
					{
						request_model(iParam1);
						while (!has_model_loaded(iParam1))
						{
							request_model(iParam1);
							wait(0);
						}
						if (bParam3)
						{
							func_50(uParam0->f_3);
						}
						clear_area(uParam0->f_3, 2.5f, false, false, false, false);
						if (bParam4)
						{
							set_bit(&iVar0, true);
							uParam0->f_1 = create_pickup_rotate(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, true, iParam1);
						}
						else
						{
							set_bit(&iVar0, 3);
							set_bit(&iVar0, 4);
							set_bit(&iVar0, 8);
							set_bit(&iVar0, true);
							uParam0->f_1 = create_pickup(iParam2, uParam0->f_3, iVar0, -1, true, iParam1);
						}
						set_model_as_no_longer_needed(iParam1);
					}
				}
			}
			if (does_pickup_exist(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_50(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = get_interior_at_coords(Param0);
	if (is_valid_interior(iVar0))
	{
		pin_interior_in_memory(iVar0);
		while (!is_interior_ready(iVar0))
		{
			wait(0);
		}
		wait(0);
		unpin_interior(iVar0);
	}
}

bool func_51(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return BitTest(*uParam0, iParam1);
	}
	return BitTest(uParam0->f_1, (iParam1 - 32));
}

void func_53()
{
	float fVar0;
	
	switch (iLocal_66)
	{
		case 0:
			if (func_60())
			{
				if (func_48(iLocal_64))
				{
					func_59();
					set_boat_anchor(iLocal_64, false);
					iLocal_66 = 1;
					if (iLocal_49 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_48(iLocal_64) && func_48(player_ped_id()))
			{
				if (is_entity_in_water(player_ped_id()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_58(player_ped_id(), iLocal_64, 0) > fVar0)
				{
					func_57();
					if (iLocal_49 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_59();
				if (iLocal_49 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_49 == 2)
			{
				func_2(3);
			}
			if (!func_60())
			{
				if (func_48(iLocal_64))
				{
					if (!does_blip_exist(iLocal_65))
					{
						iLocal_65 = func_54(iLocal_64, 0, 0);
					}
					set_vehicle_engine_on(iLocal_64, false, true, false);
					if (is_this_model_a_boat(get_entity_model(iLocal_64)))
					{
						if (!has_entity_collided_with_anything(iLocal_64))
						{
							set_boat_anchor(iLocal_64, true);
						}
					}
					iLocal_66 = 0;
				}
			}
			break;
	}
}

int func_54(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(iParam0, !bParam1, bParam2);
}

int func_55(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_56(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_56(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_56(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_56(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_57()
{
	func_59();
	if (func_48(iLocal_64))
	{
		if (is_this_model_a_boat(get_entity_model(iLocal_64)))
		{
			set_boat_anchor(iLocal_64, false);
		}
		set_entity_records_collisions(iLocal_64, false);
		if (is_entity_a_mission_entity(iLocal_64))
		{
			set_vehicle_as_no_longer_needed(&iLocal_64);
		}
	}
}

float func_58(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!is_entity_dead(iParam0, false))
	{
		Var0 = { get_entity_coords(iParam0, true) };
	}
	else
	{
		Var0 = { get_entity_coords(iParam0, false) };
	}
	if (!is_entity_dead(iParam1, false))
	{
		Var1 = { get_entity_coords(iParam1, true) };
	}
	else
	{
		Var1 = { get_entity_coords(iParam1, false) };
	}
	return get_distance_between_coords(Var0, Var1, bParam2);
}

void func_59()
{
	if (does_blip_exist(iLocal_65))
	{
		remove_blip(&iLocal_65);
	}
}

int func_60()
{
	if (func_48(player_ped_id()))
	{
		if (func_48(iLocal_64))
		{
			if (is_ped_in_vehicle(player_ped_id(), iLocal_64, false))
			{
				return 1;
			}
		}
		else if (func_61())
		{
			iLocal_64 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (does_entity_exist(iLocal_64))
			{
				set_entity_as_mission_entity(iLocal_64, true, true);
				set_entity_records_collisions(iLocal_64, true);
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (does_entity_exist(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("dinghy") || get_entity_model(iVar0) == joaat("dinghy2"))
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

void func_62()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	Var0 = { get_entity_coords(player_ped_id(), true) };
	if (func_24(&Local_42, &Local_48, Var0, &iLocal_51))
	{
		Var1 = { func_23(iLocal_51) };
		fVar2 = get_distance_between_coords(Var1, Var0, false);
		if (fVar2 > 200f)
		{
			func_64();
			if (!iLocal_61)
			{
				iLocal_61 = 1;
			}
			if (func_61())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_51 != iLocal_54)
				{
					if (does_blip_exist(iLocal_53))
					{
						remove_blip(&iLocal_53);
					}
				}
				if (!does_blip_exist(iLocal_53))
				{
					iLocal_53 = add_blip_for_radius(Var1, 200f);
					set_blip_alpha(iLocal_53, 128);
					set_blip_colour(iLocal_53, 2);
					set_blip_hidden_on_legend(iLocal_53, false);
					set_blip_name_from_text_file(iLocal_53, "B_WRE");
					show_height_on_blip(iLocal_53, false);
					iLocal_54 = iLocal_51;
				}
			}
			else if (does_blip_exist(iLocal_53))
			{
				remove_blip(&iLocal_53);
			}
		}
		else
		{
			if (func_61())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (is_entity_in_water(player_ped_id()) && !is_ped_swimming_under_water(player_ped_id()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (does_blip_exist(iLocal_53))
			{
				remove_blip(&iLocal_53);
			}
			if (iLocal_51 != iLocal_54)
			{
				func_64();
				iLocal_54 = iLocal_51;
				iLocal_61 = 1;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3)
			{
				if (iLocal_61)
				{
					fLocal_58 = 0f;
					fLocal_59 = fVar2;
					if (func_61())
					{
						fLocal_59 = func_63(fLocal_59, 20f, 200f);
					}
					else
					{
						fLocal_59 = func_63(fLocal_59, 10f, 200f);
					}
					fLocal_60 = (fLocal_59 * 0.025f);
					iLocal_61 = 0;
					if (func_61())
					{
						play_sound_from_coord(iLocal_63, "SINGLE_BLIP_FROM_BOAT", Var1, "ABIGAIL_SONAR_SOUNDSET", false, 0, false);
					}
					else
					{
						play_sound_from_coord(iLocal_63, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", false, 0, false);
					}
				}
				else
				{
					fLocal_58 = (fLocal_58 + fLocal_60);
					fLocal_58 = func_63(fLocal_58, 0f, fLocal_59);
					if (!does_blip_exist(iLocal_55))
					{
						iLocal_55 = add_blip_for_radius(Var1, fLocal_58);
						set_blip_alpha(iLocal_55, 255);
						set_blip_colour(iLocal_55, 4);
						set_blip_as_short_range(iLocal_55, true);
						set_radius_blip_edge(iLocal_55, true);
						show_height_on_blip(iLocal_55, false);
					}
					else
					{
						set_blip_scale(iLocal_55, fLocal_58);
					}
					iVar3 = 0;
					if (func_61())
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (!does_blip_exist(iLocal_56[iVar3]))
							{
								iLocal_56[iVar3] = add_blip_for_radius(Var1, (fLocal_58 + fLocal_57[iVar3]));
								set_blip_alpha(iLocal_56[iVar3], 255);
								set_blip_colour(iLocal_56[iVar3], 4);
								set_blip_as_short_range(iLocal_56[iVar3], true);
								set_radius_blip_edge(iLocal_56[iVar3], true);
								show_height_on_blip(iLocal_56[iVar3], false);
							}
							else
							{
								set_blip_scale(iLocal_56[iVar3], (fLocal_58 + fLocal_57[iVar3]));
							}
							iVar3++;
						}
					}
					else
					{
						iVar3 = 0;
						while (iVar3 <= 3)
						{
							if (does_blip_exist(iLocal_56[iVar3]))
							{
								set_blip_scale(iLocal_56[iVar3], fLocal_58);
							}
							iVar3++;
						}
					}
					if (fLocal_58 >= fLocal_59)
					{
						iLocal_61 = 1;
					}
				}
			}
			else
			{
				func_64();
			}
		}
	}
}

float func_63(float fParam0, float fParam1, float fParam2)
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

void func_64()
{
	int iVar0;
	
	if (does_blip_exist(iLocal_55))
	{
		remove_blip(&iLocal_55);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (does_blip_exist(iLocal_56[iVar0]))
		{
			remove_blip(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
}

void func_65()
{
	iLocal_52 = 0;
	if (func_60())
	{
		iLocal_66 = 1;
	}
	else
	{
		iLocal_66 = 0;
	}
	func_69();
	func_68(&Local_42, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_66(&Local_42, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_57[0] = 0.25f;
	fLocal_57[1] = 0.5f;
	fLocal_57[2] = 0.75f;
	fLocal_57[3] = 1f;
}

void func_66(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_67(&(uParam0->f_1), iParam2, iParam3);
}

void func_67(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	bVar0 = false;
	while (bVar0 < iParam0->f_3)
	{
		if (func_29((iParam0->f_2 + bVar0), -1))
		{
			iVar1++;
			func_45(iParam0, bVar0, 1);
			if (bLocal_40)
			{
			}
		}
		bVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_68(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_48[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_48[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_48[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_48[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_48[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_48[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_48[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_48[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_48[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_48[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_48[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_48[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_48[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_48[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_48[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_48[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_48[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_48[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_48[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_48[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_48[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_48[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_48[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_48[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_48[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_48[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_48[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_48[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_48[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_48[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_48[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_48[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

bool func_70(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	return !is_entity_dead(iParam0, false);
}

int func_71(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_72(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, Global_43052);
}

int func_73(int iParam0, int iParam1)
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

int func_74(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	set_bit(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_75(bool bParam0)
{
	int iVar0;
	
	if (does_blip_exist(iLocal_53))
	{
		remove_blip(&iLocal_53);
	}
	func_64();
	if (!has_sound_finished(iLocal_63))
	{
		stop_sound(iLocal_63);
	}
	func_57();
	iVar0 = 0;
	while (iVar0 < Local_48.f_0)
	{
		func_46(&(Local_48[iVar0 /*11*/].f_2));
		func_35(&(Local_48[iVar0 /*11*/].f_1));
		Local_48[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_77(&(Local_42.f_1)) || func_17(110) == 1)
		{
			func_76(27);
		}
		set_model_as_no_longer_needed(Local_42.f_7);
		terminate_this_thread();
	}
	else
	{
		iLocal_49 = 0;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113386.f_9085.f_99.f_219[iVar0], bVar1))
	{
		clear_bit(&(Global_113386.f_9085.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

bool func_77(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

