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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int* iLocal_82 = NULL;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<3> Local_230 = { 0, 0, 0 } ;
	struct<3> Local_231 = { 0, 0, 0 } ;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	int iLocal_238 = 0;
	int* iLocal_239 = NULL;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int* iLocal_242 = NULL;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	float fLocal_255 = 0f;
	float fLocal_256 = 0f;
	float fLocal_257 = 0f;
	var uLocal_258[4] = { 0, 0, 0, 0 };
	var uLocal_259[4] = { 0, 0, 0, 0 };
	struct<429> Local_260 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	struct<27> Local_262 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 3;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 3;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 5;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 3;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 1;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 4;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 4;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 4;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 1;
	var uLocal_331 = 2;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	struct<3> Local_338[1];
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	struct<3> Local_341 = { 0, 0, 0 } ;
	struct<3> Local_342 = { 0, 0, 0 } ;
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	bool bLocal_347 = 0;
	struct<28> Local_348 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 5;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1097859072;
	var uLocal_395 = 1500;
	var uLocal_396 = 45;
	var uLocal_397 = 1103626240;
	var uLocal_398 = 5;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
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
	iLocal_71 = get_standard_blip_enum_id();
	iLocal_72 = get_waypoint_blip_enum_id();
	Local_77 = { 500f, 500f, 500f };
	fLocal_255 = 98f;
	fLocal_256 = 55f;
	fLocal_257 = 60f;
	iLocal_339 = 1;
	Local_341 = { -1284.367f, 295.7437f, 63.83044f };
	Local_342 = { -1286.218f, 292.573f, 63.7927f };
	if (has_force_cleanup_occurred(67))
	{
		func_418(2);
		func_414();
	}
	set_mission_flag(true);
	func_401();
	while (true)
	{
		if (does_entity_exist(Local_260.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_260);
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = player_ped_id();
	func_7(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(player_ped_id());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_5(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 3;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(player_ped_id());
	if (iVar0 == 0)
	{
		func_8(uParam0, 0, player_ped_id(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_8(uParam0, 0, player_ped_id(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_8(uParam0, 0, player_ped_id(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_8(uParam0, 0, player_ped_id(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (func_400(&Local_260))
	{
		func_399(&Local_260);
		if (Local_260.f_410 > 0)
		{
			if (func_398(&Local_260, 0))
			{
				func_396();
			}
		}
		else if (func_395(&Local_260, 31) > 5f)
		{
			func_418(2);
			func_414();
		}
	}
	else
	{
		func_373(&Local_260, &uLocal_392);
		func_372(&Local_260);
		func_371(&Local_260, &uLocal_340, 0);
		if (Local_260.f_410 < 9)
		{
			func_358(&Local_260, &Local_262, &uLocal_392);
		}
		if (Local_260.f_410 > 5 && !iLocal_343)
		{
			iLocal_343 = 1;
			Local_262.f_16[0 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_262.f_16[1 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_262.f_16[2 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_262.f_26[0 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_262.f_26[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_262.f_26[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_260.f_410 > 2)
		{
			if (!func_357(&Local_260))
			{
				if (!iLocal_345)
				{
					if (func_356())
					{
						func_354(&Local_262);
						iLocal_345 = 1;
					}
				}
				func_324();
			}
			else
			{
				func_300(&Local_260, "Taxi Not Driveable", func_323(&Local_260));
			}
		}
		if (Local_260.f_410 > 3)
		{
			if (!bVar3)
			{
				if (is_vehicle_driveable(Local_260.f_4, false))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!is_entity_dead(Local_262.f_4[iVar0], false))
						{
							if (has_entity_been_damaged_by_entity(Local_262.f_4[iVar0], Local_260.f_4, true))
							{
								bVar3 = true;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!is_entity_dead(Local_262.f_4[iVar1], false))
					{
						if (!is_ped_injured(Local_262.f_4[iVar1]))
						{
							clear_ped_tasks(Local_262.f_4[iVar1]);
							clear_sequence_task(&iVar2);
							open_sequence_task(&iVar2);
							task_smart_flee_ped(0, Local_260.f_2, 1000f, -1, false, false);
							close_sequence_task(iVar2);
							task_perform_sequence(Local_262.f_4[iVar1], iVar2);
							clear_sequence_task(&iVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_260.f_410 == 9)
		{
			func_276(&Local_260, 0, 1);
			func_275(&Local_260, &Local_262, 1128792064);
		}
		switch (Local_260.f_410)
		{
			case 0:
				func_274(&(Local_338[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_273(&Local_260, &Local_338);
				func_271();
				func_269();
				func_268();
				func_267(&Local_260, 16, 4f, 0);
				func_264(&Local_260, Local_341, Local_342, &Local_262);
				func_263(&Local_260);
				func_262(&Local_260, 1);
				break;
			
			case 1:
				if (func_259())
				{
					func_258();
					func_238();
					func_237(&Local_260);
					func_235(&(Local_260.f_100), 8);
					func_235(&(Local_260.f_100), 2048);
					func_235(&(Local_260.f_100), 256);
					Local_260.f_14 = { Local_341 };
					Local_260.f_49 = 0;
					func_262(&Local_260, 3);
				}
				break;
			
			case 3:
				if (func_225(&Local_260, 3))
				{
					func_224(&Local_260, 1, 0);
					func_223(&uLocal_409, Local_341, 20f, 0);
					func_262(&Local_260, 5);
				}
				break;
			
			case 5:
				func_222();
				if (func_202(&Local_260, &Local_262))
				{
					stat_get_float(Local_260.f_428, &(Local_260.f_42), -1);
					func_262(&Local_260, 15);
				}
				break;
			
			case 15:
				if (func_200(&Local_260, &Local_262))
				{
					func_196(&Local_260, 8, 1, 0, 0);
					if (!is_entity_dead(Local_262[0], false))
					{
						set_ped_config_flag(Local_262[0], 26, true);
					}
					if (!is_entity_dead(Local_262[1], false))
					{
						set_ped_config_flag(Local_262[1], 26, true);
					}
					if (!is_entity_dead(Local_262[2], false))
					{
						set_ped_config_flag(Local_262[2], 26, true);
					}
					func_195(&Local_260);
					func_193(&Local_260, 0);
					func_192();
					func_190(&Local_260, 11);
					func_267(&Local_260, 10, 0, 0);
					func_267(&Local_260, 6, 0, 0);
					func_189();
					Local_260.f_36 = get_random_float_in_range(3f, 10f);
					func_187(&Local_262);
					func_262(&Local_260, 9);
				}
				if (is_vehicle_driveable(Local_260.f_4, false))
				{
					if (!is_ped_in_vehicle(Local_260.f_2, Local_260.f_4, false))
					{
						func_183(&Local_260, &Local_262);
						func_262(&Local_260, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_344)
				{
				}
				func_180(&Local_260);
				if (func_137(&Local_260, &Local_262, &Local_348, &uLocal_351))
				{
					func_136(&Local_348, -1, 1);
					if (func_135(&Local_262))
					{
						func_134(&Local_260, 0);
					}
					func_133(&Local_262);
					func_131(&Local_260);
					func_127(&Local_260);
					func_126(&Local_260);
					func_262(&Local_260, 27);
				}
				break;
			
			case 27:
				if (func_115(&Local_260, 1))
				{
					clear_sequence_task(&iVar2);
					open_sequence_task(&iVar2);
					task_follow_nav_mesh_to_coord(0, Local_262.f_26[0 /*3*/], 1f, 20000, 0.25f, false, 40000f);
					task_set_blocking_of_non_temporary_events(0, false);
					if (does_scenario_exist_in_area(Local_260.f_29, 4f, true))
					{
						task_use_nearest_scenario_to_coord(0, Local_260.f_29, 4f, 0);
					}
					else
					{
						task_achieve_heading(0, 350.8689f, 0);
						task_start_scenario_in_place(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, false);
					}
					close_sequence_task(iVar2);
					task_perform_sequence(Local_260.f_3, iVar2);
					set_ped_keep_task(Local_260.f_3, true);
					func_262(&Local_260, 29);
				}
				break;
			
			case 29:
				if (!is_ped_injured(Local_260.f_3))
				{
					if (func_114(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						set_ped_reset_flag(Local_260.f_3, 60, true);
					}
				}
				if (func_81(&Local_260, &iLocal_399))
				{
					func_12(1, &Local_260, 0);
					func_267(&Local_260, 31, 0, 0);
					func_262(&Local_260, 30);
				}
				break;
			
			case 30:
				if (!is_ped_injured(Local_260.f_3))
				{
					if (func_114(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						set_ped_reset_flag(Local_260.f_3, 60, true);
					}
					if ((is_entity_at_coord(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, true, 1) || func_10(Local_260.f_3, 1) > 50f) || func_395(&Local_260, 31) > 30f)
					{
						if (is_entity_at_coord(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, true, 1))
						{
						}
						if (func_10(Local_260.f_3, 1) > 50f)
						{
						}
						if (func_395(&Local_260, 31) > 30f)
						{
						}
						set_blocking_of_non_temporary_events(Local_260.f_3, false);
						set_relationship_between_groups(255, Local_260.f_413, joaat("player"));
						set_ped_as_no_longer_needed(&(Local_260.f_3));
						func_414();
					}
				}
				else
				{
					func_414();
				}
				break;
			}
	}
}

float func_10(int iParam0, bool bParam1)
{
	return func_11(get_player_ped(get_player_index()), iParam0, bParam1);
}

float func_11(int iParam0, int iParam1, bool bParam2)
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

void func_12(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_57(uParam1);
		if (!is_ped_injured(uParam1->f_3))
		{
			set_ped_config_flag(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_55(1, 0);
	}
	func_13(uParam1, bParam2);
}

void func_13(var uParam0, bool bParam1)
{
	func_399(uParam0);
	if (func_54())
	{
		func_52();
	}
	func_50();
	clear_prints();
	clear_help(true);
	func_45(0);
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		set_vehicle_has_strong_axles(uParam0->f_4, false);
		remove_vehicle_stuck_check(uParam0->f_4);
		remove_vehicle_upsidedown_check(uParam0->f_4);
	}
	func_42(uParam0->f_14, 1);
	func_40(uParam0->f_14, 1, 1114636288);
	func_39(&(uParam0->f_244), 3);
	set_ped_config_flag(player_ped_id(), 32, true);
	if (func_36())
	{
		set_player_control(player_id(), true, 0);
	}
	_0xC61B86C9F61EB404(true);
	func_26(0, 1, 1, 0, 0, 0, 0);
	display_radar(true);
	display_hud(true);
	if (does_cam_exist(*uParam0))
	{
		destroy_cam(*uParam0, false);
		render_script_cams(false, false, 3000, true, false, 0);
		set_cinematic_button_active(true);
	}
	if (func_25(Global_113386.f_19097, 4))
	{
		func_23(&(Global_113386.f_19097), 4);
		set_vehicle_model_is_suppressed(func_22(), false);
	}
	if (bParam1)
	{
		func_21(uParam0);
	}
	func_20(uParam0);
	remove_anim_dict("gestures@m@standing@casual");
	remove_anim_dict("oddjobs@taxi@");
	remove_anim_dict("oddjobs@towingcome_here");
	if (network_is_signed_online())
	{
		func_18(uParam0->f_411);
	}
	if (!is_player_control_on(get_player_index()))
	{
		set_player_control(get_player_index(), true, 0);
	}
	playstats_oddjob_done(round((func_14(&iLocal_82) * 1000f)), 12, 0);
}

float func_14(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_15(bool bParam0)
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

bool func_16(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_17(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_18(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_19(iParam0)}, 6);
		if (!is_string_null(&uVar0))
		{
		}
	}
}

struct<8> func_19(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_20(var uParam0)
{
	remove_road_node_speed_zone(uParam0->f_51[0]);
}

void func_21(var uParam0)
{
	if (does_entity_exist(uParam0->f_3))
	{
		if (!is_entity_dead(uParam0->f_3, false))
		{
			if (!is_ped_in_any_vehicle(uParam0->f_3, false))
			{
				reset_ped_last_vehicle(uParam0->f_3);
			}
			set_blocking_of_non_temporary_events(uParam0->f_3, false);
			set_relationship_between_groups(255, uParam0->f_413, joaat("player"));
			if (is_entity_playing_anim(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				stop_anim_task(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (is_entity_playing_anim(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				stop_anim_task(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (is_entity_playing_anim(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				stop_anim_task(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (is_entity_playing_anim(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				stop_anim_task(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			set_ped_as_no_longer_needed(&(uParam0->f_3));
		}
	}
}

int func_22()
{
	return joaat("taxi");
}

void func_23(var uParam0, int iParam1)
{
	func_24(uParam0, iParam1);
}

void func_24(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		special_ability_deactivate_fast(player_id(), 0);
		set_all_random_peds_flee(player_id(), true);
		set_police_ignore_player(player_id(), true);
		func_35(1);
		thefeed_flush_queue();
		thefeed_pause();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_34())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_33(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_35(0);
		thefeed_resume();
		Global_63160 = 0;
		if (bParam1)
		{
			cascade_shadows_init_session();
		}
		set_all_random_peds_flee(player_id(), false);
		set_police_ignore_player(player_id(), false);
		func_33(0, bParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((((!is_ped_injured(player_ped_id()) && !func_31(player_id())) && !func_28(player_id(), 0)) && !func_27()) && !bParam4) && !bParam5)
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (((!is_ped_injured(player_ped_id()) && !func_31(player_id())) && !bParam4) && !bParam5)
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_78317 = 0;
	}
}

bool func_27()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 14);
}

bool func_28(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_29(-1, 0) == 8;
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

int func_29(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
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

int func_30()
{
	return Global_1574918;
}

int func_31(int iParam0)
{
	if (func_28(iParam0, 0))
	{
		return 1;
	}
	if (func_32())
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

bool func_32()
{
	return BitTest(Global_2621446, 3);
}

int func_33(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_34()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_8136, 13);
	}
	else
	{
		clear_bit(&Global_8136, 13);
	}
}

int func_36()
{
	if (!func_38() && !func_37())
	{
		if (!is_player_script_control_on(get_player_index()))
		{
			return 1;
		}
	}
	return 0;
}

int func_37()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_40(struct<3> Param0, bool bParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_41(Param0, 1f, -fParam2, -fParam2, -fParam2) };
	Var1 = { func_41(Param0, 1f, fParam2, fParam2, fParam2) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam1)
	{
		set_roads_in_area(Var0, Var1, false, true);
	}
	else
	{
		set_roads_back_to_original(Var0, Var1, 1);
		clear_ped_non_creation_area();
	}
}

Vector3 func_41(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = cos(fVar1);
	fVar3 = sin(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

void func_42(struct<3> Param0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_43(Param0, func_44(), 0))
	{
		Var0 = { func_41(Param0, 1f, -30f, -30f, -10f) };
		Var1 = { func_41(Param0, 1f, 30f, 30f, 10f) };
		set_all_vehicle_generators_active_in_area(Var0, Var1, bParam1, true);
	}
}

bool func_43(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_44()
{
	struct<3> Var0;
	
	return Var0;
}

void func_45(int iParam0)
{
	if (func_49())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_48())
		{
			func_46(1, 1);
		}
		else
		{
			func_46(0, 0);
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
	if (!func_34())
	{
		Global_20266.f_1 = 3;
	}
}

void func_46(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_47(0))
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

int func_47(int iParam0)
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

bool func_48()
{
	return BitTest(Global_1958711, 5);
}

bool func_49()
{
	return BitTest(Global_1958711, 19);
}

void func_50()
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
					func_51(Global_97374[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_51(int iParam0, bool bParam1)
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

void func_52()
{
	Global_20471 = 0;
	func_53();
}

void func_53()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
}

int func_54()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_113386.f_19097.f_22[0]++;
			func_56("Fares Completed ++ = ", Global_113386.f_19097.f_22[0]);
			break;
		
		case 1:
			Global_113386.f_19097.f_22[1]++;
			func_56("Fares Failed ++ = ", Global_113386.f_19097.f_22[1]);
			break;
		
		case 2:
			Global_113386.f_19097.f_22[2]++;
			func_56("Fares Accepted ++ ", Global_113386.f_19097.f_22[2]);
			break;
		
		case 3:
			Global_113386.f_19097.f_22[3]++;
			func_56("Fares Expired ++ ", Global_113386.f_19097.f_22[3]);
			break;
		
		case 13:
			Global_113386.f_19097.f_22[13]++;
			func_56("Passengers run ++ = ", Global_113386.f_19097.f_22[13]);
			break;
		
		case 14:
			Global_113386.f_19097.f_22[14]++;
			func_56("Passenger Forced to Pay ++ = ", Global_113386.f_19097.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_113386.f_19097.f_22[4])
				{
					Global_113386.f_19097.f_22[4] = iParam1;
					func_56("This distance ", iParam1);
					func_56(" is longer than current best", Global_113386.f_19097.f_22[4]);
				}
				else
				{
					func_56("Longest Distance Not Beat ", Global_113386.f_19097.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_113386.f_19097.f_22[5] = (Global_113386.f_19097.f_22[5] + iParam1);
			func_56("Total Distance w/ Passenger = ", Global_113386.f_19097.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_113386.f_19097.f_22[6]++;
			}
			else
			{
				Global_113386.f_19097.f_22[6] = (Global_113386.f_19097.f_22[6] + iParam1);
			}
			func_56("Wanted Levels ++ = ", Global_113386.f_19097.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_113386.f_19097.f_22[7] = (Global_113386.f_19097.f_22[7] + iParam1);
			}
			else
			{
				Global_113386.f_19097.f_22[7]++;
			}
			func_56("Wanted Levels Lost = ", Global_113386.f_19097.f_22[7]);
			break;
		
		case 8:
			Global_113386.f_19097.f_22[8]++;
			func_56("Taxis wrecked ++ = ", Global_113386.f_19097.f_22[8]);
			break;
		
		case 9:
			Global_113386.f_19097.f_22[9]++;
			func_56("Horn Honked ++ = ", Global_113386.f_19097.f_22[9]);
			break;
		
		case 10:
			Global_113386.f_19097.f_22[10] = (Global_113386.f_19097.f_22[10] + iParam1);
			func_56("Total Money Earned = ", Global_113386.f_19097.f_22[10]);
			break;
		
		case 11:
			Global_113386.f_19097.f_22[11] = (Global_113386.f_19097.f_22[11] + iParam1);
			func_56("Total Tips Earned = ", Global_113386.f_19097.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_113386.f_19097.f_22[12])
			{
				Global_113386.f_19097.f_22[12] = iParam1;
				func_56("New Highest Tip = ", Global_113386.f_19097.f_22[12]);
			}
			else
			{
				func_56("Highest Tip Not Reached = ", Global_113386.f_19097.f_22[12]);
			}
			break;
	}
}

void func_56(char* sParam0, int iParam1)
{
}

void func_57(var uParam0)
{
	func_55(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_418(1);
		func_67(15, 1);
	}
	func_235(&(Global_113386.f_19097), 1024);
	if (!func_25(Global_113386.f_19097, 64))
	{
		func_58(func_65(func_66(uParam0)), 0, 0);
	}
}

void func_58(int iParam0, int iParam1, int iParam2)
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
		func_64((891 + iParam0), 1, -1);
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
		func_59();
	}
}

void func_59()
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
		func_63(13, floor(Global_113386.f_10194.f_3853));
	}
	if (!datafile_is_save_pending())
	{
		if (!Global_78319)
		{
			if (func_62() == 2 == 0 && !network_is_game_in_progress())
			{
				if (network_is_cloud_available())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_60();
				}
			}
		}
	}
}

int func_60()
{
	if (func_61(0))
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

int func_61(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_62()
{
	return Global_31959;
}

int func_63(int iParam0, int iParam1)
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

void func_64(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_30();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

int func_65(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_66(var uParam0)
{
	return uParam0->f_411;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (func_80(14) && !func_79(iParam0))
	{
		return 0;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_78(&Global_4541529))
	{
		if (func_76(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_69(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return 0;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (has_achievement_been_passed(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	func_72(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4541528 - 0.5f));
}

void func_73(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_74(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_75(var uParam0)
{
	return uParam0->f_80;
}

bool func_76(var uParam0, int iParam1)
{
	return func_77(uParam0, iParam1) != -1;
}

int func_77(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_78(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_80(int iParam0)
{
	return Global_43052 == iParam0;
}

int func_81(var uParam0, int iParam1)
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_54() && func_395(uParam0, 0) > 1f)
			{
				if (func_36())
				{
					set_player_control(player_id(), true, 0);
				}
				func_113(uParam0);
				func_23(&(Global_113386.f_19097), 4096);
				func_110(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_112(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				play_sound_frontend(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_109(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_103(iParam1, 0))
			{
				func_82(uParam0);
				func_267(uParam0, 0, 0, 0);
				func_109(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_82(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_83(func_101(), 21, iVar0, 0, 0);
		func_55(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_100(iParam0) == 3)
	{
		return;
	}
	if (func_100(iParam0) == 4)
	{
		return;
	}
	func_84(func_100(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		stat_get_int(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		stat_set_int(iVar1, iVar0, true);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_99();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_98(99, 1);
					func_97(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_96(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_93(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_93(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (get_hash_of_this_script_name())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_93(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_92(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_98(95, iParam3);
					break;
				
				case 1:
					func_98(97, iParam3);
					break;
				
				case 2:
					func_98(96, iParam3);
					break;
			}
			func_98(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_97(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_86(iParam0);
	if (Global_43052 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			stat_set_int(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			stat_set_int(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			stat_set_int(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_87(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_64(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_64(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_64(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_64(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_90(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_90(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_90(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_90(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_90(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_90(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!network_is_game_in_progress())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			clear_bit(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_89() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		clear_bit(&(Global_113386.f_20564.f_471), bParam0);
		clear_bit(&(Global_2359296[func_89() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		begin_text_command_thefeed_post("COUP_RED");
		add_text_component_substring_text_label(func_88(bParam0));
		end_text_command_thefeed_post_messagetext(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_88(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_30();
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

void func_92(int iParam0)
{
	func_98(93, iParam0);
	func_98(29, iParam0);
	func_98(30, iParam0);
}

int func_93(int iParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_95(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_95(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_95(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_95(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = get_cloud_time_as_int();
		iVar1 = func_94(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = get_cloud_time_as_int();
		iVar3 = func_94(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = get_cloud_time_as_int();
		iVar5 = func_94(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = get_cloud_time_as_int();
		iVar7 = func_94(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = get_cloud_time_as_int();
		iVar9 = func_94(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = get_cloud_time_as_int();
		iVar11 = func_94(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!network_is_game_in_progress())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_89() /*5567*/].f_681.f_10, iParam0);
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_91(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_95(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	return _get_packed_stat_bool(iParam0, iParam1);
}

int func_96(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (has_achievement_been_passed(27))
	{
		return 0;
	}
	if (stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		stat_set_int(joaat("num_cash_spent"), iVar1, true);
		func_63(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_67(27, 1);
	return 1;
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	stat_get_int(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	stat_set_int(iParam0, iVar0, true);
}

void func_98(int iParam0, int iParam1)
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

void func_99()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_100(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

int func_101()
{
	func_102();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_102()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_4(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_3(player_ped_id());
			if (func_6(iVar0) && (!func_80(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_6(Global_113386.f_2363.f_539.f_4321))
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

int func_103(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_2)))
	{
		func_107(&(uParam0->f_2));
	}
	hide_hud_component_this_frame(14);
	draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (is_control_just_pressed(2, 201) || uParam0->f_8)
		{
			if (!func_17(&(uParam0->f_5)))
			{
				func_107(&(uParam0->f_5));
				func_106(uParam0, 1051260355);
			}
		}
		if (func_17(&(uParam0->f_5)))
		{
			if (func_105(&(uParam0->f_5)) > 0.33f)
			{
				func_104(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_105(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_17(&(uParam0->f_5)))
		{
			func_107(&(uParam0->f_5));
			func_106(uParam0, 1051260355);
		}
		else if (func_105(&(uParam0->f_5)) > 0.33f)
		{
			func_104(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_104(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_105(int* iParam0)
{
	if (func_17(iParam0))
	{
		if (func_16(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_15(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_106(var uParam0, float fParam1)
{
	begin_scaleform_movie_method(*uParam0, "SHARD_ANIM_OUT");
	scaleform_movie_method_add_param_int(uParam0->f_9);
	scaleform_movie_method_add_param_float(fParam1);
	end_scaleform_movie_method();
}

void func_107(int* iParam0)
{
	func_108(iParam0, 0f);
}

void func_108(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_15(BitTest(*iParam0, 4)) - fParam1);
	set_bit(iParam0, 1);
	clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_109(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_110(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	begin_scaleform_movie_method(*uParam0, func_111());
	begin_text_command_scaleform_string("STRING");
	set_colour_of_next_text_component(iParam9);
	add_text_component_substring_text_label(sParam1);
	end_text_command_scaleform_string();
	begin_text_command_scaleform_string(sParam7);
	add_text_component_integer(iParam2);
	add_text_component_integer(iParam3);
	add_text_component_substring_text_label(sParam6);
	add_text_component_integer(iParam5);
	add_text_component_integer(iParam4);
	end_text_command_scaleform_string();
	end_scaleform_movie_method();
	func_107(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_111()
{
	if (network_is_game_in_progress())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_112(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_113(var uParam0)
{
	int iVar0;
	
	Local_161.f_1 = to_float(uParam0->f_50);
	Local_161.f_2 = to_float(uParam0->f_56);
	func_55(11, uParam0->f_56);
	func_55(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (BitTest(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161.f_0 = uParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

float func_114(int iParam0, struct<3> Param1, bool bParam2)
{
	if (is_entity_dead(iParam0, false))
	{
		return -1f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, true), Param1, bParam2);
}

int func_115(var uParam0, bool bParam1)
{
	if (!is_entity_dead(uParam0->f_3, false))
	{
		if (func_125(uParam0) && func_121(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_120(uParam0, 2097152))
				{
					func_116(uParam0);
				}
			}
			else
			{
				func_116(uParam0);
			}
		}
		else if (!func_125(uParam0))
		{
			if (bParam1)
			{
				if (func_120(uParam0, 2097152))
				{
					if (get_script_task_status(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (get_script_task_status(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_116(var uParam0)
{
	struct<3> Var0;
	
	if (func_119(uParam0->f_29))
	{
		Var0 = { uParam0->f_17 };
	}
	else
	{
		Var0 = { uParam0->f_29 };
	}
	func_117(uParam0, Var0);
}

void func_117(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (!is_entity_dead(uParam0->f_3, false) && is_ped_sitting_in_vehicle(uParam0->f_3, uParam0->f_4))
		{
			Var0 = { get_offset_from_entity_in_world_coords(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { get_offset_from_entity_in_world_coords(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_118(uParam0->f_3, uParam0->f_4) == 0)
			{
				task_leave_vehicle(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (get_distance_between_coords(Var0, Param1, false) < get_distance_between_coords(Var1, Param1, false) && is_entry_point_for_seat_clear(uParam0->f_3, uParam0->f_4, 1, false, false))
			{
				task_leave_vehicle(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (get_distance_between_coords(Var0, Param1, false) >= get_distance_between_coords(Var1, Param1, false) && is_entry_point_for_seat_clear(uParam0->f_3, uParam0->f_4, 2, false, false))
			{
				task_leave_vehicle(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				task_leave_vehicle(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_118(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0, false) && !is_entity_dead(iParam1, false))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_119(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_120(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_25(uParam0->f_81, iParam1) && !func_54());
	}
	return func_54();
}

int func_121(var uParam0, bool bParam1, float fParam2)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (is_ped_in_vehicle(uParam0->f_2, uParam0->f_4, false))
		{
			if (func_47(1))
			{
				func_45(0);
			}
			if (func_36())
			{
				func_124();
				return 1;
			}
			else if (func_122(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					set_player_control(get_player_index(), false, 256);
				}
				else
				{
					set_player_control(get_player_index(), false, 0);
				}
			}
			set_vehicle_brake_lights(uParam0->f_4, true);
		}
	}
	return 0;
}

int func_122(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	disable_control_action(0, 71, true);
	disable_control_action(0, 72, true);
	disable_control_action(0, 76, true);
	disable_control_action(0, 73, true);
	disable_control_action(0, 59, true);
	disable_control_action(0, 60, true);
	if (bParam5)
	{
		disable_control_action(0, 75, true);
	}
	disable_control_action(0, 80, true);
	if (!bParam6)
	{
		disable_control_action(0, 69, true);
		disable_control_action(0, 70, true);
		disable_control_action(0, 68, true);
	}
	disable_control_action(0, 74, true);
	disable_control_action(0, 86, true);
	disable_control_action(0, 81, true);
	disable_control_action(0, 82, true);
	disable_control_action(0, 138, true);
	disable_control_action(0, 136, true);
	disable_control_action(0, 114, true);
	disable_control_action(0, 107, true);
	disable_control_action(0, 110, true);
	disable_control_action(0, 89, true);
	disable_control_action(0, 89, true);
	disable_control_action(0, 87, true);
	disable_control_action(0, 88, true);
	disable_control_action(0, 113, true);
	disable_control_action(0, 115, true);
	disable_control_action(0, 116, true);
	disable_control_action(0, 117, true);
	disable_control_action(0, 118, true);
	disable_control_action(0, 119, true);
	disable_control_action(0, 352, true);
	disable_control_action(0, 131, true);
	disable_control_action(0, 132, true);
	disable_control_action(0, 123, true);
	disable_control_action(0, 126, true);
	disable_control_action(0, 129, true);
	disable_control_action(0, 130, true);
	disable_control_action(0, 133, true);
	disable_control_action(0, 134, true);
	_0x17FCA7199A530203();
	func_123(iParam0);
	if ((get_game_timer() - Global_29) > 500)
	{
		bring_vehicle_to_halt(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = get_game_timer();
	if (!is_entity_dead(iParam0, false))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_123(int iParam0)
{
	if (!is_entity_dead(iParam0, false))
	{
		if (_get_has_rocket_boost(iParam0))
		{
			if (_is_vehicle_rocket_boost_active(iParam0))
			{
				_set_vehicle_rocket_boost_active(iParam0, false);
			}
		}
	}
}

void func_124()
{
	if (is_special_ability_active(player_id(), 0))
	{
		special_ability_deactivate(player_id(), 0);
	}
}

int func_125(var uParam0)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (!is_ped_injured(uParam0->f_3))
		{
			if (is_ped_in_vehicle(uParam0->f_3, uParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_126(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = ceil((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = ceil((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_25(uParam0->f_55, 1))
	{
		func_235(&(uParam0->f_55), 1);
	}
}

void func_127(var uParam0)
{
	func_129();
	clear_prints();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_196(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_196(uParam0, 103, 1, 0, 0);
		}
		func_128(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_196(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_196(uParam0, 102, 1, 0, 0);
	}
	func_267(uParam0, 16, 4f, 0);
}

void func_128(int iParam0)
{
	Global_112096.f_221 = iParam0;
}

void func_129()
{
	Global_20471 = 0;
	func_130();
}

void func_130()
{
	if (is_scripted_conversation_ongoing())
	{
		restart_scripted_conversation();
		Global_22616 = 0;
		stop_scripted_conversation(true);
		Global_21605 = 6;
		return;
	}
}

void func_131(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_132(fVar0);
	iLocal_57[4] = ceil(fVar0);
	iLocal_57[5] = ceil(fVar0);
	func_55(4, ceil(fVar0));
	func_55(5, ceil(fVar0));
	uParam0->f_50 = ceil((fVar0 * 100f));
}

float func_132(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_particle_fx_looped_exist(uParam0->f_73[iVar0]))
		{
			stop_particle_fx_looped(uParam0->f_73[iVar0], false);
		}
		iVar0++;
	}
	iLocal_245 = 0;
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		set_bit(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_135(var uParam0)
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}

void func_136(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_137(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	func_175(uParam0, uParam2, uParam1);
	if (func_174(uParam0) >= 14)
	{
		if (iLocal_250)
		{
			if (((func_395(uParam0, 11) > 20f && !func_54()) && !is_message_being_displayed()) && !bLocal_248)
			{
				bLocal_248 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_250)
		{
			func_168(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_168(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!is_ped_injured((*uParam1)[uParam1->f_95]) && is_ped_in_any_vehicle((*uParam1)[uParam1->f_95], false))
			{
				if (!iLocal_254)
				{
					if (func_167(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_166(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					clear_ped_tasks((*uParam1)[uParam1->f_95]);
					task_stand_still((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_168(uParam0, uParam1, 1, 0);
	}
	if ((((is_ped_injured((*uParam1)[0]) || is_ped_injured((*uParam1)[1])) || is_ped_injured((*uParam1)[2])) || has_entity_been_damaged_by_entity((*uParam1)[1], uParam0->f_4, true)) || has_entity_been_damaged_by_entity((*uParam1)[2], uParam0->f_4, true))
	{
		uParam0->f_415 = 14;
		func_300(uParam0, "Passenger injured.", 14);
	}
	if (!func_152(uParam0, uParam1))
	{
		if (!is_entry_point_for_seat_clear(uParam0->f_2, uParam0->f_4, -1, false, false))
		{
			task_leave_any_vehicle((*uParam1)[0], 0, 0);
			bLocal_252 = true;
			iLocal_253 = 0;
		}
	}
	else
	{
		if (bLocal_252)
		{
			if (is_vehicle_seat_free(uParam0->f_4, 0, false))
			{
				if (!iLocal_253)
				{
					task_enter_vehicle((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_253 = 1;
				}
				if (func_11(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_300(uParam0, "Passenger left behind.", 8);
				}
			}
			if (get_ped_in_vehicle_seat(uParam0->f_4, 0, false) == (*uParam1)[0])
			{
				func_187(uParam1);
				bLocal_252 = false;
			}
		}
		func_149(uParam0, 1097859072, 1117782016);
		func_148(uParam0, &(uParam0->f_43));
		if (!bLocal_252 && !is_ped_in_vehicle((*uParam1)[0], uParam0->f_4, false))
		{
			func_300(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (func_114(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_254)
					{
						func_196(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (is_entity_at_coord(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (func_121(uParam0, 1, 4f))
						{
							if (!is_ped_injured((*uParam1)[2]))
							{
								remove_blip(&(uParam1->f_36[2]));
								func_129();
								if (uParam1->f_95 == 2)
								{
									clear_ped_tasks((*uParam1)[2]);
								}
								clear_sequence_task(&iVar0);
								open_sequence_task(&iVar0);
								task_leave_any_vehicle(0, 0, 0);
								task_follow_nav_mesh_to_coord(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 0.25f, false, 40000f);
								task_follow_nav_mesh_to_coord(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 0.25f, false, 40000f);
								task_start_scenario_in_place(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
								close_sequence_task(iVar0);
								task_perform_sequence((*uParam1)[2], iVar0);
								clear_sequence_task(&iVar0);
								if (func_395(uParam0, 6) < fLocal_255)
								{
									uParam1->f_55[2] = 1;
									func_196(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									func_196(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								func_146(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_144((*uParam1)[2], uParam0->f_4) && func_395(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_133(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					set_player_control(get_player_index(), true, 0);
				}
				else if (!func_141(uParam0) && is_player_control_on(get_player_index()))
				{
					func_139(uParam3);
					func_136(uParam2, -1, 0);
					func_267(uParam0, 6, 0, 0);
					func_267(uParam0, 11, 0, 0);
					func_196(uParam0, 40, 1, 0, 0);
					if (!does_blip_exist(uParam1->f_36[1]))
					{
						func_187(uParam1);
					}
					iLocal_254 = 0;
					uParam1->f_90++;
				}
				break;
			
			case 2:
				if (!uParam1->f_51[1])
				{
					if (func_114(uParam0->f_4, uParam1->f_16[1 /*3*/], 1) < 175f && !iLocal_254)
					{
						func_196(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (is_entity_at_coord(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (func_121(uParam0, 1, 4f))
						{
							if (!is_ped_injured((*uParam1)[1]))
							{
								func_129();
								remove_blip(&(uParam1->f_36[1]));
								func_138(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (func_395(uParam0, 6) < fLocal_256)
								{
									uParam1->f_55[1] = 1;
									func_196(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									func_196(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								func_146(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_144((*uParam1)[1], uParam0->f_4) && func_395(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_34 = 216.5f;
					set_player_control(get_player_index(), true, 0);
				}
				else if (!func_141(uParam0) && is_player_control_on(get_player_index()))
				{
					func_139(uParam3);
					func_136(uParam2, -1, 0);
					func_267(uParam0, 6, 0, 0);
					func_267(uParam0, 11, 0, 0);
					func_196(uParam0, 43, 1, 0, 0);
					iLocal_254 = 0;
					if (!does_blip_exist(uParam1->f_36[0]))
					{
						func_187(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			
			case 4:
				if (!uParam1->f_51[0])
				{
					if (func_114(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_254)
					{
						func_196(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (is_entity_at_coord(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (func_121(uParam0, 1, 4f))
						{
							remove_blip(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							func_129();
							if (func_395(uParam0, 6) < fLocal_257)
							{
								uParam1->f_55[0] = 1;
								uParam0->f_56 += 2;
							}
							else
							{
								uParam1->f_55[0] = 0;
								uParam0->f_56 = (uParam0->f_56 - 2);
							}
							return 1;
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_138(var uParam0, var uParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	if (is_vehicle_driveable(*uParam0, false))
	{
		if (!is_entity_dead(*uParam1, false))
		{
			Var0 = { get_offset_from_entity_in_world_coords(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { get_offset_from_entity_in_world_coords(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (get_distance_between_coords(Var0, Param2, false) < get_distance_between_coords(Var1, Param2, false) && is_entry_point_for_seat_clear(*uParam1, *uParam0, 1, false, false))
			{
				iVar2 = 131072;
			}
			else if (get_distance_between_coords(Var0, Param2, false) >= get_distance_between_coords(Var1, Param2, false) && is_entry_point_for_seat_clear(*uParam1, *uParam0, 2, false, false))
			{
				iVar2 = 262144;
			}
			else
			{
				iVar2 = 16;
			}
			Var4 = { 312.9961f, -274.4479f, 52.92882f };
			if (iVar2 == 16)
			{
				clear_sequence_task(&iVar3);
				open_sequence_task(&iVar3);
				task_leave_any_vehicle(0, 0, 0);
				task_follow_nav_mesh_to_coord(0, Var4, 1f, 20000, 0.25f, false, 40000f);
				task_use_nearest_scenario_to_coord(0, Var4, 5f, 0);
				task_follow_nav_mesh_to_coord(0, Param2, 1f, 20000, 0.25f, false, 40000f);
				close_sequence_task(iVar3);
				task_perform_sequence(*uParam1, iVar3);
			}
			else
			{
				clear_sequence_task(&iVar3);
				open_sequence_task(&iVar3);
				task_leave_vehicle(0, *uParam0, iVar2);
				task_follow_nav_mesh_to_coord(0, Var4, 1f, 20000, 0.25f, false, 40000f);
				task_use_nearest_scenario_to_coord(0, Var4, 5f, 0);
				task_follow_nav_mesh_to_coord(0, Param2, 1f, 20000, 0.25f, false, 40000f);
				close_sequence_task(iVar3);
				task_perform_sequence(*uParam1, iVar3);
			}
		}
	}
}

void func_139(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_140(), 24);
		iVar0++;
	}
	clear_prints();
	func_52();
}

var func_140()
{
	var uVar0;
	
	return uVar0;
}

int func_141(var uParam0)
{
	if (func_54())
	{
		return 1;
	}
	if (func_143(uParam0, 17))
	{
		return 1;
	}
	if (func_143(uParam0, 14))
	{
		return 1;
	}
	if (func_142(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_142(var uParam0)
{
	return uParam0->f_110;
}

bool func_143(var uParam0, int iParam1)
{
	return func_17(&(uParam0->f_146[iParam1 /*3*/]));
}

int func_144(int iParam0, int iParam1)
{
	if (func_145(iParam0, iParam1))
	{
		if (is_ped_in_vehicle(iParam0, iParam1, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
{
	if (is_vehicle_driveable(iParam1, false))
	{
		if (!is_ped_injured(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_146(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_16(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_147(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_147(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_147(int* iParam0)
{
	if (func_17(iParam0))
	{
		if (!func_16(iParam0))
		{
			iParam0->f_2 = (func_15(BitTest(*iParam0, 4)) - iParam0->f_1);
			set_bit(iParam0, 2);
		}
	}
}

void func_148(var uParam0, float* fParam1)
{
	stat_get_float(uParam0->f_428, fParam1, -1);
	uParam0->f_41 = (*fParam1 - uParam0->f_42);
}

void func_149(var uParam0, float fParam1, float fParam2)
{
	if (func_125(uParam0) && func_25(uParam0->f_44, 4))
	{
		if ((is_vehicle_stopped(uParam0->f_4) || get_entity_speed(uParam0->f_4) < 3f) && func_151(uParam0))
		{
			if (!func_143(uParam0, 2))
			{
				func_190(uParam0, 2);
			}
			else if (func_125(uParam0))
			{
				if (func_395(uParam0, 2) > fParam1 && !func_143(uParam0, 14))
				{
					if (func_38())
					{
						func_196(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_196(uParam0, 48, 1, 0, 0);
					}
					func_267(uParam0, 2, 0, 0);
					if (func_143(uParam0, 10))
					{
						func_267(uParam0, 10, 0, 0);
					}
				}
				if (!func_143(uParam0, 3))
				{
					func_267(uParam0, 3, 0, 0);
				}
				else if (func_395(uParam0, 3) >= fParam2)
				{
					func_150(uParam0, 3, 0);
					func_300(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_143(uParam0, 2))
			{
				func_150(uParam0, 2, 0);
			}
			if (func_143(uParam0, 3))
			{
				func_150(uParam0, 3, 0);
			}
		}
	}
}

void func_150(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_104(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_104(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_151(var uParam0)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (get_ped_in_vehicle_seat(uParam0->f_4, -1, false) == player_ped_id())
		{
			return 1;
		}
	}
	return 0;
}

int func_152(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!is_vehicle_driveable(uParam0->f_4, false))
	{
		func_300(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_165(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (is_ped_injured((*uParam1)[iVar0]))
			{
				func_300(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_153(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153(var uParam0)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (get_ped_in_vehicle_seat(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (func_143(uParam0, 14))
			{
				func_161(uParam0);
			}
			func_154(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_154(var uParam0, bool bParam1)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (does_blip_exist(uParam0->f_8))
			{
				set_blip_alpha(uParam0->f_8, 0);
				set_blip_route(uParam0->f_8, false);
				func_160(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (does_blip_exist(uParam0->f_9))
			{
				set_blip_alpha(uParam0->f_9, 0);
				set_blip_route(uParam0->f_9, false);
				clear_prints();
				if (func_125(uParam0))
				{
					func_196(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_160(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_155(uParam0, 0, 0);
		}
		else if (does_blip_exist(uParam0->f_10))
		{
			remove_blip(&(uParam0->f_10));
			if (does_blip_exist(uParam0->f_8))
			{
				set_blip_alpha(uParam0->f_8, 255);
				set_blip_route(uParam0->f_8, true);
			}
			else if (does_blip_exist(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					set_blip_alpha(uParam0->f_9, 0);
					set_blip_route(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					set_blip_alpha(uParam0->f_9, 255);
					set_blip_route(uParam0->f_9, true);
				}
			}
			clear_prints();
		}
	}
}

void func_155(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_399(uParam0);
	}
	if (!does_blip_exist(uParam0->f_10))
	{
		uParam0->f_10 = func_158(uParam0->f_4, 1, 0);
		set_blip_name_from_text_file(uParam0->f_10, "TAXI_BLIP_CAR");
		set_blip_route(uParam0->f_10, true);
		func_156(uParam0);
		if (bParam2)
		{
			clear_prints();
			func_196(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_156(var uParam0)
{
	func_267(uParam0, 14, 0, 0);
	func_157();
}

void func_157()
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (is_vehicle_driveable(iVar0, false))
	{
		play_sound_from_entity(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

int func_158(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_159(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_159(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_159(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_159(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_160(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_25(*uParam1, iParam2))
	{
		clear_prints();
		func_196(uParam0, iParam3, 1, 0, 0);
		func_235(uParam1, iParam2);
	}
}

void func_161(var uParam0)
{
	func_150(uParam0, 14, 0);
	func_150(uParam0, 15, 0);
	func_164();
	if (func_163())
	{
		func_162(0);
	}
}

void func_162(int iParam0)
{
	Global_22616 = iParam0;
}

int func_163()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

void func_164()
{
	int iVar0;
	
	iVar0 = get_players_last_vehicle();
	if (is_vehicle_driveable(iVar0, false))
	{
		play_sound_from_entity(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_165(var uParam0, var uParam1)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (!is_ped_in_vehicle(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_143(uParam0, 14))
			{
				if (does_blip_exist(*uParam1) && get_blip_alpha(*uParam1) > 0)
				{
					set_blip_alpha(*uParam1, 0);
				}
				func_155(uParam0, 0, 0);
				func_196(uParam0, 2, 1, 1, 0);
			}
			else if (func_395(uParam0, 14) > 20f)
			{
				func_300(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_143(uParam0, 14))
			{
				func_161(uParam0);
			}
			if (does_blip_exist(uParam0->f_10))
			{
				remove_blip(&(uParam0->f_10));
			}
			if ((does_blip_exist(*uParam1) && get_blip_alpha(*uParam1) < 255) && get_player_wanted_level(get_player_index()) < 1)
			{
				set_blip_alpha(*uParam1, 255);
				set_blip_route(*uParam1, true);
			}
		}
	}
}

void func_166(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	*uParam0 = iVar0;
}

int func_167(var uParam0, var uParam1)
{
	int iVar0;
	
	switch (*uParam1)
	{
		case 0:
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0f, false, false, false);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0f, false, false, false);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0f, false, false, false);
			close_sequence_task(iVar0);
			task_perform_sequence(*uParam0, iVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (get_script_task_status(*uParam0, 242628503) != 1 || get_script_task_status(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_168(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (bLocal_248)
	{
		if (!uParam1->f_59)
		{
			if (!func_54())
			{
				func_172(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_171(uParam0, uParam1);
				uParam1->f_91 = get_game_timer();
			}
		}
	}
	if (bLocal_249)
	{
		if (!uParam1->f_60)
		{
			if (!func_54())
			{
				uParam1->f_60 = 1;
				func_170(uParam0, uParam1);
				uParam1->f_91 = get_game_timer();
				uParam1->f_92 = get_game_timer();
			}
		}
	}
	uVar0 = func_169(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = get_entity_speed(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_60)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
				{
					set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "speed", fVar4, false);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			set_particle_fx_looped_evolution(uParam1->f_88, "speed", fVar4, false);
			set_particle_fx_looped_evolution(uParam1->f_89, "speed", fVar4, false);
		}
	}
	if (get_entity_speed(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = get_game_timer();
		uParam1->f_63 = 1;
	}
	if ((get_entity_speed(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = get_game_timer();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = get_game_timer();
		uParam1->f_63 = 1;
	}
	if (((uParam1->f_59 || uParam1->f_60) && !uParam1->f_63) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_61 = 1;
			uParam1->f_63 = 0;
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (is_vehicle_door_fully_open(uParam0->f_4, iVar1))
					{
						if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (!is_vehicle_window_intact(uParam0->f_4, iVar1))
					{
						if ((get_game_timer() % 2000) < 50)
						{
						}
						if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "smoke", fVar8, false);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				set_particle_fx_looped_evolution(uParam1->f_88, "smoke", fVar8, false);
				set_particle_fx_looped_evolution(uParam1->f_89, "smoke", fVar8, false);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (get_game_timer() - uParam1->f_91);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_61 = 1;
				uParam1->f_63 = 0;
			}
			else
			{
				fVar8 = (1f - (to_float(iVar5) / to_float(iVar6)));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (is_vehicle_door_fully_open(uParam0->f_4, iVar1))
					{
						if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (!is_vehicle_window_intact(uParam0->f_4, iVar1))
					{
						if ((get_game_timer() % 2000) < 50)
						{
						}
						if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "smoke", fVar8, false);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				set_particle_fx_looped_evolution(uParam1->f_88, "smoke", fVar8, false);
				set_particle_fx_looped_evolution(uParam1->f_89, "smoke", fVar8, false);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (get_game_timer() - uParam1->f_91);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_62 = 1;
			}
			else
			{
				fVar8 = (to_float(iVar5) / to_float(iVar7));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (is_vehicle_door_fully_open(uParam0->f_4, iVar1))
					{
						if (does_particle_fx_looped_exist(uParam1->f_83[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_83[iVar1], "smoke", fVar8, false);
						}
					}
					else if (!is_vehicle_window_intact(uParam0->f_4, iVar1))
					{
						if (does_particle_fx_looped_exist(uParam1->f_78[iVar1]))
						{
							set_particle_fx_looped_evolution(uParam1->f_78[iVar1], "smoke", fVar8, false);
						}
					}
					if (does_particle_fx_looped_exist(uParam1->f_73[iVar1]))
					{
						set_particle_fx_looped_evolution(uParam1->f_73[iVar1], "smoke", fVar8, false);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				set_particle_fx_looped_evolution(uParam1->f_88, "smoke", fVar8, false);
				set_particle_fx_looped_evolution(uParam1->f_89, "smoke", fVar8, false);
			}
		}
	}
}

int func_169(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (is_vehicle_door_fully_open(uParam0->f_4, iVar0))
		{
			if (!BitTest(uLocal_259[iVar0], 1))
			{
				set_bit(&(uLocal_259[iVar0]), 1);
			}
			if (is_vehicle_door_damaged(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_250)
				{
					iLocal_250 = 1;
				}
			}
		}
		else if (BitTest(uLocal_259[iVar0], 1))
		{
			clear_bit(&(uLocal_259[iVar0]), true);
		}
		if (!is_vehicle_window_intact(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!BitTest(uLocal_258[iVar0], 1))
			{
				set_bit(&(uLocal_258[iVar0]), 1);
			}
			if (!iLocal_250)
			{
				iLocal_250 = 1;
			}
		}
		else if (BitTest(uLocal_258[iVar0], 1))
		{
			clear_bit(&(uLocal_258[iVar0]), true);
		}
		iVar0++;
	}
	return iVar1;
}

void func_170(var uParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		uParam1->f_73[0] = start_particle_fx_looped_on_entity("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_230, 0f, 0f, 0f, get_random_float_in_range(0.4f, 0.6f), false, false, false);
		uParam1->f_73[1] = start_particle_fx_looped_on_entity("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_232, 0f, 0f, 0f, get_random_float_in_range(0.4f, 0.6f), false, false, false);
		uParam1->f_73[2] = start_particle_fx_looped_on_entity("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_231, 0f, 0f, 0f, get_random_float_in_range(0.8f, 1f), false, false, false);
		uParam1->f_73[3] = start_particle_fx_looped_on_entity("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_233, 0f, 0f, 0f, get_random_float_in_range(0.8f, 1f), false, false, false);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			set_particle_fx_looped_evolution(uParam1->f_73[iVar0], "smoke", 1f, false);
			set_particle_fx_looped_evolution(uParam1->f_73[iVar0], "speed", 0f, false);
			iVar0++;
		}
	}
}

void func_171(var uParam0, var uParam1)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		uParam1->f_88 = start_particle_fx_looped_on_entity("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1f, false, false, false);
		uParam1->f_89 = start_particle_fx_looped_on_entity("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1f, false, false, false);
	}
	_0x8CDE909A0370BB3A(true);
}

void func_172(int* iParam0)
{
	func_173(iParam0, 0f);
}

void func_173(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_15(BitTest(*iParam0, 4)) + fParam1);
	set_bit(iParam0, 1);
	clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_174(var uParam0)
{
	return uParam0->f_416;
}

void func_175(var uParam0, var uParam1, var uParam2)
{
	if (!func_25(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (get_player_wanted_level(get_player_index()) >= 1)
				{
					if (func_395(uParam0, 9) > 1f)
					{
						func_179(uParam0, get_player_wanted_level(get_player_index()));
						func_196(uParam0, 50, 1, 0, 0);
						func_267(uParam0, 9, 0, 0);
						if (does_blip_exist(uParam2->f_40))
						{
							set_blip_alpha(uParam2->f_40, 0);
							set_blip_route(uParam2->f_40, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_54() && func_395(uParam0, 9) > 4f)
				{
					func_196(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_178("TAXI_OBJ_POL", 0, 0))
				{
					func_196(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (get_player_wanted_level(get_player_index()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (is_player_wanted_level_greater(get_player_index(), func_177(uParam0)))
				{
					func_179(uParam0, get_player_wanted_level(get_player_index()));
					func_55(6, 0);
				}
				if (!func_142(uParam0))
				{
					if (!is_scripted_conversation_ongoing())
					{
						if (func_395(uParam0, 16) > 10f)
						{
							func_196(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (get_player_wanted_level(get_player_index()) < 1)
				{
					if (does_blip_exist(uParam2->f_40))
					{
						set_blip_alpha(uParam2->f_40, 255);
						set_blip_route(uParam2->f_40, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_54())
				{
					func_196(uParam0, 53, 1, 0, 1);
					func_55(7, func_177(uParam0));
					func_179(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_54())
				{
					func_176(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_176(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

int func_177(var uParam0)
{
	return uParam0->f_106;
}

bool func_178(char* sParam0, int iParam1, char* sParam2)
{
	begin_text_command_is_message_displayed(sParam0);
	if (iParam1 == 1)
	{
		add_text_component_substring_text_label(sParam2);
	}
	return end_text_command_is_message_displayed();
}

void func_179(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_180(var uParam0)
{
	if (func_182(uParam0))
	{
		func_181(uParam0);
	}
}

void func_181(var uParam0)
{
	if (is_radio_retuning() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = get_player_radio_station_index();
			func_150(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_395(uParam0, 20) > 3f)
				{
					func_196(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_25(uParam0->f_81, 262144) || !func_25(uParam0->f_81, 1048576))
				{
					if (func_395(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_196(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_25(uParam0->f_82, 67108864))
				{
					if (func_395(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_196(uParam0, 85, 1, 0, 0);
						func_150(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_395(uParam0, 20) > 8f)
				{
					func_196(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_25(uParam0->f_81, 262144) || func_25(uParam0->f_82, 67108864))
			{
				if (!func_143(uParam0, 22))
				{
					func_190(uParam0, 22);
				}
			}
			if (func_143(uParam0, 22) && func_395(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_25(uParam0->f_81, 1048576))
					{
						func_196(uParam0, 84, 1, 0, 0);
						func_150(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_25(uParam0->f_82, 134217728))
					{
						func_196(uParam0, 85, 1, 0, 0);
						func_150(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_182(var uParam0)
{
	return uParam0->f_120;
}

void func_183(var uParam0, var uParam1)
{
	func_186(uParam0, 1000);
	if ((!is_entity_dead((*uParam1)[0], false) && !is_entity_dead((*uParam1)[1], false)) && !is_entity_dead((*uParam1)[2], false))
	{
		clear_ped_tasks_immediately((*uParam1)[0]);
		clear_ped_tasks_immediately((*uParam1)[1]);
		clear_ped_tasks_immediately((*uParam1)[2]);
	}
	func_184();
	func_161(uParam0);
}

void func_184()
{
	Global_20471 = 0;
	func_185();
}

void func_185()
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

void func_186(var uParam0, int iParam1)
{
	if (does_cam_exist(*uParam0))
	{
		destroy_cam(*uParam0, false);
	}
	if (iParam1 > 0)
	{
		render_script_cams(false, true, iParam1, true, false, 0);
	}
	else
	{
		render_script_cams(false, false, 3000, true, false, 0);
	}
}

void func_187(var uParam0)
{
	if (!uParam0->f_51[2])
	{
		if (!does_blip_exist(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = func_188(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!does_blip_have_gps_route(uParam0->f_36[2]))
		{
			set_blip_route(uParam0->f_36[2], true);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!does_blip_exist(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = func_188(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!does_blip_have_gps_route(uParam0->f_36[1]))
		{
			set_blip_route(uParam0->f_36[1], true);
		}
	}
	else
	{
		if (!does_blip_exist(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = func_188(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!does_blip_have_gps_route(uParam0->f_36[0]))
		{
			set_blip_route(uParam0->f_36[0], true);
		}
	}
}

int func_188(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(Param0);
	set_blip_scale(iVar0, func_159(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, bParam1);
	return iVar0;
}

void func_189()
{
	func_235(&(Local_260.f_55), 2);
	func_235(&(Local_260.f_55), 4);
	func_235(&(Local_260.f_55), 16);
	func_235(&(Local_260.f_55), 64);
	func_235(&(Local_260.f_55), 256);
	func_235(&(Local_260.f_55), 512);
	func_235(&(Local_260.f_55), 1024);
	func_235(&(Local_260.f_55), 2048);
	func_235(&(Local_260.f_55), 4096);
	func_235(&(Local_260.f_55), 1073741824);
	func_235(&uLocal_392, 2);
}

void func_190(var uParam0, int iParam1)
{
	func_191(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_191(int* iParam0)
{
	if (!func_17(iParam0))
	{
		func_107(iParam0);
	}
}

void func_192()
{
	set_model_as_no_longer_needed(joaat("stretch"));
	set_model_as_no_longer_needed(joaat("superd"));
	set_model_as_no_longer_needed(Local_262.f_45[0]);
	set_model_as_no_longer_needed(Local_262.f_45[1]);
	set_model_as_no_longer_needed(Local_262.f_45[2]);
	set_model_as_no_longer_needed(Local_262.f_45[3]);
	set_model_as_no_longer_needed(Local_262.f_45[4]);
	remove_anim_dict("oddjobs@taxi@gyn@cc@intro");
	remove_anim_dict("amb@world_human_stand_impatient@female@no_sign@exit");
	remove_anim_dict("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_193(var uParam0, bool bParam1)
{
	func_194(uParam0);
	if (bParam1)
	{
		if (!does_blip_exist(uParam0->f_9))
		{
			uParam0->f_9 = func_188(uParam0->f_17, 1);
		}
		else if (get_blip_alpha(uParam0->f_9) == 0)
		{
			set_gps_flags(1, 0f);
			set_blip_alpha(uParam0->f_9, 255);
			set_blip_coords(uParam0->f_9, uParam0->f_17);
			set_blip_route(uParam0->f_9, true);
		}
	}
}

void func_194(var uParam0)
{
	if (does_blip_exist(uParam0->f_8))
	{
		set_blip_route(uParam0->f_8, false);
		remove_blip(&(uParam0->f_8));
	}
}

void func_195(var uParam0)
{
	clear_player_has_damaged_at_least_one_ped(player_id());
	set_player_control(get_player_index(), true, 0);
	func_186(uParam0, 1000);
}

void func_196(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_267(uParam0, 16, 4f, 0);
		if (func_197(uParam0))
		{
			func_52();
		}
	}
	func_224(uParam0, iParam2, bParam3);
}

int func_197(var uParam0)
{
	struct<3> Var0;
	struct<6> Var1;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_54())
	{
		Var1 = { func_199() };
		if (!is_string_null_or_empty(&Var1))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (are_strings_equal(&Var1, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_198(&Var0);
			if (are_strings_equal(&Var1, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_199()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

bool func_200(var uParam0, var uParam1)
{
	return ((func_201((*uParam1)[0], uParam0) && func_201((*uParam1)[1], uParam0)) && func_201((*uParam1)[2], uParam0));
}

int func_201(int iParam0, var uParam1)
{
	if (is_vehicle_driveable(uParam1->f_4, false))
	{
		if (!is_ped_injured(iParam0))
		{
			if (is_ped_sitting_in_vehicle(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_300(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_300(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_202(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	func_221(uParam0, (*uParam1)[0]);
	func_221(uParam0, (*uParam1)[1]);
	func_221(uParam0, (*uParam1)[2]);
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (!is_ped_in_vehicle(uParam0->f_2, uParam0->f_4, false))
		{
			func_219(uParam0, 1);
			if (func_36())
			{
				set_player_control(get_player_index(), true, 0);
				func_183(uParam0, uParam1);
			}
		}
		else if (is_player_wanted_level_greater(get_player_index(), 0))
		{
			func_217(uParam0);
		}
		else
		{
			if (func_143(uParam0, 14))
			{
				func_161(uParam0);
				func_216(uParam0, uParam1, 0);
			}
			if (func_143(uParam0, 9))
			{
				func_150(uParam0, 9, 0);
				clear_prints();
				if (does_blip_exist(uParam0->f_8))
				{
					set_blip_alpha(uParam0->f_8, 255);
					set_blip_route(uParam0->f_8, true);
				}
			}
			if (!is_ped_injured((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((get_entity_speed(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (func_215(uParam0, (*uParam1)[iLocal_238]) > 50f || func_14(&iLocal_239) > 5f)
						{
							func_300(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (get_script_task_status((*uParam1)[iLocal_238], 713668775) != 1 || ((func_11(player_ped_id(), (*uParam1)[iLocal_238], 1) < 20f && func_214((*uParam1)[iLocal_238], uParam0->f_11, 1) <= 28f) && func_214(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_212(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						
						case 1:
							if (func_211(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_86)
								{
									iVar0 = func_210(uParam0, &uVar1);
									if (!is_entity_dead(iVar0, false))
									{
										task_leave_any_vehicle(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									clear_ped_tasks((*uParam1)[iVar3]);
									clear_sequence_task(&iVar2);
									open_sequence_task(&iVar2);
									switch (iVar3)
									{
										case 0:
											if (!is_ped_in_any_vehicle((*uParam1)[iVar3], false))
											{
												task_look_at_entity(0, uParam0->f_4, -1, 0, 2);
												task_stand_still(0, get_random_int_in_range(1750, 2250));
												task_enter_vehicle(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!is_ped_in_any_vehicle((*uParam1)[iVar3], false))
											{
												task_look_at_entity(0, uParam0->f_4, -1, 0, 2);
												task_enter_vehicle(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!is_ped_in_any_vehicle((*uParam1)[iVar3], false))
											{
												task_look_at_entity(0, uParam0->f_4, -1, 0, 2);
												task_stand_still(0, get_random_int_in_range(750, 1250));
												task_enter_vehicle(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									close_sequence_task(iVar2);
									task_perform_sequence((*uParam1)[iVar3], iVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!func_151(uParam0))
							{
								clear_ped_tasks((*uParam1)[0]);
								clear_ped_tasks((*uParam1)[1]);
								clear_ped_tasks((*uParam1)[2]);
							}
							else if ((get_script_task_status((*uParam1)[0], 242628503) != 1 && get_script_task_status((*uParam1)[0], 242628503) != 0) && func_215(uParam0, (*uParam1)[0]) > 8f)
							{
								clear_sequence_task(&(uParam0->f_243));
								open_sequence_task(&(uParam0->f_243));
								task_turn_ped_to_face_entity(0, uParam0->f_4, 0);
								task_play_anim(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								close_sequence_task(uParam0->f_243);
								task_perform_sequence((*uParam1)[0], uParam0->f_243);
							}
							break;
						
						case 2:
							if (bLocal_86)
							{
								if (func_11(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_209(uParam0, 1))
									{
										clear_ped_tasks_immediately((*uParam1)[0]);
										clear_ped_tasks_immediately((*uParam1)[1]);
										clear_ped_tasks_immediately((*uParam1)[2]);
										func_300(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_208(uParam0, uParam1);
							if (func_215(uParam0, (*uParam1)[0]) < fVar4 || func_36())
							{
								if (is_ped_in_vehicle(uParam0->f_2, uParam0->f_4, false))
								{
									if ((is_ped_in_any_vehicle((*uParam1)[0], false) && is_ped_in_any_vehicle((*uParam1)[1], false)) && is_ped_in_any_vehicle((*uParam1)[2], false))
									{
										func_194(uParam0);
										set_ped_config_flag((*uParam1)[0], 26, true);
										set_ped_config_flag((*uParam1)[1], 26, true);
										set_ped_config_flag((*uParam1)[2], 26, true);
										set_ped_config_flag((*uParam1)[0], 104, true);
										func_150(uParam0, 5, 0);
										clear_gps_flags();
										return 1;
									}
								}
							}
							else
							{
								if ((get_game_timer() % 1000) < 50)
								{
								}
								draw_debug_sphere(get_entity_coords((*uParam1)[0], true), fVar4, 0, 0, 255, 150);
							}
							if (func_207(uParam1))
							{
								clear_ped_tasks((*uParam1)[0]);
								clear_ped_tasks((*uParam1)[1]);
								clear_ped_tasks((*uParam1)[2]);
								func_300(uParam0, "Left Passenger", 8);
							}
							if ((func_206(uParam0, uParam1) || func_205(uParam0, uParam1)) || func_204(uParam0, uParam1))
							{
								if (!is_ped_in_any_vehicle((*uParam1)[2], false))
								{
									task_follow_nav_mesh_to_coord((*uParam1)[2], func_41(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 0.25f, false, 40000f);
									iLocal_238 = 2;
								}
								if (!is_ped_in_any_vehicle((*uParam1)[1], false))
								{
									task_follow_nav_mesh_to_coord((*uParam1)[1], func_41(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 0.25f, false, 40000f);
									iLocal_238 = 1;
								}
								if (!is_ped_in_any_vehicle((*uParam1)[0], false))
								{
									task_follow_nav_mesh_to_coord((*uParam1)[0], uParam0->f_11, 1f, 20000, 0.25f, false, 40000f);
									iLocal_238 = 0;
								}
								remove_blip(&(uParam0->f_8));
								uParam0->f_8 = func_203((*uParam1)[iLocal_238], 0, 0);
								func_107(&iLocal_239);
								uParam0->f_48 = 0;
								iLocal_79 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_300(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_300(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_203(int iParam0, bool bParam1, bool bParam2)
{
	return func_158(iParam0, !bParam1, bParam2);
}

int func_204(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_ped_injured((*uParam1)[iVar0]) && !is_ped_in_any_vehicle((*uParam1)[iVar0], false))
		{
			if (func_215(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_ped_injured((*uParam1)[iVar0]) && !is_ped_in_any_vehicle((*uParam1)[iVar0], false))
		{
			if (func_214(uParam0->f_4, uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_206(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_ped_injured((*uParam1)[iVar0]) && !is_ped_in_any_vehicle((*uParam1)[iVar0], false))
		{
			if (func_214((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(var uParam0)
{
	if ((!is_ped_injured((*uParam0)[0]) && !is_ped_injured((*uParam0)[1])) && !is_ped_injured((*uParam0)[2]))
	{
		if ((is_ped_in_any_vehicle((*uParam0)[0], false) || is_ped_in_any_vehicle((*uParam0)[1], false)) || is_ped_in_any_vehicle((*uParam0)[2], false))
		{
			if ((!is_ped_in_any_vehicle((*uParam0)[0], false) || !is_ped_in_any_vehicle((*uParam0)[1], false)) || !is_ped_in_any_vehicle((*uParam0)[2], false))
			{
				if (!func_17(&iLocal_242))
				{
					func_191(&iLocal_242);
				}
				else if (func_105(&iLocal_242) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_208(var uParam0, var uParam1)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (!is_ped_injured((*uParam1)[iLocal_238]))
		{
			if (func_10((*uParam1)[iLocal_238], 1) > 30f)
			{
				if (get_script_task_status((*uParam1)[iLocal_238], -1794415470) == 1 || get_script_task_status((*uParam1)[iLocal_238], 242628503) == 1)
				{
					func_300(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_209(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		iVar0[0] = get_ped_in_vehicle_seat(uParam0->f_4, 1, false);
		iVar0[1] = get_ped_in_vehicle_seat(uParam0->f_4, 2, false);
		iVar0[2] = get_ped_in_vehicle_seat(uParam0->f_4, 0, false);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (does_entity_exist(iVar0[iVar1]))
			{
				if (is_entity_dead(iVar0[iVar1], false))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((get_game_timer() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_210(var uParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		iVar0 = get_ped_in_vehicle_seat(uParam0->f_4, 1, false);
		if (does_entity_exist(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = get_ped_in_vehicle_seat(uParam0->f_4, 2, false);
			if (does_entity_exist(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = get_ped_in_vehicle_seat(uParam0->f_4, 0, false);
				if (does_entity_exist(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_211(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_entity_dead((*uParam1)[0], false))
	{
		if (!is_entity_occluded((*uParam1)[iLocal_238]) && func_10((*uParam1)[iLocal_238], 1) < fParam3)
		{
			if (!func_143(uParam0, 5))
			{
				func_267(uParam0, 5, 0, 0);
			}
		}
		else if (func_143(uParam0, 5))
		{
			func_150(uParam0, 5, 0);
		}
		if (((func_395(uParam0, 5) > IntToFloat(iParam2) && get_entity_speed(uParam0->f_4) < fParam5) && !is_entity_occluded((*uParam1)[iLocal_238])) || func_10((*uParam1)[iLocal_238], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_212(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = get_entity_bone_index_by_name(uParam0->f_4, "windscreen");
	Var2 = { get_world_position_of_entity_bone(uParam0->f_4, iVar4) };
	Var2 = { get_offset_from_entity_given_world_coords(uParam0->f_4, Var2) };
	Var2.f_1 = (Var2.f_1 + 1f);
	Var0 = { get_offset_from_entity_in_world_coords(uParam0->f_4, Var2) };
	Var1 = { get_offset_from_entity_in_world_coords(uParam0->f_3, 0f, 0.25f, 0.9f) };
	draw_debug_line(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			set_blocking_of_non_temporary_events((*uParam1)[0], true);
			set_blocking_of_non_temporary_events((*uParam1)[1], true);
			set_blocking_of_non_temporary_events((*uParam1)[2], true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_11(uParam0->f_4, (*uParam1)[iLocal_238], 0) <= fParam2 && !uParam0->f_142) && absf((Var0.f_2 - Var1.f_2)) < 5f)
			{
				iVar3 = func_213(&(uParam0->f_409), Var0, Var1, 0);
				if (iVar3 == 0)
				{
					iLocal_79 = 2;
				}
			}
			break;
		
		case 2:
			clear_prints();
			func_196(uParam0, 4, 1, 0, 1);
			clear_ped_tasks((*uParam1)[iLocal_238]);
			task_look_at_entity(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			clear_sequence_task(&(uParam0->f_243));
			open_sequence_task(&(uParam0->f_243));
			task_play_anim(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0f, false, false, false);
			task_turn_ped_to_face_entity(0, uParam0->f_4, 0);
			close_sequence_task(uParam0->f_243);
			task_perform_sequence((*uParam1)[iLocal_238], uParam0->f_243);
			return 1;
			break;
		
		case 3:
			iLocal_79 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_213(var uParam0, struct<3> Param1, struct<3> Param2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = start_shape_test_los_probe(Param1, Param2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = get_shape_test_result(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

float func_214(int iParam0, struct<3> Param1, bool bParam2)
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

float func_215(var uParam0, int iParam1)
{
	if (!is_entity_dead(iParam1, false))
	{
		if (func_151(uParam0))
		{
			return func_11(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_216(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (bParam2)
		{
			if (does_blip_exist(uParam0->f_8))
			{
				set_blip_alpha(uParam0->f_8, 0);
				set_blip_route(uParam0->f_8, false);
				func_160(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (does_blip_exist(uParam1->f_36[iVar0]))
					{
						set_blip_alpha(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				func_196(uParam0, 2, 1, 1, 0);
			}
			func_155(uParam0, 0, 0);
		}
		else if (does_blip_exist(uParam0->f_10))
		{
			remove_blip(&(uParam0->f_10));
			if (does_blip_exist(uParam0->f_8))
			{
				set_blip_alpha(uParam0->f_8, 255);
				set_blip_route(uParam0->f_8, true);
				func_160(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (does_blip_exist(uParam1->f_36[iVar0]))
					{
						set_blip_alpha(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_217(var uParam0)
{
	func_221(uParam0, uParam0->f_3);
	if (func_151(uParam0))
	{
		if (func_143(uParam0, 14))
		{
			func_161(uParam0);
			if (does_blip_exist(uParam0->f_10))
			{
				remove_blip(&(uParam0->f_10));
			}
		}
	}
	if (!func_143(uParam0, 9))
	{
		if (does_blip_exist(uParam0->f_8))
		{
			set_blip_alpha(uParam0->f_8, 0);
			set_blip_route(uParam0->f_8, false);
		}
		func_267(uParam0, 9, 0, 0);
		func_218("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_218(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	begin_text_command_print(sParam0);
	end_text_command_print(iParam1, true);
}

void func_219(var uParam0, bool bParam1)
{
	func_221(uParam0, uParam0->f_3);
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (!is_ped_in_vehicle(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_143(uParam0, 14))
			{
				if (func_54())
				{
					func_162(1);
				}
				func_220(uParam0, 11, 1);
				func_154(uParam0, 1);
				func_267(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_125(uParam0))
				{
					if ((get_game_timer() % 1000) < 50)
					{
					}
					if (is_ped_in_any_vehicle(uParam0->f_2, false))
					{
						if (func_395(uParam0, 15) > 5f)
						{
							func_267(uParam0, 15, 0f, 1);
						}
					}
					if (func_395(uParam0, 14) > 20f)
					{
						func_300(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_395(uParam0, 14) > 20f)
				{
					if (func_10(uParam0->f_4, 1) > 40f)
					{
						func_300(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_300(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_220(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_221(var uParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		if (!is_ped_injured(iParam1))
		{
			if (has_player_damaged_at_least_one_ped(player_id()))
			{
				if ((has_ped_been_damaged_by_weapon(iParam1, joaat("weapon_stungun"), 0) || has_ped_been_damaged_by_weapon(iParam1, 0, 2)) || has_ped_been_damaged_by_weapon(iParam1, 0, 1))
				{
					func_300(uParam0, "Passenger injured by player with weapon.", 14);
				}
				clear_player_has_damaged_at_least_one_ped(player_id());
			}
		}
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (is_vehicle_driveable(Local_260.f_4, false))
	{
		if (func_151(&Local_260))
		{
			if (!iLocal_346)
			{
				iVar0 = get_entity_bone_index_by_name(Local_260.f_4, "window_lf");
				iVar1 = get_entity_bone_index_by_name(Local_260.f_4, "window_lr");
				iVar2 = get_entity_bone_index_by_name(Local_260.f_4, "window_rf");
				iVar3 = get_entity_bone_index_by_name(Local_260.f_4, "window_rr");
				Local_230 = { get_world_position_of_entity_bone(Local_260.f_4, iVar0) };
				Local_230 = { get_offset_from_entity_given_world_coords(Local_260.f_4, Local_230) };
				Local_234 = { Local_230 };
				Local_230.f_2 = (Local_230.f_2 + 0.15f);
				Local_230.f_1 = (Local_230.f_1 - 0.15f);
				Local_231 = { get_world_position_of_entity_bone(Local_260.f_4, iVar1) };
				Local_231 = { get_offset_from_entity_given_world_coords(Local_260.f_4, Local_231) };
				Local_235 = { Local_231 };
				Local_231.f_2 = (Local_231.f_2 + 0.15f);
				Local_232 = { get_world_position_of_entity_bone(Local_260.f_4, iVar2) };
				Local_232 = { get_offset_from_entity_given_world_coords(Local_260.f_4, Local_232) };
				Local_236 = { Local_232 };
				Local_232.f_2 = (Local_232.f_2 + 0.15f);
				Local_232.f_1 = (Local_232.f_1 - 0.15f);
				Local_233 = { get_world_position_of_entity_bone(Local_260.f_4, iVar3) };
				Local_233 = { get_offset_from_entity_given_world_coords(Local_260.f_4, Local_233) };
				Local_237 = { Local_233 };
				Local_233.f_2 = (Local_233.f_2 + 0.15f);
				iLocal_346 = 1;
			}
		}
		else if (iLocal_346)
		{
			iLocal_346 = 0;
		}
	}
}

void func_223(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_41(Param1, 1f, -fParam2, -fParam2, -22f) };
	Var1 = { func_41(Param1, 1f, fParam2, fParam2, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var1.f_2 = (Var1.f_2 + 22f);
	if (!bParam3)
	{
		set_ped_non_creation_area(Var0, Var1);
		*uParam0 = add_scenario_blocking_area(Var0, Var1, false, true, true, true);
		clear_area_of_peds(Param1, fParam2, 0);
	}
	else
	{
		clear_ped_non_creation_area();
		remove_scenario_blocking_area(*uParam0, false);
	}
}

void func_224(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_52();
		func_267(uParam0, 16, 4f, 0);
		clear_prints();
	}
}

int func_225(var uParam0, int iParam1)
{
	if (!has_additional_text_loaded(2))
	{
		return 0;
	}
	func_232(12);
	if (func_25(uParam0->f_44, 8))
	{
		if (!func_25(uParam0->f_44, 128))
		{
			if (is_ped_jacking(player_ped_id()) && !func_25(uParam0->f_44, 256))
			{
				func_235(&(uParam0->f_44), 256);
			}
			if (func_25(uParam0->f_44, 256) && is_ped_in_any_vehicle(player_ped_id(), false))
			{
				func_196(uParam0, 135, 1, 0, 1);
				func_235(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_229(uParam0, iParam1))
	{
		if (func_10(uParam0->f_3, 1) < 35f)
		{
			if (!func_25(uParam0->f_44, 8))
			{
				task_turn_ped_to_face_entity(uParam0->f_3, player_ped_id(), 0);
				func_196(uParam0, 133, 1, 0, 1);
				func_235(&(uParam0->f_44), 8);
			}
		}
		if ((is_ped_injured(uParam0->f_3) || is_ped_fleeing(uParam0->f_3)) || func_10(uParam0->f_3, 1) > 400f)
		{
			func_300(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = get_vehicle_ped_is_in(uParam0->f_2, false);
		set_vehicle_has_strong_axles(uParam0->f_4, true);
		if (get_ped_in_vehicle_seat(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			add_vehicle_upsidedown_check(uParam0->f_4);
			func_227(uParam0);
			func_55(2, 0);
			bLocal_86 = true;
			func_191(&iLocal_82);
			return 1;
		}
		else
		{
			func_300(uParam0, "No Taxi", 21);
			func_226("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_226(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

void func_227(var uParam0)
{
	if (!is_entity_dead(uParam0->f_4, false))
	{
		if (func_228())
		{
		}
	}
}

int func_228()
{
	if (BitTest(get_random_int_in_range(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_229(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (is_vehicle_driveable(iVar0, false))
			{
				iVar1 = get_entity_model(iVar0);
				bVar2 = func_231(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (is_this_model_a_car(iVar1))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1, false) == player_ped_id())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (get_vehicle_max_number_of_passengers(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_25(uParam0->f_44, 64))
					{
						if (has_additional_text_loaded(2))
						{
							func_226("TX_VIP_DMGD", -1);
							if (func_230("TX_VIP_DMGD"))
							{
								func_235(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_25(uParam0->f_44, 32))
					{
						if (has_additional_text_loaded(2))
						{
							func_226("TX_VIP_CAR", -1);
							if (func_230("TX_VIP_CAR"))
							{
								func_235(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_25(uParam0->f_44, 16))
					{
						if (has_additional_text_loaded(2))
						{
							func_226("TX_VIP_SMALL", -1);
							if (func_230("TX_VIP_SMALL"))
							{
								func_235(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_23(&(uParam0->f_44), 16);
			func_23(&(uParam0->f_44), 64);
			func_23(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

bool func_230(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!is_vehicle_tyre_burst(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!is_vehicle_tyre_burst(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!is_vehicle_tyre_burst(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!is_vehicle_tyre_burst(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (is_this_model_a_car(get_entity_model(iParam0)))
	{
		iVar1 = 0;
		if (!is_vehicle_door_damaged(iParam0, 0))
		{
			iVar1++;
		}
		if (!is_vehicle_door_damaged(iParam0, 1))
		{
			iVar1++;
		}
		if (!is_vehicle_door_damaged(iParam0, 2))
		{
			iVar1++;
		}
		if (!is_vehicle_door_damaged(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

void func_232(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (is_xbox360_version() || func_234())
	{
		uVar0 = iParam0;
		network_set_rich_presence(8, &uVar0, 1, 1);
	}
	else if (is_ps3_version() || func_233())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		network_set_rich_presence_string(8, &cVar1);
	}
}

bool func_233()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

bool func_234()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

void func_235(var uParam0, int iParam1)
{
	func_236(uParam0, iParam1);
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_24(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_238()
{
	Local_165.f_0 = 0;
	func_255(34183, 34158, 1);
	func_255(33919, 33896, 1);
	func_255(33834, 33809, 1);
	func_255(33737, 33713, 1);
	func_255(33603, 33582, 1);
	func_255(33529, 33504, 1);
	func_255(33362, 33339, 1);
}

int func_239(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_240(var uParam0)
{
	if (does_entity_exist(uParam0->f_4))
	{
		if (func_242(uParam0->f_4))
		{
			func_241(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_242(int iParam0)
{
	if (!is_vehicle_driveable(iParam0, false))
	{
		return 1;
	}
	if (get_vehicle_engine_health(iParam0) < -100f)
	{
		return 1;
	}
	else if (is_vehicle_stuck_timer_up(iParam0, 0, 40000) || is_vehicle_stuck_timer_up(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_244(var uParam0)
{
	if (get_player_wanted_level(player_id()) > 0)
	{
		if (func_245(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_245(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_246(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_241(uParam0, 11);
	return 1;
}

int func_247(var uParam0)
{
	if (does_entity_exist(uParam0->f_4))
	{
		if (is_entity_in_water(uParam0->f_4) && !is_vehicle_on_all_wheels(uParam0->f_4))
		{
			if (!func_143(uParam0, 25))
			{
				func_267(uParam0, 25, 0, 0);
			}
			else if (func_395(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_143(uParam0, 25))
		{
			func_150(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_248(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_249(var uParam0)
{
	if (!is_entity_dead(uParam0->f_4, false))
	{
		if (does_vehicle_have_stuck_vehicle_check(uParam0->f_4))
		{
			if (is_vehicle_stuck_timer_up(uParam0->f_4, 0, 40000) || is_vehicle_stuck_timer_up(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_250(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_251(var uParam0)
{
	if (!is_entity_dead(uParam0->f_4, false))
	{
		if (is_vehicle_driveable(uParam0->f_4, false))
		{
			if (is_vehicle_stopped(uParam0->f_4))
			{
				if (func_245(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_252(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_253(var uParam0)
{
	if (does_entity_exist(uParam0->f_4))
	{
		if (func_254(uParam0->f_4))
		{
			func_241(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	if (!is_vehicle_driveable(iParam0, false))
	{
		return 1;
	}
	if (get_vehicle_engine_health(iParam0) == 0f)
	{
		if (!is_vehicle_driveable(iParam0, false))
		{
		}
		return 1;
	}
	else if (is_vehicle_stuck_timer_up(iParam0, 0, 40000) || is_vehicle_stuck_timer_up(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165.f_0 >= 16)
	{
		Local_165.f_0 = 16;
		return;
	}
	Local_165.f_1[Local_165.f_0 /*4*/] = 0;
	func_236(&(Local_165.f_1[Local_165.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_236(&(Local_165.f_1[Local_165.f_0 /*4*/]), 2);
	}
	Local_165.f_1[Local_165.f_0 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165.f_0 /*4*/].f_3 = iParam1;
	Local_165.f_0++;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_257(var uParam0)
{
	if (does_entity_exist(uParam0->f_3))
	{
		if ((is_ped_injured(uParam0->f_3) || is_entity_dead(uParam0->f_3, false)) || is_entity_on_fire(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_258()
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_259()
{
	if (!has_model_loaded(Local_262.f_41[0]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(Local_262.f_41[1]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(Local_262.f_41[2]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_339, 1000);
		return 0;
	}
	if (!has_scaleform_movie_loaded(iLocal_399))
	{
		return 0;
	}
	if (!func_260(&iLocal_339, 1))
	{
		func_261("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

int func_260(int iParam0, bool bParam1)
{
	if (!has_model_loaded(func_22()))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!has_anim_dict_loaded("gestures@m@standing@casual"))
		{
			func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!has_anim_dict_loaded("oddjobs@taxi@"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!has_anim_dict_loaded("oddjobs@towingcome_here"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!has_anim_dict_loaded("misscommon@response"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!has_additional_text_loaded(2))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_261(char* sParam0, int iParam1, int iParam2)
{
	if (get_game_timer() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = get_game_timer();
}

void func_262(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

void func_263(var uParam0)
{
	if (!is_ped_injured(uParam0->f_3))
	{
		uParam0->f_8 = func_203(uParam0->f_3, 0, 0);
		set_blip_name_from_text_file(uParam0->f_8, "TAXI_BLIP_PASS");
		set_gps_flags(1, 0f);
		set_blip_route(uParam0->f_8, true);
	}
}

int func_264(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3)
{
	uParam0->f_11 = { Param1 };
	uParam0->f_14 = { Param2 };
	func_42(uParam0->f_14, 0);
	clear_area_of_vehicles(uParam0->f_14, 25f, false, false, false, false, false, false, 0);
	if (does_entity_exist(Global_112096.f_225[0]))
	{
		(*uParam3)[0] = Global_112096.f_225[0];
		(*uParam3)[1] = Global_112096.f_225[1];
		(*uParam3)[2] = Global_112096.f_225[2];
		set_entity_as_mission_entity((*uParam3)[0], true, true);
		set_entity_as_mission_entity((*uParam3)[1], true, true);
		set_entity_as_mission_entity((*uParam3)[2], true, true);
	}
	else
	{
		(*uParam3)[0] = create_ped(26, uParam3->f_41[0], uParam0->f_11, -178.76f, true, true);
		(*uParam3)[1] = create_ped(26, uParam3->f_41[1], get_offset_from_entity_in_world_coords((*uParam3)[0], 0.5f, 0.5f, 0f), 21.77f, true, true);
		(*uParam3)[2] = create_ped(26, uParam3->f_41[1], get_offset_from_entity_in_world_coords((*uParam3)[0], 0.5f, -0.5f, 0f), -147.25f, true, true);
	}
	func_266(uParam0, uParam3[0]);
	uParam3->f_51[0] = 0;
	uParam3->f_51[1] = 0;
	uParam3->f_51[2] = 0;
	uParam3->f_12[0] = 0;
	uParam3->f_12[1] = 1;
	uParam3->f_12[2] = 2;
	if ((!is_ped_injured((*uParam3)[0]) && !is_ped_injured((*uParam3)[1])) && !is_ped_injured((*uParam3)[2]))
	{
		task_turn_ped_to_face_entity((*uParam3)[1], (*uParam3)[0], 0);
		task_turn_ped_to_face_entity((*uParam3)[2], (*uParam3)[0], 0);
		task_turn_ped_to_face_entity((*uParam3)[0], (*uParam3)[1], 0);
	}
	if (!is_ped_injured((*uParam3)[2]))
	{
		func_8(&(uParam0->f_244), 5, (*uParam3)[2], "TaxiPaulie", 0, 1);
		set_ambient_voice_name((*uParam3)[2], "TaxiPaulie");
		set_ped_config_flag((*uParam3)[2], 317, true);
	}
	if (!is_ped_injured((*uParam3)[1]))
	{
		func_8(&(uParam0->f_244), 4, (*uParam3)[1], "TaxiClyde", 0, 1);
		set_ambient_voice_name((*uParam3)[1], "TaxiClyde");
		set_ped_config_flag((*uParam3)[1], 317, true);
	}
	if (!is_ped_injured((*uParam3)[0]))
	{
		func_8(&(uParam0->f_244), 3, (*uParam3)[0], "TaxiDarren", 0, 1);
		set_ambient_voice_name((*uParam3)[0], "TaxiDarren");
		set_ped_config_flag((*uParam3)[0], 317, true);
		add_relationship_group("TAXI_Passenger", &(uParam0->f_413));
		set_relationship_between_groups(1, uParam0->f_413, joaat("player"));
		set_ped_relationship_group_hash((*uParam3)[0], uParam0->f_413);
		func_265((*uParam3)[1], uParam0->f_413);
		func_265((*uParam3)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_265(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_ped_relationship_group_hash(iParam0, iParam1);
	}
}

void func_266(var uParam0, var uParam1)
{
	if (!is_ped_injured(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_267(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_108(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_107(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_108(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_107(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_268()
{
	request_ptfx_asset();
	request_anim_dict("oddjobs@taxi@gyn@cc@hotbox");
}

void func_269()
{
	request_model(Local_262.f_45[0]);
	request_model(Local_262.f_45[1]);
	request_model(Local_262.f_45[2]);
	request_model(Local_262.f_45[3]);
	request_model(Local_262.f_45[4]);
	request_model(joaat("stretch"));
	request_model(joaat("superd"));
	request_anim_dict("oddjobs@taxi@gyn@cc@intro");
	request_anim_dict("amb@world_human_stand_impatient@female@no_sign@exit");
	request_anim_dict("amb@world_human_stand_impatient@female@no_sign@base");
	iLocal_399 = func_270();
}

int func_270()
{
	return request_scaleform_movie("MIDSIZED_MESSAGE");
}

void func_271()
{
	request_model(Local_262.f_41[0]);
	request_model(Local_262.f_41[1]);
	request_model(Local_262.f_41[2]);
	func_272(1);
}

void func_272(bool bParam0)
{
	request_model(func_22());
	if (bParam0)
	{
		request_anim_dict("gestures@m@standing@casual");
	}
	request_anim_dict("oddjobs@taxi@");
	request_anim_dict("oddjobs@towingcome_here");
	request_anim_dict("misscommon@response");
	request_additional_text("TAXI", 2);
	if (!func_25(Global_113386.f_19097, 128))
	{
		func_235(&(Global_113386.f_19097), 128);
	}
}

void func_273(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			clear_bit(&(uParam0->f_60[iVar0 /*3*/]), true);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			set_bit(&(uParam0->f_60[iVar0 /*3*/]), 1);
			clear_bit(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_274(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_275(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	if (!is_entity_dead(uParam0->f_2, false))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!is_entity_dead(uParam1->f_4[iVar0], false))
			{
				if (func_11(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					set_ped_as_no_longer_needed(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!is_entity_dead(uParam1->f_10, false))
	{
		if (func_11(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			set_vehicle_as_no_longer_needed(&(uParam1->f_10));
			set_vehicle_as_no_longer_needed(&(uParam1->f_11));
		}
	}
}

void func_276(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (get_player_wanted_level(player_id()) == 0)
		{
			if (bParam2)
			{
				if (func_395(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_196(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_196(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_267(uParam0, 10, 0f, 1);
				}
			}
			else if (func_395(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_196(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_196(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_267(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_395(uParam0, 10) > 30f)
		{
			if (!func_54())
			{
				if (uParam0->f_112)
				{
					func_196(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_196(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_267(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_25(uParam0->f_100, 64))
	{
		if (!func_17(&(Local_162[5 /*10*/].f_6)))
		{
			func_191(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_299(uParam0))
			{
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_298(uParam0, 1);
				func_296(5, uParam0);
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 1))
	{
		if (!func_17(&(Local_162[0 /*10*/].f_6)))
		{
			func_191(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_294(uParam0))
			{
				func_298(uParam0, 1);
				func_296(0, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 2))
	{
		if (!func_17(&(Local_162[1 /*10*/].f_6)))
		{
			func_191(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_293(uParam0))
			{
				func_298(uParam0, 1);
				func_296(1, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 2048))
	{
		if (!func_17(&(Local_162[8 /*10*/].f_6)))
		{
			if (does_entity_exist(uParam0->f_4))
			{
				uParam0->f_46 = get_entity_health(uParam0->f_4);
				func_191(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_105(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_292(uParam0))
			{
				func_298(uParam0, 1);
				func_296(8, uParam0);
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 128))
	{
		if (!func_17(&(Local_162[6 /*10*/].f_6)))
		{
			func_191(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_291(uParam0))
			{
				func_298(uParam0, 1);
				func_296(6, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 32))
	{
		if (!func_17(&(Local_162[4 /*10*/].f_6)))
		{
			func_191(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_290(uParam0))
			{
				func_298(uParam0, 1);
				func_296(4, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 256))
	{
		if (!func_17(&(Local_162[7 /*10*/].f_6)))
		{
			func_191(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_289(uParam0))
			{
				func_296(7, uParam0);
				func_298(uParam0, 1);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 8))
	{
		if (!func_17(&(Local_162[9 /*10*/].f_6)))
		{
			func_191(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			clear_player_has_damaged_at_least_one_ped(player_id());
		}
		else if (func_105(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_288(uParam0))
			{
				func_298(uParam0, 1);
				func_296(9, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 16384))
	{
		if (!func_17(&(Local_162[13 /*10*/].f_6)))
		{
			func_191(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_282(uParam0))
			{
				func_298(uParam0, 1);
				func_296(13, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 32768))
	{
		if (!func_17(&(Local_162[14 /*10*/].f_6)))
		{
			func_191(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_281(uParam0))
			{
				func_298(uParam0, 1);
				func_296(14, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 4096))
	{
		if (!func_17(&(Local_162[11 /*10*/].f_6)))
		{
			func_191(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_280(uParam0))
			{
				func_298(uParam0, 1);
				func_296(11, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 8192))
	{
		if (!func_17(&(Local_162[12 /*10*/].f_6)))
		{
			func_191(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_105(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_279(uParam0))
			{
				func_298(uParam0, 1);
				func_296(12, uParam0);
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_100, 4))
	{
		if (!func_17(&(Local_162[2 /*10*/].f_6)))
		{
			func_278(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_105(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_277(uParam0))
			{
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_298(uParam0, 1);
				func_296(2, uParam0);
				func_295(uParam0);
			}
		}
	}
}

int func_277(var uParam0)
{
	float fVar0;
	
	if (!is_ped_injured(uParam0->f_2))
	{
		if ((!is_ped_stopped(uParam0->f_2) && !func_17(&(Local_162[0 /*10*/].f_3))) && !func_17(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = get_entity_speed(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_191(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_105(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = get_entity_speed(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_104(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_104(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_278(int* iParam0, float fParam1)
{
	if (!func_17(iParam0))
	{
		func_108(iParam0, fParam1);
	}
}

int func_279(var uParam0)
{
	struct<3> Var0;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		Var0 = { get_entity_speed_vector(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !func_17(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[12 /*10*/].f_3)))
			{
				func_191(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_105(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_104(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_280(var uParam0)
{
	struct<3> Var0;
	
	if ((((((is_vehicle_driveable(uParam0->f_4, false) && !func_17(&(Local_162[0 /*10*/].f_3))) && !func_17(&(Local_162[1 /*10*/].f_3))) && !func_17(&(Local_162[5 /*10*/].f_3))) && !func_17(&(Local_162[9 /*10*/].f_3))) && !func_17(&(Local_162[7 /*10*/].f_3))) && !func_17(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { get_entity_speed_vector(uParam0->f_4, true) };
		if (absf(Var0.f_0) > 2.5f && !func_17(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[11 /*10*/].f_3)))
			{
				func_191(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (func_105(&(Local_162[11 /*10*/].f_3)) < 1.5f && (absf(fLocal_164) - absf(Var0.f_0)) < 0f)
			{
				func_104(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_105(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_104(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_281(var uParam0)
{
	if (((((is_vehicle_driveable(uParam0->f_4, false) && !func_17(&(Local_162[0 /*10*/].f_3))) && !func_17(&(Local_162[8 /*10*/].f_3))) && !func_17(&(Local_162[5 /*10*/].f_3))) && !func_17(&(Local_162[9 /*10*/].f_3))) && !func_17(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_17(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = get_closest_vehicle(get_entity_coords(uParam0->f_4, true), 10f, 0, 260);
			if (does_entity_exist(uParam0->f_5))
			{
				if ((get_entity_speed(uParam0->f_4) > 15f && func_11(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!is_entity_dead(uParam0->f_5, false) && !is_vehicle_seat_free(uParam0->f_5, -1, false)))
				{
					func_191(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_105(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_11(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !has_entity_been_damaged_by_any_vehicle(uParam0->f_5))
		{
			func_104(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_105(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_104(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (has_entity_been_damaged_by_any_vehicle(uParam0->f_5))
		{
			func_104(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_282(var uParam0)
{
	if (((is_vehicle_driveable(uParam0->f_4, false) && !func_17(&(Local_162[9 /*10*/].f_3))) && !func_17(&(Local_162[7 /*10*/].f_3))) && !func_17(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_283(uParam0->f_4) && get_entity_speed(uParam0->f_4) > 15f)
		{
			if (!func_17(&(Local_162[13 /*10*/].f_3)))
			{
				func_191(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_105(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_104(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_283(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	get_nth_closest_vehicle_node(get_entity_coords(iParam0, true), 1, &Var0, 1, 1077936128, 0);
	get_nth_closest_vehicle_node(get_entity_coords(iParam0, true), 2, &Var1, 1, 1077936128, 0);
	_get_point_on_road_side(Var0, -1, &Var2);
	fVar9 = vmag(Var2 - Var0);
	Var3 = { func_287((Var1.f_0 - Var0.f_0), (Var1.f_1 - Var0.f_1), 0f) };
	Var4 = { func_286(Var3, 0) * Vector(fVar9, fVar9, fVar9) };
	Var3 = { Var3 * Vector(2f, 2f, 2f) };
	Var5 = { Var0 - Var3 + Var4 };
	Var6 = { Var0 - Var3 - Var4 };
	Var7 = { Var1 + Var3 + Var4 };
	Var8 = { Var1 + Var3 - Var4 };
	Var8 = { Var8 };
	return func_284(get_entity_coords(iParam0, true), Var5, Var6, Var7);
}

int func_284(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	Param2.f_2 = 0f;
	Param3.f_2 = 0f;
	Var0 = { func_287(Param2 - Param1) };
	Var1 = { func_287(Param3 - Param1) };
	fVar2 = func_285(Param0, Var0);
	fVar3 = func_285(Param1, Var0);
	fVar4 = func_285(Param2, Var0);
	fVar5 = func_285(Param0, Var1);
	fVar6 = func_285(Param1, Var1);
	fVar7 = func_285(Param3, Var1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_285(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_286(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam1)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_287(struct<3> Param0)
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

int func_288(var uParam0)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (get_ped_in_vehicle_seat(uParam0->f_4, -1, false) == player_ped_id())
		{
			if (has_player_damaged_at_least_one_ped(player_id()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289(var uParam0)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (get_ped_in_vehicle_seat(uParam0->f_4, -1, false) == player_ped_id())
		{
			if (is_entity_upsidedown(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (get_entity_roll(uParam0->f_4) <= -145f || get_entity_roll(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (get_entity_roll(uParam0->f_4) <= 35f && get_entity_roll(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_290(var uParam0)
{
	int iVar0;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		iVar0 = get_time_since_player_drove_on_pavement(player_id());
		if (iVar0 == 0)
		{
			if (!func_17(&(Local_162[4 /*10*/].f_3)))
			{
				func_191(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_105(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_104(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_291(var uParam0)
{
	int iVar0;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		iVar0 = get_time_since_player_drove_against_traffic(player_id());
		if (iVar0 == 0)
		{
			if (!func_17(&(Local_162[6 /*10*/].f_3)))
			{
				func_191(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_105(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_104(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_292(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (has_entity_collided_with_anything(uParam0->f_4))
		{
			iVar0 = get_entity_health(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			clear_entity_last_damage_entity(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_196(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_196(uParam0, 72, 1, 0, 1);
				}
				func_104(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_293(var uParam0)
{
	struct<3> Var0;
	
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		Var0 = { get_entity_speed_vector(uParam0->f_4, true) };
		if (absf(Var0.f_0) > 3f && !func_17(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[1 /*10*/].f_3)))
			{
				func_191(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_105(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_104(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_294(var uParam0)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (!is_vehicle_on_all_wheels(uParam0->f_4) && is_entity_in_air(uParam0->f_4))
		{
			if (!func_17(&(Local_162[0 /*10*/].f_3)))
			{
				func_191(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_105(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_104(&(Local_162[0 /*10*/].f_3));
				func_107(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_295(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_17(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_107(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_267(uParam0, 10, 0f, 1);
	clear_player_has_damaged_at_least_one_ped(player_id());
}

void func_296(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_297(uParam1, iParam0);
	func_104(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_297(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_298(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_299(var uParam0)
{
	if (is_vehicle_driveable(uParam0->f_4, false))
	{
		if (get_entity_speed(uParam0->f_4) > 25f)
		{
			if (!func_17(&(Local_162[5 /*10*/].f_3)))
			{
				func_191(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_105(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_104(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_104(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_300(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_184();
	func_418(2);
	Var0 = { func_322() };
	if ((!is_string_null_or_empty(&Var0) && func_54()) && !are_strings_equal(&Var0, "NULL"))
	{
	}
	else
	{
		clear_prints();
		clear_help(true);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!is_entity_dead(uParam0->f_3, false))
		{
			if (!func_125(uParam0))
			{
				if (is_entity_playing_anim(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					stop_anim_task(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (is_entity_playing_anim(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					stop_anim_task(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (is_entity_playing_anim(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					stop_anim_task(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_267(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_320(uParam0, &Var0);
			}
			else if (!is_ped_injured(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_125(uParam0))
			{
				if (is_vehicle_stopped(uParam0->f_4))
				{
					func_316(uParam0, 4096, 0);
				}
				else
				{
					func_316(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_320(uParam0, &Var0);
			}
			else if (!is_ped_injured(uParam0->f_3))
			{
				func_318(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			set_player_wanted_level(player_id(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_320(uParam0, &Var0);
			set_player_wanted_level(player_id(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_320(uParam0, &Var0);
			set_player_wanted_level(player_id(), 1, false);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_55(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_320(uParam0, &Var0);
			}
			else if (!is_ped_injured(uParam0->f_3))
			{
				func_318(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_316(uParam0, 0, 0);
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_55(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_320(uParam0, &Var0);
			}
			else if (!is_ped_injured(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_55(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_320(uParam0, &Var0);
			}
			else if (!is_ped_injured(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_315(&Var0);
			func_301(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_320(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_320(uParam0, &Var0);
				}
			}
			else if (!is_ped_injured(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_55(3, 0);
		}
		func_267(uParam0, 3, 0f, 1);
	}
}

int func_301(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_302(sParam2, iParam3, 0);
}

int func_302(char* sParam0, int iParam1, bool bParam2)
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
					func_185();
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
		if (func_313(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_312();
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
			clear_bit(&Global_8138, false);
			if (bParam2)
			{
				func_311();
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
				if (func_310())
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
			if (func_34())
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
			func_309();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_308();
		func_303();
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
		func_185();
	}
	return 0;
}

void func_303()
{
	if (!func_304())
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

int func_304()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_307())
	{
		return 0;
	}
	if (func_305(player_id()))
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

bool func_305(int iParam0)
{
	return func_306(iParam0, 20);
}

var func_306(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_307()
{
	return -1;
}

void func_308()
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

void func_309()
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

int func_310()
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

void func_311()
{
	if (func_80(14))
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
		Global_20266 = func_101();
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

void func_312()
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

bool func_313(int iParam0, int iParam1)
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

void func_314(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
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

void func_315(char* sParam0)
{
	switch (func_3(player_ped_id()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_316(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!is_entity_dead(uParam0->f_3, false))
	{
		set_blocking_of_non_temporary_events(uParam0->f_3, false);
		clear_entity_last_damage_entity(uParam0->f_3);
		set_ped_flee_attributes(uParam0->f_3, 3, false);
		set_ped_combat_attributes(uParam0->f_3, 17, true);
		clear_ped_tasks(uParam0->f_3);
		if ((func_114(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_119(uParam0->f_29)) && !bParam2)
		{
			func_317(uParam0);
		}
		else
		{
			set_ped_flee_attributes(uParam0->f_3, 1024, true);
			set_ped_flee_attributes(uParam0->f_3, 131072, true);
			open_sequence_task(&iVar0);
			task_leave_any_vehicle(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				task_wander_standard(0, 40000f, 0);
			}
			else
			{
				task_smart_flee_ped(0, player_ped_id(), 1000f, -1, false, false);
			}
			task_set_blocking_of_non_temporary_events(0, false);
			close_sequence_task(iVar0);
			task_perform_sequence(uParam0->f_3, iVar0);
			clear_sequence_task(&iVar0);
		}
		set_ped_keep_task(uParam0->f_3, true);
	}
}

void func_317(var uParam0)
{
	int iVar0;
	
	if (!is_entity_dead(uParam0->f_3, false))
	{
		if (func_43(func_44(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				set_entity_heading(uParam0->f_3, 84.9058f);
				set_ped_keep_task(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				set_entity_heading(uParam0->f_3, 68.3138f);
				set_ped_keep_task(uParam0->f_3, true);
			}
			else
			{
				task_wander_standard(uParam0->f_3, 40000f, 0);
			}
		}
		else
		{
			clear_ped_tasks(uParam0->f_3);
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			task_leave_any_vehicle(0, 0, 0);
			task_set_blocking_of_non_temporary_events(0, false);
			task_follow_nav_mesh_to_coord(0, uParam0->f_29, 1f, -1, 0.25f, false, 40000f);
			if (uParam0->f_411 == 2)
			{
				task_start_scenario_in_place(0, "WORLD_HUMAN_AA_SMOKE", 0, false);
			}
			else if (uParam0->f_411 == 0)
			{
				task_climb_ladder(0, 1);
				task_follow_nav_mesh_to_coord(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 0.25f, false, 40000f);
				task_achieve_heading(0, 151.7794f, 0);
				task_start_scenario_in_place(0, "WORLD_HUMAN_SMOKING_POT", 0, false);
			}
			else if (uParam0->f_411 == 4)
			{
				task_use_nearest_scenario_to_coord(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				task_use_nearest_scenario_to_coord(0, uParam0->f_29, 15f, 20000);
				task_wander_standard(0, 40000f, 0);
			}
			else
			{
				task_play_anim(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, false, false, false);
				task_play_anim(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			if (does_scenario_exist_in_area(uParam0->f_29, 15f, true))
			{
				task_use_nearest_scenario_to_coord(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				task_wander_standard(0, 40000f, 0);
			}
			close_sequence_task(iVar0);
			task_perform_sequence(uParam0->f_3, iVar0);
			clear_sequence_task(&iVar0);
		}
		set_ped_keep_task(uParam0->f_3, true);
	}
}

void func_318(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	play_ped_ambient_speech_with_voice_native(iParam0, sParam1, sParam2, func_319(iParam3), false);
}

int func_319(int iParam0)
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

void func_320(var uParam0, char* sParam1)
{
	if (func_321(uParam0))
	{
		func_301(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_321(var uParam0)
{
	if (!is_entity_dead(uParam0->f_3, false))
	{
		if (func_11(player_ped_id(), uParam0->f_3, 1) < 40f && !is_entity_occluded(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_322()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = get_current_scripted_conversation_line();
		iVar1 = (iVar1 + Global_22615);
		if (iVar1 > -1)
		{
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_323(var uParam0)
{
	return uParam0->f_118;
}

void func_324()
{
	func_353(&Local_260);
	if (func_352(&Local_260, &Local_348))
	{
		switch (Local_348.f_27)
		{
			case 0:
				if (Local_260.f_410 == 9)
				{
					if (!func_141(&Local_260))
					{
						if (func_351("TAXI_OBJ_CC1") || does_blip_exist(Local_262.f_36[2]))
						{
							Local_348.f_27++;
						}
						else if (func_174(&Local_260) != 10)
						{
							func_196(&Local_260, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_174(&Local_260) > 10 && func_174(&Local_260) != 15) && !func_141(&Local_260))
				{
					func_196(&Local_260, 15, 1, 0, 0);
					if (bLocal_347)
					{
					}
					func_190(&Local_260, 7);
				}
				break;
			
			case 2:
				if (!Local_262.f_66)
				{
					Local_262.f_66 = 1;
					bLocal_248 = true;
				}
				if (func_114(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					Local_348.f_27++;
				}
				if (func_395(&Local_260, 11) > 17f || func_114(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 700f)
				{
					func_196(&Local_260, 95, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((get_game_timer() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_174(&Local_260) > 10 && func_174(&Local_260) != 16) && !func_141(&Local_260))
				{
					func_196(&Local_260, 16, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				break;
			
			case 4:
				if (func_114(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					Local_348.f_27++;
				}
				if (func_395(&Local_260, 11) > 8f || func_114(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 700f)
				{
					func_196(&Local_260, 94, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((get_game_timer() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_395(&Local_260, 11) > 20f || func_114(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_251)
					{
						iLocal_251 = 1;
					}
					if (!bLocal_249)
					{
						func_196(&Local_260, 96, 1, 0, 0);
						bLocal_249 = true;
						if (bLocal_347)
						{
						}
					}
				}
				else if ((get_game_timer() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_395(&Local_260, 18) > get_random_float_in_range(8f, 16f))
				{
				}
				break;
			}
	}
	func_325(&Local_260, &uLocal_351, &Local_348, bLocal_347);
}

int func_325(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_333(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_143(uParam0, 2))
	{
		if (func_332(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((get_game_timer() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_331(uParam0))
				{
					uParam2->f_7 = { func_330(uParam1) };
					func_301(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_54())
				{
					uParam2->f_13 = { func_199() };
					if (are_strings_equal(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_236(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_328(uParam1);
					func_267(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_142(uParam0))
				{
					if (func_54())
					{
						func_267(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_327() };
						if (get_player_wanted_level(get_player_index()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_54())
				{
					uParam2->f_19 = { func_322() };
				}
				else
				{
					func_236(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_328(uParam1);
					func_267(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_143(uParam0, 14) && !func_54()) && !func_142(uParam0)) && func_395(uParam0, 18) > 1f)
				{
					func_267(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_54())
				{
					if (func_395(uParam0, 18) > 1f)
					{
						if (!is_string_null_or_empty(&(uParam2->f_1)))
						{
							func_326(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_54())
				{
					func_236(&(uParam2->f_26), round(pow(2f, to_float(uParam2->f_27))));
					uParam2->f_27++;
					func_328(uParam1);
					func_267(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_326(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_302(sParam2, iParam4, 0);
}

struct<6> func_327()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar1 = get_current_scripted_conversation_line();
		iVar1 = (iVar1 + Global_22615);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (does_text_label_exist(&(Global_20473[iVar2 /*6*/])))
			{
				return Global_20473[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (does_text_label_exist(&(Global_20473[iVar3 /*6*/])))
					{
						return Global_20473[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_20473[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_328(var uParam0)
{
	int iVar0;
	
	iVar0 = func_329(uParam0);
	if (iVar0 > -1)
	{
		func_23(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_23(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_235(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_140(), 24);
	}
}

int func_329(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_25((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_330(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_25((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_235(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_331(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_178("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_178("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_178("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_178("TX_OBJ_GYB_DO", 0, 0) || func_178("TAXI_OBJ_GYB", 0, 0)) || func_178("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_178("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_178("TX_OBJ_CYI_DO", 0, 0) || func_178("TAXI_OBJ_CYI_01", 0, 0)) || func_178("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_178("TX_OBJ_GYN_DO", 0, 0) || func_178("TAXI_OBJ_GYN", 0, 0)) || func_178("TAXI_OBJ_GYN_TG", 0, 0)) || func_178("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_178("TAXI_OBJ_CC1", 0, 0) || func_178("TAXI_OBJ_CC2", 0, 0)) || func_178("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_178("TAXI_OBJ_FTC1", 0, 0) || func_178("TAXI_OBJ_FTC2", 0, 0)) || func_178("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_178("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_178("TAXI_OBJ_GETRUN", 0, 0) || func_178("TAXI_OBJ_DRIVE", 0, 0)) || func_178("TAXI_OBJ_RETURN", 0, 0)) || func_178("TAXI_OBJ_POL", 0, 0)) || func_178("TAXI_OBJ_RUNOUT", 0, 0)) || func_178("TAXI_OBJ_POL", 0, 0));
}

int func_332(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_25((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_333(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_331(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_143(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_174(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_348(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_54())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_347(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_344(uParam0, Var0, func_346(uParam0, 2));
				}
				if (func_25(uParam0->f_98, 4))
				{
					func_267(uParam0, 16, 0, 0);
					func_224(uParam0, 0, 0);
				}
				func_160(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_395(uParam0, 16) > 1f)
				{
					func_162(1);
					if (uParam0->f_411 == 9)
					{
						func_218("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_218("TAXI_VIP_RETURN", 7500, 1);
					}
					func_267(uParam0, 16, 0, 0);
					func_224(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 1, 8);
				}
				else if (!is_ped_injured(uParam0->f_3))
				{
					func_318(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_395(uParam0, 16) > func_159(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_54()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_174(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_347(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_348(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_301(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_196(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_267(uParam0, 16, 0, 0);
				func_196(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!func_25(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_350(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_347(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_267(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_218("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_218("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!does_blip_exist(uParam0->f_9))
					{
						uParam0->f_9 = func_188(uParam0->f_17, 1);
					}
					else if (get_blip_alpha(uParam0->f_9) == 0)
					{
						set_blip_alpha(uParam0->f_9, 255);
						set_blip_coords(uParam0->f_9, uParam0->f_17);
						set_blip_route(uParam0->f_9, true);
					}
				}
				func_196(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_198(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_318(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!does_blip_exist(uParam0->f_9))
					{
						uParam0->f_9 = func_188(uParam0->f_17, 1);
					}
					else if (get_blip_alpha(uParam0->f_9) == 0)
					{
						set_blip_alpha(uParam0->f_9, 255);
						set_blip_coords(uParam0->f_9, uParam0->f_17);
						set_blip_route(uParam0->f_9, true);
					}
				}
				func_196(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_343(uParam0, 33554432, Var0, "", 1, 8);
				func_267(uParam0, 16, 0, 0);
				func_196(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_54())
				{
					func_342(uParam0, 0);
					func_235(&(uParam0->f_44), 4);
					func_267(uParam0, 16, 0, 0);
					func_196(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_198(&Var0);
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 11, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_395(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_198(&Var0);
					}
					func_340(Var0, uParam1);
					func_235(&(uParam0->f_81), 67108864);
					func_267(uParam0, 16, 0, 0);
					func_267(uParam0, 11, 0, 0);
					func_224(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_395(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_198(&Var0);
						}
					}
					func_340(Var0, uParam1);
					func_267(uParam0, 11, 0, 0);
					func_267(uParam0, 16, 0, 0);
					func_224(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_198(&Var0);
				}
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_198(&Var0);
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_198(&Var0);
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_198(&Var0);
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 11, 0, 0);
				func_224(uParam0, 0, 0);
				func_235(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_339(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_339(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				func_340(Var0, uParam1);
				func_348(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 6, 0f, 1);
				func_224(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_339(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					func_339(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				func_340(Var0, uParam1);
				func_348(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 6, 0f, 1);
				func_224(uParam0, 0, 0);
				break;
			
			case 12:
				func_218("TAXI_OBJ_GYB", 3500, 1);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_218("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_218("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_218("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_25(uParam0->f_98, 268435456))
				{
					func_218("TAXI_OBJ_CYI_01", 7500, 1);
					func_235(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_198(&Var0);
				func_340(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_198(&Var0);
				func_340(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_198(&Var0);
				func_340(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 33:
				func_218("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_25(uParam0->f_82, 8192))
				{
					if (func_395(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_198(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_340(Var0, uParam1);
						}
						else
						{
							func_347(uParam0, &Var0, 0, 0, 8);
						}
						func_235(&(uParam0->f_82), 8192);
						func_267(uParam0, 16, 0, 0);
						func_267(uParam0, 11, 0, 0);
						func_224(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_25(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_198(&Var0);
					func_347(uParam0, &Var0, 0, 0, 8);
					func_235(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_25(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_198(&Var0);
					func_347(uParam0, &Var0, 0, 0, 8);
					func_235(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_224(uParam0, 0, 0);
				break;
			
			case 139:
				func_218("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_196(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = get_random_int_in_range(0, 120);
				if (!func_25(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_235(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = get_random_int_in_range(0, 100);
				if (!func_25(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_235(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_218("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_224(uParam0, 0, 0);
				func_196(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_54())
				{
					func_218("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_224(uParam0, 0, 0);
					func_196(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_218("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_224(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_25(uParam0->f_81, 1))
				{
					func_338(uParam0, 1, Var0, "_sick1", 8);
					func_23(&(uParam0->f_81), 2);
				}
				else if (!func_25(uParam0->f_81, 2))
				{
					func_338(uParam0, 2, Var0, "_sick2", 8);
					func_23(&(uParam0->f_81), 1);
				}
				func_348(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_25(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_25(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_235(&(uParam0->f_81), 2097152);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_267(uParam0, 16, 0, 0);
				func_348(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_224(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_348(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_348(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_348(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_25(uParam0->f_81, 4))
				{
					func_338(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_25(uParam0->f_81, 8))
				{
					func_338(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_338(uParam0, 8, Var0, "_turns3", 8);
					func_23(&(uParam0->f_81), 4);
					func_23(&(uParam0->f_81), 8);
				}
				func_348(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_337(uParam0))
				{
					func_344(uParam0, Var0, func_346(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!is_ped_injured(uParam0->f_3))
					{
						func_318(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					func_350(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_301(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_350(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_350(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				func_348(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_25(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 128);
					func_23(&(uParam0->f_83), 256);
					func_267(uParam0, 16, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 256);
					func_23(&(uParam0->f_83), 512);
					func_267(uParam0, 16, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 512);
					func_23(&(uParam0->f_83), 128);
					func_267(uParam0, 16, 0, 0);
				}
				func_224(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_25(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						func_198(&Var0);
					}
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 1);
					func_23(&(uParam0->f_83), 2);
					func_267(uParam0, 16, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						func_198(&Var0);
					}
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_23(&(uParam0->f_83), 4);
					}
					else
					{
						func_23(&(uParam0->f_83), 1);
					}
					func_267(uParam0, 16, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						func_198(&Var0);
					}
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 4);
					func_23(&(uParam0->f_83), 1);
					func_267(uParam0, 16, 0, 0);
				}
				func_348(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_25(uParam0->f_81, 4096))
				{
					func_343(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!func_25(uParam0->f_81, 8192))
				{
					func_343(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				func_348(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_25(uParam0->f_81, 16384))
				{
					func_343(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!func_25(uParam0->f_81, 32768))
				{
					func_343(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				func_348(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_25(uParam0->f_82, 8))
					{
						func_336(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_25(uParam0->f_82, 16))
					{
						func_336(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_25(uParam0->f_82, 32))
					{
						func_336(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_348(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_224(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					func_350(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_348(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_267(uParam0, 16, 0, 0);
					func_224(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_348(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_348(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_25(uParam0->f_81, 65536))
				{
					func_343(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_25(uParam0->f_81, 131072))
				{
					func_343(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_224(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_337(uParam0))
				{
					func_344(uParam0, Var0, func_346(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!is_ped_injured(uParam0->f_3))
					{
						func_318(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_25(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_198(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 8);
					func_23(&(uParam0->f_83), 16);
					func_267(uParam0, 16, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_198(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 16);
					func_23(&(uParam0->f_83), 32);
					func_267(uParam0, 16, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_198(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_23(&(uParam0->f_83), 64);
					}
					else
					{
						func_23(&(uParam0->f_83), 8);
					}
					func_267(uParam0, 16, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_198(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_235(&(uParam0->f_83), 64);
					func_23(&(uParam0->f_83), 8);
					func_267(uParam0, 16, 0, 0);
				}
				func_348(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_54())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_347(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_344(uParam0, Var0, func_346(uParam0, 65));
					func_224(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_54())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_347(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_344(uParam0, Var0, func_346(uParam0, 66));
					func_224(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_54())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								func_348(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								func_348(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								func_350(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								func_348(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_267(uParam0, 16, 0, 0);
								func_224(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									func_347(uParam0, &Var0, 0, 0, 8);
									func_267(uParam0, 16, 0, 0);
									func_267(uParam0, 11, 0, 0);
									func_224(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_198(&Var0);
									func_347(uParam0, &Var0, 0, 0, 8);
									func_267(uParam0, 16, 0, 0);
									func_267(uParam0, 11, 0, 0);
									func_224(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_347(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_196(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_348(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_25(uParam0->f_82, 1))
				{
					func_336(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_25(uParam0->f_82, 2))
				{
					func_336(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_25(uParam0->f_82, 4))
				{
					func_336(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_224(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				func_350(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!is_ped_injured(uParam0->f_3))
				{
					func_318(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_267(uParam0, 16, 0, 0);
				func_348(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_337(uParam0))
				{
					func_344(uParam0, Var0, func_346(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!is_ped_injured(uParam0->f_3))
					{
						func_318(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_335(uParam0, Var0, 8);
				}
				func_348(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_25(uParam0->f_83, 1024))
				{
					func_235(&(uParam0->f_83), 1024);
					func_267(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_198(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 2048))
				{
					func_235(&(uParam0->f_83), 2048);
					func_267(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_198(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_25(uParam0->f_83, 4096))
				{
					func_235(&(uParam0->f_83), 4096);
					func_267(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_198(&Var0);
					func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_224(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_25(uParam0->f_82, 1024))
				{
					func_336(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_23(&(uParam0->f_82), 2048);
				}
				else if (!func_25(uParam0->f_82, 2048))
				{
					func_336(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_224(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_348(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				else if (!is_ped_injured(uParam0->f_3))
				{
					func_318(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_337(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						func_347(uParam0, &Var0, 0, 0, 8);
						func_196(uParam0, 52, 1, 0, 0);
						func_267(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						func_347(uParam0, &Var0, 0, 0, 8);
						func_267(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					func_350(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					func_267(uParam0, 16, 0, 0);
					func_224(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_348(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_267(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (get_player_wanted_level(get_player_index()) >= 1)
				{
					func_218("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_224(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_25(uParam0->f_81, 262144))
				{
					func_343(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_25(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_343(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_343(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_348(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_25(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_334(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_25(uParam0->f_82, 134217728))
				{
					func_334(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_348(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 100:
				func_218("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_224(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_198(&Var0);
				}
				func_235(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_198(&Var0);
				}
				func_235(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_198(&Var0);
				}
				func_235(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_25(uParam0->f_82, 65536))
				{
					if (func_395(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_198(&Var0);
						func_340(Var0, uParam1);
						func_235(&(uParam0->f_82), 65536);
						func_267(uParam0, 16, 0, 0);
						func_267(uParam0, 11, 0, 0);
						func_224(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_25(uParam0->f_82, 131072))
				{
					if (func_395(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_198(&Var0);
						func_340(Var0, uParam1);
						func_235(&(uParam0->f_82), 131072);
						func_267(uParam0, 16, 0, 0);
						func_267(uParam0, 11, 0, 0);
						func_224(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_25(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_235(&(uParam0->f_82), 8388608);
				}
				else if (!func_25(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_235(&(uParam0->f_82), 16777216);
				}
				else if (!func_25(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_235(&(uParam0->f_82), 33554432);
				}
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					func_350(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_198(&Var0);
					func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_347(uParam0, &Var0, 0, 0, 8);
				}
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 11, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 11, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_340(Var0, uParam1);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 11, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				func_350(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_349(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_196(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_235(&(uParam0->f_81), 2097152);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_198(&Var0);
				func_340(Var0, uParam1);
				func_235(&(uParam0->f_81), 67108864);
				func_267(uParam0, 16, 0, 0);
				func_267(uParam0, 11, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_25(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_343(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!is_ped_injured(uParam0->f_3))
					{
						func_318(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_196(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_25(uParam0->f_81, 268435456))
				{
					func_343(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_196(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_218("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_224(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_25(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_343(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!is_ped_injured(uParam0->f_3))
						{
							func_318(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_343(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_196(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_218("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_224(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_301(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_267(uParam0, 16, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_25(uParam0->f_81, 16777216))
				{
					func_343(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_224(uParam0, 0, 0);
				break;
			
			case 88:
				func_218("TAXI_TIEFLEE", 7500, 1);
				func_224(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_25(uParam0->f_98, 536870912))
				{
					func_218("TAXI_OBJ_CYI_1B", 7500, 1);
					func_235(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_224(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_198(&Var0);
				func_347(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_347(uParam0, &Var0, 0, 0, 8);
				func_224(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_347(uParam0, &Var0, 0, 0, 8);
				func_224(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_347(uParam0, &Var0, 0, 0, 8);
				func_224(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_347(uParam0, &Var0, 1, 0, 8);
				func_196(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_218("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_196(uParam0, 0, 0, 0, 0);
				func_224(uParam0, 0, 0);
				break;
			}
	}
}

void func_334(var uParam0, int iParam1, struct<3> Param2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_235(&(uParam0->f_82), iParam1);
	func_267(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_198(&Param2);
	}
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_335(var uParam0, struct<6> Param1, int iParam2)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_25(uParam0->f_82, 64))
	{
		func_235(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_25(uParam0->f_82, 128))
	{
		func_235(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, get_random_int_in_range(1, 3), 24);
	}
	func_349(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_267(uParam0, 16, 0, 0);
}

void func_336(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_235(&(uParam0->f_82), iParam1);
	func_267(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_198(&Param2);
		}
	}
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

int func_337(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_338(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_235(&(uParam0->f_81), iParam1);
	func_267(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam7, 0, 0, 0);
}

void func_339(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_245(*uParam0, iVar1))
		{
			func_236(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_198(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_340(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_341(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_235(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_341(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (is_string_null_or_empty(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_342(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_218("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_218("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_218("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_218("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_218("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_218("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_218("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_218("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_218("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_218("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_218("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_218("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_218("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_343(var uParam0, int iParam1, struct<3> Param2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_235(&(uParam0->f_81), iParam1);
	func_267(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam6, 24);
	if (bParam7)
	{
		func_198(&Param2);
	}
	func_301(&(uParam0->f_244), uParam0->f_144, &Param2, iParam8, 0, 0, 0);
}

void func_344(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_267(uParam0, 16, 0, 0);
	func_267(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!is_ped_injured(uParam0->f_3))
	{
		interrupt_conversation(uParam0->f_3, &cParam1, func_345(uParam0));
	}
}

char* func_345(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_346(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_347(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_267(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_267(uParam0, 17, 0f, 1);
	}
	func_224(uParam0, iParam2, 0);
	return func_301(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_348(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0)
	{
		if (func_25(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_25(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_25(*uParam2, 4))
		{
			if (!func_25(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 4096);
			}
		}
		else if (func_25(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_25(*uParam2, 512))
		{
			if (!func_25(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_25(*uParam2, 16))
		{
			if (!func_25(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 4096);
			}
		}
		else if (func_25(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_25(*uParam2, 64))
		{
			if (!func_25(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 4096);
			}
		}
		else if (func_25(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_25(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_25(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_25(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_25(*uParam2, 8192))
		{
			if (func_25(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_25(*uParam2, 16384))
		{
			if (func_25(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_25(*uParam2, 32768))
		{
			if (func_25(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_25(*uParam2, 65536))
		{
			if (func_25(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_25(*uParam2, 131072))
		{
			if (func_25(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_25(*uParam2, 262144))
		{
			if (func_25(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_25(*uParam2, 524288))
		{
			if (func_25(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_25(*uParam2, 1048576))
		{
			if (func_25(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_25(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_25(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_25(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_25(*uParam2, 67108864))
		{
			if (func_25(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_25(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_25(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_25(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_25(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_349(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_302(sParam2, iParam4, 0);
}

void func_350(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = to_float(iVar2);
		iVar1 = round(pow(2f, fVar0));
		if (!func_245(*uParam0, iVar1))
		{
			func_236(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_198(sParam2);
				}
				else
				{
					func_198(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_351(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		if (func_178(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_352(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_143(uParam0, 9));
}

void func_353(var uParam0)
{
	if (func_143(uParam0, 17))
	{
		if (!func_143(uParam0, 14))
		{
			if (!func_142(uParam0))
			{
				if (!func_54())
				{
					func_150(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_354(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (does_entity_exist(Global_112096.f_225[3]))
	{
		uParam0->f_4[0] = Global_112096.f_225[3];
		uParam0->f_4[1] = Global_112096.f_225[4];
		uParam0->f_4[2] = Global_112096.f_225[5];
		set_entity_as_mission_entity(uParam0->f_4[0], true, true);
		set_entity_as_mission_entity(uParam0->f_4[1], true, true);
		set_entity_as_mission_entity(uParam0->f_4[2], true, true);
	}
	else
	{
		uParam0->f_4[0] = create_ped(26, uParam0->f_45[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, true, true);
		uParam0->f_4[1] = create_ped(26, uParam0->f_45[1], get_offset_from_entity_in_world_coords(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, true, true);
		uParam0->f_4[2] = create_ped(26, uParam0->f_45[2], get_offset_from_entity_in_world_coords(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, true, true);
	}
	if (does_entity_exist(Global_112096.f_225[6]))
	{
		uParam0->f_4[3] = Global_112096.f_225[6];
		uParam0->f_4[4] = Global_112096.f_225[7];
		set_entity_as_mission_entity(uParam0->f_4[3], true, true);
		set_entity_as_mission_entity(uParam0->f_4[4], true, true);
	}
	else
	{
		uParam0->f_4[3] = create_ped(26, uParam0->f_45[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, true, true);
		uParam0->f_4[4] = create_ped(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, true, true);
	}
	if (does_entity_exist(Global_112096.f_222[0]))
	{
		uParam0->f_10 = Global_112096.f_222[0];
		uParam0->f_11 = Global_112096.f_222[1];
		set_entity_as_mission_entity(uParam0->f_10, true, true);
		set_entity_as_mission_entity(uParam0->f_11, true, true);
	}
	else
	{
		uParam0->f_10 = create_vehicle(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, true, true, false);
		uParam0->f_11 = create_vehicle(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, true, true, false);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var3 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!is_entity_dead(uParam0->f_4[iVar1], false))
		{
			clear_ped_tasks_immediately(uParam0->f_4[iVar1]);
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			switch (iVar1)
			{
				case 0:
					task_turn_ped_to_face_entity(0, uParam0->f_4[1], 0);
					task_play_anim(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0f, false, false, false);
					task_play_anim(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0f, false, false, false);
					task_play_anim(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					task_go_straight_to_coord(0, Var2, 1f, 20000, 40000f, 0.5f);
					task_go_straight_to_coord(0, Var3, 1f, 20000, 40000f, 0.5f);
					break;
				
				case 1:
					task_turn_ped_to_face_entity(0, uParam0->f_4[0], 0);
					task_play_anim(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0f, false, false, false);
					task_play_anim(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0f, false, false, false);
					task_play_anim(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					task_go_straight_to_coord(0, Var2, 1f, 20000, 40000f, 0.5f);
					task_go_straight_to_coord(0, Var3, 1f, 20000, 40000f, 0.5f);
					break;
				
				case 2:
					task_turn_ped_to_face_entity(0, uParam0->f_4[0], 0);
					task_play_anim(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0f, false, false, false);
					task_play_anim(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0f, false, false, false);
					task_play_anim(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					task_go_straight_to_coord(0, Var2, 1f, 20000, 40000f, 0.5f);
					task_go_straight_to_coord(0, Var3, 1f, 20000, 40000f, 0.5f);
					break;
				
				case 3:
					task_turn_ped_to_face_entity(0, uParam0->f_4[4], 0);
					task_look_at_entity(0, uParam0->f_4[4], 3, 2, 2);
					task_chat_to_ped(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					task_turn_ped_to_face_entity(0, uParam0->f_4[3], 0);
					task_look_at_entity(0, uParam0->f_4[3], 3, 2, 2);
					task_chat_to_ped(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			close_sequence_task(iVar0);
			task_perform_sequence(uParam0->f_4[iVar1], iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!is_ped_injured((*uParam0)[iVar1]) && (get_script_task_status((*uParam0)[iVar1], 242628503) != 1 || get_script_task_status((*uParam0)[iVar1], 242628503) == 7))
		{
			set_blocking_of_non_temporary_events((*uParam0)[iVar1], true);
			clear_ped_tasks_immediately((*uParam0)[iVar1]);
			clear_sequence_task(&iVar0);
			open_sequence_task(&iVar0);
			func_355(uParam0, iVar1, get_random_int_in_range(1000, 2000));
			close_sequence_task(iVar0);
			task_perform_sequence((*uParam0)[iVar1], iVar0);
		}
		iVar1++;
	}
}

void func_355(var uParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			task_turn_ped_to_face_entity(0, (*uParam0)[1], 0);
			task_look_at_entity(0, (*uParam0)[1], 3, 2, 2);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0f, false, false, false);
			break;
		
		case 1:
			task_turn_ped_to_face_entity(0, (*uParam0)[0], 0);
			task_look_at_entity(0, (*uParam0)[0], 3, 2, 2);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0f, false, false, false);
			break;
		
		case 2:
			task_turn_ped_to_face_entity(0, (*uParam0)[0], 0);
			task_look_at_entity(0, (*uParam0)[0], 3, 2, 2);
			task_play_anim(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0f, false, false, false);
			break;
	}
}

int func_356()
{
	if (!has_model_loaded(Local_262.f_45[0]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(Local_262.f_45[1]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(Local_262.f_45[2]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(Local_262.f_45[3]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(Local_262.f_45[4]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(joaat("stretch")))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_339, 1000);
		return 0;
	}
	if (!has_model_loaded(joaat("superd")))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_339, 1000);
		return 0;
	}
	if (!has_anim_dict_loaded("oddjobs@taxi@gyn@cc@intro"))
	{
		func_261("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!has_anim_dict_loaded("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_261("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!has_anim_dict_loaded("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_261("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

bool func_357(var uParam0)
{
	return uParam0->f_117;
}

int func_358(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_109)
	{
		if ((func_364((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_364((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_364((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_362(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (is_vehicle_driveable(uParam0->f_4, false))
			{
				if (func_364(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_300(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_359(uParam0);
	}
	return 0;
}

void func_359(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_361()) && !func_151(uParam0)) || ((uParam0->f_411 != 9 && func_229(uParam0, 1)) && !func_151(uParam0)))
		{
			uVar0 = func_360(uParam0->f_4);
			set_entity_as_no_longer_needed(&uVar0);
			uParam0->f_4 = get_vehicle_ped_is_in(player_ped_id(), false);
			set_entity_as_mission_entity(uParam0->f_4, true, false);
			func_161(uParam0);
			func_154(uParam0, 0);
		}
	}
}

var func_360(var uParam0)
{
	return uParam0;
}

int func_361()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		if (is_ped_in_any_vehicle(player_ped_id(), false))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (is_vehicle_driveable(iVar0, false))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1, false) == player_ped_id())
				{
					if (is_vehicle_model(iVar0, func_22()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_362(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_363(uParam0, 0, 1))
			{
				func_300(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_363(uParam0, 0, 4))
			{
				func_300(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_363(uParam0, 0, 8))
			{
				func_300(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_363(uParam0, 1, 1))
			{
				func_300(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_363(uParam0, 0, 1))
			{
				func_300(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_25(*uParam2, 2) && func_125(uParam0))
			{
				func_300(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_363(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!is_entity_dead(uParam0->f_3, false))
	{
		if (!is_entity_occluded(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_196(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_196(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_364(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = player_ped_id();
	if (!is_entity_dead(iVar0, false) && !is_entity_dead(iParam0, false))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_370(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_368(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_367(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_365(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_365(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (does_entity_exist(iParam0))
	{
		if (iParam7 && has_entity_been_damaged_by_entity(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = get_entity_health(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = get_entity_health(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = get_players_last_vehicle();
		if (!is_entity_dead(iVar0, false))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (has_entity_been_damaged_by_entity(iParam0, player_ped_id(), true))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (has_entity_been_damaged_by_entity(iParam0, player_ped_id(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = get_players_last_vehicle();
		if (!is_entity_dead(iVar1, false))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!is_entity_dead(iParam0, false))
		{
			if (is_ped_being_jacked(iParam0))
			{
				if (get_peds_jacker(iParam0) == player_ped_id())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (is_ped_in_melee_combat(player_ped_id()))
		{
			if (is_entity_at_coord(iParam0, get_entity_coords(player_ped_id(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (has_player_damaged_at_least_one_ped(player_id()))
				{
					return 1;
				}
			}
		}
	}
	if (is_ped_performing_stealth_kill(player_ped_id()))
	{
		if (was_ped_killed_by_stealth(iParam0))
		{
			return 1;
		}
	}
	if (func_366(player_ped_id(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (is_ped_ragdoll(iParam0) && func_10(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (is_ped_in_any_vehicle(iParam0, false))
		{
			if (is_entity_touching_entity(player_ped_id(), get_vehicle_ped_is_in(iParam0, false)))
			{
				return 1;
			}
		}
		else if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			return 1;
		}
		if (!is_entity_dead(iParam1, false))
		{
			if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_366(int iParam0, int iParam1)
{
	int iVar0;
	
	get_current_ped_weapon(iParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (is_ped_shooting(iParam0))
		{
			if (vdist(get_entity_coords(iParam0, true), get_entity_coords(iParam1, true)) < 2.5f)
			{
				if (is_ped_facing_ped(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1, var uParam2)
{
	if (is_ped_armed(iParam0, 4))
	{
		if (is_ped_shooting(iParam0) && !is_ped_current_weapon_silenced(iParam0))
		{
			if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_368(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!is_entity_dead(iParam1, false))
	{
		Var0 = { get_entity_coords(iParam1, true) };
	}
	if (is_bullet_in_area(Var0, 4f, true))
	{
		return 1;
	}
	if (has_bullet_impacted_in_area(Var0, to_float(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (is_ped_armed(iParam0, 2))
	{
		if (is_ped_shooting(iParam0))
		{
			if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (is_ped_in_any_vehicle(get_ped_index_from_entity_index(iParam1), false))
			{
				iVar1 = get_vehicle_ped_is_in(get_ped_index_from_entity_index(iParam1), false);
			}
			if (is_ped_planting_bomb(iParam0) || func_369(iVar1))
			{
				if (is_entity_at_coord(iParam1, get_entity_coords(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (is_ped_facing_ped(get_ped_index_from_entity_index(iParam1), iParam0, 120f) && has_entity_clear_los_to_entity(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (is_projectile_in_area((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			if (get_ped_in_vehicle_seat(iParam0, -1, false) != 0)
			{
				if (get_current_ped_weapon(player_ped_id(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_11(player_ped_id(), iParam0, 1) < 40f)
						{
							if (get_entity_player_is_free_aiming_at(player_id(), &iVar1))
							{
								if ((is_entity_a_vehicle(iVar1) && get_vehicle_index_from_entity_index(iVar1) == iParam0) || (is_entity_a_ped(iVar1) && get_ped_index_from_entity_index(iVar1) == get_ped_in_vehicle_seat(iParam0, -1, false)))
								{
									if ((is_ped_on_foot(player_ped_id()) && is_control_pressed(0, 24)) || (is_ped_in_any_vehicle(player_ped_id(), false) && is_control_pressed(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_370(int iParam0, var uParam1)
{
	if (!is_entity_dead(iParam0, false))
	{
		if (is_ped_armed(player_ped_id(), 6))
		{
			if (is_player_free_aiming_at_entity(player_id(), iParam0) || is_player_targetting_entity(player_id(), iParam0))
			{
				if (is_ped_facing_ped(iParam0, player_ped_id(), 90f))
				{
					if (func_10(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = get_game_timer();
						}
						else if ((get_game_timer() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_371(var uParam0, var uParam1, bool bParam2)
{
	if (!func_25(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!is_string_null_or_empty(&(uParam0->f_124)) && func_54())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_54())
				{
					StringCopy(&(uParam0->f_124), func_140(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_372(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (does_entity_exist(uParam0->f_4))
		{
			if (Local_165.f_0 > 0 && !func_245(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165.f_0 - 1))
				{
					if (func_245(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_245(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_236(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = get_game_timer();
							}
						}
						else
						{
							func_24(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_245(Local_165.f_1[iVar0 /*4*/], 4) && !func_245(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_236(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_300(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_373(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_143(uParam0, 27))
	{
		func_190(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_395(uParam0, 27) > 5f)
	{
		if (func_364(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_267(uParam0, 27, 0, 0);
			func_267(uParam0, 10, 0, 0);
			func_362(uParam0, &uVar0, uParam1);
		}
		func_359(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_374(uParam0);
	}
	if ((((!is_player_control_on(player_id()) && (does_cam_exist(*uParam0) && !is_cam_active(*uParam0))) && (does_cam_exist(uParam0->f_1) && !is_cam_active(uParam0->f_1))) && !is_message_being_displayed()) && !func_54())
	{
		if (func_395(uParam0, 26) > 10f)
		{
			func_150(uParam0, 26, 0);
			set_player_control(player_id(), true, 0);
		}
	}
	else if (func_143(uParam0, 26))
	{
		func_150(uParam0, 26, 0);
	}
	return 0;
}

void func_374(var uParam0)
{
	if (!func_394(uParam0->f_429))
	{
		uParam0->f_429 = func_393();
		func_384(&(uParam0->f_429), 0, 0, get_random_int_in_range(4, 7), 0, 0, 0);
	}
	else if (func_375(uParam0->f_429))
	{
		func_300(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_375(int iParam0)
{
	return func_376(func_393(), iParam0);
}

int func_376(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_394(iParam1) || !func_394(iParam0))
	{
		return 1;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_377(iParam0);
	iVar1 = func_377(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_377(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_378(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_379(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_380(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_381(int iParam0)
{
	return iParam0 & 15;
}

var func_382(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_383(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_383(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_384(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_382(*uParam0);
	iVar1 = func_381(*uParam0);
	iVar2 = func_380(*uParam0);
	iVar3 = func_379(*uParam0);
	iVar4 = func_378(*uParam0);
	iVar5 = func_377(*uParam0);
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
	iVar6 = func_392(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_392(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_385(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_385(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_391(uParam0, iParam1);
	func_390(uParam0, iParam2);
	func_389(uParam0, iParam3);
	func_388(uParam0, iParam5);
	func_387(uParam0, iParam4);
	func_386(uParam0, iParam6);
}

void func_386(var uParam0, int iParam1)
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

void func_387(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_381(*uParam0);
	iVar1 = func_382(*uParam0);
	if (iParam1 < 1 || iParam1 > func_392(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_388(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_389(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_392(int iParam0, int iParam1)
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

int func_393()
{
	var uVar0;
	
	func_391(&uVar0, get_clock_seconds());
	func_390(&uVar0, get_clock_minutes());
	func_389(&uVar0, get_clock_hours());
	func_387(&uVar0, get_clock_day_of_month());
	func_388(&uVar0, get_clock_month());
	func_386(&uVar0, get_clock_year());
	return uVar0;
}

int func_394(int iParam0)
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
	iVar0 = func_377(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_378(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_379(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_382(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_381(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_380(iParam0);
	if (iVar5 < 1 || iVar5 > func_392(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

float func_395(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_191(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_105(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_396()
{
	func_397(&Local_260);
	func_414();
}

void func_397(var uParam0)
{
	func_12(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_418(2);
	}
}

int func_398(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_54() && func_395(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!is_entity_dead(uParam0->f_3, false))
		{
			if (is_vehicle_driveable(uParam0->f_4, false))
			{
				if (is_ped_in_vehicle(uParam0->f_3, uParam0->f_4, false))
				{
					if (func_66(uParam0) == 0 || func_245(uParam0->f_85, 32))
					{
						if (!is_vehicle_stopped(uParam0->f_4))
						{
							func_316(uParam0, 4160, 0);
						}
						else
						{
							func_316(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_316(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_316(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_316(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((get_game_timer() % 1000) < 50)
	{
	}
	return 0;
}

void func_399(var uParam0)
{
	if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
	if (does_blip_exist(uParam0->f_9))
	{
		remove_blip(&(uParam0->f_9));
	}
	if (does_blip_exist(uParam0->f_10))
	{
		remove_blip(&(uParam0->f_10));
	}
}

int func_400(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_401()
{
	func_403(&Local_260, 7);
	Local_260.f_410 = 0;
	Local_260.f_23 = { -1248.422f, 252.6221f, 63.0799f };
	Local_260.f_33 = 34.4f;
	Local_260.f_26 = { -231.2259f, -889.5931f, 28.8903f };
	Local_260.f_34 = 251.9658f;
	Local_262.f_41[0] = joaat("a_m_y_business_02");
	Local_262.f_41[1] = joaat("a_m_y_business_02");
	Local_262.f_41[2] = joaat("a_m_y_business_02");
	Local_262.f_45[0] = joaat("a_f_y_beach_01");
	Local_262.f_45[1] = joaat("a_f_y_beach_01");
	Local_262.f_45[2] = joaat("a_f_y_beach_01");
	Local_262.f_45[3] = joaat("a_f_y_beach_01");
	Local_262.f_45[4] = joaat("a_m_y_business_01");
	func_402(&Local_260, 3, 6);
}

void func_402(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_403(var uParam0, int iParam1)
{
	func_413(1);
	func_164();
	func_7(&(uParam0->f_244));
	func_412(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_25(Global_113386.f_19097, 4))
	{
		func_235(&(Global_113386.f_19097), 4);
	}
	func_407(uParam0);
	func_405(uParam0);
	set_ped_config_flag(player_ped_id(), 32, false);
	uParam0->f_102 = (func_404(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	request_additional_text("TAXI", 2);
}

int func_404(int iParam0)
{
	return Global_113386.f_19097.f_39[iParam0];
}

void func_405(var uParam0)
{
	switch (func_66(uParam0))
	{
		case 0:
			func_406(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_406(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_406(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_406(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_406(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_406(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_406(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_406(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_406(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_406(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_406(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_407(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_411(uParam0, 3);
			func_410(uParam0, 14);
			break;
		
		case 1:
			func_411(uParam0, 14);
			func_410(uParam0, 8);
			break;
		
		case 2:
			func_411(uParam0, 8);
			func_410(uParam0, 7);
			break;
		
		case 3:
			func_411(uParam0, 15);
			func_410(uParam0, 6);
			break;
		
		case 4:
			func_411(uParam0, 0);
			func_410(uParam0, 3);
			break;
		
		case 5:
			func_411(uParam0, 6);
			func_410(uParam0, 7);
			break;
		
		case 6:
			func_411(uParam0, 8);
			func_410(uParam0, 15);
			break;
		
		case 7:
			func_411(uParam0, 8);
			func_410(uParam0, 14);
			break;
		
		case 8:
			func_411(uParam0, 7);
			func_410(uParam0, 15);
			break;
		
		case 9:
			func_411(uParam0, get_random_int_in_range(0, 17));
			iVar0 = func_409((uParam0->f_418.f_2 + get_random_int_in_range(1, 17)), 0, 16);
			func_410(uParam0, iVar0);
			func_408(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_408(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_409(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_410(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_411(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_412(var uParam0)
{
	uParam0->f_2 = player_ped_id();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_44() };
	uParam0->f_17 = { func_44() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_150(uParam0, 32, 0);
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_112442, get_this_script_name(), 24);
		Global_112436 = 1;
	}
	else
	{
		StringCopy(&Global_112442, "NULL", 24);
		Global_112436 = 0;
	}
}

void func_414()
{
	func_417(&Local_262);
	func_192();
	func_416();
	func_415();
	terminate_this_thread();
}

void func_415()
{
	remove_ptfx_asset();
	remove_anim_dict("oddjobs@taxi@gyn@cc@hotbox");
}

void func_416()
{
	set_model_as_no_longer_needed(Local_262.f_41[0]);
	set_model_as_no_longer_needed(Local_262.f_41[1]);
	set_model_as_no_longer_needed(Local_262.f_41[2]);
}

void func_417(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (does_particle_fx_looped_exist(uParam0->f_73[iVar0]))
		{
			remove_particle_fx(uParam0->f_73[iVar0], false);
		}
		iVar0++;
	}
}

void func_418(int iParam0)
{
	Global_112096.f_22 = iParam0;
}

