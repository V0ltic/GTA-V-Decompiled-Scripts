#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48[6];
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	float fLocal_52[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_64[2] = { 0, 0 };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 16;
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
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
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
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	struct<2> Local_242 = { 0, 5 } ;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 5;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_47 = { 2194.135f, 5593.278f, 53.70383f };
	Local_49 = { 2203.27f, 5549.918f, 93.09485f };
	Local_50 = { 2199.629f, 5640.293f, 52.23926f };
	fLocal_51 = 81.5f;
	Local_46 = { ScriptParam_242.f_1[0 /*3*/] };
	if (has_force_cleanup_occurred(11))
	{
		func_142();
	}
	if (func_115(Local_46, -1, 0, 0, 0))
	{
		func_112(-1);
	}
	else
	{
		terminate_this_thread();
	}
	while (true)
	{
		wait(0);
		if ((is_world_point_within_brain_activation_range() || iLocal_60) || (func_111() && is_entity_at_coord(player_ped_id(), Local_46, 500f, 500f, 500f, false, true, 0)))
		{
			if (!func_111())
			{
				if (func_110())
				{
					func_142();
				}
			}
			_0x208784099002BC30("RE_DS", 0);
			switch (iLocal_44)
			{
				case 0:
					if (func_98())
					{
						func_142();
					}
					func_96();
					iLocal_54 = 1;
					break;
				
				case 1:
					func_24();
					break;
				
				case 2:
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()
{
	if (iLocal_54 && !iLocal_53)
	{
		trigger_music_event("RE20_FAIL");
		if (is_ped_injured(player_ped_id()))
		{
			func_23(0);
		}
		iLocal_71 = 0;
		while (iLocal_71 < 6)
		{
			if (!is_ped_injured(iLocal_63[iLocal_71]))
			{
				if (does_blip_exist(uLocal_68[iLocal_71]))
				{
					remove_blip(&(uLocal_68[iLocal_71]));
				}
				set_ped_as_no_longer_needed(&(iLocal_63[iLocal_71]));
			}
			iLocal_71++;
		}
		set_wanted_level_multiplier(1f);
		enable_dispatch_service(3, true);
		if (bLocal_55)
		{
			func_3(18, 7, 0);
		}
		else
		{
			func_3(18, 1, 0);
		}
		iLocal_53 = 1;
	}
	if (vdist(func_2(player_id()), Local_46) > 150f)
	{
		func_142();
	}
}

Vector3 func_2(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_22();
	func_13(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_12(iParam0, &uVar0);
	Var1 = { func_4(&uVar0) };
}

struct<16> func_4(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_11(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_10(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_9(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_8(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_7(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_5(*uParam0), 64);
	return Var0;
}

int func_5(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_6(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_6(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_7(int iParam0)
{
	return iParam0 & 15;
}

int func_8(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_9(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_10(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_11(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_12(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_5(*uParam0);
	iVar1 = func_7(*uParam0);
	iVar2 = func_8(*uParam0);
	iVar3 = func_11(*uParam0);
	iVar4 = func_10(*uParam0);
	iVar5 = func_9(*uParam0);
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
	iVar6 = func_21(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_21(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_14(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_14(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, iParam1);
	func_19(uParam0, iParam2);
	func_18(uParam0, iParam3);
	func_17(uParam0, iParam5);
	func_16(uParam0, iParam4);
	func_15(uParam0, iParam6);
}

void func_15(var uParam0, int iParam1)
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

void func_16(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_7(*uParam0);
	iVar1 = func_5(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_17(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_18(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_19(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_20(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_21(int iParam0, int iParam1)
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

int func_22()
{
	var uVar0;
	
	func_20(&uVar0, get_clock_seconds());
	func_19(&uVar0, get_clock_minutes());
	func_18(&uVar0, get_clock_hours());
	func_16(&uVar0, get_clock_day_of_month());
	func_17(&uVar0, get_clock_month());
	func_15(&uVar0, get_clock_year());
	return uVar0;
}

void func_23(int iParam0)
{
	Global_113386.f_24995.f_7 = iParam0;
}

void func_24()
{
	func_71();
	func_70();
	switch (iLocal_45)
	{
		case 0:
			if (does_pickup_exist(iLocal_65))
			{
				if (does_blip_exist(iLocal_66))
				{
					if (is_entity_in_angled_area(player_ped_id(), Local_49, Local_50, fLocal_51, false, true, 0))
					{
						func_67();
						if (!bLocal_61)
						{
							trigger_music_event("RE20_FADE_RADIO_OUT");
							iLocal_76 = get_game_timer();
							bLocal_61 = true;
						}
						if (!func_111())
						{
							func_58(1);
						}
					}
				}
			}
			if (bLocal_61)
			{
				if ((get_game_timer() - iLocal_76) > 6000)
				{
					if (!iLocal_62)
					{
						trigger_music_event("RE20_START");
						iLocal_62 = 1;
					}
				}
			}
			break;
		
		case 1:
			if ((((is_ped_injured(iLocal_63[0]) && is_ped_injured(iLocal_63[1])) && is_ped_injured(iLocal_63[2])) && is_ped_injured(iLocal_63[3])) && is_ped_injured(iLocal_63[4]))
			{
				func_25();
			}
			else if (!is_entity_at_coord(player_ped_id(), Local_46, 100f, 100f, 100f, false, true, 0))
			{
				func_25();
			}
			break;
	}
	iLocal_71 = 0;
	while (iLocal_71 < 6)
	{
		if (is_ped_injured(iLocal_63[iLocal_71]))
		{
			if (does_blip_exist(uLocal_68[iLocal_71]))
			{
				remove_blip(&(uLocal_68[iLocal_71]));
			}
		}
		iLocal_71++;
	}
}

void func_25()
{
	func_57("DRUG_BLIP_END", -1);
	trigger_music_event("RE20_END");
	func_23(1);
	while (func_56())
	{
		wait(0);
	}
	while (!func_55())
	{
		wait(0);
	}
	bLocal_55 = true;
	func_29(-1, 0);
	func_26();
	iLocal_44 = 2;
}

void func_26()
{
	func_27();
}

int func_27()
{
	if (func_28(0))
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

int func_28(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_29(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_53();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_52(iParam0))
	{
		func_51(iParam0, iParam1);
		if (!func_50(51))
		{
			func_40("RE_REWARD", 1, 0, 4000, 10000, func_43(), 0, 138, 0);
			func_39(51);
		}
		if (func_38(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_37(iParam0, iParam1) != 322)
		{
			func_31(func_37(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_30(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_30(7);
			}
			else
			{
				func_30(1);
			}
		}
	}
}

void func_30(int iParam0)
{
	Global_113372 = iParam0;
}

void func_31(int iParam0, var uParam1, var uParam2)
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
		func_35((891 + iParam0), 1, -1);
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
		func_32();
	}
}

void func_32()
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
		func_34(13, floor(Global_113386.f_10194.f_3853));
	}
	if (!datafile_is_save_pending())
	{
		if (!Global_78319)
		{
			if (func_33() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_27();
				}
			}
		}
	}
}

int func_33()
{
	return Global_31959;
}

int func_34(int iParam0, int iParam1)
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

void func_35(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

int func_36()
{
	return Global_1574918;
}

int func_37(int iParam0, int iParam1)
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

int func_38(int iParam0)
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

void func_39(int iParam0)
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

void func_40(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_41(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_42();
	}
}

void func_42()
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

int func_43()
{
	func_44();
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

void func_44()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_48(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_47(player_ped_id());
			if (func_46(iVar0) && (!func_45(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_46(Global_113386.f_2363.f_539.f_4321))
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

bool func_45(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_46(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_50(int iParam0)
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

void func_51(int iParam0, int iParam1)
{
	set_bit(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_52(int iParam0)
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

int func_53()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, get_this_script_name(), 64);
	uVar1 = func_54(Var0);
	return uVar1;
}

int func_54(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_55()
{
	return 1;
}

int func_56()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

void func_57(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

int func_58(int iParam0)
{
	if (func_61())
	{
		Global_113376 = 1;
		Global_113373 = get_game_timer();
		if (func_38(Global_113375))
		{
			func_59(0);
		}
		set_mission_name(true, "RE_TITLE");
		if (iParam0 && func_38(Global_113375))
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
					func_57(func_60(iParam0), -1);
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
					func_57(func_60(iParam0), -1);
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
					func_57(func_60(iParam0), -1);
					Global_113386.f_24995.f_4++;
					set_bit(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_60(int iParam0)
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

int func_61()
{
	switch (func_62(&Global_32019, 0, 5, 0, get_id_of_this_thread()))
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

int func_62(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_66(0))
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
		if (!func_64(iParam2))
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
			func_63(uParam0, iParam4);
		}
	}
	return 2;
}

void func_63(var uParam0, int iParam1)
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

bool func_64(int iParam0)
{
	return func_65(iParam0, Global_43052);
}

int func_65(int iParam0, int iParam1)
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

int func_66(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_64(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_67()
{
	if (does_blip_exist(iLocal_66))
	{
		remove_blip(&iLocal_66);
		if (does_pickup_exist(iLocal_65))
		{
			if (!does_blip_exist(iLocal_67))
			{
				iLocal_67 = func_68(iLocal_65);
			}
		}
	}
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 0.7f, 0.7f));
	return iVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_70()
{
	if (has_pickup_been_collected(iLocal_65))
	{
		if (does_blip_exist(iLocal_66))
		{
			remove_blip(&iLocal_66);
		}
		settimera(0);
		iLocal_60 = 1;
		iLocal_73 = 2;
		iLocal_45 = 1;
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	iLocal_71 = 0;
	while (iLocal_71 < 6)
	{
		if (is_ped_injured(iLocal_63[iLocal_71]))
		{
			if (does_blip_exist(uLocal_68[iLocal_71]))
			{
				remove_blip(&(uLocal_68[iLocal_71]));
			}
			iLocal_73 = 2;
		}
		else
		{
			if ((func_95() && iLocal_73 != 2) || (iLocal_73 == 1 && is_ped_shooting(player_ped_id())))
			{
				func_93();
				wait(0);
				if (func_92())
				{
					func_91(&uLocal_77, 4, iLocal_63[iLocal_71], "DRUGFARMGOON", 0, 1);
					func_74(&uLocal_77, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
				}
				iLocal_73 = 2;
			}
			switch (iLocal_73)
			{
				case 0:
					if (!iLocal_56[iLocal_71])
					{
						if ((is_entity_at_entity(iLocal_63[iLocal_71], player_ped_id(), 15f, 15f, 40f, false, true, 0) && can_ped_hear_player(player_id(), iLocal_63[iLocal_71])) || can_ped_see_hated_ped(iLocal_63[iLocal_71], player_ped_id()))
						{
							if (is_entity_in_angled_area(player_ped_id(), Local_49, Local_50, fLocal_51, false, true, 0) || is_entity_at_coord(player_ped_id(), 2205.918f, 5633.455f, 55.7472f, 15f, 15f, 40f, false, true, 0))
							{
								if (!func_56())
								{
									func_91(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
									func_74(&uLocal_77, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								}
								iVar0 = 0;
								while (iVar0 < iLocal_63)
								{
									set_ped_should_play_immediate_scenario_exit(iLocal_63[iLocal_71]);
									open_sequence_task(&iLocal_70);
									task_look_at_entity(0, player_ped_id(), -1, 0, 2);
									task_go_to_entity_while_aiming_at_entity(0, player_ped_id(), player_ped_id(), 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									task_aim_gun_at_entity(0, player_ped_id(), -1, false);
									close_sequence_task(iLocal_70);
									task_perform_sequence(iLocal_63[iVar0], iLocal_70);
									clear_sequence_task(&iLocal_70);
									set_ped_using_action_mode(iLocal_63[iVar0], true, -1, 0);
									iVar0++;
								}
								iLocal_56[iLocal_71] = 1;
								iLocal_76 = get_game_timer();
								iLocal_73 = 1;
							}
						}
					}
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 < iLocal_63)
					{
						if (!iLocal_56[iVar1])
						{
							set_ped_should_play_immediate_scenario_exit(iLocal_63[iLocal_71]);
							open_sequence_task(&iLocal_70);
							task_look_at_entity(0, player_ped_id(), -1, 0, 2);
							task_go_to_entity_while_aiming_at_entity(0, player_ped_id(), player_ped_id(), 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							task_aim_gun_at_entity(0, player_ped_id(), -1, false);
							close_sequence_task(iLocal_70);
							task_perform_sequence(iLocal_63[iVar1], iLocal_70);
							clear_sequence_task(&iLocal_70);
							set_ped_using_action_mode(iLocal_63[iVar1], true, -1, 0);
							iLocal_56[iVar1] = 1;
						}
						iVar1++;
					}
					if (!is_ped_injured(iLocal_63[iLocal_71]))
					{
						if (!is_ped_facing_ped(iLocal_63[iLocal_71], player_ped_id(), 50f))
						{
							task_look_at_entity(iLocal_63[iLocal_71], player_ped_id(), -1, 0, 2);
							set_ped_keep_task(iLocal_63[iLocal_71], true);
						}
					}
					if (is_ped_stopped(player_ped_id()))
					{
						if (iLocal_74 == 0)
						{
							iLocal_74 = get_game_timer();
						}
						else
						{
							iLocal_75 = get_game_timer();
						}
					}
					else
					{
						iLocal_75 = 0;
						iLocal_74 = 0;
					}
					if (iLocal_56[iLocal_71] && !iLocal_57)
					{
						if ((get_game_timer() - iLocal_76) > 6000)
						{
							if (!func_56())
							{
								func_91(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
								func_74(&uLocal_77, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_57 = 1;
							}
						}
					}
					if (iLocal_56[iLocal_71] && !iLocal_58)
					{
						if ((get_game_timer() - iLocal_76) > 12000)
						{
							if (!func_56())
							{
								func_91(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
								func_74(&uLocal_77, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_58 = 1;
							}
						}
					}
					if (iLocal_56[iLocal_71])
					{
						if (((get_game_timer() - iLocal_76) > 18000 || (iLocal_75 - iLocal_74) > 5000) || is_ped_in_combat(iLocal_63[iLocal_71], 0))
						{
							if (is_entity_in_angled_area(player_ped_id(), Local_49, Local_50, fLocal_51, false, true, 0) || is_entity_at_entity(iLocal_63[iLocal_71], player_ped_id(), 15f, 15f, 5f, false, true, 0))
							{
								func_93();
								wait(0);
								if (func_92())
								{
									func_91(&uLocal_77, 4, iLocal_63[iLocal_71], "DRUGFARMGOON", 0, 1);
									func_74(&uLocal_77, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
								}
								else
								{
									func_91(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
									func_74(&uLocal_77, "RECSHAU", "RECSH_FIRE", 4, 0, 0, 0);
								}
								iLocal_73 = 2;
							}
							else
							{
								if (!is_ped_in_combat(iLocal_63[iLocal_71], 0))
								{
									clear_ped_tasks(iLocal_63[iLocal_71]);
									if (!is_ped_injured(iLocal_63[0]))
									{
										open_sequence_task(&iLocal_70);
										task_follow_nav_mesh_to_coord(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 0.25f, false, 40000f);
										task_turn_ped_to_face_coord(0, 2214.833f, 5635.627f, 55.0029f, 8000);
										task_follow_nav_mesh_to_coord(0, 2222.259f, 5613.22f, 53.5576f, 1f, -1, 0.25f, false, 40000f);
										task_turn_ped_to_face_coord(0, 2221.951f, 5593.625f, 52.9483f, 10000);
										set_sequence_to_repeat(iLocal_70, true);
										close_sequence_task(iLocal_70);
										task_perform_sequence(iLocal_63[0], iLocal_70);
										clear_sequence_task(&iLocal_70);
										set_ped_using_action_mode(iLocal_63[0], false, -1, 0);
									}
									if (!is_ped_injured(iLocal_63[1]))
									{
										open_sequence_task(&iLocal_70);
										task_follow_nav_mesh_to_coord(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 0.25f, false, 40000f);
										task_turn_ped_to_face_coord(0, 2205.466f, 5583.631f, 52.8682f, 8000);
										task_follow_nav_mesh_to_coord(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 0.25f, false, 40000f);
										task_turn_ped_to_face_coord(0, 2199.498f, 5560.702f, 52.8606f, 10000);
										set_sequence_to_repeat(iLocal_70, true);
										close_sequence_task(iLocal_70);
										task_perform_sequence(iLocal_63[1], iLocal_70);
										clear_sequence_task(&iLocal_70);
										set_ped_using_action_mode(iLocal_63[1], false, -1, 0);
									}
									if (!is_ped_injured(iLocal_63[2]))
									{
										open_sequence_task(&iLocal_70);
										task_follow_nav_mesh_to_coord(0, 2199.679f, 5590.673f, 52.7784f, 1f, -1, 0.25f, false, 40000f);
										task_turn_ped_to_face_coord(0, 2210.646f, 5593.576f, 52.8312f, 8000);
										task_follow_nav_mesh_to_coord(0, 2232.761f, 5593.563f, 53.0542f, 1f, -1, 0.25f, false, 40000f);
										task_turn_ped_to_face_coord(0, 2237.916f, 5599.589f, 53.2311f, 12000);
										set_sequence_to_repeat(iLocal_70, true);
										close_sequence_task(iLocal_70);
										task_perform_sequence(iLocal_63[2], iLocal_70);
										clear_sequence_task(&iLocal_70);
										set_ped_using_action_mode(iLocal_63[2], false, -1, 0);
									}
									if (!is_ped_injured(iLocal_63[3]) && !is_ped_injured(iLocal_63[4]))
									{
										open_sequence_task(&iLocal_70);
										task_go_to_entity(0, iLocal_63[4], -1, 2f, 1f, 2f, 0);
										task_turn_ped_to_face_entity(0, iLocal_63[4], 0);
										task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
										close_sequence_task(iLocal_70);
										task_perform_sequence(iLocal_63[3], iLocal_70);
										clear_sequence_task(&iLocal_70);
										set_ped_using_action_mode(iLocal_63[3], false, -1, 0);
									}
									if (!is_ped_injured(iLocal_63[4]))
									{
										open_sequence_task(&iLocal_70);
										task_go_to_entity(0, iLocal_63[3], -1, 2f, 1f, 2f, 0);
										task_turn_ped_to_face_entity(0, iLocal_63[3], 0);
										task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
										close_sequence_task(iLocal_70);
										task_perform_sequence(iLocal_63[4], iLocal_70);
										clear_sequence_task(&iLocal_70);
										set_ped_using_action_mode(iLocal_63[4], false, -1, 0);
									}
									if (!is_ped_injured(iLocal_63[5]))
									{
										task_guard_current_position(iLocal_63[5], 0f, 3f, true);
										set_ped_using_action_mode(iLocal_63[5], false, -1, 0);
									}
								}
								iVar1 = 0;
								while (iVar1 < iLocal_56)
								{
									iLocal_56[iVar1] = 0;
									iVar1++;
								}
								iLocal_56[iLocal_71] = 0;
								iLocal_73 = 0;
							}
						}
					}
					break;
				
				case 2:
					func_67();
					iLocal_71 = 0;
					while (iLocal_71 < 6)
					{
						if (!is_ped_injured(iLocal_63[iLocal_71]))
						{
							if (!is_ped_in_combat(iLocal_63[iLocal_71], 0))
							{
								set_ped_should_play_immediate_scenario_exit(iLocal_63[iLocal_71]);
								task_combat_ped(iLocal_63[iLocal_71], player_ped_id(), 0, 16);
								set_ped_keep_task(iLocal_63[iLocal_71], true);
								if (!does_blip_exist(uLocal_68[iLocal_71]))
								{
									uLocal_68[iLocal_71] = func_72(iLocal_63[iLocal_71], 1, 145);
								}
							}
						}
						if (!iLocal_59)
						{
							if (!func_56())
							{
								func_91(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
								func_74(&uLocal_77, "RECSHAU", "RECSH_STASH", 4, 0, 0, 0);
								iLocal_59 = 1;
							}
						}
						iLocal_71++;
					}
					break;
				}
		}
		iLocal_71++;
	}
}

int func_72(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_73(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)
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
					func_89();
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
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_87();
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
				func_85();
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
				if (func_84())
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
			if (func_83())
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
			func_82();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_81();
		func_76();
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
		func_89();
	}
	return 0;
}

void func_76()
{
	if (!func_77())
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

int func_77()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_80())
	{
		return 0;
	}
	if (func_78(player_id()))
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

bool func_78(int iParam0)
{
	return func_79(iParam0, 20);
}

var func_79(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_80()
{
	return -1;
}

void func_81()
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

void func_82()
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

int func_83()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
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

void func_85()
{
	if (func_45(14))
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
		Global_20266 = func_86();
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

int func_86()
{
	func_44();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_87()
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

bool func_88(int iParam0, int iParam1)
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

void func_89()
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

void func_90(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_92()
{
	return Global_113386.f_24995.f_7;
}

void func_93()
{
	Global_20471 = 0;
	func_94();
}

void func_94()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
}

int func_95()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_64)
	{
		if (is_vehicle_driveable(iLocal_64[iVar0], false))
		{
			if (has_entity_been_damaged_by_entity(iLocal_64[iVar0], player_ped_id(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_63)
	{
		if (!is_ped_injured(iLocal_63[iVar0]))
		{
			if (can_ped_see_hated_ped(iLocal_63[iVar0], player_ped_id()))
			{
				if (is_player_free_aiming_at_entity(player_id(), iLocal_63[iVar0]) || is_player_targetting_entity(player_id(), iLocal_63[iVar0]))
				{
					return 1;
				}
			}
			if ((((((is_bullet_in_area(get_entity_coords(iLocal_63[iVar0], true), 5f, true) || has_entity_been_damaged_by_entity(iLocal_63[iVar0], player_ped_id(), true)) || is_entity_touching_entity(player_ped_id(), iLocal_63[iVar0])) || is_projectile_type_in_area(get_entity_coords(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), get_entity_coords(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), true)) || is_projectile_type_in_area(get_entity_coords(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), get_entity_coords(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), true)) || is_projectile_type_in_area(get_entity_coords(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), get_entity_coords(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), true)) || is_projectile_type_in_area(get_entity_coords(iLocal_63[iVar0], true) - Vector(15f, 15f, 15f), get_entity_coords(iLocal_63[iVar0], true) + Vector(15f, 15f, 15f), joaat("weapon_stickybomb"), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (is_explosion_in_angled_area(-1, Local_49, Local_50, fLocal_51))
	{
		return 1;
	}
	if (is_entity_in_angled_area(player_ped_id(), Local_49, Local_50, fLocal_51, false, true, 0))
	{
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			return 1;
		}
	}
	if (is_entity_at_coord(player_ped_id(), 2202.498f, 5603.424f, 52.7476f, 20f, 20f, 20f, false, true, 0))
	{
		if (get_entity_speed(player_ped_id()) > 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_96()
{
	int iVar0;
	
	request_model(joaat("g_m_y_salvagoon_01"));
	request_model(joaat("bobcatxl"));
	request_model(joaat("prop_cash_case_01"));
	if ((has_model_loaded(joaat("g_m_y_salvagoon_01")) && has_model_loaded(joaat("bobcatxl"))) && has_model_loaded(joaat("prop_cash_case_01")))
	{
		add_scenario_blocking_area(Local_46 - Vector(20f, 50f, 50f), Local_46 + Vector(20f, 50f, 50f), false, true, true, true);
		set_vehicle_model_is_suppressed(joaat("bobcatxl"), true);
		set_wanted_level_multiplier(0f);
		enable_dispatch_service(3, false);
		iLocal_64[0] = create_vehicle(joaat("bobcatxl"), 2209.17f, 5572.897f, 52.7565f, 255.5161f, true, true, false);
		set_entity_as_mission_entity(iLocal_64[0], true, false);
		set_vehicle_on_ground_properly(iLocal_64[0], 5f);
		set_vehicle_extra(iLocal_64[0], 1, true);
		iLocal_64[1] = create_vehicle(joaat("bobcatxl"), 2195.473f, 5607.506f, 52.5648f, 168.4012f, true, true, false);
		set_entity_as_mission_entity(iLocal_64[1], true, false);
		set_vehicle_extra(iLocal_64[1], 1, false);
		iVar0 = 0;
		set_bit(&iVar0, 1);
		iLocal_65 = create_pickup_rotate(joaat("pickup_money_case"), Local_47, -1.368082f, 0.230633f, 176.8749f, iVar0, get_random_int_in_range(40000, 100000), 2, true, joaat("prop_cash_case_01"));
		Local_48[0 /*3*/] = { 2205.769f, 5631.985f, 55.553f };
		fLocal_52[0] = 352.2203f;
		Local_48[1 /*3*/] = { 2210.584f, 5580.684f, 52.8132f };
		fLocal_52[1] = 300.5012f;
		Local_48[2 /*3*/] = { 2201.302f, 5589.279f, 52.9354f };
		fLocal_52[2] = 53.1602f;
		Local_48[3 /*3*/] = { 2202.535f, 5613.367f, 52.6781f };
		fLocal_52[3] = 70f;
		Local_48[4 /*3*/] = { 2200.764f, 5614.076f, 52.6852f };
		fLocal_52[4] = 53f;
		Local_48[5 /*3*/] = { 2193.714f, 5595.456f, 52.7615f };
		fLocal_52[5] = 338.8346f;
		add_relationship_group("DrugCult", &iLocal_69);
		set_relationship_between_groups(3, iLocal_69, joaat("COP"));
		set_relationship_between_groups(3, joaat("COP"), iLocal_69);
		set_relationship_between_groups(5, iLocal_69, joaat("player"));
		iLocal_71 = 0;
		while (iLocal_71 < 6)
		{
			iLocal_63[iLocal_71] = create_ped(26, joaat("g_m_y_salvagoon_01"), Local_48[iLocal_71 /*3*/], fLocal_52[iLocal_71], true, true);
			set_blocking_of_non_temporary_events(iLocal_63[iLocal_71], true);
			set_ped_combat_movement(iLocal_63[iLocal_71], 2);
			set_ped_combat_attributes(iLocal_63[iLocal_71], 50, true);
			set_ped_combat_range(iLocal_63[iLocal_71], 0);
			set_ped_accuracy(iLocal_63[iLocal_71], 13);
			set_ped_relationship_group_hash(iLocal_63[iLocal_71], iLocal_69);
			iLocal_72 = get_random_int_in_range(0, 3);
			if (iLocal_72 == 0)
			{
				give_weapon_to_ped(iLocal_63[iLocal_71], joaat("weapon_sawnoffshotgun"), -1, true, true);
			}
			else if (iLocal_72 == 1)
			{
				give_weapon_to_ped(iLocal_63[iLocal_71], joaat("weapon_microsmg"), -1, true, true);
			}
			else
			{
				give_weapon_to_ped(iLocal_63[iLocal_71], joaat("weapon_assaultrifle"), -1, true, true);
			}
			set_ped_config_flag(iLocal_63[iLocal_71], 42, true);
			func_91(&uLocal_77, 3, iLocal_63[iLocal_71], "SalvadorGang", 0, 1);
			iLocal_71++;
		}
		if (!is_ped_injured(iLocal_63[0]))
		{
			open_sequence_task(&iLocal_70);
			task_follow_nav_mesh_to_coord(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 0.25f, false, 40000f);
			task_turn_ped_to_face_coord(0, 2214.833f, 5635.627f, 55.0029f, 8000);
			task_follow_nav_mesh_to_coord(0, 2215.993f, 5613.299f, 53.6157f, 1f, -1, 0.25f, false, 40000f);
			task_turn_ped_to_face_coord(0, 2221.951f, 5593.625f, 52.9483f, 10000);
			set_sequence_to_repeat(iLocal_70, true);
			close_sequence_task(iLocal_70);
			task_perform_sequence(iLocal_63[0], iLocal_70);
			clear_sequence_task(&iLocal_70);
		}
		set_ped_name_debug(iLocal_63[0], "piDrugCult[0]");
		if (!is_ped_injured(iLocal_63[1]))
		{
			open_sequence_task(&iLocal_70);
			task_follow_nav_mesh_to_coord(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 0.25f, false, 40000f);
			task_turn_ped_to_face_coord(0, 2205.466f, 5583.631f, 52.8682f, 8000);
			task_follow_nav_mesh_to_coord(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 0.25f, false, 40000f);
			task_turn_ped_to_face_coord(0, 2199.498f, 5560.702f, 52.8606f, 10000);
			set_sequence_to_repeat(iLocal_70, true);
			close_sequence_task(iLocal_70);
			task_perform_sequence(iLocal_63[1], iLocal_70);
			clear_sequence_task(&iLocal_70);
		}
		set_ped_name_debug(iLocal_63[1], "piDrugCult[1]");
		if (!is_ped_injured(iLocal_63[2]))
		{
			open_sequence_task(&iLocal_70);
			task_follow_nav_mesh_to_coord(0, 2201.014f, 5589.357f, 52.9573f, 1f, -1, 0.25f, false, 40000f);
			task_turn_ped_to_face_coord(0, 2210.646f, 5593.576f, 52.8312f, 8000);
			task_follow_nav_mesh_to_coord(0, 2229.667f, 5598.368f, 53.2195f, 1f, -1, 0.25f, false, 40000f);
			task_turn_ped_to_face_coord(0, 2237.916f, 5599.589f, 53.2311f, 12000);
			set_sequence_to_repeat(iLocal_70, true);
			close_sequence_task(iLocal_70);
			task_perform_sequence(iLocal_63[2], iLocal_70);
			clear_sequence_task(&iLocal_70);
		}
		set_ped_name_debug(iLocal_63[2], "piDrugCult[2]");
		if (!is_ped_injured(iLocal_63[3]) && !is_ped_injured(iLocal_63[4]))
		{
			open_sequence_task(&iLocal_70);
			task_go_to_entity(0, iLocal_63[4], -1, 2f, 1f, 2f, 0);
			task_turn_ped_to_face_entity(0, iLocal_63[4], 0);
			task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			close_sequence_task(iLocal_70);
			task_perform_sequence(iLocal_63[3], iLocal_70);
			clear_sequence_task(&iLocal_70);
		}
		set_ped_name_debug(iLocal_63[3], "piDrugCult[3]");
		if (!is_ped_injured(iLocal_63[4]))
		{
			open_sequence_task(&iLocal_70);
			task_go_to_entity(0, iLocal_63[3], -1, 2f, 1f, 2f, 0);
			task_turn_ped_to_face_entity(0, iLocal_63[3], 0);
			task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			close_sequence_task(iLocal_70);
			task_perform_sequence(iLocal_63[4], iLocal_70);
			clear_sequence_task(&iLocal_70);
		}
		set_ped_name_debug(iLocal_63[4], "piDrugCult[4]");
		task_guard_current_position(iLocal_63[5], 0f, 3f, true);
		set_ped_name_debug(iLocal_63[5], "piDrugCult[5]");
		iLocal_66 = func_97(Local_47, 0);
		set_blip_sprite(iLocal_66, 140);
		func_57("DRUG_BLIP_START", -1);
		iLocal_44 = 1;
	}
}

int func_97(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(Param0);
	set_blip_scale(iVar0, func_69(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, bParam1);
	return iVar0;
}

int func_98()
{
	if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
	{
		if (vdist2(get_entity_coords(player_ped_id(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_105())
	{
		return 1;
	}
	if (func_99(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_99(float fParam0, bool bParam1)
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
		if (func_46(func_86()))
		{
			iVar5 = func_43();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					func_100(iVar1, &Var0);
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

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_101(uParam1, "Abigail1", func_103(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 1:
			func_101(uParam1, "Abigail2", func_103(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 2:
			func_101(uParam1, "Barry1", func_103(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 3:
			func_101(uParam1, "Barry2", func_103(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 4:
			func_101(uParam1, "Barry3", func_103(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 5:
			func_101(uParam1, "Barry3A", func_103(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 6:
			func_101(uParam1, "Barry3C", func_103(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 7:
			func_101(uParam1, "Barry4", func_103(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_102(iParam0), 0, 0);
			break;
		
		case 8:
			func_101(uParam1, "Dreyfuss1", func_103(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 9:
			func_101(uParam1, "Epsilon1", func_103(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 10:
			func_101(uParam1, "Epsilon2", func_103(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 11:
			func_101(uParam1, "Epsilon3", func_103(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 12:
			func_101(uParam1, "Epsilon4", func_103(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 13:
			func_101(uParam1, "Epsilon5", func_103(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 14:
			func_101(uParam1, "Epsilon6", func_103(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 15:
			func_101(uParam1, "Epsilon7", func_103(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 16:
			func_101(uParam1, "Epsilon8", func_103(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 17:
			func_101(uParam1, "Extreme1", func_103(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 18:
			func_101(uParam1, "Extreme2", func_103(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 19:
			func_101(uParam1, "Extreme3", func_103(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 20:
			func_101(uParam1, "Extreme4", func_103(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 21:
			func_101(uParam1, "Fanatic1", func_103(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_102(iParam0), 1, 0);
			break;
		
		case 22:
			func_101(uParam1, "Fanatic2", func_103(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_102(iParam0), 1, 0);
			break;
		
		case 23:
			func_101(uParam1, "Fanatic3", func_103(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_102(iParam0), 0, 1);
			break;
		
		case 24:
			func_101(uParam1, "Hao1", func_103(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_102(iParam0), 0, 1);
			break;
		
		case 25:
			func_101(uParam1, "Hunting1", func_103(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 26:
			func_101(uParam1, "Hunting2", func_103(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 27:
			func_101(uParam1, "Josh1", func_103(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 28:
			func_101(uParam1, "Josh2", func_103(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 29:
			func_101(uParam1, "Josh3", func_103(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 30:
			func_101(uParam1, "Josh4", func_103(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 31:
			func_101(uParam1, "Maude1", func_103(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 32:
			func_101(uParam1, "Minute1", func_103(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 33:
			func_101(uParam1, "Minute2", func_103(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 34:
			func_101(uParam1, "Minute3", func_103(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 35:
			func_101(uParam1, "MrsPhilips1", func_103(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 36:
			func_101(uParam1, "MrsPhilips2", func_103(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 37:
			func_101(uParam1, "Nigel1", func_103(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 38:
			func_101(uParam1, "Nigel1A", func_103(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 39:
			func_101(uParam1, "Nigel1B", func_103(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_102(iParam0), 1, 1);
			break;
		
		case 40:
			func_101(uParam1, "Nigel1C", func_103(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_102(iParam0), 1, 1);
			break;
		
		case 41:
			func_101(uParam1, "Nigel1D", func_103(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_102(iParam0), 1, 1);
			break;
		
		case 42:
			func_101(uParam1, "Nigel2", func_103(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 43:
			func_101(uParam1, "Nigel3", func_103(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 1);
			break;
		
		case 44:
			func_101(uParam1, "Omega1", func_103(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 45:
			func_101(uParam1, "Omega2", func_103(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 46:
			func_101(uParam1, "Paparazzo1", func_103(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 47:
			func_101(uParam1, "Paparazzo2", func_103(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 48:
			func_101(uParam1, "Paparazzo3", func_103(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 49:
			func_101(uParam1, "Paparazzo3A", func_103(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 50:
			func_101(uParam1, "Paparazzo3B", func_103(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 51:
			func_101(uParam1, "Paparazzo4", func_103(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 52:
			func_101(uParam1, "Rampage1", func_103(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 54:
			func_101(uParam1, "Rampage3", func_103(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 55:
			func_101(uParam1, "Rampage4", func_103(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 56:
			func_101(uParam1, "Rampage5", func_103(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_102(iParam0), 0, 0);
			break;
		
		case 53:
			func_101(uParam1, "Rampage2", func_103(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_102(iParam0), 1, 0);
			break;
		
		case 57:
			func_101(uParam1, "TheLastOne", func_103(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 58:
			func_101(uParam1, "Tonya1", func_103(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 59:
			func_101(uParam1, "Tonya2", func_103(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 60:
			func_101(uParam1, "Tonya3", func_103(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 61:
			func_101(uParam1, "Tonya4", func_103(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		case 62:
			func_101(uParam1, "Tonya5", func_103(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_102(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_101(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_102(int iParam0)
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

struct<2> func_103(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_104(iParam0) };
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

struct<2> func_104(int iParam0)
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

int func_105()
{
	if (func_108() && !func_109())
	{
		return 1;
	}
	if (func_107() && func_106())
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return Global_113104 > 0;
}

int func_107()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_109()
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

int func_110()
{
	if (!func_64(5))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_109())
		{
			return 0;
		}
	}
	if (func_99(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_111()
{
	if ((Global_113375 == func_53() && get_random_event_flag()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_53();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_114(iParam0);
	_0x65D2EBB47E1CEC21(false);
	set_random_event_flag(true);
	Global_113372 = 0;
	func_113();
}

void func_113()
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

void func_114(int iParam0)
{
	Global_113375 = iParam0;
}

int func_115(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_53();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (is_player_playing(player_id()) && !is_ped_injured(player_ped_id()))
		{
			Var1 = { get_entity_coords(player_ped_id(), true) };
			if (vmag2(get_entity_velocity(player_ped_id())) > 1369f && !func_109())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_28(0))
		{
			return 0;
		}
		if (func_105())
		{
			return 0;
		}
		if (func_140())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_46(func_86()))
		{
			if (func_99(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (is_player_playing(player_id()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_139(iParam1))
		{
			return 0;
		}
		if (func_46(func_86()))
		{
			if (func_138(func_86()) == 4 || func_138(func_86()) == 5)
			{
				return 0;
			}
		}
		if (func_46(func_86()))
		{
			if (!func_137(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_136(Global_113386.f_24995.f_43[iParam1]))
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
		if (func_135())
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
		if (!func_126(4))
		{
			return 0;
		}
		if (!func_64(5))
		{
			return 0;
		}
		if (func_125(iParam1, bParam2) && !bParam3)
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
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_125(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_139(30) && !func_125(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_46(func_86()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (func_124(iVar4))
				{
					if (func_117(iVar2))
					{
						if (!func_116(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(get_entity_coords(player_ped_id(), false), Var3) < (210f * 210f))
							{
								if (func_86() != iVar2)
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

bool func_116(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_118(iVar0);
}

int func_118(int iParam0)
{
	return func_119(iParam0, 1);
}

int func_119(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_124(iParam0))
	{
		return 0;
	}
	func_120(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_121(func_22(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_121(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_123(iParam0, iParam1))
	{
		iVar0 = func_7(iParam1);
		iVar1 = func_5(iParam0);
		iVar2 = (func_5(iParam0) - func_5(iParam1));
		iVar3 = (func_7(iParam0) - func_7(iParam1));
		iVar4 = (func_8(iParam0) - func_8(iParam1));
		iVar5 = (func_11(iParam0) - func_11(iParam1));
		iVar6 = (func_10(iParam0) - func_10(iParam1));
		iVar7 = (func_9(iParam0) - func_9(iParam1));
	}
	else
	{
		iVar0 = func_7(iParam0);
		iVar1 = func_5(iParam1);
		iVar2 = (func_5(iParam1) - func_5(iParam0));
		iVar3 = (func_7(iParam1) - func_7(iParam0));
		iVar4 = (func_8(iParam1) - func_8(iParam0));
		iVar5 = (func_11(iParam1) - func_11(iParam0));
		iVar6 = (func_10(iParam1) - func_10(iParam0));
		iVar7 = (func_9(iParam1) - func_9(iParam0));
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
		iVar4 = (iVar4 + func_21(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_122(to_float(iVar0 + 1), 0f, 12f));
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

float func_122(float fParam0, float fParam1, float fParam2)
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

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_124(iParam1) || !func_124(iParam0))
	{
		return 1;
	}
	iVar0 = func_5(iParam0);
	iVar1 = func_5(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_7(iParam0);
	iVar1 = func_7(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_8(iParam0);
	iVar1 = func_8(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_11(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_10(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_9(iParam0);
	iVar1 = func_9(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
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
	iVar0 = func_9(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_10(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_11(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_5(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_7(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_8(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				iVar0 = func_86();
				if (!func_46(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_134()) || Global_112433) || Global_31962) || func_133()) || func_88(8, -1)) || func_132()) || func_131()) || func_130()) || func_129()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), true) || func_134()) || Global_31962) || func_133()) || func_88(8, -1)) || func_130()) || func_132()) || func_131()) || func_129()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(player_ped_id())) || is_ped_getting_into_a_vehicle(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || is_ped_in_combat(player_ped_id(), 0)) || func_134()) || Global_112433) || Global_31962) || func_133()) || func_88(8, -1)) || func_130()) || func_132()) || func_131()) || func_129()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((is_ped_ragdoll(player_ped_id()) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_ped_in_combat(player_ped_id(), 0)) || func_134()) || Global_112433) || Global_31962) || func_133()) || func_88(8, -1)) || func_132()) || func_131()) || func_129()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_134() || get_player_wanted_level(player_id()) > 0) || func_88(8, -1)) || func_129()) || func_128()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_88(8, -1) || func_132()) || func_131()) || func_128()) || func_127())
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
							if ((((((((((((((is_ped_in_combat(player_ped_id(), 0) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_134()) || Global_31962) || func_133()) || func_88(8, -1)) || func_131()) || func_130()) || func_129()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(player_ped_id())) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_player_being_arrested(player_id(), true)) || func_134()) || func_131()) || Global_112433) || Global_31962) || func_133()) || Global_44238) || func_88(8, -1)) || func_130()) || func_128()) || func_129()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(player_ped_id(), 0) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(player_ped_id())) || is_ped_in_any_vehicle(player_ped_id(), true)) || is_ped_ragdoll(player_ped_id())) || is_ped_falling(player_ped_id())) || is_ped_swimming(player_ped_id())) || is_player_being_arrested(player_id(), true)) || is_player_climbing(player_id())) || func_134()) || Global_112433) || Global_31962) || func_133()) || func_88(8, -1)) || func_130()) || func_128()) || func_132()) || func_131()) || func_129())
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

var func_127()
{
	return Global_100480.f_1;
}

int func_128()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_129()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_130()
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

bool func_131()
{
	return Global_100493.f_376 > 0;
}

bool func_132()
{
	return Global_100493.f_375 > 0;
}

var func_133()
{
	return Global_1575058;
}

int func_134()
{
	if (!network_is_game_in_progress())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_135()
{
	func_85();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_136(int iParam0)
{
	return func_123(func_22(), iParam0);
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_86();
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

int func_138(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_141())
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

int func_140()
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

int func_141()
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

void func_142()
{
	if (iLocal_54)
	{
		if (!iLocal_53)
		{
			trigger_music_event("RE20_FAIL");
			if (is_ped_injured(player_ped_id()))
			{
				func_23(0);
			}
			iLocal_71 = 0;
			while (iLocal_71 < 6)
			{
				if (!is_ped_injured(iLocal_63[iLocal_71]))
				{
					if (does_blip_exist(uLocal_68[iLocal_71]))
					{
						remove_blip(&(uLocal_68[iLocal_71]));
					}
					set_ped_as_no_longer_needed(&(iLocal_63[iLocal_71]));
				}
				iLocal_71++;
			}
			set_wanted_level_multiplier(1f);
			enable_dispatch_service(3, true);
			if (bLocal_55)
			{
				func_3(18, 7, 0);
			}
			else
			{
				func_3(18, 1, 0);
			}
		}
		remove_scenario_blocking_areas();
	}
	func_143(-1);
	terminate_this_thread();
}

void func_143(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_53();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_111())
	{
		func_147(iParam0);
		set_mission_name(false, 0);
		Global_113377 = get_game_timer();
		func_146(30000);
		StringCopy(&cVar0, func_145(Global_113375, 1), 64);
		if (func_52(Global_113375) > 0)
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
	func_144(&Global_32019);
	Global_113376 = 0;
	func_114(-1);
}

void func_144(var uParam0)
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

char* func_145(int iParam0, bool bParam1)
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

void func_146(int iParam0)
{
	Global_43603 = (get_game_timer() + iParam0);
}

void func_147(int iParam0)
{
	func_3(iParam0, 0, func_148(iParam0));
}

int func_148(int iParam0)
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

