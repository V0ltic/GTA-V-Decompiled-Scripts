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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	struct<3> Local_94[32];
	var uLocal_95 = 0;
	struct<349> Local_96 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	struct<12> Local_100 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (network_is_game_in_progress())
	{
		func_526(ScriptParam_100);
	}
	else
	{
		func_495(0);
	}
	while (true)
	{
		func_494();
		if (func_486())
		{
			func_495(0);
		}
		if (func_480())
		{
			func_495(0);
		}
		func_2();
		if (network_is_host_of_this_script())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_479(6))
	{
		func_478();
		func_477();
		func_476();
		func_472();
		func_471();
	}
	func_468();
	func_466();
	func_462();
	func_459();
	if (func_479(0))
	{
		func_410();
	}
	else if (func_479(1))
	{
		if (!func_409())
		{
			func_402();
			func_385();
		}
		else
		{
			func_384(1);
			func_383(7);
		}
	}
	else if (func_479(2))
	{
		func_376();
	}
	else if (func_479(3))
	{
		func_368();
	}
	else if (func_479(4))
	{
		func_367();
		func_366();
		func_364();
		func_363();
		func_362();
		func_361();
		func_360();
		func_352();
		func_348();
		func_332();
		func_330();
		func_287();
		func_286();
		func_270();
		func_376();
		func_267();
		if (func_260(0))
		{
			func_259();
			return;
		}
		func_255();
		func_249();
		func_237(0);
		func_221();
		func_212();
		func_204();
		func_182();
		func_175();
		func_173();
		func_99();
		func_84();
		func_82();
		func_81();
	}
	else if (func_479(5))
	{
		func_33();
	}
	else if (func_479(7))
	{
		func_26();
	}
	if (!func_479(4) && !func_479(6))
	{
		func_20();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()
{
	Local_96.f_45++;
	if (Local_96.f_45 >= 32)
	{
		Local_96.f_45 = 0;
	}
}

void func_4()
{
	if (Local_96.f_45 != -1)
	{
		if (network_does_entity_exist_with_network_id(Local_94[Local_96.f_45 /*3*/].f_2))
		{
			if (Global_1911933[player_id() /*260*/].f_60[Local_96.f_45] != net_to_obj(Local_94[Local_96.f_45 /*3*/].f_2))
			{
				Global_1911933[player_id() /*260*/].f_60[Local_96.f_45] = net_to_obj(Local_94[Local_96.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = int_to_playerindex(Local_96.f_45);
	if (player_id() != iVar0)
	{
		if (func_19(iVar0, 1, 1))
		{
			if (func_17(func_18()))
			{
				if (BitTest(Local_96.f_7, Local_96.f_45))
				{
					if (!network_is_player_a_participant(iVar0) && !network_is_player_a_participant_on_script(iVar0, "AM_MP_DRONE", 0))
					{
						clear_bit(&(Local_96.f_7), Local_96.f_45);
					}
				}
				if (func_14(iVar0, 0))
				{
					if (!BitTest(Local_96.f_7, Local_96.f_45) && func_9(iVar0))
					{
						func_7(iVar0, 1);
						set_network_id_always_exists_for_player(Local_96.f_159, iVar0, true);
						set_bit(&(Local_96.f_7), Local_96.f_45);
					}
				}
				else if ((vdist2(func_6(iVar0), Local_96.f_150) > 504100f && !func_479(1)) && !func_479(3))
				{
					if (BitTest(Local_96.f_7, Local_96.f_45))
					{
						func_7(iVar0, 0);
						set_network_id_always_exists_for_player(Local_96.f_159, iVar0, false);
						clear_bit(&(Local_96.f_7), Local_96.f_45);
						clear_bit(&(Local_96.f_8), Local_96.f_45);
					}
				}
			}
			else if (func_14(iVar0, 1) && func_9(iVar0))
			{
				if (!BitTest(Local_96.f_8, Local_96.f_45))
				{
					func_7(iVar0, 1);
					set_bit(&(Local_96.f_8), Local_96.f_45);
				}
			}
			else if (BitTest(Local_96.f_8, Local_96.f_45))
			{
				func_7(iVar0, 0);
				clear_bit(&(Local_96.f_8), Local_96.f_45);
				clear_bit(&(Local_96.f_7), Local_96.f_45);
			}
		}
	}
}

Vector3 func_6(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = -922462511;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam1;
	iVar1 = func_8(iParam0);
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 3, iVar1);
	}
}

var func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		set_bit(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)
{
	if (func_13(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0)
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

int func_11(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_12()
{
	return -1;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_12())
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

int func_14(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_13(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	Var0 = { func_6(iParam0) };
	if (bParam1)
	{
		if (func_16())
		{
			if (func_17(func_15()))
			{
				if (vdist2(Var0, get_entity_coords(func_15(), true)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (vdist2(Var0, Local_96.f_150) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1853194 != func_12())
	{
		if (does_entity_exist(Global_1640763))
		{
			return Global_1640763;
		}
		if (does_entity_exist(Global_1963860[Global_1853194]))
		{
			return Global_1963860[Global_1853194];
		}
	}
	return -1;
}

bool func_16()
{
	return BitTest(Global_1958711.f_2, 8);
}

int func_17(int iParam0)
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

int func_18()
{
	if (player_id() != -1)
	{
		return Global_1958711.f_20;
	}
	return -1;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	int iVar0;
	
	if (Local_96.f_156)
	{
		if (func_25(&(Local_96.f_249)))
		{
			if (func_24())
			{
				iVar0 = Global_262145.f_25339;
			}
			else
			{
				iVar0 = Global_262145.f_24692;
			}
			if (func_22(&(Local_96.f_249), iVar0, 0))
			{
				func_21(&(Local_96.f_249));
				Local_96.f_18 = 100;
				clear_bit(&(Local_96.f_5), 4);
				clear_bit(&(Local_96.f_5), 3);
				clear_bit(&(Local_96.f_5), 24);
				Local_96.f_156 = 0;
			}
		}
	}
}

void func_21(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_22(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_23(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0, bool bParam1, bool bParam2)
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

bool func_24()
{
	return BitTest(Global_1958711.f_2, 2);
}

bool func_25(var uParam0)
{
	return uParam0->f_1;
}

void func_26()
{
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			if (!func_27())
			{
				func_495(1);
			}
			else
			{
				func_495(0);
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
	else if (!func_27())
	{
		func_495(1);
	}
	else
	{
		func_495(0);
	}
}

int func_27()
{
	if (func_32())
	{
		return 1;
	}
	if (func_31())
	{
		return 1;
	}
	if (func_30() && func_28(player_id()))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_29(int iParam0)
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

bool func_30()
{
	return BitTest(Global_1958711.f_2, 5);
}

bool func_31()
{
	return BitTest(Global_1958711, 24);
}

bool func_32()
{
	return BitTest(Global_1958711, 16);
}

void func_33()
{
	int iVar0;
	
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(8);
	hide_hud_and_radar_this_frame();
	disable_control_action(0, 199, true);
	disable_control_action(0, 200, true);
	func_80();
	func_78();
	func_71(1);
	if (!BitTest(Local_96.f_5, 1))
	{
		if (!func_41() && !func_40())
		{
			if ((func_39() || func_24()) || func_38())
			{
				clear_ped_tasks_immediately(player_ped_id());
			}
		}
		if (network_does_entity_exist_with_network_id(Local_96.f_159))
		{
			set_entity_has_gravity(net_to_obj(Local_96.f_159), true);
		}
		if (has_sound_finished(Local_96.f_34))
		{
			Local_96.f_34 = get_sound_id();
			play_sound_frontend(Local_96.f_34, "HUD_Static_Loop", Local_96.f_157, true);
		}
		if (!func_37())
		{
			set_pad_shake(0, 300, 100);
			set_timecycle_modifier(func_36());
			set_bit(&(Local_96.f_6), 0);
		}
		set_bit(&(Local_96.f_5), 1);
	}
	else if (!func_25(&(Local_96.f_245)))
	{
		func_23(&(Local_96.f_245), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_35())
		{
			iVar0 = 500;
		}
		else if (func_16() && func_34())
		{
			iVar0 = 150;
		}
		if (func_22(&(Local_96.f_245), iVar0, 0) || func_37())
		{
			if (Local_96.f_38 == -1)
			{
				if (has_sound_finished(Local_96.f_38))
				{
					Local_96.f_38 = get_sound_id();
					play_sound_frontend(Local_96.f_38, "HUD_Disconnect", Local_96.f_157, true);
				}
			}
			func_384(1);
			func_383(7);
		}
	}
}

bool func_34()
{
	return Global_2815059.f_342;
}

bool func_35()
{
	return BitTest(Global_1958711.f_2, 4);
}

char* func_36()
{
	if (func_16())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_37()
{
	return BitTest(Global_1958711, 20);
}

bool func_38()
{
	return BitTest(Global_1958711.f_2, 3);
}

bool func_39()
{
	return BitTest(Global_1958711, 11);
}

bool func_40()
{
	return Global_2787908;
}

int func_41()
{
	if ((func_70(player_id(), 0) && Global_1581350 == 1) && func_42())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	char* sVar0;
	
	if ((Global_1581350 != -1 || Global_1581356 != -1) || Global_1581359 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_62(player_ped_id()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "enter_left", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "enter", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "exit", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "exit_left", 3)) || func_60(player_ped_id(), 2106541073))
		{
			return 0;
		}
		if (((((((((!is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !is_entity_playing_anim(player_ped_id(), sVar0, "base", 3)) && !is_entity_playing_anim(player_ped_id(), sVar0, "idle_a", 3)) && !is_entity_playing_anim(player_ped_id(), sVar0, "idle_b", 3)) && !is_entity_playing_anim(player_ped_id(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 1;
}

int func_43()
{
	int iVar0;
	
	if (func_59(player_id()))
	{
		iVar0 = func_58(player_id());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 4) && does_entity_exist(get_player_ped(iVar0))) && !is_ped_injured(get_player_ped(iVar0))) && is_ped_in_any_vehicle(get_player_ped(iVar0), false)) && does_entity_exist(get_vehicle_ped_is_in(get_player_ped(iVar0), false))) && func_56(get_vehicle_ped_is_in(get_player_ped(iVar0), false)))
			{
				return 1;
			}
			if (!func_55(Global_4718592.f_116524))
			{
				if (func_59(iVar0))
				{
					if (func_54(iVar0))
					{
						return 1;
					}
					else if (func_11(player_id()) || func_53())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1958740)
	{
		return 1;
	}
	if (func_52(player_id()))
	{
		iVar0 = func_51(player_id());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 9) && does_entity_exist(get_player_ped(iVar0))) && !is_ped_injured(get_player_ped(iVar0))) && is_ped_in_any_vehicle(get_player_ped(iVar0), false)) && does_entity_exist(get_vehicle_ped_is_in(get_player_ped(iVar0), false))) && get_entity_model(get_vehicle_ped_is_in(get_player_ped(iVar0), false)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_50(iVar0))
			{
				return 1;
			}
			else if (func_11(player_id()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_70(player_id(), 0))
	{
		iVar0 = func_49(player_id());
		if (func_19(iVar0, 0, 1))
		{
			if ((((Global_1853193 != func_12() && func_11(Global_1853193)) && func_29(func_57(Global_1853193)) == 11) && func_48(Global_1853193, -1)) && is_vehicle_model(get_vehicle_ped_is_in(get_player_ped(Global_1853193), false), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_47(iVar0))
			{
				return 1;
			}
			else if (func_11(player_id()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_46(player_id()))
	{
		if (player_id() != func_12())
		{
			iVar0 = Global_2689235[player_id() /*453*/].f_318.f_9;
			if (func_19(iVar0, 0, 1))
			{
				if (func_11(player_id()) || func_53())
				{
					return 1;
				}
			}
		}
	}
	if (func_52(player_id()) || func_45(player_id()))
	{
		switch (Global_1581356)
		{
			case 1:
				if (Global_262145.f_23120)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_23121)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_23122)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1581354 == 1)
	{
		return 1;
	}
	if (func_44(3))
	{
		if (Global_1835501 == 185)
		{
			if (Global_1836616 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_262145.f_5041[iParam0] == Global_4718592.f_116524;
}

int func_45(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 4);
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_19(iParam0, 1, 1))
	{
		if (is_ped_in_any_vehicle(get_player_ped(iParam0), false))
		{
			iVar0 = get_vehicle_ped_is_in(get_player_ped(iParam0), false);
			if (is_vehicle_driveable(iVar0, false))
			{
				if (player_ped_id() == get_ped_in_vehicle_seat(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_50(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 6);
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_52(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

var func_53()
{
	return BitTest(Global_1946250, 6);
}

int func_54(int iParam0)
{
	if (iParam0 != func_12())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 6);
	}
	return 0;
}

bool func_55(int iParam0)
{
	return Global_262145.f_5032[4] == iParam0;
}

int func_56(int iParam0)
{
	if (get_entity_model(iParam0) == joaat("hauler2") || get_entity_model(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_59(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (func_61(iParam0))
	{
		if (get_script_task_status(iParam0, iParam1) == 1 || get_script_task_status(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_17(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = get_entity_model(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_68(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_64(iVar0, iVar1, 6, 4);
			iVar3 = func_63(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && does_shop_ped_apparel_have_restriction_tag(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (does_shop_ped_apparel_have_restriction_tag(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar1 = (iParam1 - func_67(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = setup_shop_ped_apparel_query_tu(iParam3, 10, -1, true, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		get_shop_ped_query_prop(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		init_shop_ped_component(&Var3);
		iVar4 = (iParam1 - func_65(iParam0, func_66(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_78252.f_26[iParam2] && iParam1 == Global_78252[iParam2]) && Global_78252.f_13[iParam2] != 0)
		{
			return Global_78252.f_13[iParam2];
		}
		iVar5 = setup_shop_ped_apparel_query_tu(iParam3, 10, -1, false, -1, func_66(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		get_shop_ped_query_component(iVar4, &Var3);
		Global_78252.f_13[iParam2] = Var3.f_1;
		Global_78252[iParam2] = iParam1;
		Global_78252.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_66(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_69(iParam0, iVar1, iVar2, iParam1);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_66(iParam3);
	iVar1 = get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + get_number_of_ped_texture_variations(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (get_entity_model(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_12())
			{
				return func_29(Global_2689235[iParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

void func_71(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_76(0))
		{
			func_72(iParam0);
		}
		set_bit(&Global_8137, 2);
	}
}

void func_72(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_75())
		{
			func_74(1, 1);
		}
		else
		{
			func_74(0, 0);
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
	if (!func_73())
	{
		Global_20266.f_1 = 3;
	}
}

int func_73()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_74(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
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

bool func_75()
{
	return BitTest(Global_1958711, 5);
}

int func_76(int iParam0)
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

bool func_77()
{
	return BitTest(Global_1958711, 19);
}

void func_78()
{
	_stop_recording_this_frame();
	func_79();
}

void func_79()
{
	Global_23011.f_134 = 1;
}

void func_80()
{
	Global_1574839 = 1;
}

void func_81()
{
	if (func_30())
	{
		if (func_31())
		{
			if (func_17(player_ped_id()))
			{
				set_ped_reset_flag(player_ped_id(), 124, true);
			}
		}
	}
}

void func_82()
{
	char* sVar0;
	
	if (!func_83())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	request_named_ptfx_asset(sVar0);
	if (has_named_ptfx_asset_loaded(sVar0))
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159))
		{
			if (!does_particle_fx_looped_exist(Local_96.f_174[player_id()]))
			{
				use_particle_fx_asset(sVar0);
				if (func_35())
				{
					Local_96.f_174[player_id()] = start_particle_fx_looped_on_entity("scr_xs_guided_missile_trail", net_to_obj(Local_96.f_159), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_96.f_174[player_id()] = start_particle_fx_looped_on_entity("scr_xs_guided_missile_trail", net_to_obj(Local_96.f_159), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
}

int func_83()
{
	if (func_35())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (!does_entity_exist(Local_96.f_161))
		{
			request_model(func_98());
			if (has_model_loaded(func_98()))
			{
				if (!BitTest(Local_96.f_5, 6))
				{
					if (func_92(get_num_reserved_mission_objects(false, 0) + 1, 0, 1))
					{
						reserve_network_mission_peds(get_num_created_mission_peds(false) + 1);
						set_bit(&(Local_96.f_5), 6);
					}
				}
				else if (can_register_mission_peds(1))
				{
					Local_96.f_161 = create_ped(26, func_98(), Local_96.f_150, get_entity_heading(net_to_obj(Local_96.f_159)), false, false);
					set_entity_invincible(Local_96.f_161, true);
					set_entity_visible(Local_96.f_161, false, false);
					set_entity_has_gravity(Local_96.f_161, false);
					set_blocking_of_non_temporary_events(Local_96.f_161, true);
					set_model_as_no_longer_needed(func_98());
					set_ped_config_flag(Local_96.f_161, 118, false);
					set_ped_config_flag(Local_96.f_161, 108, true);
					set_ped_config_flag(Local_96.f_161, 208, true);
					set_entity_proofs(Local_96.f_161, true, true, true, true, true, false, false, false);
					attach_entity_to_entity(Local_96.f_161, net_to_obj(Local_96.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					set_entity_completely_disable_collision(Local_96.f_161, false, false);
					Global_1958711.f_23 = Local_96.f_161;
				}
			}
		}
		else if (func_17(Local_96.f_161))
		{
			if (is_entity_visible(Local_96.f_161))
			{
				set_entity_visible(Local_96.f_161, false, false);
			}
			if (!func_90(player_id()) && !func_87(player_id()))
			{
				if (get_player_wanted_level(player_id()) > 0)
				{
					func_86(Global_1837205);
				}
			}
			else if ((Global_1958711.f_4 == -1 || Global_1958711.f_4 == 0) || Global_1958711.f_4 == Global_1837194)
			{
				func_86(Global_1837205);
			}
			if (get_ped_relationship_group_default_hash(Local_96.f_161) != func_85())
			{
				set_ped_relationship_group_hash(Local_96.f_161, func_85());
			}
			if (!is_entity_attached(Local_96.f_161))
			{
				attach_entity_to_entity(Local_96.f_161, net_to_obj(Local_96.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				set_entity_completely_disable_collision(Local_96.f_161, false, false);
			}
		}
	}
}

int func_85()
{
	if (Global_1958711.f_4 != -1 && Global_1958711.f_4 != 0)
	{
		return Global_1958711.f_4;
	}
	return Global_1837205;
}

void func_86(int iParam0)
{
	if (Global_1958711.f_4 != iParam0)
	{
		Global_1958711.f_4 = iParam0;
	}
}

int func_87(int iParam0)
{
	if (func_89(iParam0) == 236 || func_89(iParam0) == 150)
	{
		return func_88(iParam0);
	}
	return 0;
}

int func_88(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

int func_89(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

bool func_90(int iParam0)
{
	return func_91(iParam0, 20);
}

var func_91(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

bool func_92(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(2, iParam0, 1, bParam1, bParam2);
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_97(iParam0) - func_96(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_95(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_96(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[player_id() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_94(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
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

int func_95(int iParam0)
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

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = player_id();
	switch (iParam0)
	{
		case 0:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return get_num_reserved_mission_peds(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return get_num_reserved_mission_vehicles(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!network_get_this_script_is_network_script())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return get_num_reserved_mission_objects(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_97(int iParam0)
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

int func_98()
{
	return joaat("g_m_m_chigoon_01");
}

void func_99()
{
	if (func_172())
	{
		return;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		if (does_cam_exist(Local_96.f_169) && is_cam_rendering(Local_96.f_169))
		{
			if (!func_83())
			{
				func_163();
				func_131();
			}
			else
			{
				func_112();
				func_102();
			}
			_disable_rockstar_editor_camera_changes();
			func_101(1);
			func_100(2);
		}
	}
}

void func_100(int iParam0)
{
	Global_1577896 = iParam0;
}

void func_101(int iParam0)
{
	Global_1649593.f_1163 = iParam0;
}

void func_102()
{
	int iVar0;
	
	if (!has_scaleform_movie_loaded(Local_96.f_170))
	{
		if (func_16())
		{
			Local_96.f_170 = func_111();
		}
		else
		{
			Local_96.f_170 = func_110();
		}
		return;
	}
	iVar0 = func_18();
	if (iVar0 < 0 || !func_17(iVar0))
	{
		return;
	}
	if (func_16())
	{
		func_106();
	}
	func_105(Local_96.f_170, 0);
	func_104(Local_96.f_170, 3, 3, 3);
	func_103(Local_96.f_170, 0f, 0f, 0f, 0f, (get_entity_heading(iVar0) + 180f));
	set_script_gfx_draw_order(1);
	draw_scaleform_movie_fullscreen(Local_96.f_170, 255, 255, 255, 0, 0);
}

void func_103(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	begin_scaleform_movie_method(iParam0, "SET_ALT_FOV_HEADING");
	scaleform_movie_method_add_param_float(fParam1);
	scaleform_movie_method_add_param_float(fParam2);
	scaleform_movie_method_add_param_float(fParam5);
	end_scaleform_movie_method();
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	begin_scaleform_movie_method(iParam0, "SET_WEAPON_VALUES");
	scaleform_movie_method_add_param_int(iParam1);
	scaleform_movie_method_add_param_int(iParam2);
	scaleform_movie_method_add_param_int(iParam3);
	end_scaleform_movie_method();
}

void func_105(int iParam0, bool bParam1)
{
	begin_scaleform_movie_method(iParam0, "SET_ZOOM_VISIBLE");
	scaleform_movie_method_add_param_bool(bParam1);
	end_scaleform_movie_method();
}

void func_106()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_16())
	{
		iVar0 = 10;
	}
	fVar1 = Local_96.f_120;
	if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))))
	{
		if (has_sound_finished(Local_96.f_37))
		{
			Local_96.f_37 = get_sound_id();
			play_sound_frontend(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
		}
		if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))) && fVar1 < (func_109() - IntToFloat((45 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((45 * iVar0))) && fVar1 < (func_109() - IntToFloat((40 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((40 * iVar0))) && fVar1 < (func_109() - IntToFloat((35 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((35 * iVar0))) && fVar1 < (func_109() - IntToFloat((30 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((30 * iVar0))) && fVar1 < (func_109() - IntToFloat((25 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((25 * iVar0))) && fVar1 < (func_109() - IntToFloat((20 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((20 * iVar0))) && fVar1 < (func_109() - IntToFloat((15 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((15 * iVar0))) && fVar1 < (func_109() - IntToFloat((10 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((10 * iVar0))) && fVar1 < (func_109() - IntToFloat((5 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((5 * iVar0))) && fVar1 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!has_sound_finished(Local_96.f_37))
		{
			stop_sound(Local_96.f_37);
			release_sound_id(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_107(float fParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_WARNING_FLASH_RATE");
	scaleform_movie_method_add_param_float(fParam0);
	end_scaleform_movie_method();
}

void func_108(char* sParam0, bool bParam1)
{
	begin_scaleform_movie_method(Local_96.f_170, sParam0);
	scaleform_movie_method_add_param_bool(bParam1);
	end_scaleform_movie_method();
}

float func_109()
{
	if (Global_1958711.f_8 == 0f)
	{
		return Global_262145.f_24700;
	}
	return Global_1958711.f_8;
}

int func_110()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4718592.f_162543)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return request_scaleform_movie(sVar0);
}

int func_111()
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return request_scaleform_movie(sVar0);
}

void func_112()
{
	if (func_16())
	{
		if (!func_130())
		{
			return;
		}
	}
	if (!BitTest(Local_96.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(20, "DRONE_SPACE", -1);
			func_126(21, "DRONE_POSITION", -1);
			if (func_35())
			{
				if (!_is_using_keyboard(0))
				{
					func_125(208, "DRONE_SPEEDU", -1, 0);
					func_125(207, "DRONE_SLOWD", -1, 0);
				}
				else
				{
					func_125(209, "DRONE_SPEEDU", -1, 0);
					func_125(210, "DRONE_SLOWD", -1, 0);
				}
			}
			func_125(75, "MOVE_DRONE_RE", -1, 0);
			set_bit(&(Local_96.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (_is_using_keyboard(0))
	{
		if (!BitTest(Local_96.f_5, 17))
		{
			set_bit(&(Local_96.f_5), 17);
			clear_bit(&(Local_96.f_5), 16);
		}
	}
	else if (BitTest(Local_96.f_5, 17))
	{
		clear_bit(&(Local_96.f_5), 17);
		clear_bit(&(Local_96.f_5), 16);
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_124(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_121(bParam4, bParam8))
	{
		return;
	}
	if (func_119())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_116(player_id(), 0))
		{
			return;
		}
	}
	if (is_pc_version())
	{
		if (update_onscreen_keyboard() == 0 || _network_is_text_chat_active())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), get_control_instructional_button(2, Global_23150.f_5417[iVar1], true), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), get_control_group_instructional_button(2, Global_23150.f_5430[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			end_scaleform_movie_method();
			begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			scaleform_movie_method_add_param_float((1f - (Global_23150.f_5472 / 100f)));
			end_scaleform_movie_method();
			if (is_pc_version())
			{
				begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				scaleform_movie_method_add_param_bool(true);
				end_scaleform_movie_method();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (get_hash_key(&(Global_23150.f_5355[iVar1 /*4*/])) != get_hash_key("PREV"))
				{
					begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					scaleform_movie_method_add_param_int(iVar1);
					func_115(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && get_hash_key(&(Global_23150.f_5355[iVar2 /*4*/])) == get_hash_key("PREV"))
					{
						func_115(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_114(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						begin_text_command_scaleform_string(&(Global_23150.f_5355[iVar1 /*4*/]));
						if (bParam5)
						{
							add_text_component_substring_time(iVar3, 70);
						}
						else
						{
							add_text_component_integer(iVar3);
						}
						end_text_command_scaleform_string();
					}
					if (is_pc_version())
					{
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							scaleform_movie_method_add_param_bool(true);
							scaleform_movie_method_add_param_int(Global_23150.f_5417[iVar1]);
						}
						else
						{
							scaleform_movie_method_add_param_bool(false);
							scaleform_movie_method_add_param_int(363);
						}
					}
					end_scaleform_movie_method();
				}
				iVar1++;
			}
			if (get_hash_key(&(Global_4539885.f_16)) != get_hash_key(""))
			{
				begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				scaleform_movie_method_add_param_int(Global_23150.f_5160);
				func_115(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_114(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					begin_text_command_scaleform_string(&(Global_4539885.f_16));
					if (bParam5)
					{
						add_text_component_substring_time(iVar4, 70);
					}
					else
					{
						add_text_component_integer(iVar4);
					}
					end_text_command_scaleform_string();
				}
				end_scaleform_movie_method();
			}
			begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			scaleform_movie_method_add_param_int(0);
			scaleform_movie_method_add_param_int(0);
			scaleform_movie_method_add_param_int(0);
			scaleform_movie_method_add_param_int(80);
			end_scaleform_movie_method();
			begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				scaleform_movie_method_add_param_int(1);
			}
			else
			{
				scaleform_movie_method_add_param_int(0);
			}
			end_scaleform_movie_method();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					scaleform_movie_method_add_param_int(iVar1);
					begin_text_command_scaleform_string(&(Global_23150.f_5355[iVar1 /*4*/]));
					if (bParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					end_text_command_scaleform_string();
					end_scaleform_movie_method();
				}
			}
			iVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				begin_scaleform_movie_method(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				scaleform_movie_method_add_param_int(iVar1);
				begin_text_command_scaleform_string(&(Global_4539885.f_16));
				if (bParam5)
				{
					add_text_component_substring_time(iParam2, 70);
				}
				else
				{
					add_text_component_integer(iParam2);
				}
				end_text_command_scaleform_string();
				end_scaleform_movie_method();
			}
		}
		set_script_gfx_align(76, 66);
		set_script_gfx_align_params(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				set_hud_component_position(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			reset_hud_component_values(15);
			Global_23150.f_8808 = 0;
		}
		reset_script_gfx_align();
		if (Global_23150.f_5446)
		{
			set_script_gfx_align(82, 66);
			set_script_gfx_align_params(0f, 0f, 0f, 0f);
			draw_scaleform_movie(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			reset_script_gfx_align();
		}
		else
		{
			draw_scaleform_movie_fullscreen(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_114(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_115(char* sParam0)
{
	scaleform_movie_method_add_param_player_name_string(sParam0);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_118();
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

int func_118()
{
	return Global_1574918;
}

int func_119()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_120())
	{
		Var0 = { 0f, -500f, 0f };
		get_mobile_phone_position(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_120()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1)
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!is_screen_faded_in() || (func_123(8, -1) && func_122() != 65)) || (get_pause_menu_state() != 0 && !bParam1)) || (is_player_switch_in_progress() && !bParam0)) || is_commerce_store_open()) || Global_78579) || Global_23150.f_8807) || is_warning_message_active()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_122()
{
	return Global_1574991;
}

var func_123(int iParam0, int iParam1)
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

int func_124(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (network_is_game_in_progress() && network_get_this_script_is_network_script())
		{
			iParam2 = network_get_instance_id_of_this_script();
		}
	}
	StringCopy(&cVar0, get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = get_hash_key(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_125(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = get_control_instructional_button(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		set_bit(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_126(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = get_control_group_instructional_button(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	clear_bit(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = 363;
	Global_23150.f_5430[Global_23150.f_5160] = iParam0;
	Global_23150.f_5160++;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (is_pc_version())
	{
		if (!func_124(&iVar1, 0, iParam0))
		{
			return;
		}
		if (has_scaleform_movie_loaded(Global_23150.f_6051[iVar1 /*10*/]))
		{
			begin_scaleform_movie_method(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			scaleform_movie_method_add_param_bool(false);
			end_scaleform_movie_method();
		}
	}
}

bool func_128(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_124(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!is_string_null_or_empty(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		request_additional_text(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!has_this_additional_text_loaded(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	request_streamed_texture_dict("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!has_streamed_texture_dict_loaded("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		request_streamed_texture_dict("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!has_streamed_texture_dict_loaded("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_129(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_129(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				*uParam0 = request_scaleform_movie(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (has_scaleform_movie_loaded(*uParam0))
					{
						uParam0->f_8 = get_game_timer();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = get_game_timer();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (has_scaleform_movie_loaded(*uParam0))
			{
				uParam0->f_8 = get_game_timer();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!has_scaleform_movie_loaded(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

bool func_130()
{
	return BitTest(Local_96.f_6, 6);
}

void func_131()
{
	if (!has_scaleform_movie_loaded(Local_96.f_170))
	{
		Local_96.f_170 = request_scaleform_movie("DRONE_CAM");
		return;
	}
	if ((func_38() || func_77()) || func_162(0))
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_38() || func_77()) || func_24())
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_24())
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_38() && !func_77())
	{
		func_108("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_108("SET_HEADING_METER_IS_VISIBLE", 1);
	func_108("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_38() && !func_77()) && !func_24()) && func_161())
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_160())
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_108("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_108("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_158(player_id()) == 240)
	{
		if (Local_96.f_120 >= (func_109() - 50f) || Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 50)))
		{
			func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_157();
			if (BitTest(Local_96.f_5, 13))
			{
				clear_bit(&(Local_96.f_5), 13);
			}
		}
		else
		{
			func_153(func_154());
			if (!BitTest(Local_96.f_5, 13))
			{
				func_108("SET_SOUND_WAVE_IS_VISIBLE", 1);
				set_bit(&(Local_96.f_5), 13);
			}
		}
	}
	else
	{
		func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_157();
	}
	func_108("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_38() && !func_77())
	{
		if (!func_24())
		{
			func_152(Local_96.f_18);
		}
		else
		{
			func_151(Local_96.f_18);
		}
		if (!func_162(0))
		{
			func_150(Local_96.f_19);
		}
	}
	if (func_160())
	{
		func_149(Local_96.f_24);
	}
	if (func_161())
	{
		func_148(Local_96.f_20);
	}
	func_147(0, "DRONE_ZOOM_1");
	func_147(1, "");
	func_147(2, "DRONE_ZOOM_2");
	func_147(3, "");
	func_147(4, "DRONE_ZOOM_3");
	func_145();
	func_143();
	func_141();
	func_140(round((get_entity_heading(net_to_obj(Local_96.f_159)) + 180f)));
	if (func_158(player_id()) == 240)
	{
		func_139(func_154());
	}
	if (func_138())
	{
		func_133();
	}
	else if (func_24() || func_38())
	{
		func_132();
	}
	else if (func_31())
	{
		func_106();
	}
	set_script_gfx_draw_order(1);
	draw_scaleform_movie_fullscreen(Local_96.f_170, 255, 255, 255, 0, 0);
}

void func_132()
{
	if (Local_96.f_150.f_2 >= (func_109() - 20f))
	{
		if (has_sound_finished(Local_96.f_37))
		{
			Local_96.f_37 = get_sound_id();
			play_sound_frontend(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
		}
		if (Local_96.f_150.f_2 >= (func_109() - 20f) && Local_96.f_150.f_2 < (func_109() - 16f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 16f) && Local_96.f_150.f_2 < (func_109() - 13f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 13f) && Local_96.f_150.f_2 < (func_109() - 10f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 10f) && Local_96.f_150.f_2 < (func_109() - 8f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 8f) && Local_96.f_150.f_2 < (func_109() - 6f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 6f) && Local_96.f_150.f_2 < (func_109() - 4f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 4f) && Local_96.f_150.f_2 < (func_109() - 3f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 3f) && Local_96.f_150.f_2 < (func_109() - 2f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 2f) && Local_96.f_150.f_2 < (func_109() - 1f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (Local_96.f_150.f_2 >= (func_109() - 1f) && Local_96.f_150.f_2 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!has_sound_finished(Local_96.f_37))
		{
			stop_sound(Local_96.f_37);
			release_sound_id(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_133()
{
	if (Local_96.f_120 >= (func_109() - 50f) || Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 50)))
	{
		func_134();
		if (has_sound_finished(Local_96.f_37))
		{
			Local_96.f_37 = get_sound_id();
			play_sound_frontend(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
		}
		if ((Local_96.f_120 >= (func_109() - 50f) && Local_96.f_120 < (func_109() - 45f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 50)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 45))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if ((Local_96.f_120 >= (func_109() - 45f) && Local_96.f_120 < (func_109() - 40f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 45)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 40))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if ((Local_96.f_120 >= (func_109() - 40f) && Local_96.f_120 < (func_109() - 35f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 40)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 35))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if ((Local_96.f_120 >= (func_109() - 35f) && Local_96.f_120 < (func_109() - 30f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 35)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 30))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if ((Local_96.f_120 >= (func_109() - 30f) && Local_96.f_120 < (func_109() - 25f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 30)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 25))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if ((Local_96.f_120 >= (func_109() - 25f) && Local_96.f_120 < (func_109() - 20f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 25)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 20))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if ((Local_96.f_120 >= (func_109() - 20f) && Local_96.f_120 < (func_109() - 15f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 20)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 15))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if ((Local_96.f_120 >= (func_109() - 15f) && Local_96.f_120 < (func_109() - 10f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 15)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 10))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if ((Local_96.f_120 >= (func_109() - 10f) && Local_96.f_120 < (func_109() - 5f)) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 10)) && Local_96.f_121 < IntToFloat((Global_262145.f_24699 - 5))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if ((Local_96.f_120 >= (func_109() - 5f) && Local_96.f_120 < func_109()) || (Local_96.f_121 >= IntToFloat((Global_262145.f_24699 - 5)) && Local_96.f_121 < IntToFloat(Global_262145.f_24699)))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!has_sound_finished(Local_96.f_37))
		{
			stop_sound(Local_96.f_37);
			release_sound_id(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_134()
{
	int iVar0;
	
	if (is_screen_faded_in() && !BitTest(Global_1946250.f_3, 15))
	{
		if (!is_help_message_being_displayed())
		{
			iVar0 = func_137(22045, -1);
			if (iVar0 < 4)
			{
				func_136("HACK_DRONE_DIS", -1);
				iVar0++;
				func_135(22045, iVar0, -1);
				set_bit(&(Global_1946250.f_3), 15);
			}
		}
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_118();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	_set_packed_stat_int(iParam0, iParam1, iParam2);
}

void func_136(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

int func_137(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	return _get_packed_stat_int(iParam0, iParam1);
}

bool func_138()
{
	return BitTest(Global_1958711.f_2, 1);
}

void func_139(float fParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "ATTENUATE_SOUND_WAVE");
	scaleform_movie_method_add_param_float(fParam0);
	end_scaleform_movie_method();
}

void func_140(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_HEADING");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_141()
{
	if (func_24())
	{
		if (BitTest(Local_96.f_5, 11) && !Local_96.f_156)
		{
			func_142(1);
		}
		else
		{
			func_142(0);
		}
	}
	else if (BitTest(Local_96.f_5, 11) || BitTest(Local_96.f_5, 23))
	{
		func_142(1);
	}
	else
	{
		func_142(0);
	}
}

void func_142(bool bParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_RETICLE_ON_TARGET");
	scaleform_movie_method_add_param_bool(bParam0);
	end_scaleform_movie_method();
}

void func_143()
{
	if (BitTest(Local_96.f_5, 4) || (BitTest(Local_96.f_5, 3) && func_24()))
	{
		if (Local_96.f_18 == 100)
		{
			func_144(1);
		}
		else if (Local_96.f_18 != 0 && Local_96.f_18 != 100)
		{
			func_144(2);
		}
	}
	else
	{
		func_144(0);
	}
}

void func_144(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_RETICLE_STATE");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_145()
{
	switch (Local_96.f_25)
	{
		case 0:
			func_146(0);
			break;
		
		case 1:
			func_146(2);
			break;
		
		case 2:
			func_146(4);
			break;
	}
}

void func_146(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_ZOOM");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_147(int iParam0, char* sParam1)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_ZOOM_LABEL");
	scaleform_movie_method_add_param_int(iParam0);
	func_114(sParam1);
	end_scaleform_movie_method();
}

void func_148(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_BOOST_PERCENTAGE");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_149(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_TRANQUILIZE_PERCENTAGE");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_150(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_DETONATE_PERCENTAGE");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_151(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_EMP_PERCENTAGE");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_152(int iParam0)
{
	begin_scaleform_movie_method(Local_96.f_170, "SET_SHOCK_PERCENTAGE");
	scaleform_movie_method_add_param_int(iParam0);
	end_scaleform_movie_method();
}

void func_153(float fParam0)
{
	if (has_sound_finished(Local_96.f_44))
	{
		Local_96.f_44 = get_sound_id();
		play_sound_frontend(Local_96.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		set_variable_on_sound(Local_96.f_44, "signalstrength", fParam0);
	}
	else
	{
		set_variable_on_sound(Local_96.f_44, "signalstrength", fParam0);
	}
}

float func_154()
{
	float fVar0;
	
	if (func_158(player_id()) == 240)
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
		{
			fVar0 = func_155(net_to_obj(Local_96.f_159), func_156(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_155(int iParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!is_entity_dead(iParam0, false))
	{
		Var0 = { get_entity_coords(iParam0, true) };
	}
	else
	{
		Var0 = { get_entity_coords(iParam0, false) };
	}
	return get_distance_between_coords(Var0, Param1, bParam2);
}

Vector3 func_156()
{
	if (func_158(player_id()) == 240)
	{
		return Global_1963983;
	}
	return 0f, 0f, 0f;
}

void func_157()
{
	if (!has_sound_finished(Local_96.f_44))
	{
		stop_sound(Local_96.f_44);
		release_sound_id(Local_96.f_44);
		Local_96.f_44 = -1;
	}
}

int func_158(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_159(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return BitTest(Global_1958711.f_2, 6);
}

int func_161()
{
	if (func_160())
	{
		if (is_valid_interior(Global_1958711.f_24))
		{
			return 0;
		}
	}
	return 1;
}

int func_162(bool bParam0)
{
	if (func_138())
	{
		if (bParam0)
		{
			if (BitTest(Local_96.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_160())
	{
		return 1;
	}
	return 0;
}

void func_163()
{
	int iVar0;
	int iVar1;
	
	if (func_77())
	{
		return;
	}
	if (!BitTest(Local_96.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(21, "DRONE_MOVE", -1);
			func_126(20, "DRONE_POSITION", -1);
			if (!_is_using_keyboard(0))
			{
				func_125(210, "CELL_284", -1, 0);
				if ((!func_38() && !func_24()) && func_161())
				{
					func_125(209, "BOOST_DRONE_E", -1, 0);
				}
				func_125(208, "MOVE_DRONE_UP", -1, 0);
				func_125(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_126(29, "CELL_284", -1);
				if ((!func_38() && !func_24()) && func_161())
				{
					func_125(203, "BOOST_DRONE_E", -1, 0);
				}
				func_125(209, "MOVE_DRONE_UP", -1, 0);
				func_125(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_38())
			{
				iVar0 = 206;
				if (_is_using_keyboard(0))
				{
					iVar0 = 237;
				}
				if (func_24())
				{
					func_125(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_125(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (_is_using_keyboard(0))
				{
					iVar1 = 238;
				}
				if (!func_162(0))
				{
					func_125(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_170())
				{
					func_125(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_24())
			{
				if ((((func_169(0) || func_169(1)) || func_168()) || _is_recording()) || func_164(player_id()))
				{
				}
				else
				{
					func_125(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_125(80, "MOVE_DRONE_RE", -1, 0);
			set_bit(&(Local_96.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (_is_using_keyboard(0))
	{
		if (!BitTest(Local_96.f_5, 17))
		{
			set_bit(&(Local_96.f_5), 17);
			clear_bit(&(Local_96.f_5), 16);
		}
	}
	else if (BitTest(Local_96.f_5, 17))
	{
		clear_bit(&(Local_96.f_5), 17);
		clear_bit(&(Local_96.f_5), 16);
	}
}

int func_164(int iParam0)
{
	if (func_167(func_158(iParam0)))
	{
		if (func_166() != func_12())
		{
			if (func_165() == func_166())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165()
{
	return Global_1892703[player_id() /*599*/].f_10.f_35;
}

int func_166()
{
	return Global_1892703[player_id() /*599*/].f_10;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_168()
{
	return Global_23011.f_135;
}

bool func_169(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_170()
{
	if (func_171() <= 0)
	{
		return 0;
	}
	if (func_160())
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	return Global_1958711.f_6;
}

bool func_172()
{
	return BitTest(Global_1958711, 7);
}

void func_173()
{
	int iVar0;
	
	if (!func_174())
	{
		return;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			if ((does_cam_exist(Local_96.f_169) && is_cam_rendering(Local_96.f_169)) && !func_77())
			{
				iVar0 = 80;
				if (func_83())
				{
					iVar0 = 75;
				}
				if (is_control_just_pressed(2, iVar0) || is_disabled_control_just_pressed(2, iVar0))
				{
					if (!BitTest(Local_96.f_5, 7))
					{
						set_bit(&(Local_96.f_5), 7);
					}
				}
			}
		}
	}
}

int func_174()
{
	if (func_16())
	{
		if (!func_130())
		{
			return 0;
		}
	}
	return 1;
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_181() || !func_164(player_id())) || !network_is_game_in_progress())
	{
		return;
	}
	iVar0 = func_180(1);
	func_179(iVar0);
	iVar1 = func_180(0);
	iVar2 = get_closest_object_of_type(Local_96.f_141, 2f, iVar1, false, false, false);
	if (does_entity_exist(iVar2) && iVar2 != Local_96.f_162)
	{
		if (has_entity_been_damaged_by_weapon(iVar2, joaat("weapon_stungun"), 0) || get_entity_health(iVar2) == 999)
		{
			if (!BitTest(Local_96.f_5, 26))
			{
				func_178(func_166(), 1, 1, 0);
				set_bit(&(Local_96.f_5), 26);
			}
		}
	}
	if (does_entity_exist(Local_96.f_162))
	{
		if (has_entity_been_damaged_by_weapon(Local_96.f_162, joaat("weapon_stungun"), 0) || get_entity_health(Local_96.f_162) == 999)
		{
			if (!BitTest(Local_96.f_5, 26))
			{
				func_178(func_166(), 1, 1, 0);
				set_bit(&(Local_96.f_5), 26);
			}
		}
	}
	if (BitTest(Local_96.f_5, 26))
	{
		iVar3 = get_closest_object_of_type(Local_96.f_141, 2f, iVar0, false, false, false);
		if (does_entity_exist(iVar3))
		{
			if (does_entity_exist(Local_96.f_162))
			{
				set_entity_visible(Local_96.f_162, false, false);
			}
			if (does_entity_exist(iVar2))
			{
				set_entity_visible(iVar2, false, false);
			}
			func_176(1);
		}
	}
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		if (!func_177())
		{
			set_bit(&Global_1958711, 1);
		}
	}
	else if (func_177())
	{
		clear_bit(&Global_1958711, 1);
	}
}

bool func_177()
{
	return BitTest(Global_1958711, 1);
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar1;
	
	Var0.f_0 = -1987280249;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	iVar1 = 0;
	if (iParam0 != func_12())
	{
		set_bit(&iVar1, iParam0);
	}
	if (!iVar1 == 0)
	{
		_trigger_script_event_2(1, &Var0, 5, iVar1);
	}
}

bool func_179(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

int func_180(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1958711.f_19 != 0)
		{
			return Global_1958711.f_19;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

var func_181()
{
	return BitTest(Global_1958711, 14);
}

void func_182()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((BitTest(Local_96.f_5, 1) || func_193()) || func_192())
	{
		Local_96.f_18 = 0;
		Local_96.f_19 = 0;
		if (!BitTest(Local_96.f_5, 10))
		{
			set_bit(&(Local_96.f_5), 10);
		}
		return;
	}
	if (!func_192())
	{
		if (BitTest(Local_96.f_5, 10))
		{
			Local_96.f_18 = 100;
			clear_bit(&(Local_96.f_5), 10);
		}
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			if ((does_cam_exist(Local_96.f_169) && is_cam_rendering(Local_96.f_169)) && !BitTest(Local_96.f_5, 2))
			{
				if ((!BitTest(Local_96.f_5, 4) && !BitTest(Local_96.f_5, 3)) && !Local_96.f_156)
				{
					iVar0 = 206;
					if (_is_using_keyboard(0))
					{
						iVar0 = 237;
					}
					if ((((is_control_just_released(2, iVar0) || is_disabled_control_just_released(2, iVar0)) && !BitTest(Local_96.f_5, 5)) && !BitTest(Local_96.f_5, 24)) && !func_77())
					{
						set_bit(&(Local_96.f_5), 24);
						if (BitTest(Local_96.f_5, 11) || BitTest(Local_96.f_5, 23))
						{
							Local_96.f_27++;
						}
					}
					if (func_24())
					{
						func_189();
					}
					else
					{
						func_188();
					}
				}
				else if (func_25(&(Local_96.f_249)))
				{
					if (func_24())
					{
						iVar1 = Global_262145.f_25339;
					}
					else
					{
						iVar1 = Global_262145.f_24692;
					}
					if (func_22(&(Local_96.f_249), iVar1, 0))
					{
						func_21(&(Local_96.f_249));
						Local_96.f_18 = 100;
						if (Local_96.f_32 != -1)
						{
							stop_sound(Local_96.f_32);
							release_sound_id(Local_96.f_32);
							Local_96.f_32 = -1;
						}
						if (has_sound_finished(Local_96.f_35))
						{
							stop_sound(Local_96.f_35);
							release_sound_id(Local_96.f_35);
							Local_96.f_35 = -1;
						}
						clear_bit(&(Local_96.f_5), 4);
						clear_bit(&(Local_96.f_5), 3);
						clear_bit(&(Local_96.f_5), 24);
						Local_96.f_156 = 0;
					}
					else
					{
						iVar2 = (100 * absi(get_time_difference(get_network_time(), Local_96.f_249)));
						Local_96.f_18 = (iVar2 / iVar1);
						if (!func_24())
						{
							if (has_sound_finished(Local_96.f_32))
							{
								Local_96.f_32 = get_sound_id();
								play_sound_frontend(Local_96.f_32, "HUD_Shock_Recharge", Local_96.f_157, true);
								set_variable_on_sound(Local_96.f_32, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_186();
				func_183();
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

void func_183()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	
	if (func_170())
	{
		if (_is_using_keyboard(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_96.f_6, 5))
		{
			if (!BitTest(Local_96.f_6, 4))
			{
				if (is_control_just_released(2, iVar0) || is_disabled_control_just_released(2, iVar0))
				{
					set_bit(&(Local_96.f_6), 4);
				}
			}
			else if (Local_96.f_13 == 1)
			{
				if (Local_96.f_244 == 2)
				{
					Var1 = { get_final_rendered_cam_coord() };
					Var2 = { get_final_rendered_cam_rot(2) };
					Var3 = { (-sin(Var2.f_2) * cos(Var2.f_0)), (cos(Var2.f_2) * cos(Var2.f_0)), sin(Var2.f_0) };
					Var4 = { 10f, 10f, 10f };
					Var5 = { Var1 + Var3 * Var4 };
					iVar6 = Global_262145.f_24693;
					if (BitTest(Local_96.f_5, 23))
					{
						iVar6 = Global_262145.f_24694;
					}
					shoot_single_bullet_between_coords_ignore_entity_new(Local_96.f_150 + Vector(0f, 0f, 0f), Var5, iVar6, true, joaat("WEAPON_TRANQUILIZER"), player_ped_id(), true, true, -1f, net_to_obj(Local_96.f_159), false, false, false, true, 0, 0, 0);
					Local_96.f_24 = 100;
					set_pad_shake(0, 300, round((150f * Local_96.f_131)));
					if (has_sound_finished(Local_96.f_81))
					{
						Local_96.f_81 = get_sound_id();
						play_sound_from_entity(Local_96.f_81, "Remote_Perspective_Fire", net_to_obj(Local_96.f_159), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					play_sound_frontend(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (BitTest(Local_96.f_5, 11) || BitTest(Local_96.f_5, 23))
					{
						Local_96.f_29++;
					}
					func_185((func_171() - 1));
					if (func_171() <= 0)
					{
						Local_96.f_24 = 0;
						clear_bit(&(Local_96.f_5), 16);
					}
					set_bit(&(Local_96.f_6), 5);
					func_23(&(Local_96.f_257), 0, 0);
				}
			}
		}
		else
		{
			func_184();
		}
	}
}

void func_184()
{
	int iVar0;
	int iVar1;
	
	if (func_171() > 0)
	{
		if (func_25(&(Local_96.f_257)))
		{
			iVar0 = Global_262145.f_24692;
			if (func_22(&(Local_96.f_257), iVar0, 0))
			{
				clear_bit(&(Local_96.f_6), 5);
				clear_bit(&(Local_96.f_6), 4);
				func_21(&(Local_96.f_257));
				Local_96.f_24 = 100;
				if (has_sound_finished(Local_96.f_35))
				{
					stop_sound(Local_96.f_35);
					release_sound_id(Local_96.f_35);
					Local_96.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * absi(get_time_difference(get_network_time(), Local_96.f_257)));
				Local_96.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_185(int iParam0)
{
	if (Global_1958711.f_6 != iParam0)
	{
		Global_1958711.f_6 = iParam0;
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_96.f_348.f_2 = 2;
	if (_is_using_keyboard(0))
	{
		Local_96.f_348.f_3 = 238;
	}
	else
	{
		Local_96.f_348.f_3 = 205;
	}
	iVar0 = Global_262145.f_24695;
	if (!BitTest(Local_96.f_5, 31))
	{
		Local_96.f_22 = 100;
	}
	if (func_24())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_96.f_6, 1))
		{
			Local_96.f_21 = ((Local_96.f_23 * (Global_262145.f_24695 / 2)) / 100);
			Local_96.f_21 = ((Global_262145.f_24695 / 2) - Local_96.f_21);
			clear_bit(&(Local_96.f_6), 1);
		}
		if (BitTest(Local_96.f_5, 31))
		{
			iVar0 = Local_96.f_21;
		}
	}
	else
	{
		Local_96.f_22 = 100;
	}
	if (!func_162(1))
	{
		if (!func_77() && func_187(&(Local_96.f_348), 1, iVar0))
		{
			if (has_sound_finished(Local_96.f_36))
			{
				Local_96.f_36 = get_sound_id();
				play_sound_from_entity(Local_96.f_36, "Destroyed", net_to_obj(Local_96.f_159), Local_96.f_157, true, 0);
			}
			_thefeed_display_loading_screen_tips();
			iVar1 = 0;
			if (func_24())
			{
				iVar1 = 69;
			}
			add_owned_explosion(player_ped_id(), Local_96.f_150, iVar1, 0.5f, true, false, 1f);
			if (get_player_wanted_level(player_id()) < 1)
			{
				set_player_wanted_level(player_id(), 0, false);
				set_player_wanted_level_now(player_id(), false);
			}
			set_pad_shake(0, 300, round((200f * Local_96.f_131)));
			set_bit(&(Local_96.f_5), 2);
		}
	}
	if (func_25(&(Local_96.f_348)))
	{
		set_pad_shake(0, 300, 20);
		if (!BitTest(Local_96.f_5, 5))
		{
			set_bit(&(Local_96.f_5), 5);
		}
		func_21(&(Local_96.f_273));
		if (!func_22(&(Local_96.f_348), iVar0, 0))
		{
			iVar2 = (Local_96.f_22 * absi(get_time_difference(get_network_time(), Local_96.f_348)));
			if (!func_24())
			{
				Local_96.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_96.f_5, 31))
			{
				Local_96.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_96.f_19 = (Local_96.f_23 + (iVar2 / iVar0));
			}
			if (has_sound_finished(Local_96.f_33))
			{
				Local_96.f_33 = get_sound_id();
				play_sound_frontend(Local_96.f_33, "HUD_Detonate_Charge", Local_96.f_157, true);
			}
		}
	}
	else if (BitTest(Local_96.f_5, 5))
	{
		clear_bit(&(Local_96.f_5), 5);
		if (!func_24())
		{
			Local_96.f_19 = 0;
		}
		else
		{
			set_bit(&(Local_96.f_5), 31);
			Local_96.f_22 = (100 - Local_96.f_19);
			Local_96.f_21 = (iVar0 - absi(get_time_difference(get_network_time(), Local_96.f_348)));
			Local_96.f_23 = Local_96.f_19;
			func_21(&(Local_96.f_273));
		}
		if (Local_96.f_33 != -1)
		{
			stop_sound(Local_96.f_33);
			release_sound_id(Local_96.f_33);
			Local_96.f_33 = -1;
		}
	}
	else if (func_24())
	{
		if (Local_96.f_19 > 0)
		{
			if (Local_96.f_19 <= 2)
			{
				Local_96.f_19 = 0;
			}
			if (!func_25(&(Local_96.f_273)))
			{
				func_23(&(Local_96.f_273), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24695;
				if (!func_22(&(Local_96.f_273), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_96.f_22)) / to_float((iVar3 / absi(get_time_difference(get_network_time(), Local_96.f_273)))));
					Local_96.f_19 = (Local_96.f_19 - round(fVar4));
					Local_96.f_23 = Local_96.f_19;
					Local_96.f_22 = (100 - Local_96.f_19);
					set_bit(&(Local_96.f_6), 1);
				}
				else
				{
					Local_96.f_19 = 0;
				}
			}
		}
		else
		{
			func_21(&(Local_96.f_348));
			clear_bit(&(Local_96.f_5), 31);
			clear_bit(&(Local_96.f_6), 1);
		}
	}
}

int func_187(var uParam0, int iParam1, int iParam2)
{
	if (is_control_pressed(uParam0->f_2, uParam0->f_3) || (is_disabled_control_pressed(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_25(uParam0))
		{
			func_23(uParam0, 0, 0);
		}
		else if (func_22(uParam0, iParam2, 0))
		{
			func_21(uParam0);
			return 1;
		}
	}
	else
	{
		func_21(uParam0);
	}
	return 0;
}

void func_188()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	
	if (BitTest(Local_96.f_5, 24))
	{
		if (Local_96.f_13 == 1)
		{
			if (Local_96.f_244 == 2)
			{
				Var0 = { get_final_rendered_cam_coord() };
				Var1 = { get_final_rendered_cam_rot(2) };
				Var2 = { (-sin(Var1.f_2) * cos(Var1.f_0)), (cos(Var1.f_2) * cos(Var1.f_0)), sin(Var1.f_0) };
				Var3 = { 10f, 10f, 10f };
				Var4 = { Var0 + Var2 * Var3 };
				iVar5 = Global_262145.f_24693;
				if (BitTest(Local_96.f_5, 23))
				{
					iVar5 = Global_262145.f_24694;
				}
				if (func_160())
				{
					iVar5 = 1;
				}
				shoot_single_bullet_between_coords_ignore_entity_new(Local_96.f_150 + Vector(0f, 0f, 0f), Var4, iVar5, true, joaat("weapon_stungun"), player_ped_id(), true, true, -1f, net_to_obj(Local_96.f_159), false, false, false, true, 0, 0, 0);
				Local_96.f_18 = 100;
				Local_96.f_19 = 0;
				set_pad_shake(0, 300, round((150f * Local_96.f_131)));
				if (has_sound_finished(Local_96.f_35))
				{
					Local_96.f_35 = get_sound_id();
					play_sound_from_entity(Local_96.f_35, "Shock_Fire", net_to_obj(Local_96.f_159), Local_96.f_157, true, 0);
				}
				if (Local_96.f_33 != -1)
				{
					stop_sound(Local_96.f_33);
					release_sound_id(Local_96.f_33);
					Local_96.f_33 = -1;
				}
				set_bit(&(Local_96.f_5), 4);
				func_23(&(Local_96.f_249), 0, 0);
			}
		}
	}
}

void func_189()
{
	if ((BitTest(Local_96.f_5, 24) && !BitTest(Local_96.f_5, 3)) && !Local_96.f_156)
	{
		if (has_named_ptfx_asset_loaded("scr_xs_dr"))
		{
			if (network_does_entity_exist_with_network_id(Local_96.f_159))
			{
				use_particle_fx_asset("scr_xs_dr");
				start_networked_particle_fx_non_looped_on_entity("scr_xs_dr_emp", net_to_obj(Local_96.f_159), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, false, false, false);
			}
		}
		Local_96.f_18 = 100;
		set_pad_shake(0, 300, round((150f * Local_96.f_131)));
		if (has_sound_finished(Local_96.f_35))
		{
			Local_96.f_35 = get_sound_id();
			play_sound_from_entity(Local_96.f_35, "Shock_Fire", net_to_obj(Local_96.f_159), Local_96.f_157, true, 0);
		}
		if (Local_96.f_33 != -1)
		{
			stop_sound(Local_96.f_33);
			release_sound_id(Local_96.f_33);
			Local_96.f_33 = -1;
		}
		func_190(get_entity_coords(net_to_obj(Local_96.f_159), true), 0);
		set_bit(&(Local_96.f_5), 3);
		Local_96.f_156 = 1;
		func_23(&(Local_96.f_249), 0, 0);
	}
}

void func_190(struct<3> Param0, bool bParam1)
{
	struct<6> Var0;
	
	Var0.f_0 = -1427892428;
	Var0.f_1 = player_id();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam1;
	if (!bParam1)
	{
		if (!func_191(1, 1) == 0)
		{
			_trigger_script_event_2(1, &Var0, 6, func_191(1, 1));
		}
	}
	else if (Global_1958711.f_21 != func_12())
	{
		_trigger_script_event_2(1, &Var0, 6, func_8(Global_1958711.f_21));
	}
}

int func_191(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_19(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (bParam1)
				{
					set_bit(&uVar0, iVar1);
				}
				else if (!func_116(iVar2, 0))
				{
					set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_192()
{
	return BitTest(Global_1958711, 8);
}

int func_193()
{
	if ((network_does_entity_exist_with_network_id(Local_96.f_159) && is_entity_dead(net_to_obj(Local_96.f_159), false)) && !BitTest(Local_96.f_5, 2))
	{
		return 1;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (func_164(player_id()) && BitTest(Global_2813821, 0))
		{
		}
		else if (func_203())
		{
			if (has_entity_collided_with_anything(net_to_obj(Local_96.f_159)) || get_last_material_hit_by_entity(net_to_obj(Local_96.f_159)) != 0)
			{
				Local_96.f_26 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_96.f_5, 2))
	{
		Local_96.f_26 = 4;
		return 1;
	}
	if (BitTest(Local_96.f_5, 9))
	{
		Local_96.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_96.f_5, 7))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (is_entity_in_water(net_to_obj(Local_96.f_159)) || func_202(net_to_ent(Local_96.f_159), 0))
		{
			if (BitTest(Local_96.f_5, 29))
			{
				Local_96.f_26 = 3;
				return 1;
			}
		}
	}
	if (func_200(player_id()))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_138())
	{
		if (Global_1853193 != func_12())
		{
			if (func_47(Global_1853193))
			{
				Local_96.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_199())
	{
		Local_96.f_26 = 1;
		return 1;
	}
	if (func_198(player_id()))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_197())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_196())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_32())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_37())
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (func_31())
	{
		if (is_ped_dead_or_dying(player_ped_id(), true))
		{
			Local_96.f_26 = 6;
			return 1;
		}
		if (is_ped_injured(player_ped_id()) || is_ped_hurt(player_ped_id()))
		{
			Local_96.f_26 = 6;
			return 1;
		}
		if (func_155(player_ped_id(), Local_96.f_153, 1) > 2f)
		{
			Local_96.f_26 = 7;
			return 1;
		}
	}
	if (func_195())
	{
		return 1;
	}
	if (func_16())
	{
		if (func_34())
		{
			return 1;
		}
		if (func_194("AIRDEF_WARN"))
		{
			if (func_22(&(Local_96.f_346), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_96.f_346));
		}
	}
	return 0;
}

bool func_194(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

int func_195()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var1 = { 90000f, 90000f, 2600f };
	if (!network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		return 0;
	}
	if (!is_entity_in_area(net_to_obj(Local_96.f_159), Var0, Var1, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_196()
{
	return Global_97750;
}

bool func_197()
{
	return BitTest(Global_1958711, 9);
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1892703[iVar0 /*599*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_199()
{
	struct<3> Var0;
	
	if (Local_96.f_17 == joaat("v_faceoffice"))
	{
		if (func_17(net_to_obj(Local_96.f_159)))
		{
			if (get_room_key_from_entity(net_to_obj(Local_96.f_159)) == joaat("GtaMloRoom001"))
			{
				Var0 = { get_entity_coords(net_to_obj(Local_96.f_159), true) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (func_17(net_to_obj(Local_96.f_159)))
		{
			if (is_entity_in_angled_area(net_to_obj(Local_96.f_159), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, false, true, 0))
			{
				return 1;
			}
			if (is_entity_in_angled_area(net_to_obj(Local_96.f_159), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		if (func_11(iParam0) && !func_201(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_202(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, false) || iParam1)
		{
			if (is_entity_in_water(iParam0))
			{
				if (get_entity_submerged_level(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_203()
{
	return BitTest(Global_1958711, 15);
}

void func_204()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	int iVar9;
	bool bVar10;
	
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			Var0 = { Local_96.f_150 };
			switch (Local_96.f_13)
			{
				case 0:
					Var1 = { get_final_rendered_cam_coord() };
					Var2 = { get_final_rendered_cam_rot(2) };
					Var3 = { (-sin(Var2.f_2) * cos(Var2.f_0)), (cos(Var2.f_2) * cos(Var2.f_0)), sin(Var2.f_0) };
					Var4 = { 10f, 10f, 10f };
					if (func_24())
					{
						Var4 = { Global_262145.f_25340, Global_262145.f_25340, Global_262145.f_25340 };
					}
					Var5 = { Var1 + Var3 * Var4 };
					Var0 = { _get_object_offset_from_coords(Local_96.f_150, get_entity_heading(net_to_obj(Local_96.f_159)), 0f, -0.1f, 0f) };
					Local_96.f_167 = start_shape_test_los_probe(Var0, Var5, 123, net_to_obj(Local_96.f_159), 7);
					if (Local_96.f_167 != 0)
					{
						Local_96.f_13 = 1;
					}
					break;
				
				case 1:
					Local_96.f_244 = get_shape_test_result(Local_96.f_167, &iVar6, &Var8, &uVar7, &iVar9);
					if (Local_96.f_244 == 2)
					{
						if (iVar6 == 0)
						{
							Local_96.f_14 = 1;
							Var8 = { 0f, 0f, 0f };
							if (BitTest(Local_96.f_5, 11) && !func_24())
							{
								clear_bit(&(Local_96.f_5), 11);
							}
							if (BitTest(Local_96.f_5, 23))
							{
								clear_bit(&(Local_96.f_5), 23);
							}
							func_211();
						}
						else
						{
							Local_96.f_14 = 2;
							if (does_entity_exist(iVar9))
							{
								if (is_entity_a_ped(iVar9))
								{
									if (!is_entity_dead(iVar9, false))
									{
										if (is_ped_a_player(get_ped_index_from_entity_index(iVar9)))
										{
											if (func_209(player_id(), network_get_player_index_from_ped(get_ped_index_from_entity_index(iVar9))))
											{
												bVar10 = true;
											}
										}
										else
										{
											if (!BitTest(Local_96.f_5, 23))
											{
												set_bit(&(Local_96.f_5), 23);
												if (BitTest(Local_96.f_5, 11) && !func_24())
												{
													clear_bit(&(Local_96.f_5), 11);
												}
											}
											if (!func_90(player_id()) && !func_87(player_id()))
											{
												if ((func_208(get_ped_index_from_entity_index(iVar9)) || func_207(get_ped_index_from_entity_index(iVar9))) || func_206(get_ped_index_from_entity_index(iVar9)))
												{
													func_86(Global_1837205);
													func_205(&(Local_96.f_259), 0, 0);
												}
												else
												{
													func_211();
												}
											}
										}
										if ((((!BitTest(Local_96.f_5, 11) && !bVar10) && func_17(Global_1958711.f_23)) && has_entity_clear_los_to_entity(Global_1958711.f_23, iVar9, 511)) && (is_ped_a_player(get_ped_index_from_entity_index(iVar9)) && player_ped_id() != get_ped_index_from_entity_index(iVar9)))
										{
											set_bit(&(Local_96.f_5), 11);
											if (BitTest(Local_96.f_5, 23))
											{
												clear_bit(&(Local_96.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_24())
									{
										if (BitTest(Local_96.f_5, 11))
										{
											clear_bit(&(Local_96.f_5), 11);
										}
									}
									if (BitTest(Local_96.f_5, 23))
									{
										clear_bit(&(Local_96.f_5), 23);
									}
									func_211();
								}
							}
							else
							{
								func_211();
							}
							Local_96.f_167 = 0;
							Local_96.f_13 = 0;
						}
					}
					else if (Local_96.f_244 == 0)
					{
						Local_96.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

void func_205(var uParam0, bool bParam1, bool bParam2)
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

int func_206(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (get_ped_relationship_group_default_hash(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if ((((((((((((get_ped_type(iParam0) == 7 || get_ped_type(iParam0) == 8) || get_ped_type(iParam0) == 9) || get_ped_type(iParam0) == 10) || get_ped_type(iParam0) == 11) || get_ped_type(iParam0) == 12) || get_ped_type(iParam0) == 13) || get_ped_type(iParam0) == 14) || get_ped_type(iParam0) == 15) || get_ped_type(iParam0) == 16) || get_ped_type(iParam0) == 17) || get_ped_type(iParam0) == 18) || get_ped_type(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if ((((get_ped_type(iParam0) == 6 || get_ped_type(iParam0) == 29) || get_ped_type(iParam0) == 27) || get_ped_relationship_group_default_hash(iParam0) == joaat("army")) || get_ped_relationship_group_default_hash(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_210(iParam0);
	if (!iVar0 == func_12())
	{
		if (iVar0 == func_210(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_12();
}

void func_211()
{
	if (func_25(&(Local_96.f_259)))
	{
		if (func_22(&(Local_96.f_259), 60000, 0))
		{
			func_21(&(Local_96.f_259));
			if (get_player_wanted_level(player_id()) <= 0)
			{
				func_86(Global_1837194);
			}
		}
	}
}

void func_212()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	var uVar9;
	struct<3> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		if (!BitTest(Local_96.f_5, 29))
		{
			return;
		}
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		if (_0x7EF7649B64D7FF10(net_to_obj(Local_96.f_159)))
		{
			return;
		}
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			switch (Local_96.f_11)
			{
				case 0:
					if ((func_24() || func_38()) || func_35())
					{
						fVar5 = 0.3f;
					}
					else if (func_16())
					{
						fVar5 = 0.65f;
					}
					else
					{
						fVar5 = (func_215(Local_96.f_240) * 1.5f);
					}
					if (func_83())
					{
						Var6 = { Local_96.f_150 };
						Var1 = { get_final_rendered_cam_coord() };
						Var2 = { get_final_rendered_cam_rot(2) };
						Var3 = { (-sin(Var2.f_2) * cos(Var2.f_0)), (cos(Var2.f_2) * cos(Var2.f_0)), sin(Var2.f_0) };
						Var4 = { 0.9f, 0.9f, 0.9f };
						if (func_16())
						{
							Var4 = { 1.9f, 1.9f, 1.9f };
						}
						Var7 = { Var1 + Var3 * Var4 };
					}
					else
					{
						Var6 = { Local_96.f_150 };
						Var7 = { Local_96.f_150 };
					}
					Local_96.f_166 = start_shape_test_capsule(Var6, Var7, fVar5, 511, net_to_obj(Local_96.f_159), 4);
					if (Local_96.f_166 != 0)
					{
						Local_96.f_11 = 1;
					}
					break;
				
				case 1:
					iVar12 = get_shape_test_result(Local_96.f_166, &iVar8, &Var10, &uVar9, &iVar11);
					if (iVar12 == 2)
					{
						if (iVar8 == 0)
						{
							Local_96.f_12 = 1;
							Var10 = { 0f, 0f, 0f };
						}
						else
						{
							if (does_entity_exist(iVar11))
							{
								if (is_entity_a_vehicle(iVar11))
								{
									if (!is_entity_dead(iVar11, false) && get_entity_model(iVar11) != Local_96.f_240)
									{
										if (get_entity_speed(iVar11) > 0.5f || func_213(get_entity_model(iVar11)))
										{
											if (!BitTest(Local_96.f_5, 9))
											{
												set_bit(&(Local_96.f_5), 9);
											}
										}
									}
								}
								else if (is_entity_a_ped(iVar11))
								{
									if (!is_entity_dead(iVar11, false))
									{
										if (!is_ped_a_player(get_ped_index_from_entity_index(iVar11)))
										{
											if (Local_96.f_28 == 0)
											{
												iVar0 = get_random_int_in_range(0, 3);
												if (iVar0 == 0)
												{
													iVar13 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar13 = 90;
												}
												else
												{
													iVar13 = 79;
												}
												Local_96.f_28 = add_shocking_event_at_position(iVar13, Local_96.f_150, 5000f);
												func_205(&(Local_96.f_265), 0, 0);
											}
										}
									}
								}
							}
							Local_96.f_12 = 2;
							set_pad_shake(0, 300, 50);
							Local_96.f_166 = 0;
							Local_96.f_11 = 0;
						}
					}
					else if (iVar12 == 0)
					{
						Local_96.f_11 = 0;
					}
					break;
			}
			if (Local_96.f_28 != 0)
			{
				if (func_25(&(Local_96.f_265)))
				{
					if (func_22(&(Local_96.f_265), 5000, 0))
					{
						remove_shocking_event(Local_96.f_28);
						func_21(&(Local_96.f_265));
						Local_96.f_28 = 0;
					}
				}
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_214(iParam0, 1))
	{
		return 1;
	}
	if (is_this_model_a_heli(iParam0) || is_this_model_a_plane(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

float func_215(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_216(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return absf((Var0.f_2 - Var1.f_2));
}

void func_216(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (is_model_valid(iParam0))
	{
		get_model_dimensions(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_219(iParam0);
		if (iVar0 != 0)
		{
			func_217(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_217(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_218(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (is_model_valid(Global_1577992[iVar0]))
		{
			get_model_dimensions(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (vmag(Global_1577996[iVar0 /*3*/]) <= 0.01f || vmag(Global_1578003[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0.5f);
	Global_1578024 = (Global_1578019 * 0.5f);
	Global_1578021.f_1 = ((((0.5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0.5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0.5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0.5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
}

void func_218(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_220(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_221()
{
	int iVar0;
	
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (func_17(net_to_obj(Local_96.f_159)))
		{
			iVar0 = func_224(net_to_obj(Local_96.f_159));
			if (iVar0 != -1)
			{
				if (!func_223(&(Global_1835502.f_389), iVar0) && !func_223(&(Global_1892703[player_id() /*599*/].f_535), iVar0))
				{
					func_222(1);
				}
			}
		}
	}
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!BitTest(Global_1958711, 9))
			{
				set_bit(&Global_1958711, 9);
			}
		}
	}
	else if (BitTest(Global_1958711, 9))
	{
		clear_bit(&Global_1958711, 9);
	}
}

bool func_223(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0, false))
	{
		iVar0 = func_228(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = get_interior_from_entity(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_225(iVar3);
				if (Global_1951109[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1951109[iVar0] == 0)
	{
		Global_1951109[iVar0] = get_interior_at_coords_with_type(func_227(iParam0), func_226(iParam0));
	}
}

char* func_226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 983.2747f, -99.3188f, 73.8454f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_228(int iParam0)
{
	if (func_235(iParam0))
	{
		return 15;
	}
	if (func_233(iParam0))
	{
		return 28;
	}
	if (func_231(iParam0))
	{
		return 36;
	}
	if (func_230(iParam0))
	{
		return 23;
	}
	if (func_229(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_229(int iParam0)
{
	if (!is_entity_dead(iParam0, false))
	{
		if ((is_entity_in_angled_area(player_ped_id(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	if (!is_entity_dead(iParam0, false))
	{
		if (get_distance_between_coords(get_entity_coords(iParam0, true), -16.2669f, -685.4531f, 31.3381f, true) <= 80f)
		{
			if ((((((is_entity_in_angled_area(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, false, true, 0) || is_entity_in_angled_area(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, false, true, 0)) || is_entity_in_angled_area(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, false, true, 0)) || is_entity_in_angled_area(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, false, true, 0)) || is_entity_in_angled_area(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, false, true, 0)) || is_entity_in_angled_area(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, false, true, 0)) || is_entity_in_angled_area(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_231(int iParam0)
{
	return ((!is_entity_dead(iParam0, false) && is_entity_at_coord(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_232());
}

int func_232()
{
	if (!is_screen_faded_out())
	{
		if (vdist2(func_6(player_id()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (is_sphere_visible(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_233(int iParam0)
{
	return ((!is_entity_dead(iParam0, false) && is_entity_in_angled_area(player_ped_id(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, false, true, 0)) || func_234());
}

int func_234()
{
	struct<3> Var0;
	
	if (!is_screen_faded_out())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (vdist2(func_6(player_id()), Var0) <= 25600f)
		{
			if (is_sphere_visible(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_235(int iParam0)
{
	return ((!is_entity_dead(iParam0, false) && is_entity_in_angled_area(player_ped_id(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, false, true, 0)) || func_236());
}

int func_236()
{
	struct<3> Var0;
	
	if (!is_screen_faded_out())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (vdist2(func_6(player_id()), Var0) <= 25600f)
		{
			if (is_sphere_visible(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_35())
	{
		return;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (does_cam_exist(Local_96.f_169) && is_cam_active(Local_96.f_169))
		{
			if (is_cam_rendering(Local_96.f_169) || iParam0)
			{
				if (!func_77())
				{
					func_71(0);
				}
				func_248(1);
				if ((!func_247() || BitTest(Local_96.f_5, 1)) || func_193())
				{
					hide_hud_and_radar_this_frame();
				}
				else
				{
					hide_hud_component_this_frame(9);
					hide_hud_component_this_frame(7);
					hide_hud_component_this_frame(8);
					func_80();
					func_245(1);
					iVar0 = get_interior_from_entity(net_to_ent(Local_96.f_159));
					if (is_valid_interior(iVar0))
					{
						Global_1958711.f_24 = iVar0;
						if (!BitTest(Local_96.f_5, 8))
						{
							Local_96.f_123 = func_244(_get_interior_heading(iVar0));
							_get_interior_info(iVar0, &(Local_96.f_147), &(Local_96.f_17));
							set_bit(&(Local_96.f_5), 8);
						}
						iVar1 = 0;
						if (func_243(Local_96.f_150.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1958711.f_9 == -1f)
						{
							set_radar_zoom_precise(1f);
						}
						else
						{
							set_radar_zoom_precise(Global_1958711.f_9);
						}
						if ((!func_164(player_id()) && !func_240(player_id())) && !func_16())
						{
							if (!func_239())
							{
								func_238(1);
							}
						}
						if (!func_16())
						{
							set_bigmap_active(false, false);
						}
						set_radar_as_interior_this_frame(Local_96.f_17, Local_96.f_147, Local_96.f_147.f_1, floor(Local_96.f_123), iVar1);
					}
					else
					{
						Local_96.f_17 = -1;
						if (Global_1958711.f_9 == -1f)
						{
							set_radar_zoom_precise(0f);
						}
						else
						{
							set_radar_zoom_precise(Global_1958711.f_9);
						}
						if (!func_239() && !func_16())
						{
							func_238(1);
						}
						if (!func_16())
						{
							set_bigmap_active(false, false);
						}
						Global_1958711.f_24 = -1;
						if (BitTest(Local_96.f_5, 8))
						{
							clear_bit(&(Local_96.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_238(int iParam0)
{
	Global_2727832 = iParam0;
}

bool func_239()
{
	return Global_2727832;
}

int func_240(int iParam0)
{
	if (func_242(iParam0))
	{
		return 1;
	}
	if (func_241(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_91(iParam0, 9);
	}
	return 0;
}

int func_242(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_243(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_244(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_245(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100493.f_8 = 1;
	}
	else
	{
		Global_100493.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_246(iVar0);
		iVar0++;
	}
}

void func_246(int iParam0)
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

bool func_247()
{
	return BitTest(Global_1958711, 4);
}

void func_248(int iParam0)
{
	if (Global_2815059.f_4623 != iParam0)
	{
		Global_2815059.f_4623 = iParam0;
	}
}

void func_249()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	float fVar16;
	struct<3> Var17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	var uVar26;
	var uVar27;
	struct<3> Var28;
	
	if ((BitTest(Local_96.f_5, 1) || func_193()) || func_83())
	{
		return;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = get_entity_roll(net_to_obj(Local_96.f_159));
			fVar5 = get_entity_pitch(net_to_obj(Local_96.f_159));
			if (func_30())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * timestep());
			func_254();
			_0x7F4724035FDCA1DD(2);
			func_253(&(Local_96[0]), &(Local_96[1]), &(Local_96[2]), &(Local_96[3]), 0, 0);
			if (_is_using_keyboard(0))
			{
				iVar3 = 5;
				Local_96[2] = (Local_96[2] * iVar3);
				Local_96[3] = (Local_96[3] * iVar3);
			}
			if (is_look_inverted())
			{
				Local_96[3] = (Local_96[3] * -1);
			}
			if (func_22(&(Local_96.f_277), 750, 0))
			{
				if (!_is_using_keyboard(0))
				{
					bVar7 = is_disabled_control_just_pressed(0, 210);
				}
				else
				{
					bVar7 = (is_disabled_control_just_pressed(0, 241) || is_disabled_control_just_pressed(0, 242));
					if (is_disabled_control_just_pressed(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_205(&(Local_96.f_277), 0, 0);
				}
			}
			if (bVar7 && !func_252())
			{
				if (!_is_using_keyboard(0))
				{
					Local_96.f_25++;
				}
				else if (bVar8)
				{
					Local_96.f_25 = (Local_96.f_25 - 1);
				}
				else
				{
					Local_96.f_25++;
				}
				if (has_sound_finished(Local_96.f_39))
				{
					Local_96.f_39 = get_sound_id();
					play_sound_frontend(Local_96.f_39, "HUD_Zoom_Change", Local_96.f_157, true);
				}
				if (Local_96.f_25 > 2)
				{
					Local_96.f_25 = 0;
				}
				else if (Local_96.f_25 < 0)
				{
					Local_96.f_25 = 2;
				}
			}
			else if (has_sound_finished(Local_96.f_39))
			{
				stop_sound(Local_96.f_39);
				release_sound_id(Local_96.f_39);
				Local_96.f_39 = -1;
			}
			Local_96.f_128 = (Local_96.f_128 + (((Local_96.f_126 - Local_96.f_128) * 0.06f) * fVar6));
			set_cam_fov(Local_96.f_169, Local_96.f_128);
			if (Local_96[2] != 0 || Local_96[3] != 0)
			{
				if (Local_96[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_96[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_96[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_96[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { get_entity_rotation(net_to_obj(Local_96.f_159), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_96.f_130);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_96.f_130);
				if ((fVar4 != 0f || Local_96[0] != 0) && !func_77())
				{
					if (Local_96[0] != 0)
					{
						fVar16 = (1f / (127f / IntToFloat(Local_96[0])));
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar16 = -1f;
							}
							else
							{
								fVar16 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar16 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar16 = -0.001f;
							}
						}
						else
						{
							fVar16 = 0f;
						}
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var15 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_96[0] == 0)
					{
						if (Var15.f_1 > fVar1)
						{
							Var15.f_1 = fVar1;
						}
						else if (Var15.f_1 < -fVar1)
						{
							Var15.f_1 = -fVar1;
						}
					}
					else if (Var15.f_1 > fVar1)
					{
						Var15.f_1 = fVar1;
					}
					else if (Var15.f_1 < -fVar1)
					{
						Var15.f_1 = -fVar1;
					}
				}
				if (Var15.f_0 > fVar2)
				{
					Var15.f_0 = fVar2;
				}
				else if (Var15.f_0 < -fVar2)
				{
					Var15.f_0 = -fVar2;
				}
				if (!BitTest(Local_96.f_5, 12))
				{
					set_bit(&(Local_96.f_5), 12);
				}
				set_entity_rotation(net_to_obj(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var15.f_2, Var15.f_1, Var15.f_0), 2, true);
			}
			else if (((Local_96[0] != 0 || Local_96[1] != 0) && !func_252()) && !func_77())
			{
				Var17 = { get_entity_rotation(net_to_obj(Local_96.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar19 = -1f;
						Local_96.f_129 = fVar19;
					}
				}
				else
				{
					if (Local_96[0] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_96[0])));
						Local_96.f_129 = fVar18;
					}
					else
					{
						fVar18 = 0f;
					}
					if (Local_96[1] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_96[1])));
						Local_96.f_129 = fVar18;
					}
					else
					{
						fVar19 = 0f;
					}
				}
				fVar20 = -(((fVar19 * 0.05f) * fVar6) * fVar0);
				fVar21 = -(((fVar18 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_96[0] == 0 && !func_77()) || func_252())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar18 = -1f;
							}
							else
							{
								fVar18 = 1f;
							}
						}
						if (Var17.f_1 < 1.5f && Var17.f_1 > 0f)
						{
							fVar18 = 0.001f;
						}
						else if (Var17.f_1 > -1.5f && Var17.f_1 < 0f)
						{
							fVar18 = -0.001f;
						}
						fVar21 = -(((fVar18 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var22 = { Vector(0f, fVar21, fVar20) + Var17 };
				if (Var22.f_1 > fVar1)
				{
					Var22.f_1 = fVar1;
				}
				else if (Var22.f_1 < -fVar1)
				{
					Var22.f_1 = -fVar1;
				}
				if (Var22.f_0 > fVar2)
				{
					Var22.f_0 = fVar2;
				}
				else if (Var22.f_0 < -fVar2)
				{
					Var22.f_0 = -fVar2;
				}
				if (BitTest(Local_96.f_5, 12))
				{
					clear_bit(&(Local_96.f_5), 12);
				}
				set_entity_rotation(net_to_obj(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var22.f_1, Var22.f_0), 2, true);
			}
			else if (!func_251() && !func_252())
			{
				Local_96.f_129 = 0f;
				Var23 = { get_entity_rotation(net_to_obj(Local_96.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var23.f_0 < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 1.5f && Var23.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var23.f_1 > -1.5f && Var23.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (Var23.f_0 != 0f)
					{
						if (Var23.f_0 < 1.5f && Var23.f_0 > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (Var23.f_0 > -1.5f && Var23.f_0 < 0f)
						{
							fVar25 = -0.001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					uVar26 = func_250(-(((fVar25 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar27 = func_250(-(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var28 = { Vector(0f, uVar27, uVar26) + Var23 };
					if (BitTest(Local_96.f_5, 12))
					{
						Var28.f_0 = Var23.f_0;
					}
					set_entity_rotation(net_to_obj(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var23.f_2, Var28.f_1, Var28.f_0), 2, true);
				}
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

float func_250(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_251()
{
	return BitTest(Local_96.f_5, 22);
}

bool func_252()
{
	return BitTest(Local_96.f_5, 21);
}

void func_253(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((get_control_unbound_normal(2, 218) * 127f));
	*uParam1 = floor((get_control_unbound_normal(2, 219) * 127f));
	*uParam2 = floor((get_control_unbound_normal(2, 220) * 127f));
	*uParam3 = floor((get_control_unbound_normal(2, 221) * 127f));
	if (bParam4)
	{
		if (!is_control_enabled(2, 218))
		{
			*uParam0 = floor((get_disabled_control_unbound_normal(2, 218) * 127f));
		}
		if (!is_control_enabled(2, 219))
		{
			*uParam1 = floor((get_disabled_control_unbound_normal(2, 219) * 127f));
		}
		if (!is_control_enabled(2, 220))
		{
			*uParam2 = floor((get_disabled_control_unbound_normal(2, 220) * 127f));
		}
		if (!is_control_enabled(2, 221))
		{
			*uParam3 = floor((get_disabled_control_unbound_normal(2, 221) * 127f));
		}
	}
	if (_is_using_keyboard(2))
	{
		if (bParam5)
		{
			if (is_look_inverted())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_254()
{
	if (func_138())
	{
		switch (Local_96.f_25)
		{
			case 0:
				Local_96.f_127 = 90f;
				Local_96.f_126 = 90f;
				break;
			
			case 1:
				Local_96.f_127 = 75f;
				Local_96.f_126 = 75f;
				break;
			
			case 2:
				Local_96.f_127 = 45f;
				Local_96.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_96.f_25)
		{
			case 0:
				Local_96.f_127 = 90f;
				Local_96.f_126 = 90f;
				break;
			
			case 1:
				Local_96.f_127 = 80f;
				Local_96.f_126 = 80f;
				break;
			
			case 2:
				Local_96.f_127 = 70f;
				Local_96.f_126 = 70f;
				break;
			}
	}
}

void func_255()
{
	int iVar0;
	int iVar1;
	
	if (func_70(player_id(), 0))
	{
		iVar0 = func_180(0);
		Local_96.f_141 = { func_258(&Local_96) };
		if (!does_entity_exist(Local_96.f_162))
		{
			if (!func_257(Local_96.f_141))
			{
				if (func_179(iVar0))
				{
					Local_96.f_162 = create_object(iVar0, Local_96.f_141, false, false, true);
					set_entity_coords_no_offset(Local_96.f_162, Local_96.f_141, false, false, true);
					set_entity_collision(Local_96.f_162, true, false);
					set_entity_load_collision_flag(Local_96.f_162, true, 1);
					set_entity_records_collisions(Local_96.f_162, true);
					set_entity_heading(Local_96.f_162, func_256());
					freeze_entity_position(Local_96.f_162, true);
					set_entity_visible(Local_96.f_162, false, false);
					set_model_as_no_longer_needed(iVar0);
				}
			}
		}
		else
		{
			iVar1 = get_closest_object_of_type(Local_96.f_141, 2f, iVar0, false, false, false);
			if (does_entity_exist(iVar1) && iVar1 != Local_96.f_162)
			{
				if (network_has_control_of_entity(iVar1))
				{
					set_entity_completely_disable_collision(iVar1, false, false);
					freeze_entity_position(iVar1, true);
					set_entity_visible(iVar1, true, false);
				}
				else
				{
					network_request_control_of_entity(iVar1);
				}
			}
		}
	}
	else
	{
		Local_96.f_141 = { func_258(&Local_96) };
	}
}

float func_256()
{
	if (Global_1958711.f_7 != 0f)
	{
		return Global_1958711.f_7;
	}
	return 0f;
}

int func_257(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_258(var uParam0)
{
	if (!func_257(Global_1958711.f_10))
	{
		return Global_1958711.f_10;
	}
	else
	{
		return uParam0->f_141;
	}
	return 0f, 0f, 0f;
}

void func_259()
{
	if (Local_96.f_33 != -1)
	{
		stop_sound(Local_96.f_33);
		release_sound_id(Local_96.f_33);
		Local_96.f_33 = -1;
	}
}

int func_260(bool bParam0)
{
	if (is_pause_menu_active() || is_commerce_store_open())
	{
		return 1;
	}
	if (_network_is_text_chat_active())
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (func_265(player_id()) && !func_264())
	{
		return 1;
	}
	if (func_164(player_id()))
	{
		if (BitTest(Global_2813821, 0))
		{
			return 1;
		}
	}
	if (Global_1931426 || Global_1574964)
	{
		func_263(1);
		return 1;
	}
	if (((func_261(0) || func_169(1)) || func_168()) && !bParam0)
	{
		func_71(0);
		func_80();
		func_99();
		return 1;
	}
	return 0;
}

int func_261(bool bParam0)
{
	if (get_allow_movement_while_zoomed())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (func_262(player_ped_id()))
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

int func_262(int iParam0)
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

void func_263(bool bParam0)
{
	if (bParam0)
	{
		if (!func_37())
		{
			set_bit(&Global_1958711, 20);
		}
	}
	else if (func_37())
	{
		clear_bit(&Global_1958711, 20);
	}
}

bool func_264()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_265(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_266())
	{
		if (iParam0 == player_id())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_266()
{
	return BitTest(Global_2621446, 3);
}

void func_267()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	struct<3> Var18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	var uVar27;
	var uVar28;
	struct<3> Var29;
	var uVar30;
	
	if (!func_83() || func_193())
	{
		return;
	}
	if (func_35() && func_260(0))
	{
		return;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = get_entity_roll(net_to_obj(Local_96.f_159));
			fVar5 = get_entity_pitch(net_to_obj(Local_96.f_159));
			iVar6 = 1;
			if (func_16())
			{
				if (func_260(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_260(0))
			{
				iVar6 = 0;
			}
			if (func_16())
			{
				if (!func_130())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * get_frame_time());
			func_254();
			_0x7F4724035FDCA1DD(2);
			func_253(&(Local_96[0]), &(Local_96[1]), &(Local_96[2]), &(Local_96[3]), 0, 0);
			if (_is_using_keyboard(0))
			{
				iVar3 = 2;
				if (func_16())
				{
					iVar3 = 3;
				}
				Local_96[2] = (Local_96[2] * iVar3);
				Local_96[3] = (Local_96[3] * iVar3);
			}
			if (is_look_inverted())
			{
				Local_96[3] = (Local_96[3] * -1);
				Local_96[1] = (Local_96[1] * -1);
			}
			if (Local_96[3] != 0 && Local_96[2] != 0)
			{
				iVar8 = func_269(absi(Local_96[3]), absi(Local_96[2]));
				Local_96.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_96[1] != 0 && Local_96[0] != 0)
			{
				iVar9 = func_269(absi(Local_96[1]), absi(Local_96[0]));
				Local_96.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_96[3] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[3])));
			}
			else if (Local_96[2] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[2])));
			}
			else if (Local_96[1] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[1])));
			}
			else if (Local_96[0] != 0)
			{
				Local_96.f_129 = (1f / (127f / IntToFloat(Local_96[0])));
			}
			else
			{
				Local_96.f_129 = 0f;
			}
			if (iVar6 && ((Local_96[2] != 0 || Local_96[3] != 0) || (Local_96[0] != 0 || Local_96[1] != 0)))
			{
				if (Local_96[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_96[2])));
				}
				else if (Local_96[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_96[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_96[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_96[3])));
				}
				else if (Local_96[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_96[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { get_entity_rotation(net_to_obj(Local_96.f_159), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_96.f_130);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_96.f_130);
				if ((fVar4 != 0f || Local_96[2] != 0) || Local_96[0] != 0)
				{
					if (Local_96[2] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_96[2])));
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_96[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_96[0])));
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar17 = 0.0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar17 = -0.0001f;
							}
						}
						else
						{
							fVar17 = 0f;
						}
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var16 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_96[2] == 0 && Local_96[0] == 0)
					{
						if (Var16.f_1 > fVar1)
						{
							Var16.f_1 = fVar1;
						}
						else if (Var16.f_1 < -fVar1)
						{
							Var16.f_1 = -fVar1;
						}
					}
					else if (Var16.f_1 > fVar1)
					{
						Var16.f_1 = fVar1;
					}
					else if (Var16.f_1 < -fVar1)
					{
						Var16.f_1 = -fVar1;
					}
				}
				if (Var16.f_0 > fVar2)
				{
					Var16.f_0 = fVar2;
				}
				else if (Var16.f_0 < -fVar2)
				{
					Var16.f_0 = -fVar2;
				}
				if (!BitTest(Local_96.f_5, 12))
				{
					set_bit(&(Local_96.f_5), 12);
				}
				set_entity_rotation(net_to_obj(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var16.f_2, Var16.f_1, Var16.f_0), 2, true);
			}
			else if (iVar6 && (((Local_96[2] != 0 || Local_96[3] != 0) || Local_96[0] != 0) || Local_96[1] != 0))
			{
				Var18 = { get_entity_rotation(net_to_obj(Local_96.f_159), 2) };
				if (func_252())
				{
					if (func_251())
					{
						fVar20 = -1f;
					}
				}
				else
				{
					if (Local_96[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_96[2])));
					}
					else if (Local_96[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_96[0])));
					}
					else
					{
						fVar19 = 0f;
					}
					if (Local_96[3] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_96[3])));
					}
					else if (Local_96[1] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_96[1])));
					}
					else
					{
						fVar20 = 0f;
					}
				}
				fVar21 = -(((fVar20 * 0.05f) * fVar7) * fVar0);
				fVar22 = -(((fVar19 * 0.05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_96[2] == 0 && Local_96[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (Var18.f_1 < 2f && Var18.f_1 > 0f)
						{
							fVar19 = 0.0001f;
						}
						else if (Var18.f_1 > -2f && Var18.f_1 < 0f)
						{
							fVar19 = -0.0001f;
						}
						fVar22 = -(((fVar19 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var23 = { Vector(0f, fVar22, fVar21) + Var18 };
				if (Var23.f_1 > fVar1)
				{
					Var23.f_1 = fVar1;
				}
				else if (Var23.f_1 < -fVar1)
				{
					Var23.f_1 = -fVar1;
				}
				if (Var23.f_0 > fVar2)
				{
					Var23.f_0 = fVar2;
				}
				else if (Var23.f_0 < -fVar2)
				{
					Var23.f_0 = -fVar2;
				}
				if (BitTest(Local_96.f_5, 12))
				{
					clear_bit(&(Local_96.f_5), 12);
				}
				set_entity_rotation(net_to_obj(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var23.f_1, Var23.f_0), 2, true);
			}
			else
			{
				Var24 = { get_entity_rotation(net_to_obj(Local_96.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var24.f_0 < 0f)
						{
							fVar26 = -1f;
						}
						else
						{
							fVar26 = 1f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 2f && Var24.f_1 > 0f)
						{
							fVar25 = 0.0001f;
						}
						else if (Var24.f_1 > -2f && Var24.f_1 < 0f)
						{
							fVar25 = -0.0001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var24.f_0 != 0f)
					{
						if (Var24.f_0 < 2f && Var24.f_0 > 0f)
						{
							fVar26 = 0.0001f;
						}
						else if (Var24.f_0 > -2f && Var24.f_0 < 0f)
						{
							fVar26 = -0.0001f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					uVar27 = func_250(-(((fVar26 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar28 = func_250(-(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var29 = { Vector(0f, uVar28, uVar27) + Var24 };
					if (BitTest(Local_96.f_5, 12))
					{
						Var29.f_0 = Var24.f_0;
					}
					uVar30 = Var24.f_2;
					if (func_16())
					{
						if (!func_130())
						{
							uVar30 = Local_96.f_116;
							Var29.f_1 = 0f;
						}
					}
					set_entity_rotation(net_to_obj(Local_96.f_159), Vector(0f, 0f, 0f) + Vector(uVar30, Var29.f_1, Var29.f_0), 2, true);
					if (func_16())
					{
						if (absf(fVar4) < 2.5f && absf(fVar5) < 2.5f)
						{
							func_268(1);
						}
					}
				}
				else if (func_16())
				{
					func_268(1);
				}
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

void func_268(bool bParam0)
{
	if (!bParam0)
	{
		if (BitTest(Local_96.f_6, 6))
		{
			clear_bit(&(Local_96.f_6), 6);
		}
	}
	else if (!BitTest(Local_96.f_6, 6))
	{
		set_bit(&(Local_96.f_6), 6);
	}
}

int func_269(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_270()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_35())
	{
		return;
	}
	if (func_247())
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159))
		{
			if (!does_blip_exist(Local_96.f_171))
			{
				Local_96.f_171 = func_285(Local_96.f_150, 0);
				set_blip_sprite(Local_96.f_171, func_284());
				if (func_30() && !does_blip_exist(Local_96.f_172))
				{
					Local_96.f_172 = func_281(player_ped_id(), 0, 0);
					set_blip_sprite(Local_96.f_172, 6);
					show_height_on_blip(Local_96.f_172, false);
					set_blip_scale(Local_96.f_172, 0.7f);
					set_blip_priority(Local_96.f_172, (13 - 1));
					if (func_278(player_id()) != -1)
					{
						func_274(&(Local_96.f_172), func_276(func_278(player_id())));
					}
					else
					{
						func_274(&(Local_96.f_172), func_273());
					}
					set_blip_hidden_on_legend(Local_96.f_172, true);
				}
			}
			else
			{
				fVar0 = func_272(Local_96.f_124);
				fVar1 = Local_96.f_150;
				fVar2 = Local_96.f_150.f_1;
				set_blip_display(Local_96.f_171, 2);
				set_blip_coords(Local_96.f_171, Local_96.f_150);
				if (((func_24() || func_38()) && is_pause_menu_active()) && network_is_activity_session())
				{
					if (!_is_minimap_in_interior())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						set_blip_coords(Local_96.f_171, fVar1, fVar2, 0f);
						_set_player_blip_position_this_frame(fVar1, fVar2);
						hide_minimap_interior_map_this_frame();
					}
				}
				lock_minimap_position(fVar1, fVar2);
				set_blip_rotation(Local_96.f_171, round(fVar0));
				set_blip_scale(Local_96.f_171, 1f);
				set_blip_priority(Local_96.f_171, 9);
				lock_minimap_angle(round(fVar0));
				if (does_blip_exist(Local_96.f_172))
				{
					set_blip_rotation(Local_96.f_172, func_271(player_ped_id()));
				}
			}
		}
	}
}

int func_271(int iParam0)
{
	float fVar0;
	
	fVar0 = _get_entity_physics_heading(iParam0);
	return round(fVar0);
}

float func_272(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_273()
{
	return 10;
}

void func_274(var uParam0, int iParam1)
{
	int iVar0;
	
	if (does_blip_exist(*uParam0))
	{
		iVar0 = func_275(iParam1);
		set_blip_colour(*uParam0, iVar0);
	}
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_277(iParam0);
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

var func_277(int iParam0)
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_278(int iParam0)
{
	if (!iParam0 == func_12())
	{
		if (func_279(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[func_210(iParam0)];
		}
	}
	return -1;
}

bool func_279(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_280(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_12();
}

int func_280(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_12())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_281(int iParam0, bool bParam1, bool bParam2)
{
	return func_282(iParam0, !bParam1, bParam2);
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_283(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_283(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_283(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_283(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_284()
{
	if (func_16())
	{
		return 548;
	}
	return 627;
}

int func_285(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(Param0);
	set_blip_scale(iVar0, func_283(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, bParam1);
	return iVar0;
}

void func_286()
{
	if (func_35())
	{
		if (Local_96.f_150.f_2 >= (func_109() - 20f))
		{
			if (has_sound_finished(Local_96.f_37))
			{
				Local_96.f_37 = get_sound_id();
				play_sound_frontend(Local_96.f_37, "Out_Of_Bounds_Alarm_Loop", Local_96.f_157, true);
			}
		}
		else if (!has_sound_finished(Local_96.f_37))
		{
			stop_sound(Local_96.f_37);
			release_sound_id(Local_96.f_37);
			Local_96.f_37 = -1;
		}
	}
}

void func_287()
{
	if (((func_38() || func_138()) || func_30()) || func_160())
	{
		switch (Local_96.f_242)
		{
			case 0:
				func_310();
				break;
			
			case 1:
				func_297();
				break;
			
			case 2:
				func_295();
				break;
			
			case 3:
				func_288();
				break;
			}
	}
}

void func_288()
{
	func_72(1);
	if (!func_294())
	{
		do_screen_fade_in(500);
	}
	func_292(0);
	func_290(0);
	func_289(0);
}

void func_289(int iParam0)
{
	if (Local_96.f_242 != iParam0)
	{
		Local_96.f_242 = iParam0;
	}
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		if (!func_291())
		{
			set_bit(&Global_1958711, 17);
		}
	}
	else if (func_291())
	{
		clear_bit(&Global_1958711, 17);
	}
}

bool func_291()
{
	return BitTest(Global_1958711, 17);
}

void func_292(bool bParam0)
{
	if (bParam0)
	{
		if (!func_293())
		{
			set_bit(&Global_1958711, 18);
		}
	}
	else if (func_293())
	{
		clear_bit(&Global_1958711, 18);
	}
}

bool func_293()
{
	return BitTest(Global_1958711, 18);
}

bool func_294()
{
	return Global_1946250.f_519;
}

void func_295()
{
	if (func_293() || is_pause_menu_active())
	{
		func_72(1);
		func_296(0);
		clear_bit(&(Local_96.f_5), 16);
		func_289(3);
	}
}

void func_296(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77())
		{
			set_bit(&Global_1958711, 19);
		}
	}
	else if (func_77())
	{
		clear_bit(&Global_1958711, 19);
	}
}

void func_297()
{
	if (is_screen_faded_out())
	{
		if (func_22(&(Local_96.f_267), 3000, 0))
		{
			if (func_309())
			{
				if (BitTest(Global_4541229, 2) || func_22(&(Local_96.f_271), 8000, 0))
				{
					if (!BitTest(Global_4541229, 2))
					{
					}
					do_screen_fade_in(500);
					func_298(player_id(), 1, 0, 0);
					func_21(&(Local_96.f_267));
					func_21(&(Local_96.f_271));
					func_289(2);
				}
			}
			else if (func_22(&(Local_96.f_271), 15000, 0))
			{
				func_21(&(Local_96.f_267));
				func_21(&(Local_96.f_271));
				func_72(1);
				func_296(0);
				clear_bit(&(Local_96.f_5), 16);
				func_289(3);
			}
		}
	}
}

void func_298(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_308())
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
		if (!func_306())
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
				else if (bVar14 || (!func_116(player_id(), 0) && !func_266()))
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
					func_303(0, 0, 0);
					if (bVar25)
					{
						clear_focus();
					}
				}
				if (!func_302(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
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
					func_301();
					func_300();
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
				if (!func_302(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
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
					if (func_299(Global_4718592.f_168757))
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

bool func_299(int iParam0)
{
	return iParam0 == 17;
}

void func_300()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_301()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[player_id() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_302(int iParam0)
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

void func_303(bool bParam0, int iParam1, int iParam2)
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
				func_305();
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
		if (func_116(player_id(), 0))
		{
			network_set_in_spectator_mode_extended(bParam0, iParam1, true);
		}
		else
		{
			network_set_in_spectator_mode(bParam0, iParam1);
		}
		set_minimap_in_spectator_mode(bParam0, iParam1);
		func_304(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_304(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_bool(iVar0, bParam1, true);
	}
}

void func_305()
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

int func_306()
{
	if (func_307() == 0)
	{
		return 1;
	}
	return 0;
}

int func_307()
{
	return Global_1574632.f_18;
}

int func_308()
{
	if (BitTest(Global_1853348[player_id() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_309()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_310()
{
	if (func_329())
	{
		if (is_control_just_released(2, 201) || is_disabled_control_just_released(2, 201))
		{
			if (!func_309())
			{
				if (is_screen_faded_in())
				{
					func_296(1);
					func_127(-1);
					func_298(player_id(), 0, 512, 0);
					do_screen_fade_out(500);
					func_327(1, -1);
					func_311(3, 1, 1, 0);
					func_23(&(Local_96.f_267), 0, 0);
					func_23(&(Local_96.f_271), 0, 0);
					func_289(1);
				}
			}
		}
	}
}

int func_311(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_78319)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4541229, 14))
		{
			if (iParam0 == 17)
			{
				set_bit(&Global_4541229, 14);
				set_bit(&Global_4541229, 16);
			}
			if (iParam0 == 3)
			{
				set_bit(&Global_4541229, 14);
				set_bit(&Global_4541229, 15);
			}
			if (iParam0 == 23)
			{
				set_bit(&Global_4541229, 14);
				set_bit(&Global_4541229, 27);
			}
			if (iParam0 == 1)
			{
				set_bit(&Global_4541229, 14);
				set_bit(&Global_4541229, 29);
			}
		}
		if (Global_8143[iParam0 /*15*/].f_9 == 0)
		{
			func_323();
		}
		if (_get_number_of_references_of_script_with_name_hash(Global_8143[iParam0 /*15*/].f_9) > 0)
		{
			clear_bit(&Global_4541229, 14);
			clear_bit(&Global_4541229, 16);
			clear_bit(&Global_4541229, 15);
			clear_bit(&Global_4541229, 27);
			clear_bit(&Global_4541229, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_316();
	if (Global_20266.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_76(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20232 == 1)
	{
		return 0;
	}
	if (Global_20266.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!is_thread_active(Global_20263))
	{
		if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20266.f_1 < 4)
			{
				func_315("cellphone_flashhand");
				if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0)
				{
					Global_20263 = start_new_script("cellphone_flashhand", 1424);
				}
				set_script_as_no_longer_needed("cellphone_flashhand");
			}
		}
	}
	while (!Global_20248)
	{
		wait(0);
	}
	func_323();
	func_312();
	if (_get_number_of_references_of_script_with_name_hash(Global_8143[iParam0 /*15*/].f_9) == 0)
	{
		Global_8742 = 0;
		Global_20266.f_1 = 7;
		func_315(&(Global_8143[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (_get_number_of_references_of_script_with_name_hash(Global_8143[iParam0 /*15*/].f_9) == 0)
			{
				Global_20264 = start_new_script(&(Global_8143[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (_get_number_of_references_of_script_with_name_hash(Global_8143[iParam0 /*15*/].f_9) == 0)
		{
			Global_20264 = start_new_script(&(Global_8143[iParam0 /*15*/].f_5), 2552);
		}
		set_script_as_no_longer_needed(&(Global_8143[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_312()
{
	if (Global_78319 == 0)
	{
		Global_8143[14 /*15*/].f_4 = -99;
		Global_8143[4 /*15*/].f_4 = -99;
		if (Global_2725398)
		{
			if (func_314(14))
			{
				func_313(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_313(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_313(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_313(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_313(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_8143[iParam0 /*15*/]), sParam1, 16);
	Global_8143[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8143[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8143[iParam0 /*15*/].f_9 = get_hash_key(sParam3);
	Global_8143[iParam0 /*15*/].f_10 = iParam4;
	Global_8143[iParam0 /*15*/].f_11 = iParam5;
	Global_8143[iParam0 /*15*/].f_12 = iParam6;
	Global_8143[iParam0 /*15*/].f_13 = iParam7;
	Global_8143[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8143[iParam0 /*15*/].f_12 == 0)
	{
		Global_8143[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_13 == 0)
	{
		Global_8143[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_14 == 0)
	{
		Global_8143[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_314(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_315(char* sParam0)
{
	request_script(sParam0);
	while (!has_script_loaded(sParam0))
	{
		wait(0);
	}
}

void func_316()
{
	if (func_314(14))
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
		Global_20266 = func_317();
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

var func_317()
{
	func_318();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_318()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_321(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_320(player_ped_id());
			if (func_319(iVar0) && (!func_314(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_319(Global_113386.f_2363.f_539.f_4321))
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

bool func_319(int iParam0)
{
	return iParam0 < 3;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_321(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_321(int iParam0)
{
	if (func_319(iParam0))
	{
		return func_322(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_322(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

void func_323()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8143[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_78319 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_326(iVar2, Global_20266) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_313(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_313(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_313(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43052 == 15 && func_325(0) == 0) && Global_8141 == 0)
		{
			func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 0;
			Global_8142 = 255;
		}
		else
		{
			func_313(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 1;
			Global_8142 = 42;
		}
		if (iVar1 == 1)
		{
			func_313(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_313(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_313(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_313(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_313(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113386.f_14051.f_89 == 1)
		{
			func_313(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113386.f_14051.f_88 == 1)
		{
			func_313(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_313(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_313(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_313(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_313(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_313(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_313(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_313(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_313(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_313(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_313(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_313(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_313(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_313(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4541229, 4) == 1)
		{
			func_313(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_313(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_313(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_313(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_313(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_313(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_313(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_313(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_313(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_313(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_313(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_313(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_313(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_313(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_313(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_313(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_313(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4541229, 4) == 1)
		{
			if (Global_1836092)
			{
				func_313(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 20) == 1)
			{
				func_313(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 22) == 1)
			{
				func_313(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 26) == 1)
			{
				if (func_324())
				{
					func_313(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_313(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0) && BitTest(Global_4541229, 20) == 0) && BitTest(Global_4541229, 22) == 0) && BitTest(Global_4541229, 26) == 0)
		{
			if (func_324())
			{
				func_313(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_313(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_324()
{
	if (Global_78319)
	{
		if (Global_1836487 || Global_1836488 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_325(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_326(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

void func_327(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_124(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		reset_hud_component_values(15);
		Global_23150.f_8808 = 0;
	}
	thefeed_set_scripted_menu_height(0f);
	if (Global_23150.f_6019[iVar0])
	{
		clear_additional_text(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_328(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_328(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (has_scaleform_movie_loaded(*iParam0))
		{
			set_scaleform_movie_as_no_longer_needed(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_329()
{
	if (func_77())
	{
		return 0;
	}
	if (is_pause_menu_active())
	{
		return 0;
	}
	if ((func_169(0) || func_168()) || _is_recording())
	{
		func_21(&(Local_96.f_275));
		func_23(&(Local_96.f_275), 0, 0);
		clear_bit(&(Local_96.f_5), 16);
		func_99();
		return 0;
	}
	else if (func_25(&(Local_96.f_275)))
	{
		if (!func_22(&(Local_96.f_275), 2000, 0))
		{
			return 0;
		}
		else
		{
			clear_bit(&(Local_96.f_5), 16);
			func_21(&(Local_96.f_275));
		}
	}
	if (func_164(player_id()))
	{
		return 0;
	}
	return 1;
}

void func_330()
{
	if (func_331())
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
		{
			if (network_has_control_of_network_id(Local_96.f_159))
			{
				if (!BitTest(Local_96.f_5, 25))
				{
					freeze_entity_position(net_to_obj(Local_96.f_159), true);
					set_bit(&(Local_96.f_5), 25);
				}
			}
			else
			{
				network_request_control_of_network_id(Local_96.f_159);
			}
		}
	}
	else if (BitTest(Local_96.f_5, 25))
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
		{
			if (network_has_control_of_network_id(Local_96.f_159))
			{
				freeze_entity_position(net_to_obj(Local_96.f_159), false);
				clear_bit(&(Local_96.f_5), 25);
			}
			else
			{
				network_request_control_of_network_id(Local_96.f_159);
			}
		}
	}
}

int func_331()
{
	if (func_164(player_id()))
	{
		if (BitTest(Global_2813821, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_332()
{
	int iVar0;
	
	if (func_83())
	{
		Global_1958711.f_1 = 0;
	}
	if (func_339() || func_193())
	{
		if (!func_25(&(Local_96.f_247)))
		{
			func_23(&(Local_96.f_247), 0, 0);
		}
		else if (func_22(&(Local_96.f_247), Global_1958711.f_1, 0) || func_193())
		{
			func_21(&(Local_96.f_245));
			if (func_83())
			{
				if (func_17(player_ped_id()))
				{
					add_owned_explosion(player_ped_id(), func_338(), func_337(), func_336(), true, false, 1f);
				}
				else
				{
					add_explosion(func_338(), func_337(), func_336(), true, false, 1f, false);
				}
				set_pad_shake(0, 300, round((200f * Local_96.f_131)));
				set_network_id_can_migrate(Local_96.f_159, true);
				clear_focus();
				iVar0 = net_to_obj(Local_96.f_159);
				delete_object(&iVar0);
				set_bit(&(Local_96.f_6), 2);
			}
			if (func_31())
			{
				func_335(1);
				if (Local_96.f_26 == 0)
				{
					func_333(6, 0, 0);
				}
				else
				{
					func_333(5, 0, 0);
				}
			}
			func_384(1);
			func_383(5);
		}
	}
	else if (func_25(&(Local_96.f_247)))
	{
		func_205(&(Local_96.f_247), 0, 0);
	}
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];
	int iVar1;
	float fVar2;
	float fVar3;
	
	StringCopy(&cVar0, func_334(iParam0), 64);
	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 69;
	}
	fVar2 = 8f;
	fVar3 = -8f;
	Local_96.f_79 = network_create_synchronised_scene(Local_96.f_153, 0f, 0f, Local_96.f_118, 2, bParam2, bParam1, 1f, 0f, 1f);
	network_add_ped_to_synchronised_scene(player_ped_id(), Local_96.f_79, Local_96.f_158, &cVar0, fVar2, fVar3, iVar1, 0, 1000f, 0);
	if (iParam0 == 0)
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			network_add_entity_to_synchronised_scene(net_to_ent(Local_96.f_159), Local_96.f_79, Local_96.f_158, &cVar0, fVar2, fVar3, 8);
		}
	}
	StringCopy(&cVar0, func_334(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (network_does_entity_exist_with_network_id(Local_96.f_160))
	{
		play_entity_anim(net_to_ent(Local_96.f_160), &cVar0, Local_96.f_158, fVar2, bParam1, bParam2, false, 0f, 0);
		force_entity_ai_and_animation_update(net_to_ent(Local_96.f_160));
	}
	network_start_synchronised_scene(Local_96.f_79);
}

char* func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_335(bool bParam0)
{
	int iVar0;
	
	iVar0 = network_get_local_scene_from_network_id(iVar0);
	if (is_synchronized_scene_running(iVar0))
	{
		detach_synchronized_scene(iVar0);
		network_stop_synchronised_scene(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_17(player_ped_id()))
		{
			clear_ped_tasks(player_ped_id());
		}
	}
}

float func_336()
{
	if (func_16())
	{
		return 1f;
	}
	return 0.5f;
}

int func_337()
{
	if (func_16())
	{
		return 81;
	}
	return 72;
}

Vector3 func_338()
{
	if (func_16())
	{
		return get_cam_coord(Local_96.f_169);
	}
	return Local_96.f_150;
}

int func_339()
{
	if ((network_does_entity_exist_with_network_id(Local_96.f_159) && is_entity_dead(net_to_obj(Local_96.f_159), false)) && !BitTest(Local_96.f_5, 2))
	{
		return 1;
	}
	if (Local_96.f_12 == 2)
	{
		Local_96.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_96.f_5, 1))
	{
		return 1;
	}
	if (func_347())
	{
		Local_96.f_26 = 5;
		return 1;
	}
	if (func_138() && func_341())
	{
		Local_96.f_26 = 5;
		return 1;
	}
	if (func_31() || func_16())
	{
		if (func_341())
		{
			Local_96.f_26 = 5;
			return 1;
		}
	}
	if (BitTest(Local_96.f_5, 2))
	{
		Local_96.f_26 = 4;
		return 1;
	}
	if (func_177())
	{
		if (!func_25(&(Local_96.f_255)))
		{
			func_23(&(Local_96.f_255), 0, 0);
		}
		else if (func_22(&(Local_96.f_255), 3000, 0))
		{
			Local_96.f_26 = 0;
			return 1;
		}
	}
	if (BitTest(Local_96.f_5, 7))
	{
		Local_96.f_26 = 0;
		return 1;
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (is_entity_in_water(net_to_obj(Local_96.f_159)) || func_202(net_to_ent(Local_96.f_159), 0))
		{
			if (BitTest(Local_96.f_5, 29))
			{
				Local_96.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_138() && !func_340())
	{
		if (Local_96.f_150.f_2 >= func_109())
		{
			Local_96.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_340()
{
	return BitTest(Global_1958711.f_2, 0);
}

int func_341()
{
	struct<3> Var0;
	int iVar1;
	
	if (func_346())
	{
		return 0;
	}
	if (func_19(player_id(), 1, 1))
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
		{
			if (func_138())
			{
				if (does_entity_exist(func_345()) && !is_entity_dead(func_345(), false))
				{
					Var0 = { get_entity_coords(func_345(), true) };
				}
			}
			else if (func_30())
			{
				if (!func_31())
				{
					iVar1 = func_342(Global_2689235[player_id() /*453*/].f_318.f_9);
					switch (iVar1)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { get_entity_coords(player_ped_id(), true) };
				}
			}
			else if (func_16())
			{
				if (func_17(func_15()))
				{
					Var0 = { get_entity_coords(func_15(), true) };
				}
			}
			else
			{
				Var0 = { get_entity_coords(player_ped_id(), true) };
			}
			if (func_17(net_to_obj(Local_96.f_159)))
			{
				Local_96.f_120 = func_155(net_to_obj(Local_96.f_159), Var0, 1);
				if (Local_96.f_120 > func_109())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_12())
	{
		iVar0 = func_344(iParam0);
		if (iVar0 != 0)
		{
			return func_343(iVar0);
		}
	}
	return -1;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 128;
		
		case 2:
			return 129;
		
		case 3:
			return 130;
		
		case 4:
			return 131;
		
		case 5:
			return 132;
		
		case 6:
			return 133;
		
		default:
	}
	return -1;
}

int func_344(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_408;
	}
	return 0;
}

int func_345()
{
	if (Global_1853193 != func_12())
	{
		if (!func_47(Global_1853193))
		{
			if (does_entity_exist(Global_1640758))
			{
				return Global_1640758;
			}
			if (does_entity_exist(Global_1963827[Global_1853193]))
			{
				return Global_1963827[Global_1853193];
			}
		}
	}
	return -1;
}

bool func_346()
{
	return BitTest(Global_1958711, 6);
}

int func_347()
{
	float fVar0;
	int iVar1;
	
	if (network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false))
	{
		iVar1 = Global_262145.f_24699;
		if (func_16())
		{
			iVar1 *= 10;
		}
		if (get_ground_z_for_3d_coord(Local_96.f_150, &fVar0, true, false))
		{
			Local_96.f_121 = (Local_96.f_150.f_2 - fVar0);
			if (Local_96.f_121 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_348()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	if (!func_83())
	{
		return;
	}
	if ((network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false)) && does_cam_exist(Local_96.f_169))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			if (BitTest(Local_96.f_5, 1) || func_193())
			{
				return;
			}
			Var0 = { func_349(func_350()) };
			bVar3 = false;
			bVar4 = true;
			iVar5 = 0;
			if (func_16())
			{
				bVar3 = true;
				bVar4 = false;
				iVar5 = 0;
			}
			if (func_35())
			{
				if (!_is_using_keyboard(0))
				{
					if (get_control_unbound_normal(2, 208) != 0f)
					{
						iVar1 = 1;
					}
					if (get_control_unbound_normal(2, 207) != 0f)
					{
						iVar2 = 1;
					}
				}
				else
				{
					if (get_control_unbound_normal(2, 209) != 0f)
					{
						iVar1 = 1;
					}
					if (get_control_unbound_normal(2, 210) != 0f)
					{
						iVar2 = 1;
					}
				}
			}
			if (iVar1 && !func_260(bVar3))
			{
				Local_96.f_119 = 140f;
			}
			else if (iVar2 && !func_260(bVar3))
			{
				Local_96.f_119 = 60f;
			}
			else if (!func_16())
			{
				Local_96.f_119 = 100f;
			}
			apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), iVar5, Var0 * Vector(-Local_96.f_119, -Local_96.f_119, -Local_96.f_119), false, true, bVar4, false);
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

Vector3 func_349(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_350()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_351(&Var0);
	return Var0;
}

void func_351(var uParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_352()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	
	if (func_83())
	{
		return;
	}
	if ((network_does_entity_exist_with_network_id(Local_96.f_159) && !is_entity_dead(net_to_obj(Local_96.f_159), false)) && does_cam_exist(Local_96.f_169))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			fVar0 = 0f;
			if (!func_38() && !func_24())
			{
				if (!func_252())
				{
					if (func_25(&(Local_96.f_253)))
					{
						iVar1 = Global_262145.f_24697;
						if (func_24())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_22(&(Local_96.f_253), iVar1, 0))
						{
							iVar2 = (100 * absi(get_time_difference(get_network_time(), Local_96.f_253)));
							Local_96.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_17(Local_96.f_161))
							{
								attach_entity_to_entity(Local_96.f_161, net_to_obj(Local_96.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							Local_96.f_20 = 100;
							func_21(&(Local_96.f_253));
							if (!has_sound_finished(Local_96.f_43))
							{
								stop_sound(Local_96.f_43);
								release_sound_id(Local_96.f_43);
								Local_96.f_43 = -1;
							}
						}
					}
					if (!_is_using_keyboard(0))
					{
						bVar3 = is_disabled_control_just_pressed(0, 209);
					}
					else
					{
						bVar3 = is_disabled_control_just_pressed(0, 203);
					}
					if ((((bVar3 && Local_96.f_20 == 100) && !func_260(0)) && !func_77()) && func_161())
					{
						fVar0 = 120f;
						if (func_24())
						{
							fVar0 = 110f;
						}
						else if (func_30())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_96[1]) != 0f)
						{
							func_359(1);
						}
						else
						{
							func_359(0);
						}
						animpostfx_play("RaceTurbo", 0, false);
						func_23(&(Local_96.f_251), 0, 0);
						func_358(1);
						if (has_sound_finished(Local_96.f_42))
						{
							Local_96.f_42 = get_sound_id();
							play_sound_frontend(Local_96.f_42, "HUD_Boost_Loop", Local_96.f_157, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_24())
					{
						fVar0 = 115f;
					}
					else if (func_30())
					{
						fVar0 = 49f;
					}
					if (does_cam_exist(Local_96.f_169))
					{
						if (!is_cam_shaking(Local_96.f_169))
						{
							shake_cam(Local_96.f_169, "DRONE_BOOST_SHAKE", 1f);
							set_cam_shake_amplitude(Local_96.f_169, 0.15f);
						}
					}
					if (func_25(&(Local_96.f_251)))
					{
						if (func_22(&(Local_96.f_251), Global_262145.f_24696, 0))
						{
							Local_96.f_20 = 0;
							func_359(0);
							func_358(0);
							func_21(&(Local_96.f_253));
							func_23(&(Local_96.f_253), 0, 0);
							stop_cam_shaking(Local_96.f_169, true);
							stop_pad_shake(0);
							animpostfx_stop("RaceTurbo");
							func_21(&(Local_96.f_251));
							if (!has_sound_finished(Local_96.f_42))
							{
								stop_sound(Local_96.f_42);
								release_sound_id(Local_96.f_42);
								Local_96.f_42 = -1;
							}
							if (has_sound_finished(Local_96.f_43))
							{
								Local_96.f_43 = get_sound_id();
								play_sound_frontend(Local_96.f_43, "HUD_Boost_Recharge_Loop", Local_96.f_157, true);
							}
						}
						else
						{
							fVar4 = (100f / (to_float(Global_262145.f_24696) / IntToFloat(get_time_difference(get_network_time(), Local_96.f_251))));
							Local_96.f_20 = (100 - round(fVar4));
							set_pad_shake(0, Global_262145.f_24696, round((255f * Local_96.f_131)));
						}
					}
				}
			}
			Var5 = { Local_96.f_150 };
			if (BitTest(Local_96.f_5, 1) || func_193())
			{
				return;
			}
			Var6 = { func_349(func_350()) };
			Var7 = { func_349(func_357(func_350())) };
			get_ground_z_for_3d_coord(Var5, &fVar8, true, false);
			if (!func_356())
			{
				if (Local_96.f_10 == 2 || (Var5.f_2 - fVar8) < 2f)
				{
					fVar9 = 24f;
					if (Local_96[1] != 0)
					{
						disable_control_action(2, 207, true);
					}
					if (get_control_unbound_normal(2, 207) != 0f || Local_96[1] != 0)
					{
						if ((Var5.f_2 - fVar8) < 0.5f || get_control_unbound_normal(2, 207) != 0f)
						{
							fVar9 = 24f;
						}
						else
						{
							fVar9 = 10f;
						}
					}
					else
					{
						fVar9 = 3f;
					}
					apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, 0f, fVar9, false, true, true, false);
				}
			}
			if (_is_using_keyboard(0))
			{
				if (Local_96[2] >= 127)
				{
					Local_96[2] = 127;
				}
				else if (Local_96[2] <= -127)
				{
					Local_96[2] = -127;
				}
				if (Local_96[0] >= 127)
				{
					Local_96[0] = 127;
				}
				else if (Local_96[0] <= -127)
				{
					Local_96[0] = -127;
				}
			}
			if (!_is_using_keyboard(0))
			{
				if (get_control_unbound_normal(2, 208) != 0f)
				{
					iVar10 = 1;
				}
				if (get_control_unbound_normal(2, 207) != 0f)
				{
					iVar11 = 1;
				}
			}
			else
			{
				if (get_control_unbound_normal(2, 209) != 0f)
				{
					iVar10 = 1;
				}
				if (get_control_unbound_normal(2, 210) != 0f)
				{
					iVar11 = 1;
				}
			}
			if (((iVar10 && func_355()) && !func_77()) || (func_252() && !func_251()))
			{
				fVar14 = Local_96.f_119;
				if (func_160())
				{
					fVar14 = 5f;
				}
				if (func_38() || func_24())
				{
					fVar13 = 10f;
				}
				if (func_252() && !func_251())
				{
					if (!_is_using_keyboard(0))
					{
						fVar12 = ((fVar14 + fVar0) / (1f / get_control_unbound_normal(2, 208)));
					}
					else
					{
						fVar12 = ((fVar14 + fVar0) / (1f / get_control_unbound_normal(2, 209)));
					}
				}
				else if (!_is_using_keyboard(0))
				{
					fVar12 = ((fVar14 + fVar13) / (1f / get_control_unbound_normal(2, 208)));
				}
				else
				{
					fVar12 = ((fVar14 + fVar13) / (1f / get_control_unbound_normal(2, 209)));
				}
				Var15 = { Var7 * Vector(fVar12, fVar12, fVar12) };
				if (Var15.f_2 > 149f)
				{
					Var15.f_2 = 149f;
				}
				apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, Var15, false, true, true, false);
			}
			else if (((iVar11 && !func_77()) && func_355()) && !func_260(0))
			{
				if (func_38() || func_24())
				{
					fVar17 = 10f;
				}
				if (!_is_using_keyboard(0))
				{
					fVar16 = ((Local_96.f_119 + fVar17) / (1f / get_control_unbound_normal(2, 207)));
				}
				else
				{
					fVar16 = ((Local_96.f_119 + fVar17) / (1f / get_control_unbound_normal(2, 210)));
				}
				apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, Var7 * Vector(-fVar16, -fVar16, -fVar16), false, true, true, false);
			}
			if (((Local_96[1] > 0 && !func_252()) && !func_260(0)) && !func_77())
			{
				fVar20 = func_354();
				fVar18 = (Local_96.f_119 / (127f / IntToFloat(Local_96[1])));
				fVar19 = (fVar20 / (127f / IntToFloat(Local_96[1])));
				apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, Var6 * Vector(fVar18, fVar18, fVar18), false, true, true, false);
				apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, 0f, fVar19, false, true, true, false);
			}
			else if ((((Local_96[1] < 0 && !func_252()) && !func_260(0)) && !func_77()) || (func_252() && func_251()))
			{
				if (func_252() && func_251())
				{
					fVar23 = 50f;
					if (func_24())
					{
						fVar21 = (Local_96.f_119 / -1f);
					}
					else
					{
						fVar21 = ((Local_96.f_119 + fVar0) / -1f);
					}
					fVar22 = (fVar23 / -1f);
				}
				else
				{
					fVar23 = func_354();
					if (func_24())
					{
						fVar21 = (Local_96.f_119 / (127f / IntToFloat(Local_96[1])));
					}
					else
					{
						fVar21 = ((Local_96.f_119 + fVar0) / (127f / IntToFloat(Local_96[1])));
					}
					fVar22 = (fVar23 / (127f / IntToFloat(Local_96[1])));
				}
				if (func_24())
				{
					if (!func_251())
					{
						apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, 0f, -fVar22, false, true, true, false);
						apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), false, true, true, false);
					}
					else
					{
						apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, 0f, 41f, false, true, true, false);
						apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, -149f, 0f, false, true, true, false);
					}
				}
				else
				{
					apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, 0f, -fVar22, false, true, true, false);
					apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), false, true, true, false);
				}
			}
			Var24 = { func_353(Var6, Var7) };
			if ((!func_252() && !func_260(0)) && !func_77())
			{
				if (Local_96[0] > 0)
				{
					fVar25 = -(Local_96.f_119 / (127f / IntToFloat(Local_96[0])));
					fVar26 = (8f / (127f / IntToFloat(Local_96[0])));
					apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, Var24 * Vector(fVar25, fVar25, fVar25), false, true, true, false);
					apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, 0f, fVar26, false, true, true, false);
				}
				else if (Local_96[0] < 0)
				{
					fVar27 = -(Local_96.f_119 / (127f / IntToFloat(Local_96[0])));
					fVar28 = (8f / (127f / IntToFloat(Local_96[0])));
					apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, Var24 * Vector(fVar27, fVar27, fVar27), false, true, true, false);
					apply_force_to_entity_center_of_mass(net_to_obj(Local_96.f_159), 0, 0f, 0f, -fVar28, false, true, true, false);
				}
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

Vector3 func_353(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

float func_354()
{
	if (func_24() || func_38())
	{
		return 40f;
	}
	else if (func_30())
	{
		return 30f;
	}
	else if (func_160())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_355()
{
	if (func_260(0))
	{
		return 0;
	}
	if (func_252() && !func_251())
	{
		return 0;
	}
	return 1;
}

bool func_356()
{
	return BitTest(Global_1958711, 2);
}

Vector3 func_357(struct<2> Param0, var uParam1)
{
	struct<3> Var0;
	
	Var0 = { sin(Param0.f_1), (-sin(Param0.f_0) * cos(Param0.f_1)), (cos(Param0.f_0) * cos(Param0.f_1)) };
	return Var0;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_96.f_5, 21))
		{
			set_bit(&(Local_96.f_5), 21);
		}
	}
	else if (BitTest(Local_96.f_5, 21))
	{
		clear_bit(&(Local_96.f_5), 21);
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_96.f_5, 22))
		{
			set_bit(&(Local_96.f_5), 22);
		}
	}
	else if (BitTest(Local_96.f_5, 22))
	{
		clear_bit(&(Local_96.f_5), 22);
	}
}

void func_360()
{
	float fVar0;
	float fVar1;
	
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (!is_entity_dead(net_to_veh(Local_96.f_159), false))
		{
			if ((func_24() || func_38()) || func_35())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_96.f_150;
				fVar1 = Local_96.f_150.f_1;
			}
			_set_player_blip_position_this_frame(fVar0, fVar1);
			_0xA17784FCA9548D15(fVar0, fVar1, 0);
			if (!is_valid_interior(Global_1958711.f_24) && !func_35())
			{
				if (!BitTest(Local_96.f_5, 8))
				{
					hide_minimap_interior_map_this_frame();
				}
				set_radar_as_exterior_this_frame();
			}
		}
	}
}

void func_361()
{
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (has_sound_finished(Local_96.f_41) && Local_96.f_41 == -1)
		{
			Local_96.f_41 = get_sound_id();
			play_sound_frontend(Local_96.f_41, "HUD_Loop", Local_96.f_157, true);
		}
	}
}

void func_362()
{
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (has_sound_finished(Local_96.f_31))
		{
			Local_96.f_31 = get_sound_id();
			play_sound_from_entity(Local_96.f_31, "Flight_Loop", net_to_obj(Local_96.f_159), Local_96.f_157, false, 0);
			set_variable_on_sound(Local_96.f_31, "DroneRotationalSpeed", Local_96.f_129);
		}
		else
		{
			set_variable_on_sound(Local_96.f_31, "DroneRotationalSpeed", Local_96.f_129);
		}
		if (has_sound_finished(Local_96.f_40))
		{
			release_sound_id(Local_96.f_40);
			Local_96.f_40 = -1;
		}
	}
}

void func_363()
{
	if (func_19(player_id(), 1, 1))
	{
		set_ped_reset_flag(player_ped_id(), 450, true);
	}
}

void func_364()
{
	int iVar0;
	
	if (func_24())
	{
		iVar0 = int_to_playerindex(Local_96.f_45);
		if (network_does_entity_exist_with_network_id(Local_96.f_159) && func_19(iVar0, 1, 1))
		{
			if (is_ped_in_any_vehicle(get_player_ped(iVar0), false))
			{
				if (func_365(net_to_obj(Local_96.f_159), get_player_ped(iVar0), Global_262145.f_25340, 1))
				{
					if (!func_209(player_id(), iVar0))
					{
						if (get_player_team(player_id()) != get_player_team(iVar0) || get_player_team(player_id()) == -1)
						{
							set_bit(&(Local_96.f_5), 11);
							return;
						}
					}
				}
			}
		}
		clear_bit(&(Local_96.f_5), 11);
	}
}

bool func_365(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return vdist2(get_entity_coords(iParam0, bParam3), get_entity_coords(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_366()
{
	int iVar0;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		iVar0 = 1000;
		if (func_24() || func_38())
		{
			iVar0 = 7000;
		}
		else if (func_16())
		{
			iVar0 = 1100;
		}
		if (!BitTest(Local_96.f_5, 29))
		{
			if (does_cam_exist(Local_96.f_169) && is_cam_rendering(Local_96.f_169))
			{
				if (func_17(func_18()))
				{
					if (func_22(&(Local_96.f_269), iVar0, 0))
					{
						set_entity_completely_disable_collision(func_18(), true, false);
						set_entity_collision(func_18(), true, false);
						set_bit(&(Local_96.f_5), 29);
					}
				}
			}
		}
	}
}

void func_367()
{
	if (!func_16() || player_id() == func_12())
	{
		return;
	}
	if (func_22(&(Local_96.f_281[player_id() /*2*/]), 2500, 0))
	{
		if (does_particle_fx_looped_exist(Local_96.f_207[player_id()]))
		{
			stop_particle_fx_looped(Local_96.f_207[player_id()], false);
		}
		func_21(&(Local_96.f_281[player_id() /*2*/]));
	}
}

void func_368()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	sVar0 = "scr_ih_sub";
	request_named_ptfx_asset(sVar0);
	if (has_named_ptfx_asset_loaded(sVar0))
	{
		if (func_17(func_15()) && player_id() != func_12())
		{
			if (!does_particle_fx_looped_exist(Local_96.f_207[player_id()]))
			{
				use_particle_fx_asset(sVar0);
				sVar1 = func_375(player_id());
				iVar2 = get_entity_bone_index_by_name(func_15(), sVar1);
				Local_96.f_207[player_id()] = start_particle_fx_looped_on_entity_bone("scr_ih_sub_missile_launch", func_15(), func_374(player_id()), 0f, 0f, 0f, iVar2, 5f, false, false, false);
			}
			else
			{
				func_23(&(Local_96.f_281[player_id() /*2*/]), 0, 0);
			}
			if (func_25(&(Local_96.f_281[player_id() /*2*/])))
			{
				if (func_22(&(Local_96.f_281[player_id() /*2*/]), 1000, 0))
				{
					set_particle_fx_looped_evolution(Local_96.f_207[player_id()], "flame", 0.15f, false);
					func_370();
					func_267();
					func_348();
					if (!is_entity_visible(net_to_obj(Local_96.f_159)))
					{
						set_entity_visible(net_to_obj(Local_96.f_159), true, false);
					}
					func_369();
					if (has_sound_finished(Local_96.f_40))
					{
						Local_96.f_40 = get_sound_id();
						play_sound_frontend(Local_96.f_40, "HUD_Startup", Local_96.f_157, true);
					}
					func_270();
					func_102();
					func_237(1);
					clear_timecycle_modifier();
					set_timecycle_modifier("IslandPeriscope");
					render_script_cams(true, false, 0, true, true, 0);
					Local_96.f_173 = get_network_time();
					set_entity_invincible(net_to_obj(Local_96.f_159), false);
					func_383(4);
				}
			}
		}
		else
		{
			func_384(1);
			func_383(7);
		}
	}
}

void func_369()
{
	if (func_138() || func_31())
	{
		if (!is_audio_scene_active("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			start_audio_scene("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_24())
	{
		if (!is_audio_scene_active("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			start_audio_scene("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_38())
	{
		if (!is_audio_scene_active("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			start_audio_scene("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_35())
	{
		if (!is_audio_scene_active("dlc_aw_arena_piloted_missile_scene"))
		{
			start_audio_scene("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_16())
	{
		if (!is_audio_scene_active("dlc_hei4_submarine_guided_missile_Scene"))
		{
			start_audio_scene("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_370()
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	sVar1 = func_375(player_id());
	if (Global_1581359 == 1)
	{
		iVar0 = get_entity_bone_index_by_name(func_15(), sVar1);
		Var2 = { _get_entity_bone_position_2(func_15(), iVar0) };
		Local_96.f_144 = { _get_object_offset_from_coords(Var2, get_entity_heading(func_15()), 0f, 0f, -2.6f) };
	}
	else if (Global_1581359 == 2)
	{
		iVar0 = get_entity_bone_index_by_name(func_15(), sVar1);
		Var2 = { _get_entity_bone_position_2(func_15(), iVar0) };
		Local_96.f_144 = { _get_object_offset_from_coords(Var2, get_entity_heading(func_15()), 0f, 0f, -2.6f) };
	}
	Var3 = { get_entity_rotation(func_15(), 2) };
	set_entity_coords(net_to_obj(Local_96.f_159), Local_96.f_144, true, false, false, true);
	func_372(Local_96.f_144, (Var3.f_0 + 90f), 180f, 0f);
	Var4 = { get_entity_coords(func_15(), true) };
	Var5 = { 0f, 0f, 0f };
	Local_96.f_116 = func_371(Var5, Var4);
	set_entity_heading(net_to_obj(Local_96.f_159), Local_96.f_116);
	set_entity_rotation(net_to_obj(Local_96.f_159), (Var3.f_0 - 90f), 0f, Local_96.f_116, 2, true);
	if (has_sound_finished(Local_96.f_115))
	{
		Local_96.f_115 = get_sound_id();
		play_sound_from_entity(Local_96.f_115, "Missile_Launch", net_to_obj(Local_96.f_159), Local_96.f_157, true, 0);
	}
}

float func_371(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return get_heading_from_vector_2d((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_372(struct<3> Param0, struct<3> Param1)
{
	if (!func_373(Global_1958711.f_13, Param0, 0))
	{
		Global_1958711.f_13 = { Param0 };
		Param1 = { Param1 + Vector(0f, -180f, 180f) };
		Global_1958711.f_16 = { Param1 };
	}
}

bool func_373(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_374(int iParam0)
{
	if (Local_96.f_82[iParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_375(int iParam0)
{
	if (iParam0 == func_12())
	{
		return "";
	}
	switch (Local_96.f_82[iParam0])
	{
		case 1:
			return "sub_hatch1";
		
		case 2:
			return "sub_hatch2";
		
		case 3:
			return "sub_hatch3";
		
		case 4:
			return "sub_hatch4";
		
		case 5:
			return "sub_hatch5";
		
		case 6:
			return "sub_hatch6";
		
		case 7:
			return "sub_hatch7";
		
		case 8:
			return "sub_hatch8";
		
		default:
	}
	return "sub_hatch4";
}

void func_376()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_382() || !func_31())
	{
		return;
	}
	switch (Local_96.f_80)
	{
		case 0:
			if (!network_does_entity_exist_with_network_id(Local_96.f_160))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_179(iVar0))
				{
					if (func_92(get_num_reserved_mission_objects(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_96.f_6, 3))
						{
							_reserve_network_local_objects(get_num_reserved_mission_objects(false, 1) + 1);
							set_bit(&(Local_96.f_6), 3);
						}
						if (can_register_mission_objects(1))
						{
							if (func_381(&(Local_96.f_160), iVar0, get_entity_coords(player_ped_id(), true), 0, 1, 1, 0, 0, 0, 1))
							{
								set_network_id_always_exists_for_player(Local_96.f_160, player_id(), true);
								iVar1 = get_ped_bone_index(player_ped_id(), 28422);
								attach_entity_to_entity(net_to_obj(Local_96.f_160), player_ped_id(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
								set_model_as_no_longer_needed(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_96.f_80 = 1;
			}
			break;
		
		case 1:
			if (get_script_task_status(player_ped_id(), 2106541073) != 0 && get_script_task_status(player_ped_id(), 2106541073) != 1)
			{
				func_333(0, 0, 0);
				Local_96.f_80 = 2;
			}
			break;
		
		case 2:
			if (func_380(0, "CREATE"))
			{
				func_362();
				if (func_379(Local_96.f_160))
				{
					if (!is_entity_visible(net_to_obj(Local_96.f_160)))
					{
						set_entity_visible(net_to_obj(Local_96.f_160), true, false);
					}
				}
				if (func_379(Local_96.f_159))
				{
					if (!is_entity_visible(net_to_obj(Local_96.f_159)))
					{
						set_entity_visible(net_to_obj(Local_96.f_159), true, false);
						set_entity_visible(Local_96.f_163, false, false);
					}
				}
			}
			if (func_377(1))
			{
				attach_entity_to_entity(Local_96.f_163, net_to_obj(Local_96.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				set_entity_visible(Local_96.f_163, false, false);
				force_entity_ai_and_animation_update(net_to_ent(Local_96.f_159));
				_0x006E4B040ED37EC3(net_to_obj(Local_96.f_159));
				func_270();
				func_131();
				func_237(1);
				func_249();
				func_352();
				func_369();
				if (has_sound_finished(Local_96.f_40))
				{
					Local_96.f_40 = get_sound_id();
					play_sound_frontend(Local_96.f_40, "HUD_Startup", Local_96.f_157, true);
				}
				render_script_cams(true, false, 0, true, true, 0);
				Local_96.f_173 = get_network_time();
				func_383(4);
				func_333(1, 1, 0);
				Local_96.f_80 = 3;
			}
			break;
		
		case 3:
			if (func_377(0))
			{
				iVar2 = get_random_int_in_range(0, 3);
				switch (iVar2)
				{
					case 0:
						func_333(2, 0, 0);
						Local_96.f_243 = 2;
						break;
					
					case 1:
						func_333(3, 0, 0);
						Local_96.f_243 = 3;
						break;
					
					case 2:
						func_333(4, 0, 0);
						Local_96.f_243 = 4;
						break;
				}
				Local_96.f_80 = 4;
			}
			break;
		
		case 4:
			if (func_377(0))
			{
				func_333(1, 1, 0);
				Local_96.f_80 = 3;
			}
			break;
	}
}

int func_377(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = player_ped_id();
	if (func_17(iVar0))
	{
		fVar1 = func_378();
		iVar2 = network_get_local_scene_from_network_id(Local_96.f_79);
		if (is_synchronized_scene_running(iVar2) && get_synchronized_scene_phase(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_335(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_378()
{
	return 0.95f;
}

int func_379(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		network_request_control_of_network_id(iParam0);
		return network_has_control_of_network_id(iParam0);
	}
	return 0;
}

int func_380(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = network_get_local_scene_from_network_id(Local_96.f_79);
	if (iVar0 != -1)
	{
		if (is_synchronized_scene_running(iVar0))
		{
			if ((has_anim_event_fired(player_ped_id(), get_hash_key(sParam1)) || has_anim_event_fired(net_to_obj(Local_96.f_160), get_hash_key(sParam1))) || has_anim_event_fired(net_to_obj(Local_96.f_159), get_hash_key(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_381(var uParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!can_register_mission_objects(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = obj_to_net(create_object_no_offset(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = obj_to_net(create_object(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	if (network_does_network_id_exist(*uParam0))
	{
		_set_entity_cleanup_by_engine(net_to_obj(*uParam0), bParam6);
		if (bParam8)
		{
			_network_set_entity_invisible_to_network(net_to_obj(*uParam0), true);
		}
		if (bParam9)
		{
			set_entity_visible(net_to_obj(*uParam0), false, false);
		}
		if (network_get_entity_is_networked(net_to_obj(*uParam0)))
		{
			if (bParam3)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

bool func_382()
{
	return BitTest(Global_1958711, 13);
}

void func_383(int iParam0)
{
	if (Local_96.f_241 != iParam0)
	{
		Local_96.f_241 = iParam0;
	}
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		if (!func_382())
		{
			set_bit(&Global_1958711, 13);
		}
	}
	else if (func_382())
	{
		clear_bit(&Global_1958711, 13);
	}
}

void func_385()
{
	struct<3> Var0;
	
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			if (!does_cam_exist(Local_96.f_169) && BitTest(Local_96.f_5, 0))
			{
				if (func_396())
				{
					if (func_340())
					{
						func_298(player_id(), 0, 33280, 0);
					}
					else if (!func_35())
					{
						func_298(player_id(), 0, 512, 0);
					}
					if (!func_395())
					{
						_thefeed_disable_loading_screen_tips();
					}
					else
					{
						_thefeed_display_loading_screen_tips();
					}
					Local_96.f_169 = create_camera(26379945, true);
					set_cam_fov(Local_96.f_169, Local_96.f_125);
					set_cam_near_clip(Local_96.f_169, 0.01f);
					set_cam_near_dof(Local_96.f_169, 0.01f);
					clear_timecycle_modifier();
					if (func_35())
					{
						set_timecycle_modifier("eyeinthesky");
					}
					Var0 = { func_394() };
					_0x202A5ED9CE01D6E7(Local_96.f_169, net_to_obj(Local_96.f_159), 0f, 0f, 180f, Var0, 1);
					if (func_35())
					{
						set_cam_rot(Local_96.f_169, func_393() - Vector(0f, -180f, 180f), 2);
					}
					set_pop_control_sphere_this_frame(Local_96.f_150, 75f, 75f);
					set_focus_pos_and_vel(Local_96.f_150, get_cam_rot(Local_96.f_169, 2));
					if (!func_16())
					{
						set_entity_invincible(net_to_obj(Local_96.f_159), false);
					}
					if (!func_340())
					{
						if (is_new_load_scene_loaded())
						{
							new_load_scene_stop();
						}
					}
					if (!func_31() && !func_16())
					{
						func_369();
						if (has_sound_finished(Local_96.f_40))
						{
							Local_96.f_40 = get_sound_id();
							play_sound_frontend(Local_96.f_40, "HUD_Startup", Local_96.f_157, true);
						}
						func_270();
						if (func_83())
						{
							func_102();
						}
						else
						{
							func_131();
						}
						func_237(1);
						func_249();
						func_352();
						render_script_cams(true, false, 0, true, true, 0);
						Local_96.f_173 = get_network_time();
					}
					func_390(1);
					func_389(1);
					func_387(158);
					set_bit(&(Local_94[player_id() /*3*/]), 0);
					if (!func_31() && !func_16())
					{
						func_383(4);
					}
					else if (func_16())
					{
						func_383(3);
					}
					else
					{
						Local_96.f_153 = { func_6(player_id()) };
						get_ground_z_for_3d_coord(Local_96.f_153, &(Local_96.f_153.f_2), false, false);
						Local_96.f_118 = get_entity_heading(player_ped_id());
						func_386();
						Local_96.f_153 = { _get_object_offset_from_coords(Local_96.f_153, Local_96.f_118, -0.0695723f, 0.177497f, 0f) };
						func_383(2);
					}
				}
				else if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					task_leave_any_vehicle(player_ped_id(), 0, 0);
				}
			}
			else
			{
				if (does_cam_exist(Local_96.f_169))
				{
				}
				if (!BitTest(Local_96.f_5, 0))
				{
				}
			}
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
		}
	}
}

void func_386()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		get_current_ped_weapon(player_ped_id(), &iVar0, true);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
		}
	}
}

void func_387(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_388() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_388()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_389(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_267.f_348, 26))
		{
			set_bit(&(Global_1853348[player_id() /*834*/].f_267.f_348), 26);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_348, 26))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_267.f_348), 26);
	}
}

void func_390(bool bParam0)
{
	if (bParam0)
	{
		if (!func_75())
		{
			set_bit(&Global_1958711, 5);
		}
	}
	else
	{
		if (func_75())
		{
			clear_bit(&Global_1958711, 5);
		}
		func_391(0);
	}
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		if (!func_392())
		{
			set_bit(&Global_1958711, 12);
		}
	}
	else if (func_392())
	{
		clear_bit(&Global_1958711, 12);
	}
}

bool func_392()
{
	return BitTest(Global_1958711, 12);
}

Vector3 func_393()
{
	return Global_1958711.f_16;
}

Vector3 func_394()
{
	if (func_24() || func_38())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_35())
	{
		return 0f, -0.9f, 0f;
	}
	else if (func_30() || func_160())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_16())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

bool func_395()
{
	return BitTest(Global_1958711, 10);
}

int func_396()
{
	if (func_39() && !func_41())
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	if (func_399())
	{
		return 1;
	}
	if (func_41() && func_398())
	{
		return 1;
	}
	if (func_397() && func_398())
	{
		return 1;
	}
	if (!func_70(player_id(), 0) && !func_294())
	{
		return 1;
	}
	return 0;
}

int func_397()
{
	if (func_46(player_id()) && func_42())
	{
		if (Global_1581359 == 2 || Global_1581359 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_398()
{
	if (Global_1581350 != -1 || Global_1581356 != -1)
	{
		if (((is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 0;
}

int func_399()
{
	return 0;
}

int func_400()
{
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		return 0;
	}
	if (func_41() || func_401())
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	return 1;
}

int func_401()
{
	if (is_entity_in_angled_area(player_ped_id(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_402()
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	float fVar3;
	
	iVar0 = joaat("blazer5");
	if (func_179(Local_96.f_240) && func_179(iVar0))
	{
		if (!BitTest(Local_96.f_5, 0))
		{
			if (!network_does_entity_exist_with_network_id(Local_96.f_159))
			{
				if (!func_340())
				{
					if (func_138())
					{
						if (func_17(func_345()))
						{
							Var1 = { get_entity_coords(func_345(), true) };
						}
					}
					else
					{
						Var1 = { Local_96.f_138 };
					}
					if (is_player_control_on(player_id()))
					{
						func_298(player_id(), 0, 512, 0);
					}
					if (!BitTest(Local_96.f_5, 18))
					{
						if (new_load_scene_start_sphere(Var1, 100f, 1))
						{
							set_bit(&(Local_96.f_5), 18);
						}
					}
					else if (is_new_load_scene_loaded())
					{
						if (!BitTest(Local_96.f_5, 19))
						{
							if (func_408())
							{
								if (func_405())
								{
									set_bit(&(Local_96.f_5), 19);
								}
							}
							else
							{
								if (!func_257(func_404()))
								{
									Local_96.f_138 = { func_404() };
								}
								set_bit(&(Local_96.f_5), 19);
								if (func_16())
								{
									Local_96.f_138.f_2 = (Local_96.f_138.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_96.f_5, 19) || func_340())
				{
					if (!BitTest(Local_96.f_5, 20))
					{
						Local_96.f_163 = create_vehicle(iVar0, Local_96.f_138, 0f, false, false, false);
						set_entity_invincible(Local_96.f_163, true);
						set_entity_coords_no_offset(Local_96.f_163, Local_96.f_138, false, false, true);
						set_entity_completely_disable_collision(Local_96.f_163, false, false);
						set_entity_visible(Local_96.f_163, false, false);
						set_bit(&(Local_96.f_5), 20);
					}
					else if (func_92(get_num_reserved_mission_objects(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_96.f_5, 30))
						{
							_reserve_network_local_objects(get_num_reserved_mission_objects(false, 1) + 1);
							set_bit(&(Local_96.f_5), 30);
						}
						if (can_register_mission_objects(1))
						{
							bVar2 = func_403();
							if (func_31())
							{
								Local_96.f_153 = { func_6(player_id()) };
								get_ground_z_for_3d_coord(Local_96.f_153, &(Local_96.f_153.f_2), false, false);
								Local_96.f_138 = { get_anim_initial_offset_position(Local_96.f_158, "ENTER", Local_96.f_153, get_entity_rotation(player_ped_id(), 2), 0f, 2) };
							}
							if (func_381(&(Local_96.f_159), Local_96.f_240, Local_96.f_138, 0, 1, 1, 1, 1, 0, bVar2))
							{
								Global_1958711.f_20 = net_to_obj(Local_96.f_159);
								set_entity_invincible(net_to_obj(Local_96.f_159), true);
								if (func_138())
								{
									if (func_17(func_345()))
									{
										set_entity_rotation(func_18(), get_entity_rotation(func_345(), 2), 2, true);
										fVar3 = (get_entity_heading(func_345()) + 180f);
									}
								}
								Global_2689235[player_id() /*453*/].f_421 = { Local_96.f_138 };
								Global_2689235[player_id() /*453*/].f_424 = fVar3;
								Local_94[player_id() /*3*/].f_2 = Local_96.f_159;
								set_network_id_always_exists_for_player(Local_96.f_159, player_id(), true);
								_0x38C1CB1CB119A016(net_to_ent(Local_96.f_159), 1);
								set_entity_load_collision_flag(net_to_ent(Local_96.f_159), true, 1);
								set_entity_coords_no_offset(func_18(), Local_96.f_138, false, false, true);
								set_entity_heading(func_18(), fVar3);
								_network_set_entity_ghosted_with_owner(func_18(), true);
								if (!func_257(func_393()))
								{
									set_entity_rotation(func_18(), func_393(), 2, true);
								}
								if (func_35() || func_16())
								{
									set_entity_completely_disable_collision(func_18(), false, false);
								}
								network_use_high_precision_blending(Local_96.f_159, true);
								if (func_164(player_id()))
								{
									set_entity_health(func_18(), Global_262145.f_24698 * 5, 0);
								}
								else if (func_16())
								{
									set_entity_health(func_18(), 1, 0);
									set_network_id_exists_on_all_machines(Local_96.f_159, true);
									set_entity_lod_dist(net_to_ent(Local_96.f_159), 700);
								}
								else
								{
									set_entity_health(func_18(), Global_262145.f_24698, 0);
								}
								set_network_id_can_migrate(Local_96.f_159, false);
								set_entity_records_collisions(net_to_ent(Local_96.f_159), true);
								set_pop_control_sphere_this_frame(Local_96.f_138, 100f, 200f);
								set_focus_pos_and_vel(get_entity_coords(net_to_ent(Local_96.f_159), true), get_entity_rotation(net_to_ent(Local_96.f_159), 2));
								set_model_as_no_longer_needed(Local_96.f_240);
								set_model_as_no_longer_needed(iVar0);
							}
						}
					}
				}
			}
			else
			{
				set_entity_has_gravity(net_to_obj(Local_96.f_159), false);
				if (func_17(Local_96.f_163))
				{
					if (func_17(net_to_ent(Local_96.f_159)))
					{
						attach_entity_to_entity(Local_96.f_163, net_to_obj(Local_96.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						set_bit(&(Local_96.f_5), 0);
					}
				}
			}
		}
	}
}

int func_403()
{
	if (func_31())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

Vector3 func_404()
{
	return Global_1958711.f_13;
}

int func_405()
{
	if (Local_96.f_16 == 0)
	{
		if (!BitTest(Local_96.f_5, 14))
		{
			if ((!func_164(player_id()) && func_138()) && func_17(func_345()))
			{
				Local_96.f_138 = { _get_object_offset_from_coords(get_entity_coords(func_345(), true), get_entity_heading(func_345()), -0.7f, 1.6f, 4f) };
				set_bit(&(Local_96.f_5), 14);
			}
			else
			{
				if (func_138() && func_17(func_345()))
				{
					Local_96.f_138 = { _get_object_offset_from_coords(get_entity_coords(func_345(), true), get_entity_heading(func_345()), -0.7f, 1.6f, 4f) };
				}
				Local_96.f_138 = get_random_float_in_range((Local_96.f_138 - 1.5f), (Local_96.f_138 + 1.5f));
				Local_96.f_138.f_1 = get_random_float_in_range((Local_96.f_138.f_1 - 1.5f), (Local_96.f_138.f_1 + 1.5f));
				Local_96.f_138.f_2 = get_random_float_in_range((Local_96.f_138.f_2 + 0.5f), (Local_96.f_138.f_2 + 1.5f));
				if (!func_407(Local_96.f_138))
				{
					set_bit(&(Local_96.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_96.f_5, 15))
		{
			Local_96.f_138 = get_random_float_in_range((Local_96.f_138 - 1.5f), (Local_96.f_138 + 1.5f));
			Local_96.f_138.f_1 = get_random_float_in_range((Local_96.f_138.f_1 - 1.5f), (Local_96.f_138.f_1 + 1.5f));
			Local_96.f_138.f_2 = get_random_float_in_range((Local_96.f_138.f_2 + 0.5f), (Local_96.f_138.f_2 + 1.5f));
			if (!func_407(Local_96.f_138))
			{
				clear_bit(&(Local_96.f_5), 15);
			}
		}
		func_406(Local_96.f_138);
	}
	else if (Local_96.f_16 == 1 && !func_407(Local_96.f_138))
	{
		return 1;
	}
	else
	{
		Local_96.f_16 = 0;
		set_bit(&(Local_96.f_5), 15);
	}
	return 0;
}

void func_406(struct<3> Param0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	
	switch (Local_96.f_15)
	{
		case 0:
			if (func_138())
			{
				if (func_17(func_345()))
				{
					iVar0 = func_345();
				}
			}
			if (func_24() || func_38())
			{
				fVar1 = func_215(Local_96.f_240);
			}
			else
			{
				fVar1 = (func_215(Local_96.f_240) * 11f);
			}
			Local_96.f_168 = start_shape_test_capsule(Param0, Param0, fVar1, 511, iVar0, 4);
			if (Local_96.f_168 != 0)
			{
				Local_96.f_15 = 1;
			}
			break;
		
		case 1:
			iVar6 = get_shape_test_result(Local_96.f_168, &iVar2, &Var4, &uVar3, &uVar5);
			if (iVar6 == 2)
			{
				if (iVar2 == 0)
				{
					Local_96.f_16 = 1;
					Var4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_96.f_16 = 2;
					Local_96.f_168 = 0;
					Local_96.f_15 = 0;
				}
			}
			else if (iVar6 == 0)
			{
				Local_96.f_15 = 0;
			}
			break;
	}
}

int func_407(struct<3> Param0)
{
	if (is_point_in_angled_area(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_408()
{
	if (func_138())
	{
		return 1;
	}
	if (func_30() && !func_31())
	{
		return 1;
	}
	return 0;
}

int func_409()
{
	if (func_294())
	{
		return Global_1946250.f_520 == 0;
	}
	return 0;
}

void func_410()
{
	if (func_19(player_id(), 1, 1))
	{
		Local_96.f_141 = { func_258(&Local_96) };
		if (!func_257(func_404()))
		{
			Local_96.f_138 = { func_404() };
		}
		else
		{
			Local_96.f_138 = { func_6(player_id()) };
			Local_96.f_138 = { Local_96.f_138, Local_96.f_138.f_1, (Local_96.f_138.f_2 + 1.5f) };
		}
		if (func_70(player_id(), 0))
		{
			func_458(1);
		}
		if (func_70(player_id(), 0))
		{
			func_455();
		}
		else if (((func_453(player_id()) == 2 || func_453(player_id()) == 1) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965532, 0))
		{
			if (BitTest(Global_2788035, 0))
			{
				func_452(1);
				func_444(0, 0);
				func_443();
				func_391(1);
				func_383(1);
			}
		}
		else if ((func_40() && func_439()) && !BitTest(Global_1965531, 6))
		{
			func_426();
		}
		else if (BitTest(Global_1965531, 6) && BitTest(Global_1965532, 0))
		{
			func_444(0, 0);
			func_391(1);
			func_383(1);
		}
		else if (func_16())
		{
			func_412();
		}
		else if (func_31() && !func_411())
		{
			clear_help(true);
			func_136("PIM_DRONAMOS", -1);
			func_298(player_id(), 1, 0, 0);
			func_383(7);
		}
		else if (func_257(Local_96.f_135))
		{
			Local_96.f_156 = 0;
			func_391(1);
			func_383(1);
		}
	}
}

bool func_411()
{
	return BitTest(Global_1958711, 23);
}

void func_412()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if ((func_397() && !func_425()) && !func_416())
	{
		if (is_control_pressed(2, 201) || is_disabled_control_pressed(2, 201))
		{
			if (Global_1581359 == 1)
			{
				Local_96.f_82[player_id()] = get_random_int_in_range(1, 5);
			}
			else
			{
				Local_96.f_82[player_id()] = get_random_int_in_range(5, 9);
			}
			if (Global_1581359 == 1)
			{
				iVar0 = get_entity_bone_index_by_name(func_15(), func_375(player_id()));
				Var1 = { _get_entity_bone_position_2(func_15(), iVar0) };
				Local_96.f_144 = { _get_object_offset_from_coords(Var1, get_entity_heading(func_15()), 0f, 0f, -2.6f) };
			}
			else if (Global_1581359 == 2)
			{
				iVar0 = get_entity_bone_index_by_name(func_15(), func_375(player_id()));
				Var1 = { _get_entity_bone_position_2(func_15(), iVar0) };
				Local_96.f_144 = { _get_object_offset_from_coords(Var1, get_entity_heading(func_15()), 0f, 0f, -2.6f) };
			}
			Var2 = { get_entity_rotation(func_15(), 2) };
			func_372(Local_96.f_144, (Var2.f_0 + 90f), 180f, Var2.f_2);
			func_391(1);
			func_415(Local_96.f_82[player_id()]);
			func_383(1);
			func_414();
			func_413();
			clear_help(true);
		}
	}
	else if (!func_17(func_15()))
	{
	}
	if (func_425())
	{
		if (func_194("MP_SUBSEAT_2"))
		{
			clear_help(true);
		}
	}
}

void func_413()
{
	Global_2815059.f_337++;
}

void func_414()
{
	Global_2815059.f_337 = 0;
	Global_2815059.f_337.f_1 = 0;
}

void func_415(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = -1007374530;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam0;
	iVar1 = func_191(0, 1);
	if (iVar1 != 0)
	{
		_trigger_script_event_2(1, &Var0, 3, iVar1);
	}
}

int func_416()
{
	struct<3> Var0;
	int iVar1;
	
	if (is_entity_in_angled_area(player_ped_id(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, false, true, 0))
	{
		return 1;
	}
	if (func_424())
	{
		return 1;
	}
	if (func_423())
	{
		return 1;
	}
	if (is_pause_menu_active())
	{
		return 1;
	}
	if (func_294())
	{
		return 1;
	}
	if (func_70(player_id(), 0))
	{
		if (func_47(Global_1853193))
		{
			return 1;
		}
	}
	if (func_138())
	{
		if (func_422())
		{
			if (func_421())
			{
				return 1;
			}
			if (BitTest(Local_96.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_16())
	{
		if ((func_420() && Global_1581359 == 1) || (func_419() && Global_1581359 == 2))
		{
			return 1;
		}
		if (BitTest(Local_96.f_5, 28))
		{
			return 1;
		}
		if (!func_17(func_15()))
		{
			return 1;
		}
		Var0 = { get_entity_coords(func_15(), true) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		iVar1 = get_ped_in_vehicle_seat(func_15(), -1, false);
		if (func_17(iVar1))
		{
			if (is_ped_a_player(iVar1))
			{
				if (func_198(network_get_player_index_from_ped(iVar1)))
				{
					return 1;
				}
			}
		}
	}
	if (func_198(player_id()))
	{
		return 1;
	}
	if (func_76(0))
	{
		return 1;
	}
	if (func_309())
	{
		return 1;
	}
	if (func_138())
	{
		if (func_39())
		{
			if (func_19(player_id(), 1, 1))
			{
				if (func_155(player_ped_id(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_418())
				{
					return 1;
				}
			}
			if (is_ped_in_any_vehicle(player_ped_id(), true) || func_417(player_ped_id(), 1))
			{
				return 1;
			}
		}
	}
	if (func_196())
	{
		return 1;
	}
	if (Global_262145.f_24708)
	{
		return 1;
	}
	if (BitTest(Local_96.f_5, 27))
	{
		return 1;
	}
	if (func_70(player_id(), 0))
	{
		if (func_17(func_345()))
		{
			if ((is_entity_in_angled_area(func_345(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, false, true, 0) || is_entity_in_angled_area(func_345(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, false, true, 0)) || is_entity_in_angled_area(func_345(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1581354)
	{
		return 1;
	}
	if (Global_2789737)
	{
		return 1;
	}
	if (Global_2789734)
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0, int iParam1)
{
	if (iParam1 && (!does_entity_exist(iParam0) || is_entity_dead(iParam0, false)))
	{
		return 0;
	}
	if (get_is_task_active(iParam0, 2))
	{
		return 1;
	}
	if (get_vehicle_ped_is_trying_to_enter(iParam0) != 0 || get_vehicle_ped_is_entering(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_418()
{
	if (is_entity_in_angled_area(player_ped_id(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_419()
{
	if (player_id() == func_12())
	{
		return 0;
	}
	if (Global_2689235[player_id() /*453*/].f_318.f_9 != func_12() && player_id() != func_12())
	{
		return BitTest(Global_1853348[Global_2689235[player_id() /*453*/].f_318.f_9 /*834*/].f_267.f_459, 2);
	}
	return 0;
}

int func_420()
{
	if (player_id() == func_12())
	{
		return 0;
	}
	if (Global_2689235[player_id() /*453*/].f_318.f_9 != func_12() && player_id() != func_12())
	{
		return BitTest(Global_1853348[Global_2689235[player_id() /*453*/].f_318.f_9 /*834*/].f_267.f_459, 1);
	}
	return 0;
}

int func_421()
{
	if (Global_2689235[player_id() /*453*/].f_318.f_9 != func_12() && player_id() != func_12())
	{
		return BitTest(Global_1853348[Global_2689235[player_id() /*453*/].f_318.f_9 /*834*/].f_267.f_348, 20);
	}
	return 0;
}

int func_422()
{
	if (func_164(player_id()) && Global_1958711.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_423()
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_424()
{
	return get_game_timer() <= Global_23150.f_6269 + 100;
}

int func_425()
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_62(player_ped_id()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "enter_left", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "enter", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "exit", 3)) || is_entity_playing_anim(player_ped_id(), sVar0, "exit_left", 3)) || func_60(player_ped_id(), 2106541073))
	{
		return 1;
	}
	return 0;
}

void func_426()
{
	struct<3> Var0;
	int iVar1;
	
	if (!func_416())
	{
		if ((((((func_438() || func_437()) && !Global_1931426) && func_439()) && !BitTest(Global_2787913, 6)) && Global_1574965) && !(func_438() && Global_262145.f_26632))
		{
			if ((((((is_control_just_pressed(2, 224) || is_disabled_control_just_pressed(2, 224)) && !is_control_just_pressed(2, 223)) && !is_disabled_control_just_pressed(2, 223)) && !is_control_just_pressed(2, 235)) && !is_disabled_control_just_pressed(2, 235)) && !is_disabled_control_pressed(2, 19))
			{
				if (network_can_spend_money(Global_262145.f_26634, false, false, true, -1, 0) || BitTest(Global_2787913, 2))
				{
					set_bit(&Global_2787913, 0);
					func_444(0, 0);
					func_391(1);
					func_383(1);
					func_433();
					func_431(73, -1);
					func_428();
					Var0 = { func_427() };
					func_372(Var0, 0f, 0f, 0f);
					if (func_438())
					{
						play_sound_from_entity(iVar1, "Select_Spec_Drone", player_ped_id(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!BitTest(Global_2787913, 4))
				{
					set_bit(&Global_2787913, 4);
				}
			}
		}
	}
}

Vector3 func_427()
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4718592.f_162543.f_1 == 3 || Global_4718592.f_162543.f_1 == 3) || Global_4718592.f_162543.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(participant_id_to_int()));
	fVar2 = (fVar2 * IntToFloat((participant_id_to_int() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return _get_object_offset_from_coords(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_428()
{
	int iVar0;
	
	iVar0 = func_429(73, -1);
	if (iVar0 >= 50)
	{
		set_bit(&(Global_1853348[player_id() /*834*/].f_267.f_353.f_3), 13);
	}
	else
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_267.f_353.f_3), 13);
	}
}

int func_429(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_430(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_430(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
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

void func_431(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_429(iParam0, func_430(iParam1));
	iVar0++;
	func_432(iParam0, iVar0, iParam1);
}

void func_432(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_430(uParam2)];
	stat_set_int(iVar0, iParam1, true);
}

void func_433()
{
	func_434(1, 7985);
}

void func_434(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_436(iParam1, -1, 0);
	func_435(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_435(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_430(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_436(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_430(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_437()
{
	return Global_2725431;
}

int func_438()
{
	if (Global_2725430 >= 0 && Global_2725430 < 10)
	{
		return 1;
	}
	return 0;
}

int func_439()
{
	int iVar0;
	int iVar1;
	
	if (func_442() && !func_441())
	{
		return 1;
	}
	iVar0 = get_player_team(player_id());
	if (iVar0 >= 4 || iVar0 < 0)
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
	if (!BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	else if (func_437() || func_440(player_id()))
	{
		return 1;
	}
	return 0;
}

var func_440(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 14);
}

int func_441()
{
	if (Global_4718592.f_117095 == 1 || Global_4718592.f_117095 == 2)
	{
		return 1;
	}
	return 0;
}

var func_442()
{
	return BitTest(Global_4718592.f_162497, 12);
}

void func_443()
{
	clear_bit(&Global_2788035, 0);
}

void func_444(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	Local_96.f_119 = Global_262145.f_24701;
	Local_96.f_130 = 40f;
	if (func_38() || func_24())
	{
		Local_96.f_119 = (Local_96.f_119 * 4.5f);
	}
	else if (func_35())
	{
		Local_96.f_119 = 100f;
		Local_96.f_130 = 26f;
	}
	else if (func_30())
	{
		Local_96.f_119 = 100f;
		Local_96.f_130 = 70f;
	}
	else if (func_160())
	{
		Local_96.f_119 = 10f;
		Local_96.f_130 = 35f;
	}
	else if (func_16())
	{
		Local_96.f_119 = 149f;
		Local_96.f_130 = 16f;
	}
	if (func_38())
	{
		Local_96.f_240 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_24())
	{
		Local_96.f_240 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_35())
	{
		Local_96.f_240 = joaat("xs_prop_arena_airmissile_01a");
		func_451(1);
	}
	else if (func_30())
	{
		if (!func_31())
		{
			iVar0 = func_450(player_id());
			switch (iVar0)
			{
				case 37:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_96.f_240 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_96.f_240 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_160())
	{
		Local_96.f_240 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_16())
	{
		Local_96.f_240 = joaat("h4_prop_h4_airmissile_01a");
		func_451(1);
	}
	else
	{
		Local_96.f_240 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_96.f_138 = { Local_96.f_144 };
	}
	Global_1958711.f_1 = 1500;
	func_449();
	func_448(1);
	func_447(1);
	if (func_38() || func_83())
	{
		func_446(1);
	}
	else if (func_24())
	{
		func_446(0);
	}
	if (func_31())
	{
		Local_96.f_158 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		request_anim_dict(Local_96.f_158);
	}
	if (func_24())
	{
		request_named_ptfx_asset("scr_xs_dr");
	}
	if (func_31())
	{
		func_445(Global_262145.f_28780);
	}
	else if (func_30() && !func_31())
	{
		func_445(Global_262145.f_28781);
	}
	else if (func_16())
	{
		func_445(to_float(Global_262145.f_30176));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_96.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_138() && !func_340())
	{
		func_445(200f);
	}
	func_86(Global_1837194);
	if (bParam0)
	{
	}
}

void func_445(float fParam0)
{
	if (Global_1958711.f_8 != fParam0)
	{
		Global_1958711.f_8 = fParam0;
	}
}

void func_446(bool bParam0)
{
	if (bParam0)
	{
		if (!func_192())
		{
			set_bit(&Global_1958711, 8);
		}
	}
	else if (func_192())
	{
		clear_bit(&Global_1958711, 8);
	}
}

void func_447(bool bParam0)
{
	if (bParam0)
	{
		if (!func_356())
		{
			set_bit(&Global_1958711, 2);
		}
	}
	else if (func_356())
	{
		clear_bit(&Global_1958711, 2);
	}
}

void func_448(bool bParam0)
{
	if (bParam0)
	{
		if (!func_247())
		{
			set_bit(&Global_1958711, 4);
		}
	}
	else if (func_247())
	{
		clear_bit(&Global_1958711, 4);
	}
}

void func_449()
{
	if (!Local_96.f_156)
	{
		Local_96.f_18 = 100;
	}
	if (func_160())
	{
		Local_96.f_24 = 100;
	}
	Local_96.f_19 = 0;
	Local_96.f_20 = 100;
	Local_96.f_125 = 90f;
	Local_96.f_128 = 90f;
	if (!func_83())
	{
		Local_96.f_170 = request_scaleform_movie("DRONE_CAM");
	}
	else if (func_16())
	{
		Local_96.f_170 = func_111();
	}
	else
	{
		Local_96.f_170 = func_110();
	}
	if (func_38())
	{
		Local_96.f_157 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_24())
	{
		Local_96.f_157 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_35())
	{
		Local_96.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_16())
	{
		Local_96.f_157 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_96.f_157 = "DLC_BTL_Drone_Sounds";
	}
}

int func_450(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_2689235[iParam0 /*453*/].f_428.f_1;
	}
	return -1;
}

void func_451(bool bParam0)
{
	if (bParam0)
	{
		if (!func_203())
		{
			set_bit(&Global_1958711, 15);
		}
	}
	else if (func_203())
	{
		clear_bit(&Global_1958711, 15);
	}
}

void func_452(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 4))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 4);
		}
	}
	else if (BitTest(Global_1958711.f_2, 4))
	{
		clear_bit(&(Global_1958711.f_2), 4);
	}
}

int func_453(int iParam0)
{
	if (iParam0 == player_id() && !func_454())
	{
		return Global_2787940.f_1;
	}
	return Global_2680265.f_1399[iParam0 /*3*/].f_1;
}

int func_454()
{
	if (((Global_2787943 != 0 && Global_2787943 == Global_2787944) && Global_2787932 != 3) && Global_2787932 != 1)
	{
		return 0;
	}
	return 1;
}

void func_455()
{
	if (!func_416())
	{
		if (func_41())
		{
			if (func_400())
			{
				if (!is_help_message_being_displayed() && !is_help_message_on_screen())
				{
					func_457("DRONE_TRIG");
				}
			}
			else if (func_194("DRONE_TRIG"))
			{
				clear_help(true);
			}
			if (func_41() || func_399())
			{
				if (is_control_just_released(2, 176) || is_disabled_control_just_released(2, 176))
				{
					func_391(1);
					func_383(1);
					clear_help(true);
				}
			}
			else if (func_194("DRONE_TRIG"))
			{
				if ((is_control_just_released(2, 51) || is_disabled_control_just_released(2, 51)) || is_ped_in_any_vehicle(player_ped_id(), false))
				{
					Local_96.f_156 = 0;
					func_391(1);
					func_383(1);
					clear_help(true);
				}
			}
		}
		else if ((func_39() && !is_entity_in_angled_area(player_ped_id(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, false, true, 0)) && func_400())
		{
			if (!is_help_message_being_displayed() && !is_help_message_on_screen())
			{
				func_457("DRONE_TRIG");
			}
			if (func_194("DRONE_TRIG"))
			{
				if (is_control_just_released(2, 51) || is_disabled_control_just_released(2, 51))
				{
					Local_96.f_156 = 0;
					func_391(1);
					func_383(1);
					clear_help(true);
				}
			}
		}
		else if (func_194("DRONE_TRIG"))
		{
			clear_help(true);
		}
		if (func_456() || func_41())
		{
			if (func_194("DRONE_TRIG"))
			{
				clear_help(true);
			}
		}
	}
	else if (func_194("DRONE_TRIG"))
	{
		clear_help(true);
	}
}

int func_456()
{
	if ((((is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_60(player_ped_id(), 2106541073))
	{
		return 1;
	}
	if ((is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || is_entity_playing_anim(player_ped_id(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_457(char* sParam0)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, true, true, -1);
}

void func_458(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 1))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 1);
		}
	}
	else if (BitTest(Global_1958711.f_2, 1))
	{
		clear_bit(&(Global_1958711.f_2), 1);
	}
}

void func_459()
{
	char* sVar0;
	
	if (Local_96.f_45 == -1)
	{
		return;
	}
	if (!func_461(Local_96.f_45) && !func_460(Local_96.f_45))
	{
		return;
	}
	if (network_does_entity_exist_with_network_id(Local_94[Local_96.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		request_named_ptfx_asset(sVar0);
		if (has_named_ptfx_asset_loaded(sVar0))
		{
			if (!does_particle_fx_looped_exist(Local_96.f_174[Local_96.f_45]))
			{
				use_particle_fx_asset(sVar0);
				if (func_461(Local_96.f_45))
				{
					Local_96.f_174[Local_96.f_45] = start_particle_fx_looped_on_entity("scr_xs_guided_missile_trail", net_to_obj(Local_94[Local_96.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_96.f_174[Local_96.f_45] = start_particle_fx_looped_on_entity("scr_xs_guided_missile_trail", net_to_obj(Local_94[Local_96.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
	else if (does_particle_fx_looped_exist(Local_96.f_174[Local_96.f_45]))
	{
		stop_particle_fx_looped(Local_96.f_174[Local_96.f_45], false);
	}
}

int func_460(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_462()
{
	if (!func_479(6) && !func_465())
	{
		return;
	}
	if (Local_96.f_45 != -1)
	{
		if (network_does_entity_exist_with_network_id(Local_94[Local_96.f_45 /*3*/].f_2) && func_17(net_to_obj(Local_94[Local_96.f_45 /*3*/].f_2)))
		{
			if (func_464(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_463(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_461(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_460(Local_96.f_45))
			{
				Local_96.f_157 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_96.f_157 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_96.f_46[Local_96.f_45] == -1)
			{
				Local_96.f_46[Local_96.f_45] = get_sound_id();
				play_sound_from_entity(Local_96.f_46[Local_96.f_45], "Flight_Loop", net_to_obj(Local_94[Local_96.f_45 /*3*/].f_2), Local_96.f_157, false, 0);
				set_variable_on_sound(Local_96.f_46[Local_96.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				set_variable_on_sound(Local_96.f_46[Local_96.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_96.f_46[Local_96.f_45] != -1)
		{
			stop_sound(Local_96.f_46[Local_96.f_45]);
			release_sound_id(Local_96.f_46[Local_96.f_45]);
			Local_96.f_46[Local_96.f_45] = -1;
		}
	}
}

int func_463(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_94[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_465()
{
	return BitTest(Global_1946250.f_7, 14);
}

void func_466()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	if (Local_96.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_96.f_45;
	if (!func_19(iVar0, 1, 1))
	{
		return;
	}
	if (!func_479(6) && !func_465())
	{
		return;
	}
	if (BitTest(Local_96.f_117, Local_96.f_45))
	{
		iVar1 = func_467(Global_2689235[Local_96.f_45 /*453*/].f_318.f_9);
		if (!func_17(iVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		request_named_ptfx_asset(sVar2);
		if (has_named_ptfx_asset_loaded(sVar2))
		{
			if (!does_particle_fx_looped_exist(Local_96.f_207[iVar0]))
			{
				use_particle_fx_asset(sVar2);
				sVar3 = func_375(iVar0);
				iVar4 = get_entity_bone_index_by_name(iVar1, sVar3);
				Local_96.f_207[iVar0] = start_particle_fx_looped_on_entity_bone("scr_ih_sub_missile_launch", iVar1, func_374(iVar0), 0f, 0f, 0f, iVar4, 5f, false, false, false);
			}
			else if (!func_25(&(Local_96.f_281[iVar0 /*2*/])))
			{
				func_23(&(Local_96.f_281[iVar0 /*2*/]), 0, 0);
				set_particle_fx_looped_evolution(Local_96.f_207[iVar0], "flame", 0.15f, false);
			}
			if (func_25(&(Local_96.f_281[iVar0 /*2*/])))
			{
				if (func_22(&(Local_96.f_281[iVar0 /*2*/]), 3000, 0))
				{
					if (does_particle_fx_looped_exist(Local_96.f_207[iVar0]))
					{
						stop_particle_fx_looped(Local_96.f_207[iVar0], false);
					}
					func_21(&(Local_96.f_281[iVar0 /*2*/]));
					clear_bit(&(Local_96.f_117), Local_96.f_45);
				}
				else if (func_22(&(Local_96.f_281[iVar0 /*2*/]), 2000, 0))
				{
					set_particle_fx_looped_evolution(Local_96.f_207[iVar0], "flame", 0f, false);
				}
			}
		}
	}
}

int func_467(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (does_entity_exist(Global_1963860[iParam0]))
		{
			return Global_1963860[iParam0];
		}
	}
	return -1;
}

void func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case 186:
				if (!func_479(6))
				{
					func_470(iVar0);
				}
				break;
			
			case 174:
				get_event_data(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1007374530:
						if (Global_1663509.f_839)
						{
							return;
						}
						func_469(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_469(int iParam0)
{
	struct<3> Var0;
	
	if (!func_479(6) && !func_465())
	{
		return;
	}
	if (get_event_data(1, iParam0, &Var0, 3))
	{
		if (Var0.f_1 != func_12())
		{
			Local_96.f_82[Var0.f_1] = Var0.f_2;
			set_bit(&(Local_96.f_117), Var0.f_1);
		}
	}
}

void func_470(int iParam0)
{
	struct<2> Var0;
	
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (get_event_data(1, iParam0, &Var0, 13))
		{
			if (does_entity_exist(Var0.f_0) && net_to_ent(Local_96.f_159) == Var0.f_0)
			{
				if (does_entity_exist(Var0.f_1))
				{
					if (is_entity_a_ped(Var0.f_1))
					{
						if (is_ped_a_player(get_ped_index_from_entity_index(Var0.f_1)) && player_ped_id() != get_ped_index_from_entity_index(Var0.f_1))
						{
							Local_96.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_471()
{
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		if (!is_entity_dead(net_to_veh(Local_96.f_159), false))
		{
			Local_96.f_150 = { get_entity_coords(net_to_veh(Local_96.f_159), true) };
			Local_96.f_124 = get_entity_heading(net_to_veh(Local_96.f_159));
			if (!func_25(&(Local_96.f_261)))
			{
				func_23(&(Local_96.f_261), 0, 0);
			}
			else if (func_22(&(Local_96.f_261), 1000, 0))
			{
				if (!func_373(Global_2689235[player_id() /*453*/].f_421, Local_96.f_150, 0))
				{
					Global_2689235[player_id() /*453*/].f_421 = { Local_96.f_150 };
				}
				if (Global_2689235[player_id() /*453*/].f_424 != get_entity_heading(net_to_veh(Local_96.f_159)))
				{
					Global_2689235[player_id() /*453*/].f_424 = get_entity_heading(net_to_veh(Local_96.f_159));
				}
				func_21(&(Local_96.f_261));
			}
		}
	}
	if (func_17(Local_96.f_163))
	{
		if (is_entity_visible(Local_96.f_163))
		{
			set_entity_visible(Local_96.f_163, false, false);
		}
	}
	if (func_17(Local_96.f_161))
	{
		if (is_entity_visible(Local_96.f_161))
		{
			set_entity_visible(Local_96.f_161, false, false);
		}
	}
}

void func_472()
{
	if (func_479(4))
	{
		if ((((func_138() || func_24()) || func_38()) || (func_30() && !func_31())) || func_16())
		{
			if (!is_player_control_on(player_id()))
			{
				func_298(player_id(), 1, 0, 0);
			}
		}
		disable_control_action(0, 37, false);
		if (func_16())
		{
			func_475();
		}
		if (!func_35())
		{
			func_473();
			enable_control_action(0, 19, true);
			enable_control_action(0, 166, true);
			enable_control_action(0, 167, true);
			enable_control_action(0, 168, true);
			enable_control_action(0, 169, true);
			enable_control_action(2, 218, true);
			enable_control_action(2, 219, true);
			enable_control_action(2, 220, true);
			enable_control_action(2, 221, true);
			enable_control_action(2, 205, true);
			enable_control_action(2, 206, true);
			enable_control_action(2, 207, true);
			enable_control_action(2, 208, true);
			enable_control_action(2, 209, true);
			enable_control_action(2, 210, true);
			enable_control_action(2, 202, true);
			enable_control_action(2, 51, true);
			enable_control_action(2, 190, true);
			enable_control_action(2, 189, true);
			enable_control_action(2, 188, true);
			enable_control_action(2, 187, true);
			enable_control_action(2, 201, true);
			enable_control_action(2, 199, true);
			enable_control_action(2, 200, true);
			if (func_16())
			{
				enable_control_action(2, 20, true);
			}
			if (_is_using_keyboard(0))
			{
				enable_control_action(0, 238, true);
				enable_control_action(0, 237, true);
				enable_control_action(2, 235, true);
				enable_control_action(2, 234, true);
				enable_control_action(2, 1, true);
				enable_control_action(2, 174, true);
				enable_control_action(2, 175, true);
				enable_control_action(0, 174, true);
				enable_control_action(0, 175, true);
				enable_control_action(0, 245, true);
				enable_control_action(0, 246, true);
				enable_control_action(0, 247, true);
				enable_control_action(0, 248, true);
			}
			if (is_pause_menu_active())
			{
				enable_control_action(0, 201, true);
				enable_control_action(0, 202, true);
				enable_control_action(0, 188, true);
				enable_control_action(0, 187, true);
				enable_control_action(0, 189, true);
				enable_control_action(2, 195, true);
				enable_control_action(2, 196, true);
				enable_control_action(2, 198, true);
				enable_control_action(2, 197, true);
				enable_control_action(2, 217, true);
			}
		}
	}
}

void func_473()
{
	func_474();
}

void func_474()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 363)
	{
		disable_control_action(0, iVar0, true);
		iVar0++;
	}
}

void func_475()
{
	Global_23011.f_6 = 1;
}

void func_476()
{
	if (BitTest(Local_96.f_5, 28))
	{
		if (!func_25(&(Local_96.f_263)))
		{
			func_23(&(Local_96.f_263), 0, 0);
		}
		else if (func_22(&(Local_96.f_263), 5000, 0))
		{
			clear_bit(&(Local_96.f_5), 28);
			func_21(&(Local_96.f_263));
		}
	}
}

void func_477()
{
	int iVar0;
	
	if (BitTest(Local_96.f_5, 27))
	{
		if (Global_2689235[player_id() /*453*/].f_318.f_9 != func_12())
		{
			iVar0 = Global_2689235[player_id() /*453*/].f_318.f_9;
		}
		else if (Global_1853193 != func_12())
		{
			iVar0 = Global_1853193;
		}
		else if (func_279(player_id(), 0))
		{
			if (func_166() != func_12())
			{
				iVar0 = func_166();
			}
		}
		if (iVar0 != func_12())
		{
			if (network_is_player_active(iVar0))
			{
				if (network_is_game_in_progress())
				{
					func_178(iVar0, 0, 1, 0);
					clear_bit(&(Local_96.f_5), 27);
				}
			}
		}
	}
}

void func_478()
{
	struct<3> Var0;
	
	if (func_138())
	{
		if (func_479(1))
		{
			if (func_17(func_345()))
			{
				Var0 = { get_entity_coords(func_345(), true) };
				set_pop_control_sphere_this_frame(Var0, 200f, 200f);
				set_scenario_peds_spawn_in_sphere_area(Local_96.f_150, 60f, 30);
			}
		}
	}
	if (func_479(1) || func_479(4))
	{
		if (network_does_entity_exist_with_network_id(Local_96.f_159))
		{
			if (does_cam_exist(Local_96.f_169) && is_cam_rendering(Local_96.f_169))
			{
				if (func_479(4))
				{
					if (!func_257(Local_96.f_150))
					{
						set_pop_control_sphere_this_frame(Local_96.f_150, 60f, 200f);
						_0x483ACA1176CA93F1();
						set_focus_pos_and_vel(Local_96.f_150, get_entity_velocity(net_to_obj(Local_96.f_159)));
						if ((get_frame_count() % 120) == 0)
						{
							set_scenario_peds_spawn_in_sphere_area(Local_96.f_150, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_479(int iParam0)
{
	return Local_96.f_241 == iParam0;
}

int func_480()
{
	if (func_485())
	{
		return 1;
	}
	if (!func_306())
	{
		return 1;
	}
	if (player_id() != func_12())
	{
		if (!func_484())
		{
			if (func_265(player_id()) && !func_264())
			{
				return 1;
			}
		}
	}
	if (func_200(player_id()))
	{
		return 1;
	}
	if (func_10(player_id()))
	{
		return 1;
	}
	if (func_484())
	{
		if (func_483())
		{
			return 1;
		}
		if (func_13(player_id(), 1, 1))
		{
			return 1;
		}
		if (func_40())
		{
			return 1;
		}
		if (!func_482() && !func_481())
		{
			if (func_22(&(Local_96.f_279), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_96.f_279));
		}
	}
	return 0;
}

int func_481()
{
	if (Global_1958711.f_22 != func_12())
	{
		if (Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9 != func_12())
		{
			if (func_17(Global_1963860[Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9]))
			{
				if (func_19(player_id(), 1, 1))
				{
					if (vdist2(func_6(player_id()), get_entity_coords(Global_1963860[Global_2689235[Global_1958711.f_22 /*453*/].f_318.f_9], true)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_482()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (BitTest(Local_94[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_483()
{
	return BitTest(Global_1958711, 22);
}

bool func_484()
{
	return BitTest(Global_1958711.f_2, 9);
}

bool func_485()
{
	return BitTest(Global_1958711, 0);
}

int func_486()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_493())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_492())
	{
		return 1;
	}
	if (func_491(159))
	{
		if (!func_490())
		{
			return 1;
		}
	}
	if (func_491(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_487() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_487()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_487()
{
	switch (func_489())
	{
		case 0:
			return func_488();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_488()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_489()
{
	return Global_31959;
}

bool func_490()
{
	return Global_2714762.f_698;
}

int func_491(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_492()
{
	return Global_2725403;
}

bool func_493()
{
	return Global_2714762.f_693;
}

void func_494()
{
	wait(0);
}

void func_495(bool bParam0)
{
	if (!func_484())
	{
		func_502(bParam0);
	}
	else
	{
		func_496();
	}
}

void func_496()
{
	Global_1958711.f_22 = func_12();
	func_21(&(Local_96.f_279));
	func_501(0);
	func_500(0);
	func_499(0);
	func_498(0);
	func_497();
}

void func_497()
{
	terminate_this_thread();
}

void func_498(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 9))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 9);
		}
	}
	else if (BitTest(Global_1958711.f_2, 9))
	{
		clear_bit(&(Global_1958711.f_2), 9);
	}
}

void func_499(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 21))
		{
			set_bit(&Global_1958711, 21);
		}
	}
	else if (BitTest(Global_1958711, 21))
	{
		clear_bit(&Global_1958711, 21);
	}
}

void func_500(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 22))
		{
			set_bit(&Global_1958711, 22);
		}
	}
	else if (BitTest(Global_1958711, 22))
	{
		clear_bit(&Global_1958711, 22);
	}
}

void func_501(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_267.f_292, 31))
		{
			set_bit(&(Global_1853348[player_id() /*834*/].f_267.f_292), 31);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_292, 31))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_267.f_292), 31);
	}
}

void func_502(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	
	if (network_does_entity_exist_with_network_id(Local_96.f_159))
	{
		set_network_id_can_migrate(Local_96.f_159, true);
		if (network_has_control_of_network_id(Local_96.f_159))
		{
			if (!BitTest(Local_96.f_6, 2))
			{
				if (func_83())
				{
					if (func_17(player_ped_id()))
					{
						add_owned_explosion(player_ped_id(), func_338(), func_337(), func_336(), true, false, 1f);
					}
					else
					{
						add_explosion(func_338(), func_337(), func_336(), true, false, 1f, false);
					}
					set_pad_shake(0, 300, round((200f * Local_96.f_131)));
					set_bit(&(Local_96.f_6), 2);
				}
			}
			clear_focus();
			iVar0 = net_to_obj(Local_96.f_159);
			network_fade_out_entity(iVar0, false, true);
			delete_object(&iVar0);
		}
		else
		{
			network_request_control_of_network_id(Local_96.f_159);
			return;
		}
	}
	if (func_30() && !func_31())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_525(&Var1, 11);
	}
	if (func_194("DRONE_TRIG"))
	{
		clear_help(true);
	}
	if (func_17(Local_96.f_161))
	{
		uVar2 = Local_96.f_161;
		delete_ped(&uVar2);
	}
	if (does_entity_exist(Local_96.f_162))
	{
		delete_object(&(Local_96.f_162));
	}
	if (does_blip_exist(Local_96.f_171))
	{
		remove_blip(&(Local_96.f_171));
	}
	if (does_blip_exist(Local_96.f_172))
	{
		remove_blip(&(Local_96.f_172));
	}
	if (does_entity_exist(Local_96.f_163))
	{
		delete_vehicle(&(Local_96.f_163));
	}
	_thefeed_display_loading_screen_tips();
	unlock_minimap_angle();
	unlock_minimap_position();
	set_radar_zoom_precise(0f);
	if (func_239())
	{
		func_238(0);
	}
	func_522();
	func_327(1, -1);
	func_521();
	if (func_31())
	{
		func_335(0);
	}
	if (network_does_entity_exist_with_network_id(Local_96.f_160))
	{
		iVar3 = net_to_obj(Local_96.f_160);
		delete_object(&iVar3);
	}
	if (!bParam0)
	{
		if (!is_string_null_or_empty(Local_96.f_158))
		{
			remove_anim_dict(Local_96.f_158);
		}
		func_520(0);
	}
	func_248(0);
	if (func_519() && (!func_265(player_id()) || func_264()))
	{
		func_298(player_id(), 1, 0, 0);
		freeze_entity_position(player_ped_id(), false);
	}
	Local_96.f_120 = 0f;
	Local_96.f_121 = 0f;
	Local_96.f_12 = 0;
	Local_96.f_14 = 0;
	Local_96.f_10 = 0;
	Local_96.f_16 = 0;
	func_21(&(Local_96.f_245));
	func_21(&(Local_96.f_247));
	if (!Local_96.f_156)
	{
		func_21(&(Local_96.f_249));
	}
	func_21(&(Local_96.f_253));
	func_21(&(Local_96.f_251));
	func_21(&(Local_96.f_255));
	func_21(&(Local_96.f_259));
	func_21(&(Local_96.f_265));
	func_21(&(Local_96.f_263));
	func_21(&(Local_96.f_261));
	func_21(&(Local_96.f_267));
	func_21(&(Local_96.f_269));
	func_21(&(Local_96.f_271));
	func_21(&(Local_96.f_275));
	func_21(&(Local_96.f_277));
	func_21(&(Local_96.f_257));
	func_21(&(Local_96.f_346));
	if (player_id() != func_12())
	{
		func_21(&(Local_96.f_281[player_id() /*2*/]));
	}
	Local_96.f_28 = 0;
	Local_96.f_5 = 0;
	Local_96.f_6 = 0;
	Global_1958711.f_4 = -1;
	func_518(-1f);
	func_445(0f);
	func_245(0);
	func_448(0);
	func_517(0);
	func_446(0);
	func_222(0);
	func_516(0);
	func_176(0);
	func_515(0);
	func_514(0);
	func_513(0);
	func_72(1);
	func_292(0);
	func_290(0);
	func_296(0);
	func_451(0);
	func_372(0f, 0f, 0f, 0f, 0f, 0f);
	func_512();
	Global_1958711.f_24 = -1;
	clear_bit(&Global_2787913, 0);
	clear_bit(&Global_1965532, 0);
	func_383(0);
	if (!func_511(0))
	{
		func_288();
	}
	if (func_75())
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (func_138() || func_16())
		{
			if (Global_2689235[player_id() /*453*/].f_318.f_9 != func_12() && network_is_player_active(Global_2689235[player_id() /*453*/].f_318.f_9))
			{
				iVar4 = Global_2689235[player_id() /*453*/].f_318.f_9;
			}
			else if ((func_138() && Global_1853193 != func_12()) && network_is_player_active(Global_1853193))
			{
				iVar4 = Global_1853193;
			}
			else if ((func_16() && Global_1853194 != func_12()) && network_is_player_active(Global_1853194))
			{
				iVar4 = Global_1853194;
			}
			else if (func_279(player_id(), 0))
			{
				if (func_166() != func_12() && network_is_player_active(func_166()))
				{
					iVar4 = func_166();
				}
			}
			if (iVar4 != func_12())
			{
				if (network_is_player_active(iVar4) && network_is_game_in_progress())
				{
					if (func_138())
					{
						func_178(iVar4, 0, 1, 0);
					}
					else if (func_16())
					{
						func_178(iVar4, 0, 8, Global_1581359);
					}
					set_bit(&(Local_96.f_5), 28);
				}
				else
				{
					set_bit(&(Local_96.f_5), 27);
				}
			}
			else
			{
				set_bit(&(Local_96.f_5), 27);
			}
		}
		else if (func_30() || func_160())
		{
			func_21(&Global_1958657);
			func_510(300000);
			func_509(1);
			set_bit(&(Local_96.f_5), 28);
		}
		func_390(0);
		func_389(0);
		clear_bit(&(Local_94[player_id() /*3*/]), 0);
		iVar5 = absi(get_time_difference(get_network_time(), Local_96.f_173));
		if (func_30() || func_160())
		{
			Var6.f_7 = Global_786547;
			Var6.f_1 = Global_786547.f_1;
			if (network_is_activity_session())
			{
				Var6.f_0 = Global_4718592.f_116524;
			}
			else
			{
				Var6.f_0 = func_507(player_id());
			}
			Var6.f_6 = 1;
			Var6.f_4 = Local_96.f_27;
			Var6.f_5 = Local_96.f_29;
			Var6.f_3 = iVar5;
			Var6.f_2 = Local_96.f_26;
			_playstats_heist3_drone(&Var6);
		}
		else
		{
			_playstats_drone_usage(iVar5, Local_96.f_26, Local_96.f_27);
		}
		if (func_16())
		{
			func_505(2, func_506());
		}
	}
	func_504();
	func_391(0);
	func_263(0);
	func_185(0);
	set_scaleform_movie_as_no_longer_needed(&(Local_96.f_170));
	if (func_180(1) != 0)
	{
		set_model_as_no_longer_needed(func_180(1));
	}
	if (func_180(0) != 0)
	{
		set_model_as_no_longer_needed(func_180(0));
	}
	func_384(0);
	func_327(1, -1);
	Local_96.f_26 = 0;
	Local_96.f_27 = 0;
	Local_96.f_29 = 0;
	remove_shocking_event(Local_96.f_28);
	if (does_particle_fx_looped_exist(Local_96.f_174[player_id()]))
	{
		stop_particle_fx_looped(Local_96.f_174[player_id()], false);
	}
	if (does_particle_fx_looped_exist(Local_96.f_207[player_id()]))
	{
		stop_particle_fx_looped(Local_96.f_207[player_id()], false);
	}
	if (!bParam0)
	{
		if (!func_164(player_id()))
		{
			func_503(0f, 0f, 0f, 0f);
		}
		Global_1958711.f_2 = 0;
		func_497();
	}
	else
	{
		func_444(0, 1);
	}
}

void func_503(struct<3> Param0, float fParam1)
{
	if (!func_373(Global_1958711.f_10, Param0, 0))
	{
		Global_1958711.f_10 = { Param0 };
		Global_1958711.f_7 = fParam1;
	}
}

void func_504()
{
	int iVar0;
	
	if (!has_sound_finished(Local_96.f_41))
	{
		stop_sound(Local_96.f_41);
		release_sound_id(Local_96.f_41);
		Local_96.f_41 = -1;
	}
	if (!has_sound_finished(Local_96.f_30))
	{
		stop_sound(Local_96.f_30);
		release_sound_id(Local_96.f_30);
		Local_96.f_30 = -1;
	}
	if (!has_sound_finished(Local_96.f_31))
	{
		stop_sound(Local_96.f_31);
		release_sound_id(Local_96.f_31);
		Local_96.f_31 = -1;
	}
	if (!has_sound_finished(Local_96.f_32))
	{
		stop_sound(Local_96.f_32);
		release_sound_id(Local_96.f_32);
		Local_96.f_32 = -1;
	}
	if (!has_sound_finished(Local_96.f_33))
	{
		stop_sound(Local_96.f_33);
		release_sound_id(Local_96.f_33);
		Local_96.f_33 = -1;
	}
	if (!has_sound_finished(Local_96.f_34))
	{
		stop_sound(Local_96.f_34);
		release_sound_id(Local_96.f_34);
		Local_96.f_34 = -1;
	}
	if (!has_sound_finished(Local_96.f_40))
	{
		stop_sound(Local_96.f_40);
		release_sound_id(Local_96.f_40);
		Local_96.f_40 = -1;
	}
	if (!has_sound_finished(Local_96.f_39))
	{
		stop_sound(Local_96.f_39);
		release_sound_id(Local_96.f_39);
		Local_96.f_39 = -1;
	}
	if (!has_sound_finished(Local_96.f_38))
	{
		stop_sound(Local_96.f_38);
		release_sound_id(Local_96.f_38);
		Local_96.f_38 = -1;
	}
	if (!has_sound_finished(Local_96.f_37))
	{
		stop_sound(Local_96.f_37);
		release_sound_id(Local_96.f_37);
		Local_96.f_37 = -1;
	}
	if (!has_sound_finished(Local_96.f_36))
	{
		stop_sound(Local_96.f_36);
		release_sound_id(Local_96.f_36);
		Local_96.f_36 = -1;
	}
	if (!has_sound_finished(Local_96.f_35))
	{
		stop_sound(Local_96.f_35);
		release_sound_id(Local_96.f_35);
		Local_96.f_35 = -1;
	}
	if (!has_sound_finished(Local_96.f_42))
	{
		stop_sound(Local_96.f_42);
		release_sound_id(Local_96.f_42);
		Local_96.f_42 = -1;
	}
	if (!has_sound_finished(Local_96.f_43))
	{
		stop_sound(Local_96.f_43);
		release_sound_id(Local_96.f_43);
		Local_96.f_43 = -1;
	}
	if (!has_sound_finished(Local_96.f_81))
	{
		stop_sound(Local_96.f_81);
		release_sound_id(Local_96.f_81);
		Local_96.f_81 = -1;
	}
	if (!has_sound_finished(Local_96.f_115))
	{
		stop_sound(Local_96.f_115);
		release_sound_id(Local_96.f_115);
		Local_96.f_115 = -1;
	}
	if (func_484())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_96.f_46[iVar0] != -1)
			{
				stop_sound(Local_96.f_46[iVar0]);
				release_sound_id(Local_96.f_46[iVar0]);
				Local_96.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_157();
	if (is_audio_scene_active("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		stop_audio_scene("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (is_audio_scene_active("dlc_aw_arena_piloted_missile_scene"))
	{
		stop_audio_scene("dlc_aw_arena_piloted_missile_scene");
	}
	if (is_audio_scene_active("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		stop_audio_scene("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (is_audio_scene_active("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		stop_audio_scene("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (is_audio_scene_active("dlc_hei4_submarine_guided_missile_Scene"))
	{
		stop_audio_scene("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_505(int iParam0, int iParam1)
{
	if (Global_2815059.f_337 > 0 || Global_2815059.f_337.f_1 > 0)
	{
		_playstats_sub_weap(iParam0, iParam1, Global_2815059.f_337, Global_2815059.f_337.f_1);
	}
	func_414();
}

bool func_506()
{
	return Global_1853194 == player_id();
}

int func_507(int iParam0)
{
	if (func_158(iParam0) == 243)
	{
		return func_508(iParam0);
	}
	return -1;
}

int func_508(int iParam0)
{
	if (func_159(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

void func_509(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_267.f_348, 20))
		{
			set_bit(&(Global_1853348[player_id() /*834*/].f_267.f_348), 20);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_267.f_348, 20))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_267.f_348), 20);
	}
}

void func_510(int iParam0)
{
	if (Global_1958711.f_5 != iParam0)
	{
		Global_1958711.f_5 = iParam0;
	}
}

bool func_511(int iParam0)
{
	return Local_96.f_242 == iParam0;
}

void func_512()
{
	if (func_172())
	{
		clear_bit(&Global_1958711, 7);
	}
}

void func_513(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!BitTest(Global_1958711, 16))
			{
				set_bit(&Global_1958711, 16);
			}
		}
	}
	else if (BitTest(Global_1958711, 16))
	{
		clear_bit(&Global_1958711, 16);
	}
}

void func_514(bool bParam0)
{
	if (bParam0)
	{
		if (!func_485())
		{
			set_bit(&Global_1958711, 6);
		}
	}
	else if (func_485())
	{
		clear_bit(&Global_1958711, 6);
	}
}

void func_515(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711, 3))
		{
			set_bit(&Global_1958711, 3);
		}
	}
	else if (BitTest(Global_1958711, 3))
	{
		clear_bit(&Global_1958711, 3);
	}
}

void func_516(bool bParam0)
{
	if (bParam0)
	{
		if (!func_395())
		{
			set_bit(&Global_1958711, 10);
		}
	}
	else if (func_395())
	{
		clear_bit(&Global_1958711, 10);
	}
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key("AM_MP_DRONE")) > 0)
		{
			if (!func_485())
			{
				set_bit(&Global_1958711, 0);
			}
		}
	}
	else if (func_485())
	{
		clear_bit(&Global_1958711, 0);
	}
}

void func_518(float fParam0)
{
	if (Global_1958711.f_9 != fParam0)
	{
		Global_1958711.f_9 = fParam0;
	}
}

int func_519()
{
	if (!func_306())
	{
		return 0;
	}
	if (func_11(player_id()))
	{
		return 0;
	}
	if (!func_75())
	{
		return 0;
	}
	if (func_83())
	{
		return 0;
	}
	return 1;
}

void func_520(bool bParam0)
{
	if (bParam0)
	{
		if (!func_31())
		{
			set_bit(&Global_1958711, 24);
		}
	}
	else if (func_31())
	{
		clear_bit(&Global_1958711, 24);
	}
}

void func_521()
{
	if (does_cam_exist(Local_96.f_169))
	{
		destroy_cam(Local_96.f_169, false);
		render_script_cams(false, false, 3000, true, false, 0);
		if (!func_37() || BitTest(Local_96.f_6, 0))
		{
			clear_timecycle_modifier();
		}
	}
}

void func_522()
{
	if (does_cam_exist(Local_96.f_169))
	{
		if (func_524(player_id()))
		{
			func_523(0);
		}
	}
}

void func_523(bool bParam0)
{
	if (bParam0)
	{
		Global_1946250.f_3579 = bParam0;
	}
	if (!Global_1946250.f_3578)
	{
		Global_1946250.f_3578 = 1;
	}
}

int func_524(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == player_id()) && func_19(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

void func_525(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = -1887020194;
	Var0.f_1 = player_id();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2689235[player_id() /*453*/].f_428, 1))
		{
			clear_bit(&(Global_2689235[player_id() /*453*/].f_428), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_25(&(uParam0->f_1)))
	{
		func_23(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_25(&(uParam0->f_1)) && !func_22(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_21(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_21(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_8(player_id());
		if (iVar3 != -1)
		{
			_trigger_script_event_2(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

void func_526(struct<9> Param0, var uParam1, var uParam2, var uParam3)
{
	network_set_this_script_is_network_script(32, false, Param0.f_0);
	func_535(0, -1, 0);
	network_register_host_broadcast_variables(&uLocal_95, 1, 0);
	network_register_player_broadcast_variables(&Local_94, 97, 0);
	if (!func_534())
	{
		func_495(0);
	}
	if (network_is_game_in_progress())
	{
		if (!func_484())
		{
			Local_96.f_135 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (does_entity_exist(func_345()) && !is_entity_dead(func_345(), false))
					{
						Local_96.f_144 = { _get_object_offset_from_coords(get_entity_coords(func_345(), true), get_entity_heading(func_345()), 0f, 1.6f, 2.9f) };
						Local_96.f_138 = { Local_96.f_144 };
					}
					func_458(1);
					Local_94[player_id() /*3*/].f_1 = 1;
					Global_1911933[player_id() /*260*/].f_93 = 1;
					break;
				
				case 2:
					func_533(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[player_id() /*3*/].f_1 = 2;
					Global_1911933[player_id() /*260*/].f_93 = 2;
					break;
				
				case 3:
					func_532(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[player_id() /*3*/].f_1 = 3;
					Global_1911933[player_id() /*260*/].f_93 = 3;
					break;
				
				case 4:
					func_452(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[player_id() /*3*/].f_1 = 4;
					Global_1911933[player_id() /*260*/].f_93 = 4;
					break;
				
				case 5:
					func_531(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[player_id() /*3*/].f_1 = 5;
					Global_1911933[player_id() /*260*/].f_93 = 5;
					break;
				
				case 6:
					func_530(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[player_id() /*3*/].f_1 = 6;
					Global_1911933[player_id() /*260*/].f_93 = 6;
					break;
				
				case 8:
					func_529(1);
					Local_96.f_144 = { Param0.f_5 };
					Local_94[player_id() /*3*/].f_1 = 8;
					Global_1911933[player_id() /*260*/].f_93 = 8;
					break;
				
				case 9:
					func_498(1);
					Local_94[player_id() /*3*/].f_1 = 9;
					Global_1911933[player_id() /*260*/].f_93 = 9;
					break;
				
				default:
					func_528(1);
					Local_96.f_144 = { Param0.f_5 };
					break;
			}
			Local_96.f_141 = { Param0.f_8 };
			if (func_257(func_404()))
			{
				func_372(Local_96.f_144, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_495(0);
	}
	if (!func_484())
	{
		func_444(1, 1);
	}
	else
	{
		func_527();
	}
}

void func_527()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_96.f_46[iVar0] = -1;
		iVar0++;
	}
	func_383(6);
}

void func_528(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 0))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 0);
		}
	}
	else if (BitTest(Global_1958711.f_2, 0))
	{
		clear_bit(&(Global_1958711.f_2), 0);
	}
}

void func_529(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 8))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 8);
		}
	}
	else if (BitTest(Global_1958711.f_2, 8))
	{
		clear_bit(&(Global_1958711.f_2), 8);
	}
}

void func_530(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 6))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 6);
		}
	}
	else if (BitTest(Global_1958711.f_2, 6))
	{
		clear_bit(&(Global_1958711.f_2), 6);
	}
}

void func_531(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 5))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 5);
		}
	}
	else if (BitTest(Global_1958711.f_2, 5))
	{
		clear_bit(&(Global_1958711.f_2), 5);
	}
}

void func_532(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 3))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 3);
		}
	}
	else if (BitTest(Global_1958711.f_2, 3))
	{
		clear_bit(&(Global_1958711.f_2), 3);
	}
}

void func_533(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 2))
		{
			Global_1958711.f_2 = 0;
			set_bit(&(Global_1958711.f_2), 2);
		}
	}
	else if (BitTest(Global_1958711.f_2, 2))
	{
		clear_bit(&(Global_1958711.f_2), 2);
	}
}

int func_534()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!network_is_game_in_progress())
		{
			return 0;
		}
		if (network_has_received_host_broadcast_data())
		{
			return 1;
		}
		if (func_493())
		{
			return 0;
		}
		if (func_491(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_535(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_497();
			}
			else
			{
				return 0;
			}
		}
		if (!func_536(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_497();
					}
					else
					{
						return 0;
					}
				}
				if (func_493())
				{
					if (!bParam2)
					{
						func_497();
					}
					else
					{
						return 0;
					}
				}
				if (func_491(157))
				{
					if (!bParam2)
					{
						func_497();
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
					func_497();
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
				func_497();
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
			func_497();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_536(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

