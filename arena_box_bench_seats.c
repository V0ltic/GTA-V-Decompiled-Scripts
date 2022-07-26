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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	float fLocal_62 = 0f;
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
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<282> Local_93 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = -1;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = -1;
	var uLocal_100 = -1;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<15> Local_112 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	struct<2> Local_123[32];
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (func_160())
	{
		while (!func_150())
		{
			wait(0);
			func_59(&Local_93, &Local_112);
			func_46();
			if (network_is_game_in_progress() && network_is_host_of_this_script())
			{
				func_36(&Local_93, &Local_112);
				func_35();
			}
		}
	}
	func_1();
}

void func_1()
{
	func_3(&Local_93, &Local_112);
	Global_2787910 = 0;
	func_2();
}

void func_2()
{
	terminate_this_thread();
}

void func_3(var uParam0, var uParam1)
{
	int iVar0;
	
	if (func_34(&(uParam0->f_281), 15))
	{
		func_33();
		clear_bit(&Global_2787913, 8);
		func_32(&(uParam0->f_281), 15);
	}
	func_30(&(uParam0->f_281.f_6));
	func_25(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((does_entity_exist(player_ped_id()) && !is_ped_injured(player_ped_id())) && network_does_entity_exist_with_network_id(uParam1->f_14[uParam0->f_281.f_2])) && network_has_control_of_network_id(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (is_entity_attached_to_entity(net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), player_ped_id()))
				{
					detach_entity(net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), false, true);
					func_24(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(player_id()))
		{
			func_21(-1);
			func_20(-1);
		}
		Global_2787911 = 0;
		clear_bit(&Global_2787913, 6);
		iVar0 = network_get_local_scene_from_network_id(uParam0->f_281.f_1);
		if (is_synchronized_scene_running(iVar0))
		{
			network_stop_synchronised_scene(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !is_new_load_scene_active()) && func_18())
		{
			func_5(player_id(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (get_no_loading_screen())
		{
			set_no_loading_screen(false);
		}
	}
	if (func_17())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!network_is_game_in_progress())
	{
		iVar0 = iParam2;
		set_player_control(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || network_is_activity_session())
		{
			bVar1 = false;
		}
		if (!func_18())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (network_is_player_active(iParam0) && (is_player_playing(iParam0) || iParam3 == 1))
		{
			if (iParam3 && is_entity_dead(get_player_ped(iParam0), false))
			{
				return;
			}
			iVar27 = get_player_ped(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && network_is_game_in_progress())
				{
					fade_out_local_player(true);
				}
				else if (bVar14 || (!func_14(player_id(), 0) && !func_13()))
				{
					set_entity_visible(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (network_is_game_in_progress() && !bVar19)
					{
						fade_out_local_player(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_10(0, 0, 0);
					if (bVar25)
					{
						clear_focus();
					}
				}
				if (!func_9(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
				{
					if (!bVar22)
					{
						set_entity_collision(iVar27, true, false);
					}
				}
				if (!is_entity_attached(iVar27))
				{
					if (!bVar21)
					{
						freeze_entity_position(iVar27, false);
					}
					_set_entity_cleanup_by_engine(iVar27, true);
				}
				else if (!bVar21)
				{
					freeze_entity_position(iVar27, false);
				}
				set_ped_can_be_targetted(iVar27, true);
				set_player_invincible(iParam0, false);
				_set_player_invincible_keep_ragdoll_enabled(iParam0, false);
				if (has_ped_head_blend_finished(iVar27) && have_all_streaming_requests_completed(iVar27))
				{
					finalize_head_blend(iVar27);
				}
				set_ped_can_ragdoll(iVar27, true);
				if (is_player_control_on(player_id()) == 0)
				{
					func_8();
					func_7();
				}
				if (is_player_teleport_active())
				{
					if (!bVar23)
					{
					}
				}
				if (is_new_load_scene_active())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_9(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
				{
					if (!bVar22)
					{
						set_entity_collision(iVar27, !bVar15, false);
					}
					if (!is_entity_attached(iVar27))
					{
						if (!bVar21)
						{
							freeze_entity_position(iVar27, bVar16);
						}
						if (!bVar16)
						{
							_set_entity_cleanup_by_engine(iVar27, true);
						}
					}
					if (func_6(Global_4718592.f_168757))
					{
						freeze_entity_position(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					set_player_invincible(iParam0, false);
				}
				else
				{
					set_player_invincible(iParam0, true);
				}
				set_ped_can_be_targetted(iVar27, bVar17);
				if (bVar3)
				{
					if (!is_ped_fatally_injured(iVar27) && !is_ped_in_any_vehicle(iVar27, false))
					{
						clear_ped_tasks_immediately(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			set_player_control(iParam0, bParam1, iVar28);
		}
	}
}

bool func_6(int iParam0)
{
	return iParam0 == 17;
}

void func_7()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_8()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[player_id() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_10(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (is_entity_dead(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (does_entity_exist(iParam1))
		{
			if (is_ped_a_player(iParam1))
			{
				if (!_network_is_player_equal_to_index(player_id(), network_get_player_index_from_ped(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_12();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						set_cam_view_mode_for_context(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				set_bit(&(Global_2621446.f_67), true);
			}
		}
		if (func_14(player_id(), 0))
		{
			network_set_in_spectator_mode_extended(bParam0, iParam1, true);
		}
		else
		{
			network_set_in_spectator_mode(bParam0, iParam1);
		}
		set_minimap_in_spectator_mode(bParam0, iParam1);
		func_11(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_bool(iVar0, bParam1, true);
	}
}

void func_12()
{
	int iVar0;
	
	if (!network_is_in_spectator_mode())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = get_cam_view_mode_for_context(iVar0);
				iVar0++;
			}
			set_bit(&(Global_2621446.f_67), 2);
			set_bit(&(Global_2621446.f_67), false);
		}
	}
}

bool func_13()
{
	return BitTest(Global_2621446, 3);
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			bVar0 = get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1574918;
}

int func_17()
{
	if (BitTest(Global_1853348[player_id() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (func_19() == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	return Global_1574632.f_18;
}

void func_20(int iParam0)
{
	Global_2725430 = iParam0;
}

void func_21(int iParam0)
{
	Global_2725432 = iParam0;
	Global_1853348[player_id() /*834*/].f_827 = iParam0;
}

int func_22(bool bParam0)
{
	if (bParam0 != func_23())
	{
		return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_348, 29);
	}
	return 0;
}

int func_23()
{
	return -1;
}

void func_24(var uParam0)
{
	int iVar0;
	
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
		}
	}
	if (network_does_entity_exist_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		delete_entity(&iVar0);
	}
}

void func_25(var uParam0, int iParam1)
{
	if (func_26())
	{
		clear_help(true);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_30(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_26()
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1965532, 13)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1965532, 15)) && !BitTest(Global_1965532, 19))
	{
		return 0;
	}
	if ((((((((((((func_29("MPOFSEAT_PCEXIT") || func_29("MPOFSEAT_EXIT")) || func_29("ARENA_SEAT")) || func_29("ARENA_SEAT_PC")) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_29("ARENA_SEAT4")) || func_29("ARENA_SEAT_PC4")) || func_29("ARENA_SEAT_EX"))
	{
		return 1;
	}
	return 0;
}

bool func_27(char* sParam0, int iParam1)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	add_text_component_integer(iParam1);
	return end_text_command_is_this_help_message_being_displayed(0);
}

bool func_28(char* sParam0, int iParam1, int iParam2)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return end_text_command_is_this_help_message_being_displayed(0);
}

bool func_29(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

void func_30(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_31(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_31(int iParam0)
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

void func_32(int* iParam0, bool bParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_33()
{
	shutdown_pc_scripted_controls();
}

bool func_34(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_35()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = int_to_playerindex(bVar0);
		if (bVar2 != func_23() && network_is_player_a_participant(bVar2))
		{
			if (BitTest(Local_123[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_112.f_13, bVar2))
				{
					if (Local_123[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_123[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_112.f_2[iVar3] < 0)
								{
									Local_112.f_2[iVar3] = bVar2;
									set_bit(&(Local_112.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_123[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_112.f_2[iVar4] = bVar2;
									set_bit(&(Local_112.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != player_id())
		{
			if (BitTest(Local_112.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_112.f_2[iVar5] == bVar0)
					{
						if (network_does_network_id_exist(Local_112.f_14[iVar5]))
						{
							if (network_has_control_of_network_id(Local_112.f_14[iVar5]))
							{
								Local_112.f_2[iVar5] = -1;
								func_24(&(Local_112.f_14[iVar5]));
								clear_bit(&(Local_112.f_13), bVar0);
							}
							else
							{
								network_request_control_of_network_id(Local_112.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_112.f_2[iVar5] = -1;
								clear_bit(&(Local_112.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_36(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	request_anim_dict(func_43());
	if (!has_anim_dict_loaded(func_43()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!network_does_entity_exist_with_network_id(uParam1->f_14[uParam0->f_281.f_4]))
		{
			iVar0 = joaat("xs_prop_arena_tablet_drone_01");
			request_model(iVar0);
			if (!has_model_loaded(iVar0))
			{
				return;
			}
			if (func_37(get_num_reserved_mission_objects(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					_reserve_network_local_objects(get_num_reserved_mission_objects(false, 1) + 1);
					set_bit(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (can_register_mission_objects(1))
				{
					Var2 = { get_anim_initial_offset_position(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					Var3 = { get_anim_initial_offset_rotation(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0f, 2) };
					iVar1 = create_object(iVar0, Var2, true, true, false);
					set_model_as_no_longer_needed(iVar0);
					set_entity_can_be_damaged(iVar1, false);
					set_entity_coords_no_offset(iVar1, Var2, false, false, true);
					set_entity_rotation(iVar1, Var3, 2, true);
					freeze_entity_position(iVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = obj_to_net(iVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

bool func_37(int iParam0, bool bParam1, bool bParam2)
{
	return func_38(2, iParam0, 1, bParam1, bParam2);
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_42(iParam0) - func_41(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_40(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_41(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_42(iParam0) - func_41(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[player_id() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_39(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_41(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[bVar0 /*453*/].f_217;
			}
			else
			{
				return get_num_reserved_mission_peds(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[bVar0 /*453*/].f_218;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[bVar0 /*453*/].f_219;
			}
			else
			{
				return get_num_reserved_mission_objects(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

char* func_43()
{
	if (func_44())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_44()
{
	return func_45(player_id());
}

int func_45(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_112.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_112.f_2[iVar1] == -1 || Local_112.f_2[iVar1] == player_id())
			{
				iVar0 = 0;
				if (Local_112.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_56()) && func_52())
					{
						create_model_hide(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
					}
					else
					{
						remove_model_hide(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), false);
					}
				}
				else
				{
					create_model_hide(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
				}
			}
			else
			{
				create_model_hide(func_51(iVar1), 0.5f, joaat("xs_prop_x18_vip_greeenlight"), true);
			}
			iVar1++;
		}
		Global_2787910 = iVar0;
	}
	else
	{
		Global_2787910 = 0;
	}
	if (Local_93.f_281.f_5 == 4)
	{
		if (!BitTest(Local_123[player_id() /*2*/], 0))
		{
			set_bit(&(Local_123[player_id() /*2*/]), false);
			if (func_50())
			{
				set_bit(&(Local_123[player_id() /*2*/].f_1), false);
			}
			else if (Local_93.f_281.f_9 == 1)
			{
				set_bit(&(Local_123[player_id() /*2*/].f_1), Local_93.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_112.f_13, player_id()))
		{
			if (func_49() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_112.f_2[iVar2] == player_id())
					{
						func_21(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(player_id()))
	{
		if (func_50())
		{
			if (func_48() && is_screen_faded_in())
			{
				func_47(0);
			}
		}
		if (BitTest(Local_123[player_id() /*2*/], 0))
		{
			if (!func_48() && func_49() < 0)
			{
				if (func_50())
				{
					func_47(0);
				}
				clear_bit(&(Local_123[player_id() /*2*/]), false);
				Local_123[player_id() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_47(int iParam0)
{
	Global_2787909 = iParam0;
}

int func_48()
{
	if (Global_2725430 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	return Global_2725432;
}

bool func_50()
{
	return Global_2787909;
}

Vector3 func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2800.331f, -3922.829f, 181.4558f;
		
		case 1:
			return 2799.301f, -3922.829f, 181.4558f;
		
		case 2:
			return 2798.268f, -3922.829f, 181.4558f;
		
		case 3:
			return 2797.243f, -3922.829f, 181.4558f;
		
		case 4:
			return 2796.213f, -3922.829f, 181.4558f;
		
		case 5:
			return 2795.178f, -3922.829f, 181.4558f;
		
		case 6:
			return 2794.153f, -3922.829f, 181.4558f;
		
		case 7:
			return 2793.123f, -3922.829f, 181.4558f;
		
		case 8:
			return 2792.087f, -3922.829f, 181.4558f;
		
		case 9:
			return 2791.061f, -3922.829f, 181.4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_52()
{
	int iVar0;
	int iVar1;
	
	if (func_55() && !func_54())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_30, 25) || BitTest(Global_4718592.f_32, 23))
	{
		if (func_53())
		{
			return 1;
		}
	}
	iVar0 = get_player_team(player_id());
	if (iVar0 > 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058069.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 23) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 24)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 25)) && BitTest(Global_4718592.f_658[iVar0 /*22957*/].f_7929[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 14);
}

bool func_54()
{
	return Global_1574966;
}

var func_55()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_56()
{
	if (func_58() && !func_57())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

var func_58()
{
	return BitTest(Global_4718592.f_162497, 12);
}

void func_59(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	struct<3> Var20;
	
	func_147(uParam0);
	func_145(uParam0);
	func_133(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_32(&(uParam0->f_281), 11);
			func_132(uParam0, 1);
			break;
		
		case 1:
			if (func_131(uParam0))
			{
				uParam0->f_281.f_7 = get_game_timer();
				func_132(uParam0, 2);
			}
			else if (func_50())
			{
				uParam0->f_281.f_7 = get_game_timer();
				func_132(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_130(player_ped_id(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(player_ped_id(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_50())
			{
				if ((((((func_128(uParam0) || Global_1931426) || func_126(uParam0)) || !func_125(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != player_id())) || ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26630))
				{
					if (!Global_1931426 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != player_id()))
					{
						iVar3 = get_player_ped(iParam1->f_2[uParam0->f_281.f_2]);
						if (does_entity_exist(iVar3) && !is_entity_in_angled_area(iVar3, 2797.988f, -3954.898f, 181.0005f, 2797.949f, -3930.85f, 187.4114f, 30f, false, true, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL", 0, get_player_name(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_25(uParam0, 1);
							func_132(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_56()) && func_52())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO", 0, 0, 0, 0);
						}
					}
					else
					{
						func_25(uParam0, 1);
						func_132(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((get_game_timer() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_124(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT", 0, 0, 0, 0);
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
				}
				else if (is_control_just_pressed(0, 51))
				{
					func_30(&(uParam0->f_281.f_6));
					func_121(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(player_id(), 0, 256, 0);
						func_132(uParam0, 4);
					}
					else
					{
						func_132(uParam0, 3);
					}
				}
			}
			else if (func_50())
			{
				func_30(&(uParam0->f_281.f_6));
				func_132(uParam0, 4);
			}
			else
			{
				func_25(uParam0, 1);
				func_132(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_49() >= 0)
			{
				if (func_50())
				{
					uParam0->f_281.f_2 = func_49();
					if (is_entity_visible(player_ped_id()))
					{
						network_fade_out_entity(player_ped_id(), false, true);
					}
					func_120(&(uParam0->f_281), 14);
				}
				func_121(uParam0);
				func_132(uParam0, 3);
			}
			if (!func_50())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != player_id())
				{
					func_25(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(player_id(), 1, 0, 0);
					}
					func_4();
					func_132(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_119(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
				{
					network_request_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			request_anim_dict(&sVar0);
			if (has_anim_dict_loaded(&sVar0))
			{
				func_118();
				func_132(uParam0, 5);
			}
			break;
		
		case 5:
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			Var4 = { get_anim_initial_offset_position(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			Var5 = { get_anim_initial_offset_rotation(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			if (func_34(&(uParam0->f_281), 14))
			{
				bVar6 = true;
				if (func_114() >= 0)
				{
					bVar6 = false;
				}
				if (func_102(Var4, Var5.f_2, 0, 0, 0, 0, 1, bVar6, 1, 0, 0) && Global_2787912)
				{
					func_132(uParam0, 6);
				}
				else if (!Global_2787912)
				{
				}
			}
			else if (Global_2787912)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && !network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
					{
						network_request_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				task_go_straight_to_coord(player_ped_id(), Var4, 1f, 500, Var5.f_2, 0.05f);
				func_21(uParam0->f_281.f_2);
				func_132(uParam0, 6);
			}
			else if (!Global_2787912)
			{
			}
			break;
		
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && !network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
				{
					network_request_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_119(uParam0, &sVar0);
			func_117(uParam0, &sVar1, 0);
			iVar7 = get_script_task_status(player_ped_id(), 2106541073);
			Var8 = { get_anim_initial_offset_rotation(&sVar0, &sVar1, func_116(uParam0), func_115(uParam0), 0f, 2) };
			fVar9 = Var8.f_2;
			if (((iVar7 != 1 && iVar7 != 0) || func_101(get_entity_heading(player_ped_id()), fVar9, 5f)) || func_34(&(uParam0->f_281), 14))
			{
				fVar10 = 1f;
				fVar11 = 0f;
				Var12 = { func_116(uParam0) };
				if (func_34(&(uParam0->f_281), 14))
				{
					fVar10 = 2f;
					fVar11 = 0.9f;
				}
				uParam0->f_281.f_1 = network_create_synchronised_scene(Var12, func_115(uParam0), 2, true, false, 1f, fVar11, fVar10);
				network_add_ped_to_synchronised_scene(player_ped_id(), uParam0->f_281.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1000f, 0);
				network_start_synchronised_scene(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = get_game_timer();
				func_120(&(uParam0->f_281), 8);
				func_132(uParam0, 7);
			}
			break;
		
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && !network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
				{
					network_request_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (func_34(&(uParam0->f_281), 10))
			{
				func_32(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					play_sound_from_entity(iVar13, "Exit_Menu", net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
				}
				func_100(uParam0);
			}
			func_62(uParam0, iParam1);
			iVar2 = network_get_local_scene_from_network_id(uParam0->f_281.f_1);
			if (is_synchronized_scene_running(iVar2))
			{
				if (get_synchronized_scene_phase(iVar2) >= 1f)
				{
					if (!Global_2787911)
					{
						if (!is_entity_visible(player_ped_id()) && !network_is_entity_fading(player_ped_id()))
						{
							if (Global_1574965)
							{
								network_fade_in_entity(player_ped_id(), true, 1);
							}
						}
					}
					if (!func_48())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								play_sound_from_entity(iVar14, "Enter_Menu", net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_20(uParam0->f_281.f_2);
						}
						else
						{
							func_20(uParam0->f_281.f_2 + 20);
						}
						Global_2787911 = 1;
					}
					else
					{
						Global_2787911 = 1;
					}
					func_60(uParam0, 0);
					func_119(uParam0, &sVar0);
					func_117(uParam0, &sVar1, 0);
					uParam0->f_281.f_1 = network_create_synchronised_scene(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
					network_add_ped_to_synchronised_scene(player_ped_id(), uParam0->f_281.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					network_start_synchronised_scene(uParam0->f_281.f_1);
					func_120(&(uParam0->f_281), 8);
					func_120(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (has_anim_event_fired(player_ped_id(), 1374875855) || get_synchronized_scene_phase(iVar2) > 0.25f))
					{
						if ((network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2])) && !is_entity_dead(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), false))
						{
							if (!is_entity_attached(net_to_obj(iParam1->f_14[uParam0->f_281.f_2])))
							{
								attach_entity_to_entity(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), player_ped_id(), get_ped_bone_index(player_ped_id(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
					}
					func_32(&(uParam0->f_281), 8);
				}
			}
			else if (!func_34(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (is_entity_attached(net_to_obj(iParam1->f_14[uParam0->f_281.f_2])))
						{
							detach_entity(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_132(uParam0, 9);
			}
			break;
		
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && !network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
				{
					network_request_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			network_stop_synchronised_scene(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (is_entity_attached(net_to_obj(iParam1->f_14[uParam0->f_281.f_2])))
					{
						detach_entity(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), false, true);
					}
					Var15 = { get_anim_initial_offset_position(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					Var16 = { get_anim_initial_offset_rotation(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
					set_entity_coords_no_offset(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), Var15, false, false, true);
					set_entity_rotation(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), Var16, 2, true);
					freeze_entity_position(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_132(uParam0, 9);
			break;
		
		case 9:
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				clear_bit(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && !network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
				{
					network_request_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			iVar17 = network_get_local_scene_from_network_id(uParam0->f_281.f_1);
			iVar18 = get_script_task_status(player_ped_id(), 1785177548);
			if (iVar18 == 0 || iVar18 == 1)
			{
				if (is_synchronized_scene_running(iVar17))
				{
					if ((get_synchronized_scene_phase(iVar17) >= 0.7f || has_anim_event_fired(player_ped_id(), 364629851)) || has_anim_event_fired(player_ped_id(), 2116425869))
					{
						network_stop_synchronised_scene(uParam0->f_281.f_1);
						if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(player_id()))
						{
							func_21(-1);
							func_20(-1);
						}
						Global_2787911 = 0;
						clear_bit(&Global_2787913, 6);
						func_25(uParam0, 1);
						func_32(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (is_entity_attached(net_to_obj(iParam1->f_14[uParam0->f_281.f_2])))
								{
									detach_entity(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
								Var19 = { get_anim_initial_offset_position(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								Var20 = { get_anim_initial_offset_rotation(func_43(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0f, 2) };
								set_entity_coords_no_offset(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), Var19, false, false, true);
								set_entity_rotation(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), Var20, 2, true);
								freeze_entity_position(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!is_new_load_scene_active())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								func_5(player_id(), 1, 0, 0);
							}
						}
						func_4();
						func_132(uParam0, 0);
					}
					else if (has_anim_event_fired(player_ped_id(), -641050666))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (is_entity_attached(net_to_obj(iParam1->f_14[uParam0->f_281.f_2])))
								{
									detach_entity(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), false, true);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (network_does_entity_exist_with_network_id(iParam1->f_14[uParam0->f_281.f_2]) && network_has_control_of_network_id(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (is_entity_attached(net_to_obj(iParam1->f_14[uParam0->f_281.f_2])))
						{
							detach_entity(net_to_obj(iParam1->f_14[uParam0->f_281.f_2]), false, true);
						}
						func_24(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1965531, 7) && !BitTest(Global_1965531, 3)) && !func_22(player_id()))
				{
					func_21(-1);
					func_20(-1);
				}
				Global_2787911 = 0;
				clear_bit(&Global_2787913, 6);
				func_25(uParam0, 1);
				func_32(&(uParam0->f_281), 14);
				if (!is_new_load_scene_active())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(player_id(), 1, 0, 0);
					}
				}
				func_4();
				func_132(uParam0, 0);
			}
			break;
	}
}

void func_60(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_61(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		iVar2 = 3;
		iVar0 = get_random_int_in_range(0, iVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_61(uParam0);
			uParam0->f_281.f_9.f_4 = get_game_timer();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((get_game_timer() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_61(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_61(var uParam0)
{
	return uParam0->f_281.f_9.f_1;
}

void func_62(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if ((BitTest(Global_1965531, 7) || BitTest(Global_1965531, 3)) || func_22(player_id()))
	{
		if (uParam0->f_281.f_5 == 7 && is_screen_faded_out())
		{
			func_3(uParam0, uParam1);
			func_132(uParam0, 9);
		}
	}
	if (func_34(&(uParam0->f_281), 13))
	{
		iVar0 = func_92(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				play_sound_from_entity(iVar1, "Select_Turret", net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
			}
			set_bit(&Global_1965531, 9);
			func_32(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2787913, 7))
			{
				set_bit(&Global_2787913, 7);
			}
			play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_32(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			func_25(uParam0, 1);
		}
		if (has_anim_event_fired(player_ped_id(), -1322051853))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				clear_bit(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_34(&(uParam0->f_281), 13) || !Global_1574965) || (!BitTest(Global_1965531, 23) && !func_91())) || Global_2789734) || Global_2789737) || BitTest(Global_1958711, 13)) || BitTest(Global_1965531, 14)) || BitTest(Global_1958711, 9)) || BitTest(Global_2787913, 0)) || BitTest(Global_1965531, 6)) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9)) || BitTest(Global_1965531, 2)) || BitTest(Global_1965531, 3)) || BitTest(Global_1965531, 4)) || BitTest(Global_1965531, 5)) || func_22(player_id())) || func_50()) || is_disabled_control_pressed(2, 19)) || !is_screen_faded_in()) || func_88(player_id())) || Global_2787934 != 0)
		{
			func_25(uParam0, 1);
			if (!BitTest(Global_1965531, 23))
			{
				if (!func_34(&(uParam0->f_281), 15) && Global_2787934 == 0)
				{
					func_87("ARENA SPECTATOR BOX TABLETS");
					set_bit(&Global_2787913, 8);
					func_120(&(uParam0->f_281), 15);
				}
			}
			else if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				clear_bit(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else if (func_86(uParam0))
		{
			func_25(uParam0, 1);
			if (func_34(&(uParam0->f_281), 15))
			{
				func_33();
				clear_bit(&Global_2787913, 8);
				func_32(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_34(&(uParam0->f_281), 15))
			{
				func_87("ARENA SPECTATOR BOX TABLETS");
				set_bit(&Global_2787913, 8);
				func_120(&(uParam0->f_281), 15);
			}
			_0x7F4724035FDCA1DD(2);
			disable_control_action(0, 24, true);
			disable_control_action(0, 257, true);
			disable_control_action(0, 142, true);
			disable_control_action(0, 141, true);
			disable_control_action(0, 140, true);
			disable_control_action(0, 263, true);
			disable_control_action(0, 264, true);
			disable_control_action(0, 143, true);
			disable_control_action(2, 200, true);
			bVar2 = false;
			if (func_85())
			{
				bVar2 = true;
			}
			if (func_27("ARENA_VIP_CASH1", Global_262145.f_26633))
			{
				clear_bit(&Global_2787913, 5);
			}
			if (func_27("ARENA_VIP_CASH2", Global_262145.f_26634))
			{
				clear_bit(&Global_2787913, 4);
			}
			if (func_29("ARENA_VIP_ABIL"))
			{
				clear_bit(&Global_2787913, 7);
			}
			if (BitTest(Global_2787913, 4) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH2", Global_262145.f_26634, 2000);
			}
			if (BitTest(Global_2787913, 5) && uParam0->f_281.f_6 == -1)
			{
				func_84("ARENA_VIP_CASH1", Global_262145.f_26633, 2000);
			}
			if (BitTest(Global_2787913, 7) && uParam0->f_281.f_6 == -1)
			{
				func_83("ARENA_VIP_ABIL", 2000);
			}
			if ((BitTest(Global_2787913, 4) || BitTest(Global_2787913, 5)) || BitTest(Global_2787913, 7))
			{
				func_25(uParam0, 1);
			}
			if ((((((((!is_pause_menu_active() && !Global_1931426) && !func_34(&(uParam0->f_281), 0)) && !func_34(&(uParam0->f_281), 4)) && !func_82()) && !func_80(1)) && uParam0->f_281.f_9.f_2 != 3) && !is_warning_message_active()) && !func_79())
			{
				if (bVar2)
				{
					if (func_56() && !func_52())
					{
						if (((((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634)) || func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634)) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
						{
							func_25(uParam0, 1);
						}
					}
					else if (func_29("ARENA_SEAT_PC") || func_29("ARENA_SEAT"))
					{
						func_25(uParam0, 1);
					}
				}
				if ((((((!func_26() && !BitTest(Global_2787913, 4)) && !BitTest(Global_2787913, 5)) && !BitTest(Global_2787913, 7)) && !func_27("ARENA_VIP_CASH1", Global_262145.f_26633)) && !func_27("ARENA_VIP_CASH2", Global_262145.f_26634)) && !func_29("ARENA_VIP_ABIL"))
				{
					if (_is_using_keyboard(2))
					{
						if (bVar2)
						{
							if (func_56() && !func_52())
							{
								if ((func_28("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT_PC2", Global_262145.f_26633)) || func_27("ARENA_SEAT_PC3", Global_262145.f_26634))
								{
									func_25(uParam0, 1);
								}
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC", 0, 0, 0, 0);
							}
							else
							{
								if (func_29("ARENA_SEAT_PC"))
								{
									func_25(uParam0, 1);
								}
								if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_78("ARENA_SEAT_PC1", Global_262145.f_26633, Global_262145.f_26634);
								}
								else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC2", Global_262145.f_26633, -1);
								}
								else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
								{
									func_84("ARENA_SEAT_PC3", Global_262145.f_26634, -1);
								}
								else
								{
									func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4", 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_56() && !func_52())
						{
							if ((func_28("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634) || func_27("ARENA_SEAT2", Global_262145.f_26633)) || func_27("ARENA_SEAT3", Global_262145.f_26634))
							{
								func_25(uParam0, 1);
							}
							func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT", 0, 0, 0, 0);
						}
						else
						{
							if (func_29("ARENA_SEAT"))
							{
								func_25(uParam0, 1);
							}
							if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_78("ARENA_SEAT1", Global_262145.f_26633, Global_262145.f_26634);
							}
							else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT2", Global_262145.f_26633, -1);
							}
							else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
							{
								func_84("ARENA_SEAT3", Global_262145.f_26634, -1);
							}
							else
							{
								func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_124(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_56() && !func_52())
					{
						if (((((((((is_disabled_control_just_pressed(2, 235) && !is_control_just_pressed(2, 223)) && !is_control_just_pressed(2, 225)) && !is_control_just_pressed(2, 224)) && !is_control_just_pressed(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(player_id()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								play_sound_from_entity(iVar3, "Exit_Menu", net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((((((((is_disabled_control_just_pressed(2, 223) && !is_disabled_control_just_pressed(2, 235)) && !is_control_just_pressed(2, 225)) && !is_control_just_pressed(2, 224)) && !is_control_just_pressed(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(player_id())) && bVar2)
						{
							if (func_77())
							{
								func_25(uParam0, 1);
								set_bit(&Global_1965531, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									play_sound_from_entity(iVar4, "Select_Drone", net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									set_bit(&Global_2787913, 7);
								}
								play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((is_disabled_control_just_pressed(2, 225) && !is_disabled_control_just_pressed(2, 235)) && !is_control_just_pressed(2, 223)) && !is_control_just_pressed(2, 224)) && !is_control_just_pressed(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(player_id())) && bVar2)
						{
							if (func_76())
							{
								func_25(uParam0, 1);
								set_bit(&Global_1965531, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									play_sound_from_entity(iVar5, "Select_RC_Car", net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									set_bit(&Global_2787913, 7);
								}
								play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((is_disabled_control_just_pressed(2, 224) && !is_disabled_control_just_pressed(2, 235)) && !is_control_just_pressed(2, 223)) && !is_control_just_pressed(2, 225)) && !is_control_just_pressed(2, 222)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(player_id())) && bVar2)
						{
							if (func_73())
							{
								func_25(uParam0, 1);
								set_bit(&Global_1965531, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									play_sound_from_entity(iVar6, "Select_Trap_Cam", net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									set_bit(&Global_2787913, 7);
								}
								play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
						if ((((((((((is_disabled_control_just_pressed(2, 222) && !is_disabled_control_just_pressed(2, 235)) && !is_control_just_pressed(2, 223)) && !is_control_just_pressed(2, 225)) && !is_control_just_pressed(2, 224)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !func_22(player_id())) && bVar2)
						{
							if (func_72())
							{
								func_25(uParam0, 1);
								if (func_34(&(uParam0->f_281), 15))
								{
									func_33();
									clear_bit(&Global_2787913, 8);
									func_32(&(uParam0->f_281), 15);
								}
								func_120(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2787913, 7))
								{
									set_bit(&Global_2787913, 7);
								}
								play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
						}
					}
					else
					{
						if (((is_disabled_control_just_pressed(2, 235) && !is_control_just_pressed(2, 224)) && !Global_2789737) && !Global_2789734)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								play_sound_from_entity(iVar7, "Exit_Menu", net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
							}
							func_100(uParam0);
						}
						if ((((is_disabled_control_just_pressed(2, 223) && !is_disabled_control_just_pressed(2, 235)) && !is_control_just_pressed(2, 224)) && bVar2) && !Global_262145.f_26631)
						{
							if (network_can_spend_money(Global_262145.f_26633, false, false, true, -1, 0) || BitTest(Global_2787913, 3))
							{
								func_25(uParam0, 1);
								Global_2789737 = 1;
								Global_2789734 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									play_sound_from_entity(iVar8, "Select_Live_Stream", net_to_obj(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
								}
								func_70(73, -1);
								func_68();
								func_63();
							}
							else if (!BitTest(Global_2787913, 5))
							{
								set_bit(&Global_2787913, 5);
							}
						}
					}
				}
			}
		}
	}
	func_32(&(uParam0->f_281), 9);
}

void func_63()
{
	func_64(1, 7986);
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_67(iParam1, -1, 0);
	func_65(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_65(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_66(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_68()
{
	int iVar0;
	
	iVar0 = func_69(73, -1);
	if (iVar0 >= 50)
	{
		set_bit(&(Global_1853348[player_id() /*834*/].f_267.f_353.f_3), 13);
	}
	else
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_267.f_353.f_3), 13);
	}
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_66(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_69(iParam0, func_66(iParam1));
	iVar0++;
	func_71(iParam0, iVar0, iParam1);
}

void func_71(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_66(uParam2)];
	stat_set_int(iVar0, iParam1, true);
}

int func_72()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = get_player_team(player_id());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_73()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_74())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = get_player_team(player_id());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_63310 - 1))
	{
		if (!func_75(Global_4980736.f_63312[iVar0 /*183*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = get_player_team(player_id());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = get_player_team(player_id());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058069.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_658[iVar1 /*22957*/].f_7929[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_78(char* sParam0, int iParam1, int iParam2)
{
	begin_text_command_display_help(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	end_text_command_display_help(0, false, true, -1);
}

bool func_79()
{
	return get_game_timer() <= Global_23150.f_6269 + 100;
}

int func_80(bool bParam0)
{
	if (get_allow_movement_while_zoomed())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (func_81(player_ped_id()))
			{
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (is_control_pressed(0, 19) || (!bParam0 && is_disabled_control_pressed(0, 19)))
	{
		return 1;
	}
	if (is_pc_version())
	{
		if (((is_control_pressed(0, 166) || is_control_pressed(0, 167)) || is_control_pressed(0, 168)) || is_control_pressed(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((is_disabled_control_pressed(0, 166) || is_disabled_control_pressed(0, 167)) || is_disabled_control_pressed(0, 168)) || is_disabled_control_pressed(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!is_ped_injured(iParam0))
		{
			get_current_ped_weapon(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_82()
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_83(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

void func_84(char* sParam0, int iParam1, int iParam2)
{
	begin_text_command_display_help(sParam0);
	add_text_component_integer(iParam1);
	end_text_command_display_help(0, false, true, iParam2);
}

int func_85()
{
	if (Global_2725430 >= 0 && Global_2725430 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_86(var uParam0)
{
	return func_34(&(uParam0->f_281), 9);
}

void func_87(char* sParam0)
{
	init_pc_scripted_controls(sParam0);
}

bool func_88(int iParam0)
{
	return func_89(iParam0) != 0;
}

int func_89(int iParam0)
{
	if (iParam0 == player_id() && !func_90())
	{
		return Global_2787940.f_1;
	}
	return Global_2680265.f_1399[iParam0 /*3*/].f_1;
}

int func_90()
{
	if (((Global_2787943 != 0 && Global_2787943 == Global_2787944) && Global_2787932 != 3) && Global_2787932 != 1)
	{
		return 0;
	}
	return 1;
}

int func_91()
{
	if (((((func_29("ARENA_SEAT_GM0") || func_29("ARENA_SEAT_GM1")) || func_29("TAGTM_HELP_2O")) || func_29("TAGTM_HELP_2P")) || func_29("TAGTM_HELP_2Pi")) || func_29("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_92(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_98(1, 0, 0, 1, 1);
	}
	iVar0 = func_97(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_93(0, -1, -1);
	}
	return iVar0;
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0 && Global_2787937.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2787937.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2787937 != iParam2)
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	func_95();
	func_94(3);
	Global_2787937.f_1 = 0;
	Global_2787937.f_2 = -1;
	Global_2787937 = -1;
	Global_2787933 = 0;
	Global_2787935 = 0;
	Global_2787943 = get_network_time_accurate();
	Global_2787936 = 1;
	return 1;
}

void func_94(int iParam0)
{
	Global_2787932 = iParam0;
}

void func_95()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("turret_cam_script")) > 0)
	{
		Global_2787945 = 1;
	}
}

bool func_96()
{
	return (Global_2787932 == 3 || Global_2787932 == 0);
}

int func_97(int iParam0)
{
	if (Global_2787943 == iParam0)
	{
		if (Global_2787932 == 2)
		{
			if (Global_2787943 == Global_2787944)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2787932 == 0)
		{
			return 2;
		}
	}
	else
	{
		return 2;
	}
	return 0;
}

var func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_94(1);
	Global_2787937 = { Var0 };
	Global_2787933 = iParam3;
	Global_2787943 = get_network_time_accurate();
	Global_2787935 = 0;
	func_99(&Global_2787935, 0, !bParam4);
	Global_2787936 = 1;
	return Global_2787943;
}

void func_99(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		set_bit(iParam0, iParam1);
	}
	else
	{
		clear_bit(iParam0, bParam1);
	}
}

void func_100(var uParam0)
{
	char* sVar0;
	
	uParam0->f_281.f_1 = network_create_synchronised_scene(func_116(uParam0), func_115(uParam0), 2, true, false, 1f, 0f, 1f);
	func_119(uParam0, &sVar0);
	network_add_ped_to_synchronised_scene(player_ped_id(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	network_start_synchronised_scene(uParam0->f_281.f_1);
	func_30(&(uParam0->f_281.f_6));
	set_bit(&Global_2787913, 6);
	func_32(&(uParam0->f_281), 14);
	func_132(uParam0, 9);
}

int func_101(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_102(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23011.f_6 = 1;
	if (Global_2703735.f_910 && Global_2703735.f_918)
	{
		func_111(0, bParam7);
		return 1;
	}
	if (is_player_switch_in_progress() && !bParam7)
	{
		if (Global_2703735.f_910)
		{
			func_111(0, bParam7);
		}
		return 0;
	}
	if ((is_new_load_scene_active() && !bParam7) && !is_player_teleport_active())
	{
		return 0;
	}
	if (!func_110(0))
	{
		if (func_109(player_id(), 1, 0) && !(func_55() || func_108()))
		{
			if (((bParam7 && func_107(player_id(), 1, 0)) && is_player_switch_in_progress()) && Global_2689235[player_id() /*453*/].f_230 == 1)
			{
			}
			else if (func_106() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2703735.f_910 && !bParam9)
	{
		Var1 = { get_entity_coords(player_ped_id(), false) };
		if ((absf((Var1.f_0 - Param0.f_0)) < 0.2f && absf((Var1.f_1 - Param0.f_1)) < 0.2f) && absf((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar2 = (fParam1 - get_entity_heading(player_ped_id()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (absf(fVar2) < 1f)
			{
				Global_2703735.f_910 = 0;
				Global_2703735.f_911 = 0;
				if (is_player_teleport_active())
				{
					stop_player_teleport();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703735.f_912 || !Param0.f_1 == Global_2703735.f_912.f_1) || !Param0.f_2 == Global_2703735.f_912.f_2) || !fParam1 == Global_2703735.f_915)
	{
		if (Global_2703735.f_910 == 1)
		{
			if (get_time_difference(get_network_time(), Global_2703735.f_916) < func_105(0))
			{
				return 0;
			}
			stop_player_teleport();
			Global_2703735.f_911 = 1;
		}
		else
		{
			Global_2703735.f_911 = 0;
		}
		Global_2703735.f_912 = { Param0 };
		Global_2703735.f_915 = fParam1;
		Global_2703735.f_910 = 0;
	}
	if (bParam2)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar0 = get_vehicle_ped_is_using(player_ped_id());
			if (does_entity_exist(iVar0) && get_entity_model(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2703735.f_910 && !is_player_teleport_active())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			if (!BitTest(Global_100493.f_1393[44], 16))
			{
				func_104(0);
			}
			if (!get_current_ped_vehicle_weapon(player_ped_id(), &(Global_2667225.f_502)))
			{
				Global_2667225.f_502 = 0;
			}
		}
		if (bParam2)
		{
			if (is_ped_in_any_vehicle(player_ped_id(), false))
			{
				iVar0 = get_vehicle_ped_is_using(player_ped_id());
				if (is_vehicle_attached_to_trailer(iVar0))
				{
					Global_2703735.f_917 = 0;
				}
			}
		}
		if (Global_2703735.f_917 > -1)
		{
			Global_2703735.f_916 = get_network_time();
			Global_2703735.f_910 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), false))
					{
						iVar0 = get_vehicle_ped_is_using(player_ped_id());
						if (network_has_control_of_entity(iVar0))
						{
							set_entity_coords(iVar0, Param0, false, true, true, true);
							set_entity_heading(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								set_entity_rotation(iVar0, fParam10, 0f, fParam1, 2, true);
							}
						}
						else
						{
							network_request_control_of_entity(iVar0);
						}
					}
					else
					{
						set_entity_coords(player_ped_id(), Param0, false, false, false, true);
						set_entity_heading(player_ped_id(), fParam1);
					}
				}
				else
				{
					set_entity_coords(player_ped_id(), Param0, false, false, false, true);
					set_entity_heading(player_ped_id(), fParam1);
				}
				func_111(bParam4, bParam7);
				return 1;
			}
			else
			{
				clear_focus();
				start_player_teleport(player_id(), Param0, fParam1, bParam2, bParam8, false);
			}
			Global_2703735.f_916 = get_network_time();
			Global_2703735.f_910 = 1;
		}
	}
	if (Global_2703735.f_910)
	{
		Global_23011.f_6 = 1;
		Global_2703735.f_916 = get_network_time();
		if (Global_2703735.f_917 > -1)
		{
			if (is_ped_in_any_vehicle(player_ped_id(), false))
			{
				iVar0 = get_vehicle_ped_is_using(player_ped_id());
			}
			if (func_103(&(Global_2703735.f_917), Param0, fParam1, iVar0))
			{
				func_111(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(get_entity_coords(player_ped_id(), false), Global_2703735.f_912) < 2f)
				{
					if (is_player_teleport_active())
					{
						stop_player_teleport();
					}
					func_111(bParam4, bParam7);
					return 1;
				}
			}
			if (!is_player_teleport_active())
			{
				if (fParam10 != 0f)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), false))
					{
						iVar0 = get_vehicle_ped_is_using(player_ped_id());
						set_entity_rotation(iVar0, fParam10, 0f, fParam1, 2, true);
						Global_2703735.f_918 = 1;
						return 0;
					}
				}
				func_111(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_103(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (does_entity_exist(Global_2703735.f_919) && !is_entity_dead(Global_2703735.f_919, false))
	{
		network_request_control_of_entity(Global_2703735.f_919);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703735.f_919 = iParam3;
			network_request_control_of_entity(Global_2703735.f_919);
			if (network_has_control_of_entity(Global_2703735.f_919))
			{
				if (!is_entity_dead(Global_2703735.f_919, false))
				{
					set_entity_heading(Global_2703735.f_919, fParam2);
					set_entity_coords(Global_2703735.f_919, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((audio_is_scripted_music_playing() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!is_radio_retuning())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

int func_105(bool bParam0)
{
	if (is_screen_faded_out())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_106()
{
	return Global_1574991;
}

int func_107(int iParam0, bool bParam1, bool bParam2)
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

bool func_108()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

int func_109(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2689235[iParam0 /*453*/].f_230 == 99)
	{
		if ((iParam2 && Global_2689235[iParam0 /*453*/].f_233 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2689235[iParam0 /*453*/].f_230 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_110(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_111(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		set_gameplay_cam_relative_pitch(0f, 1f);
		set_gameplay_cam_relative_heading(0f);
	}
	if (!is_entity_dead(player_ped_id(), false))
	{
		clear_ped_wetness(player_ped_id());
	}
	if (!bParam1)
	{
		clear_focus();
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	func_7();
	if (!BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 14) && !func_113())
	{
		func_112();
	}
}

void func_112()
{
	Global_2824571.f_92 = 1;
}

int func_113()
{
	if (!network_is_activity_session() && !func_110(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	return Global_2725430;
}

Vector3 func_115(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_116(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_117(var uParam0, char* sParam1, bool bParam2)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_2)
			{
				case 0:
					StringCopy(sParam1, "IDLE_A", 16);
					break;
				
				case 1:
					StringCopy(sParam1, "IDLE_B", 16);
					break;
				
				case 2:
					StringCopy(sParam1, "IDLE_C", 16);
					break;
				
				case 3:
					StringCopy(sParam1, "ENTER", 16);
					break;
				
				case 5:
					StringCopy(sParam1, "BASE", 16);
					break;
				
				case 4:
					StringCopy(sParam1, "EXIT", 16);
					break;
				
				case 7:
					StringCopy(sParam1, "A_TO_B", 16);
					break;
				
				case 8:
					StringCopy(sParam1, "B_TO_C", 16);
					break;
				
				case 9:
					StringCopy(sParam1, "C_TO_D", 16);
					break;
				
				case 10:
					StringCopy(sParam1, "D_TO_E", 16);
					break;
				
				case 12:
					StringCopy(sParam1, "B_TO_E", 16);
					break;
				
				case 13:
					StringCopy(sParam1, "C_TO_A", 16);
					break;
				
				case 14:
					StringCopy(sParam1, "D_TO_A", 16);
					break;
				
				case 15:
					StringCopy(sParam1, "E_TO_A", 16);
					break;
				
				default:
					StringCopy(sParam1, "invalid_clip", 16);
					break;
			}
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_118()
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_119(var uParam0, char* sParam1)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (func_44())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_120(int* iParam0, bool bParam1)
{
	set_bit(iParam0, iParam1);
}

void func_121(var uParam0)
{
	uParam0->f_281.f_9 = func_123((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_122(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_122(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_44())
		{
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				default:
			}
		}
		else
		{
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				}
			}
		
		default:
	}
	return 0;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_124(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_references_of_script_with_name_hash(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*uParam0 == -1)
		{
			func_30(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_125(var uParam0)
{
	Stack.Push(!func_34(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (iVar1 != player_id() && func_107(iVar1, 1, 1))
			{
				if (func_130(get_player_ped(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_127(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 != func_23())
	{
		return Global_1853348[iParam0 /*834*/].f_827;
	}
	return -1;
}

bool func_128(var uParam0)
{
	if (((BitTest(Global_1965531, 6) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_129(int iParam0, struct<3> Param1)
{
	if (does_entity_exist(iParam0))
	{
		if (func_101(get_entity_heading(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_130(int iParam0, var uParam1)
{
	return is_entity_in_angled_area(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

int func_131(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_130(player_ped_id(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_129(player_ped_id(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_281.f_5 = iParam1;
}

void func_133(var uParam0)
{
	int iVar0;
	
	if (BitTest(Global_1965531, 7))
	{
		func_139(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_139(1);
		
		case 7:
			invalidate_idle_cam();
			hud_force_weapon_wheel(false);
			display_ammo_this_frame(false);
			hide_hud_component_this_frame(19);
			hide_hud_component_this_frame(2);
			_hud_weapon_wheel_ignore_selection();
			if (!func_138())
			{
				func_137();
			}
			if (get_current_ped_weapon(player_ped_id(), &iVar0, true) && iVar0 != joaat("weapon_unarmed"))
			{
				set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
			}
			disable_control_action(0, 37, true);
			func_135(1);
			func_134();
			break;
	}
}

void func_134()
{
	Global_23011.f_6 = 1;
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		if (func_136())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

bool func_136()
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_137()
{
	set_bit(&Global_8137, 4);
}

bool func_138()
{
	return BitTest(Global_1958711, 19);
}

void func_139(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_144(0))
		{
			func_140(iParam0);
		}
		set_bit(&Global_8137, 2);
	}
}

void func_140(int iParam0)
{
	if (func_138())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_143())
		{
			func_142(1, 1);
		}
		else
		{
			func_142(0, 0);
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
	if (!func_141())
	{
		Global_20266.f_1 = 3;
	}
}

int func_141()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_142(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_144(0))
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

bool func_143()
{
	return BitTest(Global_1958711, 5);
}

int func_144(int iParam0)
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

void func_145(var uParam0)
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		_disable_cam_collision_for_entity(player_ped_id());
		set_ped_capsule(player_ped_id(), func_146());
		uParam0->f_281.f_8 = get_frame_count();
	}
	else if ((get_frame_count() - uParam0->f_281.f_8) < 5)
	{
		set_ped_capsule(player_ped_id(), func_146());
	}
}

float func_146()
{
	return 0.13f;
}

void func_147(var uParam0)
{
	func_148(&(uParam0->f_281), 4, func_149());
	func_148(&(uParam0->f_281), 1, is_entity_dead(player_ped_id(), false));
	func_148(&(uParam0->f_281), 3, is_ped_in_any_vehicle(player_ped_id(), true));
	func_148(&(uParam0->f_281), 0, func_144(0));
	func_148(&(uParam0->f_281), 2, is_ped_running(player_ped_id()));
}

void func_148(int* iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		set_bit(iParam0, iVar0);
	}
	else
	{
		clear_bit(iParam0, bVar0);
	}
}

bool func_149()
{
	return Global_75485;
}

int func_150()
{
	if ((((!func_159() && !func_50()) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 3)) && !func_22(player_id()))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 11) && is_screen_faded_out())
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (_get_number_of_references_of_script_with_name_hash(get_hash_key("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2787907)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(159))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_152() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_152()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	switch (func_154())
	{
		case 0:
			return func_153();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_153()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_154()
{
	return Global_31959;
}

bool func_155()
{
	return Global_2714762.f_698;
}

int func_156(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return Global_2725403;
}

bool func_158()
{
	return Global_2714762.f_693;
}

int func_159()
{
	if (is_entity_in_angled_area(player_ped_id(), 2797.988f, -3943.898f, 181.0005f, 2797.949f, -3919.85f, 187.4114f, 30f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_160()
{
	int iVar0;
	
	if (network_is_script_active("arena_box_bench_seats", -1, true, 0))
	{
		return 0;
	}
	network_set_this_script_is_network_script(32, false, -1);
	func_168(0, -1, 0);
	network_register_host_broadcast_variables(&Local_112, 25, 0);
	network_register_player_broadcast_variables(&Local_123, 65, 0);
	set_this_script_can_be_paused(false);
	func_167();
	func_161();
	if (network_is_game_in_progress() && network_is_host_of_this_script())
	{
		if (!Local_112.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_112.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_112.f_0 = 1;
		}
	}
	return 1;
}

void func_161()
{
	func_162(0, &Local_93, 0, 2);
	func_162(1, &Local_93, 1, 2);
	func_162(2, &Local_93, 2, 2);
	func_162(3, &Local_93, 3, 2);
	func_162(4, &Local_93, 4, 2);
	func_162(5, &Local_93, 5, 2);
	func_162(6, &Local_93, 6, 2);
	func_162(7, &Local_93, 7, 2);
	func_162(8, &Local_93, 8, 2);
	func_162(9, &Local_93, 9, 2);
	func_162(10, &Local_93, 10, 1);
	func_162(11, &Local_93, 11, 1);
	func_162(12, &Local_93, 12, 1);
	func_162(13, &Local_93, 13, 1);
	func_162(14, &Local_93, 14, 1);
	func_162(15, &Local_93, 15, 1);
	func_162(16, &Local_93, 16, 1);
	func_162(17, &Local_93, 17, 1);
	func_162(18, &Local_93, 18, 1);
	func_162(19, &Local_93, 19, 1);
}

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	float fVar1;
	
	func_166(iParam0, &Var0, &fVar1);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar1 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_164(func_165(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_164(func_163(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1.25f;
}

Vector3 func_163()
{
	return 0.5f, -0.5f, 2f;
}

Vector3 func_164(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_165()
{
	return -0.5f, -0.5f, 0f;
}

void func_166(int iParam0, var uParam1, var uParam2)
{
	if (func_44())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.885f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.857f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.821f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.794f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.764f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.729f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.706f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.677f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.638f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.611f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799.864f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798.837f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797.8f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796.774f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795.744f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794.708f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793.685f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792.657f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791.618f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790.59f, -3923.084f, 181.5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799.913f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798.89f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797.817f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796.821f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795.784f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794.75f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793.711f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792.696f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791.635f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790.644f, -3924.579f, 182.4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_167()
{
}

int func_168(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_110(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(157))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!network_is_game_in_progress())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

