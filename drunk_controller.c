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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	network_set_script_is_safe_for_network_game();
	if (has_force_cleanup_occurred(32))
	{
		func_32();
	}
	while (true)
	{
		wait(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_32();
		}
	}
}

int func_1()
{
	if (Global_44203)
	{
		return 1;
	}
	if (does_cam_exist(Global_44204))
	{
		return 1;
	}
	if (_get_number_of_references_of_script_with_name_hash(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_43996 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_44203)
	{
		return;
	}
	iVar1 = get_game_timer();
	if (Global_44205 > iVar1 || Global_44205 == -1)
	{
		if (is_player_switch_in_progress())
		{
			return;
		}
		iVar2 = func_14();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_9();
		if (Global_44208 != Global_44209)
		{
			fVar6 = (Global_44209 - Global_44208);
			Global_44208 = (Global_44208 + (fVar6 * 0.1f));
			if (absf((Global_44208 - Global_44209)) < 0.01f)
			{
				Global_44208 = Global_44209;
			}
		}
		if (!is_gameplay_cam_shaking() && !func_8(player_id()))
		{
			shake_gameplay_cam("DRUNK_SHAKE", ((Global_44208 * fVar3) * fVar5));
		}
		if ((get_game_timer() % 100) == 0)
		{
			if (Global_44205 == -1)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				set_gameplay_cam_shake_amplitude(((Global_44208 * fVar3) * fVar5));
				_0x487A82C650EB7799(((Global_44207 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_44207 * fVar3) * fVar5) < 1f)
		{
			_0x0225778816FDC28C(((Global_44207 * fVar3) * fVar5));
		}
		else
		{
			_0x0225778816FDC28C(1f);
		}
		if (!is_cinematic_cam_shaking())
		{
			shake_cinematic_cam("DRUNK_SHAKE", (((Global_44208 * Global_44202) * fVar3) * fVar5));
		}
		set_cinematic_cam_shake_amplitude((((Global_44208 * Global_44202) * fVar3) * fVar5));
		if (does_cam_exist(Global_44204))
		{
			if (is_cam_shaking(Global_44204))
			{
				set_cam_shake_amplitude(Global_44204, ((Global_44208 * fVar3) * fVar5));
			}
		}
		if (!is_string_null_or_empty(&Global_44232) && !is_string_null_or_empty(&Global_44216))
		{
			start_audio_scene(&Global_44216);
			StringCopy(&Global_44232, "", 16);
		}
		invalidate_idle_cam();
		if (Global_44211 > 0f)
		{
			if (fLocal_16 != Global_44211)
			{
				if (get_timecycle_transition_modifier_index() != -1)
				{
				}
				else if (!_0x98D18905BF723B99())
				{
					set_transition_timecycle_modifier(&Global_44212, 15f);
					fLocal_16 = Global_44211;
					if (Global_44210 != 1f)
					{
						set_timecycle_modifier_strength(Global_44210);
					}
				}
			}
			else
			{
				if (get_timecycle_transition_modifier_index() != -1 && get_timecycle_modifier_index() != -1)
				{
					fLocal_16 = -99f;
				}
				set_audio_special_effect_mode(2);
				iVar7 = (Global_44205 - iVar1);
				if (iVar7 <= (Global_44206 / 2) && Global_44205 != -1)
				{
					bVar8 = false;
					if (is_player_playing(player_id()))
					{
						if (is_any_speech_playing(player_ped_id()))
						{
							bVar8 = true;
						}
					}
					if (func_6(player_ped_id()))
					{
						Global_44205 += 1000;
					}
					else if (bVar8)
					{
						Global_44205 += 1000;
					}
					else if (get_timecycle_transition_modifier_index() != -1)
					{
						Global_44205 += 1000;
					}
					else if (func_5())
					{
						Global_44205 += 1000;
					}
					else
					{
						if (get_timecycle_modifier_index() != -1)
						{
							_set_transition_timecycle_modifier_stop_with_blend((to_float((Global_44206 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_44211 = 0f;
						StringCopy(&Global_44212, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
{
	_0x487A82C650EB7799(0f);
	_0x0225778816FDC28C(0f);
	set_gameplay_cam_shake_amplitude(0f);
	stop_gameplay_cam_shaking(true);
	set_cinematic_cam_shake_amplitude(0f);
	stop_cinematic_cam_shaking(true);
	set_audio_special_effect_mode(0);
	if (is_audio_scene_active("SAFEHOUSE_STONED_MICHAEL"))
	{
		stop_audio_scene("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!is_string_null_or_empty(&Global_44216))
	{
		if (is_audio_scene_active(&Global_44216))
		{
			stop_audio_scene(&Global_44216);
		}
	}
	if (does_cam_exist(Global_44204))
	{
		if (is_cam_shaking(Global_44204))
		{
			set_cam_shake_amplitude(Global_44204, 0f);
			stop_cam_shaking(Global_44204, true);
		}
	}
	if (is_script_global_shaking())
	{
		stop_script_global_shaking(false);
	}
	if (bParam0)
	{
		if (get_timecycle_modifier_index() != -1 || get_timecycle_transition_modifier_index() != -1)
		{
			clear_timecycle_modifier();
		}
		else if (is_player_switch_in_progress())
		{
			clear_timecycle_modifier();
		}
	}
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
	StringCopy(&Global_44216, "", 64);
	StringCopy(&Global_44232, "", 16);
	func_4();
}

void func_4()
{
	Global_44203 = 0;
	Global_44204 = 0;
	Global_44205 = 0;
	Global_44206 = 30000;
	Global_44207 = 0f;
	Global_44209 = 0f;
	Global_44208 = 0f;
	Global_44210 = 1f;
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
}

bool func_5()
{
	return Global_2789734;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_8(int iParam0)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 13);
}

float func_9()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_13(player_ped_id());
	iVar2 = func_10(player_ped_id());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (to_float(iVar1) / to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (to_float(iVar2) / to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_4;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_3;
}

float func_14()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = get_game_timer();
	fVar1 = 1f;
	iVar2 = (Global_44205 - iVar0);
	if (iVar2 <= Global_44206)
	{
		if (Global_44205 != -1)
		{
			fVar1 = (to_float(iVar2) / to_float(Global_44206));
		}
	}
	return fVar1;
}

void func_15()
{
	if (Global_43998[iLocal_15 /*5*/] == 0)
	{
		func_16(iLocal_15);
	}
}

void func_16(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (is_entity_dead(Global_43998[iParam0 /*5*/].f_1, false))
	{
		func_19(iParam0);
		return;
	}
	if (func_6(Global_43998[iParam0 /*5*/].f_1))
	{
		func_19(iParam0);
		return;
	}
	if (!has_script_loaded("drunk"))
	{
		request_script("drunk");
		return;
	}
	iVar0 = func_18();
	if (iVar0 == -1)
	{
		func_19(iParam0);
		return;
	}
	Global_44024[iVar0 /*5*/] = func_17();
	Global_44024[iVar0 /*5*/].f_1 = Global_43998[iParam0 /*5*/].f_1;
	Global_44024[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_43998[iParam0 /*5*/] };
	start_new_script_with_args("drunk", &Var1, 5, 1424);
	set_script_as_no_longer_needed("drunk");
	func_19(iParam0);
}

var func_17()
{
	var uVar0;
	
	uVar0 = Global_43995;
	Global_43995++;
	return uVar0;
}

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == player_ped_id())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

void func_20()
{
	if (!Global_44105[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_44105[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}
}

void func_21(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44105[iParam0 /*6*/] = -1;
	Global_44105[iParam0 /*6*/].f_1 = -1;
	Global_44105[iParam0 /*6*/].f_2 = 6;
	Global_44105[iParam0 /*6*/].f_3 = 0;
	Global_44105[iParam0 /*6*/].f_4 = 0;
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_44105[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_44024[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_29(Global_44024[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_24(Global_44024[iLocal_14 /*5*/]);
		}
		else
		{
			func_21(iVar0);
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	func_27(iParam0);
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_25(iVar0);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44024[iParam0 /*5*/] = -1;
	Global_44024[iParam0 /*5*/].f_1 = 0;
	Global_44024[iParam0 /*5*/].f_2 = -1;
	Global_44024[iParam0 /*5*/].f_3 = 0;
	Global_44024[iParam0 /*5*/].f_4 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44024[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0)
{
	func_31(iParam0);
	func_28(iParam0);
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44105[iVar0 /*6*/].f_1)
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30()
{
	if (Global_44105[iLocal_13 /*6*/] == 1)
	{
		Global_44105[iLocal_13 /*6*/] = 0;
	}
}

void func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44105[iVar0 /*6*/])
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_33();
	if (!iLocal_12)
	{
		func_3(1);
	}
	terminate_this_thread();
}

void func_33()
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_44237 = 0;
	Global_44236 = 0;
	Global_43996 = 0;
	terminate_all_scripts_with_this_name("drunk");
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_21(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_25(iVar0);
		iVar0++;
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_19(iVar0);
		iVar0++;
	}
}

