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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (has_force_cleanup_occurred(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_55 };
	func_177();
	func_176();
	func_171(iLocal_44, 0, 0);
	settimera(0);
	func_170();
	func_166();
	while (true)
	{
		wait(0);
		func_165(iLocal_44);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_44, 0, 0);
		func_177();
		func_9();
		if ((network_is_game_in_progress() && !network_is_activity_session()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

bool func_3()
{
	return Global_2714762.f_691;
}

bool func_4()
{
	return Global_1853348[player_id() /*834*/].f_192 != 0;
}

void func_5()
{
	Global_2714762.f_756 = 1;
}

var func_6()
{
	return Global_2714762.f_735;
}

var func_7()
{
	return BitTest(Global_2714762.f_2, 11);
}

bool func_8()
{
	return BitTest(Global_2715699.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (is_entity_dead(Local_43.f_1, false))
	{
		func_178();
	}
	if (bLocal_46)
	{
		if (!is_player_playing(player_id()))
		{
			func_178();
		}
	}
	func_154();
	bVar0 = true;
	switch (Local_52.f_0)
	{
		case 4:
			func_153();
			return;
		
		case 5:
			func_150();
			return;
		
		case 6:
			func_148();
			return;
		
		case 7:
			func_147();
			return;
		
		case 8:
			func_146();
			return;
		
		case 9:
			func_144();
			return;
		
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		
		case 11:
			func_138();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_52.f_0 == 12)
	{
		return;
	}
	switch (Local_52.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!BitTest(Global_1946250.f_3, 27))
	{
		set_ped_to_ragdoll(Local_43.f_1, 3000, 3500, 0, true, true, false);
	}
	Global_1940653 = 1;
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(2500);
		while (is_screen_fading_out())
		{
			wait(0);
		}
	}
	if (network_is_game_in_progress())
	{
		func_105(&uVar0, 0, 0);
		if (does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id(), false))
		{
			network_fade_out_entity(player_ped_id(), false, true);
		}
		while ((does_entity_exist(player_ped_id()) && !is_entity_dead(player_ped_id(), false)) && network_is_entity_fading(player_ped_id()))
		{
			wait(0);
		}
		clear_bit(&(Global_1946250.f_3), 27);
		func_91(player_id(), 0, 57344, 0);
		Global_2667225.f_2681 = 1;
		if (BitTest(Global_1946250, 15))
		{
			clear_bit(&Global_1946250, 15);
		}
		if (BitTest(Global_1946250.f_2, 6))
		{
			clear_bit(&(Global_1946250.f_2), 6);
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			Global_2667225.f_2682 = 1;
		}
		else
		{
			Global_2667225.f_2682 = 0;
		}
		if (is_script_global_shaking())
		{
			stop_script_global_shaking(false);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_178();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar3 = 4;
				}
				if (func_64(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_62())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2.f_0 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2.f_0 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2.f_0 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2.f_0 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2.f_0 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!is_entity_dead(Local_43.f_1, false))
	{
		set_entity_coords(Local_43.f_1, Var2.f_5, true, false, false, true);
	}
	wait(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_178();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (network_is_game_in_progress())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		stat_get_int(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		stat_set_int(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	float fVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	float fVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	set_player_control(player_id(), false, 0);
	if (!is_entity_dead(player_ped_id(), false))
	{
		set_entity_invincible(player_ped_id(), true);
	}
	remove_particle_fx_in_range(uParam1->f_5, 4500f);
	remove_decals_in_range(uParam1->f_5, 4500f);
	clear_area(uParam1->f_5, 5f, true, false, false, false);
	set_entity_coords(player_ped_id(), uParam1->f_5, true, false, false, true);
	freeze_entity_position(player_ped_id(), true);
	wait(0);
	set_game_paused(true);
	request_anim_dict(*uParam1);
	if (is_string_null_or_empty(uParam1->f_16))
	{
	}
	else
	{
		request_anim_dict(uParam1->f_16);
	}
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(0);
	}
	iVar1 = get_game_timer() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > get_game_timer())
	{
		bVar2 = true;
		request_anim_dict(*uParam1);
		if (!has_anim_dict_loaded(*uParam1))
		{
			bVar2 = false;
		}
		if (!is_string_null_or_empty(uParam1->f_16))
		{
			request_anim_dict(uParam1->f_16);
			if (!has_anim_dict_loaded(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!is_screen_faded_out())
		{
			do_screen_fade_out(0);
		}
		wait(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		set_roads_in_area(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		clear_area_of_vehicles(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), false, false, false, false, false, false, 0);
		clear_area(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), true, false, false, false);
	}
	if (!is_entity_dead(player_ped_id(), false))
	{
		clear_player_wanted_level(player_id());
		set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
		clear_ped_tasks_immediately(player_ped_id());
	}
	freeze_entity_position(player_ped_id(), false);
	set_game_paused(false);
	clear_area(uParam1->f_5, 15f, true, false, false, false);
	instantly_fill_ped_population();
	instantly_fill_vehicle_population();
	func_51();
	while (func_50())
	{
		wait(0);
	}
	if (!is_screen_faded_in() && !is_screen_fading_in())
	{
		do_screen_fade_in(250);
	}
	set_fade_in_after_death_arrest(true);
	if (!is_entity_dead(player_ped_id(), false))
	{
		iVar4 = create_synchronized_scene(uParam1->f_5, uParam1->f_8, 2);
		set_synchronized_scene_looped(iVar4, false);
		set_synchronized_scene_hold_last_frame(iVar4, false);
		iVar5 = create_cam("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_48(player_ped_id(), uParam1->f_18);
		task_synchronized_scene(player_ped_id(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1000f, 0);
		set_force_footstep_update(player_ped_id(), true);
		set_player_cloth_pin_frames(player_id(), 1);
		bVar3 = get_ped_reset_flag(player_ped_id(), 77);
		set_ped_reset_flag(player_ped_id(), 77, true);
		play_synchronized_cam_anim(iVar5, iVar4, uParam1->f_2, *uParam1);
		render_script_cams(true, false, 3000, true, false, 0);
		if (!is_string_null_or_empty(uParam1->f_16) && !is_string_null_or_empty(uParam1->f_17))
		{
			task_play_anim(player_ped_id(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0f, false, false, false);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!is_string_null_or_empty(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!is_string_null_or_empty(&(uParam1->f_11)))
	{
		iVar10 = func_67();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, player_ped_id(), sVar12, 0, 1);
	}
	if (is_synchronized_scene_running(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (is_synchronized_scene_running(iVar4) && !is_entity_dead(player_ped_id(), false))
		{
			if (!bVar8)
			{
				if (!is_screen_faded_out())
				{
					if (!is_string_null_or_empty(uParam1->f_26))
					{
						animpostfx_play(uParam1->f_26, 0, false);
						bVar8 = true;
					}
					if (!is_string_null_or_empty(uParam1->f_27))
					{
						if (!is_string_null_or_empty(uParam1->f_28))
						{
							play_sound_frontend(-1, uParam1->f_28, uParam1->f_27, false);
							bVar8 = true;
						}
						if (!is_string_null_or_empty(uParam1->f_29))
						{
							play_sound_frontend(-1, uParam1->f_29, uParam1->f_27, false);
							bVar8 = true;
						}
					}
				}
			}
			hide_hud_and_radar_this_frame();
			hide_hud_component_this_frame(18);
			clear_reminder_message();
			func_40(0);
			iVar15 = get_game_timer();
			if (iVar15 >= (Global_43603 - 500))
			{
				func_39(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = get_synchronized_scene_phase(iVar4);
			if (!is_string_null_or_empty(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (has_anim_event_fired(player_ped_id(), get_hash_key(sVar13)))
			{
				iVar19 = (get_control_value(2, 195) - 128);
				iVar20 = (get_control_value(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (get_follow_ped_cam_view_mode() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						Var22 = { get_final_rendered_cam_coord() };
						Var23 = { get_ped_bone_coords(player_ped_id(), 31086, 0f, 0f, 0f) };
						fVar24 = get_distance_between_coords(Var22, Var23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), player_ped_id(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = get_game_timer();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var27 = { get_final_rendered_cam_rot(2) };
							fVar28 = get_entity_heading(player_ped_id());
							fVar29 = Var27.f_2;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						set_gameplay_cam_relative_pitch(fVar25, 1f);
						set_gameplay_cam_relative_heading(fVar26);
						_set_gameplay_cam_raw_pitch(fVar25);
						_set_gameplay_cam_raw_yaw(fVar26);
						Var31 = { get_final_rendered_cam_coord() };
						Var32 = { get_gameplay_cam_coord() };
						fVar33 = get_distance_between_coords(Var31, Var32, true);
						iVar34 = round((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (has_anim_event_fired(player_ped_id(), get_hash_key(sVar14)) || iVar18)
			{
				if (!is_entity_dead(player_ped_id(), false))
				{
					clear_ped_tasks(player_ped_id());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							force_ped_motion_state(player_ped_id(), joaat("MotionState_Idle"), true, 0, false);
							stop_rendering_script_cams_using_catch_up(false, 0f, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							force_ped_motion_state(player_ped_id(), joaat("MotionState_Walk"), true, 0, false);
							simulate_player_input_gait(player_id(), 1f, 500, 0f, true, false);
							if (get_follow_ped_cam_view_mode() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var37 = { get_final_rendered_cam_rot(2) };
									fVar38 = get_entity_heading(player_ped_id());
									fVar39 = Var37.f_2;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								set_gameplay_cam_relative_pitch(fVar35, 1f);
								set_gameplay_cam_relative_heading(fVar36);
								Var41 = { get_final_rendered_cam_coord() };
								Var42 = { get_gameplay_cam_coord() };
								fVar43 = get_distance_between_coords(Var41, Var42, true);
								iVar44 = round((fVar43 * 1000f));
								render_script_cams(false, true, iVar44, false, false, 0);
							}
							break;
						
						default:
							break;
					}
					if (is_synchronized_scene_running(iVar4))
					{
						detach_synchronized_scene(iVar4);
						iVar4 = -1;
					}
				}
			}
			wait(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		set_roads_back_to_original(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	set_player_control(player_id(), true, 0);
	if (!is_entity_dead(player_ped_id(), false))
	{
		clear_ped_tasks(player_ped_id());
	}
	bVar45 = _0x3044240D2E0FA842();
	bVar46 = false;
	if (uParam1->f_32)
	{
		_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !is_player_switch_in_progress())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			wait(0);
			bVar45 = _0x3044240D2E0FA842();
			bVar46 = false;
			if (uParam1->f_32)
			{
				_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!is_string_null_or_empty(uParam1->f_16))
	{
		remove_anim_dict(uParam1->f_16);
	}
	remove_anim_dict(*uParam1);
	destroy_cam(iVar5, false);
	func_13(&(uParam1->f_34));
	if (!is_entity_dead(player_ped_id(), false))
	{
		set_ped_reset_flag(player_ped_id(), 77, bVar3);
		set_entity_invincible(player_ped_id(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (does_cam_exist(uParam0->f_1))
	{
		destroy_cam(uParam0->f_1, false);
	}
	if (does_cam_exist(uParam0->f_2))
	{
		destroy_cam(uParam0->f_2, false);
	}
	if (does_cam_exist(uParam0->f_3))
	{
		destroy_cam(uParam0->f_3, false);
	}
	if (does_cam_exist(uParam0->f_4))
	{
		destroy_cam(uParam0->f_4, false);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	disable_control_action(iParam0, iParam1, true);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!is_entity_dead(uParam0->f_5, false))
			{
				func_14(uParam0);
				Var0 = { get_final_rendered_cam_coord() };
				if (bParam1)
				{
					Var0 = { Var0 + get_entity_velocity(uParam0->f_5) * FtoV(get_frame_time()) };
				}
				Var1 = { get_offset_from_entity_given_world_coords(uParam0->f_5, Var0) };
				Var2 = { get_final_rendered_cam_rot(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - get_entity_rotation(uParam0->f_5, 2) };
				Var5 = { (-sin(Var3.f_2) * cos(Var3.f_0)), (cos(Var3.f_2) * cos(Var3.f_0)), sin(Var3.f_0) };
				Var6 = { (-sin(Var4.f_2) * cos(Var4.f_0)), (cos(Var4.f_2) * cos(Var4.f_0)), sin(Var4.f_0) };
				fVar7 = get_final_rendered_cam_fov();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = create_camera(1775630800, false);
				}
				uParam0->f_1 = create_camera(26379945, true);
				if (bParam1)
				{
					attach_cam_to_entity(uParam0->f_1, uParam0->f_5, Var1, true);
				}
				else
				{
					set_cam_coord(uParam0->f_1, Var0);
				}
				set_cam_rot(uParam0->f_1, Var2, 2);
				set_cam_fov(uParam0->f_1, fVar7);
				uParam0->f_2 = create_camera(26379945, true);
				if (bParam1 && !bParam4)
				{
					attach_cam_to_entity(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), true);
				}
				else
				{
					set_cam_coord(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				set_cam_rot(uParam0->f_2, Var2, 2);
				set_cam_fov(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = create_camera(26379945, true);
					if (bParam1 && !bParam4)
					{
						attach_cam_to_entity(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), true);
					}
					else
					{
						set_cam_coord(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					set_cam_rot(uParam0->f_4, Var2, 2);
					set_cam_fov(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					add_cam_spline_node_using_camera(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						add_cam_spline_node_using_camera(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					add_cam_spline_node_using_camera(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					set_cam_spline_smoothing_style(uParam0->f_3, iParam6);
					set_cam_active(uParam0->f_3, true);
				}
				else
				{
					set_cam_active_with_interp(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				render_script_cams(true, false, 3000, true, false, 0);
				uParam0->f_7 = get_game_timer();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (get_game_timer() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									animpostfx_play("CamPushInFranklin", 0, false);
									break;
								
								case 0:
									animpostfx_play("CamPushInMichael", 0, false);
									break;
								
								case 2:
									animpostfx_play("CamPushInTrevor", 0, false);
									break;
							}
						}
						else
						{
							animpostfx_play("CamPushInNeutral", 0, false);
						}
						play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
			if (get_game_timer() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					render_script_cams(false, false, 3000, true, false, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	_stop_recording_this_frame();
	func_18();
}

void func_18()
{
	Global_23011.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					stop_scripted_conversation(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_35();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			clear_bit(&Global_8136, 20);
			clear_bit(&Global_8137, 17);
			clear_bit(&Global_8138, 0);
			if (bParam2)
			{
				func_33();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return 0;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return 0;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return 0;
					}
					if (is_player_climbing(player_id()))
					{
						return 0;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return 0;
					}
					if (is_special_ability_active(player_id(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_25()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_28())
	{
		return 0;
	}
	if (func_26(player_id()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[player_id() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (network_is_activity_session())
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_21605 = 1;
}

void func_30()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	clear_bit(&Global_8137, 16);
}

int func_31()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, true);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(player_ped_id(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_33()
{
	if (func_34(14))
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
		Global_20266 = func_67();
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

bool func_34(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
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

void func_37()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_21605 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = uParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

void func_39(int iParam0)
{
	Global_43603 = (get_game_timer() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		set_bit(&Global_8137, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_20266.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return BitTest(Global_1958711, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return BitTest(Global_1958711, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!is_ped_injured(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, false);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, true);
			}
		}
		if (!is_ped_injured(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, false);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, true);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		apply_ped_damage_pack(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/] && !Global_97374[iVar0 /*17*/].f_1)
		{
			if (Global_97374[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97374[iVar0 /*17*/].f_5 != 88 && Global_97374[iVar0 /*17*/].f_5 != 89) && Global_97374[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_97374[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_171(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_43998[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
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

int func_57(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (is_player_playing(player_id()))
	{
		func_61(0);
		clear_area(Param0, 5f, true, false, false, false);
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				set_entity_coords(player_ped_id(), Param0, true, false, false, true);
				set_entity_heading(player_ped_id(), fParam1);
				set_gameplay_cam_relative_pitch(0f, 1f);
				set_gameplay_cam_relative_heading(0f);
			}
		}
		new_load_scene_start_sphere(Param0, 4500f, 0);
		wait(0);
		clear_area(Param0, 5000f, true, false, false, false);
		clear_area_of_objects(Param0, 5000f, 0);
		remove_particle_fx_in_range(Param0, 5000f);
		remove_decals_in_range(Param0, 5000f);
		func_60();
		func_59();
		settimera(0);
		func_61(1);
		if (!is_new_load_scene_active())
		{
			while (!new_load_scene_start_sphere(Param0, 4500f, 0))
			{
				wait(0);
				if (timera() > 2000)
				{
					set_game_paused(false);
					return 0;
				}
			}
		}
		settimera(0);
		while (!is_new_load_scene_loaded())
		{
			wait(0);
			if (timera() > 20000)
			{
				set_game_paused(false);
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
				return 0;
			}
		}
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_new_load_scene_active())
				{
					new_load_scene_stop();
				}
				set_game_paused(false);
				settimera(0);
				instantly_fill_ped_population();
				if (iParam3 == 1)
				{
					instantly_fill_vehicle_population();
				}
				else
				{
					settimera(5000);
				}
				populate_now();
			}
		}
		while ((!has_instant_fill_vehicle_population_finished() && !func_58()) && timera() < 1500)
		{
			wait(0);
		}
		if (timera() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			get_ground_z_for_3d_coord(Param0, &(Param0.f_2), false, false);
			clear_area(Param0, 5f, true, false, false, false);
			if (does_entity_exist(player_ped_id()))
			{
				if (!is_ped_injured(player_ped_id()))
				{
					set_entity_coords(player_ped_id(), Param0, true, false, false, true);
					set_entity_heading(player_ped_id(), fParam1);
				}
			}
		}
		set_gameplay_cam_relative_pitch(0f, 1f);
		set_gameplay_cam_relative_heading(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_77137.f_553;
}

void func_59()
{
	Global_77137.f_553 = 1;
	Global_77137.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_77137[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(Global_100441.f_20, 2))
			{
				set_game_paused(true);
				set_bit(&(Global_100441.f_20), 2);
			}
		}
		else if (BitTest(Global_100441.f_20, 2))
		{
			set_game_paused(false);
			clear_bit(&(Global_100441.f_20), 2);
		}
	}
}

int func_62()
{
	if (BitTest(get_random_int_in_range(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_39990[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_71(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_70(player_ped_id());
			if (func_69(iVar0) && (!func_34(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_69(Global_113386.f_2363.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_73(bool bParam0)
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
	func_74();
}

void func_74()
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

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18209;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18199;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18210;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18202;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18198;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18213;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18214;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18217;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18218;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18211;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19100;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19099;
			break;
	}
	if (iVar0 != 0)
	{
		_playstats_earned_mc_points(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(3971, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1892703[player_id() /*599*/].f_10.f_468 = iVar0;
	func_77(3971, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1574918;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_78(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = player_id();
	Global_1892703[iVar0 /*599*/].f_10.f_467 = (Global_1892703[iVar0 /*599*/].f_10.f_467 + iParam0);
	if (Global_1892703[iVar0 /*599*/].f_10.f_467 < -9999)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_467 = 9999;
	}
	else if (Global_1892703[iVar0 /*599*/].f_10.f_467 > 9999)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_467 = 9999;
	}
}

int func_82()
{
	if (Global_1943929.f_3 != 0)
	{
		return Global_1943929.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1943929.f_2 != 0)
	{
		return Global_1943929.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_8[0];
}

int func_86()
{
	return Global_1892703[player_id() /*599*/].f_10;
}

bool func_87(bool bParam0)
{
	return func_88(player_id(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_28() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_28())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_104())
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
		if (!func_102())
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
				else if (bVar14 || (!func_100(player_id(), 0) && !func_99()))
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
					func_96(0, 0, 0);
					if (bVar25)
					{
						clear_focus();
					}
				}
				if (!func_95(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
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
					func_94();
					func_93();
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
				if (!func_95(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
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
					if (func_92(Global_4718592.f_168757))
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

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_94()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[player_id() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_95(int iParam0)
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

void func_96(bool bParam0, int iParam1, int iParam2)
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
				func_98();
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
				set_bit(&(Global_2621446.f_67), 1);
			}
		}
		if (func_100(player_id(), 0))
		{
			network_set_in_spectator_mode_extended(bParam0, iParam1, true);
		}
		else
		{
			network_set_in_spectator_mode(bParam0, iParam1);
		}
		set_minimap_in_spectator_mode(bParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_bool(iVar0, bParam1, true);
	}
}

void func_98()
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
			set_bit(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_99()
{
	return BitTest(Global_2621446, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_101(-1, 0) == 8;
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

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1574632.f_18;
}

int func_104()
{
	if (BitTest(Global_1853348[player_id() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (network_is_game_in_progress() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = get_network_time_accurate();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

void func_106()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = get_random_int_in_range(500, 3000);
	Local_52.f_0 = 5;
	Local_51.f_2 = (timera() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (is_ped_injured(Local_43.f_1))
	{
		if (is_ped_in_any_vehicle(Local_43.f_1, false) || is_ped_getting_into_a_vehicle(Local_43.f_1))
		{
			return 0;
		}
		if (is_entity_waiting_for_world_collision(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0) && Global_44024[iLocal_54 /*5*/].f_3 > Global_44024[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_44024[iLocal_54 /*5*/].f_4 < 9 && Global_44024[iLocal_54 /*5*/].f_4 != 0) && Global_44024[iLocal_54 /*5*/].f_4 > Global_44024[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_113(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	request_clip_set(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!is_string_null_or_empty(sVar2) && !is_string_null_or_empty(sVar3))
		{
			request_anim_dict(sVar2);
			while (!has_anim_dict_loaded(sVar2))
			{
				wait(0);
			}
			if (!is_ped_injured(Local_43.f_1))
			{
				task_play_anim(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0f, false, false, false);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!has_clip_set_loaded(sVar1))
	{
		return 0;
	}
	if (is_ped_injured(Local_43.f_1))
	{
		return 0;
	}
	set_ped_movement_clipset(Local_43.f_1, sVar1, 0.75f);
	if (get_follow_ped_cam_view_mode() == 4)
	{
		set_ped_strafe_clipset(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	set_ped_alternate_movement_anim(Local_43.f_1, 0, sVar1, "idle", 2f, true);
	Local_52.f_2 = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (is_ped_a_player(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (is_ped_male(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	set_facial_idle_anim_override(Local_43.f_1, "mood_drunk_1", iVar4);
	set_ped_reset_flag(Local_43.f_1, 200, true);
	set_ped_reset_flag(Local_43.f_1, 46, true);
	set_ped_can_play_ambient_anims(Local_43.f_1, false);
	set_ped_flee_attributes(Local_43.f_1, 262144, true);
	set_ped_is_drunk(Local_43.f_1, true);
	return 1;
}

bool func_108()
{
	return func_109(player_id());
}

int func_109(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	
	if (is_ped_in_any_vehicle(iParam0, true) || is_ped_getting_into_a_vehicle(iParam0))
	{
		return 0;
	}
	if (get_script_task_status(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (get_script_task_status(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (is_ped_shooting(iParam0))
	{
		return 0;
	}
	if (is_entity_in_air(iParam0))
	{
		return 0;
	}
	if (is_ped_ragdoll(iParam0))
	{
		return 0;
	}
	if (is_ped_climbing(iParam0))
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == player_ped_id())
	{
		if (!is_player_free_for_ambient_task(player_id()))
		{
			return 0;
		}
		if (!is_player_control_on(player_id()))
		{
			return 0;
		}
		if (is_player_free_aiming(player_id()) || is_player_targetting_anything(player_id()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	Var0 = { get_entity_velocity(iParam0) };
	if (vmag2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_100493.f_376 > 0;
}

bool func_112()
{
	return get_game_timer() <= Global_23150.f_6269 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_114(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_115(iParam0);
	sVar1 = func_113(iVar0);
	if (is_string_null_or_empty(Local_52.f_2))
	{
		if (is_string_null_or_empty(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return are_strings_equal(Local_52.f_2, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44024[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
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

int func_117(int iParam0)
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

int func_118()
{
	int iVar0;
	
	if (Local_51.f_0 == -2)
	{
		return -2;
	}
	if (Local_51.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51.f_0 - timera());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		Local_52.f_0 = 5;
		Local_51.f_2 = timera() + 5000;
		return;
	}
	Local_52.f_0 = 6;
}

bool func_120()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (is_entity_dead(Local_43.f_4, false))
	{
		return 0;
	}
	Var0 = { get_entity_coords(Local_43.f_1, true) };
	Var1 = { get_entity_coords(Local_43.f_4, true) };
	fVar2 = get_distance_between_coords(Var0, Var1, true);
	return fVar2 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == player_ped_id())
	{
		disable_control_action(0, 36, true);
		if (get_ped_stealth_movement(Local_43.f_1))
		{
			if (Global_44024[iLocal_54 /*5*/].f_2 == 0 || Global_44024[iLocal_54 /*5*/].f_2 == 2)
			{
				set_ped_stealth_movement(Local_43.f_1, false, 0);
			}
		}
		if (is_ped_ducking(Local_43.f_1))
		{
			set_ped_ducking(Local_43.f_1, false);
		}
	}
	if (Local_51.f_0 != -2)
	{
		if (Local_51.f_0 == -1)
		{
			if (Global_44024[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_44024[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51.f_0 - timera());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_44024[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_44024[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_44024[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_44024[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_44024[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_44024[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_44024[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!is_string_null_or_empty(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (is_entity_playing_anim(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				stop_anim_task(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_44024[iLocal_54 /*5*/].f_3 >= 10 || Global_44024[iLocal_54 /*5*/].f_4 >= 15) || BitTest(Global_44241, 9))
	{
		if (get_script_task_status(Local_43.f_1, 1785177548) == 1 && !BitTest(Global_1946250.f_3, 27))
		{
			return;
		}
		if (is_any_speech_playing(Local_43.f_1))
		{
			return;
		}
		if (is_ped_in_any_vehicle(Local_43.f_1, true))
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((network_is_game_in_progress() && Local_43.f_1 == player_ped_id()) && func_136(player_id())) && Global_262145.f_24379)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((network_is_game_in_progress() && Local_43.f_1 == player_ped_id()) && func_135())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((network_is_game_in_progress() && network_is_activity_session()) && func_134())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((network_is_game_in_progress() && network_is_activity_session()) && func_133())
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_130(player_id()))
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((network_is_game_in_progress() && Local_43.f_1 == player_ped_id()) && func_129(player_id())) && Global_262145.f_27022)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((network_is_game_in_progress() && Local_43.f_1 == player_ped_id()) && func_126(player_id())) && Global_262145.f_27055)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((network_is_game_in_progress() && Local_43.f_1 == player_ped_id()) && func_122(player_id()) == 15)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((network_is_game_in_progress() && Local_43.f_1 == player_ped_id()) && Global_75485) && !Global_43997)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_52.f_1 = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_127(Global_2689235[iParam0 /*453*/].f_318.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_127(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

bool func_130(int iParam0)
{
	return func_131(func_132(iParam0));
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_125(iParam0) == 256)
	{
		return func_123(iParam0);
	}
	return -1;
}

var func_133()
{
	return Global_2714762.f_24;
}

var func_134()
{
	return Global_2714762.f_21;
}

var func_135()
{
	return Global_2787908;
}

int func_136(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_127(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	if (!is_ped_sitting_in_any_vehicle(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = get_vehicle_ped_is_in(Local_43.f_1, false);
	if (!is_vehicle_driveable(iVar0, false))
	{
		return 0;
	}
	if (!get_ped_in_vehicle_seat(iVar0, -1, false) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_52.f_0 = 7;
	return 1;
}

void func_138()
{
	if (!is_ped_in_any_vehicle(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
}

void func_139()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!is_player_playing(player_id()))
	{
		return;
	}
	if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		return;
	}
	if (is_player_wanted_level_greater(player_id(), 0))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
	fVar1 = get_entity_speed(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { get_entity_coords(player_ped_id(), true) };
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!is_cop_vehicle_in_area_3d(Var3, Var4) && !is_cop_ped_in_area_3d(Var3, Var4))
	{
		return;
	}
	set_player_wanted_level_no_drop(player_id(), 1, false);
	set_player_wanted_level_now(player_id(), false);
	func_11(73, 1);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (is_ped_in_any_vehicle(Local_43.f_1, false))
	{
		iVar1 = get_vehicle_ped_is_in(Local_43.f_1, false);
		iVar2 = get_ped_in_vehicle_seat(iVar1, -1, false);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (network_is_game_in_progress() && !network_has_control_of_entity(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!player_ped_id() == Local_43.f_1)
	{
		return;
	}
	else if (!get_follow_ped_cam_view_mode() == 4)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (timera() < Local_51.f_4)
	{
		func_142(iVar0, fLocal_49);
		return;
	}
	if (is_entity_a_ped(iVar0))
	{
		Local_51.f_4 = timera() + 2000;
	}
	else
	{
		Local_51.f_4 = timera() + 1000;
	}
	fVar3 = get_entity_speed(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - timera());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_49);
}

float func_141(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = get_random_float_in_range(-fParam1, fParam1);
	fVar1 = get_random_float_in_range(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (is_entity_a_ped(iParam0))
	{
		if (is_ped_sprinting(get_ped_index_from_entity_index(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = get_entity_model(iParam0);
		if (is_this_model_a_bike(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_142(int iParam0, float fParam1)
{
	if (network_is_game_in_progress() && !network_has_control_of_entity(iParam0))
	{
		return;
	}
	if (is_entity_a_ped(iParam0))
	{
		_0x288DF530C92DAD6F(get_ped_index_from_entity_index(iParam0), fParam1);
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		set_vehicle_steer_bias(get_vehicle_index_from_entity_index(iParam0), fParam1);
	}
}

void func_143()
{
	int iVar0;
	
	if (!is_ped_in_any_vehicle(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		return;
	}
	if (network_is_game_in_progress())
	{
		if (Global_44024[iLocal_54 /*5*/].f_3 >= 10 || Global_44024[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_44024[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44024[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44024[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44024[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(Local_43.f_1, false);
	if (!is_vehicle_driveable(iVar0, false))
	{
		task_leave_any_vehicle(Local_43.f_1, 0, 0);
		Local_52.f_0 = 11;
		return;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (timera() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = get_script_task_status(player_ped_id(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!is_ped_in_any_vehicle(Local_43.f_1, false))
	{
		Local_52.f_0 = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = get_vehicle_ped_is_in(Local_43.f_1, false);
	iVar2 = get_ped_in_vehicle_seat(iVar1, -1, false);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_51.f_3 = -2;
		return;
	}
	task_shuffle_to_next_vehicle_seat(Local_43.f_1, iVar1, 0);
	Local_52.f_0 = 9;
	Local_51.f_3 = timera() + 1000;
}

void func_145()
{
	if (Local_52.f_0 == 10)
	{
		return;
	}
	Local_52.f_0 = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_171(iLocal_44, 2, 5);
	Local_51.f_4 = timera();
	fLocal_49 = 0f;
}

void func_146()
{
	if (is_ped_sitting_in_any_vehicle(Local_43.f_1))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (timera() < Local_51.f_3)
	{
		return;
	}
	Local_52.f_0 = 4;
	Local_51.f_3 = -2;
}

void func_147()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || is_ped_sitting_in_any_vehicle(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = get_vehicle_ped_is_in(Local_43.f_1, false);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				task_leave_any_vehicle(Local_43.f_1, 0, 0);
				Local_52.f_0 = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = get_ped_in_vehicle_seat(Local_43.f_4, -1, false);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		task_shuffle_to_next_vehicle_seat(Local_43.f_1, iVar0, 0);
		Local_52.f_0 = 9;
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!func_120())
	{
		clear_ped_tasks(Local_43.f_1);
		Local_52.f_0 = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = get_script_task_status(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!is_ped_in_any_vehicle(Local_43.f_1, false))
			{
				clear_ped_tasks(Local_43.f_1);
				Local_52.f_0 = 4;
				return;
			}
		}
	}
}

void func_148()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_52.f_0 = 4;
		return;
	}
	if (!is_vehicle_driveable(Local_43.f_4, false))
	{
		Local_43.f_4 = 0;
		Local_52.f_0 = 4;
		return;
	}
	Var0 = { get_entity_coords(Local_43.f_1, true) };
	Var1 = { get_entity_coords(Local_43.f_4, true) };
	fVar2 = get_distance_between_coords(Var0, Var1, true);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
		{
			Local_52.f_0 = 12;
			return;
		}
		Local_52.f_0 = 5;
		Local_51.f_2 = timera() + 2000;
		return;
	}
	iVar3 = get_vehicle_max_number_of_passengers(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (is_vehicle_seat_free(Local_43.f_4, iVar4, false))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			Local_52.f_0 = 4;
			return;
		}
	}
	func_149();
	task_enter_vehicle(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	Local_52.f_0 = 7;
}

void func_149()
{
	if (!does_entity_exist(Local_43.f_1))
	{
		return;
	}
	if (!is_ped_injured(Local_43.f_1))
	{
		reset_ped_movement_clipset(Local_43.f_1, 0.25f);
		reset_ped_strafe_clipset(Local_43.f_1);
		clear_ped_alternate_movement_anim(Local_43.f_1, 0, -8f);
		Local_52.f_2 = "";
		clear_facial_idle_anim_override(Local_43.f_1);
		set_ped_reset_flag(Local_43.f_1, 200, false);
		set_ped_reset_flag(Local_43.f_1, 46, false);
		set_ped_can_play_ambient_anims(Local_43.f_1, true);
		set_ped_flee_attributes(Local_43.f_1, 262144, false);
		set_ped_is_drunk(Local_43.f_1, false);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_150()
{
	if (timera() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_51.f_2 = -2;
	Local_52.f_0 = 12;
}

int func_151()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_152(Local_43.f_1);
	Local_52.f_2 = "";
	Global_2815059.f_4607 = 1;
	return 1;
}

void func_152(int iParam0)
{
	reset_ped_movement_clipset(iParam0, 0.25f);
	clear_ped_alternate_movement_anim(iParam0, 0, -8f);
	set_ped_reset_flag(iParam0, 200, false);
	set_ped_can_play_ambient_anims(iParam0, true);
	set_ped_flee_attributes(iParam0, 262144, false);
	set_ped_is_drunk(iParam0, false);
}

void func_153()
{
	int iVar0;
	
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (is_ped_in_any_vehicle(Local_43.f_1, false))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_52.f_0 = 12;
		return;
	}
	if (Local_51.f_0 == -2)
	{
		return;
	}
	if (!func_107(Global_44024[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	Local_52.f_0 = 12;
}

void func_154()
{
}

void func_155()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_44105[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_44105[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_157(iVar1);
				func_156(iVar1);
			}
			else if (Global_44105[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_44105[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_156(int iParam0)
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

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_44105[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		
		case 2:
			func_161(Global_44105[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_160(Global_44105[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_159();
			break;
		
		case 5:
			func_158();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_158()
{
	Local_52.f_1 = 2;
}

void func_159()
{
	int iVar0;
	
	Global_44024[iLocal_54 /*5*/].f_4++;
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_4 < 9 && Global_44024[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44024[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	Global_44024[iLocal_54 /*5*/].f_3 = (Global_44024[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44024[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51.f_0 = (Local_51.f_0 + iParam0);
}

void func_162()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = get_player_wanted_level(player_id());
		return;
	}
	iVar0 = get_player_wanted_level(player_id());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_163();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_163()
{
}

void func_164()
{
	if (!Local_51.f_0 == -1)
	{
		if (!Local_51.f_0 == -2)
		{
			if (timera() >= Local_51.f_0)
			{
				func_149();
				Local_51.f_0 = -2;
				Local_52.f_0 = 12;
			}
		}
		if (timera() > Local_51.f_1)
		{
			func_178();
		}
	}
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44105[iVar0 /*6*/])
		{
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_52.f_0 = 4;
	if (!is_entity_dead(Local_43.f_1, false))
	{
		if (is_ped_sitting_in_any_vehicle(Local_43.f_1))
		{
			Local_52.f_0 = 10;
		}
	}
	if (bLocal_46)
	{
		func_169();
		func_11(71, 1);
		if (network_is_game_in_progress())
		{
			iVar0 = func_80(2059, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			func_77(2059, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			stat_get_int(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			stat_get_int(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			stat_get_int(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_167(iVar6);
			}
			switch (func_67())
			{
				case 0:
					stat_set_int(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, true);
					break;
				
				case 1:
					stat_set_int(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, true);
					break;
				
				case 2:
					stat_set_int(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, true);
					break;
				}
		}
		Local_52.f_1 = 1;
		return;
	}
	Local_52.f_1 = 12;
	if (Local_51.f_0 == -1)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44024[iLocal_54 /*5*/].f_3 < 3 && Global_44024[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44024[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51.f_0 - timera());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_44024[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_44024[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = func_168(81);
	Global_2676732[iVar0 /*83*/] = 81;
	Global_2676732[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2676732[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2676732[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_169()
{
}

void func_170()
{
	Local_51.f_0 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_174(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_173();
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

int func_173()
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

int func_174(int iParam0, int iParam1, int iParam2)
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)
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

void func_176()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == player_ped_id())
	{
		bLocal_46 = true;
		Global_44237 = 1;
		Global_44239++;
	}
	if (!is_entity_dead(Local_43.f_1, false))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				set_ambient_voice_name(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				set_ambient_voice_name(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_178()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!is_entity_dead(Local_43.f_1, false))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_44024[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					set_ambient_voice_name(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					set_ambient_voice_name(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_46)
	{
		Global_44237 = 0;
	}
	func_179();
	remove_anim_dict(func_113(0));
	remove_anim_dict(func_113(2));
	remove_anim_dict(func_113(1));
	Global_1940653 = 0;
	if (_get_number_of_references_of_script_with_name_hash(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	terminate_this_thread();
}

void func_179()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_entity_dead(Local_43.f_1, false))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (is_ped_in_any_vehicle(Local_43.f_1, false))
	{
		iVar1 = get_vehicle_ped_is_in(Local_43.f_1, false);
		iVar2 = get_ped_in_vehicle_seat(iVar1, -1, false);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!get_follow_ped_cam_view_mode() == 4 || !player_ped_id() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_142(iVar0, 0f);
}

void func_180(int iParam0, char* sParam1, int iParam2)
{
	play_ped_ambient_speech_native(iParam0, sParam1, func_181(iParam2), 1);
}

int func_181(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

