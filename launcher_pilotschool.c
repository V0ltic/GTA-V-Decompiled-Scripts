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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	bool bLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<2> Local_88 = { 0, 5 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 5;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	Local_56 = { ScriptParam_88.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (has_force_cleanup_occurred(82))
	{
		func_92(1);
	}
	iLocal_53 = get_player_ped(player_id());
	iLocal_59 = 0;
	func_90(&Global_112037, 0);
	func_89();
	if (func_88(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_38391)
	{
		wait(0);
	}
	if (!func_88(uLocal_58, 8))
	{
		if (!func_86(iLocal_64))
		{
			if (func_85(0, iLocal_63))
			{
				func_92(0);
			}
			else
			{
				func_92(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_85(0, iLocal_63))
		{
			func_92(1);
		}
	}
	if (func_88(uLocal_58, 8388608))
	{
		func_92(1);
	}
	if (func_88(uLocal_58, 524288) && (func_84() && !func_83()))
	{
		func_92(1);
	}
	if (_get_number_of_references_of_script_with_name_hash(get_hash_of_this_script_name()) > 1 && !func_88(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_82(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_81(10);
	}
	while (true)
	{
		if (!func_88(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (get_ground_z_for_3d_coord(ScriptParam_88.f_1[0 /*3*/], &fVar1, false, false))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_88.f_1[0 /*3*/].f_2 = fVar1;
					func_80(&uLocal_58, 268435456);
				}
			}
		}
		iLocal_53 = get_player_ped(player_id());
		if (func_88(uLocal_58, 1048576))
		{
			if (is_entity_dead(iLocal_53, false))
			{
				func_92(1);
			}
		}
		if (does_entity_exist(iLocal_53) && !is_entity_dead(iLocal_53, false))
		{
			Local_55 = { get_entity_coords(iLocal_53, true) };
			fLocal_57 = vdist2(Local_55, ScriptParam_88.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_88.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = vdist2(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_86(iLocal_64) || (func_88(uLocal_58, 16) && !func_88(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_79();
						func_81(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_82(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_81(10);
						}
						if ((Local_55.f_2 - ScriptParam_88.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78() && fLocal_57 > ((fLocal_77 * 1.5f) * (fLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						func_81(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (network_is_in_session())
					{
						func_92(1);
						return;
					}
					if (!func_86(iLocal_64))
					{
						if (!func_88(uLocal_58, 8))
						{
							bVar2 = true;
							if (are_strings_equal(&(Global_100441.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_92(0);
								break;
							}
						}
					}
					if (!func_88(uLocal_58, 4))
					{
						func_77();
						func_80(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100475)
					{
						if (iLocal_69 != 263)
						{
							if (func_76(6) && !func_75(iLocal_69))
							{
							}
							else
							{
								func_82(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_81(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_88(uLocal_58, 64);
						func_90(&uLocal_58, 128);
						if (!func_74(3) && !Global_100475)
						{
							if (func_88(uLocal_58, 2097152))
							{
								if ((!func_88(uLocal_58, 1) || !does_entity_exist(func_73())) && !Global_100475)
								{
									func_81(10);
									break;
								}
							}
						}
						if (func_88(uLocal_58, 524288) && (func_84() && !func_83()))
						{
							func_92(1);
						}
						if (func_72())
						{
							func_92(1);
						}
						if ((!func_58(6) || Global_112433) || func_57())
						{
							bVar3 = false;
						}
						if (func_88(uLocal_58, 1))
						{
							if (!func_56())
							{
								func_54(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_53(1))
						{
							bVar3 = false;
						}
						if (Global_78319)
						{
							bVar3 = false;
						}
						if (func_52())
						{
							bVar3 = false;
						}
						if (is_player_switch_in_progress())
						{
							bVar3 = false;
						}
						if (func_51() || func_50(8, -1))
						{
							bVar3 = false;
						}
						if (!can_player_start_mission(player_id()))
						{
							bVar3 = false;
						}
						if (!is_player_script_control_on(player_id()))
						{
							bVar3 = false;
						}
						if (func_49(0) || func_48())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!is_entity_at_coord(iLocal_53, ScriptParam_88.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar3 = false;
							}
							if (!is_player_control_on(player_id()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								set_input_exclusive(0, 51);
								if (func_47(uLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_46(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_54(&uLocal_58, 2048);
									}
									else if (!func_88(uLocal_58, 2048) || !is_help_message_being_displayed())
									{
										func_45(&iLocal_60);
										func_90(&uLocal_58, 2048);
									}
									if (func_43(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_45(&iLocal_60);
										func_90(&uLocal_58, 2048);
										request_script(&Local_52);
										set_player_control(player_id(), false, 56);
										func_81(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_45(&iLocal_60);
									func_90(&uLocal_58, 2048);
									request_script(&Local_52);
									set_player_control(player_id(), false, 56);
									func_81(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_45(&iLocal_60);
								func_90(&uLocal_58, 2048);
								clear_help(false);
							}
						}
					}
					func_42();
					break;
				
				case 5:
					set_input_exclusive(0, 51);
					if (has_script_loaded(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_45(&iLocal_60);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_88(uLocal_58, 1))
						{
							if (func_76(6) || func_76(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_39(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (is_player_playing(player_id()))
							{
								clear_player_wanted_level(player_id());
							}
							func_38();
							if (Global_44238)
							{
								func_29(player_ped_id());
							}
							set_player_control(player_id(), true, 56);
							iLocal_50 = func_28();
							func_90(&uLocal_58, 4);
							func_27();
							func_54(&uLocal_58, 2);
							func_81(6);
							func_23(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_22(iLocal_63);
								func_19(func_21(iLocal_63), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_18();
						}
						else if (iVar4 == 0)
						{
							func_81(10);
						}
					}
					else
					{
						func_18();
					}
					break;
				
				case 6:
					if (!func_88(uLocal_58, 256))
					{
						if (is_screen_fading_out() || is_screen_faded_in())
						{
							set_input_exclusive(0, 51);
						}
						else if (is_screen_faded_out())
						{
							func_54(&uLocal_58, 256);
						}
					}
					if (func_88(Global_112037, 262144))
					{
						func_90(&Global_112037, 262144);
						func_17();
					}
					if (func_88(uLocal_58, 2097152))
					{
						if (!func_74(3) && !is_thread_active(iLocal_50))
						{
							func_81(10);
						}
					}
					if (!is_thread_active(iLocal_50))
					{
						playstats_oddjob_done(round((func_13(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_12(&iLocal_71);
						func_90(&uLocal_58, 256);
						func_9();
						if (bVar0)
						{
							func_90(&uLocal_58, 2);
						}
						else if (func_88(uLocal_58, 2))
						{
							if (func_88(Global_112037, 0))
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_90(&uLocal_58, 2);
							}
							else
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_90(&uLocal_58, 2);
							}
						}
						func_81(0);
						if (iLocal_63 != -1)
						{
							if (func_88(Global_112037, 0))
							{
								playstats_mission_checkpoint(func_21(iLocal_63), 0, Global_100478, 0);
								func_7(func_21(iLocal_63), 0, Global_100478, 1, 0);
							}
							else
							{
								playstats_mission_checkpoint(func_21(iLocal_63), 0, Global_100478, 0);
								func_7(func_21(iLocal_63), 0, Global_100478, 0, 0);
							}
						}
						func_4();
						func_90(&Global_112037, 0);
						if (func_88(uLocal_58, 16777216))
						{
							func_92(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_113386.f_9085)
							{
								if (!func_85(0, iLocal_63))
								{
									func_92(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_81(0);
					break;
				
				case 10:
					func_92(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_82(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_81(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_82(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_45(&iLocal_60);
					}
					if (!is_string_null_or_empty(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							clear_help(true);
						}
					}
					func_81(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!is_ped_injured(player_ped_id()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_86(iLocal_64) && func_85(0, iLocal_63))
									{
										func_89();
										if (iLocal_69 != 263)
										{
											func_82(iLocal_69, 1, 0);
										}
										func_81(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_82(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_81(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_89();
									if (iLocal_69 != 263)
									{
										func_82(iLocal_69, 1, 0);
									}
									func_81(0);
								}
							}
						}
						else
						{
							func_82(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		wait(0);
	}
}

bool func_1(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
	func_5(&uLocal_82);
}

void func_5(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (does_entity_exist(iVar0))
	{
		if (!func_6(iVar0))
		{
			set_entity_collision(iVar0, true, false);
			set_entity_visible(iVar0, true, false);
			freeze_entity_position(iVar0, false);
		}
	}
}

int func_6(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0, false))
		{
			return 1;
		}
		else if (!is_vehicle_driveable(iParam0, false))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_7(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (is_string_null_or_empty(&Global_97511))
	{
		return;
	}
	if (compare_strings(sParam0, &Global_97511, false, -1) != 0)
	{
		return;
	}
	playstats_mission_over(sParam0, iParam1, iParam2, bParam3, bParam4, Global_94618);
	StringCopy(&Global_97511, "", 64);
}

void func_8(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43014)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

void func_9()
{
	char cVar0[24];
	
	if (is_xbox360_version() || func_11())
	{
		network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (is_ps3_version() || func_10())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network_set_rich_presence_string(0, &cVar0);
	}
}

bool func_10()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

bool func_11()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

void func_12(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_13(int* iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(get_game_timer());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (network_is_game_in_progress())
	{
		iVar2 = get_network_time();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_17()
{
	return 1;
}

void func_18()
{
}

void func_19(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null_or_empty(&Global_97511))
	{
		playstats_mission_over(&Global_97511, 0, 0, false, true, false);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	playstats_mission_started(sParam0, iParam1, iParam2, func_20(0));
}

int func_20(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_22(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (is_xbox360_version() || func_11())
	{
		uVar0 = iParam0;
		network_set_rich_presence(8, &uVar0, 1, 1);
	}
	else if (is_ps3_version() || func_10())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		network_set_rich_presence_string(8, &cVar1);
	}
}

void func_23(int* iParam0)
{
	if (!func_16(iParam0))
	{
		func_26(iParam0);
	}
	else
	{
		func_24(iParam0);
	}
}

void func_24(int* iParam0)
{
	func_25(iParam0, 0f);
}

void func_25(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(BitTest(*iParam0, 4)) - fParam1);
	set_bit(iParam0, 1);
	clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_26(int* iParam0)
{
	if (!func_16(iParam0))
	{
		func_24(iParam0);
	}
}

void func_27()
{
	set_roads_in_angled_area(-1093.842f, -2375.285f, -100f, -1007.24f, -2425.285f, 100f, 150f, false, true, true);
}

int func_28()
{
	int iVar0;
	
	iVar0 = start_new_script_with_args(&Local_51, &uLocal_78, 4, iLocal_61);
	set_script_as_no_longer_needed(&Local_51);
	return iVar0;
}

void func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = func_37(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_32(1, iVar1, 1);
		return;
	}
	iVar2 = func_31(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_30(iVar2);
}

void func_30(int iParam0)
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

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	func_33(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_35(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_34();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	if (func_36(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_37(int iParam0)
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

void func_38()
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	clear_bit(&Global_8136, 25);
	set_bit(&Global_8137, 11);
}

int func_39(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_41(0))
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		set_player_invincible(get_player_index(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *iParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_86(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*iParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_40(iParam0, iParam4);
		}
	}
	return 2;
}

void func_40(var uParam0, int iParam1)
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

int func_41(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_86(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_42()
{
	if (func_75(76))
	{
		is_entity_at_coord(player_ped_id(), -1154.11f, -2715.203f, 18.8074f, 0f, 0f, 1.8f, true, true, 0);
	}
}

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!is_player_playing(get_player_index()))
	{
		return 0;
	}
	if (func_49(0))
	{
		return 0;
	}
	if (is_cutscene_playing())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/] == 1 && Global_43792[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43792[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43792[iVar0 /*32*/].f_5 = 1;
			Global_43792[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43792[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43792[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_45(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_44(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_46(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_references_of_script_with_name_hash(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*iParam0 == -1)
		{
			func_45(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = get_id_of_this_thread();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!is_string_null_or_empty(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_47(var uParam0)
{
	return 1;
}

var func_48()
{
	return Global_75485;
}

int func_49(int iParam0)
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

var func_50(int iParam0, int iParam1)
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

bool func_51()
{
	return get_game_timer() <= Global_23150.f_6269 + 100;
}

int func_52()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_53(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_56()
{
	return 1;
}

bool func_57()
{
	int iVar0;
	bool bVar1;
	
	if (is_ped_injured(player_ped_id()))
	{
		return 0;
	}
	get_current_ped_weapon(player_ped_id(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		return ((((bVar1 && is_control_pressed(0, 69)) || (bVar1 && is_control_pressed(0, 70))) || (bVar1 && is_control_pressed(0, 68))) || is_player_targetting_anything(player_id()));
	}
	return (((((bVar1 && is_control_pressed(0, 24)) || (bVar1 && is_control_pressed(0, 25))) || (bVar1 && is_control_pressed(0, 47))) || is_ped_performing_melee_action(player_ped_id())) || is_player_targetting_anything(player_id()));
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_67();
				if (!func_66(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_65()) || Global_112433) || Global_31962) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_61()) || func_52()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), true) || func_65()) || Global_31962) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_65()) || Global_112433) || Global_31962) || func_64()) || func_50(8, -1)) || func_61()) || func_63()) || func_62()) || func_52()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_ped_in_combat(player_ped_id(), 0)) || func_65()) || Global_112433) || Global_31962) || func_64()) || func_50(8, -1)) || func_63()) || func_62()) || func_52()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_65() || get_player_wanted_level(player_id()) > 0) || func_50(8, -1)) || func_52()) || func_60()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_63()) || func_62()) || func_60()) || func_59())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), 0) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_65()) || Global_31962) || func_64()) || func_50(8, -1)) || func_62()) || func_61()) || func_52()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || func_65()) || func_62()) || Global_112433) || Global_31962) || func_64()) || Global_44238) || func_50(8, -1)) || func_61()) || func_60()) || func_52()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), true)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_65()) || Global_112433) || Global_31962) || func_64()) || func_50(8, -1)) || func_61()) || func_60()) || func_63()) || func_62()) || func_52())
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

var func_59()
{
	return Global_100480.f_1;
}

int func_60()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_61()
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

bool func_62()
{
	return Global_100493.f_376 > 0;
}

bool func_63()
{
	return Global_100493.f_375 > 0;
}

var func_64()
{
	return Global_1575058;
}

int func_65()
{
	if (!network_is_game_in_progress())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

bool func_66(int iParam0)
{
	return iParam0 < 3;
}

var func_67()
{
	func_68();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_70(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_69(player_ped_id());
			if (func_66(iVar0) && (!func_76(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_66(Global_113386.f_2363.f_539.f_4321))
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

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_70(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_70(int iParam0)
{
	if (func_66(iParam0))
	{
		return func_71(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_71(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_72()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_73()
{
	return Global_96273;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_76(6) || func_76(7))
			{
				return 1;
			}
			else
			{
				return func_74(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_86(5))
			{
				if (func_58(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return does_blip_exist(Global_32338[iVar0 /*23*/].f_19);
}

bool func_76(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_77()
{
}

int func_78()
{
	return 1;
}

void func_79()
{
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_82(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 18);
		if (Global_32335 == 1)
		{
			Global_32336 = 1;
		}
		Global_32335 = 1;
	}
	if (bParam1)
	{
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 0);
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 15);
		set_bit(&(Global_32338[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 0);
		clear_bit(&(Global_32338[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32338[iVar0 /*23*/].f_11, 0))
	{
		if (does_blip_exist(Global_32338[iVar0 /*23*/].f_19))
		{
			set_this_script_can_remove_blips_created_by_any_script(true);
			remove_blip(&(Global_32338[iVar0 /*23*/].f_19));
			set_this_script_can_remove_blips_created_by_any_script(false);
		}
	}
}

int func_83()
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

int func_84()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_86(int iParam0)
{
	return func_87(iParam0, Global_43052);
}

int func_87(int iParam0, int iParam1)
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

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_89()
{
	iLocal_63 = 5;
	sLocal_65 = "PLAY_PSCHOOL";
	StringCopy(&Local_51, "Pilot_School", 64);
	iLocal_61 = 51000;
}

void func_90(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_82(iLocal_69, 0, 0);
		}
	}
	func_45(&iLocal_60);
	if (func_88(uLocal_58, 2))
	{
		func_4();
		func_90(&uLocal_58, 2);
		func_8(&iLocal_62);
	}
	iLocal_62 = -1;
	func_93();
	terminate_this_thread();
}

void func_93()
{
	func_90(&uLocal_58, 4);
	func_94();
	if (is_thread_active(iLocal_50))
	{
		force_cleanup_for_thread_with_this_id(iLocal_50, 3);
	}
	if (!is_string_null(&Local_52))
	{
		if (get_length_of_literal_string(&Local_52) != 0)
		{
			set_script_as_no_longer_needed(&Local_52);
		}
	}
}

void func_94()
{
	if (bLocal_83)
	{
		func_95(76);
	}
}

void func_95(int iParam0)
{
	if (iParam0 != 263)
	{
		func_82(iParam0, 1, 0);
	}
}

