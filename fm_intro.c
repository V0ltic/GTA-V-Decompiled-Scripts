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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<123> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 16;
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
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 16;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
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
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
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
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
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
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	struct<6> Local_414 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_415 = 0;
	var uLocal_416 = 16;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	struct<5> Local_581[2];
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	bool bLocal_588 = 0;
	bool bLocal_589 = 0;
	bool bLocal_590 = 0;
	bool bLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	struct<21> Local_596 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_60 = 20;
	iLocal_61 = 33;
	bLocal_588 = true;
	bLocal_589 = true;
	bLocal_590 = true;
	bLocal_591 = true;
	if (network_is_game_in_progress())
	{
		func_803(ScriptParam_596);
	}
	while (true)
	{
		func_802();
		if (func_797())
		{
			func_424(1);
		}
		if (func_421(0))
		{
			Local_581[participant_id_to_int() /*5*/] = 3;
		}
		if (func_420(participant_id_to_int()) > -1)
		{
			set_all_random_peds_flee_this_frame(player_id());
		}
		switch (func_419(participant_id_to_int()))
		{
			case 0:
				if (!BitTest(uLocal_582, 10))
				{
					if (!is_ped_injured(player_ped_id()))
					{
						set_bit(&uLocal_582, 10);
					}
				}
				request_additional_text("FMINT", 0);
				if (func_418() && has_this_additional_text_loaded("FMINT", 0))
				{
					if (func_417() > 0)
					{
						func_416(&uLocal_249, 1, 0, "Lamar", 0, 1);
						func_415(0);
						func_414(4, 1);
						func_414(1, 1);
						func_414(0, 1);
						func_414(2, 1);
						func_414(3, 0);
						func_412(iLocal_61, 1);
						Local_581[participant_id_to_int() /*5*/] = 2;
						if (bLocal_590)
						{
							Local_581[participant_id_to_int() /*5*/].f_2 = -2;
						}
						else
						{
							Local_581[participant_id_to_int() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_417() == 4)
				{
					Local_581[participant_id_to_int() /*5*/] = 4;
				}
				if (func_417() == 6 && Local_581[participant_id_to_int() /*5*/] < 4)
				{
					Local_581[participant_id_to_int() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_390();
				func_23();
				if (func_417() == 4)
				{
					Local_581[participant_id_to_int() /*5*/] = 4;
				}
				if (func_417() == 6 && Local_581[participant_id_to_int() /*5*/] < 4)
				{
					Local_581[participant_id_to_int() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_581[participant_id_to_int() /*5*/] = 5;
				break;
			
			case 5:
				func_21(&(Local_414.f_5));
				if (func_20(&(Local_414.f_5)))
				{
					Local_581[participant_id_to_int() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_60);
				Local_581[participant_id_to_int() /*5*/] = 6;
			
			case 6:
				func_424(0);
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_417())
			{
				case 0:
					Local_414.f_0 = 2;
					break;
				
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_414.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_588)
	{
		if (BitTest(Local_414.f_1, 1))
		{
			return 1;
		}
	}
	else if (BitTest(Local_414.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (network_is_host_of_this_script())
	{
		if (!BitTest(Local_414.f_1, 3))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 0))
			{
				set_bit(&(Local_414.f_1), 3);
			}
		}
		if (!BitTest(Local_414.f_1, 4))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 2))
			{
				set_bit(&(Local_414.f_1), 4);
			}
		}
		if (!BitTest(Local_414.f_1, 5))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 3))
			{
				set_bit(&(Local_414.f_1), 5);
			}
		}
		if (!BitTest(Local_414.f_1, 6))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 4))
			{
				set_bit(&(Local_414.f_1), 6);
			}
		}
		if (!BitTest(Local_414.f_1, 7))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 5))
			{
				set_bit(&(Local_414.f_1), 7);
			}
		}
		if (!BitTest(Local_414.f_1, 8))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 6))
			{
				set_bit(&(Local_414.f_1), 8);
			}
		}
		switch (Local_414.f_2)
		{
			case 0:
				if (BitTest(Local_414.f_1, 3))
				{
					if (func_4(&(Local_414.f_3), &(Local_414.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_416))
					{
						set_vehicle_engine_on(net_to_veh(Local_414.f_3), true, false, false);
						Local_414.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (BitTest(Local_414.f_1, 4))
				{
					Local_414.f_2 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_414.f_1, 5))
				{
					Local_414.f_2 = 3;
				}
				break;
			
			case 3:
				if (BitTest(Local_414.f_1, 6))
				{
					Local_414.f_2 = 4;
				}
				break;
			
			case 4:
				if (BitTest(Local_414.f_1, 7))
				{
					Local_414.f_2 = 5;
				}
				break;
			
			case 5:
				if (BitTest(Local_414.f_1, 8))
				{
					Local_414.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam3, var uParam4)
{
	if (func_9(Global_2815059.f_837) && func_9(Global_2815059.f_838))
	{
		if (!network_does_network_id_exist(*uParam0))
		{
			if (func_6(uParam0, Global_2815059.f_837, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				set_vehicle_has_been_owned_by_player(net_to_veh(*uParam0), true);
			}
		}
		if (!network_does_network_id_exist(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2815059.f_838, -1, 1, 1, 1))
			{
				set_blocking_of_non_temporary_events(net_to_ped(*uParam1), true);
				set_model_as_no_longer_needed(Global_2815059.f_837);
				set_model_as_no_longer_needed(Global_2815059.f_838);
				_set_entity_cleanup_by_engine(net_to_veh(*uParam0), false);
				set_ped_get_out_upside_down_vehicle(net_to_ped(*uParam1), true);
				func_416(uParam4, 8, net_to_ped(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!network_does_network_id_exist(*uParam0) || !network_does_network_id_exist(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!can_register_mission_peds(1))
	{
		return 0;
	}
	if (!network_does_network_id_exist(iParam1))
	{
		return 0;
	}
	if (!is_vehicle_driveable(net_to_veh(iParam1), false))
	{
		return 0;
	}
	*uParam0 = ped_to_net(create_ped_inside_vehicle(net_to_veh(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (network_does_network_id_exist(*uParam0))
	{
		_set_entity_cleanup_by_engine(net_to_ped(*uParam0), bParam7);
		if (network_get_entity_is_networked(net_to_ped(*uParam0)))
		{
			if (bParam5)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!is_model_valid(iParam1))
	{
		return 0;
	}
	if (!can_register_mission_vehicles(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		clear_area_of_vehicles(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = create_vehicle(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (does_entity_exist(iVar1))
	{
		*uParam0 = veh_to_net(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (network_does_network_id_exist(*uParam0))
		{
			if (bParam13)
			{
				_network_set_entity_invisible_to_network(iVar1, true);
			}
			_set_entity_cleanup_by_engine(iVar1, bParam8);
			if (network_get_entity_is_networked(iVar1))
			{
				if (bParam6)
				{
					set_network_id_exists_on_all_machines(*uParam0, true);
				}
				else
				{
					set_network_id_exists_on_all_machines(*uParam0, false);
				}
				if (bParam11)
				{
					set_network_id_always_exists_for_player(*uParam0, player_id(), true);
				}
			}
			set_vehicle_is_stolen(iVar1, bParam7);
			_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				set_car_boot_open(iVar1);
				set_vehicle_door_control(iVar1, 5, 5, 1f);
			}
			func_7(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_8(player_id(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && vdist(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_8(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (absf((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	request_model(iParam0);
	return has_model_loaded(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (bLocal_588)
			{
				if (!BitTest(Local_414.f_1, 2))
				{
					if (BitTest(Local_581[iVar0 /*5*/].f_3, 2))
					{
						set_bit(&(Local_414.f_1), 2);
					}
				}
			}
			else if (!BitTest(Local_414.f_1, 1))
			{
				if (BitTest(Local_581[iVar0 /*5*/].f_3, 1))
				{
					set_bit(&(Local_414.f_1), true);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(player_id(), 1))
	{
		return;
	}
	if (!func_13(player_id()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

bool func_15(int iParam0, bool bParam1)
{
	if (func_19() != 0)
	{
		return func_13(iParam0) != 0;
	}
	return func_16(iParam0, bParam1, 0);
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

var func_18(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_19()
{
	return Global_31959;
}

int func_20(var uParam0)
{
	if (uParam0->f_1)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	switch (func_420(participant_id_to_int()))
	{
		case -2:
			func_204();
			break;
		
		case -1:
			func_203();
			break;
		
		case 0:
			func_31();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_24();
			break;
	}
}

void func_24()
{
	switch (iLocal_587)
	{
		case 0:
			if (!func_25(iLocal_61))
			{
				set_bit(&(Local_581[participant_id_to_int() /*5*/].f_3), 2);
				Local_581[participant_id_to_int() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 5, 1);
}

int func_26(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_19() == 0)
		{
			return BitTest(func_27(func_30(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_28(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1574918;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 11352;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

void func_31()
{
	int iVar0;
	
	if (func_202())
	{
		if (func_14(player_id(), 1, 1))
		{
			func_201(0);
		}
	}
	if (!func_200(&uLocal_239))
	{
		func_22(&uLocal_239, 0, 0);
	}
	if (!BitTest(uLocal_582, 21))
	{
		set_bit(&uLocal_582, 21);
	}
	if (!BitTest(uLocal_582, 3))
	{
		if (!func_200(&uLocal_237))
		{
			func_22(&uLocal_237, 0, 0);
		}
		else if (BitTest(uLocal_582, 21))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					if (func_199(&uLocal_237, 3000, 0))
					{
						set_bit(&uLocal_582, 3);
					}
				}
			}
		}
		if (func_199(&uLocal_237, 40000, 0))
		{
			set_bit(&uLocal_582, 3);
		}
	}
	else if (!BitTest(uLocal_582, 16))
	{
		if (!is_help_message_being_displayed())
		{
			if (!is_pause_menu_active())
			{
				set_bit(&uLocal_582, 16);
				func_198(&uLocal_237);
			}
		}
	}
	if (BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 2))
	{
		if (!func_200(&uLocal_243))
		{
			func_22(&uLocal_243, 0, 0);
		}
		else if (!BitTest(uLocal_583, 1))
		{
			if (func_199(&uLocal_243, 10000, 0))
			{
				set_bit(&uLocal_583, true);
				func_198(&uLocal_243);
			}
		}
		else if (BitTest(uLocal_582, 19))
		{
			if (!BitTest(uLocal_582, 18))
			{
				if (!func_196() || func_199(&uLocal_237, 5000, 0))
				{
					func_195(0);
					set_bit(&uLocal_582, 18);
					if (!is_ped_injured(player_ped_id()))
					{
						set_ped_config_flag(player_ped_id(), 244, false);
						set_ped_config_flag(player_ped_id(), 243, false);
						set_ped_config_flag(player_ped_id(), 242, false);
					}
				}
			}
		}
	}
	if (BitTest(uLocal_582, 18))
	{
		if (!BitTest(uLocal_582, 2))
		{
			if (is_screen_faded_in())
			{
				iVar0 = 0;
				set_bit(&iVar0, 3);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 5);
				if (func_99(&uLocal_249, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_98(1);
					set_bit(&uLocal_582, 2);
					if (!BitTest(uLocal_582, 20))
					{
						func_83(19, 3, 1);
						set_bit(&uLocal_582, 20);
					}
					if (!is_ped_injured(player_ped_id()))
					{
						task_use_mobile_phone(player_ped_id(), 1, 1);
					}
				}
			}
		}
		else if (!func_82(0))
		{
			if (!func_81())
			{
				if (!func_79())
				{
					if (!BitTest(uLocal_582, 12))
					{
						if (!is_ped_injured(player_ped_id()))
						{
							task_use_mobile_phone(player_ped_id(), 0, 1);
							set_ped_config_flag(player_ped_id(), 244, true);
							set_ped_config_flag(player_ped_id(), 243, true);
							set_ped_config_flag(player_ped_id(), 242, true);
						}
						set_bit(&uLocal_582, 12);
						func_22(&uLocal_241, 0, 0);
						func_22(&uLocal_245, 0, 0);
					}
				}
			}
		}
		if (BitTest(uLocal_582, 12))
		{
			if (!BitTest(uLocal_582, 17))
			{
				if (!is_pause_menu_active())
				{
					func_75();
					set_bit(&uLocal_582, 17);
					func_198(&uLocal_237);
				}
			}
			else if (!func_196())
			{
				if (!BitTest(uLocal_582, 23))
				{
					if (func_199(&uLocal_245, 4500, 0))
					{
						set_bit(&uLocal_582, 23);
						set_bit(&(Local_581[participant_id_to_int() /*5*/].f_3), 3);
					}
				}
				if (func_199(&uLocal_241, 15000, 0))
				{
					if (!BitTest(uLocal_582, 22))
					{
						set_bit(&uLocal_582, 22);
					}
				}
				if (get_player_wanted_level(player_id()) == 0)
				{
					if (BitTest(uLocal_582, 14))
					{
						clear_bit(&uLocal_582, 14);
					}
					if (!func_25(iLocal_61))
					{
						if (BitTest(uLocal_582, 13))
						{
							clear_bit(&uLocal_582, 13);
						}
						if (BitTest(uLocal_582, 25) || (!BitTest(uLocal_582, 25) && !is_ped_in_any_vehicle(player_ped_id(), false)))
						{
							if (!BitTest(uLocal_582, 0))
							{
								if (BitTest(uLocal_582, 15))
								{
									clear_bit(&uLocal_582, 15);
								}
								if (does_blip_exist(Global_100493.f_255[iLocal_61]))
								{
									func_69("GET_AMMU", 0);
									set_bit(&uLocal_582, false);
									set_bit(&uLocal_582, 25);
									if (does_blip_exist(Global_100493.f_255[iLocal_61]))
									{
										if (!BitTest(Global_2815059.f_836, 2))
										{
											set_blip_route(Global_100493.f_255[iLocal_61], true);
										}
										func_412(iLocal_61, 1);
									}
								}
							}
							else if (BitTest(Global_2815059.f_836, 2))
							{
								if (does_blip_exist(Global_100493.f_255[iLocal_61]))
								{
									if (!BitTest(uLocal_582, 15))
									{
										set_blip_route(Global_100493.f_255[iLocal_61], false);
										set_bit(&uLocal_582, 15);
									}
								}
							}
							else if (does_blip_exist(Global_100493.f_255[iLocal_61]))
							{
								if (BitTest(uLocal_582, 15))
								{
									set_blip_route(Global_100493.f_255[iLocal_61], true);
									clear_bit(&uLocal_582, 15);
								}
							}
						}
					}
					else
					{
						if (BitTest(uLocal_582, 0))
						{
							clear_bit(&uLocal_582, false);
						}
						if (!BitTest(uLocal_582, 13))
						{
							func_69("GET_GUN", 0);
							func_68(1);
							set_bit(&uLocal_582, 13);
						}
					}
				}
				else if (!BitTest(uLocal_582, 14))
				{
					clear_help(true);
					if (BitTest(uLocal_582, 0))
					{
						clear_bit(&uLocal_582, false);
					}
					if (BitTest(uLocal_582, 13))
					{
						clear_bit(&uLocal_582, 13);
					}
					if (does_blip_exist(Global_100493.f_255[iLocal_61]))
					{
						set_blip_route(Global_100493.f_255[iLocal_61], false);
						set_blip_flashes(Global_100493.f_255[iLocal_61], false);
						func_412(iLocal_61, 0);
					}
					func_69("LOSE_COP", 0);
					set_bit(&uLocal_582, 14);
				}
			}
		}
	}
	else if (func_199(&uLocal_239, 300000, 0))
	{
		set_bit(&uLocal_582, 18);
	}
	if (!BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 0))
	{
		if (((has_ped_got_weapon(player_ped_id(), joaat("weapon_pistol"), false) || has_ped_got_weapon(player_ped_id(), joaat("weapon_combatpistol"), false)) || has_ped_got_weapon(player_ped_id(), joaat("weapon_appistol"), false)) || has_ped_got_weapon(player_ped_id(), joaat("weapon_microsmg"), false))
		{
			if (func_66())
			{
				func_61(1);
				set_bit(&(Local_581[participant_id_to_int() /*5*/].f_3), false);
				if (func_25(iLocal_61))
				{
				}
			}
		}
		else
		{
			func_44(400);
		}
	}
	else if (!BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 1))
	{
		if (!func_42())
		{
			set_bit(&(Local_581[participant_id_to_int() /*5*/].f_3), true);
			func_35();
			func_34("FM_IHELP_AMMU", -1);
			if (!BitTest(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
				set_bit(&uLocal_582, 31);
			}
			func_198(&uLocal_237);
			if (bLocal_588)
			{
				if (bLocal_589)
				{
					Local_581[participant_id_to_int() /*5*/].f_2 = 3;
				}
				else
				{
					Local_581[participant_id_to_int() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_581[participant_id_to_int() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_32(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_33())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_28(iParam2)];
		if (iVar0 != 0)
		{
			stat_set_bool(iVar0, bParam1, bParam3);
		}
	}
}

int func_33()
{
	return 1;
	return 0;
}

void func_34(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

void func_35()
{
	if (!func_41())
	{
		return;
	}
	if (!get_hash_key(get_this_script_name()) == Global_1574757.f_9)
	{
		return;
	}
	func_36();
}

void func_36()
{
	func_38();
	func_37(0);
}

void func_37(bool bParam0)
{
	bool bVar0;
	
	bVar0 = network_is_game_in_progress();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = get_network_time();
		Global_1574757.f_11 = get_network_time();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_38()
{
	if (!func_40())
	{
	}
	if (func_41())
	{
		begin_text_command_clear_print(&(Global_1574757.f_12));
		func_39();
		end_text_command_clear_print();
	}
}

void func_39()
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			add_text_component_integer(Global_1574757.f_52);
			return;
		
		case 2:
			add_text_component_integer(Global_1574757.f_52);
			add_text_component_integer(Global_1574757.f_53);
			return;
		
		case 3:
			add_text_component_substring_text_label(&(Global_1574757.f_16));
			return;
		
		case 4:
			add_text_component_substring_text_label(&(Global_1574757.f_16));
			add_text_component_substring_text_label(&(Global_1574757.f_32));
			return;
		
		case 5:
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			return;
		
		case 6:
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			return;
		
		case 7:
			add_text_component_substring_text_label(&(Global_1574757.f_16));
			return;
		
		case 8:
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_text_label(&(Global_1574757.f_16));
			return;
		
		case 9:
			add_text_component_substring_keyboard_display(&(Global_1574757.f_16));
			return;
		
		case 10:
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			add_text_component_substring_player_name(&(Global_1574757.f_32));
			return;
		
		case 12:
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			add_text_component_substring_text_label(&(Global_1574757.f_32));
			return;
		
		case 13:
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_text_label(&(Global_1574757.f_16));
			set_colour_of_next_text_component(Global_1574757.f_57);
			add_text_component_substring_text_label(&(Global_1574757.f_32));
			return;
		
		case 11:
			add_text_component_substring_keyboard_display(&(Global_1574757.f_16));
			return;
		
		case 14:
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_text_label(&(Global_1574757.f_32));
			return;
		
		case 15:
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			set_colour_of_next_text_component(Global_1574757.f_57);
			add_text_component_substring_text_label(&(Global_1574757.f_32));
			return;
		
		case 17:
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			add_text_component_substring_player_name(&(Global_1574757.f_32));
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_text_label(&(Global_1574757.f_48));
			return;
		
		case 16:
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			return;
		
		case 19:
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_text_label(&(Global_1574757.f_16));
			return;
		
		case 18:
			add_text_component_substring_player_name(&(Global_1574757.f_16));
			set_colour_of_next_text_component(Global_1574757.f_56);
			add_text_component_substring_text_label(&(Global_1574757.f_48));
			add_text_component_substring_player_name(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

bool func_40()
{
	if (!func_41())
	{
		return 0;
	}
	begin_text_command_is_message_displayed(&(Global_1574757.f_12));
	func_39();
	return end_text_command_is_message_displayed();
}

int func_41()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_42()
{
	return ((((((((((func_43(28) || func_43(29)) || func_43(30)) || func_43(31)) || func_43(32)) || func_43(33)) || func_43(34)) || func_43(35)) || func_43(36)) || func_43(37)) || func_43(38));
}

int func_43(int iParam0)
{
	return func_26(iParam0, 6, 1);
}

void func_44(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!is_ped_injured(player_ped_id()))
	{
		iVar0 = func_58(player_id());
		if (iVar0 < iParam0)
		{
			if (func_57())
			{
				func_45(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				network_earn_from_holdups((iParam0 - iVar0));
			}
		}
	}
}

void func_45(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_57())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!net_gameserver_is_session_valid(func_29()) || net_gameserver_is_session_refresh_pending())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || net_gameserver_begin_service(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || net_gameserver_checkout_start(iVar4))
		{
			*uParam0 = func_53(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_52(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_47(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2689235[player_id() /*453*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_51(iParam0))
		{
			if (!bVar0)
			{
				net_gameserver_basket_end();
			}
		}
		else if (!bVar0)
		{
			net_gameserver_end_service(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_49(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_49(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_50(&(uParam0->f_14));
	func_50(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_50(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_51(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_52(int iParam0, int iParam1)
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_57())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = get_frame_count();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_54(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_54(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = player_id();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_56(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_55();
		_trigger_script_event_2(1, &Var0, 36, iVar1);
	}
}

void func_55()
{
	request_script("AM_ARENA_SHP");
}

var func_56(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		set_bit(&uVar0, bParam0);
	}
	return uVar0;
}

int func_57()
{
	if (is_pc_version())
	{
		return _net_gameserver_use_server_transactions();
	}
	return 0;
}

var func_58(int iParam0)
{
	var uVar0;
	
	uVar0 = func_59(iParam0);
	return uVar0;
}

int func_59(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == player_id())
		{
			return network_get_vc_wallet_balance(-1);
		}
		else if (func_60(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

void func_61(bool bParam0)
{
	func_62(28, bParam0);
	func_62(29, bParam0);
	func_62(30, bParam0);
	func_62(31, bParam0);
	func_62(32, bParam0);
	func_62(33, bParam0);
	func_62(34, bParam0);
	func_62(35, bParam0);
	func_62(36, bParam0);
	func_62(37, bParam0);
	func_62(38, bParam0);
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_65(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_63(iParam0, 14, 1);
	}
}

void func_63(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		clear_bit(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_19() == 0)
		{
			iVar0 = func_27(func_30(iParam0), -1, 0);
			clear_bit(&iVar0, bParam1);
			func_64(func_30(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		clear_bit(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
}

void func_65(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		set_bit(&(Global_100493.f_1393[iParam0]), bParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_19() == 0)
		{
			iVar0 = func_27(func_30(iParam0), -1, 0);
			set_bit(&iVar0, bParam1);
			func_64(func_30(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		set_bit(&(Global_113386.f_668[iParam0]), bParam1);
	}
}

bool func_66()
{
	return ((((((((((func_67(28) || func_67(29)) || func_67(30)) || func_67(31)) || func_67(32)) || func_67(33)) || func_67(34)) || func_67(35)) || func_67(36)) || func_67(37)) || func_67(38));
}

int func_67(int iParam0)
{
	return func_26(iParam0, 3, 0);
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1922761, 19))
		{
			set_bit(&Global_1922761, 19);
		}
	}
	else if (BitTest(Global_1922761, 19))
	{
		clear_bit(&Global_1922761, 19);
	}
}

void func_69(char* sParam0, bool bParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (get_length_of_literal_string_in_bytes(sParam0) > 23)
	{
		return;
	}
	if (func_73(sParam0))
	{
		return;
	}
	func_36();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), get_this_script_name(), 32);
	Global_1574757.f_9 = get_hash_key(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_72();
	func_71(bParam1);
	func_70();
}

void func_70()
{
	set_bit(&(Global_1574757.f_59), true);
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		set_bit(&(Global_1574757.f_59), false);
		return;
	}
	clear_bit(&(Global_1574757.f_59), false);
}

void func_72()
{
	Global_1574757.f_10 = get_time_offset(get_network_time(), 86400000);
	Global_1574757.f_11 = get_network_time();
}

bool func_73(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_74(sParam0);
	}
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1574757.f_12));
}

bool func_74(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1574757.f_16));
}

void func_75()
{
	struct<13> Var0;
	bool bVar1;
	bool bVar2;
	
	Var0 = { func_78(player_id()) };
	bVar1 = network_has_social_club_account();
	bVar2 = func_77(&Var0);
	if (!bVar1 && !bVar2)
	{
		func_76("HLP_TAXI3", 9000);
	}
	else if (bVar1 && !bVar2)
	{
		func_76("HLP_SOC2", 9000);
	}
	else if (bVar1 && bVar2)
	{
		func_76("HLP_SOC1", 9000);
	}
}

void func_76(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, false, iParam1);
}

int func_77(var* uParam0)
{
	if (is_player_online())
	{
		if (network_clan_service_is_valid() && network_clan_player_is_active(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_78(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_79()
{
	return func_80();
}

bool func_80()
{
	return Global_1641031.f_40 == 3;
}

int func_81()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
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

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		func_90();
		if (iParam1 == 4)
		{
			func_89(iParam0, 0, 1);
			func_89(iParam0, 1, 1);
			func_89(iParam0, 2, 1);
			func_88(iParam0, 0, 1);
			func_88(iParam0, 1, 1);
			func_88(iParam0, 2, 1);
		}
		else
		{
			if (func_87(iParam0, iParam1) == 1 && func_86(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_89(iParam0, iVar0, 1);
			func_88(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_85(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_85(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_85(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_85(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_84();
			}
		}
	}
}

void func_84()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, _get_label_text(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		begin_text_command_thefeed_post("");
		StringCopy(&cVar1, _get_label_text(&(Global_8746[1 /*6*/])), 64);
		sVar2 = _get_label_text("CELL_253");
		end_text_command_thefeed_post_messagetext(&cVar0, &cVar0, false, 3, sVar2, &cVar1);
	}
	else
	{
		begin_text_command_thefeed_post("CELL_255");
		add_text_component_substring_text_label(&(Global_8746[1 /*6*/]));
		end_text_command_thefeed_post_messagetext(&cVar0, &cVar0, false, 3, "", 0);
	}
	clear_bit(&Global_8136, false);
}

struct<4> func_85(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_88(int iParam0, int iParam1, int iParam2)
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

void func_89(int iParam0, int iParam1, int iParam2)
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

void func_90()
{
	if (func_97(14))
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
		Global_20266 = func_91();
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

var func_91()
{
	func_92();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_92()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_95(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_94(player_ped_id());
			if (func_93(iVar0) && (!func_97(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_93(Global_113386.f_2363.f_539.f_4321))
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

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_95(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_97(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		set_bit(&Global_8137, 17);
	}
	else
	{
		clear_bit(&Global_8137, 17);
	}
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_193())
	{
		return 0;
	}
	if (func_192())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_100(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_100(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_string_null_or_empty(sParam2))
	{
		return 0;
	}
	if (get_length_of_literal_string_in_bytes(sParam2) > 7)
	{
		return 0;
	}
	if (is_string_null_or_empty(sParam3))
	{
		return 0;
	}
	if (get_length_of_literal_string_in_bytes(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = get_hash_key(get_this_script_name());
	iVar1 = func_191(sParam2, sParam3);
	iVar2 = 0;
	if (!is_string_null_or_empty(sParam7))
	{
		iVar2 = get_hash_key(sParam7);
	}
	if (func_190(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_186(uParam6))
	{
		return 0;
	}
	if (func_183(iVar0, iVar1, iVar2))
	{
		if (func_182())
		{
			return 0;
		}
		func_181();
		return func_107(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_106(iParam4))
	{
		return 0;
	}
	func_101(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1641031.f_40.f_1 = iParam0;
	Global_1641031.f_40.f_2 = iParam1;
	Global_1641031.f_40.f_3 = iParam2;
	StringCopy(&(Global_1641031.f_40.f_4), sParam3, 16);
	Global_1641031.f_40.f_8 = iParam4;
	Global_1641031.f_40.f_9 = iParam5;
	Global_1641031.f_40.f_14 = uParam6;
	func_102(iParam4);
	func_181();
	Global_1641031.f_40.f_13 = get_time_offset(get_network_time(), 7000);
}

void func_102(int iParam0)
{
	if (func_105(iParam0))
	{
		func_104();
		return;
	}
	func_103();
}

void func_103()
{
	Global_1641031.f_40.f_10 = 0;
}

void func_104()
{
	Global_1641031.f_40.f_10 = 1;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_106(int iParam0)
{
	return iParam0 > Global_1641031.f_40.f_8;
}

int func_107(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_180();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_177(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_174(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_177(uParam0, sParam3, sParam4);
		}
		return func_156(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_155(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_144(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_143(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_108(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_108(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_142();
	bVar0 = true;
	if (func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	Global_1641031.f_40.f_11 = get_time_offset(get_network_time(), iParam0);
	Global_1641031.f_40.f_12 = 1;
}

int func_110(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_141();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = get_player_name(iVar0);
		iVar1 = func_135(iVar0);
		if (iVar1 == 0)
		{
			if (is_time_less_than(get_network_time(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_134(sParam5, bParam6, &iVar3);
	uVar5 = func_132(iParam7, &iVar3);
	iVar6 = 0;
	if (!is_string_null_or_empty(sParam8))
	{
		iVar6++;
		if (!is_string_null_or_empty(sParam9))
		{
			iVar6++;
		}
	}
	if (are_strings_equal(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !is_string_null_or_empty(sVar2))
	{
		bVar12 = func_131(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_114(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_113();
	}
	func_142();
	func_112();
	func_111();
	return 1;
}

void func_111()
{
	Global_1641031.f_57 = 0;
	Global_1641031.f_57.f_1 = 0;
}

void func_112()
{
	Global_1641031.f_40 = 3;
}

void func_113()
{
	set_bit(&Global_8136, 8);
}

int func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_115(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			set_bit(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_115(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(player_ped_id()))
			{
				return 0;
			}
		}
		if (Global_4541214 == 1)
		{
			return 0;
		}
		if (_get_number_of_references_of_script_with_name_hash(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (_get_number_of_references_of_script_with_name_hash(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_130() == 0)
	{
		func_128();
		return 0;
	}
	func_127(Global_4541213);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/]), sParam1, 64);
	Global_4539964[Global_4541213 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4539964[Global_4541213 /*104*/].f_24 = iParam2;
	}
	Global_4539964[Global_4541213 /*104*/].f_25 = iParam7;
	Global_4539964[Global_4541213 /*104*/].f_26 = uParam8;
	Global_4539964[Global_4541213 /*104*/].f_29 = uParam9;
	Global_4539964[Global_4541213 /*104*/].f_30 = uParam12;
	Global_4539964[Global_4541213 /*104*/].f_31 = uParam11;
	Global_4539964[Global_4541213 /*104*/].f_28 = 0;
	Global_4539964[Global_4541213 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_33), sParam4, 64);
	Global_4539964[Global_4541213 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_50), sParam5, 64);
	Global_4539964[Global_4541213 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_83), sParam15, 64);
	func_90();
	switch (iParam16)
	{
		case 3:
			Global_4539964[Global_4541213 /*104*/].f_99[Global_20266] = 1;
			break;
		
		case 0:
			Global_4539964[Global_4541213 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4539964[Global_4541213 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4539964[Global_4541213 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20266)
		{
			case 0:
				func_126(0);
				break;
			
			case 1:
				func_126(1);
				break;
			
			case 2:
				func_126(2);
				break;
			
			case 3:
				func_126(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4541214 = 1;
				break;
			
			case 0:
				Global_4541214 = 1;
				break;
			
			case 2:
				Global_4541214 = 1;
				break;
			
			case 1:
				Global_4541214 = 1;
				break;
			}
	}
	Global_22674[Global_4541213] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_125())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_124(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			func_124(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_116(iParam0, sParam1, bVar1, func_120(player_id()));
	return 1;
}

void func_116(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (!func_117())
	{
		return;
	}
	_0x65482BFD0923C8A1(iParam0, -1180597171, get_hash_key(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_117()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_141())
	{
		return 0;
	}
	if (func_118(player_id()))
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

bool func_118(int iParam0)
{
	return func_119(iParam0, 20);
}

var func_119(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_120(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

void func_121(int iParam0)
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
		if (func_97(14))
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
								func_123(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(iVar2);
								end_scaleform_movie_method();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_122(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_122(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_122(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_122(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_122(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								begin_scaleform_movie_method(Global_20247, "SET_DATA_SLOT");
								scaleform_movie_method_add_param_int(1);
								scaleform_movie_method_add_param_int(iVar0);
								scaleform_movie_method_add_param_int(Global_8143[iVar1 /*15*/].f_10);
								scaleform_movie_method_add_param_int(0);
								func_123(&(Global_8143[iVar1 /*15*/]));
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
								func_123(&(Global_8143[iVar1 /*15*/]));
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
								func_123(&(Global_8143[iVar1 /*15*/]));
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
								func_123(&(Global_8143[iVar1 /*15*/]));
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
								func_123(&(Global_8143[iVar1 /*15*/]));
								scaleform_movie_method_add_param_int(42);
								end_scaleform_movie_method();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_122(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_122(Global_20247, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8143[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_122(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_123(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_123(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_123(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_123(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_123(sParam11);
	}
	end_scaleform_movie_method();
}

void func_123(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

void func_124(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_125()
{
	return Global_1575058;
}

void func_126(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_4539964[iParam0 /*104*/].f_18 = iVar0;
	Global_4539964[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4539964[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4539964[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4539964[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4539964[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_129(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
		{
			Global_4541213 = iVar2;
		}
		iVar2++;
	}
	Global_4539964[Global_4541213 /*104*/].f_24 = 1;
}

int func_129(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
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

int func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_129(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

int func_131(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_115(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			set_bit(&Global_4541229, false);
		}
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_133(2, iParam1);
	return iParam0;
}

void func_133(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_134(char* sParam0, bool bParam1, int iParam2)
{
	if (is_string_null_or_empty(sParam0))
	{
		return sLocal_18;
	}
	if (are_strings_equal(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_133(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return _get_label_text(sParam0);
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = func_138(iParam0);
	if (iVar0 == -1)
	{
		func_136(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_136(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_138(iParam0) != -1)
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
	if (func_137(iParam0))
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

int func_137(int iParam0)
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

int func_138(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
			func_139(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_139(int iParam0)
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
	func_140(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_141();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (network_is_game_in_progress())
	{
		uParam0->f_3 = get_network_time();
	}
}

int func_141()
{
	return -1;
}

void func_142()
{
	Global_1641031.f_40.f_9 = 4;
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_142();
	bVar0 = false;
	return func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_144(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_145(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_141();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = get_player_name(iVar0);
		iVar1 = func_135(iVar0);
		if (iVar1 == 0)
		{
			if (is_time_less_than(get_network_time(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_134(sParam5, bParam6, &iVar3);
	uVar5 = func_132(iParam7, &iVar3);
	iVar6 = 0;
	if (!is_string_null_or_empty(sParam8))
	{
		iVar6++;
		if (!is_string_null_or_empty(sParam9))
		{
			iVar6++;
		}
	}
	if (are_strings_equal(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !is_string_null_or_empty(sVar2))
	{
		bVar12 = func_154(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_147(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_113();
	}
	func_146();
	func_112();
	func_111();
	return 1;
}

void func_146()
{
	Global_1641031.f_40.f_9 = 3;
}

int func_147(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	clear_bit(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_148(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { func_85(iParam0) };
			Global_8823 = iParam0;
			set_bit(&Global_8136, true);
			set_bit(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_148(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (is_player_playing(player_id()))
		{
			if (is_ped_swimming_under_water(player_ped_id()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (_get_number_of_references_of_script_with_name_hash(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (_get_number_of_references_of_script_with_name_hash(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_153() == 0)
	{
		func_151();
		return 0;
	}
	func_150(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_126(0);
		func_126(2);
		func_126(1);
	}
	else
	{
		func_90();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_126(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_126(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_126(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_126(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_125())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_124(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			func_124(Global_20247, "DISPLAY_VIEW", 1f, to_float(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_149(iParam0, sParam1, bVar1, func_120(player_id()));
	return 1;
}

void func_149(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (!func_117())
	{
		return;
	}
	_0x65482BFD0923C8A1(iParam0, 1654525105, get_hash_key(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_151()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_152(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_152(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
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

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_152(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

int func_154(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	clear_bit(&Global_8136, 10);
	iVar0 = 3;
	if (func_148(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { func_85(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			set_bit(&Global_8136, true);
			set_bit(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_155(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!is_ped_injured(player_ped_id()))
	{
	}
	if (is_ped_sprinting(player_ped_id()))
	{
		return 0;
	}
	func_146();
	bVar0 = true;
	if (func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

int func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!is_ped_injured(player_ped_id()))
	{
		if (is_ped_sprinting(player_ped_id()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_173(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_162(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_161(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_160(1);
		}
		func_159();
		func_112();
		func_158();
		func_157();
		return 1;
	}
	return 0;
}

void func_157()
{
	Global_2824944 = 0;
}

void func_158()
{
	Global_1641031.f_57 = 1;
	Global_1641031.f_57.f_1 = 0;
}

void func_159()
{
	Global_1641031.f_40.f_9 = 1;
}

void func_160(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_8138, false);
	}
	else
	{
		clear_bit(&Global_8138, false);
	}
}

void func_161(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_8136, 20);
	}
	else
	{
		clear_bit(&Global_8136, 20);
	}
}

int func_162(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_172(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam7);
}

int func_163(char* sParam0, int iParam1, bool bParam2)
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
					func_171();
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
		if (func_170(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_169();
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
				func_90();
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
				if (func_168())
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
			if (func_167())
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
			func_166();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_165();
		func_164();
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
		func_171();
	}
	return 0;
}

void func_164()
{
	if (!func_117())
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

void func_165()
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

void func_166()
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

int func_167()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
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

void func_169()
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

bool func_170(int iParam0, int iParam1)
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

void func_171()
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

void func_172(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_173(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_172(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam7);
}

int func_174(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!is_ped_injured(player_ped_id()))
	{
	}
	if (is_ped_sprinting(player_ped_id()))
	{
		return 0;
	}
	if (func_176(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_175();
		func_159();
		func_112();
		func_158();
		func_157();
		return 1;
	}
	return 0;
}

void func_175()
{
	Global_22623 = 0;
}

bool func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_172(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 1;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam8);
}

int func_177(var uParam0, char* sParam1, char* sParam2)
{
	if (func_179(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_178();
		func_112();
		func_158();
		return 1;
	}
	return 0;
}

void func_178()
{
	Global_1641031.f_40.f_9 = 2;
}

bool func_179(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_172(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_163(sParam2, iParam3, 0);
}

void func_180()
{
	Global_1641031.f_55 = Global_1641031.f_40.f_1;
	Global_1641031.f_55.f_1 = Global_1641031.f_40.f_10;
}

void func_181()
{
	Global_1641031.f_40 = 1;
}

bool func_182()
{
	return Global_1641031.f_40 == 1;
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	if (!func_184(iParam0))
	{
		return 0;
	}
	if (Global_1641031.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1641031.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_184(int iParam0)
{
	if (!func_185())
	{
		return 0;
	}
	if (!Global_1641031.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_185()
{
	if (Global_1641031.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_186(var uParam0)
{
	if (func_189())
	{
		return 0;
	}
	if (func_80())
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1931426 || func_188())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_187())
		{
			return 0;
		}
	}
	return 1;
}

bool func_187()
{
	return is_time_less_than(get_network_time(), Global_1659413);
}

int func_188()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_189()
{
	return func_167();
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (!func_80())
	{
		return 0;
	}
	return func_183(iParam0, iParam1, iParam2);
}

int func_191(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return get_hash_key(&cVar0);
}

bool func_192()
{
	return Global_2821909.f_1;
}

int func_193()
{
	if (Global_1641219.f_2)
	{
		return 1;
	}
	return func_194();
}

bool func_194()
{
	return func_189();
}

void func_195(int iParam0)
{
	Global_2825435.f_1072 = iParam0;
}

int func_196()
{
	if (func_197("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_197("HLP_SOC1"))
	{
		return 1;
	}
	if (func_197("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_197(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

void func_198(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_199(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_200(var uParam0)
{
	return uParam0->f_1;
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_139, 8))
		{
			set_bit(&(Global_1853348[player_id() /*834*/].f_139), 8);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_139, 8))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_139), 8);
	}
}

bool func_202()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_139, 8);
}

void func_203()
{
	do_screen_fade_in(800);
	if (!bLocal_590 || bLocal_591)
	{
		if (!is_ped_injured(player_ped_id()))
		{
		}
	}
	if (!bLocal_591)
	{
		Local_581[participant_id_to_int() /*5*/].f_2 = 0;
	}
	else
	{
		Local_581[participant_id_to_int() /*5*/].f_2 = 3;
	}
}

void func_204()
{
	if (func_210(&Local_62, &(Local_581[participant_id_to_int() /*5*/].f_4)))
	{
		Local_581[participant_id_to_int() /*5*/].f_2 = -1;
	}
	func_205(&Local_62);
}

void func_205(int* iParam0)
{
	bool bVar0;
	
	bVar0 = is_pause_menu_active();
	switch (iLocal_586)
	{
		case 0:
			if (BitTest(*iParam0, 18))
			{
				if (!func_200(&uLocal_592))
				{
					func_22(&uLocal_592, 0, 0);
				}
				if (!bVar0)
				{
					if (!is_help_message_being_displayed())
					{
						func_76("HLP_XP1", 9000);
						func_198(&uLocal_592);
						func_22(&uLocal_592, 0, 0);
						iLocal_586++;
					}
				}
				else if (func_199(&uLocal_592, 5000, 0))
				{
					iLocal_586++;
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!is_help_message_being_displayed())
				{
					func_76("HLP_XP2", 9000);
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!is_help_message_being_displayed())
				{
					func_76("HLP_RNK1", 9000);
					func_209(1);
					Global_2815059.f_1918 = 1;
					func_208(1, 0, -1);
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!is_help_message_being_displayed())
				{
					func_195(0);
					if (is_xbox360_version() || func_207())
					{
						func_76("HLP_CASHXBX", 9000);
					}
					else if (is_ps3_version() || func_206())
					{
						func_76("HLP_CASHPSN", 9000);
					}
					else
					{
						func_76("HLP_CASHGEN", 9000);
					}
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586 = 99;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586 = 99;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 99:
			if (!BitTest(uLocal_583, 2))
			{
				set_bit(&uLocal_583, 2);
			}
			break;
	}
}

bool func_206()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

bool func_207()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

void func_208(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1648034.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				set_bit(&(Global_1648034.f_1046), bParam0);
			}
			else
			{
				clear_bit(&(Global_1648034.f_1046), bParam0);
			}
			break;
	}
}

void func_209(int iParam0)
{
	Global_2815059.f_4598 = iParam0;
}

int func_210(int* iParam0, int* iParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!BitTest(*iParam0, 13))
	{
		if (does_cam_exist(get_rendering_cam()))
		{
			Var3 = { get_cam_coord(get_rendering_cam()) };
			if ((Var3.f_0 != 0f || Var3.f_1 != 0f) || Var3.f_2 != 0f)
			{
				set_focus_pos_and_vel(Var3, 0f, 0f, 0f);
				if (!BitTest(*iParam0, 14))
				{
					set_bit(iParam0, 14);
				}
			}
		}
	}
	else if (BitTest(*iParam0, 14))
	{
		clear_focus();
		clear_bit(iParam0, 14);
	}
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_reset_flag(player_ped_id(), 337, true);
	}
	func_389(iParam0);
	override_lodscale_this_frame(1f);
	func_383(iParam0);
	func_382(player_id());
	if (!BitTest(*iParam0, 31))
	{
		if (iParam0->f_6 > 0)
		{
			iParam0->f_32 = get_interior_at_coords_with_type(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (iParam0->f_32 != 0)
			{
				pin_interior_in_memory(iParam0->f_32);
				set_bit(iParam0, 31);
			}
		}
	}
	if (!is_ped_injured(player_ped_id()))
	{
		switch (iParam0->f_6)
		{
			case 0:
				iParam0->f_292 = 1;
				iParam0->f_293 = 0;
				iParam0->f_295 = 0;
				iParam0->f_294 = 0;
				if (_get_number_of_references_of_script_with_name_hash(joaat("fm_intro")) > 0)
				{
					iParam0->f_295 = 1;
					iParam0->f_294 = 1;
				}
				else if (_get_number_of_references_of_script_with_name_hash(func_381()) > 0)
				{
					iParam0->f_295 = 1;
				}
				if (!Global_2815059.f_1917)
				{
					Global_2815059.f_1917 = 1;
					network_set_voice_active(false);
				}
				if (!func_202())
				{
					func_201(1);
				}
				if (!is_screen_faded_out() && !is_screen_fading_out())
				{
					do_screen_fade_out(800);
				}
				if (!func_200(&(iParam0->f_15)))
				{
					func_22(&(iParam0->f_15), 0, 0);
				}
				set_scaleform_movie_as_no_longer_needed(&Global_1931927);
				Global_1931928 = 0;
				Global_1931930 = 0;
				Global_1931929 = 0;
				Global_1931931 = 0;
				iParam0->f_19 = { 0f, 0f, 0f };
				if (is_screen_faded_out())
				{
					*iParam0 = 0;
					iParam0->f_4 = 0;
					iParam0->f_5 = 0;
					func_370(0, 0, 0, 1, 1, 1, 0);
					set_local_player_visible_in_cutscene(true, false);
					func_415(1);
					_0x9E6542F0CE8E70A3(true);
					set_override_weather("EXTRASUNNY");
					network_override_clock_time(19, 0, 0);
					network_set_in_free_cam_mode(true);
					func_369(0);
					set_game_pauses_for_streaming(false);
					func_361(1, 0);
					func_332(1, 1);
					if (_get_number_of_references_of_script_with_name_hash(joaat("fm_intro")) < 1 || !func_331())
					{
						if (iParam0->f_292)
						{
							if (func_330() == 0)
							{
								prefetch_srl("GTAO_INTRO_MALE");
								_0x20C6C7E4EB082A7F(true);
							}
						}
					}
					func_323(14, 0);
					iParam0->f_6 = 1;
					*iParam0 = 0;
					clear_bit(iParam0, false);
					clear_bit(iParam0, true);
					clear_bit(iParam0, 2);
					clear_bit(iParam0, 9);
					set_bit(iParam0, 7);
					iParam0->f_122 = add_scenario_blocking_area(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, false, true, true, true);
				}
				break;
			
			case 1:
				request_model(joaat("frogger"));
				if (has_model_loaded(joaat("frogger")))
				{
					if (!iParam0->f_292 || is_srl_loaded())
					{
						if (func_320())
						{
							_0x4E52E752C76E7E7A(0);
							func_315(1, 1, 0);
							dont_render_in_game_ui(false);
							clear_help(true);
							if (!func_194())
							{
								func_314();
							}
							func_209(0);
							func_313();
							set_entity_coords(player_ped_id(), Global_1574725, true, false, false, true);
							set_entity_invincible(player_ped_id(), true);
							set_entity_collision(player_ped_id(), false, false);
							set_max_wanted_level(0);
							if (does_blip_exist(get_main_player_blip_id()))
							{
								set_blip_scale(get_main_player_blip_id(), 0f);
							}
							freeze_entity_position(player_ped_id(), true);
							iParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!is_player_switch_in_progress())
				{
					if (!BitTest(*iParam0, 4))
					{
						if (func_312() == 65 || func_312() == 66)
						{
							clear_focus();
							new_load_scene_start(754.2219f, 1226.831f, 356.5081f, func_311(-14.367f, 0f, 157.3524f), 100f, 0);
							func_198(&(iParam0->f_17));
							func_22(&(iParam0->f_17), 0, 0);
							set_bit(iParam0, 4);
						}
					}
					else if (prepare_music_event("FM_INTRO_START") && (is_new_load_scene_loaded() || func_199(&(iParam0->f_17), 5000, 0)))
					{
						if (!BitTest(*iParam0, 24))
						{
							if (BitTest(*iParam0, 7))
							{
								trigger_music_event("FM_INTRO_START");
								set_bit(iParam0, 24);
								set_bit(iParam0, 21);
							}
						}
						else if (get_music_playtime() > 0)
						{
							new_load_scene_stop();
							_0xE3E2C1B4C59DBC77(6);
							if (!does_cam_exist(iParam0->f_7))
							{
								iParam0->f_7 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
								set_cam_active(iParam0->f_7, true);
							}
							set_cam_params(iParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							set_cam_params(iParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							shake_cam(iParam0->f_7, "HAND_SHAKE", 0.15f);
							render_script_cams(true, false, 3000, true, true, 0);
							func_310(iParam0);
							set_bit(iParam0, 11);
							if (iParam0->f_292)
							{
								_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
								begin_srl();
							}
							freeze_entity_position(player_ped_id(), true);
							if (is_screen_faded_out())
							{
								do_screen_fade_in(800);
							}
							iParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_309(iParam0, 6);
				func_308(iParam0);
				if (func_307(iParam0, 6, 0))
				{
					clear_help(true);
					iParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!BitTest(*iParam0, 2))
				{
					clear_help(true);
					func_76("FMIC_INTRO2", -1);
					set_bit(iParam0, 2);
				}
				set_cam_params(iParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				set_cam_params(iParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
				iParam0->f_6 = 8;
				break;
			
			case 8:
				func_309(iParam0, 8);
				if (func_308(iParam0))
				{
					func_306(iParam0);
					if (func_307(iParam0, 8, 0))
					{
						iParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!BitTest(*iParam0, 10))
				{
					func_305();
					set_bit(iParam0, 10);
				}
				set_cam_params(iParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				set_cam_params(iParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (is_vehicle_driveable(iParam0->f_48, false))
				{
					unpause_playback_recorded_vehicle(iParam0->f_48);
					set_entity_visible(iParam0->f_48, true, false);
					set_heli_blades_full_speed(iParam0->f_48);
				}
				iParam0->f_6 = 10;
				break;
			
			case 10:
				if (is_vehicle_driveable(iParam0->f_48, false))
				{
					set_heli_blades_full_speed(iParam0->f_48);
				}
				func_309(iParam0, 10);
				if (func_304())
				{
					if (func_303(iParam0))
					{
						if (func_306(iParam0))
						{
							if (func_307(iParam0, 10, 0))
							{
								if (!is_ped_injured(player_ped_id()))
								{
									set_entity_coords(player_ped_id(), -2870.804f, 81.4979f, 13.1957f, true, false, false, true);
									freeze_entity_position(player_ped_id(), true);
								}
								fVar0 = 5000f;
								if (is_vehicle_driveable(iParam0->f_92[0], false))
								{
									start_playback_recorded_vehicle(iParam0->f_92[0], 100, "FM_Intro_uber", true);
									skip_time_in_playback_recorded_vehicle(iParam0->f_92[0], fVar0);
								}
								if (is_vehicle_driveable(iParam0->f_92[1], false))
								{
									start_playback_recorded_vehicle(iParam0->f_92[1], 101, "FM_Intro_uber", true);
									skip_time_in_playback_recorded_vehicle(iParam0->f_92[1], fVar0);
								}
								if (is_vehicle_driveable(iParam0->f_92[2], false))
								{
									start_playback_recorded_vehicle(iParam0->f_92[2], 102, "FM_Intro_uber", true);
									skip_time_in_playback_recorded_vehicle(iParam0->f_92[2], fVar0);
								}
								if (is_vehicle_driveable(iParam0->f_92[3], false))
								{
									start_playback_recorded_vehicle(iParam0->f_92[3], 103, "FM_Intro_uber", true);
									skip_time_in_playback_recorded_vehicle(iParam0->f_92[3], fVar0);
								}
								if (is_vehicle_driveable(iParam0->f_92[4], false))
								{
									start_playback_recorded_vehicle(iParam0->f_92[4], 104, "FM_Intro_uber", true);
									skip_time_in_playback_recorded_vehicle(iParam0->f_92[4], fVar0);
								}
								set_bit(iParam0, 15);
								do_screen_fade_in(800);
								iParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (BitTest(*iParam0, 15))
				{
					network_override_clock_time(16, 0, 0);
					func_302(iParam0);
					func_301(iParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					stop_cam_shaking(iParam0->f_7, true);
					detach_cam(iParam0->f_7);
					destroy_cam(iParam0->f_7, false);
					start_audio_scene("MP_INTRO_RACE_SCENE");
					_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_299(iParam0, 14);
					clear_bit(iParam0, 15);
				}
				if (!BitTest(*iParam0, 5))
				{
					func_76("FMIC_RACE1", -1);
					set_bit(iParam0, 5);
				}
				func_309(iParam0, 14);
				if (func_307(iParam0, 14, 0))
				{
					func_298(iParam0, 23539f, 0);
					network_override_clock_time(16, 0, 0);
					set_bit(iParam0, 15);
					iParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_299(iParam0, 15);
					clear_bit(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_287(iParam0);
				}
				else if (func_286(iParam0) && func_280(iParam0))
				{
					func_278(iParam0);
				}
				func_309(iParam0, 15);
				if (func_307(iParam0, 15, 0))
				{
					func_298(iParam0, 28833.33f, 75f);
					network_override_clock_time(16, 0, 0);
					set_bit(iParam0, 15);
					iParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (BitTest(*iParam0, 15))
				{
					func_277(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_299(iParam0, 16);
					clear_bit(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_287(iParam0);
				}
				else if (func_286(iParam0) && func_280(iParam0))
				{
					func_278(iParam0);
				}
				func_309(iParam0, 16);
				if (func_307(iParam0, 16, 0))
				{
					func_298(iParam0, 29700f, 0);
					network_override_clock_time(16, 0, 0);
					set_bit(iParam0, 15);
					iParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					set_synchronized_scene_rate(iParam0->f_9, 0.7f);
					func_299(iParam0, 17);
					clear_bit(iParam0, 15);
				}
				if (!BitTest(*iParam0, 6))
				{
					set_bit(iParam0, 6);
					func_76("FMIC_RACE2", -1);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_287(iParam0);
				}
				else if (func_286(iParam0) && func_280(iParam0))
				{
					func_278(iParam0);
				}
				func_309(iParam0, 17);
				if (func_307(iParam0, 17, 0))
				{
					func_298(iParam0, 36450f, 0);
					network_override_clock_time(16, 0, 0);
					set_bit(iParam0, 15);
					iParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 18);
					clear_bit(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_287(iParam0);
				}
				else if (func_286(iParam0) && func_280(iParam0))
				{
					func_278(iParam0);
				}
				func_309(iParam0, 18);
				if (func_276() && func_307(iParam0, 18, 0))
				{
					func_298(iParam0, 43650f, 0);
					network_override_clock_time(16, 0, 0);
					set_bit(iParam0, 15);
					iParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (BitTest(*iParam0, 15))
				{
					if (does_entity_exist(iParam0->f_92[2]))
					{
						delete_vehicle(&(iParam0->f_92[2]));
					}
					if (does_entity_exist(iParam0->f_92[3]))
					{
						delete_vehicle(&(iParam0->f_92[3]));
					}
					if (does_entity_exist(iParam0->f_92[4]))
					{
						delete_vehicle(&(iParam0->f_92[4]));
					}
					func_301(iParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 19);
					clear_bit(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_287(iParam0);
				}
				else
				{
					if (!BitTest(iParam0->f_3, 6))
					{
						if (iParam0->f_32 != 0)
						{
							if (is_interior_ready(iParam0->f_32))
							{
								if (!is_entity_dead(iParam0->f_91, false))
								{
									force_room_for_entity(iParam0->f_91, iParam0->f_32, get_hash_key("GtaMloRoom001"));
								}
								set_static_emitter_enabled("SE_MP_GARAGE_L_RADIO", false);
								iVar2 = 0;
								while (iVar2 < 8)
								{
									if (!is_entity_dead(iParam0->f_49[iVar2], false))
									{
										force_room_for_entity(iParam0->f_49[iVar2], iParam0->f_32, get_hash_key("GtaMloRoom001"));
									}
									iVar2++;
								}
								set_bit(&(iParam0->f_3), 6);
							}
						}
					}
					if (func_286(iParam0) && func_280(iParam0))
					{
						func_278(iParam0);
					}
				}
				func_275(iParam0);
				func_274(iParam0);
				func_309(iParam0, 19);
				if (func_307(iParam0, 19, 0) && BitTest(iParam0->f_3, 0))
				{
					if (BitTest(*iParam0, 12))
					{
						clear_bit(iParam0, 12);
					}
					iParam0->f_6 = 22;
				}
				else if (func_307(iParam0, 19, -4968))
				{
					if (!BitTest(*iParam0, 12))
					{
						clear_help(true);
						set_bit(iParam0, 12);
					}
				}
				else if (func_307(iParam0, 19, -5618))
				{
					if (!BitTest(*iParam0, 30))
					{
						animpostfx_play("MP_intro_logo", 0, false);
						set_bit(iParam0, 30);
					}
				}
				break;
			
			case 22:
				func_275(iParam0);
				func_274(iParam0);
				if (BitTest(iParam0->f_3, 0))
				{
					if (!does_cam_exist(iParam0->f_7))
					{
						iParam0->f_7 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
					}
					set_cam_active(iParam0->f_7, true);
					set_cam_params(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					set_cam_params(iParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					shake_cam(iParam0->f_7, "HAND_SHAKE", 0.1f);
					force_room_for_game_viewport(iParam0->f_32, get_hash_key("GtaMloRoom001"));
					set_static_emitter_enabled("SE_MP_GARAGE_L_RADIO", false);
					_0xE3E2C1B4C59DBC77(0);
					set_synchronized_scene_phase(iParam0->f_10, 0f);
					if (!is_ped_injured(iParam0->f_91))
					{
						force_ped_ai_and_animation_update(iParam0->f_91, false, false);
					}
					if (is_audio_scene_active("MP_INTRO_RACE_SCENE"))
					{
						stop_audio_scene("MP_INTRO_RACE_SCENE");
					}
					_0xBEB2D9A1D9A8F55A(9, 13, 9, 13);
					func_273(iParam0);
					func_272();
					func_76("FMIC_GAR", -1);
					iParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_275(iParam0);
				func_274(iParam0);
				func_309(iParam0, 23);
				if (func_286(iParam0) && func_280(iParam0))
				{
					func_278(iParam0);
				}
				if (func_307(iParam0, 23, 0))
				{
					set_cam_params(iParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					set_cam_params(iParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					set_synchronized_scene_phase(iParam0->f_10, 0f);
					if (!is_ped_injured(iParam0->f_91))
					{
						force_ped_ai_and_animation_update(iParam0->f_91, false, false);
					}
					func_270(iParam0, 0);
					func_270(iParam0, 1);
					func_270(iParam0, 5);
					func_270(iParam0, 6);
					iParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_275(iParam0);
				func_274(iParam0);
				func_309(iParam0, 24);
				if (func_286(iParam0) && func_280(iParam0))
				{
					func_278(iParam0);
				}
				if (func_307(iParam0, 24, 0))
				{
					iParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_275(iParam0);
				func_274(iParam0);
				set_entity_coords(player_ped_id(), -1148.286f, -1639.737f, 5.106698f, true, false, false, true);
				set_bit(iParam0, 13);
				set_cam_params(iParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				set_cam_params(iParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				network_override_clock_time(18, 0, 0);
				func_270(iParam0, 2);
				func_270(iParam0, 7);
				set_model_as_no_longer_needed(func_269());
				if (does_entity_exist(iParam0->f_91))
				{
					delete_ped(&(iParam0->f_91));
				}
				set_bit(iParam0, 29);
				iParam0->f_6 = 28;
				break;
			
			case 28:
				func_275(iParam0);
				func_274(iParam0);
				if (!BitTest(*iParam0, 8))
				{
					set_bit(iParam0, 8);
				}
				if (func_286(iParam0) && func_280(iParam0))
				{
					func_278(iParam0);
				}
				func_309(iParam0, 28);
				if ((prepare_music_event("FM_INTRO_DRIVE_START") && BitTest(iParam0->f_3, 3)) && func_307(iParam0, 28, 0))
				{
					iParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (iParam0->f_295)
				{
					if (!is_entity_dead(player_ped_id(), false))
					{
						if (func_266(iParam0))
						{
							register_entity_for_cutscene(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							register_entity_for_cutscene(player_ped_id(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							register_entity_for_cutscene(player_ped_id(), "MP_Male_Character", 0, 0, 0);
							register_entity_for_cutscene(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_266(iParam0))
				{
					register_entity_for_cutscene(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					register_entity_for_cutscene(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!is_entity_dead(iParam0->f_35, false))
				{
					register_entity_for_cutscene(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!is_entity_dead(iParam0->f_34, false))
				{
					register_entity_for_cutscene(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!is_entity_dead(iParam0->f_33, false))
				{
					set_entity_visible(iParam0->f_33, true, false);
					register_entity_for_cutscene(iParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_264(iParam0);
				load_cloud_hat("CONTRAILS", 0f);
				_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
				func_76("FMIC_TENN", -1);
				start_cutscene(4);
				func_256(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 30;
				break;
			
			case 30:
				if (is_cutscene_playing())
				{
					if (iParam0->f_32 != 0)
					{
						unpin_interior(iParam0->f_32);
					}
					func_255(iParam0);
					if (iParam0->f_293)
					{
						iParam0->f_26 = (get_game_timer() - iParam0->f_13);
					}
					else
					{
						iParam0->f_26 = 52618;
						iParam0->f_27 = 52618;
					}
					iParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (iParam0->f_295)
				{
					if (func_266(iParam0))
					{
						if (can_set_exit_state_for_registered_entity("MP_Female_Character", 0))
						{
							if (is_vehicle_driveable(iParam0->f_34, false))
							{
								if (!is_ped_injured(player_ped_id()))
								{
									if (!is_ped_in_any_vehicle(player_ped_id(), false))
									{
										task_enter_vehicle(player_ped_id(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (can_set_exit_state_for_registered_entity("MP_Male_Character", 0))
					{
						if (is_vehicle_driveable(iParam0->f_34, false))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								if (!is_ped_in_any_vehicle(player_ped_id(), false))
								{
									task_enter_vehicle(player_ped_id(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (can_set_exit_state_for_registered_entity("LAMAR", 0))
				{
					if (is_vehicle_driveable(iParam0->f_34, false))
					{
						if (!is_ped_injured(iParam0->f_35))
						{
							if (!is_ped_in_any_vehicle(iParam0->f_35, false))
							{
								task_enter_vehicle(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								force_ped_ai_and_animation_update(iParam0->f_35, false, false);
							}
						}
					}
				}
				if (can_set_exit_state_for_registered_entity("MP_Lamar_Car", 0))
				{
					if (is_vehicle_driveable(iParam0->f_34, false))
					{
						set_vehicle_engine_on(iParam0->f_34, true, true, false);
						set_entity_coords(iParam0->f_34, -1028.406f, -2732.782f, 19.5931f, true, false, false, true);
						set_entity_heading(iParam0->f_34, -106.11f);
						func_254(iParam0, 3099.997f);
						set_vehicle_doors_shut(iParam0->f_34, true);
					}
				}
				if (can_set_exit_state_for_camera(false))
				{
					network_override_clock_time(21, 0, 0);
					func_299(iParam0, 33);
					func_301(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (BitTest(*iParam0, 29))
				{
					if (_has_cutscene_cut_this_frame() || get_cutscene_time() > 3254)
					{
						clear_bit(iParam0, 29);
					}
				}
				if ((func_253(iParam0) && func_252(iParam0)) && !is_cutscene_playing())
				{
					if (iParam0->f_293)
					{
						iParam0->f_28 = (get_game_timer() - iParam0->f_13);
					}
					else
					{
						iParam0->f_29 = 134784;
						if (func_266(iParam0))
						{
							iParam0->f_28 = 134784;
						}
						else
						{
							iParam0->f_28 = 134784;
						}
					}
					_0x62ECFCFDEE7885D6();
					_invalidate_vehicle_idle_cam();
					if (BitTest(*iParam0, 7))
					{
						trigger_music_event("FM_INTRO_DRIVE_START");
						set_bit(iParam0, 21);
					}
					if (!has_cutscene_finished())
					{
						stop_cutscene(false);
					}
					if (!BitTest(*iParam1, 1))
					{
						set_bit(iParam1, true);
					}
					func_251(iParam0);
					func_250(iParam0);
					func_256(0, 1, 1, 0, 0, 0, 0);
					set_bit(iParam0, 15);
					clear_bit(iParam0, 13);
					iParam0->f_6 = 33;
				}
				else
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (get_game_timer() - (iParam0->f_26 + get_cutscene_time()));
					}
					if (!BitTest(*iParam0, 22))
					{
						if (_0x583DF8E3D4AFBD98() == 1)
						{
							network_override_clock_time(19, 59, 0);
							set_bit(iParam0, 22);
						}
					}
					if (func_248(iParam0))
					{
						if (_0x583DF8E3D4AFBD98() == 2)
						{
							if (!BitTest(*iParam0, 18))
							{
								set_bit(iParam0, 18);
							}
							if (get_cutscene_time() > 23146)
							{
								if (!BitTest(*iParam0, 27))
								{
									start_particle_fx_non_looped_on_entity("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									set_bit(iParam0, 27);
								}
								if (!BitTest(*iParam0, 28))
								{
									start_particle_fx_non_looped_on_entity("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									set_bit(iParam0, 28);
								}
							}
							_0x12DED8CA53D47EA5(4950f);
							if (BitTest(*iParam0, 22))
							{
								network_override_clock_time(21, 0, 0);
								clear_bit(iParam0, 22);
							}
							if (get_cutscene_time() > 23254)
							{
								func_247(iParam0);
							}
						}
					}
					if (_0x583DF8E3D4AFBD98() > 2)
					{
						func_250(iParam0);
						if (!BitTest(*iParam0, 22))
						{
							network_override_clock_time(21, 0, 0);
							set_bit(iParam0, 22);
						}
						if (is_vehicle_driveable(iParam0->f_34, false))
						{
							request_vehicle_high_detail_model(iParam0->f_34);
							set_vehicle_lights(iParam0->f_34, 2);
						}
					}
					iParam0->f_31 = get_cutscene_time();
				}
				break;
			
			case 33:
				if (func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (func_307(iParam0, 33, -5450))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), true);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 2))
					{
						if (func_307(iParam0, 33, -5450))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (func_307(iParam0, 33, -5450))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), true);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					start_audio_scene("MP_INTRO_LAMAR_DRIVE_SCENE");
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 33);
				func_245(iParam0);
				if (func_307(iParam0, 33, 0))
				{
					set_bit(iParam0, 15);
					iParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 2))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 2);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!is_entity_dead(iParam0->f_34, false))
					{
						attach_cam_to_entity(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						point_cam_at_entity(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						set_cam_fov(iParam0->f_7, 33.3479f);
						shake_cam(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						set_cam_active(iParam0->f_7, true);
						if (!is_entity_dead(iParam0->f_35, false))
						{
							set_entity_visible(iParam0->f_35, false, false);
						}
						if (!is_entity_dead(iParam0->f_36, false))
						{
							set_entity_visible(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						attach_synchronized_scene_to_entity(iParam0->f_11, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_dside_f"));
						if (func_266(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_pside_f"));
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.129f);
							set_synchronized_scene_phase(iParam0->f_12, 0.129f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, 0);
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.145f);
							set_synchronized_scene_phase(iParam0->f_12, 0.145f);
						}
						force_ped_ai_and_animation_update(iParam0->f_36, false, false);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 34);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 34);
				func_245(iParam0);
				if (func_307(iParam0, 34, 0))
				{
					func_254(iParam0, 18966.65f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (func_307(iParam0, 34, 1100))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), 3);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 4))
					{
						if (func_307(iParam0, 34, 1100))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (func_307(iParam0, 34, 1000))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), 3);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!is_entity_dead(iParam0->f_35, false))
					{
						set_entity_visible(iParam0->f_35, true, false);
					}
					if (!is_entity_dead(iParam0->f_36, false))
					{
						set_entity_visible(iParam0->f_36, false, false);
					}
					if (!is_entity_dead(player_ped_id(), false) && !is_entity_dead(iParam0->f_34, false))
					{
						task_enter_vehicle(player_ped_id(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 35);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 35);
				func_245(iParam0);
				if (func_307(iParam0, 35, 0))
				{
					set_bit(iParam0, 15);
					iParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 5))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 5);
						}
					}
				}
				if (!func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 4))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 4);
						}
					}
					if (!BitTest(iParam0->f_1, 5))
					{
						if (func_307(iParam0, 36, -3750))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), 5);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!is_entity_dead(iParam0->f_34, false))
					{
						attach_cam_to_entity(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						point_cam_at_entity(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						set_cam_fov(iParam0->f_7, 33.3479f);
						shake_cam(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						set_cam_active(iParam0->f_7, true);
						if (!is_entity_dead(iParam0->f_35, false))
						{
							set_entity_visible(iParam0->f_35, false, false);
						}
						if (!is_entity_dead(iParam0->f_36, false))
						{
							set_entity_visible(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						attach_synchronized_scene_to_entity(iParam0->f_11, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_dside_f"));
						if (func_266(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_pside_f"));
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.363f);
							set_synchronized_scene_phase(iParam0->f_12, 0.363f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, 0);
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.298f);
							set_synchronized_scene_phase(iParam0->f_12, 0.298f);
						}
						force_ped_ai_and_animation_update(iParam0->f_36, false, false);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 36);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 36);
				func_245(iParam0);
				if (func_307(iParam0, 36, 0))
				{
					func_254(iParam0, 42700.96f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 6);
						}
					}
				}
				if (!func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (func_307(iParam0, 36, 1000))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), 6);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!is_entity_dead(iParam0->f_35, false))
					{
						set_entity_visible(iParam0->f_35, true, false);
					}
					if (!is_entity_dead(iParam0->f_36, false))
					{
						set_entity_visible(iParam0->f_36, false, false);
					}
					if (!is_entity_dead(player_ped_id(), false) && !is_entity_dead(iParam0->f_34, false))
					{
						task_enter_vehicle(player_ped_id(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 37);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 37);
				func_245(iParam0);
				if (func_307(iParam0, 37, 0))
				{
					func_254(iParam0, 51033.28f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 7);
						}
					}
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 9);
						}
					}
				}
				if (!func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (func_307(iParam0, 37, 2500))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								set_bit(&(iParam0->f_1), 7);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 38);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 38);
				func_245(iParam0);
				if (func_307(iParam0, 38, 0))
				{
					set_bit(iParam0, 15);
					iParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 9);
						}
					}
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 31);
						}
					}
				}
				if (func_266(iParam0))
				{
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							set_bit(&(iParam0->f_1), 31);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!is_entity_dead(iParam0->f_34, false))
					{
						attach_cam_to_entity(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						point_cam_at_entity(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						set_cam_fov(iParam0->f_7, 33.3479f);
						shake_cam(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						set_cam_active(iParam0->f_7, true);
						if (!is_entity_dead(iParam0->f_35, false))
						{
							set_entity_visible(iParam0->f_35, false, false);
						}
						if (!is_entity_dead(iParam0->f_36, false))
						{
							set_entity_visible(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						attach_synchronized_scene_to_entity(iParam0->f_11, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_dside_f"));
						if (func_266(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_pside_f"));
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.811f);
							set_synchronized_scene_phase(iParam0->f_12, 0.811f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, 0);
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.791f);
							set_synchronized_scene_phase(iParam0->f_12, 0.791f);
						}
						force_ped_ai_and_animation_update(iParam0->f_36, false, false);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 39);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 39);
				func_245(iParam0);
				if (func_307(iParam0, 39, 0))
				{
					func_254(iParam0, 85050f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!BitTest(iParam0->f_1, 31))
				{
					if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						set_bit(&(iParam0->f_1), 31);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					if (!is_entity_dead(iParam0->f_35, false))
					{
						set_entity_visible(iParam0->f_35, true, false);
					}
					if (!is_entity_dead(iParam0->f_36, false))
					{
						set_entity_visible(iParam0->f_36, false, false);
					}
					if (!is_entity_dead(player_ped_id(), false) && !is_entity_dead(iParam0->f_34, false))
					{
						task_enter_vehicle(player_ped_id(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 40);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 40);
				if (func_245(iParam0) && func_307(iParam0, 40, 0))
				{
					func_254(iParam0, 116366.5f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (BitTest(*iParam0, 15))
				{
					network_override_clock_time(0, 0, 0);
					func_301(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_299(iParam0, 41);
					unload_cloud_hat("CONTRAILS", 0f);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 41);
				if (func_307(iParam0, 41, 0))
				{
					_0x03300B57FCAC6DDB(true);
					func_254(iParam0, 127166.5f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (BitTest(*iParam0, 15))
				{
					func_244(iParam0);
					func_301(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 42);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 42);
				if (func_307(iParam0, 42, 0))
				{
					_0x03300B57FCAC6DDB(false);
					func_254(iParam0, 170800f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 43);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 43);
				if (func_307(iParam0, 43, 0))
				{
					_0xBEB2D9A1D9A8F55A(9, 12, 9, 12);
					func_254(iParam0, 191799.8f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 44);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 44);
				if (func_307(iParam0, 44, 0))
				{
					func_254(iParam0, 196633.1f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 45);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 45);
				if (func_307(iParam0, 45, 0))
				{
					func_254(iParam0, 201466.5f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 46);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 46);
				if (func_307(iParam0, 46, 0))
				{
					set_bit(iParam0, 15);
					iParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_243(iParam0);
				if (BitTest(*iParam0, 15))
				{
					if (!is_entity_dead(iParam0->f_34, false))
					{
						attach_cam_to_entity(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						point_cam_at_entity(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						set_cam_fov(iParam0->f_7, 33.3479f);
						shake_cam(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						set_cam_active(iParam0->f_7, true);
						if (!is_entity_dead(iParam0->f_35, false))
						{
							set_entity_visible(iParam0->f_35, false, false);
						}
						if (!is_entity_dead(iParam0->f_36, false))
						{
							set_entity_visible(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
						attach_synchronized_scene_to_entity(iParam0->f_11, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_dside_f"));
						if (func_266(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, get_entity_bone_index_by_name(iParam0->f_34, "seat_pside_f"));
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.726f);
							set_synchronized_scene_phase(iParam0->f_12, 0.74f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(iParam0->f_12, iParam0->f_34, 0);
							task_synchronized_scene(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							task_synchronized_scene(player_ped_id(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							set_synchronized_scene_phase(iParam0->f_11, 0.726f);
							set_synchronized_scene_phase(iParam0->f_12, 0.815f);
						}
						force_ped_ai_and_animation_update(iParam0->f_36, false, false);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 47);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 47);
				if (func_307(iParam0, 47, 0))
				{
					func_254(iParam0, 213066.4f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_243(iParam0);
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!is_entity_dead(iParam0->f_35, false))
					{
						set_entity_visible(iParam0->f_35, true, false);
					}
					if (!is_entity_dead(iParam0->f_36, false))
					{
						set_entity_visible(iParam0->f_36, false, false);
					}
					if (!is_entity_dead(player_ped_id(), false) && !is_entity_dead(iParam0->f_34, false))
					{
						task_enter_vehicle(player_ped_id(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
					}
					func_299(iParam0, 48);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 48);
				if (func_307(iParam0, 48, 0))
				{
					set_bit(&(Global_1853348[player_id() /*834*/].f_139), 3);
					func_242(iParam0, 10177.75f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_243(iParam0);
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 49);
					clear_bit(iParam0, 15);
				}
				func_309(iParam0, 49);
				if (prepare_music_event("FM_INTRO_DRIVE_END") && func_307(iParam0, 49, 0))
				{
					func_240(iParam0, 4500f);
					set_bit(iParam0, 15);
					iParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_243(iParam0);
				if (!is_screen_faded_in())
				{
					if (!is_screen_fading_in())
					{
						do_screen_fade_in(250);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_301(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (iParam0->f_292)
					{
						end_srl();
						clear_bit(iParam0, 11);
					}
					func_299(iParam0, 50);
					clear_bit(iParam0, 15);
				}
				if (!BitTest(*iParam0, 20))
				{
					if (func_266(iParam0))
					{
						request_cutscene("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						request_cutscene("MP_INT_MCS_5_ALT1", 8);
					}
					if (iParam0->f_295)
					{
						if (can_request_assets_for_cutscene_entity())
						{
							if (func_266(iParam0))
							{
								set_cutscene_entity_streaming_flags("MP_Female_Character", 0, 1);
							}
							else
							{
								set_cutscene_entity_streaming_flags("MP_1", 0, 1);
							}
						}
					}
					if (has_cutscene_loaded())
					{
						set_bit(iParam0, 20);
					}
				}
				func_309(iParam0, 50);
				if (!is_entity_dead(iParam0->f_34, false))
				{
					if (is_playback_going_on_for_vehicle(iParam0->f_34))
					{
						if (get_entity_speed(iParam0->f_34) < 1f)
						{
							stop_playback_recorded_vehicle(iParam0->f_34);
						}
					}
				}
				if (func_307(iParam0, 50, 0) && BitTest(*iParam0, 20))
				{
					if (BitTest(*iParam0, 21))
					{
						trigger_music_event("FM_INTRO_DRIVE_END");
						clear_bit(iParam0, 21);
					}
					stop_playback_recorded_vehicle(iParam0->f_34);
					iParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (iParam0->f_295)
				{
					if (!is_entity_dead(player_ped_id(), false))
					{
						if (func_266(iParam0))
						{
							register_entity_for_cutscene(player_ped_id(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							register_entity_for_cutscene(player_ped_id(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!is_entity_dead(iParam0->f_35, false))
				{
					register_entity_for_cutscene(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!is_entity_dead(iParam0->f_34, false))
				{
					register_entity_for_cutscene(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				set_bit(iParam0, 13);
				if (is_audio_scene_active("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					stop_audio_scene("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				start_cutscene(4);
				func_256(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 52;
				break;
			
			case 52:
				if (is_cutscene_playing())
				{
					render_script_cams(false, false, 3000, true, false, 0);
					if (iParam0->f_293)
					{
						iParam0->f_30 = (get_game_timer() - iParam0->f_13);
					}
					else
					{
						iParam0->f_30 = func_239(iParam0);
					}
					iParam0->f_14 = 0;
					iParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (iParam0->f_295)
				{
					if (func_266(iParam0))
					{
						if (!BitTest(*iParam0, 23))
						{
							if (can_set_exit_state_for_registered_entity("MP_Female_Character", 0))
							{
								if (!is_ped_injured(player_ped_id()))
								{
									set_entity_coords(player_ped_id(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									set_entity_heading(player_ped_id(), get_heading_from_vector_2d(Var1.f_0, Var1.f_1));
									set_gameplay_cam_relative_heading(0f);
									set_gameplay_cam_relative_pitch(0f, 1f);
									set_bit(iParam0, 23);
								}
							}
						}
					}
					else if (!BitTest(*iParam0, 23))
					{
						if (can_set_exit_state_for_registered_entity("MP_1", 0))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								set_entity_coords(player_ped_id(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								set_entity_heading(player_ped_id(), get_heading_from_vector_2d(Var1.f_0, Var1.f_1));
								set_gameplay_cam_relative_heading(0f);
								set_gameplay_cam_relative_pitch(0f, 1f);
								set_bit(iParam0, 23);
							}
						}
					}
				}
				if (can_set_exit_state_for_registered_entity("LAMAR", 0))
				{
					if (is_vehicle_driveable(iParam0->f_34, false))
					{
						if (!is_ped_injured(iParam0->f_35))
						{
							if (!is_ped_in_any_vehicle(iParam0->f_35, false))
							{
								task_enter_vehicle(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (can_set_exit_state_for_registered_entity("MP_Lamar_Car", 0))
				{
					if (is_vehicle_driveable(iParam0->f_34, false))
					{
						set_vehicle_on_ground_properly(iParam0->f_34, 5f);
					}
				}
				if (can_set_exit_state_for_camera(false))
				{
					func_238(1);
					set_gameplay_cam_relative_heading(0f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_237(player_id()))
				{
					func_236(1);
				}
				if (is_cutscene_playing())
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (get_game_timer() - (iParam0->f_30 + get_cutscene_time()));
					}
					switch (iParam0->f_14)
					{
						case 0:
							func_235(iParam0, 0);
							break;
						
						case 10:
							func_235(iParam0, 1);
							break;
						
						case 20:
							func_235(iParam0, 2);
							break;
						
						case 30:
							func_235(iParam0, 3);
							break;
						
						case 40:
							func_235(iParam0, 4);
							break;
						
						case 50:
							func_235(iParam0, 5);
							break;
						
						case 60:
							func_235(iParam0, 6);
							break;
						
						case 70:
							func_235(iParam0, 7);
							break;
						
						case 80:
							func_235(iParam0, 8);
							break;
						
						case 90:
							func_235(iParam0, 9);
							break;
						
						case 100:
							if (does_entity_exist(iParam0->f_36))
							{
								delete_ped(&(iParam0->f_36));
							}
							break;
					}
					iParam0->f_14++;
				}
				else
				{
					_0x62ECFCFDEE7885D6();
					_invalidate_vehicle_idle_cam();
					if (!has_cutscene_finished())
					{
						stop_cutscene(false);
					}
					func_256(0, 1, 1, 0, 0, 0, 0);
					clear_bit(iParam0, 13);
					iParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (is_cutscene_playing())
				{
					stop_cutscene_immediately();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (is_screen_faded_out())
					{
						render_script_cams(false, false, 3000, true, false, 0);
						set_bit(iParam0, 13);
						set_entity_coords(player_ped_id(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						freeze_entity_position(player_ped_id(), true);
						if (iParam0->f_292)
						{
							end_srl();
							clear_bit(iParam0, 11);
						}
						func_198(&(iParam0->f_17));
						func_22(&(iParam0->f_17), 0, 0);
						set_bit(iParam0, 17);
					}
					else if (!is_screen_fading_out())
					{
						do_screen_fade_out(250);
					}
				}
				else if (func_199(&(iParam0->f_17), 10000, 0))
				{
					if (func_234(iParam0))
					{
						func_302(iParam0);
						func_250(iParam0);
						if (!is_ped_injured(player_ped_id()))
						{
							freeze_entity_position(player_ped_id(), false);
							if (!is_ped_in_any_vehicle(player_ped_id(), false))
							{
								set_entity_collision(player_ped_id(), true, false);
								set_entity_coords(player_ped_id(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								set_entity_heading(player_ped_id(), 61.3164f);
							}
						}
						if (!is_ped_injured(iParam0->f_35))
						{
							if (!is_ped_in_any_vehicle(iParam0->f_35, false))
							{
								if (is_vehicle_driveable(iParam0->f_34, false))
								{
									task_enter_vehicle(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_238(1);
						if (!func_237(player_id()))
						{
							func_236(1);
						}
						func_256(0, 1, 1, 0, 0, 0, 0);
						network_override_clock_time(0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							trigger_music_event("FM_INTRO_DRIVE_END");
							clear_bit(iParam0, 21);
						}
						set_bit(iParam0, true);
						set_bit(iParam0, 15);
						iParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (is_cutscene_playing())
				{
					stop_cutscene_immediately();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (is_screen_faded_out())
					{
						render_script_cams(false, false, 3000, true, false, 0);
						set_bit(iParam0, 13);
						set_entity_coords(player_ped_id(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						freeze_entity_position(player_ped_id(), true);
						if (iParam0->f_292)
						{
							end_srl();
							clear_bit(iParam0, 11);
						}
						func_198(&(iParam0->f_17));
						func_22(&(iParam0->f_17), 0, 0);
						set_bit(iParam0, 17);
					}
					else if (!is_screen_fading_out())
					{
						do_screen_fade_out(250);
					}
				}
				else if (func_199(&(iParam0->f_17), 10000, 0))
				{
					if (func_286(iParam0))
					{
						func_302(iParam0);
						func_250(iParam0);
						if (!is_ped_injured(player_ped_id()))
						{
							freeze_entity_position(player_ped_id(), false);
							if (!is_ped_in_any_vehicle(player_ped_id(), false))
							{
								set_entity_collision(player_ped_id(), true, false);
								set_entity_coords(player_ped_id(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								set_entity_heading(player_ped_id(), 61.3164f);
								if (is_vehicle_driveable(iParam0->f_34, false))
								{
									task_enter_vehicle(player_ped_id(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!is_ped_injured(iParam0->f_35))
						{
							if (!is_ped_in_any_vehicle(iParam0->f_35, false))
							{
								if (is_vehicle_driveable(iParam0->f_34, false))
								{
									task_enter_vehicle(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_237(player_id()))
						{
						}
						func_256(0, 1, 1, 0, 0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							trigger_music_event("FM_INTRO_DRIVE_END");
							clear_bit(iParam0, 21);
						}
						do_screen_fade_in(250);
						network_override_clock_time(0, 0, 0);
						set_bit(&(Global_1853348[player_id() /*834*/].f_139), 3);
						iParam0->f_13 = (get_game_timer() - func_231(iParam0, 48, 0));
						iParam0->f_293 = 1;
						func_242(iParam0, 10177.75f);
						set_bit(iParam0, 15);
						iParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_309(iParam0, 57);
				bVar4 = !iParam0->f_288;
				func_219(iParam0, bVar4, 0);
				if (iParam0->f_292)
				{
					end_srl();
					clear_bit(iParam0, 11);
				}
				if (!is_ped_injured(iParam0->f_35))
				{
					task_stand_still(iParam0->f_35, -1);
					set_ped_keep_task(iParam0->f_35, true);
				}
				network_set_voice_active(true);
				if (!iParam0->f_288)
				{
					func_32(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_218(iParam0);
		if (!iParam0->f_291)
		{
			if (iParam0->f_293)
			{
				iParam0->f_289 = to_float((get_game_timer() - iParam0->f_13));
			}
			else
			{
				iParam0->f_289 = to_float(func_239(iParam0));
			}
			iParam0->f_290 = func_217(iParam0);
		}
		iParam0->f_291 = 0;
		if (iParam0->f_292 && BitTest(*iParam0, 11))
		{
			if (iParam0->f_293)
			{
				set_srl_time(iParam0->f_289);
			}
			else
			{
				set_srl_time(iParam0->f_290);
			}
		}
		func_214(iParam0);
		if (BitTest(*iParam0, 12))
		{
			if (func_276())
			{
				func_213();
			}
		}
		if (iParam0->f_6 > 0 && iParam0->f_6 <= 57)
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_player_control_on(player_id()))
				{
					set_player_control(player_id(), false, 60);
				}
			}
			func_211(iParam0);
			disable_frontend_this_frame();
			hide_hud_component_this_frame(9);
			hide_hud_component_this_frame(7);
			hide_hud_component_this_frame(18);
			hide_hud_component_this_frame(6);
			hide_hud_component_this_frame(3);
			hide_hud_component_this_frame(13);
			hide_hud_component_this_frame(4);
		}
		if (Global_2815059.f_1918)
		{
			enable_control_action(2, 187, true);
		}
	}
	return 0;
}

void func_211(int* iParam0)
{
	int iVar0;
	
	if (!BitTest(*iParam0, 9))
	{
		if (iParam0->f_6 > 0)
		{
			if (!network_is_in_tutorial_session())
			{
				if (!network_is_tutorial_session_change_pending())
				{
					iVar0 = player_id() + 32;
					_0xFB680D403909DC70(1, iVar0);
					func_212(1);
					set_bit(iParam0, 9);
				}
			}
			else
			{
				func_212(1);
				set_bit(iParam0, 9);
			}
		}
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_139, 18))
		{
			set_bit(&(Global_1853348[player_id() /*834*/].f_139), 18);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_139, 18))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_139), 18);
	}
}

void func_213()
{
	draw_scaleform_movie_fullscreen(Global_1577865, 255, 255, 255, 255, 0);
	if (Global_1577867 == 0)
	{
		begin_scaleform_movie_method(Global_1577865, "SET_BIG_LOGO_VISIBLE");
		scaleform_movie_method_add_param_int(1);
		scaleform_movie_method_add_param_bool(true);
		end_scaleform_movie_method();
		Global_1577867 = 1;
	}
}

void func_214(int* iParam0)
{
	struct<3> Var0;
	
	if (does_entity_exist(iParam0->f_58[iParam0->f_90]))
	{
		if (is_entity_dead(iParam0->f_58[iParam0->f_90], false))
		{
		}
		Var0 = { get_entity_coords(iParam0->f_58[iParam0->f_90], true) };
		if (Var0.f_2 < -50f)
		{
			func_215(iParam0, iParam0->f_90);
		}
	}
	iParam0->f_90++;
	if (iParam0->f_90 >= 15)
	{
		iParam0->f_90 = 0;
	}
}

void func_215(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (does_entity_exist(uParam0->f_58[bParam1]))
	{
		if (is_entity_dead(uParam0->f_58[bParam1], false))
		{
		}
		func_216(bParam1, &Var0, &fVar1);
		set_entity_coords(uParam0->f_58[bParam1], Var0, true, false, false, true);
		set_entity_heading(uParam0->f_58[bParam1], fVar1);
		freeze_entity_position(uParam0->f_58[bParam1], true);
		set_vehicle_fixed(uParam0->f_58[bParam1]);
		set_entity_collision(uParam0->f_58[bParam1], false, false);
		set_entity_visible(uParam0->f_58[bParam1], false, false);
	}
	if (does_entity_exist(uParam0->f_74[bParam1]))
	{
		if (is_entity_dead(uParam0->f_74[bParam1], false))
		{
		}
		set_entity_visible(uParam0->f_74[bParam1], false, false);
	}
}

void func_216(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_217(int* iParam0)
{
	float fVar0;
	float fVar1;
	
	if (iParam0->f_6 >= 31 && iParam0->f_6 < 33)
	{
		if (func_266(iParam0))
		{
			fVar0 = to_float((iParam0->f_27 + get_cutscene_time()));
			if (_0x583DF8E3D4AFBD98() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / to_float(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = to_float((iParam0->f_27 + get_cutscene_time()));
		}
		return fVar0;
	}
	return iParam0->f_289;
}

void func_218(int* iParam0)
{
	if (BitTest(*iParam0, 29))
	{
		draw_spot_light(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		draw_spot_light(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_219(int* iParam0, bool bParam1, bool bParam2)
{
	if (!BitTest(*iParam0, 0))
	{
		if (is_cutscene_playing())
		{
			stop_cutscene(false);
		}
		_0x9E6542F0CE8E70A3(false);
		if (iParam0->f_292)
		{
			_0x20C6C7E4EB082A7F(false);
			end_srl();
			clear_bit(iParam0, 11);
		}
		if (BitTest(*iParam0, 14))
		{
			clear_focus();
			clear_bit(iParam0, 14);
		}
		func_230();
		func_251(iParam0);
		func_302(iParam0);
		func_250(iParam0);
		func_272();
		func_255(iParam0);
		func_273(iParam0);
		func_229(iParam0);
		func_244(iParam0);
		remove_scenario_blocking_areas();
		if (bParam2)
		{
			if (does_entity_exist(iParam0->f_34))
			{
				set_vehicle_as_no_longer_needed(&(iParam0->f_34));
			}
			if (does_entity_exist(iParam0->f_35))
			{
				set_ped_as_no_longer_needed(&(iParam0->f_35));
			}
		}
		if (does_entity_exist(iParam0->f_36))
		{
			delete_ped(&(iParam0->f_36));
		}
		if (!iParam0->f_288)
		{
			func_415(0);
		}
		func_227();
		func_220();
		func_256(0, 1, 1, 0, 0, 0, 0);
		set_widescreen_borders(false, -1);
		set_user_radio_control_enabled(true);
		if (network_is_game_in_progress())
		{
			if (network_is_in_mp_cutscene())
			{
				network_set_in_mp_cutscene(false, true);
			}
		}
		if (BitTest(*iParam0, 21))
		{
			trigger_music_event("FM_INTRO_DRIVE_END");
			clear_bit(iParam0, 21);
		}
		network_set_in_free_cam_mode(false);
		func_369(1);
		if (BitTest(*iParam0, 26))
		{
			func_361(1, 0);
			clear_bit(iParam0, 26);
		}
		Global_2703735.f_3428 = 0;
		if (!is_player_switch_in_progress())
		{
			set_render_hd_only(false);
		}
		set_game_pauses_for_streaming(true);
		if (bParam1)
		{
		}
		func_195(0);
		func_209(1);
		Global_2815059.f_1918 = 0;
		Global_2815059.f_1917 = 0;
		if (is_audio_scene_active("MP_INTRO_RACE_SCENE"))
		{
			stop_audio_scene("MP_INTRO_RACE_SCENE");
		}
		if (is_audio_scene_active("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			stop_audio_scene("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_323(14, 1);
		set_max_wanted_level(5);
		unload_cloud_hat("CONTRAILS", 0f);
		remove_vehicle_recording(5, "FMINTRO");
		remove_vehicle_recording(6, "FMINTRO");
		remove_vehicle_recording(7, "FMINTRO");
		remove_anim_dict("mp_intro_seq@");
		remove_anim_dict("mp_intro_seq@ig_1_lamar_drive_female");
		remove_anim_dict("mp_intro_seq@ig_1_lamar_drive_radio");
		remove_anim_dict("mp_intro_seq@ig_1_lamar_drive_male");
		if (does_blip_exist(get_main_player_blip_id()))
		{
			set_blip_scale(get_main_player_blip_id(), 0.7f);
		}
		set_radar_zoom(0);
		set_gameplay_cam_relative_heading(0f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		if (network_is_game_in_progress())
		{
			remove_navmesh_required_regions();
			network_set_voice_active(true);
		}
		set_entity_invincible(player_ped_id(), false);
		freeze_entity_position(player_ped_id(), false);
		if (!is_screen_faded_in() && !is_screen_fading_in())
		{
			do_screen_fade_in(800);
		}
		set_bit(iParam0, false);
	}
}

void func_220()
{
	func_221(0);
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		func_226();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			set_bit(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_82(0))
		{
			func_222(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_222(int iParam0)
{
	if (func_225())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_224())
		{
			func_223(1, 1);
		}
		else
		{
			func_223(0, 0);
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
	if (!func_167())
	{
		Global_20266.f_1 = 3;
	}
}

void func_223(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
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

bool func_224()
{
	return BitTest(Global_1958711, 5);
}

bool func_225()
{
	return BitTest(Global_1958711, 19);
}

void func_226()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_227()
{
	if (!Global_1574747)
	{
		return;
	}
	func_228();
}

void func_228()
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_229(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_235(iParam0, iVar0);
		iVar0++;
	}
}

void func_230()
{
	set_roads_back_to_original_in_angled_area(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	set_roads_back_to_original_in_angled_area(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_231(int* iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = iParam0->f_29;
		}
		else
		{
			iVar1 = iParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_233(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_232(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_234(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	request_model(iVar0);
	request_model(iVar1);
	if (has_model_loaded(iVar0) && has_model_loaded(iVar1))
	{
		if (!does_entity_exist(iParam0->f_34))
		{
			iParam0->f_34 = create_vehicle(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, false, false, false);
			set_entity_always_prerender(iParam0->f_34, true);
			set_vehicle_radio_enabled(iParam0->f_34, false);
			set_entity_proofs(iParam0->f_34, true, true, true, true, true, true, true, false);
			set_vehicle_lights(iParam0->f_34, 2);
		}
		else if (!does_entity_exist(iParam0->f_35))
		{
			if (is_vehicle_driveable(iParam0->f_34, false))
			{
				iParam0->f_35 = create_ped(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, false, false);
				set_blocking_of_non_temporary_events(iParam0->f_35, true);
				set_entity_invincible(iParam0->f_34, true);
				set_entity_invincible(iParam0->f_35, true);
				set_ped_relationship_group_hash(iParam0->f_35, get_ped_relationship_group_hash(player_ped_id()));
				set_entity_proofs(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!does_entity_exist(iParam0->f_34) || !does_entity_exist(iParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_235(int* iParam0, int iParam1)
{
	if (does_entity_exist(iParam0->f_58[iParam1]))
	{
		delete_vehicle(&(iParam0->f_58[iParam1]));
	}
	if (does_entity_exist(iParam0->f_74[iParam1]))
	{
		delete_ped(&(iParam0->f_74[iParam1]));
	}
}

void func_236(bool bParam0)
{
	if (bParam0)
	{
		set_bit(&(Global_1853348[player_id() /*834*/].f_143), 22);
	}
	else
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_143), 22);
	}
}

bool func_237(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_143, 22);
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		set_bit(&(Global_1853348[player_id() /*834*/].f_139), 4);
	}
	else
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_139), 4);
	}
}

int func_239(int* iParam0)
{
	if (iParam0->f_6 < 31)
	{
		return get_music_playtime();
	}
	if (iParam0->f_6 < 33)
	{
		return (iParam0->f_26 + get_cutscene_time());
	}
	return (iParam0->f_28 + get_music_playtime());
}

void func_240(int* iParam0, float fParam1)
{
	func_241(iParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_241(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		if (bParam4)
		{
			stop_playback_recorded_vehicle(iParam0);
			start_playback_recorded_vehicle(iParam0, iParam1, sParam2, true);
		}
		else if (!is_playback_going_on_for_vehicle(iParam0))
		{
			start_playback_recorded_vehicle(iParam0, iParam1, sParam2, true);
			set_vehicle_active_during_playback(iParam0, true);
		}
		else
		{
			iVar0 = get_vehicle_recording_id(iParam1, sParam2);
			if (get_current_playback_for_vehicle(iParam0) != iVar0)
			{
				start_playback_recorded_vehicle(iParam0, iParam1, sParam2, true);
				set_vehicle_active_during_playback(iParam0, true);
			}
		}
		skip_time_in_playback_recorded_vehicle(iParam0, (fParam3 - get_time_position_in_recording(iParam0)));
	}
}

void func_242(int* iParam0, float fParam1)
{
	func_241(iParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_243(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iParam0->f_296)
	{
		iVar0 = get_hash_key("ss1_rd1_03");
		iVar1 = iVar0;
		if (is_model_in_cdimage(iVar1))
		{
			func_9(iVar1);
			iParam0->f_296 = 1;
		}
	}
}

void func_244(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (does_entity_exist(iParam0->f_37[iVar0]))
		{
			delete_ped(&(iParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	set_model_as_no_longer_needed(joaat("g_m_y_mexgoon_02"));
	remove_anim_dict("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	remove_anim_dict("amb@world_human_hang_out_street@male_a@base");
}

int func_245(int* iParam0)
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		request_model(joaat("g_m_y_mexgoon_02"));
		request_anim_dict("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		request_anim_dict("amb@world_human_hang_out_street@male_a@base");
		if ((has_model_loaded(joaat("g_m_y_mexgoon_02")) && has_anim_dict_loaded("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && has_anim_dict_loaded("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!does_entity_exist(iParam0->f_37[iVar0]))
				{
					iParam0->f_37[iVar0] = create_ped(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, false, false);
					set_entity_invincible(iParam0->f_37[iVar0], true);
					set_blocking_of_non_temporary_events(iParam0->f_37[iVar0], true);
					switch (iVar0)
					{
						case 0:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0f, 2, 0);
							break;
						
						case 1:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 2:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 3:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 4:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 5:
							set_entity_coords(iParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, true, false, false, true);
							set_entity_heading(iParam0->f_37[iVar0], 76.8852f);
							give_weapon_to_ped(iParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, true, true);
							freeze_entity_position(iParam0->f_37[iVar0], true);
							break;
						
						case 6:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 7:
							set_entity_coords(iParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, true, false, false, true);
							set_entity_heading(iParam0->f_37[iVar0], 87.5786f);
							give_weapon_to_ped(iParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, true, true);
							freeze_entity_position(iParam0->f_37[iVar0], true);
							break;
						
						case 8:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 9:
							task_play_anim_advanced(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!does_entity_exist(iParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		set_model_as_no_longer_needed(joaat("g_m_y_mexgoon_02"));
		remove_anim_dict("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		remove_anim_dict("amb@world_human_hang_out_street@male_a@base");
		set_bit(&(iParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_246(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_172(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_163(sParam2, iParam4, 0);
}

void func_247(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!BitTest(*iParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 1:
					Var1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!is_ped_injured(iParam0->f_98[iVar0]) && is_vehicle_driveable(iParam0->f_92[iVar0], false))
			{
				freeze_entity_position(iParam0->f_92[iVar0], false);
				set_vehicle_forward_speed(iParam0->f_92[iVar0], 10f);
				task_vehicle_drive_to_coord(iParam0->f_98[iVar0], iParam0->f_92[iVar0], Var1, 5f, 0, get_entity_model(iParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		set_bit(iParam0, 25);
	}
}

int func_248(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (BitTest(iParam0->f_3, 11))
	{
		return 1;
	}
	iVar3 = joaat("shamal");
	request_model(iVar3);
	request_model(func_249());
	if (has_model_loaded(iVar3))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!does_entity_exist(iParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar2 = 149.9339f;
						break;
					
					case 1:
						Var1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar2 = 239.9712f;
						break;
				}
				iParam0->f_92[iVar0] = create_vehicle(iVar3, Var1, fVar2, false, false, false);
				set_vehicle_on_ground_properly(iParam0->f_92[iVar0], 5f);
				freeze_entity_position(iParam0->f_92[iVar0], true);
				set_vehicle_lights(iParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!does_entity_exist(iParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (has_model_loaded(func_249()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!does_entity_exist(iParam0->f_98[iVar0]))
			{
				if (does_entity_exist(iParam0->f_92[iVar0]))
				{
					if (is_vehicle_driveable(iParam0->f_92[iVar0], false))
					{
						iParam0->f_98[iVar0] = create_ped_inside_vehicle(iParam0->f_92[iVar0], 4, func_249(), -1, false, false);
						set_blocking_of_non_temporary_events(iParam0->f_98[iVar0], true);
						set_vehicle_engine_on(iParam0->f_92[iVar0], true, true, false);
					}
				}
			}
			iVar0++;
		}
	}
	set_model_as_no_longer_needed(iVar3);
	set_model_as_no_longer_needed(func_249());
	set_bit(&(iParam0->f_3), 11);
	return 1;
}

int func_249()
{
	return get_entity_model(player_ped_id());
}

void func_250(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (does_entity_exist(iParam0->f_92[iVar0]))
		{
			delete_vehicle(&(iParam0->f_92[iVar0]));
		}
		if (does_entity_exist(iParam0->f_98[iVar0]))
		{
			delete_ped(&(iParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	set_model_as_no_longer_needed(joaat("shamal"));
	set_model_as_no_longer_needed(func_249());
}

void func_251(int* iParam0)
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 2))
	{
		set_model_as_no_longer_needed(joaat("p_cs_mp_jet_01_s"));
		if (does_entity_exist(iParam0->f_33))
		{
			delete_object(&(iParam0->f_33));
		}
		if (iParam0->f_294)
		{
			if (does_particle_fx_looped_exist(iParam0->f_120))
			{
				remove_particle_fx(iParam0->f_120, false);
			}
			if (does_particle_fx_looped_exist(iParam0->f_121))
			{
				remove_particle_fx(iParam0->f_121, false);
			}
			if (has_ptfx_asset_loaded())
			{
				remove_ptfx_asset();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (does_entity_exist(iParam0->f_104[iVar0]))
			{
				delete_ped(&(iParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		clear_bit(&(iParam0->f_3), 2);
	}
}

int func_252(int* iParam0)
{
	if (func_266(iParam0))
	{
		request_anim_dict("mp_intro_seq@ig_1_lamar_drive_female");
		request_anim_dict("mp_intro_seq@ig_1_lamar_drive_radio");
		if (has_anim_dict_loaded("mp_intro_seq@ig_1_lamar_drive_female") && has_anim_dict_loaded("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		request_anim_dict("mp_intro_seq@ig_1_lamar_drive_male");
		request_anim_dict("mp_intro_seq@ig_1_lamar_drive_radio");
		if (has_anim_dict_loaded("mp_intro_seq@ig_1_lamar_drive_male") && has_anim_dict_loaded("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_253(int* iParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!BitTest(iParam0->f_3, 10))
	{
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (!does_entity_exist(iParam0->f_36))
			{
				iParam0->f_36 = create_ped(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, false, false);
				set_blocking_of_non_temporary_events(iParam0->f_36, true);
				set_entity_invincible(iParam0->f_36, true);
				set_entity_visible(iParam0->f_36, false, false);
				set_ped_relationship_group_hash(iParam0->f_36, get_ped_relationship_group_hash(player_ped_id()));
				set_entity_proofs(iParam0->f_36, true, true, true, true, true, true, true, false);
				func_416(&(iParam0->f_123), 1, iParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!does_entity_exist(iParam0->f_36))
		{
			return 0;
		}
		set_model_as_no_longer_needed(iVar0);
		set_bit(&(iParam0->f_3), 10);
	}
	return 1;
}

void func_254(int* iParam0, float fParam1)
{
	func_241(iParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_255(int* iParam0)
{
	int iVar0;
	
	set_model_as_no_longer_needed(func_269());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_270(iParam0, iVar0);
		iVar0++;
	}
	if (does_entity_exist(iParam0->f_91))
	{
		delete_ped(&(iParam0->f_91));
	}
}

void func_256(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		special_ability_deactivate_fast(player_id(), 0);
		set_all_random_peds_flee(player_id(), true);
		set_police_ignore_player(player_id(), true);
		func_263(1);
		thefeed_flush_queue();
		thefeed_pause();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_167())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_262(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_263(0);
		thefeed_resume();
		Global_63160 = 0;
		if (bParam1)
		{
			cascade_shadows_init_session();
		}
		set_all_random_peds_flee(player_id(), false);
		set_police_ignore_player(player_id(), false);
		func_262(0, bParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((((!is_ped_injured(player_ped_id()) && !func_260(player_id())) && !func_258(player_id(), 0)) && !func_257()) && !bParam4) && !bParam5)
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (((!is_ped_injured(player_ped_id()) && !func_260(player_id())) && !bParam4) && !bParam5)
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_78317 = 0;
	}
}

bool func_257()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 14);
}

bool func_258(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_259(-1, 0) == 8;
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

int func_259(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_260(int iParam0)
{
	if (func_258(iParam0, 0))
	{
		return 1;
	}
	if (func_261())
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

bool func_261()
{
	return BitTest(Global_2621446, 3);
}

int func_262(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_263(int iParam0)
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

void func_264(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!is_entity_dead(iParam0->f_104[iVar0], false))
		{
			finalize_head_blend(iParam0->f_104[iVar0]);
			register_entity_for_cutscene(iParam0->f_104[iVar0], func_265(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_266(int* iParam0)
{
	if (iParam0->f_295)
	{
		return func_267();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_267()
{
	return func_268(player_id());
}

int func_268(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_269()
{
	return joaat("s_m_y_xmech_02");
}

void func_270(int* iParam0, int iParam1)
{
	set_model_as_no_longer_needed(func_271(iParam1));
	if (does_entity_exist(iParam0->f_49[iParam1]))
	{
		if (is_vehicle_driveable(iParam0->f_49[iParam1], false))
		{
		}
		release_preload_mods(iParam0->f_49[iParam1]);
		delete_vehicle(&(iParam0->f_49[iParam1]));
	}
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_272()
{
	Global_1577867 = 0;
	if (has_scaleform_movie_loaded(Global_1577865))
	{
		begin_scaleform_movie_method(Global_1577865, "SET_BIG_LOGO_VISIBLE");
		scaleform_movie_method_add_param_int(1);
		scaleform_movie_method_add_param_bool(false);
		end_scaleform_movie_method();
		set_scaleform_movie_as_no_longer_needed(&Global_1577865);
	}
}

void func_273(int* iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (does_entity_exist(iParam0->f_92[iVar1]))
		{
			uVar0 = iParam0->f_92[iVar1];
			delete_entity(&uVar0);
		}
		if (does_entity_exist(iParam0->f_98[iVar1]))
		{
			uVar0 = iParam0->f_98[iVar1];
			delete_entity(&uVar0);
		}
		iVar1++;
	}
	set_model_as_no_longer_needed(joaat("cheetah"));
	set_model_as_no_longer_needed(joaat("monroe"));
	set_model_as_no_longer_needed(joaat("entityxf"));
	set_model_as_no_longer_needed(joaat("feltzer2"));
	remove_vehicle_recording(100, "FM_Intro_uber");
	remove_vehicle_recording(101, "FM_Intro_uber");
	remove_vehicle_recording(102, "FM_Intro_uber");
	remove_vehicle_recording(103, "FM_Intro_uber");
	remove_vehicle_recording(104, "FM_Intro_uber");
	remove_anim_dict("mp_intro_seq@");
}

void func_274(int* iParam0)
{
	if (does_entity_exist(iParam0->f_49[2]))
	{
		if (is_vehicle_driveable(iParam0->f_49[2], false))
		{
			request_vehicle_high_detail_model(iParam0->f_49[2]);
		}
	}
	if (does_entity_exist(iParam0->f_49[4]))
	{
		if (is_vehicle_driveable(iParam0->f_49[4], false))
		{
			request_vehicle_high_detail_model(iParam0->f_49[4]);
		}
	}
}

void func_275(int* iParam0)
{
	if (does_entity_exist(iParam0->f_49[2]))
	{
		if (is_vehicle_driveable(iParam0->f_49[2], false))
		{
			set_vehicle_door_control(iParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_276()
{
	if (get_is_loading_screen_active())
	{
		return 0;
	}
	if (!has_scaleform_movie_loaded(Global_1577865))
	{
		Global_1577865 = request_scaleform_movie("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_277(int* iParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param5)
{
	if (does_entity_exist(iParam3))
	{
		if (is_entity_dead(iParam3, false))
		{
		}
		if (!does_cam_exist(iParam0->f_8))
		{
			iParam0->f_8 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
		}
		iParam0->f_9 = -1;
		iParam0->f_9 = create_synchronized_scene(Param4, Param5, 2);
		attach_synchronized_scene_to_entity(iParam0->f_9, iParam3, 0);
		play_synchronized_cam_anim(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
		set_cam_active(iParam0->f_8, true);
		render_script_cams(true, false, 3000, true, true, 0);
	}
}

void func_278(int* iParam0)
{
	if (!BitTest(iParam0->f_3, 3))
	{
		preload_cloud_hat("CONTRAILS");
		if (func_266(iParam0))
		{
			request_cutscene_with_playback_list("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			request_cutscene_with_playback_list("MP_INTRO_CONCAT", 31, 8);
		}
		if (can_request_assets_for_cutscene_entity())
		{
			if (iParam0->f_295)
			{
				if (func_266(iParam0))
				{
					set_cutscene_entity_streaming_flags("MP_Female_Character", 0, 1);
				}
				else
				{
					set_cutscene_entity_streaming_flags("MP_Male_Character", 0, 1);
				}
			}
			func_279();
		}
		if (has_cutscene_loaded())
		{
			set_bit(&(iParam0->f_3), 3);
		}
	}
}

void func_279()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		set_cutscene_entity_streaming_flags(func_265(iVar0), 0, 1);
		iVar0++;
	}
}

int func_280(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!BitTest(iParam0->f_3, 2))
	{
		request_model(joaat("p_cs_mp_jet_01_s"));
		request_model(joaat("mp_m_freemode_01"));
		request_model(joaat("mp_f_freemode_01"));
		if (iParam0->f_294)
		{
			request_ptfx_asset();
		}
		if (((has_model_loaded(joaat("p_cs_mp_jet_01_s")) && has_model_loaded(joaat("mp_m_freemode_01"))) && has_model_loaded(joaat("mp_f_freemode_01"))) && (!iParam0->f_294 || has_ptfx_asset_loaded()))
		{
			iParam0->f_33 = create_object(joaat("p_cs_mp_jet_01_s"), Var1, false, false, false);
			set_entity_lod_dist(iParam0->f_33, 3000);
			_set_entity_cleanup_by_engine(iParam0->f_33, false);
			set_entity_visible(iParam0->f_33, false, false);
			if (iParam0->f_294)
			{
				iParam0->f_120 = start_particle_fx_looped_on_entity("scr_mp_intro_plane_exhaust", iParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
				iParam0->f_121 = start_particle_fx_looped_on_entity("scr_mp_intro_plane_exhaust", iParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
			}
			if (iParam0->f_295)
			{
				func_284(iParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_283(iParam0, iVar0))
				{
					iParam0->f_104[iVar0] = create_ped(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, false, false);
				}
				else
				{
					iParam0->f_104[iVar0] = create_ped(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, false, false);
				}
				if (func_282(iParam0, iVar0))
				{
					if (!is_entity_dead(get_player_ped(int_to_playerindex(iParam0->f_112[iVar0])), false))
					{
					}
					clone_ped_to_target(get_player_ped(int_to_playerindex(iParam0->f_112[iVar0])), iParam0->f_104[iVar0]);
					finalize_head_blend(iParam0->f_104[iVar0]);
				}
				else
				{
					func_281(iParam0, iVar0);
				}
				iVar0++;
			}
			set_model_as_no_longer_needed(joaat("p_cs_mp_jet_01_s"));
			set_bit(&(iParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_281(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			set_ped_component_variation(uParam0->f_104[iParam1], 0, 21, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 1, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 2, 9, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 3, 1, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 4, 9, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 5, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 6, 4, 8, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 7, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 8, 15, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 9, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 10, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 11, 10, 0, 0);
			clear_ped_prop(uParam0->f_104[iParam1], 0);
			clear_ped_prop(uParam0->f_104[iParam1], 1);
			clear_ped_prop(uParam0->f_104[iParam1], 2);
			clear_ped_prop(uParam0->f_104[iParam1], 3);
			clear_ped_prop(uParam0->f_104[iParam1], 4);
			clear_ped_prop(uParam0->f_104[iParam1], 5);
			clear_ped_prop(uParam0->f_104[iParam1], 6);
			clear_ped_prop(uParam0->f_104[iParam1], 7);
			clear_ped_prop(uParam0->f_104[iParam1], 8);
			break;
		
		case 1:
			set_ped_component_variation(uParam0->f_104[iParam1], 0, 13, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 1, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 2, 5, 4, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 3, 1, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 4, 10, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 5, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 6, 10, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 7, 11, 2, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 8, 13, 6, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 9, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 10, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 11, 10, 0, 0);
			clear_ped_prop(uParam0->f_104[iParam1], 0);
			clear_ped_prop(uParam0->f_104[iParam1], 1);
			clear_ped_prop(uParam0->f_104[iParam1], 2);
			clear_ped_prop(uParam0->f_104[iParam1], 3);
			clear_ped_prop(uParam0->f_104[iParam1], 4);
			clear_ped_prop(uParam0->f_104[iParam1], 5);
			clear_ped_prop(uParam0->f_104[iParam1], 6);
			clear_ped_prop(uParam0->f_104[iParam1], 7);
			clear_ped_prop(uParam0->f_104[iParam1], 8);
			break;
		
		case 2:
			set_ped_component_variation(uParam0->f_104[iParam1], 0, 15, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 1, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 2, 1, 4, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 3, 1, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 4, 0, 1, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 5, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 6, 1, 7, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 7, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 8, 2, 9, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 9, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 10, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 11, 6, 0, 0);
			clear_ped_prop(uParam0->f_104[iParam1], 0);
			clear_ped_prop(uParam0->f_104[iParam1], 1);
			clear_ped_prop(uParam0->f_104[iParam1], 2);
			clear_ped_prop(uParam0->f_104[iParam1], 3);
			clear_ped_prop(uParam0->f_104[iParam1], 4);
			clear_ped_prop(uParam0->f_104[iParam1], 5);
			clear_ped_prop(uParam0->f_104[iParam1], 6);
			clear_ped_prop(uParam0->f_104[iParam1], 7);
			clear_ped_prop(uParam0->f_104[iParam1], 8);
			break;
		
		case 3:
			set_ped_component_variation(uParam0->f_104[iParam1], 0, 14, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 1, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 2, 5, 3, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 3, 3, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 4, 1, 6, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 5, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 6, 11, 5, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 7, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 8, 2, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 9, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 10, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 11, 3, 12, 0);
			clear_ped_prop(uParam0->f_104[iParam1], 0);
			clear_ped_prop(uParam0->f_104[iParam1], 1);
			clear_ped_prop(uParam0->f_104[iParam1], 2);
			clear_ped_prop(uParam0->f_104[iParam1], 3);
			clear_ped_prop(uParam0->f_104[iParam1], 4);
			clear_ped_prop(uParam0->f_104[iParam1], 5);
			clear_ped_prop(uParam0->f_104[iParam1], 6);
			clear_ped_prop(uParam0->f_104[iParam1], 7);
			clear_ped_prop(uParam0->f_104[iParam1], 8);
			break;
		
		case 4:
			set_ped_component_variation(uParam0->f_104[iParam1], 0, 18, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 1, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 2, 15, 3, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 3, 15, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 4, 2, 5, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 5, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 6, 4, 6, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 7, 4, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 8, 3, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 9, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 10, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 11, 4, 0, 0);
			clear_ped_prop(uParam0->f_104[iParam1], 0);
			clear_ped_prop(uParam0->f_104[iParam1], 1);
			clear_ped_prop(uParam0->f_104[iParam1], 2);
			clear_ped_prop(uParam0->f_104[iParam1], 3);
			clear_ped_prop(uParam0->f_104[iParam1], 4);
			clear_ped_prop(uParam0->f_104[iParam1], 5);
			clear_ped_prop(uParam0->f_104[iParam1], 6);
			clear_ped_prop(uParam0->f_104[iParam1], 7);
			clear_ped_prop(uParam0->f_104[iParam1], 8);
			break;
		
		case 5:
			set_ped_component_variation(uParam0->f_104[iParam1], 0, 27, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 1, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 2, 7, 3, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 3, 11, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 4, 4, 8, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 5, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 6, 13, 14, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 7, 5, 3, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 8, 3, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 9, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 10, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 11, 2, 7, 0);
			clear_ped_prop(uParam0->f_104[iParam1], 0);
			clear_ped_prop(uParam0->f_104[iParam1], 1);
			clear_ped_prop(uParam0->f_104[iParam1], 2);
			clear_ped_prop(uParam0->f_104[iParam1], 3);
			clear_ped_prop(uParam0->f_104[iParam1], 4);
			clear_ped_prop(uParam0->f_104[iParam1], 5);
			clear_ped_prop(uParam0->f_104[iParam1], 6);
			clear_ped_prop(uParam0->f_104[iParam1], 7);
			clear_ped_prop(uParam0->f_104[iParam1], 8);
			break;
		
		case 6:
			set_ped_component_variation(uParam0->f_104[iParam1], 0, 16, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 1, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 2, 15, 1, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 3, 3, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 4, 5, 6, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 5, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 6, 2, 8, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 7, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 8, 2, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 9, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 10, 0, 0, 0);
			set_ped_component_variation(uParam0->f_104[iParam1], 11, 3, 7, 0);
			clear_ped_prop(uParam0->f_104[iParam1], 0);
			clear_ped_prop(uParam0->f_104[iParam1], 1);
			clear_ped_prop(uParam0->f_104[iParam1], 2);
			clear_ped_prop(uParam0->f_104[iParam1], 3);
			clear_ped_prop(uParam0->f_104[iParam1], 4);
			clear_ped_prop(uParam0->f_104[iParam1], 5);
			clear_ped_prop(uParam0->f_104[iParam1], 6);
			clear_ped_prop(uParam0->f_104[iParam1], 7);
			clear_ped_prop(uParam0->f_104[iParam1], 8);
			break;
	}
}

int func_282(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(int_to_playerindex(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0, int iParam1)
{
	if (func_282(uParam0, iParam1))
	{
		return func_268(int_to_playerindex(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_284(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 7)
	{
		uParam0->f_112[bVar1] = -1;
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = int_to_playerindex(bVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (player_id() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_285(iVar0)] = bVar1;
					iVar0++;
				}
			}
		}
		bVar1++;
	}
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_286(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (BitTest(iParam0->f_3, 9))
	{
		return 1;
	}
	request_model(iVar0);
	request_model(iVar1);
	request_vehicle_recording(5, "FMINTRO");
	request_vehicle_recording(6, "FMINTRO");
	request_vehicle_recording(7, "FMINTRO");
	request_anim_dict("mp_intro_seq@");
	if (((((has_model_loaded(iVar0) && has_model_loaded(iVar1)) && has_vehicle_recording_been_loaded(5, "FMINTRO")) && has_vehicle_recording_been_loaded(6, "FMINTRO")) && has_vehicle_recording_been_loaded(7, "FMINTRO")) && has_anim_dict_loaded("mp_intro_seq@"))
	{
		if (!does_entity_exist(iParam0->f_34))
		{
			clear_area(-1034.035f, -2730.485f, 19.0565f, 3f, true, false, false, false);
			iParam0->f_34 = create_vehicle(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, false, false, false);
			set_entity_always_prerender(iParam0->f_34, true);
			set_vehicle_radio_enabled(iParam0->f_34, false);
			set_entity_proofs(iParam0->f_34, true, true, true, true, true, true, true, false);
		}
		else if (!does_entity_exist(iParam0->f_35))
		{
			if (is_vehicle_driveable(iParam0->f_34, false))
			{
				iParam0->f_35 = create_ped(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, false, false);
				task_enter_vehicle(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
				set_blocking_of_non_temporary_events(iParam0->f_35, true);
				set_entity_invincible(iParam0->f_34, true);
				set_entity_invincible(iParam0->f_35, true);
				set_ped_relationship_group_hash(iParam0->f_35, get_ped_relationship_group_hash(player_ped_id()));
				set_entity_proofs(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!does_entity_exist(iParam0->f_34) || !does_entity_exist(iParam0->f_35))
	{
		return 0;
	}
	set_model_as_no_longer_needed(iVar0);
	set_model_as_no_longer_needed(iVar1);
	set_bit(&(iParam0->f_3), 9);
	return 1;
}

void func_287(int* iParam0)
{
	int iVar0;
	
	if (!BitTest(iParam0->f_3, 0))
	{
		func_297();
		func_295();
		if (func_289(iParam0))
		{
			if (func_288(iParam0))
			{
				if (!does_cam_exist(iParam0->f_7))
				{
					iParam0->f_7 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
				}
				set_cam_params(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					set_model_as_no_longer_needed(func_271(iVar0));
					iVar0++;
				}
				set_model_as_no_longer_needed(func_269());
				set_bit(&(iParam0->f_3), false);
			}
		}
	}
}

int func_288(var uParam0)
{
	int iVar0;
	
	iVar0 = func_269();
	if (!does_entity_exist(uParam0->f_91))
	{
		if (does_entity_exist(uParam0->f_49[2]))
		{
			if (is_model_in_cdimage(iVar0))
			{
				if (has_model_loaded(iVar0))
				{
					if (has_anim_dict_loaded("MP_INTRO_SEQ@"))
					{
						if (!is_entity_dead(uParam0->f_49[2], false))
						{
							uParam0->f_10 = create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
							attach_synchronized_scene_to_entity(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = create_ped(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, false, false);
							set_blocking_of_non_temporary_events(uParam0->f_91, true);
							task_synchronized_scene(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1000f, 0);
							set_synchronized_scene_looped(uParam0->f_10, true);
							freeze_entity_position(uParam0->f_91, true);
							set_entity_collision(uParam0->f_91, false, false);
							remove_weapon_from_ped(uParam0->f_91, joaat("gadget_parachute"));
							set_ped_component_variation(uParam0->f_91, 0, 1, 1, 0);
							set_ped_component_variation(uParam0->f_91, 1, 0, 0, 0);
							set_ped_component_variation(uParam0->f_91, 2, 0, 2, 0);
							set_ped_component_variation(uParam0->f_91, 3, 0, 2, 0);
							set_ped_component_variation(uParam0->f_91, 4, 1, 0, 0);
							set_ped_component_variation(uParam0->f_91, 5, 0, 0, 0);
							set_ped_component_variation(uParam0->f_91, 6, 0, 0, 0);
							set_ped_component_variation(uParam0->f_91, 7, 0, 0, 0);
							set_ped_component_variation(uParam0->f_91, 8, 0, 0, 0);
							set_ped_component_variation(uParam0->f_91, 9, 0, 0, 0);
							set_ped_component_variation(uParam0->f_91, 10, 0, 0, 0);
							set_ped_component_variation(uParam0->f_91, 11, 0, 0, 0);
							clear_ped_prop(uParam0->f_91, 0);
							clear_ped_prop(uParam0->f_91, 1);
							clear_ped_prop(uParam0->f_91, 2);
							clear_ped_prop(uParam0->f_91, 3);
							clear_ped_prop(uParam0->f_91, 4);
							clear_ped_prop(uParam0->f_91, 5);
							clear_ped_prop(uParam0->f_91, 6);
							clear_ped_prop(uParam0->f_91, 7);
							clear_ped_prop(uParam0->f_91, 8);
						}
					}
				}
			}
		}
	}
	if (!does_entity_exist(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_289(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	
	if (!BitTest(uParam0->f_2, 31))
	{
		func_297();
		bVar3 = false;
		while (bVar3 < 8)
		{
			func_294(bVar3, &Var1, &fVar2);
			if (!func_293(Var1, 0f, 0f, 0f, 0))
			{
				if (!does_entity_exist(uParam0->f_49[bVar3]))
				{
					iVar0 = func_271(bVar3);
					if (is_model_in_cdimage(iVar0))
					{
						if (has_model_loaded(iVar0))
						{
							uParam0->f_49[bVar3] = create_vehicle(iVar0, Var1, fVar2, false, false, false);
							_set_entity_cleanup_by_engine(uParam0->f_49[bVar3], true);
							set_vehicle_dirt_level(uParam0->f_49[bVar3], 0f);
							_0xAB04325045427AAE(uParam0->f_49[bVar3], false);
							if (bVar3 == 2)
							{
								set_vehicle_door_open(uParam0->f_49[bVar3], 4, false, true);
								set_vehicle_door_control(uParam0->f_49[bVar3], 4, 0, 1f);
							}
							func_292(uParam0, bVar3);
							func_291(uParam0, bVar3);
							set_model_as_no_longer_needed(iVar0);
						}
					}
				}
			}
			bVar3++;
		}
		bVar3 = false;
		while (bVar3 < 8)
		{
			if (!does_entity_exist(uParam0->f_49[bVar3]))
			{
				return 0;
			}
			if (!BitTest(uParam0->f_2, bVar3))
			{
				if (func_290(uParam0, bVar3))
				{
					set_bit(&(uParam0->f_2), bVar3);
				}
				else
				{
					return 0;
				}
			}
			if (is_vehicle_driveable(uParam0->f_49[bVar3], false))
			{
				if (!have_vehicle_mods_streamed_in(uParam0->f_49[bVar3]))
				{
					return 0;
				}
			}
			bVar3++;
		}
		set_bit(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_290(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			if (is_vehicle_driveable(uParam0->f_49[bParam1], false))
			{
				if (get_num_mod_kits(uParam0->f_49[bParam1]) > 0)
				{
					set_vehicle_mod(uParam0->f_49[bParam1], 0, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 1, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 2, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 3, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 4, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 5, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 7, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 10, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 12, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 14, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 15, 4, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 23, 11, false);
					return 1;
				}
			}
			break;
		
		case 1:
			if (is_vehicle_driveable(uParam0->f_49[bParam1], false))
			{
				if (get_num_mod_kits(uParam0->f_49[bParam1]) > 0)
				{
					set_vehicle_mod(uParam0->f_49[bParam1], 12, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 15, 3, false);
					toggle_vehicle_mod(uParam0->f_49[bParam1], 22, true);
					set_vehicle_tyres_can_burst(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 2:
			if (is_vehicle_driveable(uParam0->f_49[bParam1], false))
			{
				if (get_num_mod_kits(uParam0->f_49[bParam1]) > 0)
				{
					set_vehicle_mod(uParam0->f_49[bParam1], 0, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 4, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 14, 5, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 15, 3, false);
					toggle_vehicle_mod(uParam0->f_49[bParam1], 22, true);
					set_vehicle_tyres_can_burst(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 3:
			if (is_vehicle_driveable(uParam0->f_49[bParam1], false))
			{
				if (get_num_mod_kits(uParam0->f_49[bParam1]) > 0)
				{
					set_vehicle_mod(uParam0->f_49[bParam1], 15, 3, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 23, 11, false);
					toggle_vehicle_mod(uParam0->f_49[bParam1], 22, true);
					set_vehicle_tyres_can_burst(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 4:
			if (is_vehicle_driveable(uParam0->f_49[bParam1], false))
			{
				if (get_num_mod_kits(uParam0->f_49[bParam1]) > 0)
				{
					set_vehicle_mod(uParam0->f_49[bParam1], 1, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 2, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 4, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 7, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 11, 3, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 12, 2, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 13, 2, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 15, 3, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 16, 4, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 23, 5, false);
					toggle_vehicle_mod(uParam0->f_49[bParam1], 22, true);
					set_vehicle_tyres_can_burst(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 5:
			if (is_vehicle_driveable(uParam0->f_49[bParam1], false))
			{
				if (get_num_mod_kits(uParam0->f_49[bParam1]) > 0)
				{
					set_vehicle_mod(uParam0->f_49[bParam1], 0, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 1, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 2, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 3, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 4, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 6, 2, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 10, 3, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 14, 7, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 15, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 23, 5, false);
					toggle_vehicle_mod(uParam0->f_49[bParam1], 22, true);
					set_vehicle_tyres_can_burst(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 6:
			if (is_vehicle_driveable(uParam0->f_49[bParam1], false))
			{
				if (get_num_mod_kits(uParam0->f_49[bParam1]) > 0)
				{
					set_vehicle_mod(uParam0->f_49[bParam1], 1, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 4, 1, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 8, 0, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 14, 7, false);
					set_vehicle_mod(uParam0->f_49[bParam1], 23, 0, false);
					toggle_vehicle_mod(uParam0->f_49[bParam1], 22, true);
					set_vehicle_tyres_can_burst(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_291(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			set_vehicle_mod_kit(uParam0->f_49[iParam1], 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 0, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 1, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 2, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 3, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 4, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 5, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 7, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 10, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			set_vehicle_mod_kit(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			set_vehicle_mod_kit(uParam0->f_49[iParam1], 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 0, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			set_vehicle_mod_kit(uParam0->f_49[iParam1], 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			set_vehicle_mod_kit(uParam0->f_49[iParam1], 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 1, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 2, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 4, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 7, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			set_vehicle_mod_kit(uParam0->f_49[iParam1], 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 0, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 1, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 2, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 3, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 4, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 6, 2);
			preload_vehicle_mod(uParam0->f_49[iParam1], 10, 3);
			preload_vehicle_mod(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			set_vehicle_mod_kit(uParam0->f_49[iParam1], 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 1, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 4, 1);
			preload_vehicle_mod(uParam0->f_49[iParam1], 8, 0);
			preload_vehicle_mod(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_292(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			set_vehicle_colours(uParam0->f_49[iParam1], 83, 134);
			set_vehicle_extra_colours(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			set_vehicle_colours(uParam0->f_49[iParam1], 0, 0);
			set_vehicle_extra_colours(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			set_vehicle_colours(uParam0->f_49[iParam1], 49, 0);
			set_vehicle_extra_colours(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			set_vehicle_colours(uParam0->f_49[iParam1], 0, 0);
			set_vehicle_extra_colours(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			set_vehicle_colours(uParam0->f_49[iParam1], 43, 5);
			set_vehicle_extra_colours(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			set_vehicle_colours(uParam0->f_49[iParam1], 3, 3);
			set_vehicle_extra_colours(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			set_vehicle_colours(uParam0->f_49[iParam1], 35, 0);
			set_vehicle_extra_colours(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_293(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_294(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_295()
{
	request_model(func_269());
	request_anim_dict(func_296());
}

char* func_296()
{
	return "MP_INTRO_SEQ@";
}

void func_297()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		request_model(func_271(iVar0));
		iVar0++;
	}
}

void func_298(int* iParam0, float fParam1, float fParam2)
{
	func_241(iParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_241(iParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_241(iParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_241(iParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_241(iParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_299(int* iParam0, int iParam1)
{
	bool bVar0;
	int* iVar1;
	
	switch (iParam1)
	{
		case 14:
			func_300(iParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &iVar1, 1);
			func_300(iParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &iVar1, 1);
			break;
		
		case 15:
			func_300(iParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &iVar1, 1);
			func_300(iParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &iVar1, 1);
			func_300(iParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &iVar1, 1);
			func_300(iParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &iVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_300(iParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &iVar1, 1);
			func_300(iParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &iVar1, 1);
			func_300(iParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &iVar1, 1);
			func_300(iParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &iVar1, 1);
			func_300(iParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &iVar1, 1);
			func_300(iParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &iVar1, 1);
			break;
		
		case 18:
			func_300(iParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &iVar1, 1);
			func_300(iParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &iVar1, 1);
			func_300(iParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &iVar1, 1);
			func_300(iParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &iVar1, 1);
			break;
		
		case 19:
			func_300(iParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &iVar1, 1);
			func_300(iParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &iVar1, 1);
			func_300(iParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &iVar1, 1);
			func_300(iParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &iVar1, 1);
			func_300(iParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &iVar1, 1);
			func_300(iParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &iVar1, 1);
			func_300(iParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &iVar1, 1);
			func_300(iParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &iVar1, 1);
			func_300(iParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &iVar1, 1);
			func_300(iParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &iVar1, 1);
			break;
		
		case 33:
			func_300(iParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &iVar1, 0);
			func_300(iParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &iVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_300(iParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &iVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_300(iParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &iVar1, 0);
			func_300(iParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &iVar1, 0);
			func_300(iParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &iVar1, 0);
			func_300(iParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &iVar1, 0);
			func_300(iParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &iVar1, 0);
			func_300(iParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &iVar1, 0);
			func_300(iParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &iVar1, 0);
			func_300(iParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &iVar1, 0);
			func_300(iParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &iVar1, 0);
			func_300(iParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &iVar1, 0);
			func_300(iParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &iVar1, 0);
			func_300(iParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &iVar1, 0);
			func_300(iParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &iVar1, 0);
			func_300(iParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &iVar1, 0);
			func_300(iParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &iVar1, 0);
			break;
		
		case 39:
			func_300(iParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &iVar1, 0);
			func_300(iParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &iVar1, 0);
			break;
		
		case 40:
			func_300(iParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &iVar1, 0);
			func_300(iParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &iVar1, 0);
			func_300(iParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &iVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_300(iParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &iVar1, 0);
			func_300(iParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &iVar1, 0);
			func_300(iParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &iVar1, 0);
			break;
		
		case 44:
			func_300(iParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &iVar1, 0);
			func_300(iParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &iVar1, 0);
			func_300(iParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &iVar1, 0);
			break;
		
		case 45:
			func_300(iParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &iVar1, 0);
			func_300(iParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &iVar1, 0);
			func_300(iParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &iVar1, 0);
			func_300(iParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &iVar1, 0);
			func_300(iParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &iVar1, 0);
			func_300(iParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &iVar1, 0);
			func_300(iParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &iVar1, 0);
			func_300(iParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &iVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_300(iParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &iVar1, 0);
			func_300(iParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &iVar1, 0);
			func_300(iParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &iVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_300(iParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &iVar1, 0);
			func_300(iParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &iVar1, 0);
			func_300(iParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &iVar1, 0);
			func_300(iParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &iVar1, 0);
			func_300(iParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &iVar1, 0);
			func_300(iParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &iVar1, 0);
			func_300(iParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &iVar1, 0);
			func_300(iParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &iVar1, 0);
			break;
		
		case 50:
			break;
	}
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (!BitTest(iVar1, bVar0))
		{
			func_215(iParam0, bVar0);
		}
		bVar0++;
	}
}

void func_300(var uParam0, bool bParam1, struct<3> Param2, float fParam3, int* iParam4, bool bParam5)
{
	if (is_vehicle_driveable(uParam0->f_58[bParam1], false) && !is_ped_injured(uParam0->f_74[bParam1]))
	{
		freeze_entity_position(uParam0->f_58[bParam1], false);
		set_entity_collision(uParam0->f_58[bParam1], true, false);
		set_entity_coords(uParam0->f_58[bParam1], Param2, true, false, false, true);
		set_entity_heading(uParam0->f_58[bParam1], fParam3);
		set_vehicle_on_ground_properly(uParam0->f_58[bParam1], 5f);
		set_vehicle_fixed(uParam0->f_58[bParam1]);
		if (bParam5)
		{
			task_vehicle_mission(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 35f, 786603, 5f, 5f, true);
			set_vehicle_forward_speed(uParam0->f_58[bParam1], 30f);
		}
		else
		{
			task_vehicle_mission(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 15f, 786603, 5f, 5f, true);
			set_vehicle_forward_speed(uParam0->f_58[bParam1], 10f);
		}
		set_ped_keep_task(uParam0->f_74[bParam1], true);
		set_entity_visible(uParam0->f_58[bParam1], true, false);
		set_entity_visible(uParam0->f_74[bParam1], true, false);
		set_bit(iParam4, bParam1);
	}
}

void func_301(int* iParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param4, float fParam5, float fParam6)
{
	if (!does_cam_exist(iParam0->f_8))
	{
		iParam0->f_8 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
	}
	iParam0->f_9 = -1;
	iParam0->f_9 = create_synchronized_scene(Param3, Param4, 2);
	play_synchronized_cam_anim(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
	set_synchronized_scene_phase(iParam0->f_9, fParam5);
	set_synchronized_scene_rate(iParam0->f_9, fParam6);
	set_cam_active(iParam0->f_8, true);
	render_script_cams(true, false, 3000, true, true, 0);
}

void func_302(int* iParam0)
{
	set_model_as_no_longer_needed(joaat("frogger"));
	remove_vehicle_recording(8, "FMIntro");
	if (does_entity_exist(iParam0->f_48))
	{
		delete_vehicle(&(iParam0->f_48));
	}
}

int func_303(int* iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (BitTest(iParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_305();
		if (!does_entity_exist(iParam0->f_92[0]))
		{
			if (has_model_loaded(joaat("cheetah")))
			{
				iParam0->f_92[0] = create_vehicle(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, false, false, false);
				set_vehicle_radio_enabled(iParam0->f_92[0], false);
				set_vehicle_tyres_can_burst(iParam0->f_92[0], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!does_entity_exist(iParam0->f_92[1]))
		{
			if (has_model_loaded(joaat("entityxf")))
			{
				iParam0->f_92[1] = create_vehicle(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, false, false, false);
				set_vehicle_radio_enabled(iParam0->f_92[1], false);
				set_entity_quaternion(iParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				set_vehicle_colour_combination(iParam0->f_92[1], 8);
				set_vehicle_tyres_can_burst(iParam0->f_92[1], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!does_entity_exist(iParam0->f_92[2]))
		{
			if (has_model_loaded(joaat("monroe")))
			{
				iParam0->f_92[2] = create_vehicle(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, false, false, false);
				set_vehicle_radio_enabled(iParam0->f_92[2], false);
				set_entity_quaternion(iParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				set_vehicle_colour_combination(iParam0->f_92[2], 2);
				set_vehicle_tyres_can_burst(iParam0->f_92[2], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!does_entity_exist(iParam0->f_92[3]))
		{
			if (has_model_loaded(joaat("cheetah")))
			{
				iParam0->f_92[3] = create_vehicle(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, false, false, false);
				set_vehicle_radio_enabled(iParam0->f_92[3], false);
				set_entity_quaternion(iParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				set_vehicle_colour_combination(iParam0->f_92[3], 15);
				set_vehicle_tyres_can_burst(iParam0->f_92[3], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!does_entity_exist(iParam0->f_92[4]))
		{
			if (has_model_loaded(joaat("feltzer2")))
			{
				iParam0->f_92[4] = create_vehicle(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, false, false, false);
				set_vehicle_radio_enabled(iParam0->f_92[4], false);
				set_entity_quaternion(iParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				set_vehicle_colours(iParam0->f_92[4], 0, 0);
				set_vehicle_extra_colours(iParam0->f_92[4], 0, 156);
				set_vehicle_mod_kit(iParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (is_vehicle_driveable(iParam0->f_92[4], false))
		{
			if (!BitTest(iParam0->f_3, 1))
			{
				if (get_num_mod_kits(iParam0->f_92[4]) > 0)
				{
					toggle_vehicle_mod(iParam0->f_92[4], 22, true);
					set_vehicle_tyres_can_burst(iParam0->f_92[4], false);
					set_bit(&(iParam0->f_3), true);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (has_model_loaded(func_249()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!does_entity_exist(iParam0->f_98[iVar1]))
				{
					if (does_entity_exist(iParam0->f_92[iVar1]))
					{
						if (is_vehicle_driveable(iParam0->f_92[iVar1], false))
						{
							iParam0->f_98[iVar1] = create_ped_inside_vehicle(iParam0->f_92[iVar1], 4, func_249(), -1, false, false);
							set_blocking_of_non_temporary_events(iParam0->f_98[iVar1], true);
							set_vehicle_engine_on(iParam0->f_92[iVar1], true, true, false);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			set_model_as_no_longer_needed(joaat("cheetah"));
			set_model_as_no_longer_needed(joaat("monroe"));
			set_model_as_no_longer_needed(joaat("entityxf"));
			set_model_as_no_longer_needed(joaat("feltzer2"));
			set_bit(&(iParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_304()
{
	func_305();
	if (has_model_loaded(func_249()))
	{
		if (has_model_loaded(joaat("cheetah")))
		{
			if (has_model_loaded(joaat("monroe")))
			{
				if (has_model_loaded(joaat("entityxf")))
				{
					if (has_model_loaded(joaat("feltzer2")))
					{
						if (has_vehicle_recording_been_loaded(100, "FM_Intro_uber"))
						{
							if (has_vehicle_recording_been_loaded(101, "FM_Intro_uber"))
							{
								if (has_vehicle_recording_been_loaded(102, "FM_Intro_uber"))
								{
									if (has_vehicle_recording_been_loaded(103, "FM_Intro_uber"))
									{
										if (has_vehicle_recording_been_loaded(104, "FM_Intro_uber"))
										{
											if (has_anim_dict_loaded("mp_intro_seq@"))
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
		}
	}
	return 0;
}

void func_305()
{
	request_model(joaat("cheetah"));
	request_model(joaat("monroe"));
	request_model(joaat("entityxf"));
	request_model(joaat("feltzer2"));
	request_model(func_249());
	request_vehicle_recording(100, "FM_Intro_uber");
	request_vehicle_recording(101, "FM_Intro_uber");
	request_vehicle_recording(102, "FM_Intro_uber");
	request_vehicle_recording(103, "FM_Intro_uber");
	request_vehicle_recording(104, "FM_Intro_uber");
	request_anim_dict("mp_intro_seq@");
}

int func_306(int* iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (BitTest(iParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		request_model(joaat("asterope"));
		request_model(joaat("sentinel"));
		request_model(func_249());
		if ((has_model_loaded(joaat("asterope")) && has_model_loaded(joaat("sentinel"))) && has_model_loaded(func_249()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!does_entity_exist(iParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_216(iVar0, &Var2, &fVar3);
					iParam0->f_58[iVar0] = create_vehicle(iVar1, Var2, fVar3, false, false, false);
					set_vehicle_colour_combination(iParam0->f_58[iVar0], iVar0);
					set_entity_invincible(iParam0->f_58[iVar0], true);
					set_vehicle_lights(iParam0->f_58[iVar0], 2);
					freeze_entity_position(iParam0->f_58[iVar0], true);
				}
				if (does_entity_exist(iParam0->f_58[iVar0]))
				{
					if (!does_entity_exist(iParam0->f_74[iVar0]))
					{
						iParam0->f_74[iVar0] = create_ped_inside_vehicle(iParam0->f_58[iVar0], 4, func_249(), -1, false, false);
						set_entity_invincible(iParam0->f_74[iVar0], true);
						set_blocking_of_non_temporary_events(iParam0->f_74[iVar0], true);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!does_entity_exist(iParam0->f_58[iVar0]) || !does_entity_exist(iParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		set_model_as_no_longer_needed(joaat("asterope"));
		set_model_as_no_longer_needed(joaat("sentinel"));
		set_bit(&(iParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_307(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_231(iParam0, iParam1, 0);
	if (iParam0->f_293)
	{
		if ((iParam0->f_13 + iVar0) + iParam2) <= get_game_timer()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_239(iParam0)
	{
		return 1;
	}
	return 0;
}

int func_308(int* iParam0)
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	request_model(iVar0);
	request_vehicle_recording(8, "FMIntro");
	if (has_model_loaded(iVar0) && has_vehicle_recording_been_loaded(8, "FMIntro"))
	{
		if (!does_entity_exist(iParam0->f_48))
		{
			iParam0->f_48 = create_vehicle(iVar0, get_position_of_vehicle_recording_at_time(8, 0f, "FMIntro"), 0f, false, false, false);
			start_playback_recorded_vehicle(iParam0->f_48, 8, "FMIntro", true);
			skip_time_in_playback_recorded_vehicle(iParam0->f_48, 5000f);
			pause_playback_recorded_vehicle(iParam0->f_48);
			set_entity_visible(iParam0->f_48, false, false);
			set_model_as_no_longer_needed(iVar0);
		}
	}
	if (!does_entity_exist(iParam0->f_48))
	{
		return 0;
	}
	set_bit(&(iParam0->f_3), 8);
	return 1;
}

void func_309(int* iParam0, int iParam1)
{
	if (func_307(iParam0, iParam1, 0))
	{
		if (iParam0->f_293)
		{
			iParam0->f_13 = (get_game_timer() - func_231(iParam0, iParam1, 0));
		}
		else
		{
			iParam0->f_291 = 1;
		}
	}
}

void func_310(int* iParam0)
{
	iParam0->f_13 = get_game_timer();
}

Vector3 func_311(struct<3> Param0)
{
	return (-sin(Param0.f_2) * cos(Param0.f_0)), (cos(Param0.f_2) * cos(Param0.f_0)), sin(Param0.f_0);
}

int func_312()
{
	return Global_1574991;
}

void func_313()
{
	set_roads_in_angled_area(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, false, false, false);
	set_roads_in_angled_area(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, false, false, false);
}

void func_314()
{
	func_222(0);
	func_221(1);
}

void func_315(bool bParam0, bool bParam1, bool bParam2)
{
	func_319();
	func_317(1);
	clear_help(true);
	clear_prints();
	func_256(1, 1, 1, 0, 0, 0, bParam2);
	func_316();
	func_208(12, 1, -1);
	func_209(0);
	set_widescreen_borders(true, -1);
	display_radar(false);
	display_hud(false);
	func_317(1);
	func_263(1);
	Global_2703735.f_3428 = 1;
	if (bParam0)
	{
		if (!network_is_in_mp_cutscene())
		{
			network_set_in_mp_cutscene(true, bParam1);
		}
	}
}

void func_316()
{
	func_209(0);
	func_208(4, 1, -1);
	func_208(6, 1, -1);
	func_208(7, 1, -1);
	func_208(3, 1, -1);
	func_208(1, 1, -1);
	func_208(2, 1, -1);
	func_208(11, 1, -1);
	func_208(13, 1, -1);
	func_208(14, 1, -1);
	func_208(16, 1, -1);
}

void func_317(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112038)
	{
		clear_floating_help(iVar0, bParam0);
		func_318(iVar0);
		iVar0++;
	}
}

void func_318(int iParam0)
{
	Global_112038[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112038[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112038[iParam0 /*28*/].f_4), "", 64);
	Global_112038[iParam0 /*28*/].f_23 = 0;
	Global_112038[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112038[iParam0 /*28*/].f_27 = 0;
	Global_112038[iParam0 /*28*/].f_20 = 0;
	Global_112038[iParam0 /*28*/].f_22 = 0;
}

void func_319()
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), get_this_script_name(), 32);
	Global_1574747.f_9 = get_hash_key(&(Global_1574747.f_1));
}

int func_320()
{
	if (is_screen_faded_out())
	{
		func_322(0);
		disable_screenblur_fade();
		return 1;
	}
	if (func_321() == 3)
	{
		func_322(2);
		trigger_screenblur_fade_out(250f);
	}
	if (get_screenblur_fade_current_time() >= 250f)
	{
		trigger_screenblur_fade_out(250f);
	}
	if (is_screenblur_fade_running() == 0)
	{
		trigger_screenblur_fade_out(250f);
	}
	if (get_screenblur_fade_current_time() <= 0f)
	{
		func_322(0);
		return 1;
	}
	return 0;
}

int func_321()
{
	return Global_1574632.f_19;
}

void func_322(int iParam0)
{
	if (Global_1574632.f_19 != iParam0)
	{
		Global_1574632.f_19 = iParam0;
	}
}

void func_323(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_327(iParam0, &iVar1);
	if (!are_strings_equal("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (is_interior_disabled(iVar1))
			{
				return;
			}
			if (get_interior_from_entity(player_ped_id()) == iVar1)
			{
				func_326(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!is_interior_disabled(iVar1))
			{
				return;
			}
			if (func_324(iParam0))
			{
				func_326(iParam0, 0);
			}
		}
		disable_interior(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_324(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_325(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38401[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_325(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_326(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_325(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		set_bit(&(Global_38401[Var0.f_1]), Var0.f_0);
	}
	else
	{
		clear_bit(&(Global_38401[Var0.f_1]), Var0.f_0);
	}
}

var func_327(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_328(iParam0) };
	*iParam1 = get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_328(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_329(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_329(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_329(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_329(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_329(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_329(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_329(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312193[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_329(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_329(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_329(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_329(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_329(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_329(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_329(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_329(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_329(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_329(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_329(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_329(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_329(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_329(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_329(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_329(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_329(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_329(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_329(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_329(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_329(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_329(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_329(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_329(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_329(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_329(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_329(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_329(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_330()
{
	return Global_2726701;
}

bool func_331()
{
	return Global_2725401;
}

void func_332(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		clear_bit(&(Global_1941652.f_1), 13);
		func_357(bParam0, 0);
	}
	func_355(0);
	func_333(66);
}

void func_333(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_312();
	if (Global_1575058)
	{
		sVar1 = func_354(iParam0);
		iVar2 = get_hash_key(sVar1);
		uVar3 = func_353(&Global_2727815, 1, 0);
		func_352(&Global_2727813, 1, 0);
		_network_transition_track(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_334();
	}
	Global_1574991 = iParam0;
}

void func_334()
{
	if (Global_2725326)
	{
		if (func_336())
		{
			do_screen_fade_out(0);
			func_335();
		}
	}
}

void func_335()
{
	if (Global_2725323)
	{
		if (!Global_2725322)
		{
			Global_2725322 = 1;
			Global_2725331 = get_game_timer();
			Global_2725330 = 1;
		}
	}
}

int func_336()
{
	int iVar0;
	
	if (Global_2715699.f_6597 && Global_2725323)
	{
		if (func_341(0))
		{
			if (func_339() && !is_screen_faded_out())
			{
				if ((((Global_2715699.f_6619 == 122 || Global_2715699.f_6619 == 123) || Global_2715699.f_6619 == 124) || Global_2715699.f_6619 == 125) || Global_2715699.f_6619 == 154)
				{
					return 1;
				}
				if (Global_2715699.f_6619 > -1)
				{
					iVar0 = func_338(Global_2715699.f_6619);
					if (iVar0 == 24)
					{
						return 1;
					}
				}
				if (BitTest(Global_2689235[player_id() /*453*/].f_71.f_2, 26))
				{
					return 1;
				}
				if (BitTest(Global_2689235[player_id() /*453*/].f_71.f_2, 27))
				{
					return 1;
				}
				if (func_337())
				{
					return 1;
				}
				if (Global_1958741)
				{
					return 1;
				}
				if (BitTest(Global_4718592.f_37, 23))
				{
					if (!func_258(player_id(), 0) && !func_261())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_337()
{
	return Global_2714762.f_24;
}

int func_338(int iParam0)
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

int func_339()
{
	if (func_340() == 0)
	{
		return 1;
	}
	return 0;
}

int func_340()
{
	return Global_1574632.f_18;
}

int func_341(int iParam0)
{
	if (func_351(player_id()) && BitTest(Global_1946250.f_4, 22))
	{
		return 0;
	}
	if (Global_1577870)
	{
		return 0;
	}
	if (!network_is_game_in_progress())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if ((Global_2725324 && func_349()) || Global_2725324 == 0)
	{
		return 1;
	}
	if (Global_2715699.f_6619 == 123 && Global_2725327)
	{
		return 1;
	}
	if (Global_2725325)
	{
		if (Global_2715699.f_6619 == 122)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		if (!func_258(player_id(), 0) && !func_261())
		{
			return 1;
		}
	}
	if (Global_2725328)
	{
		if (iParam0 == 0)
		{
			if ((Global_2715699.f_6619 == 123 || (Global_2715699.f_6619 == 124 && func_347() == 1)) || Global_2715699.f_6619 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2715699.f_6597 || func_345(-1046478848)) && Global_2725329)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		return 1;
	}
	if (func_342() || func_337())
	{
		return 1;
	}
	return 0;
}

var func_342()
{
	return func_343(player_id());
}

var func_343(int iParam0)
{
	return func_344(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

var func_344(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_345(float fParam0)
{
	struct<3> Var0;
	
	Var0 = { func_346(player_id()) };
	if (Var0.f_2 < fParam0)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (!is_ped_in_any_vehicle(player_ped_id(), false))
			{
				if (!is_ped_swimming_under_water(player_ped_id()))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_346(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false);
}

int func_347()
{
	return func_348(player_id());
}

int func_348(int iParam0)
{
	return get_bits_in_range(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

bool func_349()
{
	return BitTest(Global_4718592.f_162497, 12);
}

bool func_350()
{
	return BitTest(Global_2714762.f_2, 11);
}

int func_351(int iParam0)
{
	if (iParam0 != func_141())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_338(Global_2689235[iParam0 /*453*/].f_318.f_6) == 13;
			}
		}
	}
	return 0;
}

void func_352(var uParam0, bool bParam1, bool bParam2)
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

int func_353(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			return get_time_difference(get_network_time(), *uParam0);
		}
		else
		{
			return get_time_difference(get_network_time_accurate(), *uParam0);
		}
	}
	return get_time_difference(get_game_timer(), *uParam0);
}

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 69:
			return "TRANSITION_STATE_SPAWN_INTO_PERSONAL_VEHICLE";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_355(int iParam0)
{
	var uVar0;
	
	uVar0 = func_356();
	Global_1574990 = iParam0;
}

var func_356()
{
	return Global_1574990;
}

void func_357(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_359(&Global_22931, bParam1);
	dont_render_in_game_ui(false);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			stop_player_switch();
			func_358(0);
			if (does_entity_exist(Global_1577840))
			{
				if (does_entity_belong_to_this_script(Global_1577840, false))
				{
					if (!is_entity_a_mission_entity(Global_1577840))
					{
						set_entity_as_mission_entity(Global_1577840, false, false);
					}
					delete_ped(&Global_1577840);
				}
			}
		}
	}
}

void func_358(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2727791 = 0;
	}
	Global_1574632.f_18 = iParam0;
}

void func_359(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (does_cam_exist(uParam0->f_9))
	{
		if (is_cam_active(uParam0->f_9))
		{
			func_360(0);
		}
		destroy_cam(uParam0->f_9, false);
	}
	if (!Global_44203)
	{
		stop_gameplay_cam_shaking(true);
		_0x487A82C650EB7799(0f);
		_0x0225778816FDC28C(0f);
	}
	Global_2667225.f_604 = 0f;
	if (!bParam1)
	{
		render_script_cams(false, false, 0, true, false, 0);
	}
}

void func_360(int iParam0)
{
	Global_23009 = iParam0;
}

void func_361(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_366(1, 0, 1);
	}
	else
	{
		func_362(iParam1);
	}
}

void func_362(int iParam0)
{
	func_365();
	if (iParam0 == 0)
	{
		if (_loadingscreen_get_load_freemode())
		{
			return;
		}
	}
	if (func_364() == 0 || is_pause_menu_active())
	{
		func_363(1);
		toggle_paused_renderphases(false);
		toggle_paused_renderphases(false);
	}
}

void func_363(int iParam0)
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_364()
{
	return Global_1574632.f_20;
}

void func_365()
{
	Global_2727095 = 1;
}

void func_366(int iParam0, bool bParam1, bool bParam2)
{
	if (func_367())
	{
		return;
	}
	if ((func_364() == 1 || is_pause_menu_active()) || iParam0)
	{
		func_363(0);
		toggle_paused_renderphases(true);
		if (!bParam1)
		{
			toggle_paused_renderphases(true);
		}
		if (bParam2)
		{
			reset_paused_renderphases();
		}
	}
}

int func_367()
{
	if (func_368())
	{
		return Global_2725330;
	}
	return 0;
}

int func_368()
{
	if (Global_2725323)
	{
		return Global_2725322;
	}
	return 0;
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		set_all_vehicle_generators_active();
		set_number_of_parked_vehicles(-1);
		set_garbage_trucks(true);
		set_all_low_priority_vehicle_generators_active(true);
		set_vehicle_density_multiplier_this_frame(1f);
		set_vehicle_population_budget(3);
		set_ped_population_budget(3);
	}
	else
	{
		set_all_vehicle_generators_active_in_area(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, true);
		set_number_of_parked_vehicles(0);
		set_garbage_trucks(false);
		set_all_low_priority_vehicle_generators_active(false);
		set_vehicle_density_multiplier_this_frame(0f);
		set_vehicle_population_budget(0);
		set_ped_population_budget(0);
	}
}

void func_370(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	func_314();
	func_221(1);
	func_209(1);
	func_208(12, 1, -1);
	func_380();
	set_user_radio_control_enabled(false);
	if (bParam0)
	{
		network_leave_ped_behind_before_cutscene(player_id(), bParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_371(player_id(), 0, iVar0, 0);
	if (bParam5)
	{
		if (is_ped_ducking(player_ped_id()))
		{
			set_ped_ducking(player_ped_id(), false);
		}
	}
}

void func_371(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_379())
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
		if (!func_339())
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
				else if (bVar14 || (!func_258(player_id(), 0) && !func_261()))
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
					func_376(0, 0, 0);
					if (bVar25)
					{
						clear_focus();
					}
				}
				if (!func_375(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
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
					func_374();
					func_373();
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
				if (!func_375(iVar27) && !is_entity_attached_to_any_vehicle(iVar27))
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
					if (func_372(Global_4718592.f_168757))
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

bool func_372(int iParam0)
{
	return iParam0 == 17;
}

void func_373()
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_374()
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[player_id() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_375(int iParam0)
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

void func_376(bool bParam0, int iParam1, int iParam2)
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
				func_378();
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
		if (func_258(player_id(), 0))
		{
			network_set_in_spectator_mode_extended(bParam0, iParam1, true);
		}
		else
		{
			network_set_in_spectator_mode(bParam0, iParam1);
		}
		set_minimap_in_spectator_mode(bParam0, iParam1);
		func_377(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_377(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_bool(iVar0, bParam1, true);
	}
}

void func_378()
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

int func_379()
{
	if (BitTest(Global_1853348[player_id() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_380()
{
	Global_23011.f_5 = 1;
}

int func_381()
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_382(int iParam0)
{
	set_ped_reset_flag(get_player_ped(iParam0), 346, true);
}

void func_383(int* iParam0)
{
	if (!BitTest(iParam0->f_3, 12))
	{
		set_bit(&(iParam0->f_3), 12);
	}
	else
	{
		if (iParam0->f_6 > 30)
		{
			if (!Global_1931928)
			{
				Global_1931928 = 1;
				Global_1931929 = 1;
			}
		}
		if (iParam0->f_6 > 31)
		{
			if (has_scaleform_movie_loaded(Global_1931927))
			{
				if (iParam0->f_5 < 23)
				{
					switch (iParam0->f_5)
					{
						case 0:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 33)
								{
									if (((get_current_language() == 9 || get_current_language() == 10) || get_current_language() == 8) || get_current_language() == 12)
									{
										func_388("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_388("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_387("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("artdir", "AARON GARBUT", 210f, "|", 1);
									func_385("artdir", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 33, -3390))
							{
								func_384("artdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 1:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_307(iParam0, 33, -2940))
								{
									func_388("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_387("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_385("techdir", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 33, -450))
							{
								func_384("techdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 2:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 35)
								{
									func_388("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_387("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_385("assartdir", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 35)
							{
								func_384("assartdir", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 3:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 36)
								{
									if (((get_current_language() == 9 || get_current_language() == 10) || get_current_language() == 8) || get_current_language() == 12)
									{
										func_388("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_388("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_387("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_385("asstecdir", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 36, -4740))
							{
								func_384("asstecdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 4:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_307(iParam0, 36, -3810))
								{
									func_388("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_387("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_385("leadprog", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 36, -600))
							{
								func_384("leadprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 5:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 37)
								{
									if (((get_current_language() == 9 || get_current_language() == 10) || get_current_language() == 8) || get_current_language() == 12)
									{
										func_388("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_388("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_387("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_385("senprog", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 37, -1350))
							{
								func_384("senprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 6:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 38)
								{
									func_388("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_387("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_385("prog", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 38, -4320))
							{
								func_384("prog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 7:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_307(iParam0, 38, -3240))
								{
									if (((get_current_language() == 9 || get_current_language() == 10) || get_current_language() == 8) || get_current_language() == 12)
									{
										func_388("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_388("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_387("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_385("socclub", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 38, -870))
							{
								func_384("socclub", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 8:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 39)
								{
									func_388("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_387("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_385("audio", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 39, -1620))
							{
								func_384("audio", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 9:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 40)
								{
									func_388("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_387("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_385("scrlead", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 40, -1470))
							{
								func_384("scrlead", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 10:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 41)
								{
									func_388("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_387("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_385("script1", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 41, -1200))
							{
								func_384("script1", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 11:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 42)
								{
									func_388("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_387("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_385("script2", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 42, -1320))
							{
								func_384("script2", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 12:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 43)
								{
									func_388("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_387("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_387("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_385("visdes", 0.05f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 43, -1320))
							{
								func_384("visdes", 0.05f);
								iParam0->f_5++;
							}
							break;
						
						case 13:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 44)
								{
									func_388("uides", 40f, 20f, "right", 0f, 0.3f);
									func_387("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_385("uides", 0f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 45, -1650))
							{
								func_384("uides", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 14:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 46)
								{
									func_388("concre", 0f, 20f, "left", 0f, 0.3f);
									func_387("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_386("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_385("concre", 0f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 46, -1950))
							{
								func_384("concre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 15:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 47)
								{
									func_388("devass", 0f, 400f, "right", 0f, 0f);
									func_387("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_385("devass", 0f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 47)
							{
								func_384("devass", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 16:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 48)
								{
									func_388("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_387("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_387("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_385("qasup", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 48, -1320))
							{
								func_384("qasup", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 17:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 49)
								{
									func_388("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_387("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_385("senta", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 49, -5070))
							{
								func_384("senta", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 18:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_307(iParam0, 49, -3750))
								{
									func_388("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_387("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_385("asspro", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_307(iParam0, 49, -720))
							{
								func_384("asspro", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 19:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_266(iParam0))
								{
									if (is_cutscene_playing() && get_cutscene_time() > 2468)
									{
										func_388("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_387("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_386("animdir", "ROB NELSON", 200f, "|", 1);
										func_385("animdir", 0.16f);
										set_bit(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (iParam0->f_6 >= 50)
								{
									func_388("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_387("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("animdir", "ROB NELSON", 90f, "|", 1);
									func_385("animdir", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_266(iParam0))
							{
								if (is_cutscene_playing() && get_cutscene_time() > 6123)
								{
									func_384("animdir", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (is_cutscene_playing() && get_cutscene_time() > 1898)
							{
								func_384("animdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 20:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_266(iParam0))
								{
									if (is_cutscene_playing() && _has_cutscene_cut_this_frame())
									{
										func_388("producer", 65f, 55f, "right", 0f, 0f);
										func_387("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_386("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_385("producer", 0f);
										set_bit(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (is_cutscene_playing() && get_cutscene_time() > 2452)
								{
									func_388("producer", 0f, 100f, "left", 0.3f, 0f);
									func_387("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_385("producer", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_266(iParam0))
							{
								if (is_cutscene_playing() && _has_cutscene_cut_this_frame())
								{
									func_384("producer", 0f);
									iParam0->f_5++;
								}
							}
							else if (is_cutscene_playing() && _has_cutscene_cut_this_frame())
							{
								func_384("producer", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 21:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_266(iParam0))
								{
									if (is_cutscene_playing() && get_cutscene_time() > 13265)
									{
										func_388("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_387("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_386("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_385("vpcre", 0.16f);
										set_bit(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (is_cutscene_playing() && get_cutscene_time() > 6921)
								{
									func_388("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_387("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_385("vpcre", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_266(iParam0))
							{
								if (is_cutscene_playing() && get_cutscene_time() > 16955)
								{
									func_384("vpcre", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (is_cutscene_playing() && get_cutscene_time() > 10513)
							{
								func_384("vpcre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 22:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_266(iParam0))
								{
									if (is_cutscene_playing() && get_cutscene_time() > 18077)
									{
										Global_1931929 = 0;
										func_388("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_387("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_386("execpro", "SAM HOUSER", 165f, "|", 1);
										func_385("execpro", 0.16f);
										set_bit(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (is_cutscene_playing() && get_cutscene_time() > 12358)
								{
									Global_1931929 = 0;
									func_388("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_387("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("execpro", "SAM HOUSER", 190f, "|", 1);
									func_385("execpro", 0.16f);
									set_bit(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_266(iParam0))
							{
								if (is_cutscene_playing() && get_cutscene_time() > 21785)
								{
									func_384("execpro", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (is_cutscene_playing() && get_cutscene_time() > 15333)
							{
								func_384("execpro", 0.16f);
								iParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1931929)
				{
					draw_scaleform_movie_fullscreen(Global_1931927, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_384(char* sParam0, float fParam1)
{
	begin_scaleform_movie_method(Global_1931927, "HIDE");
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam0);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_float(fParam1);
	end_scaleform_movie_method();
}

void func_385(char* sParam0, float fParam1)
{
	begin_scaleform_movie_method(Global_1931927, "SHOW_CREDIT_BLOCK");
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam0);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_float(fParam1);
	end_scaleform_movie_method();
}

void func_386(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	begin_scaleform_movie_method(Global_1931927, "ADD_NAMES_TO_CREDIT_BLOCK");
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam0);
	end_text_command_scaleform_string();
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam1);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_float(fParam2);
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam3);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_bool(bParam4);
	end_scaleform_movie_method();
}

void func_387(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	begin_scaleform_movie_method(Global_1931927, "ADD_ROLE_TO_CREDIT_BLOCK");
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam0);
	end_text_command_scaleform_string();
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam1);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_float(fParam2);
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam3);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_bool(bParam4);
	end_scaleform_movie_method();
}

void func_388(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	begin_scaleform_movie_method(Global_1931927, "SETUP_CREDIT_BLOCK");
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam0);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_float(fParam1);
	scaleform_movie_method_add_param_float(fParam2);
	begin_text_command_scaleform_string("STRING");
	add_text_component_substring_player_name(sParam3);
	end_text_command_scaleform_string();
	scaleform_movie_method_add_param_float(fParam4);
	scaleform_movie_method_add_param_float(fParam5);
	end_scaleform_movie_method();
}

void func_389(int* iParam0)
{
	if (iParam0->f_6 >= 33 && iParam0->f_6 < 51)
	{
		if (does_entity_exist(iParam0->f_34))
		{
			if (is_vehicle_driveable(iParam0->f_34, false))
			{
				draw_light_with_range(get_offset_from_entity_in_world_coords(iParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_390()
{
	var uVar0;
	
	if (network_does_entity_exist_with_network_id(Local_414.f_3))
	{
		switch (Local_414.f_2)
		{
			case 2:
				if (BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 1))
				{
					if (!is_ped_injured(player_ped_id()))
					{
						if (func_410(Local_414.f_3))
						{
							if (!is_ped_in_any_vehicle(player_ped_id(), false))
							{
								if (get_script_task_status(player_ped_id(), -1794415470) != 1 && get_script_task_status(player_ped_id(), -1794415470) != 0)
								{
									task_enter_vehicle(player_ped_id(), net_to_veh(Local_414.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 2))
							{
								if (is_ped_sitting_in_vehicle(player_ped_id(), net_to_veh(Local_414.f_3)))
								{
									set_bit(&(Local_581[participant_id_to_int() /*5*/].f_4), 2);
									func_409(1);
								}
								else
								{
									clear_area_of_vehicles(-1031.788f, -2731.816f, 19.0546f, 50f, false, false, false, false, false, false, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_410(Local_414.f_3))
				{
					if (!func_408(Local_414.f_4))
					{
						if (BitTest(uLocal_582, 26))
						{
							if (get_script_task_status(net_to_ped(Local_414.f_4), -1273030092) != 1 && get_script_task_status(net_to_ped(Local_414.f_4), -1273030092) != 0)
							{
								task_vehicle_mission_coors_target(net_to_ped(Local_414.f_4), net_to_veh(Local_414.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, false);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_582, 27))
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						if (!func_125())
						{
							if (!is_pause_menu_active())
							{
								do_screen_fade_out(800);
							}
						}
					}
					else if (is_screen_faded_out())
					{
						set_bit(&uLocal_582, 27);
					}
				}
				else if (!BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 4))
				{
					if (func_397(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						clear_area_of_vehicles(-649.4202f, -954.0247f, 20.5269f, 20f, false, false, false, false, false, false, 0);
						_0x62ECFCFDEE7885D6();
						_invalidate_vehicle_idle_cam();
						set_gameplay_cam_relative_heading(0f);
						set_gameplay_cam_relative_pitch(0f, 1f);
						set_bit(&(Local_581[participant_id_to_int() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_408(Local_414.f_4))
				{
					if (!BitTest(uLocal_582, 29))
					{
						if (func_410(Local_414.f_3))
						{
							task_vehicle_park(net_to_ped(Local_414.f_4), net_to_veh(Local_414.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, true);
							do_screen_fade_in(800);
							set_bit(&uLocal_582, 29);
						}
					}
					else if (!BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 5))
					{
						if (get_script_task_status(net_to_ped(Local_414.f_4), -272084098) == 7)
						{
							set_bit(&(Local_581[participant_id_to_int() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!is_ped_injured(player_ped_id()))
				{
					if (is_ped_in_any_vehicle(player_ped_id(), false))
					{
						if (get_script_task_status(player_ped_id(), -828834893) != 1 && get_script_task_status(player_ped_id(), -828834893) != 0)
						{
							task_leave_any_vehicle(player_ped_id(), 0, 0);
						}
					}
					else if (!BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 6))
					{
						set_bit(&(Local_581[participant_id_to_int() /*5*/].f_3), 6);
						set_bit(&(Global_2815059.f_836), 4);
						clear_bit(&(Local_581[participant_id_to_int() /*5*/].f_4), 2);
						func_371(player_id(), 1, 0, 0);
						func_396();
						func_409(0);
						func_34("HLP_TAXI", -1);
						if (func_57())
						{
							func_45(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_393(-200, 0);
							unk_0x633310C9B4B8972C(200, 0, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_408(Local_414.f_4))
				{
					if (func_410(Local_414.f_3))
					{
						if (get_script_task_status(net_to_ped(Local_414.f_4), -258271821) != 1 && get_script_task_status(net_to_ped(Local_414.f_4), -258271821) != 0)
						{
							set_ped_keep_task(net_to_ped(Local_414.f_4), true);
							task_vehicle_drive_wander(net_to_ped(Local_414.f_4), net_to_veh(Local_414.f_3), 12f, 786599);
							func_392(&(Local_414.f_3));
							func_392(&(Local_414.f_4));
						}
					}
				}
				break;
		}
		if (BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 1))
		{
			_request_paths_prefer_accurate_boundingstruct(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!BitTest(uLocal_582, 26))
			{
				set_bit(&uLocal_582, 26);
			}
		}
		if (!BitTest(uLocal_582, 28))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 2))
			{
				if (!func_200(&uLocal_247))
				{
					func_220();
					func_22(&uLocal_247, 0, 0);
				}
				else if (func_199(&uLocal_247, 5000, 0))
				{
					if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						set_bit(&uLocal_582, 28);
					}
				}
			}
		}
		if (!BitTest(uLocal_582, 30))
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 5))
			{
				if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					set_bit(&uLocal_582, 30);
				}
			}
		}
		if (!BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 6))
		{
			func_391();
		}
		if (BitTest(Local_581[participant_id_to_int() /*5*/].f_4, 2))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
				}
			}
		}
	}
}

void func_391()
{
	Global_2826521.f_258 = 1;
}

void func_392(var uParam0)
{
	int iVar0;
	
	if (network_does_entity_exist_with_network_id(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		set_entity_as_no_longer_needed(&iVar0);
	}
}

void func_393(int iParam0, int iParam1)
{
	func_395(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_394(iParam0, 0);
	}
}

void func_394(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_395(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[player_id() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[player_id() /*834*/].f_205.f_3 = (Global_1853348[player_id() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_394(iVar1, 0);
	}
}

void func_396()
{
	enable_control_action(0, 22, true);
	enable_control_action(0, 36, true);
	enable_control_action(0, 32, true);
	enable_control_action(0, 34, true);
	enable_control_action(0, 35, true);
	enable_control_action(0, 33, true);
	enable_control_action(0, 31, true);
	enable_control_action(0, 30, true);
	enable_control_action(0, 44, true);
	enable_control_action(0, 141, true);
	enable_control_action(0, 140, true);
	enable_control_action(0, 263, true);
	enable_control_action(0, 264, true);
	enable_control_action(0, 143, true);
	enable_control_action(0, 24, true);
	enable_control_action(0, 257, true);
	enable_control_action(0, 263, true);
	enable_control_action(0, 264, true);
	enable_control_action(0, 143, true);
	enable_control_action(0, 262, true);
	enable_control_action(0, 261, true);
	enable_control_action(0, 37, true);
	enable_control_action(0, 25, true);
	enable_control_action(0, 26, true);
}

int func_397(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23011.f_6 = 1;
	if (Global_2703735.f_910 && Global_2703735.f_918)
	{
		func_405(0, bParam7);
		return 1;
	}
	if (is_player_switch_in_progress() && !bParam7)
	{
		if (Global_2703735.f_910)
		{
			func_405(0, bParam7);
		}
		return 0;
	}
	if ((is_new_load_scene_active() && !bParam7) && !is_player_teleport_active())
	{
		return 0;
	}
	if (!func_404(0))
	{
		if (func_403(player_id(), 1, 0) && !(func_402() || func_401()))
		{
			if (((bParam7 && func_14(player_id(), 1, 0)) && is_player_switch_in_progress()) && Global_2689235[player_id() /*453*/].f_230 == 1)
			{
			}
			else if (func_312() == 28)
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
			if (get_time_difference(get_network_time(), Global_2703735.f_916) < func_400(0))
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
				func_399(0);
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
				func_405(bParam4, bParam7);
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
			if (func_398(&(Global_2703735.f_917), Param0, fParam1, iVar0))
			{
				func_405(bParam4, bParam7);
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
					func_405(bParam4, bParam7);
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
				func_405(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_398(var uParam0, struct<3> Param1, float fParam2, int iParam3)
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

void func_399(int iParam0)
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

int func_400(bool bParam0)
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

bool func_401()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

var func_402()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

int func_403(int iParam0, bool bParam1, int iParam2)
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

bool func_404(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_405(bool bParam0, bool bParam1)
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
	func_373();
	if (!BitTest(Global_1853348[player_id() /*834*/].f_267.f_30, 14) && !func_407())
	{
		func_406();
	}
}

void func_406()
{
	Global_2824571.f_92 = 1;
}

int func_407()
{
	if (!network_is_activity_session() && !func_404(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return is_ped_injured(net_to_ped(iParam0));
	}
	return 1;
}

void func_409(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_139, 15))
		{
			set_bit(&(Global_1853348[player_id() /*834*/].f_139), 15);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_139, 15))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_139), 15);
	}
}

int func_410(int iParam0)
{
	if (network_does_network_id_exist(iParam0))
	{
		return !func_411(net_to_veh(iParam0));
	}
	return 0;
}

int func_411(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_dead(iParam0, false))
		{
			return 1;
		}
		else if (!is_vehicle_driveable(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_412(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_65(iParam0, 8, 0);
			func_413(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_63(iParam0, 8, 0);
		func_413(iParam0);
	}
}

void func_413(int iParam0)
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

void func_414(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_100493.f_9[iParam0] = 1;
	}
	else
	{
		Global_100493.f_9[iParam0] = 0;
	}
}

void func_415(bool bParam0)
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
		func_413(iVar0);
		iVar0++;
	}
}

void func_416(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_417()
{
	return Local_414.f_0;
}

int func_418()
{
	return 1;
}

int func_419(int iParam0)
{
	return Local_581[iParam0 /*5*/];
}

int func_420(int iParam0)
{
	return Local_581[iParam0 /*5*/].f_2;
}

int func_421(bool bParam0)
{
	if (func_423())
	{
		if (bParam0)
		{
			if (!Global_1836579 && !func_422(player_id(), 2))
			{
				animpostfx_play("MinigameTransitionIn", 0, true);
				func_361(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_422(int iParam0, int iParam1)
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
}

bool func_423()
{
	return Global_2703735.f_21;
}

void func_424(bool bParam0)
{
	bool bVar0;
	
	if (network_is_game_in_progress())
	{
		if (bLocal_588)
		{
			if (BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 2))
			{
				if (!BitTest(uLocal_582, 31))
				{
					func_32(119, 1, -1, 1);
					func_32(115, 1, -1, 1);
				}
				func_758(1);
				bVar0 = true;
			}
		}
		else if (BitTest(Local_581[participant_id_to_int() /*5*/].f_3, 1))
		{
			if (!BitTest(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_219(&Local_62, 0, bParam0);
	if (network_is_game_in_progress())
	{
		if (Global_2703735.f_3428)
		{
			func_751(0, 1, 0, 1);
		}
	}
	if (network_is_game_in_progress())
	{
		func_409(0);
	}
	remove_scenario_blocking_area(Local_62.f_122, false);
	set_roads_back_to_original_in_angled_area(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	set_roads_back_to_original_in_angled_area(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	clear_bit(&(Global_2815059.f_836), 4);
	func_98(0);
	func_61(0);
	func_750();
	func_749(iLocal_61, 0);
	func_198(&(Global_2703735.f_3678));
	Global_2703735.f_3676 = 0;
	Global_2703735.f_3675 = 0;
	Global_2703735.f_3677 = 0;
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_config_flag(player_ped_id(), 244, true);
		set_ped_config_flag(player_ped_id(), 243, true);
		set_ped_config_flag(player_ped_id(), 242, true);
	}
	if (bVar0)
	{
		func_427(0, 0, 0, 0, 1);
	}
	else
	{
		clear_help(true);
		func_427(0, 0, 3, 1, 1);
	}
	clear_bit(&(Global_2815059.f_836), false);
	func_415(0);
	func_414(4, 0);
	func_414(1, 0);
	func_414(0, 0);
	func_414(2, 0);
	func_414(3, 0);
	func_412(iLocal_61, 0);
	func_396();
	func_35();
	if (does_blip_exist(Global_100493.f_255[iLocal_61]))
	{
		set_blip_route(Global_100493.f_255[iLocal_61], false);
	}
	if (does_blip_exist(iLocal_585))
	{
		remove_blip(&iLocal_585);
	}
	if (network_is_game_in_progress())
	{
		func_426(0);
		func_201(0);
	}
	func_425(Local_414.f_5);
}

void func_425(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (absi(get_time_difference(get_network_time(), Param0.f_0)) >= 1000)
		{
			network_set_mission_finished();
		}
	}
	terminate_this_thread();
}

void func_426(bool bParam0)
{
	if (bParam0)
	{
		set_bit(&(Global_1853348[player_id() /*834*/].f_139), 5);
	}
	else
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_139), 5);
	}
}

void func_427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var9;
	int iVar10;
	char* sVar11;
	struct<2> Var12;
	bool bVar13;
	int iVar14;
	
	iVar0 = player_id();
	iVar1 = Global_1853348[iVar0 /*834*/];
	func_748();
	func_744();
	_clear_suppressed_pad_rumble(0);
	func_743();
	Global_1057165 = 0;
	Global_1835453 = 0;
	func_742();
	network_block_join_queue_invites(false);
	func_741();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836370 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	func_740(0);
	Global_1836359 = 0;
	Global_1836358 = 0;
	Global_1836382 = 0;
	Global_1836598 = 0;
	Global_1836604 = 0;
	Global_1836090 = 0;
	Global_1837298 = 1;
	Global_1836570 = 0;
	Global_1836371 = -1;
	func_739(0);
	clear_bit(&(Global_2621446.f_1), 5);
	if (!func_738() && !func_736())
	{
		func_735();
	}
	func_734();
	func_733();
	func_732();
	func_731();
	func_730();
	if (network_is_game_in_progress())
	{
		func_729();
		func_728();
	}
	if (func_727() || !func_726())
	{
		func_725();
		func_724(1, 1, 1);
		func_723();
		func_722();
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	func_721();
	if ((((Global_4718592 != 6 && func_720(Global_4718592.f_116524) != 14) && func_720(Global_4718592.f_116524) != 15) && !func_349()) && !func_736())
	{
		if (func_14(player_id(), 1, 1))
		{
			if (is_ped_wearing_helmet(player_ped_id()))
			{
				remove_ped_helmet(player_ped_id(), true);
			}
		}
	}
	Global_1835474 = 0;
	if (Global_1922955.f_9 == 4)
	{
		if (func_719(player_id()) || func_718(player_id()))
		{
			Global_1835474 = 1;
		}
	}
	func_716();
	if (func_715())
	{
		func_714();
	}
	func_713();
	Global_4718592.f_117081 = 0;
	Global_1922915.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !func_712())
	{
		if (BitTest(Global_4718592.f_14, 17))
		{
			set_player_leave_ped_behind(player_id(), false);
			network_disable_leave_remote_ped_behind(true);
		}
		else
		{
			set_player_leave_ped_behind(player_id(), true);
			network_disable_leave_remote_ped_behind(false);
		}
	}
	StringCopy(&(Global_4718592.f_116516), "", 32);
	if (!func_736())
	{
		thefeed_hide_this_frame();
		hide_hud_component_this_frame(18);
		if ((bParam3 && !func_711()) && !func_710())
		{
			hide_hud_and_radar_this_frame();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1888144[iVar3] = 0;
		Global_1888111[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		set_bit(&(Global_2715699.f_5986), 3);
	}
	else
	{
		clear_bit(&(Global_2715699.f_5986), 3);
	}
	if (iVar0 != -1 && Global_2714762.f_669.f_10 != 0)
	{
		Global_1888862[player_id() /*120*/].f_2 = Global_2714762.f_669.f_10;
	}
	if (func_423() || (iVar0 != -1 && BitTest(Global_1853348[iVar0 /*834*/].f_833, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			func_708();
			Global_4718592 = 0;
		}
		else
		{
			func_708();
		}
		func_707();
		func_706(1, 1);
		func_724(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
		func_705(1);
		if (func_704())
		{
			func_703();
		}
		if (!func_17(player_id()))
		{
			func_701(4);
		}
		func_723();
		func_700(0);
		func_699();
		Global_1837290 = 0;
	}
	if (!func_698())
	{
		func_697();
		if (func_696())
		{
			if (func_695())
			{
				func_707();
			}
		}
		func_705(1);
		if (!func_694())
		{
			Global_2715699.f_6325 = 0;
			Global_2715699.f_6326 = 0;
			Global_2715699.f_6324 = 0;
			Global_2715699.f_6323 = 0;
			Global_2715699.f_6504 = 0;
		}
	}
	else
	{
		func_693(player_id(), 0);
	}
	func_692((Global_1922955.f_9 != 4 && !func_698()));
	func_691((Global_1922955.f_9 != 4 && !func_698()));
	func_690((Global_1922955.f_9 != 4 && !func_698()));
	func_689((Global_1922955.f_9 != 4 && !func_698()));
	if (func_694())
	{
		Global_2715699.f_6415 = 1;
	}
	else
	{
		Global_2715699.f_6415 = 0;
	}
	if (!func_698())
	{
		if (func_694())
		{
			Global_2715699.f_6416 = 1;
		}
		else
		{
			Global_2715699.f_6416 = 0;
		}
	}
	if (func_687())
	{
		if (func_686())
		{
			Global_2715699.f_6417 = 1;
		}
		else
		{
			Global_2715699.f_6417 = 0;
		}
	}
	if (!func_738())
	{
		Global_1922981.f_1345 = 0;
	}
	if (!func_698() && !func_738())
	{
		func_706(1, Global_1922955.f_9 != 4);
		func_724(1, 1, 0);
		func_685(0);
		func_684();
		Global_1837292 = 0;
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	func_681(1, -1);
	if (func_680())
	{
		func_679();
	}
	if (network_is_activity_session())
	{
		_0x9465E683B12D3F6B();
	}
	if ((!func_711() && !func_698()) && !func_710())
	{
		func_674();
	}
	Global_4718592.f_117077 = 0;
	func_673();
	Global_1836352 = -1;
	Global_1888192 = -1;
	Global_1888182 = -1;
	Global_1888185 = -1;
	Global_1836357 = 0;
	Global_1888183 = 0;
	Global_1836581 = 0;
	Global_1836573 = 0;
	Global_1888193 = 0;
	func_672(0);
	func_671();
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_833), 7);
	Global_1888180 = 0f;
	Global_1888181 = 0f;
	Global_1836582 = 0;
	Global_1836583 = -1;
	func_670(0);
	Global_1836571 = 0;
	Global_1836091 = 0;
	func_669();
	set_audio_flag("WantedMusicDisabled", false);
	set_audio_flag("DisableFlightMusic", false);
	func_668(1);
	if (func_667())
	{
		func_666();
	}
	if (func_665())
	{
		if (func_663(player_id()))
		{
			if (network_get_total_num_players() < 2)
			{
				func_662();
				func_661(1);
			}
			else
			{
				func_660();
			}
			if (Global_1922955.f_9 != -1)
			{
				func_659();
			}
		}
		else if (Global_1853348[player_id() /*834*/] == 0)
		{
			if (Global_1922955.f_9 != -1)
			{
				func_659();
			}
		}
	}
	bVar4 = func_18(iVar0);
	Global_1853348[iVar0 /*834*/].f_194 = 0;
	if (bVar4 && !func_738())
	{
		func_658();
	}
	if (!bVar4)
	{
		func_657(0);
	}
	if ((func_656() != 40 && func_656() != 39) && !func_655())
	{
		Global_1835428 = { 0f, 0f, 0f };
	}
	if (func_654() && func_257())
	{
	}
	else
	{
		func_653();
	}
	func_652();
	func_661(0);
	bVar6 = false;
	if (!bVar4)
	{
		if (Global_1922955.f_9 == 6)
		{
			bVar6 = true;
		}
		if (!func_651())
		{
			func_650(0, bVar6);
		}
	}
	_0x9D7AFCBF21C51712(false);
	if (network_is_game_in_progress())
	{
		switch (Global_1922955.f_9)
		{
			case 1:
				if (!func_649() && func_646(0) > 0)
				{
					Global_1941273[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_644();
					func_643();
				}
				break;
			
			case 6:
				Global_1837290 = 0;
				if (!bVar4)
				{
					func_644();
				}
				func_643();
				Global_1922955 = 0;
				Global_1922955.f_23 = { 0f, 0f, 0f };
				clear_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
				StringCopy(&(Global_2689235[player_id() /*453*/].f_224), "", 24);
				Global_2689235[player_id() /*453*/].f_221 = { 0f, 0f, 0f };
				func_642(0);
				break;
			
			case 2:
				func_641(0);
				if (!func_640() || (func_640() && is_string_null_or_empty(&(Global_2714762.f_33))))
				{
					func_639(Global_1922955.f_17);
					func_638(Global_1922955.f_17);
				}
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != func_141())
				{
					if (network_is_player_active(iVar5))
					{
						Global_2715699.f_5987 = { func_78(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && func_640()) && network_get_num_participants() == 1)
				{
					Global_2715699.f_5987 = { func_637() };
				}
				if (((((Global_4718592.f_593 > 1 && !func_629()) && !func_628(Global_4718592.f_116524)) && !func_627(Global_4718592.f_116524)) && Global_1853348[player_id() /*834*/].f_96.f_28 > -1) && Global_1853348[player_id() /*834*/].f_96.f_28 < 4)
				{
					func_626(Global_1853348[player_id() /*834*/].f_96.f_28);
				}
				else
				{
					func_625();
				}
				break;
			
			case 3:
				func_641(0);
				iVar2 = 1;
				func_624();
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != func_141())
				{
					if (network_is_player_active(iVar5))
					{
						Global_2715699.f_5987 = { func_78(iVar5) };
					}
				}
				if (((Global_4718592.f_593 > 1 && !func_629()) && !func_628(Global_4718592.f_116524)) && !func_627(Global_4718592.f_116524))
				{
					func_626(Global_1853348[player_id() /*834*/].f_96.f_28);
				}
				else
				{
					func_625();
				}
				break;
			
			case 4:
				func_641(0);
				iVar2 = 1;
				if (func_623())
				{
					func_622();
				}
				else if (func_621())
				{
				}
				else
				{
					if (!(func_620() || func_694()) || !func_619())
					{
						Global_2715699.f_6325 = 0;
						Global_2715699.f_6326 = 0;
					}
					if (!func_619())
					{
						Global_2715699.f_6324 = 0;
						Global_2715699.f_6323 = 0;
					}
				}
				if (func_719(player_id()) || func_718(player_id()))
				{
					Global_786435.f_34++;
				}
				else if (func_618())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_616())
				{
					Global_1944501.f_17++;
				}
				else if (func_337())
				{
					Global_1944587.f_18++;
				}
				else if ((func_615(Global_4718592.f_116524) || func_614(Global_4718592.f_116524)) || (func_612() && func_611(249)))
				{
					Global_1944719.f_18++;
				}
				if (func_610(Global_4718592.f_116524))
				{
					if (Global_1944421.f_14 == 0)
					{
						Global_1944421.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (func_609() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							func_608(Global_4718592.f_116980);
						}
						else
						{
							func_607(Global_4718592.f_165269, Global_4718592.f_165270);
						}
						if (Global_1922955.f_14 > -1)
						{
							network_override_clock_time(Global_1922955.f_14, Global_1922955.f_15, 0);
						}
						else if (func_606() > -1)
						{
							func_604(func_606(), 0);
						}
					}
					else
					{
						network_override_clock_time(func_609(), 0, 0);
					}
				}
				if (func_603())
				{
					Var8 = { func_602() };
					func_601(Var8);
					if (func_600() != -1)
					{
						Global_1853348[player_id() /*834*/].f_96.f_28 = func_600();
					}
					func_599();
					func_598();
				}
				else
				{
					func_624();
				}
				if (!func_258(player_id(), 0))
				{
					network_set_override_spectator_mode(false);
					func_376(0, 0, 1);
				}
				break;
			
			case 5:
				func_641(0);
				iVar2 = 1;
				func_624();
				break;
			
			case 8:
				if (!func_640())
				{
					func_639(Global_1922955.f_17);
				}
				break;
			
			case 9:
				func_641(0);
				iVar2 = 1;
				func_624();
				func_638(Global_4718592.f_116811);
				Global_2689235[player_id() /*453*/].f_224 = { Global_4718592.f_116811 };
				if (func_597())
				{
					func_596();
				}
				if (!func_258(player_id(), 0))
				{
					network_set_override_spectator_mode(false);
					func_376(0, 0, 1);
				}
				break;
			
			case 10:
				func_575(10, 0f, 0f, 0f, Var9);
				func_574();
				break;
		}
	}
	else
	{
		Global_1837290 = 0;
	}
	if (iVar2 || func_718(player_id()))
	{
		if ((func_573(player_id()) || func_719(player_id())) || func_718(player_id()))
		{
			if (Global_1931908 > 0)
			{
				Global_2715699.f_1.f_2828.f_13 = Global_1931908;
				Global_2715699.f_1.f_2828 = { Global_1931908.f_1 };
			}
		}
		else
		{
			func_572();
		}
	}
	Global_2715699.f_1.f_842 = 0;
	clear_bit(&Global_1836095, false);
	func_571(0);
	Global_1836362 = 0;
	Global_1836566 = -1;
	Global_1888110 = 0;
	Global_1574602 = 0;
	Global_1922955.f_1 = 0;
	Global_1922955.f_2 = 0;
	if (func_570() == 0)
	{
		if (Global_1922955.f_9 == -1 && bVar4 == 0)
		{
			func_562(0);
		}
		else
		{
			Global_1922955.f_9 = -1;
		}
	}
	func_561();
	if (func_560())
	{
		func_559();
	}
	if (func_558())
	{
		func_557();
	}
	if (!network_is_activity_session())
	{
		set_store_enabled(true);
	}
	if (func_570() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_556(Global_1853348[iVar0 /*834*/]) && !func_711()) && !bVar4) && !func_404(0)) && !func_698()) && !func_710())
			{
				func_555(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_554();
	Global_1922955.f_1 = 0;
	if (!func_665())
	{
		func_553();
	}
	if (Global_1853348[iVar0 /*834*/] != -1)
	{
		iParam2 = iParam2;
		if (func_552(Global_1853348[iVar0 /*834*/]))
		{
			if (network_is_signed_online())
			{
				iVar10 = func_529(0);
				func_526(1213, -1);
				func_521(joaat("mpply_mgame_cheat_end"), iVar10);
				if (iVar10 > 0)
				{
					func_521(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (network_is_game_in_progress())
	{
		network_enable_voice_bandwidth_restriction(player_id());
	}
	func_519();
	if (Global_1922955 == 0)
	{
		if (!bVar4)
		{
			Global_1853348[iVar0 /*834*/].f_10 = -1;
			clear_bit(&(Global_1853348[iVar0 /*834*/].f_833), true);
		}
	}
	if (bVar4)
	{
		func_555(0);
		set_bit(&(Global_1853348[iVar0 /*834*/].f_833), true);
		Global_1853348[iVar0 /*834*/].f_10 = func_518(player_id());
		network_set_override_spectator_mode(false);
		func_376(0, 0, 1);
		if (func_517())
		{
			func_515();
		}
	}
	if ((Global_1853348[iVar0 /*834*/] < 10 && Global_1853348[iVar0 /*834*/] != -1) && !func_404(0))
	{
		if ((!is_string_null_or_empty(&(Global_1853348[iVar0 /*834*/].f_144)) && Global_1853348[iVar0 /*834*/] != 5) && Global_1853348[iVar0 /*834*/] != 148)
		{
			func_512(&(Global_1853348[iVar0 /*834*/].f_144));
		}
	}
	if (Global_1853348[iVar0 /*834*/] != 6)
	{
		Global_1922902 = 1;
	}
	Global_1853348[iVar0 /*834*/] = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_2 = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_16 = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar4)
	{
		func_511(0);
	}
	Global_1853348[iVar0 /*834*/].f_36.f_18 = 0;
	clear_bit(&(Global_1853348[network_player_id_to_int() /*834*/].f_768), false);
	set_mission_name_for_ugc_mission(false, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		thefeed_flush_queue();
		Global_2726719 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1853348[iVar0 /*834*/].f_144), sVar11, 24);
		StringCopy(&(Global_1853348[iVar0 /*834*/].f_150), sVar11, 24);
		func_510();
	}
	StringCopy(&(Global_1880037[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_1853348[iVar0 /*834*/].f_164), sVar11, 64);
	Global_1888862[iVar0 /*120*/].f_31 = { Var12 };
	Global_1888862[iVar0 /*120*/].f_33 = { Var12 };
	Global_1836576 = 0;
	Global_1836577 = 0;
	Global_1836103 = -1;
	bVar13 = false;
	func_509();
	func_508();
	func_507();
	if (func_506())
	{
		func_505();
	}
	if (func_504() && network_is_activity_session())
	{
		func_503();
		func_371(player_id(), 0, 57348, 0);
	}
	if (func_502())
	{
		func_501();
	}
	else if (func_500())
	{
		func_501();
	}
	else if (func_499())
	{
		func_501();
	}
	else if (func_498())
	{
		func_501();
	}
	else if (func_497())
	{
		func_501();
	}
	else if (func_570())
	{
		func_501();
	}
	else if (func_496() && func_495())
	{
		func_501();
	}
	else if (func_494())
	{
		func_501();
	}
	else
	{
		func_493();
		if (!BitTest(Global_1853348[player_id() /*834*/].f_833, 1) && !func_738())
		{
			if (network_is_activity_session())
			{
				if (func_517())
				{
					func_492();
				}
				else
				{
					if (!BitTest(Global_4718592.f_28, 10))
					{
						if (does_entity_exist(player_ped_id()))
						{
							Global_2715699.f_2846.f_198 = { get_entity_coords(player_ped_id(), false) };
						}
					}
					func_491();
					func_723();
					func_490(6);
					func_643();
					if (bVar4)
					{
						func_700(0);
					}
				}
				func_489();
				func_488();
				func_487();
				if (Global_2715699.f_2846.f_4 == 2)
				{
					Global_2715699.f_2846.f_4 = 1;
				}
				if (func_258(player_id(), 0))
				{
					func_486();
				}
				func_485();
				Global_2715699.f_2846 = 0;
			}
			else
			{
				func_484();
				func_501();
			}
		}
		else
		{
			if (!func_694() && !func_738())
			{
			}
			func_484();
			func_501();
		}
	}
	if ((((((((((!func_502() && !func_483()) && !func_495()) && !func_496()) && !func_499()) && !func_500()) && !func_482()) && !func_497()) && !func_570()) && !func_498()) && !func_481())
	{
		if (!func_480())
		{
			func_479();
			func_477();
			func_476();
			func_474(1);
		}
	}
	if (network_is_game_in_progress())
	{
		if (network_is_in_tutorial_session())
		{
			if (!network_is_tutorial_session_change_pending())
			{
				if (!func_473())
				{
					if (!bVar13)
					{
						if (func_17(player_id()))
						{
							network_end_tutorial_session();
							_prepare_script_brain();
						}
					}
				}
			}
		}
	}
	if (!func_404(0))
	{
		StringCopy(&(Global_4718592.f_116531), "", 64);
	}
	if (func_472(116, &iVar14))
	{
		func_471(iVar14);
	}
	if (func_472(123, &iVar14))
	{
		func_471(iVar14);
	}
	if (!func_738())
	{
		func_463();
	}
	else if (func_462())
	{
		func_461();
	}
	func_460();
	if (!func_698() && !func_694())
	{
		func_459();
	}
	func_458();
	func_452();
	func_428(bParam3);
}

void func_428(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_665())
		{
		}
		else if ((((!func_698() && !func_694()) && !func_738()) && Global_1922955.f_9 != 9) && Global_1922955.f_9 != 4)
		{
			func_604(0, 1);
		}
	}
	remove_scenario_blocking_areas();
	if (!func_451(player_id()) && !BitTest(Global_1853348[player_id() /*834*/].f_833, 17))
	{
		func_450();
	}
	if (func_449())
	{
		func_448(1);
		func_447(1);
		func_446(1);
		func_445(1);
	}
	if ((((bParam0 && !func_444()) && !func_698()) && !Global_262145.f_4751) && !func_443())
	{
		clear_override_weather();
	}
	enable_dispatch_service(5, true);
	enable_dispatch_service(3, true);
	func_435(&uVar0, -1);
	if ((func_19() == 0 && !func_125()) && !func_698())
	{
		if (func_434())
		{
			func_433();
		}
		else
		{
			func_430(1147932892, 28, 0);
		}
	}
	func_429(0);
}

void func_429(int iParam0)
{
	if (!Global_1931398 == iParam0)
	{
		Global_1931398 = iParam0;
	}
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_432(iParam1, iParam2))
	{
		iVar0 = func_431();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_431()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_432(int iParam0, var uParam1)
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_433()
{
	set_bit(&(Global_1048576.f_10), 22);
}

bool func_434()
{
	return BitTest(Global_1048576.f_10, 21);
}

void func_435(var uParam0, int iParam1)
{
	func_441(uParam0, iParam1);
	func_436(iParam1);
}

void func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	iVar0 = func_440(iParam0);
	iVar1 = get_profile_setting(iVar0);
	if (func_437())
	{
		if (BitTest(iVar1, 1))
		{
			func_32(133, 1, -1, 1);
		}
	}
}

int func_437()
{
	if (func_439() && func_438(0))
	{
		return 1;
	}
	return 0;
}

var func_438(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_439()
{
	return func_438(func_29() + 1);
}

int func_440(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_441(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	iVar1 = func_442(iParam1);
	iVar2 = get_profile_setting(iVar1);
	if (BitTest(iVar2, 1))
	{
		func_526(1208, iParam1);
		func_521(joaat("mpply_dm_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, true);
		bVar0 = true;
	}
	if (BitTest(iVar2, 2))
	{
		func_526(1210, iParam1);
		func_521(joaat("mpply_race_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 2);
		bVar0 = true;
	}
	if (BitTest(iVar2, 3))
	{
		func_526(1119, iParam1);
		func_521(joaat("mpply_mc_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 3);
		bVar0 = true;
	}
	if (BitTest(iVar2, 4))
	{
		func_526(1212, iParam1);
		func_521(joaat("mpply_mgame_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 4);
		bVar0 = true;
	}
	if (BitTest(iVar2, 5))
	{
		func_526(1925, iParam1);
		func_521(joaat("mpply_cap_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 5);
		bVar0 = true;
	}
	if (BitTest(iVar2, 6))
	{
		func_526(1927, iParam1);
		func_521(joaat("mpply_sur_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 6);
		bVar0 = true;
	}
	if (BitTest(iVar2, 7))
	{
		func_526(1929, iParam1);
		func_521(joaat("mpply_lts_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 7);
		bVar0 = true;
	}
	if (BitTest(iVar2, 8))
	{
		func_526(1931, iParam1);
		func_521(joaat("mpply_para_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 8);
		bVar0 = true;
	}
	if (BitTest(iVar2, 9))
	{
		func_526(11012, iParam1);
		func_521(joaat("mpply_heist_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 9);
		bVar0 = true;
	}
	if (BitTest(iVar2, 26))
	{
		func_526(1933, iParam1);
		func_521(joaat("mpply_fmevn_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		clear_bit(&iVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		_0x723C1CE13FBFDB67(iVar2, iParam1);
	}
}

int func_442(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_443()
{
	if (func_719(player_id()) || func_718(player_id()))
	{
		if (func_620() || func_694())
		{
			return 1;
		}
	}
	return 0;
}

bool func_444()
{
	return Global_1836579;
}

void func_445(int iParam0)
{
	Global_2715699.f_6503 = iParam0;
}

void func_446(int iParam0)
{
	Global_2715699.f_6502 = iParam0;
}

void func_447(int iParam0)
{
	Global_2715699.f_6501 = iParam0;
}

void func_448(int iParam0)
{
	Global_2715699.f_6322 = iParam0;
}

int func_449()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!is_string_null_or_empty(&(Global_4718592.f_116841[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_450()
{
	set_max_wanted_level(6);
	set_wanted_level_multiplier(1f);
	set_create_random_cops(true);
}

int func_451(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

void func_452()
{
	if (Global_1965456)
	{
		if (func_349())
		{
			if (func_457(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 1:
						remove_model_hide(2947.73f, -3860.622f, 142.6144f, 5f, joaat("xs_combined_dyst_06_build_03"), false);
						break;
				}
			}
			else if (func_456(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						remove_model_hide(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
				}
			}
			else if (func_455(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						remove_model_hide(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), false);
						break;
				}
			}
			else if (func_454(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						remove_model_hide(2944.726f, -3846.384f, 140f, 5f, joaat("xs_propint5_waste_09_ground_d"), false);
						remove_model_hide(2948.589f, -3859.259f, 145.6578f, 5f, joaat("xs_propint5_waste_09_ground_cut"), false);
						remove_model_hide(2950.465f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), false);
						break;
				}
			}
			else if (func_453(Global_4718592.f_168757))
			{
				switch (Global_4718592.f_162543)
				{
					case 3:
						remove_model_hide(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
					}
				}
		}
		Global_1965456 = 0;
	}
}

bool func_453(int iParam0)
{
	return iParam0 == 76;
}

bool func_454(int iParam0)
{
	return iParam0 == 77;
}

bool func_455(int iParam0)
{
	return iParam0 == 83;
}

bool func_456(int iParam0)
{
	return iParam0 == 74;
}

bool func_457(int iParam0)
{
	return iParam0 == 78;
}

void func_458()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		Global_1964160[iVar0] = -1;
		Global_1964195[iVar0] = -1;
		Global_1964230[iVar0] = -1;
		iVar0++;
	}
}

void func_459()
{
	Global_2714762.f_43.f_41 = 0;
}

void func_460()
{
	Global_1922955.f_6 = 0;
}

void func_461()
{
	set_bit(&(Global_1853348[player_id() /*834*/].f_96.f_32), 5);
}

bool func_462()
{
	return BitTest(Global_2714762.f_3, 7);
}

void func_463()
{
	struct<3> Var0;
	struct<2> Var1;
	int iVar2;
	
	if (!func_469(func_470(), Var0))
	{
		Var1.f_0 = -2130063589;
		Var1.f_1 = player_id();
		iVar2 = func_468(1, 1);
		if (!iVar2 == 0)
		{
			func_465();
			func_464(0);
			_trigger_script_event_2(1, &Var1, 2, iVar2);
		}
	}
}

void func_464(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2703735.f_3423 = get_network_time();
	}
	Global_2703735.f_3307 = iParam0;
}

void func_465()
{
	func_467();
	func_466();
}

void func_466()
{
	struct<72> Var0;
	
	if (func_60(player_id()))
	{
		Var0.f_6 = 32;
		Global_2689235[player_id() /*453*/].f_124 = { Var0 };
	}
}

void func_467()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2703735.f_3307.f_79 };
	Var0.f_95 = { Global_2703735.f_3307.f_95 };
	Global_2703735.f_3307 = { Var0 };
}

var func_468(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = int_to_playerindex(bVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (bParam1)
				{
					set_bit(&uVar0, bVar1);
				}
				else if (!func_258(iVar2, 0))
				{
					set_bit(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_469(struct<3> Param0, struct<3> Param1)
{
	if ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_470()
{
	return Global_2688483[player_id() /*10*/];
}

void func_471(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2779511[iParam0 /*5*/].f_1 == -1 || Global_2779511[iParam0 /*5*/].f_2 == -1) || Global_2779511[iParam0 /*5*/].f_3 == -1) || Global_2779511[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	replace_hud_colour_with_rgba(Global_2779511[iParam0 /*5*/], Global_2779511[iParam0 /*5*/].f_1, Global_2779511[iParam0 /*5*/].f_2, Global_2779511[iParam0 /*5*/].f_3, Global_2779511[iParam0 /*5*/].f_4);
	Global_2779511[iParam0 /*5*/] = -1;
	Global_2779511[iParam0 /*5*/].f_1 = -1;
	Global_2779511[iParam0 /*5*/].f_2 = -1;
	Global_2779511[iParam0 /*5*/].f_3 = -1;
	Global_2779511[iParam0 /*5*/].f_4 = -1;
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2779511[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_473()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_139, 18);
}

void func_474(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar2;
	
	Global_2715699.f_1.f_2798 = 0;
	Global_2715699.f_1.f_2799 = 0;
	Global_2715699.f_1.f_2824 = 0;
	Global_2715699.f_1.f_2805 = 0;
	Global_2715699.f_1.f_2806 = 0;
	Global_2715699.f_1.f_2809 = 0;
	Global_2715699.f_1.f_2810 = 0;
	Global_2715699.f_1.f_2808 = -1;
	Global_2715699.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2715699.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2715699.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2715699.f_1.f_2822 = -1;
		Global_2715699.f_1.f_2823 = -1;
	}
	Global_2715699.f_1.f_2844 = 0;
	func_475();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Global_2715699.f_1.f_845[iVar2 /*57*/] = { Var1 };
		iVar2++;
	}
	Global_2711251.f_33 = -1;
	Global_2711251.f_34 = -1;
}

void func_475()
{
	Global_2711251.f_32 = 0;
}

void func_476()
{
	Global_2714762.f_691 = 0;
}

void func_477()
{
	Global_2714762.f_692 = 0;
	func_478();
}

void func_478()
{
	int iVar0;
	
	iVar0 = player_id();
	if (iVar0 >= 0)
	{
		clear_bit(&(Global_1853348[iVar0 /*834*/].f_96.f_32), 6);
	}
}

void func_479()
{
	Global_2714762 = 0;
	Global_2714762.f_2 = 0;
	Global_2714762.f_3 = 0;
}

bool func_480()
{
	return Global_2714762.f_691;
}

bool func_481()
{
	return Global_1931899;
}

bool func_482()
{
	return BitTest(Global_2714762, 1);
}

bool func_483()
{
	return BitTest(Global_2714762, 16);
}

void func_484()
{
	clear_bit(&Global_2714762, 21);
}

void func_485()
{
	Global_2715699.f_2846.f_35 = 1;
}

void func_486()
{
	Global_2715699.f_1.f_2827 = 1;
}

void func_487()
{
	Global_2714762.f_827 = 1;
}

void func_488()
{
	Global_2715699.f_1.f_2826 = 1;
}

void func_489()
{
	set_bit(&Global_2714762, 21);
}

void func_490(int iParam0)
{
	Global_2715699.f_1.f_837 = iParam0;
	Global_2689235[player_id() /*453*/].f_220 = iParam0;
}

void func_491()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2711289 = { Var0 };
}

void func_492()
{
	Global_2715699.f_2846.f_1 = 1;
}

void func_493()
{
	Global_2715699.f_2846.f_1 = 0;
}

bool func_494()
{
	return Global_2714762.f_716;
}

bool func_495()
{
	return Global_2714762.f_706;
}

bool func_496()
{
	return Global_2714762.f_693;
}

bool func_497()
{
	return Global_2714762.f_702;
}

bool func_498()
{
	return BitTest(Global_2714762.f_2, 15);
}

bool func_499()
{
	return BitTest(Global_2714762, 20);
}

bool func_500()
{
	return BitTest(Global_2714762, 2);
}

void func_501()
{
	Global_2715699.f_2846.f_35 = 0;
}

bool func_502()
{
	return BitTest(Global_1048576.f_10, 8);
}

void func_503()
{
	Global_2714762.f_721 = 0;
}

var func_504()
{
	return Global_2714762.f_721;
}

void func_505()
{
	Global_2714762.f_752 = 0;
}

bool func_506()
{
	return Global_2714762.f_752;
}

void func_507()
{
	Global_2715699.f_1.f_838 = 0;
	Global_2715699.f_1.f_839 = 0;
	Global_2715699.f_1.f_841 = 0;
}

void func_508()
{
	clear_bit(&Global_2714762, 4);
}

void func_509()
{
	clear_bit(&Global_2714762, 28);
}

void func_510()
{
	int iVar0;
	
	iVar0 = player_id();
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 4);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 5);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 7);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 8);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 9);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 10);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 11);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 12);
	clear_bit(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 13);
}

void func_511(bool bParam0)
{
	network_set_override_spectator_mode(bParam0);
}

void func_512(char* sParam0)
{
	var uVar0;
	
	if ((!func_514() && func_513(120, -1)) && !func_404(0))
	{
		network_handle_from_member_id(sParam0, &uVar0, 13);
		if (network_is_handle_valid(&uVar0, 13))
		{
			if (network_is_friend(&uVar0))
			{
			}
		}
	}
}

int func_513(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_28(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_514()
{
	int iVar0;
	
	iVar0 = player_id();
	if ((Global_1853348[iVar0 /*834*/].f_36.f_2 == 63 || Global_1853348[iVar0 /*834*/].f_36.f_2 == 62) || Global_1853348[iVar0 /*834*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_515()
{
	set_bit(&(Global_1048576.f_10), 8);
	func_516();
}

void func_516()
{
	Global_2714762.f_881 = 1;
}

bool func_517()
{
	return Global_2715699.f_2846.f_2;
}

var func_518(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_96.f_2;
}

void func_519()
{
	if (func_520())
	{
		clear_help(true);
	}
}

bool func_520()
{
	return func_197("FM_RETRY_INV");
}

void func_521(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_525(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_524(iParam0))
	{
		func_523(iParam0, iVar0);
	}
	else
	{
		func_522(iParam0, iVar0);
	}
}

void func_522(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_523(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, true);
	}
}

int func_524(int iParam0)
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_525(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam1), 0);
	iVar0++;
	if (!func_528(iParam0))
	{
		func_64(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_527(iParam0, iVar0, iParam1, 1);
	}
}

void func_527(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_28(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_28(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_28(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_28(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_28(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_28(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_28(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_28(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_28(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_28(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_28(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_28(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_28(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_28(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_28(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_28(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_28(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_28(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_28(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_28(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_28(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_28(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_28(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_28(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_28(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_28(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_28(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_28(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_28(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_28(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_28(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_28(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_28(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_28(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_28(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_28(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_28(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_28(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_28(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_28(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_28(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_28(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_28(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_28(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_28(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_28(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_28(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_28(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_28(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_28(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_28(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_28(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_528(int iParam0)
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_546();
	if (Global_2726597 == 0)
	{
		return 0;
	}
	if (func_545())
	{
		if (network_is_activity_session() || (func_544() || func_540()))
		{
			Global_2725407 = 1;
		}
	}
	Global_2726597 = 0;
	if (Global_1577884)
	{
		iVar0 = 1;
	}
	if (Global_2725407)
	{
		iVar0 = 1;
	}
	if (Global_2725406)
	{
		iVar0 = 1;
	}
	if (func_539(Global_112414.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2725346)
	{
		iVar0 = 1;
	}
	if (func_538(512))
	{
		iVar0 = 1;
	}
	if (func_537(128))
	{
		iVar0 = 1;
	}
	if (Global_1577908 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_404(0))
	{
		iVar0 = 0;
	}
	if (Global_2725901)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_535())
		{
			if (Global_4718592.f_117079 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_258(player_id(), 0))
	{
		iVar0 = 0;
	}
	if (func_534())
	{
		iVar0 = 0;
	}
	if ((Global_2725407 || Global_2725406) || Global_1577884)
	{
		if (func_540())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837301)
	{
		iVar0 = 2;
	}
	Global_2725901 = 0;
	Global_2725406 = 0;
	Global_2725407 = 0;
	Global_1577884 = 0;
	Global_2725346 = 0;
	func_532(&(Global_112414.f_1), 32);
	func_531(512);
	func_530(128);
	Global_1837301 = 0;
	return iVar0;
}

void func_530(int iParam0)
{
	Global_112471 = (Global_112471 - (Global_112471 && iParam0));
}

void func_531(int iParam0)
{
	Global_112472 = (Global_112472 - (Global_112472 && iParam0));
}

void func_532(var uParam0, int iParam1)
{
	func_533(uParam0, iParam1);
}

void func_533(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_534()
{
	if (((Global_1836602 || Global_1836572) || func_258(player_id(), 0)) || func_257())
	{
		return 1;
	}
	return 0;
}

int func_535()
{
	switch (func_536())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_536()
{
	return Global_2715699.f_1.f_2822;
}

bool func_537(int iParam0)
{
	return (Global_112471 && iParam0) != 0;
}

bool func_538(int iParam0)
{
	return (Global_112472 && iParam0) != 0;
}

bool func_539(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_540()
{
	if (func_543(Global_2727723))
	{
		return 0;
	}
	if (func_541(player_id(), 146))
	{
		return 1;
	}
	return 0;
}

int func_541(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
	{
		return func_542(iParam0);
	}
	return 0;
}

int func_542(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11861)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11863)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11860)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11864)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11865)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11866)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11862)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11867)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11868)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11869)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11870)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

int func_544()
{
	if (func_543(Global_2727723))
	{
		return 0;
	}
	if (func_542(player_id()))
	{
		return 1;
	}
	return 0;
}

bool func_545()
{
	return BitTest(Global_1574589, 0);
}

int func_546()
{
	if (Global_1577908 == 1 && (func_612() || func_547()))
	{
		return 1;
	}
	return 0;
}

int func_547()
{
	if (((func_337() || func_551()) || func_550()) || func_548(Global_4718592.f_116524))
	{
		return 1;
	}
	return 0;
}

int func_548(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_549(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_549(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32760[iParam0];
	}
	return -1;
}

int func_550()
{
	return func_614(Global_4718592.f_116524);
}

int func_551()
{
	return func_615(Global_4718592.f_116524);
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_553()
{
	if (decor_exist_on(get_player_ped_script_index(player_id()), "MissionType"))
	{
		decor_remove(get_player_ped_script_index(player_id()), "MissionType");
	}
	if (decor_exist_on(get_player_ped_script_index(player_id()), "MatchId"))
	{
		decor_remove(get_player_ped_script_index(player_id()), "MatchId");
	}
	if (decor_exist_on(get_player_ped_script_index(player_id()), "TeamId"))
	{
		decor_remove(get_player_ped_script_index(player_id()), "TeamId");
	}
}

void func_554()
{
	Global_2714762.f_697 = 0;
	network_clear_transition_creator_handle();
}

void func_555(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_833, 2))
		{
			set_bit(&(Global_1853348[player_id() /*834*/].f_833), 2);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_833, 2))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_833), 2);
	}
}

int func_556(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_557()
{
	Global_2714762.f_841 = 0;
}

bool func_558()
{
	return Global_2714762.f_841;
}

void func_559()
{
	Global_2714762.f_845 = 0;
}

bool func_560()
{
	return Global_2714762.f_845;
}

void func_561()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_96.f_32), true);
}

int func_562(int iParam0)
{
	char* sVar0;
	
	if (func_257())
	{
		return 1;
	}
	if (func_567())
	{
		return 1;
	}
	if (is_string_null_or_empty(&(Global_4718592.f_116811)))
	{
		return 1;
	}
	if (func_566())
	{
		return 1;
	}
	func_565();
	datafile_create(0);
	sVar0 = datafile_get_file_dict(0);
	if (iParam0 == 0)
	{
		Global_1922915++;
		datadict_set_int(sVar0, "quit", Global_1922915);
		datadict_set_int(sVar0, "quitd", 1);
		datadict_set_int(sVar0, "ply", Global_1922915.f_2);
		datadict_set_int(sVar0, "lp", get_cloud_time_as_int());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1922940.f_1++;
		datadict_set_int(sVar0, "quit", Global_1922940.f_1);
		datadict_set_int(sVar0, "quitd", 1);
		datadict_set_int(sVar0, "ply", Global_1922940.f_4);
		datadict_set_int(sVar0, "lp", get_cloud_time_as_int());
	}
	if (iParam0 == 0)
	{
		if (ugc_set_player_data(&(Global_4718592.f_116811), 0f, func_564(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (ugc_set_player_data(&(Global_1048576.f_44), 0f, func_564(iParam0), 0))
		{
		}
	}
	func_563();
	func_565();
	ugc_clear_modify_result();
	return 1;
}

void func_563()
{
	Global_1922915 = 0;
	Global_1922915.f_2 = 0;
	Global_1922915.f_8 = 0;
	Global_1922915.f_3 = 0;
	Global_1922915.f_6 = 0;
}

char* func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_565()
{
	if (datafile_get_file_dict(0) != 0)
	{
		datafile_delete(0);
	}
}

int func_566()
{
	if (ugc_is_creating())
	{
		return 1;
	}
	else if (ugc_is_getting())
	{
		return 1;
	}
	else if (ugc_is_modifying())
	{
		return 1;
	}
	return 0;
}

int func_567()
{
	if (!func_568())
	{
		return 1;
	}
	return 0;
}

int func_568()
{
	if (func_569())
	{
		return 0;
	}
	if (network_is_cloud_available() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_569()
{
	return Global_2725911;
}

bool func_570()
{
	return Global_2714762.f_734;
}

void func_571(bool bParam0)
{
	if (bParam0)
	{
		Global_1574615 = 1;
	}
	else
	{
		Global_1574615 = 0;
	}
}

void func_572()
{
	Global_2715699.f_1.f_2828.f_13 = 0;
	Global_2715699.f_1.f_2828 = 0;
	Global_2715699.f_1.f_2828.f_1 = 0;
	Global_2715699.f_1.f_2828.f_2 = 0;
	Global_2715699.f_1.f_2828.f_3 = 0;
	Global_2715699.f_1.f_2828.f_4 = 0;
	Global_2715699.f_1.f_2828.f_5 = 0;
	Global_2715699.f_1.f_2828.f_6 = 0;
	Global_2715699.f_1.f_2828.f_7 = 0;
	Global_2715699.f_1.f_2828.f_8 = 0;
	Global_2715699.f_1.f_2828.f_9 = 0;
	Global_2715699.f_1.f_2828.f_10 = 0;
	Global_2715699.f_1.f_2828.f_11 = 0;
	Global_2715699.f_1.f_2828.f_12 = 0;
}

bool func_573(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 1;
}

void func_574()
{
	Global_2714762.f_716 = 1;
}

void func_575(int iParam0, struct<3> Param1, struct<6> Param2)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_595();
	func_594();
	func_593();
	func_592();
	func_591();
	func_723();
	Global_1922955.f_9 = iParam0;
	switch (Global_1922955.f_9)
	{
		case 1:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			clear_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			func_588();
			break;
		
		case 2:
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { Param2 };
			clear_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			break;
		
		case 3:
			if (Global_1853348[player_id() /*834*/] == 0 || Global_1853348[player_id() /*834*/] == 1)
			{
				func_587(Global_1853348[player_id() /*834*/].f_96.f_28);
			}
			func_586();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			if (func_585())
			{
				Global_1922955.f_17 = { Param2 };
			}
			clear_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			break;
		
		case 4:
			func_584();
			func_586();
			Global_1922955 = 1;
			if (func_718(player_id()) || func_719(player_id()))
			{
				func_583(1);
			}
			if ((func_582() || func_623()) && func_603())
			{
				Global_1922955.f_17 = { func_602() };
				Param2 = { Global_1922955.f_17 };
				Global_1922955.f_23 = { func_581() };
			}
			else if (func_582() || func_623())
			{
				if (func_580())
				{
					Global_1922955.f_23 = { func_579() };
				}
				else
				{
					Global_1922955.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1922955.f_23 = { Param1 };
			}
			set_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			break;
		
		case 5:
			func_584();
			func_578();
			func_586();
			if (func_718(player_id()) || func_719(player_id()))
			{
				func_583(1);
			}
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			set_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			break;
		
		case 8:
			Global_1922955 = 0;
			Global_1922955.f_23 = { Param1 };
			Global_1922955.f_17 = { Param2 };
			clear_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			break;
		
		case 9:
			func_586();
			Global_1922955 = 1;
			Global_1922955.f_23 = { Param1 };
			set_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			break;
		
		case 10:
			Global_1922955 = 0;
			Global_1922955.f_23 = { 0f, 0f, 0f };
			clear_bit(&(Global_1853348[player_id() /*834*/].f_833), true);
			break;
	}
	func_577();
	func_576();
	func_490(Global_1922955.f_9);
	Global_2689235[player_id() /*453*/].f_221 = { Global_1922955.f_23 };
	Global_2689235[player_id() /*453*/].f_224 = { Param2 };
}

void func_576()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_36.f_18), 23);
}

void func_577()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_36.f_18), 12);
}

void func_578()
{
	Global_1922955.f_4 = 1;
}

Vector3 func_579()
{
	return Global_2714762.f_43.f_575;
}

int func_580()
{
	if ((Global_2714762.f_43.f_575 != 0f || Global_2714762.f_43.f_575.f_1 != 0f) || Global_2714762.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_581()
{
	return Global_2714762.f_43.f_578;
}

var func_582()
{
	return Global_2714762.f_43.f_57;
}

void func_583(int iParam0)
{
	Global_2715699.f_6321 = iParam0;
}

void func_584()
{
	Global_1922955.f_3 = 1;
}

bool func_585()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 24);
}

void func_586()
{
	Global_1922955.f_7 = 1;
}

void func_587(var uParam0)
{
	Global_1922955.f_10 = uParam0;
}

int func_588()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!network_is_handle_valid(&(Global_2715699.f_6603), 13))
	{
		return 0;
	}
	iVar2 = player_id();
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar0 = int_to_playerindex(bVar1);
		if (network_is_player_active(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_78(iVar0) };
			if (network_are_handles_the_same(&Var3, &(Global_2715699.f_6603)) && func_590(iVar0))
			{
				func_589();
				return 1;
			}
		}
		bVar1++;
	}
	return 0;
}

void func_589()
{
	set_bit(&(Global_1853348[player_id() /*834*/].f_36.f_18), 9);
}

var func_590(int iParam0)
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 9);
}

void func_591()
{
	Global_1853348[player_id() /*834*/].f_5 = 0;
}

void func_592()
{
	Global_1922955.f_10 = -1;
}

void func_593()
{
	Global_1922955.f_4 = 0;
}

void func_594()
{
	Global_1922955.f_3 = 0;
}

void func_595()
{
	Global_2715699.f_2846.f_2 = 1;
}

void func_596()
{
	Global_2714762.f_669.f_14 = 0;
}

bool func_597()
{
	return Global_2714762.f_669.f_14;
}

void func_598()
{
	Global_2714762.f_43.f_55 = 0;
}

void func_599()
{
	Global_2714762.f_43.f_43 = -1;
}

int func_600()
{
	return Global_2714762.f_43.f_43;
}

void func_601(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (is_string_null_or_empty(&uParam0))
	{
		return;
	}
	if (!Global_2661017)
	{
		return;
	}
	if (!are_strings_equal(&uParam0, &(Global_2661017.f_1)))
	{
		return;
	}
	Global_2661083 = 1;
}

struct<6> func_602()
{
	return Global_2714762.f_43.f_12;
}

bool func_603()
{
	return Global_2714762.f_43.f_59;
}

void func_604(int iParam0, bool bParam1)
{
	if (func_712())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (network_is_clock_time_overridden())
				{
					network_clear_clock_time_override();
				}
			}
			break;
		
		case 1:
			network_override_clock_time(6, 0, 0);
			break;
		
		case 2:
			network_override_clock_time(12, 0, 0);
			break;
		
		case 3:
			if (func_605(Global_4718592.f_168757))
			{
				network_override_clock_time(20, 50, 0);
			}
			else
			{
				network_override_clock_time(21, 0, 0);
			}
			break;
		
		case 4:
			network_override_clock_time(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_605(int iParam0)
{
	return iParam0 == 10;
}

int func_606()
{
	return Global_1922955.f_12;
}

void func_607(var uParam0, var uParam1)
{
	Global_1922955.f_14 = uParam0;
	Global_1922955.f_15 = uParam1;
}

void func_608(var uParam0)
{
	Global_1922955.f_12 = uParam0;
}

int func_609()
{
	return Global_1922955.f_13;
}

int func_610(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5058[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_611(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2715699.f_1.f_2813[iVar0], iVar1);
}

int func_612()
{
	return func_613(Global_4718592.f_116524);
}

int func_613(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31710[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_614(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31703[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_615(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_616()
{
	if (network_is_activity_session())
	{
		return func_619();
	}
	return func_617(Global_4718592.f_116524);
}

int func_617(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6086[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_618()
{
	return Global_2714762.f_19;
}

bool func_619()
{
	return Global_2714762.f_21;
}

var func_620()
{
	return BitTest(Global_1574942, 4);
}

bool func_621()
{
	return Global_2714762.f_17;
}

void func_622()
{
	Global_2714762.f_43.f_56 = 1;
}

bool func_623()
{
	return Global_2714762.f_43.f_55;
}

void func_624()
{
	if (is_string_null_or_empty(&(Global_2653202.f_4.f_3)))
	{
		return;
	}
	if (!is_string_null_or_empty(&(Global_2660315.f_3)))
	{
		if (are_strings_equal(&(Global_2660315.f_3), &(Global_2653202.f_4.f_3)))
		{
			Global_1573982 = 0;
		}
		else
		{
			Global_1573982 = 1;
		}
	}
	Global_1573983 = 0;
	Global_1573983.f_1 = { Global_2653202.f_4.f_3 };
}

void func_625()
{
	Global_1922955.f_5 = 0;
	Global_1922955.f_11 = -1;
}

void func_626(var uParam0)
{
	Global_1922955.f_5 = 1;
	Global_1922955.f_11 = uParam0;
}

int func_627(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_168757 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9641[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_628(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_168757 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9477[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_629()
{
	if (BitTest(Global_4718592.f_18, 0))
	{
		return 1;
	}
	return ((((((func_636(Global_4718592.f_116524, 1) || func_635(Global_4718592.f_116524)) || func_634(Global_4718592.f_116524)) || func_633(Global_4718592.f_116524)) || func_632(Global_4718592.f_168757)) || func_631(Global_4718592.f_168757)) || func_630(Global_4718592.f_168757));
}

bool func_630(int iParam0)
{
	return iParam0 == 65;
}

bool func_631(int iParam0)
{
	return iParam0 == 48;
}

bool func_632(int iParam0)
{
	return iParam0 == 8;
}

int func_633(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_168757 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9720[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_634(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_168757 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9663[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_635(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_168757 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9544[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_636(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_168757 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9485[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_637()
{
	struct<13> Var0;
	
	network_get_local_handle(&Var0, 13);
	return Var0;
}

void func_638(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	if (is_string_null_or_empty(&uParam0))
	{
		return;
	}
	if (!Global_2653189)
	{
		return;
	}
	iVar0 = get_hash_key(&uParam0);
	Global_2653191 = iVar0;
	Global_2653192 = (get_game_timer() + 60000);
}

void func_639(struct<6> Param0)
{
	if (is_string_null_or_empty(&Param0))
	{
		return;
	}
	Global_1573983 = 1;
	Global_1573983.f_1 = { Param0 };
}

bool func_640()
{
	return Global_2714762.f_14;
}

void func_641(float fParam0)
{
	if (network_is_game_in_progress())
	{
		network_set_talker_proximity(fParam0);
		network_set_team_only_chat(false);
	}
}

void func_642(int iParam0)
{
	if (Global_2787914 != iParam0)
	{
		Global_2787914 = iParam0;
	}
}

void func_643()
{
	Global_1057409 = -1;
}

void func_644()
{
	func_645(-1f);
}

void func_645(float fParam0)
{
	if (network_is_game_in_progress())
	{
		network_override_send_restrictions_all(false);
		network_override_receive_restrictions_all(false);
		network_set_talker_proximity(fParam0);
		network_set_team_only_chat(false);
	}
}

int func_646(int iParam0)
{
	int iVar0;
	
	if (Global_1941273[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_648(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_647(iParam0, 0);
			iVar0 = 0;
		}
		Global_1941273[iParam0 /*8*/] = iVar0;
	}
	return Global_1941273[iParam0 /*8*/];
}

void func_647(int iParam0, int iParam1)
{
	Global_1941273[iParam0 /*8*/] = iParam1;
	func_64(func_648(iParam0), iParam1, -1, 1, 0);
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11353;
		
		default:
	}
	return 11353;
}

bool func_649()
{
	return Global_4718592.f_1 == 0;
}

void func_650(bool bParam0, bool bParam1)
{
	network_block_invites(bParam0);
	network_set_presence_session_invites_blocked(bParam0);
	if (network_is_host())
	{
		network_session_block_join_requests(bParam1);
	}
}

bool func_651()
{
	return Global_2714762.f_743;
}

void func_652()
{
	if (BitTest(Global_2621446, 24))
	{
		clear_bit(&Global_2621446, 24);
	}
}

void func_653()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_36.f_18), 14);
}

var func_654()
{
	return Global_2787914;
}

bool func_655()
{
	return Global_2714762.f_832;
}

int func_656()
{
	return Global_1853348[player_id() /*834*/].f_192;
}

void func_657(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836363 == 0)
		{
			Global_1836363 = 1;
		}
	}
	else if (Global_1836363 == 1)
	{
		Global_1836363 = 0;
	}
}

void func_658()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2715699.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2715699.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_659()
{
	char* sVar0;
	
	if (func_257())
	{
		return 1;
	}
	if (func_567())
	{
		return 1;
	}
	if (func_566())
	{
		return 1;
	}
	if (is_string_null_or_empty(&(Global_4718592.f_116811)))
	{
		return 1;
	}
	func_565();
	datafile_create(0);
	sVar0 = datafile_get_file_dict(0);
	Global_1922915.f_2++;
	if (Global_1922915.f_2 < 1)
	{
		Global_1922915.f_2 = 1;
	}
	datadict_set_int(sVar0, "quit", Global_1922915);
	datadict_set_int(sVar0, "ply", Global_1922915.f_2);
	datadict_set_int(sVar0, "plyd", 1);
	datadict_set_int(sVar0, "lp", get_cloud_time_as_int());
	if (ugc_set_player_data(&(Global_4718592.f_116811), -1f, func_564(0), 0))
	{
	}
	func_563();
	func_565();
	ugc_clear_modify_result();
	return 1;
}

void func_660()
{
	Global_2714762.f_844 = 1;
}

void func_661(bool bParam0)
{
	if (bParam0)
	{
		thefeed_comment_teleport_pool_on();
	}
	else
	{
		thefeed_comment_teleport_pool_off();
	}
}

void func_662()
{
	Global_2714762.f_843 = 1;
}

int func_663(int iParam0)
{
	switch (func_19())
	{
		case 0:
			if (!func_664(iParam0))
			{
				if (Global_1853348[iParam0 /*834*/] == 2 || Global_1853348[iParam0 /*834*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_664(int iParam0)
{
	return Global_1853348[iParam0 /*834*/].f_192 != 0;
}

bool func_665()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_139, 2);
}

void func_666()
{
	Global_2714762.f_843 = 0;
}

bool func_667()
{
	return Global_2714762.f_843;
}

void func_668(bool bParam0)
{
	set_static_emitter_enabled("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", bParam0);
	set_static_emitter_enabled("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", bParam0);
	set_static_emitter_enabled("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", bParam0);
}

void func_669()
{
	Global_1922955.f_12 = -1;
	Global_1922955.f_14 = -1;
	Global_1922955.f_15 = -1;
}

void func_670(int iParam0)
{
	Global_1057410 = iParam0;
}

void func_671()
{
	Global_1888187 = 0;
	Global_1836569 = 4;
}

void func_672(bool bParam0)
{
	if (bParam0)
	{
		Global_1836582 = 1;
	}
	else
	{
		Global_1836582 = 0;
	}
}

void func_673()
{
	Global_1888188 = -1;
	Global_1888194 = 0;
	Global_1888189 = -1;
}

void func_674()
{
	Global_2815059.f_287 = 0;
	func_678(3782, 0, -1);
	if (!is_ped_injured(player_ped_id()))
	{
		if (func_676())
		{
			set_ped_component_variation(player_ped_id(), 5, 0, 0, 0);
			func_675();
		}
	}
}

void func_675()
{
	Global_78291 = 0;
	Global_78292 = -1;
	Global_78293 = -1;
	Global_78294 = -1;
	Global_78295 = -1;
	Global_78299 = -1;
}

bool func_676()
{
	return func_677(player_ped_id());
}

int func_677(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_ped_drawable_variation(iParam0, 5);
	iVar1 = -1;
	switch (get_entity_model(iParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = get_hash_name_for_component(iParam0, 5, iVar0, get_ped_texture_variation(iParam0, 5));
			if (does_shop_ped_apparel_have_restriction_tag(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = get_hash_name_for_component(iParam0, 5, iVar0, get_ped_texture_variation(iParam0, 5));
			if (does_shop_ped_apparel_have_restriction_tag(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_678(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	_set_packed_stat_bool(iParam0, bParam1, iParam2);
}

void func_679()
{
	Global_2714762.f_844 = 0;
}

bool func_680()
{
	return Global_2714762.f_844;
}

void func_681(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_683(&iVar0, 0, iParam1))
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
		func_682(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_682(int* iParam0)
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

int func_683(var uParam0, bool bParam1, int iParam2)
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

void func_684()
{
}

void func_685(int iParam0)
{
	struct<42> Var0;
	int iVar1;
	var uVar2;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2714762.f_669.f_9 == 0)
	{
		Global_1922981.f_1345 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uVar2 = Global_1922981[iVar1 /*42*/].f_3;
		Global_1922981[iVar1 /*42*/] = { Var0 };
		if (func_738())
		{
			Global_1922981[iVar1 /*42*/].f_3 = uVar2;
		}
		Global_1922981[iVar1 /*42*/].f_1 = func_141();
		Global_1922981[iVar1 /*42*/] = -1;
		Global_1922981[iVar1 /*42*/].f_2 = -1;
		iVar1++;
	}
	if ((!func_738() && !func_698()) && iParam0)
	{
		Global_1922981.f_1347 = 0;
		Global_1922981.f_1348 = 0;
	}
}

int func_686()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1922981[iVar0 /*42*/].f_1 != func_141())
		{
			if (Global_1922981[iVar0 /*42*/].f_11 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_687()
{
	if (network_is_activity_session())
	{
		return func_618();
	}
	return func_688(Global_4718592.f_116524);
}

int func_688(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_689(bool bParam0)
{
	struct<77> Var0;
	
	if (!bParam0)
	{
		Var0.f_37 = Global_1944587.f_37;
		Var0.f_33 = Global_1944587.f_33;
		Var0.f_30 = Global_1944587.f_30;
		Var0.f_39 = Global_1944587.f_39;
		Var0.f_20 = Global_1944587.f_20;
		Var0.f_15 = Global_1944587.f_15;
		Var0.f_35 = Global_1944587.f_35;
		Var0.f_36 = Global_1944587.f_36;
		Var0.f_31 = Global_1944587.f_31;
		Var0.f_34 = Global_1944587.f_34;
		Var0.f_27 = Global_1944587.f_27;
		Var0.f_28 = Global_1944587.f_28;
		Var0.f_32 = Global_1944587.f_32;
		Var0.f_29 = Global_1944587.f_29;
	}
	Global_1944587 = { Var0 };
}

void func_690(bool bParam0)
{
	struct<51> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1944501.f_2 };
		Var0.f_14 = Global_1944501.f_14;
		Var0.f_19 = Global_1944501.f_19;
		Var0.f_23 = Global_1944501.f_23;
		Var0.f_25 = Global_1944501.f_25;
		Var0.f_30 = Global_1944501.f_30;
		Var0.f_26 = Global_1944501.f_26;
		Var0.f_27 = Global_1944501.f_27;
		Var0.f_28 = Global_1944501.f_28;
		Var0.f_29 = Global_1944501.f_29;
		Var0.f_31 = Global_1944501.f_31;
		Var0.f_32 = Global_1944501.f_32;
		Var0.f_33 = Global_1944501.f_33;
		Var0.f_40 = Global_1944501.f_40;
		Var0.f_42 = Global_1944501.f_42;
		Var0.f_50 = Global_1944501.f_50;
		Var0.f_46 = Global_1944501.f_46;
	}
	Global_1944501 = { Var0 };
}

void func_691(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_694() && !func_623()) && Global_1922955.f_9 != 4) && !func_698())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_694() && !func_623()) && Global_1922955.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_692(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_693(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (decor_exist_on(get_player_ped_script_index(iParam0), "MPBitset"))
	{
		iVar0 = decor_get_int(get_player_ped_script_index(iParam0), "MPBitset");
	}
	clear_bit(&iVar0, bParam1);
	decor_set_int(get_player_ped_script_index(iParam0), "MPBitset", iVar0);
}

bool func_694()
{
	return Global_1922955.f_3;
}

bool func_695()
{
	return Global_2723612.f_7;
}

bool func_696()
{
	return BitTest(Global_2714762.f_43.f_4, 8);
}

void func_697()
{
	Global_2714762.f_43.f_57 = 0;
}

bool func_698()
{
	return BitTest(Global_2714762.f_43.f_4, 0);
}

void func_699()
{
	clear_bit(&(Global_1048576.f_10), 8);
}

void func_700(bool bParam0)
{
	if (bParam0)
	{
		set_bit(&(Global_1853348[player_id() /*834*/].f_11.f_1), false);
	}
	else
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_11.f_1), false);
	}
}

void func_701(int iParam0)
{
	if ((network_is_game_in_progress() && !Global_1575033) && !Global_1575034)
	{
		if (((Global_2715699.f_3475 != 0 && Global_2715699.f_3475.f_1 != 0) && Global_2715699.f_3475.f_2 != 0) && Global_2715699.f_3475.f_3 != 0)
		{
			playstats_leave_job_chain(Global_2715699.f_3475, Global_2715699.f_3475.f_1, Global_2715699.f_3475.f_2, Global_2715699.f_3475.f_3, iParam0);
		}
	}
	func_702();
}

void func_702()
{
	Global_2715699.f_3475 = 0;
	Global_2715699.f_3475.f_1 = 0;
	Global_2715699.f_3475.f_2 = 0;
	Global_2715699.f_3475.f_3 = 0;
}

void func_703()
{
	Global_2715699.f_1.f_2801 = 1;
}

bool func_704()
{
	return BitTest(Global_2715699.f_1.f_2809, 12);
}

void func_705(int iParam0)
{
	if (!func_698() || iParam0)
	{
		Global_1837289 = 0;
		Global_1837288 = 0;
	}
}

void func_706(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar1;
	
	Global_2714762.f_43 = -1;
	Global_2714762.f_43.f_139 = -1;
	Global_2714762.f_43.f_2 = -1;
	Global_2714762.f_43.f_5 = 0;
	Global_2714762.f_43.f_40 = 0;
	Global_2714762.f_43.f_3 = 0;
	Global_2714762.f_43.f_4 = 0;
	Global_2714762.f_43.f_42 = -1;
	Global_2714762.f_43.f_6 = { Var0 };
	Global_2714762.f_43.f_62 = 0;
	Global_2714762.f_43.f_137 = 0;
	Global_2714762.f_43.f_213 = 0;
	Global_2714762.f_43.f_428 = 0;
	Global_2714762.f_43.f_63 = 0;
	Global_2714762.f_43.f_138 = 0;
	Global_2714762.f_43.f_214 = 0;
	Global_2714762.f_43.f_429 = 0;
	Global_2714762.f_43.f_617 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2714762.f_43.f_560[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_136 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2714762.f_43.f_140[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_212 = 0;
	iVar1 = 0;
	while (iVar1 <= 29)
	{
		Global_2714762.f_43.f_215[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_61 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2714762.f_43.f_64[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_427 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2714762.f_43.f_430[iVar1] = 0;
		Global_2714762.f_43.f_445[iVar1] = 0;
		Global_2714762.f_43.f_475[iVar1 /*6*/] = { Var0 };
		Global_2714762.f_43.f_460[iVar1] = 0;
		iVar1++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_2714762.f_43.f_44[iVar1] = 0;
			iVar1++;
		}
		if (bParam1)
		{
			Global_2714762.f_43.f_581 = 0;
			Global_2714762.f_43.f_582 = 0;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				Global_2714762.f_43.f_589[iVar1] = -1;
				Global_2714762.f_43.f_595[iVar1] = -1;
				iVar1++;
			}
			Global_2714762.f_43.f_55 = 0;
			Global_2714762.f_43.f_12 = { Var0 };
			Global_2714762.f_43.f_59 = 0;
			Global_2714762.f_43.f_575 = { 0f, 0f, 0f };
			Global_2714762.f_43.f_578 = { 0f, 0f, 0f };
			Global_2714762.f_43.f_58 = 0;
			Global_2714762.f_43.f_57 = 0;
			Global_2714762.f_43.f_1 = -1;
			Global_2714762.f_43.f_601 = -1;
		}
	}
}

void func_707()
{
	Global_2723612.f_8 = 0;
	Global_2723612.f_7 = 0;
}

void func_708()
{
	int iVar0;
	int iVar1;
	
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar0 = network_get_num_connected_players();
	iVar1 = absi(get_time_difference(Global_1057161, get_network_time()));
	_playstats_quit_mode(Global_4718592, &(Global_4718592.f_116811), iVar0, iVar1, Global_1057161.f_1);
	func_709();
}

void func_709()
{
	Global_1057161 = 0;
	Global_1057161.f_1 = 0;
}

bool func_710()
{
	return Global_1853348[player_id() /*834*/] == 148;
}

bool func_711()
{
	return Global_1853348[player_id() /*834*/] == 5;
}

int func_712()
{
	if (func_349() && network_is_activity_session())
	{
		return 1;
	}
	return 0;
}

void func_713()
{
	Global_1931975.f_1774 = 0;
}

void func_714()
{
	Global_2714762.f_837 = 0;
}

bool func_715()
{
	return Global_2714762.f_837;
}

void func_716()
{
	Global_20471 = 0;
	func_717();
}

void func_717()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
}

bool func_718(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

bool func_719(int iParam0)
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

int func_720(int iParam0)
{
	if (iParam0 == Global_262145.f_5041[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5041[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5041[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5041[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5041[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5041[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5041[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5041[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5041[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5041[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5041[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5041[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5041[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5041[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5041[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5041[15])
	{
		return 15;
	}
	return -1;
}

void func_721()
{
	Global_2714762.f_700 = 0;
}

void func_722()
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_4 = -1;
	iVar1 = player_id();
	if (iVar1 != -1)
	{
		Global_1888862[iVar1 /*120*/] = { Var0 };
	}
}

void func_723()
{
	Global_1922955.f_7 = 0;
}

void func_724(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2714762.f_669.f_3 = { Var0 };
	Global_2714762.f_669 = 0;
	Global_2714762.f_669.f_1 = 0;
	Global_2714762.f_669.f_12 = 0;
	if (bParam0)
	{
		Global_2714762.f_669.f_2 = 0;
		Global_2714762.f_669.f_13 = 0;
		Global_2714762.f_669.f_14 = 0;
		Global_2656981 = 0;
		if (bParam1)
		{
			Global_2714762.f_669.f_9 = 0;
			Global_2714762.f_669.f_10 = 0;
			Global_2714762.f_669.f_11 = 0;
			Global_2714762.f_669.f_16 = -1;
		}
		if (iParam2 && !network_is_activity_session())
		{
			Global_1922981.f_1347 = 0;
			Global_1922981.f_1348 = 0;
		}
		if (player_id() != -1)
		{
			Global_1888862[player_id() /*120*/].f_2 = 0;
			Global_1888862[player_id() /*120*/] = 0;
		}
	}
}

void func_725()
{
	Global_2714762.f_669.f_12 = 0;
}

bool func_726()
{
	return Global_2714762.f_669.f_9 > 0;
}

var func_727()
{
	return Global_2714762.f_669.f_12;
}

void func_728()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_96.f_32), 11);
}

void func_729()
{
	clear_bit(&(Global_1888862[player_id() /*120*/].f_29), 3);
}

void func_730()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1837303[iVar0] = 0;
		iVar0++;
	}
}

void func_731()
{
	int iVar0;
	
	iVar0 = player_id();
	if (iVar0 != -1)
	{
		Global_1888862[iVar0 /*120*/].f_5 = 0;
	}
}

void func_732()
{
	Global_2725873 = 0;
	Global_2725874 = 0;
	Global_2725875 = 0;
	Global_2725876 = 0;
}

void func_733()
{
	Global_2714762.f_43.f_56 = 0;
}

void func_734()
{
	Global_2714762.f_43.f_58 = 0;
}

void func_735()
{
	if (get_cam_view_mode_for_context(_get_cam_active_view_mode_context()) != Global_1659868)
	{
		if (_get_cam_active_view_mode_context() == 0 && Global_1659868 == 3)
		{
			Global_1659868 = get_cam_view_mode_for_context(0);
		}
		set_cam_view_mode_for_context(_get_cam_active_view_mode_context(), Global_1659868);
	}
}

int func_736()
{
	if (func_737() != 2)
	{
		return 0;
	}
	if (!func_698() && !((Global_1939844 || Global_1574964) && func_582()))
	{
		return 0;
	}
	return 1;
}

int func_737()
{
	return Global_2714762.f_43.f_40;
}

bool func_738()
{
	return BitTest(Global_2714762.f_669.f_1, 0);
}

void func_739(int iParam0)
{
	if (is_pc_version())
	{
		_0x7C226D5346D4D10A(iParam0);
	}
}

void func_740(bool bParam0)
{
	int iVar0;
	
	iVar0 = network_player_id_to_int();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!BitTest(Global_1853348[iVar0 /*834*/].f_199, 0))
			{
				set_bit(&(Global_1853348[iVar0 /*834*/].f_199), false);
			}
		}
		else if (BitTest(Global_1853348[iVar0 /*834*/].f_199, 0))
		{
			clear_bit(&(Global_1853348[iVar0 /*834*/].f_199), false);
		}
	}
}

void func_741()
{
	clear_bit(&(Global_2714762.f_2), 31);
}

void func_742()
{
	Global_2703735.f_1571.f_816 = func_141();
}

void func_743()
{
	Global_2714762.f_885 = 0;
}

void func_744()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_747(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1940311.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_746();
	func_745();
	Global_1940311 = 0;
}

void func_745()
{
	Global_1940311.f_4 = 0;
}

void func_746()
{
	Global_1940311.f_3 = 0;
}

void func_747(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1940311.f_5[iParam0 /*53*/] = { Var0 };
}

void func_748()
{
	clear_bit(&(Global_1853348[player_id() /*834*/].f_36.f_18), 20);
}

void func_749(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_65(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_63(iParam0, 18, 1);
	}
}

void func_750()
{
	clear_bit(&(Global_2815059.f_836), 3);
}

void func_751(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_227();
	if (bParam0)
	{
		func_317(1);
		clear_help(true);
	}
	clear_prints();
	func_220();
	set_particle_fx_cam_inside_vehicle(false);
	func_256(0, 1, 1, 0, 0, bParam2, 0);
	func_757();
	func_208(12, 0, -1);
	func_209(1);
	set_widescreen_borders(false, -1);
	display_radar(true);
	display_hud(true);
	func_756();
	set_user_radio_control_enabled(true);
	if (network_is_game_in_progress())
	{
		if (bParam3)
		{
			if (network_is_in_mp_cutscene())
			{
				network_set_in_mp_cutscene(false, false);
			}
		}
	}
	func_263(0);
	if (((((func_125() == 0 && func_755() == 0) && iParam1) && !func_260(player_id())) && !is_new_load_scene_active()) && func_339())
	{
		func_371(player_id(), 1, 0, 0);
	}
	Global_2703735.f_3428 = 0;
	func_752();
}

void func_752()
{
	bool bVar0;
	bool bVar1;
	
	if (network_is_game_in_progress() && func_200(&Global_2824370))
	{
		if (!func_199(&Global_2824370, 3500, 1) || network_is_player_fading(player_id()))
		{
			if (!func_754())
			{
				if (is_screen_faded_out())
				{
					func_352(&Global_2824370, 1, 0);
				}
				else if (!func_258(player_id(), 0))
				{
					if (get_script_task_status(player_ped_id(), 1992968846) != 1 && get_script_task_status(player_ped_id(), 1992968846) != 0)
					{
						set_local_player_visible_locally(true);
						set_player_visible_locally(player_id(), true);
					}
					set_entity_alpha(player_ped_id(), 255, false);
				}
			}
			else
			{
				func_352(&Global_2824370, 1, 0);
			}
		}
		else
		{
			if (network_is_game_in_progress())
			{
				reset_entity_alpha(player_ped_id());
			}
			func_198(&Global_2824370);
		}
	}
	if (Global_2824374 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2824374, bVar0))
			{
				bVar1 = int_to_playerindex(bVar0);
				if (func_14(bVar1, 1, 1))
				{
					func_753(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_753(bool bParam0)
{
	if (BitTest(Global_2824374, bParam0) && network_is_game_in_progress())
	{
		if (!func_199(&(Global_2824375[bParam0 /*2*/]), 3500, 1) || network_is_player_fading(bParam0))
		{
			if (!func_754())
			{
				if (is_screen_faded_out())
				{
					func_352(&(Global_2824375[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_258(bParam0, 0))
				{
					set_player_visible_locally(bParam0, true);
					if (!is_entity_dead(get_player_ped(bParam0), false))
					{
						set_entity_alpha(get_player_ped(bParam0), 255, false);
					}
				}
			}
			else
			{
				func_352(&(Global_2824375[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!is_entity_dead(get_player_ped(bParam0), false))
			{
				reset_entity_alpha(get_player_ped(bParam0));
			}
			func_198(&(Global_2824375[bParam0 /*2*/]));
			clear_bit(&Global_2824374, bParam0);
		}
	}
}

int func_754()
{
	if (is_cutscene_playing() || network_is_in_mp_cutscene())
	{
		return 1;
	}
	return 0;
}

int func_755()
{
	return BitTest(Global_2714762, 7);
}

void func_756()
{
	Global_23011.f_5 = 0;
}

void func_757()
{
	func_209(1);
	func_208(4, 0, -1);
	func_208(6, 0, -1);
	func_208(7, 0, -1);
	func_208(3, 0, -1);
	func_208(1, 0, -1);
	func_208(2, 0, -1);
	func_208(11, 0, -1);
	func_208(13, 0, -1);
	func_208(14, 0, -1);
	func_208(16, 0, -1);
}

void func_758(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_796())
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				Global_1836830[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_794(player_id(), bParam0);
	iVar2 = func_792(iVar1, bParam0);
	if (!func_791(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1836830[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1836830[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 303)
	{
		iVar3 = func_790(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_788(iVar4))
			{
				func_778(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_777(1))
	{
		func_770(func_771(59, 0, 0), 0);
		func_768(func_771(135, 0, 0), 1);
		func_767(func_771(22, 0, 0), func_771(73, 0, 0));
	}
	else
	{
		func_767(0, 0);
	}
	if (func_766())
	{
		if (func_513(77, -1))
		{
			func_765(1);
			func_764(1);
		}
	}
	if (func_763() || func_762())
	{
		func_32(77, 1, -1, 1);
		if (network_is_game_in_progress())
		{
			func_759(28, 1, 0);
			func_759(29, 1, 0);
			func_759(30, 1, 0);
			func_759(31, 1, 0);
			func_759(32, 1, 0);
			func_759(33, 1, 0);
			func_759(34, 1, 0);
			func_759(35, 1, 0);
			func_759(36, 1, 0);
			func_759(37, 1, 0);
			func_759(38, 1, 0);
		}
	}
	if (func_771(21, 0, 0))
	{
		enable_stunt_jump_set(0);
	}
	Global_1057411 = 0;
}

void func_759(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_100493.f_18[iParam0])
			{
				if (func_761(iParam0) == 3 && !func_25(iParam0))
				{
					func_760(iParam0);
					func_65(iParam0, 0, 0);
					func_63(iParam0, 1, 0);
					func_413(iParam0);
				}
				else
				{
					func_65(iParam0, 1, 0);
					func_413(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0, 0);
				func_63(iParam0, 1, 0);
				func_413(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 1, 0);
			func_413(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_63(iParam0, 0, 0);
		func_63(iParam0, 1, 0);
		func_413(iParam0);
	}
}

void func_760(int iParam0)
{
	if (Global_100493.f_18[iParam0])
	{
		func_65(iParam0, 10, 1);
		func_65(iParam0, 19, 1);
	}
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_762()
{
	return Global_1575046;
}

bool func_763()
{
	return Global_1575048;
}

void func_764(bool bParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	func_759(28, bParam0, 0);
	func_759(30, bParam0, 0);
	func_759(31, bParam0, 0);
	func_759(33, bParam0, 0);
	func_759(34, bParam0, 0);
	func_759(38, bParam0, 0);
}

void func_765(bool bParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	func_759(29, bParam0, 0);
	func_759(32, bParam0, 0);
	func_759(36, bParam0, 0);
	func_759(35, bParam0, 0);
	func_759(37, bParam0, 0);
}

int func_766()
{
	if (!func_796())
	{
		return 0;
	}
	return 1;
}

void func_767(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!network_is_game_in_progress())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_759(0, bParam0, 1);
	func_759(1, bParam0, 1);
	func_759(2, bParam0, 1);
	func_759(3, bParam0, 1);
	func_759(4, bParam0, 1);
	func_759(5, bParam0, 1);
	func_759(6, bParam0, 1);
	func_759(7, bParam0, bVar0);
	func_759(8, bParam0, 1);
	func_759(9, bParam0, 1);
	func_759(10, bParam0, 1);
	func_759(11, bParam0, 1);
	func_759(12, bParam0, bVar0);
	func_759(13, bParam0, 1);
	func_759(21, bParam0, 1);
	func_759(14, bParam0, 1);
	func_759(15, bParam0, 1);
	func_759(16, bParam0, 1);
	func_759(17, bParam0, 1);
	func_759(18, bParam0, 1);
	func_759(19, bParam0, 1);
	func_759(20, bParam0, 1);
	func_759(22, bParam0, 1);
	func_759(23, bParam0, 1);
	func_759(24, bParam0, 1);
	func_759(25, bParam0, 1);
	func_759(26, bParam0, 1);
	func_759(27, bParam0, 1);
	func_414(1, !bParam1);
	if (!bVar0)
	{
		func_760(12);
	}
}

void func_768(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!network_is_game_in_progress())
	{
		return;
	}
	uVar0 = func_769(0);
	if (Global_262145.f_63 == 1 && func_771(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_759(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_760(44);
		}
	}
	if (bParam0)
	{
		if (func_646(0) > 1)
		{
			set_bit(&(Global_2815059.f_1798), 10);
		}
	}
}

int func_769(bool bParam0)
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2815059.f_1789, 26))
		{
			uVar0 = func_27(1192, -1, 0);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_513(122, -1);
}

void func_770(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!network_is_game_in_progress())
	{
		return;
	}
	uVar0 = func_769(0);
	func_759(39, bParam0, 0);
	func_759(40, bParam0, 0);
	func_759(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_759(43, bParam0, 0);
		func_759(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_760(39);
		}
		if (!func_25(40))
		{
			func_760(40);
		}
		if (!func_25(41))
		{
			func_760(41);
		}
		if (!func_25(42))
		{
			func_760(42);
		}
		if (!func_25(43))
		{
			func_760(43);
		}
	}
}

int func_771(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8145 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_773(player_id(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4746 == 1)
		{
			return 1;
		}
	}
	if (func_763() || func_762())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_772())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836830[iVar1], iVar0);
}

int func_772()
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_1794, 23))
	{
		return 1;
	}
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	uVar0 = Global_1659747[func_28(-1)];
	if (BitTest(uVar0, 7))
	{
		set_bit(&(Global_2815059.f_1794), 23);
		return 1;
	}
	return 0;
}

int func_773(int iParam0, int iParam1)
{
	if (!func_766())
	{
		return 0;
	}
	if (func_776())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_774(&(Global_1853348[iParam0 /*834*/].f_765), func_775(iParam1));
}

var func_774(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		default:
	}
	return 1;
}

bool func_776()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_143, 3);
}

int func_777(int iParam0)
{
	return 0;
}

void func_778(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_787(-1))
			{
				if (!func_796())
				{
					return;
				}
			}
			if (!func_787(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_786() && !func_785())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_784())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_787(-1))
				{
					if (!func_779())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		set_bit(&(Global_1836830[iVar1]), bVar0);
	}
}

int func_779()
{
	var uVar0;
	
	if (func_783(player_id()))
	{
		return 1;
	}
	uVar0 = Global_1659747[func_28(-1)];
	if (BitTest(uVar0, 2))
	{
		func_780(1);
		return 1;
	}
	return 0;
}

void func_780(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[player_id() /*834*/].f_139, 25))
		{
			func_781(player_id(), 12);
			set_bit(&(Global_1853348[player_id() /*834*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853348[player_id() /*834*/].f_139, 25))
	{
		clear_bit(&(Global_1853348[player_id() /*834*/].f_139), 25);
	}
}

void func_781(int iParam0, int iParam1)
{
	func_782(&(Global_1853348[iParam0 /*834*/].f_765), func_775(iParam1));
}

int func_782(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		set_bit(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_783(int iParam0)
{
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 25);
}

int func_784()
{
	var uVar0;
	
	if (BitTest(Global_2815059.f_1794, 6))
	{
		return 1;
	}
	uVar0 = Global_1659747[func_28(-1)];
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2815059.f_1794, 6))
		{
			set_bit(&(Global_2815059.f_1794), 6);
		}
		return 1;
	}
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	return 0;
}

bool func_785()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_143, 7);
}

int func_786()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	return func_513(121, -1);
}

bool func_787(int iParam0)
{
	return func_513(123, iParam0);
}

int func_788(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			uVar0 = func_27(func_789(iParam0), -1, 0);
			if (BitTest(uVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_789(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10353;
			break;
	}
	return 1201;
}

int func_790(int iParam0)
{
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_787(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_791(int iParam0)
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	return func_513(119, iParam0);
}

int func_792(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_793(iParam0, 0);
}

int func_793(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_794(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_795(iParam0);
}

int func_795(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1659759[func_28(-1)];
			}
			else if (func_60(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_28(-1)];
	}
	return 0;
}

int func_796()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_763())
	{
		return 1;
	}
	if (func_762())
	{
		return 1;
	}
	return func_513(120, -1);
}

int func_797()
{
	if (Global_1575033 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return 1;
		}
	}
	if (func_496())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_801())
	{
		return 1;
	}
	if (func_800(159))
	{
		if (!func_799())
		{
			return 1;
		}
	}
	if (func_800(157))
	{
		return 1;
	}
	if (!network_is_signed_online())
	{
		return 1;
	}
	if (func_798() != 0)
	{
		if (_get_number_of_references_of_script_with_name_hash(func_798()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_798()
{
	switch (func_19())
	{
		case 0:
			return func_381();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_799()
{
	return Global_2714762.f_698;
}

int func_800(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_801()
{
	return Global_2725403;
}

void func_802()
{
	wait(0);
}

void func_803(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	network_set_this_script_is_network_script(2, false, Param0.f_16);
	func_808(0, -1, 0);
	network_register_host_broadcast_variables(&Local_414, 7, 0);
	network_register_player_broadcast_variables(&Local_581, 11, 0);
	Global_1853348[player_id() /*834*/] = 16;
	if (bLocal_590)
	{
		if (!is_screen_faded_out() && !is_screen_fading_out())
		{
			do_screen_fade_out(800);
		}
		if (!network_is_in_tutorial_session())
		{
			if (!network_is_tutorial_session_change_pending())
			{
				iVar0 = player_id() + 32;
				_0xFB680D403909DC70(1, iVar0);
				func_212(1);
			}
		}
	}
	reserve_network_mission_peds(1);
	reserve_network_mission_vehicles(1);
	if (!func_807())
	{
		func_424(0);
	}
	set_this_script_can_be_paused(false);
	func_749(iLocal_61, 1);
	func_426(1);
	if (!bLocal_590)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			func_371(player_id(), 1, 0, 0);
		}
	}
	Global_2815059.f_1789 = 0;
	set_roads_in_angled_area(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, false, false, false);
	func_806();
	func_804();
	Local_581[participant_id_to_int() /*5*/] = 0;
}

void func_804()
{
	network_block_invites(true);
	func_805(1, -1);
	network_set_presence_session_invites_blocked(true);
	if (func_513(133, -1))
	{
		func_32(133, 0, -1, 1);
	}
	Global_2714762.f_743 = 1;
}

void func_805(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	switch (bParam0)
	{
		case 0:
			_0x0D01D20616FC73FB(0, iParam1);
			break;
		
		default:
			iVar1 = func_440(iParam1);
			iVar0 = get_profile_setting(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				clear_bit(&iVar0, bParam0);
				_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_32(120, 0, iParam1, 1);
			func_32(124, 0, iParam1, 1);
			func_32(115, 0, iParam1, 1);
			func_32(119, 0, iParam1, 1);
			break;
	}
}

void func_806()
{
	open_sequence_task(&iLocal_584);
	task_leave_any_vehicle(0, 0, 0);
	task_turn_ped_to_face_coord(0, 17.0693f, -1115.935f, 28.7968f, 0);
	close_sequence_task(iLocal_584);
}

int func_807()
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
		if (func_496())
		{
			return 0;
		}
		if (func_800(157))
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

int func_808(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_809();
			}
			else
			{
				return 0;
			}
		}
		if (!func_404(0))
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!bParam2)
					{
						func_809();
					}
					else
					{
						return 0;
					}
				}
				if (func_496())
				{
					if (!bParam2)
					{
						func_809();
					}
					else
					{
						return 0;
					}
				}
				if (func_800(157))
				{
					if (!bParam2)
					{
						func_809();
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
					func_809();
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
				func_809();
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
			func_809();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_809()
{
	terminate_this_thread();
}

