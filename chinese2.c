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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	char* sLocal_51 = NULL;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_77 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_78[8] = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	struct<5> Local_101[31];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<5> Local_109[61];
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<33> Local_113[26];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<24> Local_119[26];
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_130[21];
	char[] cLocal_131[8] = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136[6];
	struct<18> Local_137[4];
	float fLocal_138 = 0f;
	int iLocal_139 = 0;
	int iLocal_140[4] = { 0, 0, 0, 0 };
	int iLocal_141[4] = { 0, 0, 0, 0 };
	struct<3> Local_142[13];
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	bool bLocal_152 = 0;
	struct<6> Local_153[20];
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169[5] = { 0, 0, 0, 0, 0 };
	int iLocal_170[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171 = 0;
	struct<3> Local_172 = { 0, 0, 0 } ;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<7> Local_184 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_185 = 1092616192;
	var uLocal_186 = 1101004800;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 3;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 16;
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
	var uLocal_249 = 0;
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
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	struct<3> Local_384[9];
	struct<10> Local_385[20];
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	struct<8> Local_388[27];
	struct<4> Local_389[5];
	struct<7> Local_390[17];
	struct<3> Local_391[4];
	int iLocal_392 = 0;
	char cLocal_393[24] = "";
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	struct<3> Local_397 = { 0, 0, 0 } ;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	int iLocal_408[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_409 = 16;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
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
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
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
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = get_standard_blip_enum_id();
	iLocal_50 = get_waypoint_blip_enum_id();
	iLocal_61 = -1;
	iLocal_62 = -1;
	bLocal_75 = true;
	iLocal_90 = -1;
	iLocal_93 = -1;
	fLocal_96 = 0.5f;
	fLocal_97 = 0f;
	iLocal_103 = 1;
	fLocal_110 = 160f;
	cLocal_131 = "CHI2AUD";
	iLocal_177 = -1;
	iLocal_379 = -1;
	set_mission_flag(true);
	if (has_force_cleanup_occurred(3))
	{
		func_455();
		func_454(2);
	}
	fLocal_110 = 160f;
	while (true)
	{
		if (!is_ped_injured(player_ped_id()))
		{
			func_135();
			func_133();
			if (iLocal_149 >= 7)
			{
				func_125();
			}
			func_123();
			func_84();
			func_3();
			func_2();
			func_1();
			_0x208784099002BC30("m_Chinese2", 0);
		}
		iLocal_574 = 0;
		wait(0);
	}
}

void func_1()
{
	if (iLocal_402)
	{
		if (is_interior_ready(iLocal_401))
		{
			pin_interior_in_memory(iLocal_401);
			iLocal_402 = 0;
		}
	}
}

int func_2()
{
	if (iLocal_403)
	{
		if (iLocal_404)
		{
			if (prepare_music_event(sLocal_406))
			{
				if (trigger_music_event(sLocal_406))
				{
					iLocal_403 = 0;
					iLocal_404 = 0;
					return 1;
				}
			}
		}
		else if (trigger_music_event(sLocal_406))
		{
			iLocal_403 = 0;
			return 1;
		}
	}
	else if (iLocal_405)
	{
		if (prepare_music_event(sLocal_407))
		{
			iLocal_405 = 0;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_153[iVar0 /*6*/])
			{
				case 0:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (is_cutscene_playing())
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_75(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_144 = get_players_last_vehicle();
							if (func_74(iLocal_144) && func_73(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
							{
								request_vehicle_asset(get_entity_model(iLocal_144), 3);
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							func_72();
							func_70();
							break;
						
						case 0:
							if (func_73(player_ped_id(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || func_69(39))
							{
								if (func_73(player_ped_id(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_66("PHN2", 1, player_ped_id(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_65())
							{
								if (func_35("CHI2_ONEILPH", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_153[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							iLocal_383 = 0;
							Local_153[iVar0 /*6*/].f_5 = get_game_timer() + 3000;
							break;
						
						case 1:
							if (!func_65())
							{
								if (!func_34())
								{
									if (!is_ped_in_any_vehicle(player_ped_id(), false))
									{
										if (get_game_timer() > Local_153[iVar0 /*6*/].f_5)
										{
											if (iLocal_383 < 13)
											{
												if (func_35("DRI1", 2, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_383++;
													Local_153[iVar0 /*6*/].f_5 = (get_game_timer() + get_random_int_in_range(4000, 10000));
												}
											}
											else
											{
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (is_ped_in_any_vehicle(player_ped_id(), false))
					{
						iVar1 = get_vehicle_ped_is_in(player_ped_id(), false);
						if (!is_entity_in_air(iVar1))
						{
							if (func_33(6f, 2))
							{
								task_leave_any_vehicle(player_ped_id(), 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -20:
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 2460.073f, 4964.176f, 46.2405f, true) < 250f)
							{
								request_model(joaat("a_m_m_hillbilly_01"));
								request_model(joaat("prop_pallet_pile_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (has_model_loaded(joaat("a_m_m_hillbilly_01")) && has_model_loaded(joaat("prop_pallet_pile_01")))
							{
								request_model(joaat("a_m_m_hillbilly_02"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (has_model_loaded(joaat("a_m_m_hillbilly_02")))
							{
								request_model(joaat("burrito"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (has_model_loaded(joaat("burrito")))
							{
								request_model(joaat("a_m_y_methhead_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (has_model_loaded(joaat("a_m_y_methhead_01")))
							{
								request_model(joaat("prop_ld_can_01"));
								request_model(joaat("prop_cs_fertilizer"));
								request_model(joaat("prop_cs_beer_bot_01"));
								request_model(joaat("prop_phone_ing"));
								request_model(joaat("dubsta"));
								request_anim_dict("misschinese2_bank5");
								request_anim_dict("misschinese2_bank1");
								request_anim_dict("reaction@male_stand@big_variations@b");
								request_anim_dict("reaction@male_stand@big_intro@left");
								request_anim_dict("reaction@male_stand@big_intro@right");
								request_anim_dict("reaction@male_stand@big_intro@backward");
								request_anim_dict("misschinese2_barrelRoll");
								request_anim_set("move_m@gangster@var_e");
								request_anim_set("move_m@gangster@var_f");
								request_anim_set("move_m@gangster@generic");
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (has_model_loaded(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								set_roads_in_area(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), false, true);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 2460.073f, 4964.176f, 46.2405f, true) < 250f)
							{
								request_model(joaat("a_m_m_hillbilly_01"));
								request_model(joaat("a_m_m_hillbilly_02"));
								request_model(joaat("a_m_y_methhead_01"));
								request_model(joaat("prop_ld_can_01"));
								request_model(joaat("prop_cs_fertilizer"));
								request_model(joaat("burrito"));
								request_model(joaat("prop_cs_beer_bot_01"));
								if (iLocal_149 <= 3)
								{
									request_model(joaat("prop_phone_ing"));
									request_model(joaat("dubsta"));
								}
								request_anim_dict("misschinese2_bank5");
								request_anim_dict("misschinese2_bank1");
								request_anim_dict("reaction@male_stand@big_variations@b");
								request_anim_dict("reaction@male_stand@big_intro@left");
								request_anim_dict("reaction@male_stand@big_intro@right");
								request_anim_dict("reaction@male_stand@big_intro@backward");
								request_anim_dict("misschinese2_barrelRoll");
								request_anim_set("move_m@gangster@var_e");
								request_anim_set("move_m@gangster@var_f");
								request_anim_set("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								set_roads_in_area(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), false, true);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((has_model_loaded(joaat("a_m_m_hillbilly_01")) && has_model_loaded(joaat("a_m_m_hillbilly_02"))) && has_model_loaded(joaat("a_m_y_methhead_01"))) && has_model_loaded(joaat("burrito"))) && has_model_loaded(joaat("prop_cs_fertilizer"))) && has_model_loaded(joaat("prop_cs_beer_bot_01"))) && has_model_loaded(joaat("prop_ld_can_01"))) && has_anim_dict_loaded("misschinese2_bank5")) && has_anim_dict_loaded("misschinese2_bank1")) && has_anim_dict_loaded("misschinese2_barrelRoll")) && has_anim_dict_loaded("reaction@male_stand@big_variations@b")) && has_anim_dict_loaded("reaction@male_stand@big_intro@left")) && has_anim_dict_loaded("reaction@male_stand@big_intro@right")) && has_anim_dict_loaded("reaction@male_stand@big_intro@backward")) && ((iLocal_149 <= 3 && has_model_loaded(joaat("prop_phone_ing"))) || iLocal_149 > 3)) && ((iLocal_149 <= 3 && has_model_loaded(joaat("dubsta"))) || iLocal_149 > 3))
							{
								Local_153[iVar0 /*6*/].f_2 = 4;
							}
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 2460.073f, 4964.176f, 46.2405f, true) > 300f)
							{
								set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_01"));
								set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_02"));
								set_model_as_no_longer_needed(joaat("a_m_y_methhead_01"));
								set_model_as_no_longer_needed(joaat("burrito"));
								set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
								set_model_as_no_longer_needed(joaat("prop_cs_beer_bot_01"));
								set_model_as_no_longer_needed(joaat("prop_ld_can_01"));
								remove_anim_dict("misschinese2_bank5");
								remove_anim_dict("misschinese2_bank1");
								remove_anim_dict("reaction@male_stand@big_variations@b");
								remove_anim_dict("reaction@male_stand@big_intro@left");
								remove_anim_dict("reaction@male_stand@big_intro@right");
								remove_anim_dict("reaction@male_stand@big_intro@backward");
								remove_anim_dict("misschinese2_barrelRoll");
								remove_anim_set("move_m@gangster@var_e");
								remove_anim_set("move_m@gangster@var_f");
								remove_anim_set("move_m@gangster@generic");
								set_model_as_no_longer_needed(joaat("prop_phone_ing"));
								set_model_as_no_longer_needed(joaat("dubsta"));
								set_roads_in_area(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), true, true);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_179 != 0)
								{
									unpin_interior(iLocal_179);
									iLocal_179 = 0;
								}
								Local_153[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 2460.073f, 4964.176f, 46.2405f, true) > 300f)
							{
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_149 >= 3 && !func_30(22))
							{
								func_27();
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_179 != 0)
							{
								unpin_interior(iLocal_179);
							}
							iLocal_179 = 0;
							break;
						
						case 0:
							iLocal_179 = get_interior_at_coords(2440.492f, 4969.948f, 52.5247f);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!is_valid_interior(iLocal_179))
							{
								iLocal_179 = get_interior_at_coords(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								pin_interior_in_memory(iLocal_179);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_153[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!is_ped_injured(Local_113[iVar2 /*33*/]))
							{
								if (get_script_task_status(Local_113[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!is_ped_injured(Local_113[iVar2 /*33*/]))
										{
											if (get_script_task_status(Local_113[iVar2 /*33*/], 1785177548) == 7)
											{
												remove_anim_dict("misschinese2_bank5");
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!is_ped_injured(Local_113[iVar2 /*33*/]))
									{
										if (get_script_task_status(Local_113[iVar2 /*33*/], 1785177548) == 7)
										{
											remove_anim_dict("misschinese2_bank5");
											Local_153[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										remove_anim_dict("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							remove_scenario_blocking_areas();
							break;
						
						case 0:
							add_scenario_blocking_area(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), false, true, true, true);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!is_ped_injured(player_ped_id()))
							{
								if (get_distance_between_coords(get_entity_coords(player_ped_id(), false), 2473.061f, 4981.482f, 24.64584f, true) < 250f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							set_ped_density_multiplier_this_frame(0f);
							set_vehicle_density_multiplier_this_frame(0f);
							set_scenario_ped_density_multiplier_this_frame(0f, 0f);
							if (get_distance_between_coords(get_entity_coords(player_ped_id(), false), 2473.061f, 4981.482f, 24.64584f, true) > 250f)
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							enable_dispatch_service(3, true);
							enable_dispatch_service(5, true);
							enable_dispatch_service(1, true);
							enable_dispatch_service(7, true);
							break;
						
						case 0:
							if (func_73(player_ped_id(), 2578.523f, 4982.284f, 51.4416f, 1) < 500f)
							{
								enable_dispatch_service(3, false);
								enable_dispatch_service(5, false);
								enable_dispatch_service(1, false);
								enable_dispatch_service(7, false);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_73(player_ped_id(), 2578.523f, 4982.284f, 51.4416f, 1) > 500f)
							{
								enable_dispatch_service(3, true);
								enable_dispatch_service(5, true);
								enable_dispatch_service(1, true);
								enable_dispatch_service(7, true);
								Local_153[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(player_ped_id(), 149);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (is_ped_in_any_vehicle(player_ped_id(), false))
							{
								iVar3 = get_vehicle_ped_is_in(player_ped_id(), false);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!is_ped_in_any_vehicle(player_ped_id(), false))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_153[iVar0 /*6*/].f_5 = get_game_timer() + 7000;
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (get_game_timer() > Local_153[iVar0 /*6*/].f_5)
							{
								set_entity_coords(player_ped_id(), 2466.385f, 4953.096f, 44.1228f, true, false, false, true);
								set_entity_heading(player_ped_id(), 221f);
								task_go_straight_to_coord(player_ped_id(), 2475.075f, 4945.965f, 44.0228f, 1f, 20000, 40000f, 0.5f);
								force_ped_motion_state(player_ped_id(), joaat("MotionState_Walk"), false, 0, false);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						play_stream_frontend();
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							iLocal_173 = get_rayfire_map_object(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (does_rayfire_map_object_exist(iLocal_173))
							{
								set_state_of_rayfire_map_object(iLocal_173, 2);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (get_state_of_rayfire_map_object(iLocal_173) == 3)
							{
								set_state_of_rayfire_map_object(iLocal_173, 4);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_174 == 1)
							{
								if (get_state_of_rayfire_map_object(iLocal_173) == 5)
								{
									set_state_of_rayfire_map_object(iLocal_173, 6);
									start_audio_scene("CHI_2_RAYFIRE");
									create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
									create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
									create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_153[iVar0 /*6*/].f_2 != -1)
					{
						if (!has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false) || !does_pickup_exist(iLocal_176))
						{
							iLocal_180 = get_closest_object_of_type(get_entity_coords(player_ped_id(), true), 20f, get_weapontype_model(joaat("weapon_petrolcan")), false, false, true);
							if (iLocal_180 != 0)
							{
								if (does_blip_exist(iLocal_178))
								{
									remove_blip(&iLocal_178);
								}
								iLocal_178 = func_13(iLocal_180);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_153[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (does_blip_exist(iLocal_178))
							{
								remove_blip(&iLocal_178);
							}
							func_10(157, 0);
							if (iLocal_167 == 0)
							{
								iLocal_167 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, (iLocal_167 - get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"))), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_153[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (is_entity_in_angled_area(player_ped_id(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, false, true, 0) && get_game_timer() > Local_153[iVar0 /*6*/].f_5)
					{
						if (does_blip_exist(iLocal_178))
						{
							remove_blip(&iLocal_178);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_153[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_65())
								{
									func_7("FRMSHP", 7500, 1);
									Local_153[iVar0 /*6*/].f_5 = get_game_timer() + 2000;
									iLocal_178 = func_5(2450f, 4954f, 45f, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 0))
					{
						iLocal_380 = func_18(4);
						if (iLocal_380 != -1)
						{
							set_bit(&(Local_153[iVar0 /*6*/].f_5), false);
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (!is_ped_injured(Local_113[iLocal_380 /*33*/]) && does_entity_exist(Local_113[iLocal_380 /*33*/].f_20))
						{
							if (is_entity_playing_anim(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && is_entity_attached(Local_113[iLocal_380 /*33*/].f_20))
							{
								set_bit(&(Local_153[iVar0 /*6*/].f_5), true);
							}
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 2))
					{
						if (is_ped_injured(Local_113[iLocal_380 /*33*/]))
						{
							set_bit(&(Local_153[iVar0 /*6*/].f_5), 2);
						}
						if (!is_ped_injured(Local_113[iLocal_380 /*33*/]))
						{
							if (!is_entity_playing_anim(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								set_bit(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (get_script_task_status(Local_113[iLocal_380 /*33*/], -2017877118) == 2 || get_script_task_status(Local_113[iLocal_380 /*33*/], -2017877118) == 7)
							{
								set_bit(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (is_ped_in_combat(Local_113[iLocal_380 /*33*/], player_ped_id()) || Local_119[iLocal_380 /*24*/].f_3 > 3)
							{
								set_bit(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (does_entity_exist(Local_113[iLocal_380 /*33*/].f_20) && is_entity_attached(Local_113[iLocal_380 /*33*/].f_20))
					{
						detach_entity(Local_113[iLocal_380 /*33*/].f_20, false, false);
					}
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 4))
					{
						iLocal_381 = func_18(5);
						if (iLocal_381 != -1)
						{
							set_bit(&(Local_153[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 5))
					{
						if (!is_ped_injured(Local_113[iLocal_381 /*33*/]))
						{
							if (does_entity_exist(Local_113[iLocal_381 /*33*/].f_20))
							{
								if (is_entity_playing_anim(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (is_entity_attached(Local_113[iLocal_381 /*33*/].f_20))
									{
										set_bit(&(Local_153[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 6))
					{
						if (is_ped_injured(Local_113[iLocal_381 /*33*/]))
						{
							set_bit(&(Local_153[iVar0 /*6*/].f_5), 6);
						}
						if (!is_ped_injured(Local_113[iLocal_381 /*33*/]))
						{
							if (!is_entity_playing_anim(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								set_bit(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (get_script_task_status(Local_113[iLocal_381 /*33*/], -2017877118) == 2 || get_script_task_status(Local_113[iLocal_381 /*33*/], -2017877118) == 7)
							{
								set_bit(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (is_ped_in_combat(Local_113[iLocal_381 /*33*/], player_ped_id()) || Local_119[iLocal_381 /*24*/].f_3 > 3)
							{
								set_bit(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (does_entity_exist(Local_113[iLocal_381 /*33*/].f_20) && is_entity_attached(Local_113[iLocal_381 /*33*/].f_20))
					{
						detach_entity(Local_113[iLocal_381 /*33*/].f_20, false, false);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_170[0] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, true, true, false);
							set_entity_rotation(iLocal_170[0], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[1] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, true, true, false);
							set_entity_rotation(iLocal_170[1], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[2] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, true, true, false);
							set_entity_rotation(iLocal_170[2], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[3] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, true, true, false);
							set_entity_rotation(iLocal_170[3], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[4] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, true, true, false);
							set_entity_rotation(iLocal_170[4], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[5] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, true, true, false);
							set_entity_rotation(iLocal_170[5], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[6] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, true, true, false);
							set_entity_rotation(iLocal_170[6], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[7] = create_object_no_offset(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, true, true, false);
							set_entity_rotation(iLocal_170[7], 3.955f, 0f, 139.68f, 2, true);
							iLocal_170[8] = create_object_no_offset(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, true, true, false);
							set_entity_rotation(iLocal_170[8], 3.955f, 0f, 139.68f, 2, true);
							iLocal_170[9] = create_object_no_offset(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, true, true, false);
							set_entity_rotation(iLocal_170[9], 3.955f, 0f, 139.68f, 2, true);
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								set_entity_dynamic(iLocal_170[iVar4], true);
								freeze_entity_position(iLocal_170[iVar4], true);
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!does_entity_exist(iLocal_181) && !does_entity_exist(iLocal_182))
							{
								if (does_object_of_type_exist_at_coords(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), false) && does_object_of_type_exist_at_coords(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), false))
								{
									iLocal_181 = get_closest_object_of_type(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), true, false, true);
									freeze_entity_position(iLocal_181, true);
									create_model_hide(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), false);
									iLocal_182 = create_object(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, true, true, false);
									set_entity_rotation(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, true);
									freeze_entity_position(iLocal_182, true);
									func_32(24, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								delete_object(&iLocal_182);
								iLocal_182 = create_object(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, true, true, false);
								set_entity_rotation(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, true);
								freeze_entity_position(iLocal_182, true);
								func_32(24, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								if (does_entity_exist(iLocal_170[iVar4]))
								{
									freeze_entity_position(iLocal_170[iVar4], false);
								}
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 0))
					{
						if (does_entity_exist(iLocal_181))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								if (has_entity_been_damaged_by_entity(iLocal_181, player_ped_id(), true) || func_4(player_ped_id(), iLocal_181, 1) < 30f)
								{
									freeze_entity_position(iLocal_181, false);
									set_bit(&(Local_153[iVar0 /*6*/].f_5), false);
								}
							}
						}
					}
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (does_entity_exist(iLocal_182))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								if (has_entity_been_damaged_by_entity(iLocal_182, player_ped_id(), true) || func_4(player_ped_id(), iLocal_182, 1) < 30f)
								{
									freeze_entity_position(iLocal_182, false);
									set_bit(&(Local_153[iVar0 /*6*/].f_5), true);
								}
							}
						}
					}
					if ((BitTest(Local_153[iVar0 /*6*/].f_5, 0) && BitTest(Local_153[iVar0 /*6*/].f_5, 1)) || iLocal_149 == 6)
					{
						if (does_entity_exist(iLocal_181))
						{
							freeze_entity_position(iLocal_181, false);
						}
						if (does_entity_exist(iLocal_182))
						{
							freeze_entity_position(iLocal_182, false);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (does_entity_exist(Local_113[12 /*33*/]))
							{
								delete_ped(&(Local_113[12 /*33*/]));
							}
							if (does_entity_exist(Local_113[13 /*33*/]))
							{
								delete_ped(&(Local_113[13 /*33*/]));
							}
							if (does_entity_exist(Local_113[14 /*33*/]))
							{
								delete_ped(&(Local_113[14 /*33*/]));
							}
							set_model_as_no_longer_needed(joaat("ig_janet"));
							set_model_as_no_longer_needed(joaat("ig_old_man1a"));
							set_model_as_no_longer_needed(joaat("ig_old_man2"));
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							request_anim_dict("MISSChinese2_crystalMazeMCS1_IG");
							Local_153[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (has_anim_dict_loaded("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (has_cutscene_finished() || !is_cutscene_playing())
								{
									if (does_entity_exist(Local_113[13 /*33*/]) && !is_ped_injured(Local_113[13 /*33*/]))
									{
										set_entity_coords(Local_113[13 /*33*/], 1986.06f, 3051.708f, 46.2151f, true, false, false, true);
									}
									if (does_entity_exist(Local_113[14 /*33*/]) && !is_ped_injured(Local_113[14 /*33*/]))
									{
										set_entity_coords(Local_113[14 /*33*/], 1986.105f, 3051.659f, 46.2151f, true, false, false, true);
									}
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (does_scenario_exist_in_area(1984.89f, 3052.46f, 46.98f, 0.3f, true) && does_scenario_exist_in_area(1985.322f, 3053.087f, 46.98f, 0.3f, true))
							{
								if (!does_entity_exist(Local_113[13 /*33*/]))
								{
									Local_113[13 /*33*/] = create_ped(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								if (!does_entity_exist(Local_113[14 /*33*/]))
								{
									Local_113[14 /*33*/] = create_ped(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								if (!does_entity_exist(Local_113[12 /*33*/]))
								{
									Local_113[12 /*33*/] = create_ped(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								set_bit(&(Local_153[iVar0 /*6*/].f_5), true);
								task_use_nearest_scenario_to_coord_warp(Local_113[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								force_ped_ai_and_animation_update(Local_113[14 /*33*/], true, true);
								set_blocking_of_non_temporary_events(Local_113[14 /*33*/], false);
								set_bit(&(Local_153[iVar0 /*6*/].f_5), false);
								task_use_nearest_scenario_to_coord_warp(Local_113[13 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
								force_ped_ai_and_animation_update(Local_113[13 /*33*/], true, true);
								set_blocking_of_non_temporary_events(Local_113[13 /*33*/], false);
								if (!is_synchronized_scene_running(Local_153[iVar0 /*6*/].f_5))
								{
									Local_153[iVar0 /*6*/].f_5 = create_synchronized_scene(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									set_synchronized_scene_looped(Local_153[iVar0 /*6*/].f_5, true);
								}
								task_synchronized_scene(Local_113[12 /*33*/], Local_153[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1000f, 0);
								force_ped_ai_and_animation_update(Local_113[12 /*33*/], true, true);
								set_blocking_of_non_temporary_events(Local_113[12 /*33*/], false);
								Local_153[iVar0 /*6*/].f_5 = 0;
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (has_cutscene_finished() || !is_cutscene_playing())
							{
							}
							if (!is_ped_injured(Local_113[13 /*33*/]) && !is_ped_injured(Local_113[14 /*33*/]))
							{
								set_ped_config_flag(Local_113[13 /*33*/], 152, true);
								set_ped_config_flag(Local_113[14 /*33*/], 152, true);
								if (BitTest(Local_153[iVar0 /*6*/].f_5, 0) && BitTest(Local_153[iVar0 /*6*/].f_5, 1))
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (get_script_task_status(Local_113[13 /*33*/], 993674639) != 1)
									{
										if (does_scenario_exist_in_area(1984.89f, 3052.46f, 46.98f, 0.3f, true))
										{
											set_bit(&(Local_153[iVar0 /*6*/].f_5), false);
											task_use_nearest_scenario_to_coord_warp(Local_113[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											set_blocking_of_non_temporary_events(Local_113[13 /*33*/], false);
										}
									}
									else
									{
										set_bit(&(Local_153[iVar0 /*6*/].f_5), false);
									}
									if (get_script_task_status(Local_113[14 /*33*/], 993674639) != 1)
									{
										if (does_scenario_exist_in_area(1985.322f, 3053.087f, 46.98f, 0.3f, true))
										{
											set_bit(&(Local_153[iVar0 /*6*/].f_5), true);
											task_use_nearest_scenario_to_coord_warp(Local_113[14 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
											set_blocking_of_non_temporary_events(Local_113[14 /*33*/], false);
										}
									}
									else
									{
										set_bit(&(Local_153[iVar0 /*6*/].f_5), true);
									}
								}
							}
							break;
						
						case 4:
							if (func_73(player_ped_id(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!is_ped_injured(Local_113[12 /*33*/]))
							{
								task_smart_flee_ped(Local_113[12 /*33*/], player_ped_id(), 100f, -1, false, false);
								set_ped_keep_task(Local_113[12 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_113[12 /*33*/]));
							}
							if (!is_ped_injured(Local_113[13 /*33*/]))
							{
								task_smart_flee_ped(Local_113[13 /*33*/], player_ped_id(), 100f, -1, false, false);
								set_ped_keep_task(Local_113[13 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_113[13 /*33*/]));
							}
							if (!is_ped_injured(Local_113[14 /*33*/]))
							{
								task_smart_flee_ped(Local_113[14 /*33*/], player_ped_id(), 100f, -1, false, false);
								set_ped_keep_task(Local_113[14 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_113[14 /*33*/]));
							}
							Local_153[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_73(player_ped_id(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					create_forced_object(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_door03"), true);
					create_forced_object(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), true);
					Local_153[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_153[iVar0 /*6*/].f_2 == -1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
				Local_153[iVar0 /*6*/].f_2 = 0;
				Local_153[iVar0 /*6*/].f_3 = 0;
				Local_153[iVar0 /*6*/].f_4 = 0;
				Local_153[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, bool bParam2)
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

int func_5(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(Param0);
	set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, bParam1);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	begin_text_command_print(sParam0);
	end_text_command_print(iParam1, false);
}

int func_8()
{
	if (iLocal_93 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75250[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75250[iVar0 /*9*/].f_1 = (Global_75250[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75250[iVar0 /*9*/] != -1)
	{
		if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75250[iVar0 /*9*/].f_1 > 1)
			{
				Global_75250[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75250[iVar0 /*9*/].f_1 < 0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63164 = iParam0;
	if (!Global_63162)
	{
		Global_63162 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] == iParam0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63162)
	{
	}
	Global_63162 = 0;
	if (bParam0)
	{
		Global_63163 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75250[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75249)
		{
			if (Global_75250[iVar0 /*9*/] > 0)
			{
				if (Global_75250[iVar0 /*9*/] == iParam1)
				{
					Global_75250[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_86 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_109.f_0)
			{
				if (does_blip_exist(Local_109[iVar0 /*5*/].f_3))
				{
					if (get_blip_alpha(Local_109[iVar0 /*5*/].f_3) < 255)
					{
						remove_blip(&(Local_109[iVar0 /*5*/].f_3));
					}
					else
					{
						set_blip_alpha(Local_109[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_86 = 1;
		}
	}
	else if (iLocal_86)
	{
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			if (does_blip_exist(Local_109[iVar0 /*5*/].f_3))
			{
				set_blip_alpha(Local_109[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				set_blip_hidden_on_legend(Local_109[iVar0 /*5*/].f_3, true);
				set_blip_scale(Local_109[iVar0 /*5*/].f_3, 0.4f);
				set_blip_alpha(Local_109[iVar0 /*5*/].f_3, 0);
				set_blip_colour(Local_109[iVar0 /*5*/].f_3, 5);
				show_height_on_blip(Local_109[iVar0 /*5*/].f_3, false);
			}
			iVar0++;
		}
		iLocal_86 = 0;
	}
}

int func_13(int iParam0)
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)
{
	iLocal_403 = 1;
	iLocal_404 = iParam1;
	sLocal_406 = sParam0;
	sLocal_407 = sParam2;
}

void func_16(int iParam0, int iParam1)
{
	Global_63165 = iParam0;
	Global_63166 = iParam1;
}

void func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63167 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (iParam1 == -1 || Global_75250[iVar0 /*9*/] == iParam1)
		{
			if (Global_75250[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75250[iVar0 /*9*/].f_6 = iParam0;
				Global_75250[iVar0 /*9*/].f_7 = 1;
				Global_75250[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (Local_113[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_78319)
		{
			Global_42586.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113386.f_7261.f_227[iParam0] = iParam1;
		}
		Global_39592[iParam0] = iParam2;
		Global_39791[iParam0] = 1;
		func_22(iParam0, bParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", false, false);
			}
			else
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", true, false);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				remove_portal_settings_override("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}
}

void func_21(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		set_bit(&Global_112024, bParam0);
	}
	else
	{
		clear_bit(&Global_112024, bParam0);
	}
	Global_112023 = 1;
}

bool func_22(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	Global_1922024 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_113386.f_7261.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_42586.f_227[iParam0];
	}
	iVar2 = Global_39990[iParam0];
	if (is_ped_injured(player_ped_id()) && !bParam3)
	{
		Global_1922024 = 1;
	}
	else
	{
		bVar5 = true;
		if (get_hash_key(get_this_script_name()) != get_hash_key("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_39592[iParam0] && get_distance_between_coords(get_entity_coords(player_ped_id(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1922024 = 1;
				}
				if (!is_player_playing(player_id()) || is_ped_being_arrested(player_ped_id()))
				{
					if (!is_screen_faded_out())
					{
						bVar5 = false;
						Global_1922024 = 1;
					}
				}
			}
		}
		if (is_new_load_scene_active() && (!is_player_switch_in_progress() || get_player_switch_state() != 5))
		{
			bVar5 = false;
			Global_1922024 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							remove_model_hide(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							create_model_hide(Var3, 10f, Var3.f_4[iVar2], true);
						}
						Global_41186[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
								Global_1922024 = 1;
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
								Global_1922024 = 1;
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								request_ipl(&(Var3.f_8[0 /*8*/]));
								Global_1922024 = 1;
							}
						}
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_34)))
							{
								request_ipl(&(Var3.f_34));
								Global_1922024 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								request_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
						{
							if (!is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								request_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_40987[iParam0] = 1;
					Global_41186[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = get_interior_at_coords_with_type(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (get_hash_key(&(Var3.f_50)) != get_hash_key(""))
						{
							if (is_interior_entity_set_active(iVar6, &(Var3.f_50)))
							{
								deactivate_interior_entity_set(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (is_interior_entity_set_active(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									deactivate_interior_entity_set(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (is_interior_entity_set_active(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									deactivate_interior_entity_set(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (!is_interior_entity_set_active(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									activate_interior_entity_set(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (is_interior_entity_set_active(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									deactivate_interior_entity_set(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (is_interior_entity_set_active(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									deactivate_interior_entity_set(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (!is_interior_entity_set_active(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									activate_interior_entity_set(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (is_interior_entity_set_active(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									deactivate_interior_entity_set(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (is_interior_entity_set_active(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									deactivate_interior_entity_set(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
							{
								if (!is_interior_entity_set_active(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									activate_interior_entity_set(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							refresh_interior(iVar6);
						}
					}
					Global_41186[iParam0] = 1;
					Global_40987[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (get_distance_between_coords(Var3, get_entity_coords(player_ped_id(), false), true) < 250f)
					{
						iVar4 = get_rayfire_map_object(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (does_rayfire_map_object_exist(iVar4))
						{
							if (iVar1 == 0)
							{
								set_state_of_rayfire_map_object(iVar4, 3);
								Global_41186[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((get_state_of_rayfire_map_object(iVar4) != 6 && get_state_of_rayfire_map_object(iVar4) != 7) && get_state_of_rayfire_map_object(iVar4) != 8)
								{
									set_state_of_rayfire_map_object(iVar4, 10);
									Global_41186[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
						clear_bit(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
						set_bit(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_39791[iParam0] = 0;
				Global_39990[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_40587[iParam0])
					{
						Global_40587[iParam0] = 1;
						Global_40786++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	return Global_31960;
}

int func_25()
{
	return Global_31959;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_27()
{
	int iVar0;
	
	func_32(27, 0);
	clear_area(2479.875f, 4980.868f, 44.82052f, 60f, true, false, false, false);
	iLocal_145 = create_vehicle(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, true, true, false);
	set_vehicle_colour_combination(iLocal_145, 1);
	set_vehicle_livery(iLocal_145, 2);
	set_vehicle_on_ground_properly(iLocal_145, 5f);
	if (iLocal_149 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_149 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_149 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_149 == 7)
	{
		request_anim_dict("DEAD");
		while (!has_anim_dict_loaded("DEAD"))
		{
			func_28(323, 1);
		}
		Local_113[15 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, true, true);
		task_play_anim(Local_113[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0f, false, false, false);
		force_ped_ai_and_animation_update(Local_113[15 /*33*/], true, false);
		disable_ped_pain_audio(Local_113[15 /*33*/], true);
		Local_113[16 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, true, true);
		task_play_anim(Local_113[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0f, false, false, false);
		force_ped_ai_and_animation_update(Local_113[16 /*33*/], true, false);
		disable_ped_pain_audio(Local_113[16 /*33*/], true);
		Local_113[17 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, true, true);
		task_play_anim(Local_113[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0f, false, false, false);
		force_ped_ai_and_animation_update(Local_113[17 /*33*/], true, false);
		disable_ped_pain_audio(Local_113[17 /*33*/], true);
		Local_113[18 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, true, true);
		task_play_anim(Local_113[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0f, false, false, false);
		force_ped_ai_and_animation_update(Local_113[18 /*33*/], true, false);
		disable_ped_pain_audio(Local_113[18 /*33*/], true);
		while (((!is_entity_playing_anim(Local_113[15 /*33*/], "DEAD", "DEAD_C", 3) || !is_entity_playing_anim(Local_113[16 /*33*/], "DEAD", "DEAD_D", 3)) || !is_entity_playing_anim(Local_113[17 /*33*/], "DEAD", "DEAD_E", 3)) || !is_entity_playing_anim(Local_113[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!is_ped_injured(Local_113[15 /*33*/]) && !is_ped_injured(Local_113[16 /*33*/])) && !is_ped_injured(Local_113[17 /*33*/])) && !is_ped_injured(Local_113[18 /*33*/]))
			{
			}
		}
		set_entity_health(Local_113[15 /*33*/], 0, 0);
		set_entity_health(Local_113[16 /*33*/], 0, 0);
		set_entity_health(Local_113[17 /*33*/], 0, 0);
		set_entity_health(Local_113[18 /*33*/], 0, 0);
		remove_anim_dict("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	set_bit(&iVar0, 3);
	set_bit(&iVar0, 8);
	set_bit(&iVar0, true);
	set_bit(&iVar0, 2);
	set_bit(&iVar0, 4);
	iLocal_168 = create_pickup(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, -1, true, 0);
	if (!does_navmesh_blocking_object_exist(iLocal_148))
	{
		iLocal_148 = add_navmesh_blocking_object(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, false, 7);
	}
	iLocal_169[0] = create_pickup_rotate(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, true, 0);
	add_pickup_to_interior_room_by_name(iLocal_169[0], "V_8_Bed1Rm");
	iLocal_169[1] = create_pickup_rotate(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, true, 0);
	add_pickup_to_interior_room_by_name(iLocal_169[1], "V_8_KitchnRm");
	iLocal_169[3] = create_pickup_rotate(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, true, 0);
	add_pickup_to_interior_room_by_name(iLocal_169[3], "V_8_StudyRm");
	iLocal_169[4] = create_pickup_rotate(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, true, 0);
	add_pickup_to_interior_room_by_name(iLocal_169[4], "V_8_Hall2Rm");
	iVar0 = 0;
	set_bit(&iVar0, 2);
	set_bit(&iVar0, true);
	set_bit(&iVar0, 3);
	iLocal_169[2] = create_pickup_rotate(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, true, 0);
	add_pickup_to_interior_room_by_name(iLocal_169[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	wait(0);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_113[iVar0 /*33*/].f_1 = iParam0;
	Local_113[iVar0 /*33*/].f_3 = iParam1;
	Local_113[iVar0 /*33*/].f_2 = iParam2;
	Local_113[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0)
		{
			Local_153[iVar0 /*6*/].f_1 = 1;
			Local_153[iVar0 /*6*/] = iParam0;
			Local_153[iVar0 /*6*/].f_2 = 0;
			Local_153[iVar0 /*6*/].f_3 = iParam1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_in_any_vehicle(player_ped_id(), false))
	{
		return 1;
	}
	iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
	if (is_vehicle_driveable(iVar0, false))
	{
		if (get_ped_in_vehicle_seat(iVar0, -1, false) == player_ped_id())
		{
			if (!is_vehicle_stopped(iVar0))
			{
				bring_vehicle_to_halt(iVar0, fParam0, iParam1, false);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (is_ped_stopped(player_ped_id()))
	{
		return 1;
	}
	if (is_vehicle_driveable(iVar0, false))
	{
		if (is_vehicle_stopped(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()
{
	return Global_100493.f_375 > 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	if (!iLocal_574)
	{
		iLocal_574 = 1;
		Local_391[0 /*3*/] = iParam1;
		Local_391[0 /*3*/].f_1 = iParam2;
		Local_391[0 /*3*/].f_2 = sParam3;
		Local_391[1 /*3*/] = iParam4;
		Local_391[1 /*3*/].f_1 = iParam5;
		Local_391[1 /*3*/].f_2 = sParam6;
		Local_391[2 /*3*/] = iParam7;
		Local_391[2 /*3*/].f_1 = iParam8;
		Local_391[2 /*3*/].f_2 = sParam9;
		Local_391[3 /*3*/] = iParam10;
		Local_391[3 /*3*/].f_1 = iParam11;
		Local_391[3 /*3*/].f_2 = sParam12;
		func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_61(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_61(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_61(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_61(iParam10, iParam11, sParam12);
		}
		if (!func_59())
		{
			if (is_message_being_displayed() && is_subtitle_preference_switched_on())
			{
				if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_392 = 1;
					return 1;
				}
			}
			else if (func_36(&uLocal_409, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_392 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_55();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_43();
		func_38();
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
		func_57();
	}
	return 0;
}

void func_38()
{
	if (!func_39())
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

int func_39()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_42())
	{
		return 0;
	}
	if (func_40(player_id()))
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

bool func_40(int iParam0)
{
	return func_41(iParam0, 20);
}

var func_41(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_42()
{
	return -1;
}

void func_43()
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

void func_44()
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

int func_45()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
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

void func_47()
{
	if (func_54(14))
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
		Global_20266 = func_48();
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

int func_48()
{
	func_49();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_49()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_52(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_51(player_ped_id());
			if (func_50(iVar0) && (!func_54(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_50(Global_113386.f_2363.f_539.f_4321))
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

bool func_50(int iParam0)
{
	return iParam0 < 3;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_54(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_55()
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

bool func_56(int iParam0, int iParam1)
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

void func_57()
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_59()
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_60())
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

int func_60()
{
	if (_get_number_of_references_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_408)
	{
		if (iLocal_408[iVar0] == iParam1)
		{
			func_63(&uLocal_409, iVar0);
			iLocal_408[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_408[iParam0] != 0)
	{
		func_63(&uLocal_409, iParam0);
	}
	func_62(&uLocal_409, iParam0, iParam1, sParam2, 0, 1);
	iLocal_408[iParam0] = iParam1;
}

void func_62(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_63(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_64(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (is_string_null_or_empty(sLocal_51) || !are_strings_equal(sLocal_51, sParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_77[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_63(&Local_77, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_65()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

int func_66(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!is_message_being_displayed() || is_subtitle_preference_switched_on())
	{
		if (func_68(iParam1) != iParam2 || iParam2 == 0)
		{
			func_61(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_68(iParam4) != iParam5 || iParam5 == 0)
			{
				func_61(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_68(iParam7) != iParam8 || iParam8 == 0)
			{
				func_61(iParam7, iParam8, sParam9);
			}
		}
		if (func_67(&uLocal_409, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_58(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_37(sParam3, iParam4, bParam7);
}

int func_68(int iParam0)
{
	return iLocal_408[iParam0];
}

int func_69(int iParam0)
{
	if ((Global_22719 || Global_22718) || Global_22720)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 10)
		{
			if (Global_7451 == iParam0)
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
	return 0;
}

void func_70()
{
	Global_20471 = 0;
	func_71();
}

void func_71()
{
	if (is_mobile_phone_call_ongoing() || Global_20265 == 1)
	{
		restart_scripted_conversation();
		Global_22616 = 0;
		stop_scripted_conversation(false);
		Global_21605 = 6;
		Global_20266.f_1 = Global_20268;
		return;
	}
}

void func_72()
{
	Global_20471 = 0;
	func_57();
}

float func_73(int iParam0, struct<3> Param1, bool bParam2)
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

int func_74(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_75(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_76(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_76(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = get_players_last_vehicle();
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_a_mission_entity(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, false);
			iVar3 = 1;
		}
		if (is_vehicle_driveable(iVar0, false))
		{
			if (bParam10)
			{
				func_83(iVar0);
			}
			if (is_entity_in_angled_area(iVar0, Param0, Param1, fParam2, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { get_entity_coords(iVar0, true) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_80(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (is_vehicle_driveable(iVar0, false))
			{
				if (is_vehicle_model(iVar0, joaat("taxi")))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1, false) != player_ped_id() && get_ped_in_vehicle_seat(iVar0, -1, false) != 0)
					{
						if (get_distance_between_coords(Param0 + Param1 / Vector(2f, 2f, 2f), get_entity_coords(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_78(iVar0, func_48(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_77(Param5))
				{
					if (is_vehicle_driveable(iVar0, false))
					{
						iVar7 = get_entity_model(iVar0);
						_get_vehicle_suspension_bounds(iVar0, &Var4, &Var5);
						if (is_this_model_a_heli(iVar7))
						{
							Param5.f_0 = (Param5.f_0 + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.f_0 - Var4.f_0) > Param5.f_0)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (is_vehicle_driveable(iVar0, false))
				{
					if (bVar2)
					{
						clear_area_of_vehicles(Param3, 5f, false, false, false, false, false, false, 0);
						set_entity_heading(iVar0, fParam4);
						set_entity_coords(iVar0, Param3, true, false, false, true);
						set_vehicle_on_ground_properly(iVar0, 5f);
						if (bParam9)
						{
							set_vehicle_engine_on(iVar0, false, true, false);
							set_vehicle_doors_shut(iVar0, true);
						}
					}
					else
					{
						if (!is_entity_a_mission_entity(iVar0) || !does_entity_belong_to_this_script(iVar0, true))
						{
							set_entity_as_mission_entity(iVar0, true, true);
						}
						if (is_ped_in_vehicle(player_ped_id(), iVar0, false))
						{
							set_entity_coords(player_ped_id(), get_entity_coords(iVar0, true), true, false, false, true);
						}
						delete_vehicle(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				clear_angled_area_of_vehicles(Param0, Param1, fParam2, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (does_entity_exist(iVar0))
				{
					if (is_entity_a_mission_entity(iVar0))
					{
						set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!is_entity_a_mission_entity(iVar0))
			{
				set_entity_as_mission_entity(iVar0, true, false);
			}
			iVar8 = get_ped_in_vehicle_seat(iVar0, -1, false);
			if (does_entity_exist(iVar8) && !is_ped_injured(iVar8))
			{
				set_entity_coords(iVar8, get_entity_coords(iVar8, true), true, false, false, true);
			}
			iVar9 = get_vehicle_model_number_of_seats(get_entity_model(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = get_ped_in_vehicle_seat(iVar0, 0, false);
				if (does_entity_exist(iVar8) && !is_ped_injured(iVar8))
				{
					set_entity_coords(iVar8, get_entity_coords(iVar8, true), true, false, false, true);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = get_ped_in_vehicle_seat(iVar0, 1, false);
				if (does_entity_exist(iVar8) && !is_ped_injured(iVar8))
				{
					set_entity_coords(iVar8, get_entity_coords(iVar8, true), true, false, false, true);
				}
				iVar8 = get_ped_in_vehicle_seat(iVar0, 2, false);
				if (does_entity_exist(iVar8) && !is_ped_injured(iVar8))
				{
					set_entity_coords(iVar8, get_entity_coords(iVar8, true), true, false, false, true);
				}
			}
			delete_vehicle(&iVar0);
		}
	}
}

int func_77(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_79(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_80(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_82(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.f_0 = -Var1.f_1;
		Var0.f_1 = Var1.f_0;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		get_model_dimensions(get_entity_model(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { get_offset_from_entity_in_world_coords(iParam0, Var7.f_0, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { get_offset_from_entity_in_world_coords(iParam0, Var7.f_0, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { get_offset_from_entity_in_world_coords(iParam0, Var8.f_0, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { get_offset_from_entity_in_world_coords(iParam0, Var8.f_0, Var8.f_1, 0f) };
		if (((((((((((((((func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_81(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_81(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_81(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_81(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param2.f_0;
	fVar3 = Param2.f_1;
	fVar4 = Param4.f_0;
	fVar5 = Param4.f_1;
	fVar6 = Param6.f_0;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_82(struct<3> Param0)
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

void func_83(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			if (get_vehicle_engine_health(iParam0) <= 200f)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
			if (get_vehicle_petrol_tank_health(iParam0) <= 700f)
			{
				set_vehicle_engine_health(iParam0, 900f);
			}
			if (get_entity_health(iParam0) < 200)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

void func_84()
{
	if (iLocal_149 >= 3)
	{
		if (iLocal_149 > 3)
		{
			func_109(&Local_119, &Local_130, Local_123, Local_124, Local_125, Local_126, Local_122, Local_129, Local_120, Local_121, Local_127, Local_128);
		}
		func_85();
	}
}

void func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_119.f_0)
	{
		if ((!is_ped_injured(Local_113[iVar0 /*33*/]) && !is_ped_dead_or_dying(Local_113[iVar0 /*33*/], true)) || Local_119[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_119[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_113[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2451.818f, 4985.704f, 50.5678f, 227.842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2462.887f, 4993.614f, 44.9474f, 89.8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 1, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2460.651f, 4970.813f, 45.5765f, 240.2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
										func_105(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2443.138f, 4966.709f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_149 == 3)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2457.098f, 4954.283f, 44.1304f, 316.5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, true, true, false);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, true, true, false);
										Local_113[iVar0 /*33*/].f_5 = 1;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_149 == 3)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, true, true, false);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = create_object(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, true, true, false);
										Local_113[iVar0 /*33*/].f_5++;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_14 = create_synchronized_scene(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										func_104(Local_113[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										set_ambient_voice_name(Local_113[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										task_synchronized_scene(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1000f, 0);
										set_synchronized_scene_looped(Local_113[iVar0 /*33*/].f_14, true);
										force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
										func_105(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_113[iVar0 /*33*/].f_14 = create_synchronized_scene(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										set_synchronized_scene_looped(Local_113[iVar0 /*33*/].f_14, true);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										task_synchronized_scene(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1000f, 0);
										force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
										func_105(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (does_entity_exist(Local_113[iVar0 /*33*/]))
							{
								set_entity_load_collision_flag(Local_113[iVar0 /*33*/], true, 1);
								set_ped_to_load_cover(Local_113[iVar0 /*33*/], true);
							}
							break;
						
						case 2:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2458.57f, 4987.584f, 45.8107f, 233.842f, joaat("weapon_pistol"), 0, 0))
										{
											func_105(iVar0, 14, 0, 0);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2454.627f, 4995.726f, 45.2011f, 233.842f, joaat("weapon_pistol"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2442.994f, 4985.164f, 45.8103f, 303.409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
											func_105(iVar0, 14, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2450.371f, 4995.103f, 44.9282f, 303.409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2431.485f, 4964.779f, 45.8106f, -137.5f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2440.385f, 4965.429f, 45.8106f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2439.741f, 4964.89f, 45.8106f, 130.3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2438.707f, 4964.094f, 45.8106f, 127.6523f, joaat("weapon_pistol"), 0, 1))
									{
										set_ped_accuracy(Local_113[iVar0 /*33*/], 5);
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2440.929f, 4976.921f, 45.8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2452.052f, 4956.689f, 43.8957f, 230.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_105(iVar0, 23, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2442.926f, 4975.148f, 45.8106f, 46.7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2449.338f, 4954.127f, 43.9299f, 46.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2449.114f, 4981.984f, 45.8102f, 130.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 32;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_02"), 2447.553f, 4980.515f, 45.8096f, 311.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!is_ped_injured(Local_113[iVar0 /*33*/]))
							{
								set_entity_load_collision_flag(Local_113[iVar0 /*33*/], true, 1);
							}
							break;
						
						case 5:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_107(iVar0, joaat("a_m_m_hillbilly_01"), 2439.258f, 4976.201f, 45.8106f, 116.815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_105(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_107(iVar0, joaat("a_m_y_methhead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_105(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!is_ped_injured(Local_113[iVar0 /*33*/]))
					{
						_set_entity_cleanup_by_engine(Local_113[iVar0 /*33*/], true);
						Local_119[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_119[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_113[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
										{
											if (does_entity_have_drawable(Local_113[iVar0 /*33*/].f_20) && does_entity_have_physics(Local_113[iVar0 /*33*/].f_20))
											{
												attach_entity_to_entity(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], get_ped_bone_index(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
											if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													task_play_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												else
												{
													task_play_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												set_entity_load_collision_flag(Local_113[iVar0 /*33*/], true, 1);
												force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_113[iVar0 /*33*/].f_5 < 7)
								{
									func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
								}
								if (is_entity_playing_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									set_entity_anim_speed(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (is_entity_playing_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									set_entity_anim_speed(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
								{
									if (Local_113[iVar0 /*33*/].f_5 > 2 && Local_113[iVar0 /*33*/].f_5 <= 6)
									{
										if (is_entity_attached(Local_113[iVar0 /*33*/].f_20))
										{
											Local_113[iVar0 /*33*/].f_12 = (func_102(get_entity_coords(Local_113[iVar0 /*33*/], true), Local_113[iVar0 /*33*/].f_6, 1) - get_entity_heading(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_12 = func_101((Local_113[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!is_ped_ragdoll(Local_113[iVar0 /*33*/]))
											{
												set_entity_heading(Local_113[iVar0 /*33*/], (get_entity_heading(Local_113[iVar0 /*33*/]) + (timestep() * Local_113[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
										{
											if (does_entity_have_drawable(Local_113[iVar0 /*33*/].f_20) && does_entity_have_physics(Local_113[iVar0 /*33*/].f_20))
											{
												attach_entity_to_entity(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], get_ped_bone_index(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												func_32(20, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
										{
											if (func_73(Local_113[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 1) < 99f)
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													task_play_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												else
												{
													task_play_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
												set_entity_load_collision_flag(Local_113[iVar0 /*33*/], true, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (is_entity_playing_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || is_entity_playing_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2466.903f, 4996.254f, 45.5443f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (is_entity_at_coord(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2461.332f, 4998.94f, 45.359f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (is_entity_at_coord(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2455.984f, 4997.404f, 45.2645f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (is_entity_at_coord(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (Local_113[iVar0 /*33*/].f_2 == 5)
											{
												Local_113[iVar0 /*33*/].f_6 = { 2452.091f, 4993.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_6 = { 2454.091f, 4995.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (is_entity_at_coord(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (is_entity_playing_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												stop_anim_task(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (is_entity_playing_anim(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												stop_anim_task(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
											{
												detach_entity(Local_113[iVar0 /*33*/].f_20, false, true);
											}
											if (func_74(iLocal_145))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													set_ped_movement_clipset(Local_113[iVar0 /*33*/], "move_m@gangster@var_e", 0.25f);
													task_enter_vehicle(Local_113[iVar0 /*33*/], iLocal_145, -1, -1, 1f, 1, 0);
													func_105(func_18(6), 14, 0, 0);
													func_105(func_18(7), 33, 0, 0);
												}
												else
												{
													set_ped_movement_clipset(Local_113[iVar0 /*33*/], "move_m@gangster@var_f", 0.25f);
													task_enter_vehicle(Local_113[iVar0 /*33*/], iLocal_145, -1, 0, 1f, 1, 0);
												}
											}
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = 0;
											Local_113[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_100(iVar0);
										if (is_ped_in_any_vehicle(Local_113[iVar0 /*33*/], false))
										{
											set_entity_load_collision_flag(Local_113[iVar0 /*33*/], false, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_74(iLocal_145))
										{
											if (!is_vehicle_seat_free(iLocal_145, -1, false))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													if (!is_vehicle_seat_free(iLocal_145, 0, false))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!is_ped_injured(Local_113[iVar1 /*33*/]))
															{
																if (is_ped_sitting_in_any_vehicle(Local_113[iVar1 /*33*/]))
																{
																	func_99();
																	task_vehicle_drive_to_coord(0, iLocal_145, 2367.668f, 5098.645f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	task_vehicle_drive_wander(0, iLocal_145, 19f, 786599);
																	func_98(&(Local_113[iVar0 /*33*/]), 0);
																	func_97(25, 1);
																	Local_113[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!is_vehicle_seat_free(iLocal_145, 0, false))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 5)
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										task_follow_nav_mesh_to_coord(0, 2459.646f, 4977.735f, 50.5678f, 1f, 20000, 0.25f, false, 40000f);
										task_follow_nav_mesh_to_coord(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 0.25f, false, 40000f);
										task_ped_slide_to_coord(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 0.75f);
										task_achieve_heading(0, 92.5678f, 0);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											func_105(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_105(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_99();
										task_follow_nav_mesh_to_coord(0, 2450.491f, 4986.83f, 50.5677f, 1f, 20000, 0.25f, false, 40000f);
										task_achieve_heading(0, 309.5567f, 0);
										task_pause(0, 2000);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (get_script_task_status(Local_113[iVar0 /*33*/], 993674639) == 7 && Local_113[iVar0 /*33*/].f_5 > 1)
								{
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										set_current_ped_weapon(Local_113[iVar0 /*33*/], joaat("weapon_unarmed"), true);
										task_achieve_heading(Local_113[iVar0 /*33*/], 219f, 1500);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 1920390111) == 7)
										{
											task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!is_ped_injured(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(player_ped_id(), Local_113[iVar0 /*33*/], 1) < 20f)
									{
										func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
									}
									if (Local_113[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_113[iVar0 /*33*/].f_5)
									{
										case 0:
											task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_113[iVar0 /*33*/].f_14, false);
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(player_ped_id(), Local_113[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = get_random_int_in_range(0, 3);
												if (iVar3 == 0)
												{
													play_ped_ambient_speech_with_voice_native(Local_113[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												else if (iVar3 == 1)
												{
													play_ped_ambient_speech_with_voice_native(Local_113[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												else
												{
													play_ped_ambient_speech_with_voice_native(Local_113[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = (get_game_timer() + get_random_int_in_range(5000, 10000));
											}
											break;
										
										case 2:
											if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
											{
												Local_113[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 1000;
											}
											break;
										
										case 11:
											if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
											{
												task_turn_ped_to_face_coord(Local_113[iVar0 /*33*/], get_entity_coords(player_ped_id(), true), 5000);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 5000;
											}
											break;
										
										case 12:
											if (can_ped_hear_player(player_id(), Local_113[iVar0 /*33*/]) && func_73(Local_113[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (get_game_timer() > (Local_113[iVar0 /*33*/].f_14 - 3000))
												{
													task_follow_nav_mesh_to_coord(Local_113[iVar0 /*33*/], get_entity_coords(player_ped_id(), true), 1f, 20000, 0.25f, false, 40000f);
													Local_113[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_99();
											task_follow_nav_mesh_to_coord(0, 2449.114f, 4981.984f, 45.8102f, 1f, 20000, 0.25f, false, 40000f);
											task_achieve_heading(0, 127.6328f, 3000);
											func_98(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 3000;
											Local_113[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (get_game_timer() > Local_113[iVar0 /*33*/].f_14 || get_script_task_status(Local_113[iVar0 /*33*/], 242628503) == 7)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (get_script_task_status(Local_113[iVar0 /*33*/], 713668775) == 7)
											{
												Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 3000;
												Local_113[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 3000;
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
										{
											if (func_74(iLocal_145))
											{
												task_enter_vehicle(Local_113[iVar0 /*33*/], iLocal_145, 20000, 1, 1f, 1, 0);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = 0;
												Local_113[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_100(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_113[iVar0 /*33*/].f_1 == 1 || func_4(player_ped_id(), Local_113[iVar0 /*33*/], 1) < 20f)
								{
									func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (get_current_ped_weapon(Local_113[iVar0 /*33*/], &iVar4, true))
										{
											task_swap_weapon(Local_113[iVar0 /*33*/], false);
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!get_current_ped_weapon(Local_113[iVar0 /*33*/], &iVar4, true))
										{
											func_99();
											if (iVar0 == 1)
											{
												if (!is_ped_injured(Local_113[2 /*33*/]))
												{
													task_turn_ped_to_face_entity(0, Local_113[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!is_ped_injured(Local_113[1 /*33*/]))
												{
													task_turn_ped_to_face_entity(0, Local_113[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!is_ped_injured(Local_113[7 /*33*/]))
												{
													task_turn_ped_to_face_entity(0, Local_113[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!is_ped_injured(Local_113[6 /*33*/]))
												{
													task_turn_ped_to_face_entity(0, Local_113[6 /*33*/], 2000);
												}
											}
											if (Local_113[iVar0 /*33*/].f_14 != 0)
											{
												task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_113[iVar0 /*33*/].f_14, false);
											}
											else
											{
												task_start_scenario_in_place(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
											}
											func_98(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_15 = get_game_timer() + 15000;
										}
										break;
									
									case 2:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 242628503) == 7 || get_game_timer() > Local_113[iVar0 /*33*/].f_15)
										{
											clear_ped_tasks(Local_113[iVar0 /*33*/]);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												task_swap_weapon(Local_113[iVar0 /*33*/], true);
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 716706914) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, false);
										force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, false);
										force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 993674639) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, false);
										force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, false);
										force_ped_ai_and_animation_update(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_113[iVar0 /*33*/].f_5 < 10)
								{
									if (can_ped_hear_player(player_id(), Local_113[iVar0 /*33*/]))
									{
										Local_113[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										request_anim_dict("misscarsteal2peeing");
										Local_113[iVar0 /*33*/].f_5++;
										Local_113[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (has_anim_dict_loaded("misscarsteal2peeing"))
										{
											task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, true);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(player_ped_id(), Local_113[iVar0 /*33*/], 1) < 21.6f)
										{
											task_play_anim(Local_113[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0f, false, false, false);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 23000;
										}
										break;
									
									case 3:
										if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
										{
											Local_113[iVar0 /*33*/].f_14 = -1;
											task_start_scenario_in_place(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, true);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										task_follow_nav_mesh_to_coord(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 0.25f, false, 40000f);
										task_start_scenario_in_place(0, "WORLD_HUMAN_BINOCULARS", 0, false);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_113[iVar0 /*33*/].f_2)
										{
											case 12:
												if (does_scenario_exist_in_area(2433.04f, 4967.87f, 46.28f, 0.8f, false))
												{
													task_use_nearest_scenario_to_coord_warp(Local_113[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (does_scenario_exist_in_area(2432.56f, 4968.38f, 46.27f, 0.8f, false))
												{
													task_use_nearest_scenario_to_coord_warp(Local_113[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (does_scenario_exist_in_area(2433.12f, 4965.59f, 46.27f, 0.8f, false))
												{
													task_use_nearest_scenario_to_coord_warp(Local_113[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (does_scenario_exist_in_area(2439.61f, 4960.99f, 46.27f, 0.4f, false))
												{
													task_use_nearest_scenario_to_coord_warp(Local_113[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (does_scenario_exist_in_area(2440.16f, 4962.99f, 46.27f, 0.4f, false))
												{
													task_use_nearest_scenario_to_coord_warp(Local_113[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (does_scenario_exist_in_area(2438.23f, 4962.25f, 46.27f, 0.4f, false))
												{
													task_use_nearest_scenario_to_coord_warp(Local_113[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (get_script_task_status(Local_113[iVar0 /*33*/], 1647992574) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (is_player_targetting_entity(player_id(), Local_113[iVar0 /*33*/]) || (func_96(get_entity_coords(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && is_entity_in_angled_area(player_ped_id(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, false, true, 0)))
										{
											task_hands_up(Local_113[iVar0 /*33*/], 20000, 0, -1, false);
											Local_113[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_113[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (is_player_targetting_entity(player_id(), Local_113[iVar0 /*33*/]) || (func_96(get_entity_coords(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && is_entity_in_angled_area(player_ped_id(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, false, true, 0)))
										{
											if (func_35("TRV1", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 2000;
											}
										}
										else
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 2000;
										}
										break;
									
									case 4:
										if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
										{
											task_smart_flee_ped(Local_113[iVar0 /*33*/], player_ped_id(), 200f, 200000, false, false);
											set_ped_keep_task(Local_113[iVar0 /*33*/], true);
											set_ped_as_no_longer_needed(&(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!is_ped_injured(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_5 < 8)
									{
										if (has_ped_been_damaged_by_weapon(Local_113[iVar0 /*33*/], 0, 2))
										{
											if (!has_ped_got_weapon(Local_113[iVar0 /*33*/], 0, 2))
											{
												give_weapon_to_ped(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), -1, false, true);
												task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
												func_94();
												set_blocking_of_non_temporary_events(Local_113[iVar0 /*33*/], false);
												task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
												set_ped_relationship_group_hash(Local_113[iVar0 /*33*/], iLocal_116);
												Local_113[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										request_anim_dict("misschinese2_crystalmaze");
										request_weapon_asset(joaat("weapon_sawnoffshotgun"), 31, 0);
										set_blocking_of_non_temporary_events(Local_113[iVar0 /*33*/], true);
										set_ped_relationship_group_hash(Local_113[iVar0 /*33*/], iLocal_116);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (has_anim_dict_loaded("misschinese2_crystalmaze") && has_weapon_asset_loaded(joaat("weapon_sawnoffshotgun")))
										{
											if (!is_ped_injured(Local_113[iVar0 /*33*/]))
											{
												iLocal_370 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												set_synchronized_scene_looped(iLocal_370, true);
												task_synchronized_scene(Local_113[iVar0 /*33*/], iLocal_370, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1000f, 0);
												if (!does_entity_exist(iLocal_373))
												{
													iLocal_373 = create_weapon_object(joaat("weapon_sawnoffshotgun"), 40, 2433.59f, 4969.7f, 42.1854f, true, 1f, 0, 0, 1);
													set_entity_rotation(iLocal_373, 90f, 0f, 0f, 2, true);
												}
												task_look_at_entity(Local_113[iVar0 /*33*/], player_ped_id(), -1, 0, 2);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_149 == 4 || iLocal_149 == 5) || iLocal_149 == 6)
										{
											if (func_93(11))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_149 > 6)
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										iLocal_369 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										task_synchronized_scene(Local_113[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1000f, 0);
										task_look_at_entity(Local_113[iVar0 /*33*/], player_ped_id(), -1, 0, 2);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										if ((is_synchronized_scene_running(iLocal_369) && get_synchronized_scene_phase(iLocal_369) > 0.98f) || !is_synchronized_scene_running(iLocal_369))
										{
											Local_113[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((is_synchronized_scene_running(iLocal_369) && get_synchronized_scene_phase(iLocal_369) > 0.98f) || !is_synchronized_scene_running(iLocal_369))
										{
											iLocal_368 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											set_synchronized_scene_looped(iLocal_368, true);
											task_synchronized_scene(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = (get_game_timer() + get_random_int_in_range(1000, 2000));
										}
										break;
									
									case 6:
										if (!is_synchronized_scene_running(iLocal_371) || iLocal_371 == 0)
										{
											if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
											{
												iLocal_371 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (get_random_int_in_range(0, 2) == 1)
												{
													task_synchronized_scene(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1000f, 0);
												}
												else
												{
													task_synchronized_scene(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1000f, 0);
												}
											}
										}
										if (!is_synchronized_scene_running(iLocal_368) || iLocal_368 == 0)
										{
											if ((is_synchronized_scene_running(iLocal_371) && get_synchronized_scene_phase(iLocal_371) > 0.98f) || !is_synchronized_scene_running(iLocal_371))
											{
												iLocal_368 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												set_synchronized_scene_looped(iLocal_368, true);
												task_synchronized_scene(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
												Local_113[iVar0 /*33*/].f_14 = (get_game_timer() + get_random_int_in_range(1000, 2000));
											}
										}
										if (!func_65() || (func_73(player_ped_id(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !is_entity_in_angled_area(player_ped_id(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, false, true, 0)))
										{
											func_91();
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_372 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										task_synchronized_scene(Local_113[iVar0 /*33*/], iLocal_372, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1000f, 0);
										give_weapon_object_to_ped(iLocal_373, Local_113[iVar0 /*33*/]);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((is_synchronized_scene_running(iLocal_372) && get_synchronized_scene_phase(iLocal_372) > 0.98f) || !is_synchronized_scene_running(iLocal_372))
										{
											set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
											clear_ped_tasks(Local_113[iVar0 /*33*/]);
											task_aim_gun_at_entity(Local_113[iVar0 /*33*/], player_ped_id(), -1, true);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_65())
										{
											if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												set_blocking_of_non_temporary_events(Local_113[iVar0 /*33*/], false);
												task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
												Local_113[iVar0 /*33*/].f_14 = (get_game_timer() + get_random_int_in_range(3000, 4000));
												Local_113[iVar0 /*33*/].f_15 = 0;
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
										{
											if (Local_113[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
													Local_113[iVar0 /*33*/].f_14 = (get_game_timer() + get_random_int_in_range(3000, 4000));
													Local_113[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!is_ped_injured(Local_113[iVar0 /*33*/]))
								{
									if (is_bullet_in_area(get_entity_coords(Local_113[iVar0 /*33*/], true), 2f, true))
									{
										Local_113[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_90("FRMFLC", 0, 0))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_113[iVar0 /*33*/], "oneilcook", 2, player_ped_id(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = get_game_timer() + 1300;
										}
										break;
									
									case 2:
										if (get_game_timer() > Local_113[iVar0 /*33*/].f_14)
										{
											task_hands_up(Local_113[iVar0 /*33*/], 20000, 0, -1, false);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_65())
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_65())
										{
											func_105(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										task_smart_flee_ped(Local_113[iVar0 /*33*/], player_ped_id(), 50f, 1000, false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_88("WRK2"))
										{
											if (get_current_scripted_conversation_line() == 1 || get_current_scripted_conversation_line() == 5)
											{
												func_87(0);
											}
											else
											{
												func_87(1);
											}
										}
										func_105(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										task_set_blocking_of_non_temporary_events(0, true);
										task_smart_flee_ped(0, player_ped_id(), 200f, 999999, false, false);
										task_cower(0, -1);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										set_ped_keep_task(Local_113[iVar0 /*33*/], true);
										set_ped_as_no_longer_needed(&(Local_113[iVar0 /*33*/]));
										if (does_blip_exist(Local_113[iVar0 /*33*/].f_19))
										{
											remove_blip(&(Local_113[iVar0 /*33*/].f_19));
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_376 == 1)
								{
									if (is_synchronized_scene_running(Local_113[iVar0 /*33*/].f_14))
									{
										set_synchronized_scene_phase(Local_113[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_376 = 0;
									}
								}
								if (iLocal_377 == 1)
								{
									if (is_synchronized_scene_running(Local_113[iVar0 /*33*/].f_14))
									{
										set_synchronized_scene_phase(Local_113[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_377 = 0;
									}
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_113[iVar0 /*33*/].f_2 == 8)
								{
									if (is_synchronized_scene_running(Local_113[iVar0 /*33*/].f_14))
									{
										if (Local_113[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_149 == 3)
											{
												if (get_script_task_status(Local_113[iVar0 /*33*/], 1785177548) == 1)
												{
													if (get_synchronized_scene_phase(Local_113[iVar0 /*33*/].f_14) > 0.024f && get_synchronized_scene_phase(Local_113[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!is_ped_injured(Local_113[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (get_current_ped_weapon(Local_113[iVar0 /*33*/], &iVar6, true))
															{
																set_ped_accuracy(Local_113[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_86(&iVar5))
																	{
																		set_ammo_in_clip(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		set_ped_shoots_at_coord(Local_113[iVar0 /*33*/], get_entity_coords(iLocal_170[iVar5], true), false);
																		func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		set_ammo_in_clip(Local_113[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		set_ped_shoots_at_coord(Local_113[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, false);
																		func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 1)
										{
											if (get_synchronized_scene_phase(Local_113[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_113[iVar0 /*33*/].f_5 = 2;
												if (iLocal_374 == 0)
												{
													play_ped_ambient_speech_with_voice_native(Local_113[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 2)
										{
											if (get_synchronized_scene_phase(Local_113[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_113[iVar0 /*33*/].f_5 == 3)
								{
									if (get_script_task_status(Local_113[iVar0 /*33*/], 2106541073) == 7)
									{
										func_105(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_119[iVar0 /*24*/].f_20)
					{
						switch (Local_113[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, false, false);
										task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
										set_ped_combat_attributes(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_113[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, false, false);
										task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
										set_ped_combat_attributes(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_113[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, false, false);
										task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_93(18))
										{
											remove_ped_defensive_area(Local_113[iVar0 /*33*/], false);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
										set_ped_combat_attributes(Local_113[iVar0 /*33*/], 50, true);
										if (iLocal_114 == 0)
										{
											remove_ped_defensive_area(Local_113[iVar0 /*33*/], false);
											set_ped_sphere_defensive_area(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, false, false);
											iLocal_114++;
											Local_119[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_119[iVar0 /*24*/].f_4 = (get_game_timer() + iLocal_114 * 4000);
											iLocal_114++;
										}
										Local_113[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_73(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 1) < 3f)
										{
											remove_ped_defensive_area(Local_113[iVar0 /*33*/], false);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (get_game_timer() > Local_119[iVar0 /*24*/].f_4)
										{
											remove_ped_defensive_area(Local_113[iVar0 /*33*/], false);
											set_ped_sphere_defensive_area(Local_113[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, false, false);
											Local_119[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_113[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, false, false);
										task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_113[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, false, false);
										task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										set_ped_angled_defensive_area(Local_113[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, false, false);
										task_combat_ped(Local_113[iVar0 /*33*/], player_ped_id(), 0, 16);
										set_ped_target_loss_response(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_86(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = get_random_int_in_range(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (does_entity_exist(iLocal_170[*iParam0]) && is_entity_in_angled_area(iLocal_170[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, false, true, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_170)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_87(bool bParam0)
{
	iLocal_392 = 0;
	if (bParam0)
	{
		func_91();
	}
	else
	{
		func_94();
	}
}

int func_88(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_89() };
	if (are_strings_equal(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

bool func_90(char* sParam0, int iParam1, char* sParam2)
{
	begin_text_command_is_message_displayed(sParam0);
	if (iParam1 == 1)
	{
		add_text_component_substring_text_label(sParam2);
	}
	return end_text_command_is_message_displayed();
}

void func_91()
{
	Global_20471 = 0;
	func_92();
}

void func_92()
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

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388.f_0)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

void func_94()
{
	Global_20471 = 0;
	func_95();
}

void func_95()
{
	restart_scripted_conversation();
	Global_22616 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_21605 = 6;
	}
}

int func_96(struct<3> Param0, float fParam1, float fParam2)
{
	if (is_sphere_visible(Param0, fParam1))
	{
		if (!is_entity_at_coord(player_ped_id(), Param0, fParam2, fParam2, fParam2, false, false, 0))
		{
			return 0;
		}
		else if (is_screen_faded_out())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388.f_0)
	{
		if (iParam0 == Local_388[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_388[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_388[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		set_sequence_to_repeat(iLocal_81, true);
	}
	close_sequence_task(iLocal_81);
	if (!is_ped_dead_or_dying(*iParam0, true))
	{
		task_perform_sequence(*iParam0, iLocal_81);
	}
	clear_sequence_task(&iLocal_81);
}

void func_99()
{
	open_sequence_task(&iLocal_81);
}

void func_100(int iParam0)
{
	Local_113[iParam0 /*33*/].f_15 = (Local_113[iParam0 /*33*/].f_15 + floor((timestep() * 1000f)));
	switch (Local_113[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_113[iParam0 /*33*/].f_15 > 2000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 0))
			{
				task_look_at_coord(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 4000, 0, 2);
				set_bit(&(Local_113[iParam0 /*33*/].f_14), false);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 8000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 1))
			{
				task_look_at_coord(Local_113[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 6000, 0, 2);
				set_bit(&(Local_113[iParam0 /*33*/].f_14), true);
			}
			break;
		
		case 5:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 0))
			{
				if (!is_ped_injured(Local_113[6 /*33*/]))
				{
					task_look_at_entity(Local_113[iParam0 /*33*/], Local_113[6 /*33*/], 4000, 0, 2);
					set_bit(&(Local_113[iParam0 /*33*/].f_14), false);
				}
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 11000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 1))
			{
				task_look_at_coord(Local_113[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 7000, 0, 2);
				set_bit(&(Local_113[iParam0 /*33*/].f_14), true);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 20000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 2))
			{
				task_look_at_coord(Local_113[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 7000, 0, 2);
				set_bit(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 0))
			{
				task_look_at_coord(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 5000, 0, 2);
				set_bit(&(Local_113[iParam0 /*33*/].f_14), false);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 10000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 1))
			{
				task_look_at_coord(Local_113[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 6000, 0, 2);
				set_bit(&(Local_113[iParam0 /*33*/].f_14), true);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 18000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 2))
			{
				task_look_at_coord(Local_113[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 6000, 0, 2);
				set_bit(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

float func_101(float fParam0, float fParam1, float fParam2)
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

float func_102(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_103(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = get_player_index();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!is_ped_injured(iParam0))
	{
		if (!does_ped_have_ai_blip(iParam0))
		{
			bVar0 = true;
			if (is_ped_in_flying_vehicle(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					set_ped_has_ai_blip(iParam0, true);
				}
				else
				{
					_set_ped_has_ai_blip_with_color(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				set_ped_ai_blip_gang_id(iParam0, iParam2);
				set_ped_ai_blip_notice_range(iParam0, fParam6);
				if (does_blip_exist(*uParam1))
				{
					set_blip_priority(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			_set_ped_ai_blip_sprite(iParam0, iParam9);
		}
		set_ped_ai_blip_forced_on(iParam0, bParam4);
		set_ped_ai_blip_has_cone(iParam0, bParam5);
		*uParam1 = _get_ai_blip_2(iParam0);
		if (!iParam9 == -1)
		{
			if (does_blip_exist(*uParam1))
			{
				if (!iParam8 == -1)
				{
					set_blip_colour(*uParam1, iParam8);
				}
				if (!is_string_null_or_empty(sParam7))
				{
					begin_text_command_set_blip_name("STRING");
					if (bParam10)
					{
						add_text_component_substring_player_name(sParam7);
					}
					else
					{
						add_text_component_substring_text_label(sParam7);
					}
					end_text_command_set_blip_name(*uParam1);
				}
				set_blip_priority(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (does_blip_exist(*uParam1))
			{
				set_bit(&(uParam1->f_6), 2);
			}
		}
		if (is_ped_in_any_vehicle(iParam0, false))
		{
			uParam1->f_1 = _get_ai_blip(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (does_blip_exist(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						set_blip_colour(uParam1->f_1, iParam8);
					}
					if (!is_string_null_or_empty(sParam7))
					{
						begin_text_command_set_blip_name("STRING");
						if (bParam10)
						{
							add_text_component_substring_player_name(sParam7);
						}
						else
						{
							add_text_component_substring_text_label(sParam7);
						}
						end_text_command_set_blip_name(uParam1->f_1);
					}
					set_blip_priority(uParam1->f_1, 7);
					set_bit(&(uParam1->f_6), 3);
				}
			}
			else if (!does_blip_exist(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				clear_bit(&(uParam1->f_6), 3);
			}
		}
		else if (does_blip_exist(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			clear_bit(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_104(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!is_ped_injured(iParam0))
	{
		set_ped_seeing_range(iParam0, fParam1);
		set_ped_visual_field_peripheral_range(iParam0, fParam2);
		set_ped_visual_field_center_angle(iParam0, (fParam3 / 2f));
		set_ped_visual_field_min_angle(iParam0, fParam4);
		set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!is_ped_injured(Local_113[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_113[iParam0 /*33*/].f_4 = Local_113[iParam0 /*33*/].f_3;
			Local_113[iParam0 /*33*/].f_3 = iParam1;
			Local_113[iParam0 /*33*/].f_5 = iParam2;
			Local_113[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_12 = 0f;
			Local_113[iParam0 /*33*/].f_13 = 0f;
			Local_113[iParam0 /*33*/].f_14 = iParam3;
			Local_113[iParam0 /*33*/].f_15 = 0;
			Local_119[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_106(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

int func_107(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam6 = iParam6;
	if (Local_113[iParam0 /*33*/].f_1 != 1 && Local_113[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = get_interior_at_coords(Param2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!is_interior_ready(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_111)
	{
		case 0:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 1, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 2, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_m_hillbilly_02"), Param2, fParam3, true, true);
			set_ped_default_component_variation(Local_113[iParam0 /*33*/]);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			set_ped_component_variation(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_111 > 17)
	{
		Local_113[iParam0 /*33*/] = create_ped(26, joaat("a_m_y_methhead_01"), Param2, fParam3, true, true);
		set_ped_random_component_variation(Local_113[iParam0 /*33*/], 0);
	}
	iLocal_111++;
	if (Local_113[iParam0 /*33*/].f_1 == 5)
	{
		set_blocking_of_non_temporary_events(Local_113[iParam0 /*33*/], true);
		set_ped_relationship_group_hash(Local_113[iParam0 /*33*/], iLocal_117);
	}
	else
	{
		give_weapon_to_ped(Local_113[iParam0 /*33*/], iParam4, 3000, bParam5, true);
		set_ped_relationship_group_hash(Local_113[iParam0 /*33*/], iLocal_116);
		set_ped_as_enemy(Local_113[iParam0 /*33*/], true);
		set_ped_combat_attributes(Local_113[iParam0 /*33*/], 9, true);
		set_ped_hearing_range(Local_113[iParam0 /*33*/], 120f);
		set_ped_seeing_range(Local_113[iParam0 /*33*/], 22f);
		set_ped_id_range(Local_113[iParam0 /*33*/], 22f);
		set_ped_config_flag(Local_113[iParam0 /*33*/], 118, false);
		set_combat_float(Local_113[iParam0 /*33*/], 14, 3f);
		if (Local_113[iParam0 /*33*/].f_1 == 2)
		{
			set_ped_accuracy(Local_113[iParam0 /*33*/], 12);
		}
		else
		{
			set_ped_accuracy(Local_113[iParam0 /*33*/], 45);
		}
		set_ped_dies_when_injured(Local_113[iParam0 /*33*/], true);
		set_entity_only_damaged_by_player(Local_113[iParam0 /*33*/], true);
		set_ped_combat_attributes(Local_113[iParam0 /*33*/], 15, false);
		set_ped_combat_attributes(Local_113[iParam0 /*33*/], 17, false);
		func_108(Local_113[iParam0 /*33*/], 1);
	}
	stop_ped_weapon_firing_when_dropped(Local_113[iParam0 /*33*/]);
	_set_entity_cleanup_by_engine(Local_113[iParam0 /*33*/], true);
	_set_ped_should_play_directed_scenario_exit(Local_113[iParam0 /*33*/], 0f, 0f, 0f);
	_0x5B6010B3CBC29095(Local_113[iParam0 /*33*/], true);
	_0xCEDA60A74219D064(Local_113[iParam0 /*33*/], true);
	set_entity_health(Local_113[iParam0 /*33*/], 150, 0);
	return 1;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_63184[iVar0 /*2*/] != 0)
			{
				if (Global_63184[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_63183)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_63184[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_63184[iVar1 /*2*/] = iParam0;
	Global_63184[iVar1 /*2*/].f_1 = 7;
	Global_63183++;
}

void func_109(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7, struct<3> Param8, struct<3> Param9, struct<3> Param10, struct<3> Param11)
{
	if (iLocal_52 > 0)
	{
		func_121(uParam0, Param8, Param9, Param6, Param7);
		func_113(uParam0, uParam1, Param2, Param3, Param4);
		func_110(uParam0, Param5, Param6, Param7, Param8, Param9, Param10, Param11);
	}
}

void func_110(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7)
{
	if (is_gameplay_cam_rendering())
	{
		if (bLocal_75)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 8)) || (iLocal_60 == 10 && bLocal_53 == 0))
			{
				iLocal_67 = 1;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 1:
					if (iLocal_61 > -1)
					{
						if (!is_ped_dead_or_dying((*uParam0)[iLocal_61 /*24*/], true))
						{
							switch (iLocal_60)
							{
								case 8:
									if (!bLocal_53)
									{
										if (!bLocal_56)
										{
											if (!iLocal_74)
											{
												if (!func_88(Param5.f_1))
												{
													func_94();
													if (func_111(Param5.f_1, Param5.f_2, (*uParam0)[iLocal_61 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_67 = 2;
													}
												}
											}
											else
											{
												iLocal_67 = 2;
											}
										}
										else if (!func_88(Param4.f_1))
										{
											func_94();
											if (func_111(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_61 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 7:
									iLocal_74 = 0;
									func_94();
									if (func_111(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_61 /*24*/], Param1.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 5:
									iLocal_74 = 0;
									func_94();
									if (func_111(Param6.f_1, Param6.f_2, (*uParam0)[iLocal_61 /*24*/], Param6.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_53 && !iLocal_74)
									{
										func_94();
										if (func_111(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_61 /*24*/], Param7.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_67 = 2;
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_56)
									{
										if (((!func_88(Param2.f_1) && !func_88(Param3.f_1)) && !func_88(Param4.f_1)) && !func_88(Param5.f_1))
										{
											iLocal_74 = 0;
											func_94();
											if (func_111(Param2.f_1, Param2.f_2, (*uParam0)[iLocal_61 /*24*/], Param2.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_56)
									{
										if (((!func_88(Param2.f_1) && !func_88(Param3.f_1)) && !func_88(Param4.f_1)) && !func_88(Param5.f_1))
										{
											iLocal_74 = 0;
											func_94();
											if (func_111(Param3.f_1, Param3.f_2, (*uParam0)[iLocal_61 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_53)
										{
											if (func_111(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_61 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_74 = 0;
												iLocal_67 = 2;
											}
										}
										iLocal_67 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 2;
						}
					}
					else
					{
						iLocal_67 = 2;
					}
					break;
				
				case 2:
					if (!func_65())
					{
						iLocal_67 = 0;
					}
					break;
				}
			}
	}
}

int func_111(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_112(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_112(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_112(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_112(iParam10, iParam11, sParam12);
	}
	if (!func_59())
	{
		if (!is_message_being_displayed())
		{
			if (func_36(&Local_77, cLocal_78, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_80 = 0;
				return 1;
			}
			else if (iLocal_79 != get_game_timer())
			{
				iLocal_80++;
				iLocal_79 = get_game_timer();
				if (iLocal_80 >= 10)
				{
					iLocal_80 = 0;
					return 1;
				}
			}
		}
		else
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

void func_112(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_76)
	{
		if (iLocal_76[iVar0] == iParam1)
		{
			func_63(&Local_77, iVar0);
			iLocal_76[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_76[iParam0] != 0)
	{
		func_63(&Local_77, iParam0);
	}
	func_62(&Local_77, iParam0, iParam1, sParam2, 0, 1);
	iLocal_76[iParam0] = iParam1;
}

void func_113(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_ped_dead_or_dying((*uParam0)[iVar0 /*24*/], true) && !is_ped_being_stealth_killed((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((is_ped_using_scenario((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || is_ped_using_scenario((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || get_script_task_status((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!is_ped_injured((*uParam0)[iVar0 /*24*/]))
							{
								clear_ped_tasks((*uParam0)[iVar0 /*24*/]);
							}
							if (!is_ped_dead_or_dying((*uParam0)[iVar0 /*24*/], true))
							{
								set_ped_should_play_immediate_scenario_exit((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (get_script_task_status((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!is_ped_dead_or_dying((*uParam0)[iVar0 /*24*/], true))
									{
										set_ped_should_play_immediate_scenario_exit((*uParam0)[iVar0 /*24*/]);
									}
									if (!is_ped_using_scenario((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !is_ped_using_scenario((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (is_ped_in_any_vehicle((*uParam0)[iVar0 /*24*/], false))
										{
											iVar2 = get_vehicle_ped_is_using((*uParam0)[iVar0 /*24*/]);
											if (is_vehicle_driveable(iVar2, false))
											{
												if (is_playback_going_on_for_vehicle(iVar2))
												{
													Var3 = { get_entity_velocity(iVar2) };
													stop_playback_recorded_vehicle(iVar2);
													set_entity_velocity(iVar2, Var3);
													task_leave_any_vehicle((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!is_ped_in_any_vehicle((*uParam0)[iVar0 /*24*/], false))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (does_entity_exist((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = func_119((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = get_game_timer() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																task_set_blocking_of_non_temporary_events(0, true);
																task_play_anim(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																task_set_blocking_of_non_temporary_events(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																task_set_blocking_of_non_temporary_events(0, true);
																task_play_anim(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																task_set_blocking_of_non_temporary_events(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																task_set_blocking_of_non_temporary_events(0, true);
																task_play_anim(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																task_set_blocking_of_non_temporary_events(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																task_set_blocking_of_non_temporary_events(0, true);
																task_play_anim(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																task_set_blocking_of_non_temporary_events(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														clear_ped_tasks((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															set_current_ped_weapon((*uParam0)[iVar0 /*24*/], get_best_ped_weapon((*uParam0)[iVar0 /*24*/], false), true);
															func_99();
															if (!is_ped_in_any_vehicle((*uParam0)[iVar0 /*24*/], true))
															{
																task_set_blocking_of_non_temporary_events(0, true);
																task_play_anim(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0f, false, false, false);
																task_set_blocking_of_non_temporary_events(0, false);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															task_combat_hated_targets_around_ped(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = get_game_timer() + 3000;
															break;
														
														case 1:
															func_99();
															task_set_blocking_of_non_temporary_events(0, true);
															iVar4 = func_118();
															task_set_blocking_of_non_temporary_events(0, false);
															task_combat_hated_targets_around_ped(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (get_game_timer() + iVar4);
															break;
														
														default:
															if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	set_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 2)
														{
															iLocal_64 = 0;
														}
													}
													if (!is_ped_in_any_vehicle((*uParam0)[iVar0 /*24*/], true))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																set_blocking_of_non_temporary_events((*uParam0)[iVar0 /*24*/], true);
																task_play_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0f, false, false, false);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																set_blocking_of_non_temporary_events((*uParam0)[iVar0 /*24*/], true);
																task_play_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0f, false, false, false);
																set_current_ped_weapon((*uParam0)[iVar0 /*24*/], get_best_ped_weapon((*uParam0)[iVar0 /*24*/], false), true);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			task_play_anim((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, get_random_int_in_range(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			task_play_anim((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, get_random_int_in_range(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (absf((get_entity_heading((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	task_play_anim((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, get_random_int_in_range(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (absf((get_entity_heading((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	task_play_anim((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, get_random_int_in_range(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (get_script_task_status((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (get_game_timer() + get_random_int_in_range(0, 2000));
															break;
														
														default:
															if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (get_game_timer() + get_random_int_in_range(0, 2000));
															break;
														
														default:
															if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_62 = iVar0;
													if (func_115(iVar0, uParam0, "", Param2, Param3, Param4, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_65 == 0)
															{
																if (!is_ped_in_any_vehicle((*uParam0)[iVar0 /*24*/], true))
																{
																	Var5 = { get_entity_coords((*uParam0)[iVar0 /*24*/], true) };
																	Var6 = { get_entity_coords(player_ped_id(), true) };
																	fVar7 = atan(((Var6.f_2 - Var5.f_2) / func_4((*uParam0)[iVar0 /*24*/], player_ped_id(), 0)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_65++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_99();
															task_set_blocking_of_non_temporary_events(0, true);
															task_turn_ped_to_face_entity(0, player_ped_id(), 1000);
															task_play_anim(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0f, false, false, false);
															task_set_blocking_of_non_temporary_events(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_99();
															task_set_blocking_of_non_temporary_events(0, true);
															task_turn_ped_to_face_entity(0, player_ped_id(), 1000);
															task_play_anim(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0f, false, false, false);
															task_set_blocking_of_non_temporary_events(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_99();
															task_set_blocking_of_non_temporary_events(0, true);
															task_turn_ped_to_face_entity(0, player_ped_id(), 1000);
															task_play_anim(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0f, false, false, false);
															task_set_blocking_of_non_temporary_events(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_56)
															{
																if (absf(func_119((*uParam0)[iVar0 /*24*/], player_ped_id())) < 20f)
																{
																	if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_114(((func_4((*uParam0)[iVar0 /*24*/], player_ped_id(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_114(((func_4((*uParam0)[iVar0 /*24*/], player_ped_id(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_114(((func_4((*uParam0)[iVar0 /*24*/], player_ped_id(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (is_entity_playing_anim((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar8 = true;
											if (get_entity_anim_current_time((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = get_game_timer() + 2000;
											task_combat_ped((*uParam0)[iVar0 /*24*/], player_ped_id(), 0, 16);
											set_entity_load_collision_flag((*uParam0)[iVar0 /*24*/], true, 1);
											set_ped_target_loss_response((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (get_game_timer() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (is_ped_using_scenario((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || is_ped_using_any_scenario((*uParam0)[iVar0 /*24*/]))
						{
							if (!is_ped_injured((*uParam0)[iVar0 /*24*/]))
							{
								clear_ped_tasks((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									set_current_ped_weapon((*uParam0)[iVar0 /*24*/], get_best_ped_weapon((*uParam0)[iVar0 /*24*/], false), true);
									set_blocking_of_non_temporary_events((*uParam0)[iVar0 /*24*/], false);
									set_ped_should_play_normal_scenario_exit((*uParam0)[iVar0 /*24*/]);
									set_ped_combat_attributes((*uParam0)[iVar0 /*24*/], 50, true);
									set_ped_flee_attributes((*uParam0)[iVar0 /*24*/], 512, true);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										task_combat_ped((*uParam0)[iVar0 /*24*/], player_ped_id(), 0, 16);
										set_entity_load_collision_flag((*uParam0)[iVar0 /*24*/], true, 1);
										set_ped_target_loss_response((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (get_game_timer() + get_random_int_in_range(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_114(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_115(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, bool bParam6)
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!are_strings_equal("chi2_hear", Param3.f_1))
			{
				if (func_65())
				{
					if (!func_88(Param3.f_1))
					{
						func_91();
					}
				}
				if (func_111(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { get_entity_coords((*uParam1)[iParam0 /*24*/], true) };
					(uParam1[iParam0 /*24*/])->f_18 = get_entity_heading((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = get_game_timer() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { get_entity_coords((*uParam1)[iParam0 /*24*/], true) };
				(uParam1[iParam0 /*24*/])->f_18 = get_entity_heading((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (get_game_timer() > (uParam1[iParam0 /*24*/])->f_11)
			{
				task_turn_ped_to_face_coord((*uParam1)[iParam0 /*24*/], get_entity_coords(player_ped_id(), true), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = get_game_timer() + 5000;
			}
			break;
		
		case 2:
			if (!are_strings_equal("chi2_hear", Param3.f_1))
			{
				if ((can_ped_hear_player(player_id(), (*uParam1)[iParam0 /*24*/]) || iLocal_73 == 1) && func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (get_game_timer() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						task_follow_nav_mesh_to_coord((*uParam1)[iParam0 /*24*/], get_entity_coords(player_ped_id(), true), 1f, 20000, 0.1f, false, 40000f);
						(uParam1[iParam0 /*24*/])->f_15 = { get_entity_coords(player_ped_id(), true) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (get_game_timer() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_111(Param5.f_1, Param5.f_2, (*uParam1)[iParam0 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (get_game_timer() > (uParam1[iParam0 /*24*/])->f_11)
			{
				task_achieve_heading((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_99();
			task_follow_nav_mesh_to_coord(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 40000f);
			task_achieve_heading(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_98(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = get_game_timer() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (get_script_task_status((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (are_strings_equal("chi2_hear", Param3.f_1) && get_script_task_status((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!are_strings_equal(sParam2, ""))
				{
					task_start_scenario_in_place((*uParam1)[iParam0 /*24*/], sParam2, 0, true);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (are_strings_equal("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_62 = -1;
			}
			break;
		
		case 5:
			if (func_111(Param3.f_1, Param4.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || get_script_task_status((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!is_ped_injured((*uParam1)[iParam0 /*24*/]))
				{
					clear_ped_tasks((*uParam1)[iParam0 /*24*/]);
					func_99();
					task_look_at_coord(0, get_offset_from_entity_in_world_coords((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					task_look_at_coord(0, get_offset_from_entity_in_world_coords((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_98(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = get_game_timer() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!is_ped_dead_or_dying((*uParam1)[iParam0 /*24*/], true))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (is_ped_dead_or_dying((*uParam1)[iVar0 /*24*/], true) && does_entity_exist((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = func_119((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (absf((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					task_turn_ped_to_face_entity(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					task_turn_ped_to_face_entity((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = func_117((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_117(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { get_entity_coords(iParam0, false) };
	Var1 = { get_entity_coords(iParam1, false) };
	return func_102(Var0, Var1, iParam2);
}

int func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	task_play_anim(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0f, false, false, false);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = get_random_int_in_range(0, 3);
		iVar3 = get_random_int_in_range(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = get_random_int_in_range(0, 4);
				switch (iVar2)
				{
					case 0:
						task_play_anim(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 1:
						task_play_anim(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 2:
						task_play_anim(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			
			case 1:
				iVar2 = get_random_int_in_range(0, 4);
				switch (iVar2)
				{
					case 0:
						task_play_anim(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 1:
						task_play_anim(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 2:
						task_play_anim(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			
			case 2:
				iVar2 = get_random_int_in_range(0, 4);
				switch (iVar2)
				{
					case 0:
						task_play_anim(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 1:
						task_play_anim(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 2:
						task_play_anim(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_119(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && does_entity_exist(iParam1))
	{
		return func_120(iParam0, get_entity_coords(iParam1, false));
	}
	return 0f;
}

float func_120(int iParam0, struct<3> Param1)
{
	float fVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, false))
		{
			fVar0 = func_102(get_entity_coords(iParam0, false), Param1, 1);
			return (fVar0 - get_entity_heading(iParam0));
		}
	}
	return 0f;
}

void func_121(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	
	if (!bLocal_53 == 1)
	{
		bLocal_82 = false;
		if (is_ped_shooting(player_ped_id()) || is_control_pressed(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!is_ped_dead_or_dying((*uParam0)[iVar0 /*24*/], true))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_83 == 0)
			{
				iLocal_83 = iVar1;
			}
			if (iVar1 < iLocal_83)
			{
				iLocal_83 = iVar1;
				bLocal_82 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!is_ped_dead_or_dying((*uParam0)[iLocal_58 /*24*/], true))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 3 && (uParam0[iLocal_58 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!is_ped_dead_or_dying((*uParam0)[iVar0 /*24*/], true))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((get_interior_from_entity((*uParam0)[iLocal_58 /*24*/]) != 0 && get_interior_from_entity((*uParam0)[iVar0 /*24*/]) != 0) || (get_interior_from_entity((*uParam0)[iLocal_58 /*24*/]) == 0 && get_interior_from_entity((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { get_entity_coords((*uParam0)[iVar0 /*24*/], true) };
											Var4 = { get_entity_coords((*uParam0)[iLocal_58 /*24*/], false) };
											if (absf((Var3.f_2 - Var4.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_58;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar5 = 10f;
					fVar6 = 11f;
					(uParam0[iLocal_58 /*24*/])->f_22 = -1;
					(uParam0[iLocal_58 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (does_entity_exist((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1);
								if (fVar7 < 10f)
								{
									fVar8 = func_119((*uParam0)[iLocal_58 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_58 /*24*/])->f_23 = (uParam0[iLocal_58 /*24*/])->f_22;
											(uParam0[iLocal_58 /*24*/])->f_22 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_58 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (is_ped_in_any_heli(player_ped_id()))
	{
		iVar9 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (is_vehicle_driveable(iVar9, false))
		{
			if (get_is_vehicle_engine_running(iVar9))
			{
				iVar10 = 1;
			}
		}
	}
	if (is_explosion_in_sphere(-1, Local_71, fLocal_72))
	{
		bLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			iLocal_59 = get_game_timer() + 1000;
			iLocal_55 = 1;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			iLocal_59 = get_game_timer() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!func_88(Param1.f_1) && !func_88(Param3.f_1)) && !func_88(Param5.f_1)) && !func_88(Param7.f_1))
	{
		iLocal_55 = 0;
	}
	else if (get_game_timer() > iLocal_59)
	{
		if (func_88(Param1.f_1) || func_88(Param3.f_1))
		{
			bLocal_53 = true;
		}
		if (func_88(Param5.f_1) || func_88(Param7.f_1))
		{
			bLocal_56 = true;
		}
	}
	iLocal_60 = 0;
	iVar11 = -1;
	fVar12 = 13f;
	iLocal_57 = 0;
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iVar13 = get_vehicle_ped_is_using(player_ped_id());
	}
	if (iLocal_62 == -1)
	{
		iLocal_73 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_ped_dead_or_dying((*uParam0)[iVar0 /*24*/], true))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (is_vehicle_driveable(iVar13, false))
						{
							if (get_is_vehicle_engine_running(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 20f;
							}
							if (is_vehicle_siren_on(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 50f;
							}
						}
						if (can_ped_hear_player(player_id(), (*uParam0)[iVar0 /*24*/]) || (is_vehicle_driveable(iVar13, false) && get_is_vehicle_engine_running(iVar13)))
						{
							if (func_4(player_ped_id(), (*uParam0)[iVar0 /*24*/], 1) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (get_interior_from_entity(player_ped_id()) == get_interior_from_entity((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = func_4(player_ped_id(), (*uParam0)[iVar0 /*24*/], 1);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_82)
					{
					}
					if (!bLocal_82 && !is_ped_ragdoll((*uParam0)[iVar0 /*24*/]))
					{
						if (is_ped_responding_to_event((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (has_ped_received_event((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (is_ped_responding_to_event((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (has_bullet_impacted_in_area(get_entity_coords((*uParam0)[iVar0 /*24*/], true), 4f, true, true))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (has_bullet_impacted_in_area(get_entity_coords((*uParam0)[iVar0 /*24*/], true), 6f, true, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (is_ped_responding_to_event((*uParam0)[iVar0 /*24*/], 126))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (is_bullet_in_area(get_entity_coords((*uParam0)[iVar0 /*24*/], true), 1f, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (does_entity_exist((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (is_ped_dead_or_dying((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], true))
								{
									if (has_entity_clear_los_to_entity_in_front((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (does_entity_exist((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (is_ped_dead_or_dying((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], true))
								{
									if (has_entity_clear_los_to_entity_in_front((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || is_ped_in_combat((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((is_ped_responding_to_event((*uParam0)[iVar0 /*24*/], 1) || has_ped_received_event((*uParam0)[iVar0 /*24*/], 1)) || (is_ped_in_combat((*uParam0)[iVar0 /*24*/], 0) && can_ped_in_combat_see_target((*uParam0)[iVar0 /*24*/], player_ped_id()))) || (func_122((*uParam0)[iVar0 /*24*/]) && has_ped_received_event((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar10 && func_4(player_ped_id(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_56)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_60)
				{
					iLocal_60 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_57 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == -1)
	{
		if (iVar11 != -1)
		{
			if (1 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 1;
				iLocal_62 = iVar11;
			}
		}
	}
	else if (is_ped_dead_or_dying((*uParam0)[iLocal_62 /*24*/], true))
	{
		iLocal_62 = -1;
	}
}

int func_122(int iParam0)
{
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (is_entity_playing_anim(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_123()
{
	if (iLocal_392)
	{
		if (is_string_null_or_empty(&Local_397))
		{
			if (func_65())
			{
				if (is_scripted_conversation_ongoing())
				{
					if (!is_message_being_displayed())
					{
						cLocal_393 = { func_124() };
						Local_397 = { func_89() };
						StringCopy(&Local_397, "", 24);
						if (!is_string_null_or_empty(&cLocal_393) && !are_strings_equal(&cLocal_393, "NULL"))
						{
							Local_397 = { func_89() };
							func_91();
						}
						else
						{
							iLocal_392 = 0;
							StringCopy(&Local_397, "", 24);
							StringCopy(&cLocal_393, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_392 = 0;
				StringCopy(&Local_397, "", 24);
				StringCopy(&cLocal_393, "", 24);
			}
		}
		else
		{
			if (is_scripted_conversation_ongoing())
			{
				if (!func_88(&Local_397))
				{
					iLocal_392 = 0;
					StringCopy(&Local_397, "", 24);
					StringCopy(&cLocal_393, "", 24);
				}
			}
			if (!is_string_null_or_empty(&Local_397))
			{
				Local_391[0 /*3*/] = { Local_391[0 /*3*/] };
			}
		}
	}
}

struct<6> func_124()
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

void func_125()
{
	if (!is_ped_injured(player_ped_id()))
	{
		func_132();
		func_131();
		func_129();
		func_126();
	}
}

void func_126()
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_102 == 0)
	{
		if (get_closest_fire_pos(&Var1, Local_109[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_109.f_0)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + get_distance_between_coords(Local_109[(iVar0 - 1) /*5*/], Local_109[iVar0 /*5*/], true));
				}
				if (Local_109[iVar0 /*5*/].f_4)
				{
					if (get_closest_fire_pos(&Var1, Local_109[iVar0 /*5*/]))
					{
						fVar4 = get_distance_between_coords(Local_109[iVar0 /*5*/], Var1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_96)
			{
				iVar3 = iVar3;
				iLocal_102 = 1;
				iLocal_104 = get_game_timer();
				fVar6 = fVar6;
				Local_99 = { Local_109[iVar3 /*5*/] };
				iLocal_100 = iVar3;
				iLocal_105 = iVar3 * 2;
				iLocal_107 = iLocal_105;
				iLocal_108 = iLocal_105;
				if (iLocal_108 < 0)
				{
					iLocal_108 = 0;
				}
				if (iLocal_107 >= Local_109.f_0 * 2)
				{
					iLocal_107 = (Local_109.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_102 == 1)
	{
		_0xD9454B5752C857DC();
		fVar7 = (to_float((get_game_timer() - iLocal_104)) / fLocal_110);
		iVar8 = (floor((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_105 + iVar8);
		iVar10 = (iLocal_105 - iVar8);
		if (iVar9 >= 122)
		{
			iVar9 = 121;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_107)
		{
			iVar0 = iLocal_107 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109.f_0)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_107 = iVar9;
		}
		if (iVar10 < iLocal_108)
		{
			iVar0 = (iLocal_108 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109.f_0)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_108 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_101.f_0)
		{
			if ((get_game_timer() - Local_101[iVar0 /*5*/].f_4) > 1000)
			{
				fade_decals_in_range(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((get_game_timer() - Local_101[iVar0 /*5*/].f_4) > 6000)
			{
				remove_script_fire(Local_101[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_127(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_128(Local_109[(iParam0 / 2) /*5*/] + Local_109[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_97, fLocal_97, fLocal_97), bParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_128(Local_109[(iParam0 / 2) /*5*/] + Vector(fLocal_97, fLocal_97, fLocal_97), bParam1);
		}
	}
}

void func_128(struct<3> Param0, bool bParam1)
{
	if (iLocal_103 == 0)
	{
		bParam1 = false;
	}
	remove_script_fire(Local_101[iLocal_106 /*5*/]);
	if (Local_101[iLocal_106 /*5*/].f_4 != 0)
	{
		fade_decals_in_range(Local_101[iLocal_106 /*5*/].f_1, 0.4f, 1f);
	}
	Local_101[iLocal_106 /*5*/].f_4 = get_game_timer();
	Local_101[iLocal_106 /*5*/].f_1 = { Param0 };
	Local_101[iLocal_106 /*5*/] = start_script_fire(Param0, iLocal_94, bParam1);
	iLocal_106++;
	if (iLocal_106 >= 31)
	{
		iLocal_106 = 0;
	}
}

void func_129()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_89)
	{
		get_current_ped_weapon(player_ped_id(), &iVar1, true);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (is_control_pressed(0, 24) && is_ped_shooting(player_ped_id()))
			{
				if (iLocal_95 == 0)
				{
					_0x293220DA1B46CEBC(2f, 8f, 4);
					iLocal_95 = get_game_timer() + 250;
				}
				if (get_game_timer() > iLocal_95)
				{
					if (!bLocal_85)
					{
						fVar4 = 9999.9f;
						Local_98 = { func_130() };
						iVar0 = 0;
						while (iVar0 < Local_109.f_0)
						{
							if (does_blip_exist(Local_109[iVar0 /*5*/].f_3))
							{
								fVar2 = get_distance_between_coords(Local_98, get_blip_coords(Local_109[iVar0 /*5*/].f_3), true);
								fVar3 = get_distance_between_coords(Local_109[iVar0 /*5*/], get_blip_coords(Local_109[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_109[iVar0 /*5*/] = { Local_98 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_91 != -1)
							{
								if (absi((iLocal_92 - iVar5)) > 1)
								{
									iLocal_92 = -1;
								}
								if (iLocal_92 == -1)
								{
									iLocal_92 = iLocal_91;
								}
								if (absi((iLocal_92 - iVar5)) < 3 && absi((iLocal_92 - iVar5)) > 0)
								{
									if (iLocal_92 < iVar5)
									{
										iVar6 = iLocal_92;
										while (iVar6 <= (iVar5 - 1))
										{
											if (does_blip_exist(Local_109[iVar6 /*5*/].f_3))
											{
												if (get_blip_alpha(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													set_blip_alpha(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_92)
										{
											if (does_blip_exist(Local_109[iVar6 /*5*/].f_3))
											{
												if (get_blip_alpha(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													set_blip_alpha(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_92 = iLocal_91;
								}
								if (iVar5 == 0)
								{
									if (does_blip_exist(Local_109[iVar5 /*5*/].f_3))
									{
										if (get_blip_alpha(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											set_blip_alpha(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (does_blip_exist(Local_109[iVar5 /*5*/].f_3))
									{
										if (get_blip_alpha(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											set_blip_alpha(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_77(Local_109[iVar5 + 1 /*5*/]))
									{
										if (does_blip_exist(Local_109[iVar5 /*5*/].f_3))
										{
											if (get_blip_alpha(Local_109[iVar5 /*5*/].f_3) > 0)
											{
												set_blip_alpha(Local_109[iVar5 /*5*/].f_3, 0);
												Local_109[iVar5 /*5*/].f_4 = 1;
												iLocal_93 = (iLocal_93 - 1);
											}
										}
									}
								}
							}
							iLocal_91 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_91 = -1;
				iLocal_92 = -1;
				iLocal_95 = 0;
			}
		}
	}
}

Vector3 func_130()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	
	iVar0 = get_current_ped_weapon_entity_index(player_ped_id(), 1);
	if (does_entity_exist(iVar0))
	{
		iVar1 = get_entity_bone_index_by_name(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { get_world_position_of_entity_bone(iVar0, iVar1) };
		Var2 = { _get_object_offset_from_coords(Var2, get_entity_heading(iVar0), 0.35f, 0f, -0.15f) };
		get_ground_z_for_3d_coord(Var2, &uVar4, false, false);
		Var3 = { Var2.f_0, Var2.f_1, uVar4 };
	}
	return Var3;
}

void func_131()
{
	int iVar0;
	
	if (iLocal_87)
	{
		if (iLocal_102)
		{
			iVar0 = 0;
			while (iVar0 < Local_101.f_0)
			{
				remove_script_fire(Local_101[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_87 = 0;
		iLocal_102 = 1;
		iLocal_104 = get_game_timer();
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_90 != -1)
		{
			iLocal_108 = iLocal_90;
			iLocal_107 = iLocal_90;
			iLocal_105 = iLocal_90;
		}
		else
		{
			iLocal_108 = -1;
			iLocal_107 = -1;
			iLocal_105 = iLocal_90;
		}
		iLocal_106 = 1;
	}
}

void func_132()
{
	if (!iLocal_88)
	{
		iLocal_88 = 1;
	}
}

void func_133()
{
	int iVar0;
	
	if (iLocal_149 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_113.f_0)
		{
			if (does_entity_exist(Local_113[iVar0 /*33*/]))
			{
				if (!Local_113[iVar0 /*33*/].f_23)
				{
					if (is_ped_injured(Local_113[iVar0 /*33*/]))
					{
						Local_113[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (get_ped_relationship_group_hash(Local_113[iVar0 /*33*/]) == iLocal_116)
				{
					func_103(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
			}
			else if (Local_113[iVar0 /*33*/] != 0)
			{
				func_134(&(Local_113[iVar0 /*33*/].f_25));
				Local_113[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_134(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
		bVar0 = true;
	}
	if (does_blip_exist(iParam0->f_1))
	{
		remove_blip(&(iParam0->f_1));
		bVar0 = true;
	}
	if (does_entity_exist(iParam0->f_7))
	{
		if (!is_entity_dead(iParam0->f_7, false))
		{
			if (does_ped_have_ai_blip(iParam0->f_7))
			{
				set_ped_has_ai_blip(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_135()
{
	int iVar0;
	
	iVar0 = iLocal_149;
	func_380();
	switch (iLocal_149)
	{
		case 0:
			func_272();
			break;
		
		case 1:
			func_269();
			break;
		
		case 2:
			func_224();
			break;
		
		case 3:
			func_207();
			break;
		
		case 4:
			func_206();
			break;
		
		case 5:
			func_206();
			break;
		
		case 6:
			func_206();
			break;
		
		case 7:
			func_202();
			break;
		
		case 8:
			func_181();
			break;
		
		case 9:
			func_149();
			break;
	}
	if (iLocal_149 != iVar0)
	{
		iLocal_150 = 0;
	}
	if (bLocal_152)
	{
		func_136(0);
	}
}

void func_136(char* sParam0)
{
	while (!trigger_music_event("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!is_string_null_or_empty(sParam0))
	{
		sLocal_151 = sParam0;
	}
	if (is_string_null(sLocal_151))
	{
		sLocal_151 = "CHFAIL";
	}
	func_138(sLocal_151);
	while (!func_137())
	{
		func_28(2, 0);
	}
	func_454(1);
}

int func_137()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_138(char* sParam0)
{
	func_148(sParam0);
	func_139(0);
}

void func_139(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_147(0))
	{
		iVar0 = func_146();
		if (!func_140(iVar0))
		{
			return;
		}
		set_bit(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_145();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_144(iVar1, 1);
	special_ability_charge_on_mission_failed(player_id(), 0);
	special_ability_deactivate(player_id(), 0);
	func_141(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!is_player_playing(player_id()))
		{
			set_fade_in_after_death_arrest(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_143(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_142(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_142(var uParam0)
{
	*uParam0 = -15;
}

int func_143(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_144(int iParam0, bool bParam1)
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

void func_145()
{
	Global_100476 = 1;
	if (is_player_being_arrested(player_id(), true))
	{
		if (is_string_null_or_empty(&Global_78551))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!is_player_playing(player_id()))
	{
		if (is_string_null_or_empty(&Global_78551))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		set_bit(&(Global_100441.f_20), 25);
	}
}

int func_146()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_148(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

void func_149()
{
	func_176(46, 52);
	func_166(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_166(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 12, 0, 0, 1, 0, 1, 0);
	func_154();
	if (func_153(1, 49))
	{
		func_150();
	}
}

void func_150()
{
	clear_prints();
	func_151(0, 0);
	func_454(0);
}

void func_151(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_147(0) && Global_78565.f_1 == 1) && func_152(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_147(0))
	{
		iVar0 = func_146();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		set_bit(&(Global_91193[iVar0 /*5*/].f_1), 4);
		set_bit(&Global_78567, true);
		Global_78583 = uVar2;
		Global_78584 = get_game_timer();
	}
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		if (Local_385[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_154()
{
	struct<3> Var0;
	
	Var0 = { get_entity_coords(player_ped_id(), true) };
	if (is_entity_in_angled_area(player_ped_id(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, false, true, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((((is_entity_in_angled_area(player_ped_id(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, false, true, 0))
			{
				if (!is_entity_on_fire(player_ped_id()))
				{
					start_entity_fire(player_ped_id());
				}
			}
		}
		else if ((((((is_entity_in_angled_area(player_ped_id(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, false, true, 0))
		{
			if (!is_entity_on_fire(player_ped_id()))
			{
				start_entity_fire(player_ped_id());
			}
		}
	}
	else if (is_entity_in_angled_area(player_ped_id(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, false, true, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((is_entity_in_angled_area(player_ped_id(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, false, true, 0))
			{
				if (!is_entity_on_fire(player_ped_id()))
				{
					start_entity_fire(player_ped_id());
				}
			}
		}
		else if ((is_entity_in_angled_area(player_ped_id(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, false, true, 0))
		{
			if (!is_entity_on_fire(player_ped_id()))
			{
				start_entity_fire(player_ped_id());
			}
		}
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (Local_389[iParam0 /*4*/] != iParam1)
	{
		Local_389[iParam0 /*4*/].f_1 = 0;
		Local_389[iParam0 /*4*/] = iParam1;
	}
	if (!Local_389[iParam0 /*4*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_389[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!is_help_message_being_displayed())
					{
						set_special_ability_multiplier(2f);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (is_special_ability_meter_full(player_id(), 0))
					{
						if (_is_using_keyboard(0))
						{
							func_157("USESPEC_KM", -1);
						}
						else
						{
							func_157("USESPEC", -1);
						}
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMFLE", -1);
							Local_389[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_65() && !is_message_being_displayed())
					{
						func_7("FRMLK", 7500, 1);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (get_ped_stealth_movement(player_ped_id()))
							{
								Local_389[iParam0 /*4*/].f_3 = get_game_timer() + 1000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (get_game_timer() > Local_389[iParam0 /*4*/].f_3)
							{
								if (_is_using_keyboard(0))
								{
									func_157("FRMSTLTH_KM", -1);
								}
								else
								{
									func_157("FRMSTLTH", -1);
								}
								Local_389[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (get_profile_setting(211) != 0)
							{
								Local_389[iParam0 /*4*/].f_3 = get_game_timer() + 4000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (get_game_timer() > Local_389[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								get_current_ped_weapon(player_ped_id(), &iVar0, true);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!is_message_being_displayed() && !is_help_message_being_displayed())
									{
										if (!func_65())
										{
											if (!is_ped_in_any_vehicle(player_ped_id(), false))
											{
												func_157("FRMSHOT", -1);
												Local_389[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					set_blip_name_from_text_file(iLocal_178, "FRMBLIPB");
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMPET2", -1);
							Local_389[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_65())
							{
								func_156("FRMTRL", 7500, 1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (get_current_ped_weapon(player_ped_id(), &iVar1, true))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (is_control_pressed(0, 24))
									{
										clear_help(true);
									}
								}
							}
							if (!is_help_message_being_displayed())
							{
								func_157("FRMTRL2", -1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_65())
								{
									if (get_interior_from_entity(player_ped_id()) != 0)
									{
										if (!does_blip_exist(iLocal_178))
										{
											clear_prints();
											func_7("FRMSHP", 7500, 1);
											iLocal_178 = func_5(2454.895f, 4950.895f, 44.1488f, 0);
										}
									}
									else if (func_73(player_ped_id(), 2454.895f, 4950.895f, 44.1488f, 1) < 5f)
									{
										clear_prints();
										if (does_blip_exist(iLocal_178))
										{
											remove_blip(&iLocal_178);
										}
										func_7("FRMIGN", 7500, 1);
										start_audio_scene("CHI_2_SHOOT_GAS");
										Local_389[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_93(37))
							{
								if (func_90("FRMIGN", 0, 0))
								{
									clear_prints();
								}
							}
							if (get_interior_from_entity(player_ped_id()) != 0)
							{
								Local_389[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_157("FRMMISS", -1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_93(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_93(48))
					{
						clear_prints();
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}

void func_156(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	begin_text_command_print(sParam0);
	end_text_command_print(iParam1, true);
}

void func_157(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bLocal_386 = false;
	iLocal_387 = 0;
	if (func_159(&bLocal_386, &iLocal_387, iParam0, iParam1))
	{
		if (func_159(&bLocal_386, &iLocal_387, iParam2, iParam3))
		{
			if (func_159(&bLocal_386, &iLocal_387, iParam4, iParam5))
			{
				if (func_159(&bLocal_386, &iLocal_387, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_386)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_162(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_162(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_93(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_161(iParam3))
			{
				if (func_162(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_93(iParam3))
				{
					func_160(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		Local_388[iVar0 /*8*/].f_3 = 1;
	}
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		if (Local_388[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388.f_0)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (!Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_390[iParam0 /*7*/] != iParam1)
	{
		Local_390[iParam0 /*7*/].f_1 = 0;
		Local_390[iParam0 /*7*/] = iParam1;
	}
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_390[iParam0 /*7*/].f_2)
			{
				Local_390[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_390[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = get_game_timer() + 2000;
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (get_game_timer() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_65())
								{
									Local_390[iParam0 /*7*/].f_4 = get_game_timer() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_165(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(8000, 14000));
										}
									}
									else
									{
										Local_390[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = func_18(15);
							Local_390[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_390[iParam0 /*7*/].f_4 != -1 && Local_390[iParam0 /*7*/].f_5 != -1)
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_4 = Local_390[iParam0 /*7*/].f_5;
								if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_165(&iVar1, 2, 1))
							{
								if (iVar1 != Local_390[iParam0 /*7*/].f_4)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar1;
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3 = get_random_int_in_range(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_390[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_390[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (get_game_timer() + get_random_int_in_range(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_113.f_0)
							{
								if (Local_113[iVar2 /*33*/].f_1 == 2)
								{
									if (!is_ped_injured(Local_113[iVar2 /*33*/]))
									{
										if (is_ped_in_combat(Local_113[iVar2 /*33*/], 0))
										{
											if (can_ped_in_combat_see_target(Local_113[iVar2 /*33*/], player_ped_id()))
											{
												Local_390[iParam0 /*7*/].f_4 = iVar2;
												Local_390[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_165(&(Local_390[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_88("ONEILGUARD4") || func_88("SEETREVOR"))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (get_game_timer() > Local_390[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_390[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_113.f_0)
								{
									if (Local_113[iVar3 /*33*/].f_1 == 2)
									{
										if (!is_ped_injured(Local_113[iVar3 /*33*/]))
										{
											fVar5 = func_4(player_ped_id(), Local_113[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_390[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_390[iParam0 /*7*/].f_4 == -1)
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_5 = get_game_timer() + 6000;
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_113.f_0)
							{
								if (Local_113[iVar6 /*33*/].f_2 == 8)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_113[iVar6 /*33*/].f_2 == 9)
								{
									Local_390[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_390[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_65())
							{
								if (is_synchronized_scene_running(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (get_synchronized_scene_phase(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (get_synchronized_scene_phase(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (func_4(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], player_ped_id(), 1) < 30f)
											{
												Local_390[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								play_ped_ambient_speech_with_voice_native(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!is_ped_injured(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (is_synchronized_scene_running(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (get_synchronized_scene_phase(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_390[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						_0x293220DA1B46CEBC(5f, 8f, 4);
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_164())
					{
						if (func_35("CHI2_pourmis", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = 2500;
							Local_390[iParam0 /*7*/].f_5 = 0;
							Local_390[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_390[iParam0 /*7*/].f_4 = (Local_390[iParam0 /*7*/].f_4 - floor((timestep() * 1000f)));
							if (Local_390[iParam0 /*7*/].f_4 <= 0)
							{
								Local_390[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_390[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3 = 1;
									Local_390[iParam0 /*7*/].f_4 = (12000 + get_random_int_in_range(3000, 5000));
									Local_390[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, player_ped_id(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (Local_109[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (Local_113[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !is_ped_injured(Local_113[iVar0 /*33*/])))
			{
				fVar1 = func_4(player_ped_id(), Local_113[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (Local_385[iParam0 /*10*/] != iParam1 || Local_385[iParam0 /*10*/].f_1 == 0)
	{
		Local_385[iParam0 /*10*/] = iParam1;
		Local_385[iParam0 /*10*/].f_1 = 1;
		Local_385[iParam0 /*10*/].f_3 = 0;
		Local_385[iParam0 /*10*/].f_6 = 0;
		Local_385[iParam0 /*10*/].f_4 = 0;
		Local_385[iParam0 /*10*/].f_7 = 0;
		Local_385[iParam0 /*10*/].f_8 = 0;
		Local_385[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_385[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_158(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_385[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_385[iParam0 /*10*/].f_3 == 0 || Local_385[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_385[iParam0 /*10*/].f_2)
			{
				Local_385[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_385[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							start_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!is_ped_in_any_vehicle(player_ped_id(), false))
							{
								stop_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_73(player_ped_id(), 1991.05f, 3054.262f, 46.2147f, 1) > 250f)
					{
						if (does_entity_exist(Local_113[11 /*33*/]))
						{
							delete_ped(&(Local_113[11 /*33*/]));
						}
						if (does_entity_exist(Local_113[10 /*33*/]))
						{
							delete_ped(&(Local_113[10 /*33*/]));
						}
						if (does_entity_exist(Local_113[12 /*33*/]))
						{
							delete_ped(&(Local_113[12 /*33*/]));
						}
						if (does_entity_exist(Local_113[13 /*33*/]))
						{
							delete_ped(&(Local_113[13 /*33*/]));
						}
						if (does_entity_exist(Local_113[14 /*33*/]))
						{
							delete_ped(&(Local_113[14 /*33*/]));
						}
						set_model_as_no_longer_needed(joaat("ig_janet"));
						set_model_as_no_longer_needed(joaat("ig_janet"));
						set_model_as_no_longer_needed(joaat("ig_old_man1a"));
						set_model_as_no_longer_needed(joaat("ig_old_man2"));
						set_model_as_no_longer_needed(joaat("ig_taocheng"));
						set_model_as_no_longer_needed(joaat("ig_taostranslator"));
						remove_anim_dict("misschinese2_crystalmaze");
						remove_anim_dict("MISSChinese2_crystalMazeMCS1_IG");
						remove_anim_dict("missrampageintrooutro");
						if (iLocal_379 != -1)
						{
							if (does_navmesh_blocking_object_exist(iLocal_379))
							{
								remove_navmesh_blocking_object(iLocal_379);
							}
						}
						clear_ped_non_creation_area();
						func_31(26, 1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (load_stream("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_73(player_ped_id(), 2457.49f, 4977.095f, 50.56783f, 1) < 400f)
					{
						func_32(27, 0);
						set_vehicle_population_budget(1);
						set_ped_population_budget(1);
						prefetch_srl("chinese2_farmhouse_cutscene");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!is_ped_injured(Local_113[12 /*33*/]) && !is_ped_injured(Local_113[13 /*33*/])) && !is_ped_injured(Local_113[14 /*33*/]))
					{
						if (func_175(6, 6) < 2)
						{
							if (is_entity_in_angled_area(player_ped_id(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, false, true, 0))
							{
								if (get_script_task_status(Local_113[12 /*33*/], 150319005) == 7)
								{
									task_look_at_entity(Local_113[13 /*33*/], player_ped_id(), -1, 0, 2);
									task_look_at_entity(Local_113[14 /*33*/], player_ped_id(), -1, 0, 2);
									task_look_at_entity(Local_113[12 /*33*/], player_ped_id(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_73(player_ped_id(), 2450.214f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (is_ped_in_any_vehicle(player_ped_id(), false))
						{
							iVar4 = get_vehicle_ped_is_in(player_ped_id(), false);
							if (is_vehicle_driveable(iVar4, false))
							{
								if (is_this_model_a_heli(get_entity_model(iVar4)) || is_this_model_a_plane(get_entity_model(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = get_entity_speed(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										apply_force_to_entity_center_of_mass(iVar4, 1, 0f, -fVar2, 0f, false, true, false, false);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (is_entity_playing_anim(player_ped_id(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_385[iParam0 /*10*/].f_6 = 1;
						set_ped_reset_flag(player_ped_id(), 321, true);
						if (has_anim_event_fired(player_ped_id(), get_hash_key("walkinterruptible")))
						{
							force_ped_motion_state(player_ped_id(), joaat("MotionState_Idle"), false, 0, false);
							if (func_174())
							{
								clear_ped_tasks(player_ped_id());
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_385[iParam0 /*10*/].f_6 == 1)
					{
						remove_anim_dict("missrampageintrooutro");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!is_ped_injured(Local_113[12 /*33*/]) && !is_ped_injured(Local_113[13 /*33*/])) && !is_ped_injured(Local_113[14 /*33*/]))
							{
								set_ped_relationship_group_hash(Local_113[12 /*33*/], iLocal_154);
								set_ped_relationship_group_hash(Local_113[13 /*33*/], iLocal_154);
								set_ped_relationship_group_hash(Local_113[14 /*33*/], iLocal_154);
								set_ped_combat_attributes(Local_113[12 /*33*/], 17, true);
								set_ped_combat_attributes(Local_113[13 /*33*/], 17, true);
								set_ped_combat_attributes(Local_113[14 /*33*/], 17, true);
								clear_entity_last_damage_entity(Local_113[12 /*33*/]);
								clear_entity_last_damage_entity(Local_113[13 /*33*/]);
								clear_entity_last_damage_entity(Local_113[14 /*33*/]);
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((is_ped_injured(Local_113[12 /*33*/]) || is_ped_injured(Local_113[13 /*33*/])) || is_ped_injured(Local_113[14 /*33*/]))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							if (!is_ped_injured(Local_113[12 /*33*/]))
							{
								if (has_entity_been_damaged_by_any_ped(Local_113[12 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!is_ped_injured(Local_113[13 /*33*/]))
							{
								if (has_entity_been_damaged_by_any_ped(Local_113[13 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!is_ped_injured(Local_113[14 /*33*/]))
							{
								if (has_entity_been_damaged_by_any_ped(Local_113[14 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_113[12 /*33*/]))
							{
								task_smart_flee_ped(Local_113[12 /*33*/], player_ped_id(), 100f, -1, false, false);
								set_ped_keep_task(Local_113[12 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_113[12 /*33*/]));
							}
							if (!is_ped_injured(Local_113[13 /*33*/]))
							{
								task_smart_flee_ped(Local_113[13 /*33*/], player_ped_id(), 100f, -1, false, false);
								set_ped_keep_task(Local_113[13 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_113[13 /*33*/]));
							}
							if (!is_ped_injured(Local_113[14 /*33*/]))
							{
								task_smart_flee_ped(Local_113[14 /*33*/], player_ped_id(), 100f, -1, false, false);
								set_ped_keep_task(Local_113[14 /*33*/], true);
								set_ped_as_no_longer_needed(&(Local_113[14 /*33*/]));
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							prefetch_srl("chinese2_explosion_cutscene");
							stop_stream();
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_166 == 1)
							{
								if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 2)
							{
								if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 3)
							{
								if (load_stream("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (is_srl_loaded())
							{
								Local_385[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 1:
							if (get_game_timer() > Local_385[iParam0 /*10*/].f_7)
							{
								if (is_valid_interior(get_interior_from_entity(player_ped_id())))
								{
									add_explosion(get_entity_coords(player_ped_id(), true) + Vector(0f, get_random_float_in_range(0f, 4f), get_random_float_in_range(0f, 4f)), 16, 1.5f, true, false, 1f, false);
									Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 - 1f);
									Local_385[iParam0 /*10*/].f_7 = (get_game_timer() + get_random_int_in_range(250, 520));
								}
								else
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							bVar5 = false;
							while (bVar5 < Local_384.f_0)
							{
								if (!BitTest(Local_385[iParam0 /*10*/].f_7, bVar5))
								{
									if (is_explosion_in_sphere(-1, Local_384[bVar5 /*3*/], 5f))
									{
										set_bit(&(Local_385[iParam0 /*10*/].f_7), bVar5);
										if (Local_385[iParam0 /*10*/].f_6 == 0)
										{
											Local_385[iParam0 /*10*/].f_6 = get_game_timer() + 1500;
										}
									}
								}
								bVar5++;
							}
							if (get_game_timer() > Local_385[iParam0 /*10*/].f_8)
							{
								Local_385[iParam0 /*10*/].f_8 = 0;
								bVar5 = false;
								while (bVar5 < Local_384.f_0)
								{
									if (!BitTest(Local_385[iParam0 /*10*/].f_7, bVar5 + 9) && BitTest(Local_385[iParam0 /*10*/].f_7, bVar5))
									{
										add_explosion(Local_384[bVar5 /*3*/], 16, 1.5f, true, false, 1f, false);
										set_bit(&(Local_385[iParam0 /*10*/].f_7), bVar5 + 9);
										bVar5 = 8;
										Local_385[iParam0 /*10*/].f_8 = (get_game_timer() + get_random_int_in_range(150, 320));
									}
									bVar5++;
								}
							}
							if (Local_385[iParam0 /*10*/].f_6 != 0)
							{
								if (get_game_timer() > Local_385[iParam0 /*10*/].f_6)
								{
									Local_385[iParam0 /*10*/].f_6 = 1;
									Local_385[iParam0 /*10*/].f_7 = get_game_timer() + 300;
									Local_385[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_105(iVar6, 20, 0, 0);
					func_105(iVar7, 20, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							set_initial_player_station("RADIO_01_CLASS_ROCK");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (is_ped_in_any_vehicle(player_ped_id(), false))
							{
								if (does_player_veh_have_radio())
								{
									iLocal_144 = get_vehicle_ped_is_in(player_ped_id(), false);
									if (is_vehicle_driveable(iLocal_144, false))
									{
										if (!get_is_vehicle_engine_running(iLocal_144))
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (prepare_music_event("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (trigger_music_event("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_74(iLocal_144))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_144, false))
								{
									if (get_is_vehicle_engine_running(iLocal_144))
									{
										Local_385[iParam0 /*10*/].f_7 = (Local_385[iParam0 /*10*/].f_7 + get_game_timer() + 7000);
										Local_385[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_74(iLocal_144))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_144, false))
								{
									if (get_game_timer() > Local_385[iParam0 /*10*/].f_7)
									{
										if (get_player_radio_station_genre() != 6 && get_player_radio_station_genre() != 0)
										{
											if (get_music_vol_slider() != 0)
											{
												if (func_35("CHI2_rad", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_7 = get_game_timer() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_88("CHI2_rad"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_88("CHI2_rad"))
							{
								if (func_74(iLocal_144))
								{
									if (is_ped_in_vehicle(player_ped_id(), iLocal_144, false))
									{
										if (!is_control_pressed(0, 85))
										{
											if (get_player_radio_station_genre() != 6)
											{
												if (iLocal_177 == -1)
												{
													iLocal_177 = get_sound_id();
													play_sound_frontend(iLocal_177, "Change_Station_Loud", "Radio_Soundset", true);
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!is_control_pressed(0, 85))
							{
								if (trigger_music_event("CHN2_TREV_RADIO_2_FRTA"))
								{
									start_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_74(iLocal_144))
							{
								if (is_ped_in_vehicle(player_ped_id(), iLocal_144, false))
								{
									if (get_player_radio_station_genre() == 6)
									{
										if (get_music_vol_slider() != 0)
										{
											if (func_35("CHI2_radb", 1, player_ped_id(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					set_wanted_level_multiplier(1f);
					set_player_wanted_level(player_id(), 2, false);
					set_player_wanted_level_now(player_id(), false);
					set_max_wanted_level(5);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_96(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_93(49))
					{
						if (iLocal_179 != 0)
						{
							unpin_interior(iLocal_179);
						}
						iLocal_179 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
							{
								Local_385[iParam0 /*10*/].f_7 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
							{
								iVar8 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_385[iParam0 /*10*/].f_7)
								{
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_385[iParam0 /*10*/].f_7)
								{
									func_9(158, (Local_385[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (get_current_ped_weapon(player_ped_id(), &iVar9, true))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (is_control_pressed(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_385[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_385[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_385[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_385[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_385[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_385[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_385[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = -1;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (get_current_ped_weapon(player_ped_id(), &iVar10, true))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (is_control_pressed(0, 24))
									{
										if (Local_385[iParam0 /*10*/].f_7 == -1)
										{
											Local_385[iParam0 /*10*/].f_7 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
										}
										if (iLocal_93 == 0)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (timestep() * 2f));
										}
										else if (iLocal_93 < 30 && Local_385[iParam0 /*10*/].f_9 < 70f)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (timestep() * 1.5f));
										}
										else
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + timestep());
										}
										iVar11 = floor((IntToFloat(Local_385[iParam0 /*10*/].f_7) * (1f - (Local_385[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											set_ped_ammo(player_ped_id(), iVar10, iVar11, false);
										}
										else
										{
											set_ped_ammo(player_ped_id(), iVar10, 0, false);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_173());
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					set_ambient_zone_list_state("AZL_CHN2_METH_LAB_FARM_FIRE", true, true);
					func_172(1);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_172(0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					set_vehicle_population_budget(3);
					set_ped_population_budget(3);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (does_entity_exist(Local_113[4 /*33*/].f_20))
							{
								set_object_as_no_longer_needed(&(Local_113[4 /*33*/].f_20));
							}
							if (does_entity_exist(Local_113[5 /*33*/].f_20))
							{
								set_object_as_no_longer_needed(&(Local_113[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_170)
							{
								if (does_entity_exist(iLocal_170[iVar12]))
								{
									set_object_as_no_longer_needed(&(iLocal_170[iVar12]));
								}
								iVar12++;
							}
							set_model_as_no_longer_needed(joaat("prop_cs_beer_bot_01"));
							set_model_as_no_longer_needed(joaat("prop_ld_can_01"));
							set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (is_ped_injured(Local_113[23 /*33*/]))
							{
								if (does_entity_exist(iLocal_373))
								{
									set_object_as_no_longer_needed(&iLocal_373);
									remove_weapon_asset(joaat("weapon_sawnoffshotgun"));
									Local_385[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!is_ped_injured(Local_113[11 /*33*/]))
					{
						if (!is_ambient_speech_playing(Local_113[11 /*33*/]))
						{
							if (get_game_timer() > Local_385[iParam0 /*10*/].f_7)
							{
								if (!is_ped_injured(Local_113[11 /*33*/]))
								{
									play_ped_ambient_speech_with_voice_native(Local_113[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", false);
									Local_385[iParam0 /*10*/].f_7 = (get_game_timer() + get_random_int_in_range(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							request_model(joaat("ig_taocheng"));
							request_model(joaat("ig_taostranslator"));
							request_anim_dict("misschinese2_crystalmaze");
							if (iLocal_379 == -1 || (iLocal_379 != -1 && !does_navmesh_blocking_object_exist(iLocal_379)))
							{
								iLocal_379 = add_navmesh_blocking_object(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, false, 3);
							}
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((has_anim_dict_loaded("misschinese2_crystalmaze") && has_model_loaded(joaat("ig_taocheng"))) && has_model_loaded(joaat("ig_taostranslator")))
							{
								if (!does_entity_exist(Local_113[11 /*33*/]))
								{
									Local_113[11 /*33*/] = create_ped(26, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0f, true, true);
									set_ped_relationship_group_hash(Local_113[11 /*33*/], iLocal_118);
									set_ped_can_be_targetted(Local_113[11 /*33*/], false);
								}
								else if (!is_ped_injured(Local_113[11 /*33*/]))
								{
									set_ped_relationship_group_hash(Local_113[11 /*33*/], iLocal_118);
									set_ped_can_be_targetted(Local_113[11 /*33*/], false);
								}
								if (!does_entity_exist(Local_113[10 /*33*/]))
								{
									Local_113[10 /*33*/] = create_ped(26, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0f, true, true);
									set_ped_relationship_group_hash(Local_113[10 /*33*/], iLocal_118);
									set_ped_can_be_targetted(Local_113[10 /*33*/], false);
									set_ped_prop_index(Local_113[10 /*33*/], 1, 0, 1, false);
								}
								else if (!is_ped_injured(Local_113[10 /*33*/]))
								{
									set_ped_relationship_group_hash(Local_113[10 /*33*/], iLocal_118);
									set_ped_can_be_targetted(Local_113[10 /*33*/], false);
								}
								if (!is_ped_injured(Local_113[11 /*33*/]))
								{
									if (!is_synchronized_scene_running(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										set_synchronized_scene_hold_last_frame(Local_385[iParam0 /*10*/].f_7, true);
									}
									task_synchronized_scene(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
								}
								if (!is_ped_injured(Local_113[10 /*33*/]))
								{
									if (!is_synchronized_scene_running(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										set_synchronized_scene_hold_last_frame(Local_385[iParam0 /*10*/].f_7, true);
									}
									task_synchronized_scene(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!is_ped_injured(Local_113[10 /*33*/]) && !is_ped_injured(Local_113[11 /*33*/]))
							{
								set_ped_component_variation(Local_113[10 /*33*/], 0, 0, 0, 0);
								set_blocking_of_non_temporary_events(Local_113[11 /*33*/], true);
								set_blocking_of_non_temporary_events(Local_113[10 /*33*/], true);
								if (!is_synchronized_scene_running(Local_385[iParam0 /*10*/].f_7))
								{
									Local_385[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									task_synchronized_scene(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
									task_synchronized_scene(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
									set_synchronized_scene_hold_last_frame(Local_385[iParam0 /*10*/].f_7, true);
								}
								set_ped_config_flag(Local_113[11 /*33*/], 118, false);
								set_ped_config_flag(Local_113[11 /*33*/], 208, true);
								set_ped_config_flag(Local_113[10 /*33*/], 118, false);
								set_ped_config_flag(Local_113[10 /*33*/], 208, true);
								Local_385[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!is_ped_injured(Local_113[11 /*33*/]))
							{
								if (!is_ped_ragdoll(Local_113[11 /*33*/]))
								{
									if (is_synchronized_scene_running(Local_385[iParam0 /*10*/].f_7))
									{
										if (get_synchronized_scene_phase(Local_385[iParam0 /*10*/].f_7) == 1f)
										{
											Local_385[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											set_synchronized_scene_hold_last_frame(Local_385[iParam0 /*10*/].f_7, true);
											if (get_random_int_in_range(0, 3) < 2)
											{
												task_synchronized_scene(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!is_ped_injured(Local_113[10 /*33*/]))
												{
													if (!is_ped_ragdoll(Local_113[10 /*33*/]))
													{
														if (!BitTest(Local_385[iParam0 /*10*/].f_8, 0))
														{
															task_synchronized_scene(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
											else
											{
												task_synchronized_scene(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!is_ped_injured(Local_113[10 /*33*/]))
												{
													if (!is_ped_ragdoll(Local_113[10 /*33*/]))
													{
														if (!BitTest(Local_385[iParam0 /*10*/].f_8, 0))
														{
															task_synchronized_scene(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_385[iParam0 /*10*/].f_7 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										task_synchronized_scene(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
										set_synchronized_scene_hold_last_frame(Local_385[iParam0 /*10*/].f_7, true);
									}
								}
							}
							if (!is_ped_injured(Local_113[10 /*33*/]))
							{
								if (((has_entity_been_damaged_by_entity(Local_113[10 /*33*/], player_ped_id(), true) || is_ped_ragdoll(Local_113[10 /*33*/])) || is_ped_injured(Local_113[11 /*33*/])) || (!is_ped_injured(Local_113[10 /*33*/]) && get_script_task_status(Local_113[10 /*33*/], 1785177548) == 2))
								{
									if (!BitTest(Local_385[iParam0 /*10*/].f_8, 0))
									{
										clear_ped_tasks(Local_113[10 /*33*/]);
										func_99();
										task_smart_flee_ped(0, player_ped_id(), 30f, 20000, false, false);
										task_cower(0, -1);
										func_98(&(Local_113[10 /*33*/]), 0);
										set_bit(&(Local_385[iParam0 /*10*/].f_8), false);
									}
								}
							}
							if (!is_ped_injured(Local_113[11 /*33*/]))
							{
								if (((has_entity_been_damaged_by_entity(Local_113[11 /*33*/], player_ped_id(), true) || is_ped_ragdoll(Local_113[11 /*33*/])) || BitTest(Local_385[iParam0 /*10*/].f_8, 1)) || (!is_ped_injured(Local_113[11 /*33*/]) && get_script_task_status(Local_113[11 /*33*/], 1785177548) == 2))
								{
									set_entity_health(Local_113[11 /*33*/], 0, 0);
									if (!is_ped_ragdoll(Local_113[11 /*33*/]))
									{
									}
								}
							}
							if (func_73(player_ped_id(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (does_entity_exist(Local_113[11 /*33*/]) && does_entity_exist(Local_113[10 /*33*/]))
								{
									delete_ped(&(Local_113[11 /*33*/]));
									delete_ped(&(Local_113[10 /*33*/]));
								}
								set_model_as_no_longer_needed(joaat("ig_taocheng"));
								set_model_as_no_longer_needed(joaat("ig_taostranslator"));
								remove_anim_dict("misschinese2_crystalmaze");
								if (iLocal_379 != -1)
								{
									if (does_navmesh_blocking_object_exist(iLocal_379))
									{
										remove_navmesh_blocking_object(iLocal_379);
									}
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_73(player_ped_id(), 1995.169f, 3062.162f, 46.049f, 1) < 7f)
					{
						if (!is_ped_injured(Local_113[11 /*33*/]))
						{
							if (get_script_task_status(Local_113[11 /*33*/], 150319005) != 1)
							{
								task_look_at_entity(Local_113[11 /*33*/], player_ped_id(), 4000, 2096, 2);
							}
						}
						if (!is_ped_injured(Local_113[10 /*33*/]))
						{
							if (get_script_task_status(Local_113[10 /*33*/], 150319005) != 1)
							{
								task_look_at_entity(Local_113[10 /*33*/], player_ped_id(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_382 = 0;
					iVar13 = 0;
					while (iVar13 < Local_113.f_0)
					{
						if (does_entity_exist(Local_113[iVar13 /*33*/]))
						{
							if (is_ped_injured(Local_113[iVar13 /*33*/]))
							{
								if (Local_113[iVar13 /*33*/].f_21 == 0)
								{
									if (((get_ped_cause_of_death(Local_113[iVar13 /*33*/]) == 392730790 || get_ped_cause_of_death(Local_113[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || get_ped_cause_of_death(Local_113[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || get_ped_cause_of_death(Local_113[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_382++;
									}
									Local_113[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_382 > 0)
					{
					}
					if (iLocal_382 > 1)
					{
						func_171(150);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					_0x293220DA1B46CEBC(4f, 15f, 4);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_93(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (does_pickup_exist(iLocal_176))
					{
						remove_pickup(iLocal_176);
					}
					iVar14 = 0;
					set_bit(&iVar14, 3);
					set_bit(&iVar14, 8);
					set_bit(&iVar14, true);
					if (!does_pickup_exist(iLocal_176))
					{
						iLocal_176 = create_pickup(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, -1, true, 0);
						add_pickup_to_interior_room_by_name(iLocal_176, "V_8_BasementRm");
						iLocal_178 = func_170(iLocal_176);
						set_blip_name_from_text_file(iLocal_178, "FRMBLIP");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_172(1);
						start_audio_scene("CHI_2_SHOOTOUT_STEALTH");
						set_instance_priority_hint(1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					remove_anim_dict("misschinese2_barrelRoll");
					remove_anim_set("move_m@gangster@var_e");
					remove_anim_set("move_m@gangster@var_f");
					remove_anim_set("move_m@gangster@generic");
					remove_anim_dict("misschinese2_bank5");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = get_game_timer() + 4000;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (get_game_timer() > Local_385[iParam0 /*10*/].f_7)
							{
								Local_385[iParam0 /*10*/].f_7 = 0;
								while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
								{
									if (!is_ped_injured(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (get_interior_from_entity(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_105(Local_385[iParam0 /*10*/].f_7, 27, 0, 0);
											set_ped_relationship_group_hash(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], iLocal_117);
											func_134(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_385[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_385[iParam0 /*10*/].f_7 = 0;
					while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
					{
						if (!is_ped_injured(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (is_entity_in_angled_area(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, false, true, 0))
							{
								delete_ped(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_385[iParam0 /*10*/].f_7++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_113.f_0)
					{
						if (!is_ped_injured(Local_113[iVar15 /*33*/]))
						{
							if (get_room_key_from_entity(Local_113[iVar15 /*33*/]) != get_hash_key("V_8_BasementRm"))
							{
								func_105(iVar15, 27, 0, 0);
								Local_113[iVar15 /*33*/].f_1 = 5;
								Local_119[iVar15 /*24*/].f_3 = 7;
								Local_113[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_385[iParam0 /*10*/].f_7 != -1)
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!is_ped_injured(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_105(Local_385[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (is_ped_shooting(player_ped_id()) || func_93(9))
					{
						set_ped_using_action_mode(player_ped_id(), true, -1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					stop_audio_scene("CHI_2_SHOOTOUT_STEALTH");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					start_audio_scene("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (is_audio_scene_active("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						stop_audio_scene("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!is_audio_scene_active("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_93(12))
						{
							start_audio_scene("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_162(12))
					{
						stop_audio_scene("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_93(9) || (!is_ped_injured(Local_113[8 /*33*/]) && is_ped_in_combat(Local_113[8 /*33*/], 0))) || (!is_ped_injured(Local_113[9 /*33*/]) && is_ped_in_combat(Local_113[9 /*33*/], 0)))
					{
						if (!is_ped_injured(Local_113[8 /*33*/]))
						{
							set_ped_accuracy(Local_113[8 /*33*/], 45);
						}
						if (!is_ped_injured(Local_113[9 /*33*/]))
						{
							set_ped_accuracy(Local_113[9 /*33*/], 45);
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_93(9))
					{
						Local_385[iParam0 /*10*/].f_7 = 0;
						while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
						{
							if (!is_ped_injured(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								set_ped_seeing_range(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_385[iParam0 /*10*/].f_7++;
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_385[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_93(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
									{
										if (!is_ped_injured(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												set_ped_seeing_range(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_162(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
									{
										if (!is_ped_injured(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												set_ped_seeing_range(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							request_anim_dict("misschinese2_crystalmaze");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (has_anim_dict_loaded("misschinese2_crystalmaze"))
							{
								if (!is_ped_injured(Local_113[23 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_7 = create_synchronized_scene(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									set_synchronized_scene_looped(Local_385[iParam0 /*10*/].f_7, true);
									task_synchronized_scene(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], Local_385[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1000f, 0);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							request_model(joaat("blazer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (has_model_loaded(joaat("blazer")))
							{
								iLocal_146 = create_vehicle(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
								set_vehicle_on_ground_properly(iLocal_146, 5f);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					set_ped_using_action_mode(player_ped_id(), false, -1, 0);
					func_169(0);
					func_167();
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_93(29))
							{
								if (does_blip_exist(iLocal_178))
								{
									remove_blip(&iLocal_178);
								}
								func_12(0);
								if (func_90("FRMFLC", 0, 0))
								{
									clear_prints();
								}
								func_10(157, 0);
								_0x293220DA1B46CEBC(3f, 10f, 4);
								if (iLocal_167 == 0)
								{
									iLocal_167 = get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"));
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_93(29))
							{
								func_9(158, (iLocal_167 - get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_petrolcan"))), 1);
								iLocal_180 = get_closest_object_of_type(get_entity_coords(player_ped_id(), true), 20f, get_weapontype_model(joaat("weapon_petrolcan")), false, false, true);
								if (iLocal_180 != 0)
								{
									if (does_blip_exist(iLocal_178))
									{
										remove_blip(&iLocal_178);
									}
									iLocal_178 = func_13(iLocal_180);
									func_12(1);
									func_11(0, 157);
								}
								Local_385[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_385[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							request_waypoint_recording("arm2_30");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (get_is_waypoint_recording_loaded("arm2_30"))
							{
								if (func_93(29))
								{
									use_waypoint_recording_as_assisted_movement_route("arm2_30", true, 1f, 0.5f);
									assisted_movement_set_route_properties("arm2_30", 2);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_93(29))
							{
								use_waypoint_recording_as_assisted_movement_route("arm2_30", false, 1f, 0.5f);
								Local_385[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!is_ped_injured(player_ped_id()))
					{
						if (get_interior_from_entity(player_ped_id()) == 0)
						{
							if (func_73(player_ped_id(), 2451.08f, 4961.463f, 44.4392f, 1) < 20f)
							{
								set_radar_as_interior_this_frame(0, 0f, 0f, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					play_sound_from_coord(iLocal_171, "FarmhouseFire_Ignite", Local_172, "CHINESE2_SOUNDS", false, 0, false);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					start_audio_scene("CHI_2_POUR_GAS");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							request_script_audio_bank("FARMHOUSE_FIRE", false, -1);
							request_script_audio_bank("FARMHOUSE_FIRE_BG", false, -1);
							break;
					}
					break;
				
				case 39:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(4);
							Local_385[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_73(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 1) > 100f && func_4(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], player_ped_id(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_134(&(Local_113[iVar16 /*33*/].f_25));
								if (!is_ped_injured(Local_113[iVar16 /*33*/]))
								{
									set_ped_keep_task(Local_113[iVar16 /*33*/], true);
									set_ped_as_no_longer_needed(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_134(&(Local_113[iVar16 /*33*/].f_25));
								if (!is_ped_injured(Local_113[iVar16 /*33*/]))
								{
									set_ped_keep_task(Local_113[iVar16 /*33*/], true);
									set_ped_as_no_longer_needed(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!is_ped_injured(Local_113[iVar16 /*33*/]))
								{
									set_ped_keep_task(Local_113[iVar16 /*33*/], true);
									set_ped_as_no_longer_needed(&(Local_113[iVar16 /*33*/]));
								}
								func_134(&(Local_113[iVar16 /*33*/].f_25));
								Local_113[iVar16 /*33*/] = 0;
								if (is_vehicle_driveable(iLocal_145, false))
								{
									set_vehicle_as_no_longer_needed(&iLocal_145);
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_107(24, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						set_ped_accuracy(Local_113[24 /*33*/], 100);
						if (!is_ped_injured(Local_113[15 /*33*/]))
						{
							set_ped_accuracy(Local_113[15 /*33*/], 100);
						}
						if (!is_ped_injured(Local_113[16 /*33*/]))
						{
							set_ped_accuracy(Local_113[16 /*33*/], 100);
						}
						if (!is_ped_injured(Local_113[17 /*33*/]))
						{
							set_ped_accuracy(Local_113[17 /*33*/], 100);
						}
						task_combat_ped(Local_113[24 /*33*/], player_ped_id(), 0, 16);
						set_ped_target_loss_response(Local_113[24 /*33*/], 1);
						set_entity_health(Local_113[24 /*33*/], 200, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_385[iParam0 /*10*/].f_6 == -1)
			{
				Local_385[iParam0 /*10*/].f_3 = 1;
				Local_385[iParam0 /*10*/].f_6 = 0;
				Local_385[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (!func_168(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			stop_fire_in_range(Local_109[iVar0 /*5*/], 4f);
			clear_area(Local_109[iVar0 /*5*/], 2f, true, false, false, false);
			iVar1 = 0;
			while (iVar1 < Local_113.f_0)
			{
				if (does_entity_exist(Local_113[iVar1 /*33*/]))
				{
					Var2 = { get_entity_coords(Local_113[iVar1 /*33*/], false) };
					if (vdist2(Var2, Local_109[iVar0 /*5*/]) < 2f && Var2.f_2 > 43.9f)
					{
						delete_ped(&(Local_113[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_168(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_169(bool bParam0)
{
	int iVar0;
	
	bLocal_89 = true;
	iLocal_93 = 0;
	iLocal_91 = -1;
	iLocal_108 = 0;
	iLocal_108 = 0;
	iLocal_102 = 0;
	if (bParam0 == 0)
	{
		iLocal_86 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		remove_decals_in_range(Local_109[iVar0 /*5*/], 1f);
		if (!does_blip_exist(Local_109[iVar0 /*5*/].f_3))
		{
			if (!func_168(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_93++;
				Local_109[iVar0 /*5*/].f_3 = func_5(Local_109[iVar0 /*5*/], 0);
				set_blip_hidden_on_legend(Local_109[iVar0 /*5*/].f_3, true);
				set_blip_scale(Local_109[iVar0 /*5*/].f_3, 0.4f);
				show_height_on_blip(Local_109[iVar0 /*5*/].f_3, false);
				if (!bParam0)
				{
					set_blip_alpha(Local_109[iVar0 /*5*/].f_3, 0);
				}
				set_blip_colour(Local_109[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_109[iVar0 /*5*/] = { get_blip_coords(Local_109[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				set_blip_alpha(Local_109[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				set_blip_alpha(Local_109[iVar0 /*5*/].f_3, 255);
			}
			iLocal_93++;
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_101.f_0)
	{
		Local_101[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_170(int iParam0)
{
	int iVar0;
	
	if (!does_pickup_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_pickup(iParam0);
	set_blip_scale(iVar0, func_6(network_is_game_in_progress(), 0.7f, 0.7f));
	return iVar0;
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_63155 = 0;
	if (!Global_63379[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75249)
	{
		if (Global_75250[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75250[iVar1 /*9*/].f_1 = 1;
			Global_75250[iVar1 /*9*/].f_2 = 0f;
			if (Global_75250[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_172(bool bParam0)
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

var func_173()
{
	var uVar0;
	
	return uVar0;
}

int func_174()
{
	if (((((get_control_value(2, 30) != 127 || get_control_value(2, 31) != 127) || is_control_pressed(2, 24)) || is_control_pressed(2, 25)) || get_control_value(2, 2) != 127) || get_control_value(2, 1) != 127)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		return Local_385[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_388[0 /*8*/] != iParam0 && Local_388[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_388.f_0)
		{
			if (iVar1 <= iVar0)
			{
				Local_388[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_388[iVar1 /*8*/].f_1 = 1;
				Local_388[iVar1 /*8*/].f_2 = 0;
				Local_388[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_388[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_388.f_0)
	{
		switch (Local_388[iVar3 /*8*/])
		{
			case 2:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (Local_388[iVar3 /*8*/].f_4 == 0)
					{
						if (func_90("FRMCHSE_1", 0, 0))
						{
							Local_388[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_90("FRMCHSE_1", 0, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_162(7))
					{
						if (has_bullet_impacted_in_area(2493.155f, 4970.315f, 43.88038f, 3.25f, true, true) || is_bullet_in_area(2493.155f, 4970.315f, 43.88038f, 3.25f, true))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_388[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_388[iVar3 /*8*/].f_5 = func_18(8);
							Local_388[iVar3 /*8*/].f_6 = func_18(9);
							Local_388[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_388[iVar3 /*8*/].f_5 != -1 && Local_388[iVar3 /*8*/].f_6 != -1)
							{
								if (does_entity_exist(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) && does_entity_exist(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (is_ped_injured(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) || is_ped_injured(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_388[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (get_room_key_from_entity(player_ped_id()) == get_hash_key("V_8_BasementRm"))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (get_interior_from_entity(player_ped_id()) != 0 && is_entity_in_angled_area(player_ped_id(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (func_93(12))
				{
					if (!is_entity_in_angled_area(player_ped_id(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, false, true, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(player_ped_id(), 2451.517f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_388[iVar3 /*8*/].f_5 != -1)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (does_entity_exist(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (is_ped_injured(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_73(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/], 2427.851f, 4964.972f, 43.1704f, 1) < 3f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
									Local_388[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_388[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_113.f_0)
							{
								if (!is_ped_injured(Local_113[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_113[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_113.f_0;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_97(10, 0);
							}
							else
							{
								func_97(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_93(9))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_113.f_0)
						{
							if (Local_113[iVar7 /*33*/].f_1 == 1)
							{
								if (!is_ped_injured(Local_113[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_388[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_113.f_0;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_73(player_ped_id(), 2446.674f, 4977.788f, 57.4583f, 1) < 250f)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (is_ped_in_any_vehicle(player_ped_id(), false))
						{
							iVar9 = get_vehicle_ped_is_in(player_ped_id(), false);
							if (is_this_model_a_heli(get_entity_model(iVar9)) || is_this_model_a_plane(get_entity_model(iVar9)))
							{
								if (func_73(player_ped_id(), 2446.674f, 4977.788f, 57.4583f, 0) > 700f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (func_73(player_ped_id(), 2446.674f, 4977.788f, 57.4583f, 1) > 250f)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_73(player_ped_id(), 2441.065f, 4968.819f, 45.83075f, 1) < 2.75f)
				{
					if (!is_ped_injured(Local_113[15 /*33*/]))
					{
						if (func_73(Local_113[15 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!is_ped_injured(Local_113[16 /*33*/]))
					{
						if (func_73(Local_113[16 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!is_ped_injured(Local_113[17 /*33*/]))
					{
						if (func_73(Local_113[17 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!is_ped_injured(Local_113[4 /*33*/]) && is_ped_sitting_in_any_vehicle(Local_113[4 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!is_ped_injured(Local_113[5 /*33*/]) && is_ped_sitting_in_any_vehicle(Local_113[5 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!is_ped_injured(Local_113[7 /*33*/]) && is_ped_sitting_in_any_vehicle(Local_113[7 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						Local_388[iVar3 /*8*/].f_5 = get_game_timer() + 8000;
						break;
					
					case 1:
						if (is_vehicle_driveable(iLocal_145, false))
						{
							if (func_96(get_entity_coords(iLocal_145, true), 5f, 150f))
							{
								Local_388[iVar3 /*8*/].f_6 = (Local_388[iVar3 /*8*/].f_6 + floor((timestep() * 1000f)));
							}
						}
						if (Local_388[iVar3 /*8*/].f_6 > 1500)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						if (get_game_timer() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (does_pickup_exist(iLocal_176))
						{
							if (does_pickup_object_exist(iLocal_176))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (does_pickup_exist(iLocal_176))
						{
							if (!does_pickup_object_exist(iLocal_176))
							{
								if (is_explosion_in_sphere(-1, 2435.252f, 4966.748f, 41.3476f, 4f))
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_57 && !bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (is_entity_in_angled_area(player_ped_id(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (is_entity_in_angled_area(player_ped_id(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (is_entity_in_angled_area(player_ped_id(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_56)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (is_entity_in_angled_area(player_ped_id(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_388[iVar3 /*8*/].f_2 = 0;
				switch (Local_388[iVar3 /*8*/].f_5)
				{
					case 0:
						if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
						{
							Local_388[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_388[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
				{
					if (Local_388[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_388[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_109[0 /*5*/].f_4 == 1)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_388[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (get_current_ped_weapon(player_ped_id(), &iVar11, true))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (is_control_pressed(0, 24))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (is_explosion_in_angled_area(-1, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!is_explosion_in_angled_area(24, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !is_explosion_in_angled_area(22, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_180())
						{
							iVar12 = func_179();
							if (iVar12 <= 17)
							{
								func_97(37, 1);
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_178(17))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (get_interior_from_entity(player_ped_id()) != 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_73(player_ped_id(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_73(player_ped_id(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_177())
				{
					if (!func_180())
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = get_game_timer() + 30000;
						Local_388[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (get_game_timer() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(player_ped_id(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_153(1, 49))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_73(player_ped_id(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (get_player_wanted_level(player_id()) > 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_177()
{
	if (iLocal_102 == 1)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (get_number_of_fires_in_range(Local_109[iParam0 /*5*/], 0.6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	return iLocal_100;
}

int func_180()
{
	int iVar0;
	
	iVar0 = (Local_109.f_0 - 1);
	while (iVar0 >= 0)
	{
		if (Local_109[iVar0 /*5*/].f_4)
		{
			if (get_number_of_fires_in_range(Local_109[iVar0 /*5*/], 0.6f) > 0)
			{
				Local_99 = { Local_109[iVar0 /*5*/] };
				iLocal_100 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	_0x27CFB1B1E078CB2D();
	if ((func_201() && iLocal_150 > 0) && get_game_timer() > iLocal_159)
	{
		while (!is_screen_faded_out())
		{
			do_screen_fade_out(1000);
			func_28(28, 1);
		}
		iLocal_577 = 0;
		while (!func_200())
		{
			func_28(32322, 1);
		}
		set_entity_coords(player_ped_id(), 2474.97f, 4946.047f, 44.0297f, true, false, false, true);
		set_entity_heading(player_ped_id(), 230.6937f);
		set_ped_stealth_movement(player_ped_id(), false, 0);
		set_ped_using_action_mode(player_ped_id(), false, -1, 0);
		set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
		force_ped_ai_and_animation_update(player_ped_id(), false, false);
		func_192(0, 1, 1, 0, 0, 0, 0);
		destroy_all_cams(false);
		render_script_cams(false, false, 3000, true, false, 0);
		set_player_control(player_id(), true, 0);
		set_gameplay_cam_relative_heading(0f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		clear_prints();
		deactivate_audio_slowmo_mode("SLOW_MO_METH_HOUSE_RAYFIRE");
		iLocal_173 = get_rayfire_map_object(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_158 = 0;
		iLocal_163 = iLocal_163;
		iLocal_163 = 99;
		iLocal_150 = 99;
		iLocal_139 = 3;
		fLocal_138 = 10000f;
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
		stop_stream();
		_0x81CBAE94390F9F89();
		bLocal_165 = true;
	}
	hide_hud_and_radar_this_frame();
	switch (iLocal_150)
	{
		case 0:
			func_200();
			bLocal_165 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_109[iVar0 /*5*/] = { Local_109[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (is_audio_scene_active("CHI_2_POUR_GAS"))
			{
				stop_audio_scene("CHI_2_POUR_GAS");
			}
			if (is_audio_scene_active("CHI_2_SHOOT_GAS"))
			{
				stop_audio_scene("CHI_2_SHOOT_GAS");
			}
			start_audio_scene("CHI_2_GAS_TRAIL_FIRE");
			iLocal_159 = get_game_timer() + 1000;
			clear_area(2570.53f, 4982.057f, 50.6819f, 100f, true, false, false, false);
			set_player_control(player_id(), false, 0);
			set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
			func_87(0);
			iLocal_392 = 0;
			func_87(1);
			clear_prints();
			func_191(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (is_ped_in_any_vehicle(player_ped_id(), false))
			{
				set_entity_coords(player_ped_id(), 2455.941f, 4952.801f, 44.112f, true, false, false, true);
			}
			set_time_scale(1f);
			remove_anim_dict("misschinese2_barrelRoll");
			remove_anim_set("move_m@gangster@var_e");
			remove_anim_set("move_m@gangster@var_f");
			remove_anim_set("move_m@gangster@generic");
			remove_anim_dict("misschinese2_bank5");
			remove_anim_dict("misschinese2_bank1");
			remove_anim_dict("reaction@male_stand@big_variations@b");
			remove_anim_dict("reaction@male_stand@big_intro@left");
			remove_anim_dict("reaction@male_stand@big_intro@right");
			remove_anim_dict("reaction@male_stand@big_intro@backward");
			set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_02"));
			set_model_as_no_longer_needed(joaat("a_m_y_methhead_01"));
			set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
			set_model_as_no_longer_needed(joaat("burrito"));
			set_model_as_no_longer_needed(joaat("prop_cs_beer_bot_01"));
			set_ped_stealth_movement(player_ped_id(), false, 0);
			iVar1 = 0;
			while (iVar1 < Local_113.f_0)
			{
				if (does_entity_exist(Local_113[iVar1 /*33*/]))
				{
					delete_ped(&(Local_113[iVar1 /*33*/]));
				}
				if (does_entity_exist(Local_113[iVar1 /*33*/].f_20))
				{
					delete_object(&(Local_113[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_150++;
			break;
		
		case 1:
			if (is_screen_faded_out() && !is_screen_fading_in())
			{
				do_screen_fade_in(1000);
			}
			iLocal_150++;
			break;
	}
	if (iLocal_135)
	{
		iLocal_135 = 0;
		iVar2 = 0;
		while (iVar2 < Local_137.f_0)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_136.f_0)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_137.f_0)
	{
		if (iLocal_140[iVar2])
		{
			iLocal_140[iVar2] = 0;
			Local_137[iVar2 /*18*/] = { get_cam_coord(get_rendering_cam()) };
			Local_137[iVar2 /*18*/].f_3 = { get_cam_rot(get_rendering_cam(), 2) };
			Local_137[iVar2 /*18*/].f_14 = get_cam_fov(get_rendering_cam());
		}
		if (iLocal_141[iVar2])
		{
			iLocal_141[iVar2] = 0;
			Local_137[iVar2 /*18*/].f_6 = { get_cam_coord(get_rendering_cam()) };
			Local_137[iVar2 /*18*/].f_9 = { get_cam_rot(get_rendering_cam(), 2) };
			Local_137[iVar2 /*18*/].f_15 = get_cam_fov(get_rendering_cam());
		}
		iVar2++;
	}
	if (iLocal_133)
	{
		iLocal_133 = 0;
		bLocal_134 = false;
		iLocal_174 = 0;
		clear_area(2431.097f, 4967.043f, 41.3476f, 20f, true, false, false, false);
		func_190();
	}
	if (!bLocal_134)
	{
		if (is_srl_loaded())
		{
			_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
			begin_srl();
			iLocal_139 = -1;
			destroy_all_cams(false);
			func_192(1, 1, 1, 0, 0, 0, 0);
			request_anim_dict("misschinese2_crystalmaze");
			bLocal_134 = true;
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/] = 0;
			Local_136[0 /*6*/].f_4 = 0;
			Local_136[0 /*6*/].f_5 = 0;
			Local_136[1 /*6*/].f_4 = 0;
			Local_136[1 /*6*/].f_5 = 0;
			Local_136[2 /*6*/].f_4 = 0;
			Local_136[2 /*6*/].f_5 = 0;
			Local_136[3 /*6*/].f_4 = 0;
			Local_136[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			play_stream_frontend();
			_0x48621C9FCA3EBD28(4);
			switch (iLocal_166)
			{
				case 3:
					settimera(0);
					break;
				
				case 2:
					Local_136[0 /*6*/] = 1;
					Local_136[1 /*6*/] = 1;
					settimera(10900);
					iLocal_139 = 2;
					fLocal_138 = 10000f;
					break;
				
				case 1:
					Local_136[0 /*6*/] = 1;
					settimera(6400);
					iLocal_139 = 1;
					fLocal_138 = 10000f;
					break;
			}
			iLocal_143 = 0;
		}
	}
	if (bLocal_134)
	{
		set_srl_time(to_float(timera()));
	}
	if (bLocal_134)
	{
		fLocal_138 = (fLocal_138 + timestep());
		if (iLocal_139 == -1 || ((iLocal_139 != -1 && iLocal_139 < 4) && fLocal_138 > (Local_137[iLocal_139 /*18*/].f_13 / 1000f)))
		{
			iLocal_139++;
			if (iLocal_139 == 3)
			{
				if (has_anim_dict_loaded("misschinese2_crystalmaze"))
				{
					iLocal_155 = create_camera(964613260, true);
					iLocal_156 = create_synchronized_scene(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					play_synchronized_cam_anim(iLocal_155, iLocal_156, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!is_ped_injured(player_ped_id()))
					{
						task_synchronized_scene(player_ped_id(), iLocal_156, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1000f, 0);
					}
					render_script_cams(true, false, 3000, true, false, 0);
					func_190();
					set_game_pauses_for_streaming(true);
					fLocal_138 = 0f;
				}
			}
			else if (iLocal_139 < 4)
			{
				destroy_all_cams(false);
				iLocal_155 = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", Local_137[iLocal_139 /*18*/], Local_137[iLocal_139 /*18*/].f_3, Local_137[iLocal_139 /*18*/].f_14, true, 2);
				set_cam_params(iLocal_155, Local_137[iLocal_139 /*18*/].f_6, Local_137[iLocal_139 /*18*/].f_9, Local_137[iLocal_139 /*18*/].f_15, floor(Local_137[iLocal_139 /*18*/].f_12), Local_137[iLocal_139 /*18*/].f_16, 1, 2);
				render_script_cams(true, false, 3000, true, false, 0);
				if (iLocal_139 < 2)
				{
					func_189(Local_137[iLocal_139 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_189(Local_137[iLocal_139 /*18*/].f_17, 1, 0);
				}
				fLocal_138 = 0f;
			}
			else if (!bLocal_132)
			{
				destroy_all_cams(false);
				render_script_cams(false, false, 3000, true, false, 0);
				if (func_188() && !bLocal_165)
				{
					animpostfx_play("CamPushInNeutral", 0, false);
					play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
				set_player_control(player_id(), true, 0);
				set_game_pauses_for_streaming(false);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				func_187(0, 0, 1, 0);
				stop_audio_scene("CHI_2_GAS_TRAIL_FIRE");
				set_state_of_rayfire_map_object(iLocal_173, 9);
				set_time_scale(1f);
				end_srl();
				if (is_screen_faded_out())
				{
					while (get_state_of_rayfire_map_object(iLocal_173) != 10)
					{
						func_28(29, 1);
					}
					do_screen_fade_in(1000);
				}
				_0x81CBAE94390F9F89();
				func_182(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_136.f_0)
		{
			if (!Local_136[iVar3 /*6*/])
			{
				if (iLocal_139 == Local_136[iVar3 /*6*/].f_1 && fLocal_138 > (Local_136[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_143 = 0;
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_143++;
										if (iLocal_143 >= 12)
										{
											Local_136[iVar3 /*6*/].f_4 = 10;
											Local_136[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 200;
											Local_136[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										if (iLocal_143 == 2)
										{
											Local_136[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_136[iVar3 /*6*/].f_4 = 4;
										iLocal_143 = 3;
									}
									break;
								
								case 4:
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										func_128(Local_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_136[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_142[iLocal_143 + 1 /*3*/] + Local_142[iLocal_143 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_136[iVar3 /*6*/].f_4 = 6;
										iLocal_143 = 5;
									}
									break;
								
								case 6:
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										func_128(Local_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 200;
										Local_136[iVar3 /*6*/].f_4 = 2;
										iLocal_143 = 7;
									}
									break;
							}
							break;
						
						case 1:
							add_explosion(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, true, false, 1f, false);
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_174 = 1;
							Local_136[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (does_cam_exist(iLocal_155))
							{
								shake_cam(iLocal_155, "LARGE_EXPLOSION_SHAKE", fLocal_157);
								set_cam_motion_blur_strength(iLocal_155, 0.1f);
								Local_136[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									set_entity_coords(player_ped_id(), 2473.208f, 4947.625f, 44.0664f, true, false, false, true);
									set_entity_heading(player_ped_id(), 223.493f);
									set_gameplay_cam_relative_heading(0f);
									set_gameplay_cam_relative_pitch(-7f, 1f);
									if (func_188())
									{
										force_ped_motion_state(player_ped_id(), joaat("MotionState_Aiming"), true, 0, false);
										simulate_player_input_gait(player_id(), 1f, 3000, 0f, true, false);
									}
									else
									{
										force_ped_motion_state(player_ped_id(), joaat("MotionState_Walk"), true, 0, false);
										simulate_player_input_gait(player_id(), 1f, 500, 0f, true, false);
									}
									Local_136[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_175 = 1f;
									Local_136[iVar3 /*6*/].f_4++;
									Local_136[iVar3 /*6*/].f_5 = get_game_timer() + 1300;
									activate_audio_slowmo_mode("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_175 = (fLocal_175 - (timestep() * 1f));
									if (fLocal_175 < 0.2f)
									{
										fLocal_175 = 0.2f;
									}
									set_time_scale(fLocal_175);
									if (get_game_timer() > Local_136[iVar3 /*6*/].f_5)
									{
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_175 = (fLocal_175 + (timestep() * 1f));
									if (fLocal_175 > 1f)
									{
										fLocal_175 = 1f;
										Local_136[iVar3 /*6*/].f_4++;
										Local_136[iVar3 /*6*/] = 1;
									}
									deactivate_audio_slowmo_mode("SLOW_MO_METH_HOUSE_RAYFIRE");
									set_time_scale(fLocal_175);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_182(int iParam0)
{
	func_186();
	func_185();
	func_184();
	func_183();
	if (iParam0 == 11)
	{
		iLocal_149++;
	}
	else
	{
		iLocal_149 = iParam0;
	}
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_390.f_0)
	{
		Local_390[iVar0 /*7*/] = 0;
		Local_390[iVar0 /*7*/].f_1 = 0;
		Local_390[iVar0 /*7*/].f_3 = 0;
		Local_390[iVar0 /*7*/].f_2 = 0;
		Local_390[iVar0 /*7*/].f_4 = 0;
		Local_390[iVar0 /*7*/].f_5 = 0;
		Local_390[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_385.f_0)
	{
		if (Local_385[iVar0 /*10*/].f_4)
		{
			Local_385[iVar0 /*10*/].f_1 = 1;
			Local_385[iVar0 /*10*/].f_6 = -1;
			func_166(iVar0, Local_385[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_385[iVar0 /*10*/] = 0;
		Local_385[iVar0 /*10*/].f_1 = 0;
		Local_385[iVar0 /*10*/].f_2 = 0;
		Local_385[iVar0 /*10*/].f_3 = 0;
		Local_385[iVar0 /*10*/].f_6 = 0;
		Local_385[iVar0 /*10*/].f_4 = 0;
		Local_385[iVar0 /*10*/].f_5 = 0;
		Local_385[iVar0 /*10*/].f_7 = 0;
		Local_385[iVar0 /*10*/].f_8 = 0;
		Local_385[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_185()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_388.f_0)
	{
		Local_388[iVar0 /*8*/] = 0;
		Local_388[iVar0 /*8*/].f_1 = 0;
		Local_388[iVar0 /*8*/].f_2 = 0;
		Local_388[iVar0 /*8*/].f_3 = 0;
		Local_388[iVar0 /*8*/].f_4 = 0;
		Local_388[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_186()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_389.f_0)
	{
		Local_389[iVar0 /*4*/] = 0;
		Local_389[iVar0 /*4*/].f_1 = 0;
		Local_389[iVar0 /*4*/].f_2 = 0;
		Local_389[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_187(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_188()
{
	if (get_cam_view_mode_for_context(_get_cam_active_view_mode_context()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iLocal_103 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_102 = 1;
		iLocal_104 = get_game_timer();
		iLocal_105 = iParam0 * 2;
		iLocal_107 = iLocal_105;
		if (bParam1)
		{
			iLocal_108 = 0;
		}
		else
		{
			iLocal_108 = iLocal_105;
		}
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_101.f_0)
		{
			remove_script_fire(Local_101[iVar0 /*5*/]);
			if (Local_101[iVar0 /*5*/].f_4 != 0)
			{
				fade_decals_in_range(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_101[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_101.f_0)
	{
		remove_script_fire(Local_101[iVar0 /*5*/]);
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_169(0);
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (does_blip_exist(Local_109[iVar0 /*5*/].f_3))
		{
			remove_blip(&(Local_109[iVar0 /*5*/].f_3));
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_93 = -1;
}

void func_191(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_76(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_192(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		special_ability_deactivate_fast(player_id(), 0);
		set_all_random_peds_flee(player_id(), true);
		set_police_ignore_player(player_id(), true);
		func_199(1);
		thefeed_flush_queue();
		thefeed_pause();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_45())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_187(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_199(0);
		thefeed_resume();
		Global_63160 = 0;
		if (bParam1)
		{
			cascade_shadows_init_session();
		}
		set_all_random_peds_flee(player_id(), false);
		set_police_ignore_player(player_id(), false);
		func_187(0, bParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((((!is_ped_injured(player_ped_id()) && !func_197(player_id())) && !func_194(player_id(), 0)) && !func_193()) && !bParam4) && !bParam5)
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (((!is_ped_injured(player_ped_id()) && !func_197(player_id())) && !bParam4) && !bParam5)
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_78317 = 0;
	}
}

bool func_193()
{
	return BitTest(Global_1853348[player_id() /*834*/].f_36.f_18, 14);
}

bool func_194(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == player_id())
	{
		bVar0 = func_195(-1, 0) == 8;
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

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_196();
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

int func_196()
{
	return Global_1574918;
}

int func_197(int iParam0)
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_198())
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

bool func_198()
{
	return BitTest(Global_2621446, 3);
}

void func_199(int iParam0)
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

int func_200()
{
	switch (iLocal_577)
	{
		case 0:
			request_model(joaat("cs2_03_fmhse_vfx_parent"));
			request_model(joaat("cs2_03_fmhse_vfx_parent001"));
			request_model(joaat("cs2_03_fmhse_vfx_parent002"));
			request_model(joaat("cs2_03_fmhse_vfx_parent003"));
			request_model(joaat("cs2_03_fmhse_vfx_parent004"));
			request_model(joaat("cs2_03_fmhse_vfx_parent005"));
			request_model(joaat("cs2_03_fmhse_vfx_parent006"));
			request_model(joaat("cs2_03_fmhse_vfx_parent007"));
			request_model(joaat("cs2_03_fmhse_vfx_parent008"));
			request_model(joaat("cs2_03_fmhse_vfx_parent009"));
			request_model(joaat("cs2_03_fmhse_vfx_parent010"));
			request_model(joaat("cs2_03_fmhse_vfx_parent011"));
			request_model(joaat("cs2_03_fmhse_vfx_parent012"));
			request_model(joaat("cs2_03_fmhse_vfx_parent013"));
			request_model(joaat("cs2_03_fmhse_vfx_parent014"));
			request_model(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_577++;
			break;
		
		case 1:
			if (((((((((((((((has_model_loaded(joaat("cs2_03_fmhse_vfx_parent")) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent001"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent002"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent003"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent004"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent005"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent006"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent007"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent008"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent009"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent010"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent011"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent012"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent013"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent014"))) && has_model_loaded(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_201()
{
	if (is_pause_menu_active())
	{
		return 0;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_202()
{
	_0x27CFB1B1E078CB2D();
	func_176(28, 45);
	func_155(0, 7, 0, 0, 1, 0, 1, 0);
	func_155(1, 8, 2, 29, 1, 0, 1, 0);
	func_155(2, 9, 2, 35, 5, 34, 1, 0);
	func_155(3, 10, 2, 42, 1, 0, 1, 0);
	func_163(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_163(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_163(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_204(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_166(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_166(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_166(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_203(0, 2, 33, 5, 34);
	func_203(4, 2, 43, 1, 0);
	func_203(2, 2, 39, 1, 0);
	if (iLocal_166 == 0)
	{
		if (func_93(37) && !func_93(44))
		{
			iLocal_166 = 3;
		}
		if (func_93(41) && !func_93(44))
		{
			iLocal_164 = 1;
			iLocal_166 = 1;
		}
		if (func_175(10, 11) == 2)
		{
			iLocal_166 = 2;
			iLocal_164 = 1;
		}
	}
	func_166(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_93(37) && func_93(38)) || iLocal_164) && func_175(13, 10) == 10) && !func_88("CHI2_light"))
	{
		func_203(1, 2, 40, 1, 0);
		if (does_blip_exist(iLocal_178))
		{
			remove_blip(&iLocal_178);
		}
		_0x293220DA1B46CEBC(10f, 5f, 4);
		func_12(1);
		func_182(11);
	}
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_158(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_136("CHFAIL1");
				break;
			
			case 1:
				func_136("FRMSOON");
				break;
			
			case 2:
				func_136("FRMTRAI");
				break;
			
			case 3:
				if (does_entity_exist(Local_113[11 /*33*/]))
				{
					if (is_ped_injured(Local_113[11 /*33*/]))
					{
						func_136("FRMCHI");
					}
				}
				if (does_entity_exist(Local_113[10 /*33*/]))
				{
					if (is_ped_injured(Local_113[10 /*33*/]))
					{
						func_136("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_136("CHFAIL2");
				break;
			
			case 5:
				func_136("FRMGASF");
				break;
			}
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_205(iParam2, iParam3))
		{
			func_163(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_205(int iParam0, int iParam1)
{
	if (Local_390[iParam0 /*7*/] == iParam1)
	{
		if (Local_390[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_390[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_206()
{
	func_176(5, 31);
	func_155(0, 2, 0, 0, 1, 0, 1, 0);
	func_155(1, 3, 2, 8, 1, 0, 1, 0);
	func_155(2, 5, 2, 9, 1, 0, 1, 0);
	func_155(3, 11, 0, 0, 1, 0, 1, 0);
	func_155(4, 4, 2, 12, 1, 0, 1, 0);
	func_166(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_166(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_166(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_166(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_166(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_166(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_166(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_166(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_166(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_166(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_166(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_163(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_163(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_163(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_163(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_163(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_163(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_163(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_163(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_163(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_163(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_203(4, 2, 24, 1, 0);
	func_203(5, 2, 30, 1, 0);
	if (func_93(11) && func_93(29))
	{
		func_182(7);
	}
}

void func_207()
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	_0x9A75585FB2E54FAD(2004.447f, 3076.807f, 46.6069f, 10f);
	_0xE36A98D8AB3D3C66(true);
	if (((func_201() && iLocal_150 > 0) && iLocal_150 < 7) && get_game_timer() > iLocal_159)
	{
		iLocal_150 = 10;
		iLocal_158 = 0;
		bLocal_165 = true;
	}
	if (iLocal_150 < 10)
	{
		if (is_screen_faded_out() && !is_screen_fading_in())
		{
			do_screen_fade_in(1000);
		}
	}
	if (iLocal_375)
	{
		set_srl_time(to_float(timera()));
	}
	hide_hud_and_radar_this_frame();
	switch (iLocal_150)
	{
		case 0:
			if (is_srl_loaded())
			{
				request_cutscene("CHI_2_MCS_5", 8);
				iLocal_374 = 1;
				bLocal_165 = false;
				_0xBEB2D9A1D9A8F55A(5, 5, 5, 5);
				begin_srl();
				cascade_shadows_enable_entity_tracker(false);
				iLocal_378 = 0;
				iLocal_375 = 1;
				Var0 = { get_entity_coords(player_ped_id(), true) };
				fVar1 = func_102(2458.223f, 4986.042f, 49.05241f, Var0, 1);
				if (fVar1 > 180f)
				{
					fVar1 = (fVar1 - 360f);
				}
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					iVar2 = get_vehicle_ped_is_in(player_ped_id(), false);
				}
				if (((is_vehicle_driveable(iVar2, false) && is_this_model_a_heli(get_entity_model(iVar2))) && is_entity_in_air(iVar2)) || ((is_vehicle_driveable(iVar2, false) && is_this_model_a_plane(get_entity_model(iVar2))) && is_entity_in_air(iVar2)))
				{
					if (fVar1 < func_223(-2.5f) && fVar1 > func_223(0.5f))
					{
						iLocal_150 = 6;
						settimera(30000);
						set_srl_time(30000f);
						iLocal_158 = 36000;
					}
					else
					{
						iLocal_150 = 7;
						settimera(36000);
						set_srl_time(36000f);
						iLocal_158 = 42000;
					}
				}
				else
				{
					if (does_entity_exist(iVar2))
					{
						if (is_vehicle_driveable(iVar2, false))
						{
							if (!(is_this_model_a_heli(get_entity_model(iVar2)) && is_entity_in_air(iVar2)) && !(is_this_model_a_plane(get_entity_model(iVar2)) && is_entity_in_air(iVar2)))
							{
								set_vehicle_on_ground_properly(iVar2, 5f);
							}
						}
					}
					if (fVar1 < func_223(-1.33f) && fVar1 > func_223(-1.92f))
					{
						iLocal_150 = 1;
						settimera(0);
						set_srl_time(0f);
						iLocal_158 = 6000;
					}
					else if (fVar1 < func_223(0.96f) && fVar1 > func_223(-1.33f))
					{
						iLocal_150 = 2;
						settimera(6000);
						set_srl_time(6000f);
						iLocal_158 = 12000;
					}
					else if (fVar1 < func_223(2.29f) && fVar1 > func_223(0.96f))
					{
						iLocal_150 = 3;
						settimera(12000);
						set_srl_time(12000f);
						iLocal_158 = 18000;
					}
					else if (fVar1 < func_223(-2.81f) || fVar1 > func_223(2.29f))
					{
						iLocal_150 = 4;
						settimera(18000);
						set_srl_time(18000f);
						iLocal_158 = 24000;
					}
					else
					{
						settimera(24000);
						set_srl_time(24000f);
						iLocal_158 = 30000;
						iLocal_150 = 5;
					}
				}
				iLocal_376 = 1;
				destroy_all_cams(false);
				func_218(&Local_184, 1, 0);
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					iLocal_84 = get_vehicle_ped_is_in(player_ped_id(), false);
					Local_112 = { get_entity_velocity(iLocal_84) };
					freeze_entity_position(iLocal_84, true);
					set_entity_visible(iLocal_84, false, false);
				}
				play_stream_frontend();
				if (iLocal_150 == 1)
				{
					iLocal_378 = 1;
					func_75(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (does_entity_exist(iVar2))
					{
						if (is_vehicle_driveable(iVar2, false))
						{
							set_vehicle_engine_on(iVar2, false, true, false);
						}
					}
					clear_area(2445.139f, 4978.642f, 52.1489f, 150f, true, true, false, false);
					clear_area(2578.523f, 4982.284f, 51.4416f, 13f, true, false, false, false);
					set_entity_coords(player_ped_id(), 2578.419f, 4981.901f, 50.587f, true, false, false, true);
					set_entity_heading(player_ped_id(), 49.2184f);
					clear_ped_tasks_immediately(player_ped_id());
					force_ped_ai_and_animation_update(player_ped_id(), false, false);
					set_ped_min_move_blend_ratio(player_ped_id(), 1f);
					force_ped_motion_state(player_ped_id(), joaat("MotionState_Walk"), false, 0, false);
					open_sequence_task(&iVar3);
					task_go_straight_to_coord(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 40000f, 0.5f);
					task_achieve_heading(0, 88.7065f, 0);
					close_sequence_task(iVar3);
					task_perform_sequence(player_ped_id(), iVar3);
					clear_sequence_task(&iVar3);
					iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
					add_cam_spline_node(iLocal_155, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					add_cam_spline_node(iLocal_155, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					set_cam_fov(iLocal_155, 34.9f);
					set_cam_spline_smoothing_style(iLocal_155, 0);
				}
				else
				{
					switch (iLocal_150)
					{
						case 2:
							iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_155, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							add_cam_spline_node(iLocal_155, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							set_cam_fov(iLocal_155, 28.5f);
							set_cam_spline_smoothing_style(iLocal_155, 0);
							break;
						
						case 3:
							iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_155, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							add_cam_spline_node(iLocal_155, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							set_cam_fov(iLocal_155, 28.5f);
							set_cam_spline_smoothing_style(iLocal_155, 0);
							break;
						
						case 4:
							iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_155, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							add_cam_spline_node(iLocal_155, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							set_cam_fov(iLocal_155, 29.8f);
							set_cam_spline_smoothing_style(iLocal_155, 0);
							break;
						
						case 5:
							iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_155, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							add_cam_spline_node(iLocal_155, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							set_cam_fov(iLocal_155, 28.5f);
							set_cam_spline_smoothing_style(iLocal_155, 0);
							break;
						
						case 6:
							iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							add_cam_spline_node(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							set_cam_fov(iLocal_155, 28.5f);
							set_cam_spline_smoothing_style(iLocal_155, 0);
							break;
						
						case 7:
							iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
							add_cam_spline_node(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							add_cam_spline_node(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							set_cam_fov(iLocal_155, 28.5f);
							set_cam_spline_smoothing_style(iLocal_155, 0);
							break;
						}
				}
				if (iLocal_150 < 6)
				{
					shake_cam(iLocal_155, "Hand_shake", 0.2f);
				}
				else
				{
					shake_cam(iLocal_155, "Hand_shake", 0.7f);
				}
				set_cam_active(iLocal_155, true);
				render_script_cams(true, false, 3000, true, false, 0);
				_0x48621C9FCA3EBD28(4);
				start_audio_scene("CHI_2_FARMHOUSE_OVERVIEW");
				func_211(1);
				set_wanted_level_multiplier(0f);
				set_max_wanted_level(0);
				clear_prints();
				clear_help(true);
				set_player_control(player_id(), false, 32);
				func_192(1, 1, 1, 0, 0, 0, 0);
				set_ped_stealth_movement(player_ped_id(), false, 0);
				iLocal_159 = get_game_timer() + 1000;
				iVar4 = 0;
				while (iVar4 < Local_113.f_0)
				{
					if (!is_ped_injured(Local_113[iVar4 /*33*/]))
					{
						stop_ped_speaking(Local_113[iVar4 /*33*/], true);
					}
					iVar4++;
				}
				iLocal_160 = create_ped(26, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, true, true);
				give_weapon_to_ped(iLocal_160, joaat("weapon_microsmg"), -1, true, true);
				if (!is_ped_injured(iLocal_160))
				{
					func_99();
					task_set_blocking_of_non_temporary_events(0, true);
					task_follow_nav_mesh_to_coord(0, 2463.016f, 4974.97f, 45.5765f, 1f, -1, 0.5f, true, 40000f);
					task_follow_nav_mesh_to_coord(0, 2452.833f, 4964.785f, 45.5765f, 1f, -1, 0.5f, true, 40000f);
					task_pause(0, 500);
					task_follow_nav_mesh_to_coord(0, 2460.449f, 4976.938f, 45.5765f, 1f, -1, 0.5f, false, 40000f);
					func_98(&iLocal_160, 1);
				}
				iLocal_147 = create_vehicle(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, true, true, false);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_150 = 3;
			}
			break;
		
		case 3:
			if (timera() > iLocal_158)
			{
				destroy_all_cams(false);
				iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
				add_cam_spline_node(iLocal_155, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				add_cam_spline_node(iLocal_155, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				set_cam_fov(iLocal_155, 34f);
				set_cam_spline_smoothing_style(iLocal_155, 0);
				shake_cam(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3500;
				iLocal_150++;
			}
			break;
		
		case 4:
			if (timera() > iLocal_158)
			{
				destroy_all_cams(false);
				iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
				add_cam_spline_node(iLocal_155, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				add_cam_spline_node(iLocal_155, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				set_cam_fov(iLocal_155, 34f);
				set_cam_spline_smoothing_style(iLocal_155, 0);
				shake_cam(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3000;
				iLocal_150++;
			}
			break;
		
		case 5:
			iLocal_377 = 1;
			if (timera() > iLocal_158)
			{
				iLocal_377 = 1;
				destroy_all_cams(false);
				iLocal_155 = create_cam("DEFAULT_SPLINE_CAMERA", true);
				add_cam_spline_node(iLocal_155, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				add_cam_spline_node(iLocal_155, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				set_cam_fov(iLocal_155, 37.34f);
				set_cam_spline_smoothing_style(iLocal_155, 0);
				shake_cam(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 2500;
				iLocal_150++;
			}
			break;
		
		case 6:
			if (timera() > iLocal_158)
			{
				if (func_210())
				{
					clear_prints();
					clear_help(true);
					set_first_person_aim_cam_zoom_factor(6.818f);
					if (is_vehicle_driveable(iLocal_147, false))
					{
						register_entity_for_cutscene(iLocal_147, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					start_cutscene(0);
					iLocal_374 = 0;
					iLocal_150 = 11;
				}
			}
			break;
		
		case 10:
			if (does_entity_exist(iLocal_84) && is_vehicle_driveable(iLocal_84, false))
			{
				request_vehicle_high_detail_model(iLocal_84);
			}
			if (!is_screen_faded_out() && !is_screen_fading_out())
			{
				do_screen_fade_out(500);
			}
			if ((is_screen_faded_out() && !is_cutscene_playing()) || (is_cutscene_active() && can_set_exit_state_for_camera(true)))
			{
				iLocal_150++;
			}
			break;
		
		case 11:
			if (does_entity_exist(iLocal_84) && is_vehicle_driveable(iLocal_84, false))
			{
				request_vehicle_high_detail_model(iLocal_84);
			}
			if ((is_screen_faded_out() && !is_cutscene_playing()) || (is_cutscene_active() && can_set_exit_state_for_camera(true)))
			{
				destroy_all_cams(false);
				render_script_cams(false, false, 3000, true, false, 0);
				if (func_188() && !bLocal_165)
				{
					animpostfx_play("CamPushInNeutral", 0, false);
					play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
				_0x81CBAE94390F9F89();
				if (func_73(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && func_73(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					set_entity_coords(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, true, false, false, true);
					set_entity_heading(player_ped_id(), 98.21f);
				}
				else if (!is_ped_in_any_vehicle(player_ped_id(), false))
				{
					set_entity_heading(player_ped_id(), func_102(get_entity_coords(player_ped_id(), true), 2458.223f, 4986.042f, 49.05241f, 1));
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-6.3f, 1f);
				set_first_person_aim_cam_zoom_factor(6.818f);
				force_ped_ai_and_animation_update(player_ped_id(), false, false);
				stop_stream();
				stop_audio_scene("CHI_2_FARMHOUSE_OVERVIEW");
				clear_prints();
				clear_help(true);
				set_player_control(player_id(), true, 0);
				func_211(0);
				if (has_ped_got_weapon(player_ped_id(), joaat("weapon_sniperrifle"), false))
				{
					if (get_ammo_in_ped_weapon(player_ped_id(), joaat("weapon_sniperrifle")) < 15)
					{
						add_ammo_to_ped(player_ped_id(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_192(0, 1, 1, 0, 0, 0, 0);
				if (does_entity_exist(iLocal_160))
				{
					delete_ped(&iLocal_160);
				}
				iLocal_380 = func_18(4);
				if (iLocal_380 != -1)
				{
					if (!is_ped_injured(Local_113[iLocal_380 /*33*/]))
					{
						delete_ped(&(Local_113[iLocal_380 /*33*/]));
					}
					if (does_entity_exist(Local_113[iLocal_380 /*33*/].f_20))
					{
						delete_object(&(Local_113[iLocal_380 /*33*/].f_20));
					}
					Local_119[iLocal_380 /*24*/].f_3 = 1;
					Local_113[iLocal_380 /*33*/].f_5 = 0;
					Local_113[iLocal_380 /*33*/].f_14 = 0;
					Local_113[iLocal_380 /*33*/].f_3 = 2;
				}
				iLocal_381 = func_18(5);
				if (iLocal_381 != -1)
				{
					if (!is_ped_injured(Local_113[iLocal_381 /*33*/]))
					{
						delete_ped(&(Local_113[iLocal_381 /*33*/]));
					}
					if (does_entity_exist(Local_113[iLocal_381 /*33*/].f_20))
					{
						delete_object(&(Local_113[iLocal_381 /*33*/].f_20));
					}
					Local_119[iLocal_381 /*24*/].f_3 = 1;
					Local_113[iLocal_381 /*33*/].f_5 = 0;
					Local_113[iLocal_381 /*33*/].f_14 = 0;
					Local_113[iLocal_381 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!is_ped_injured(iLocal_161))
				{
					delete_ped(&iLocal_161);
				}
				if (!is_ped_injured(iLocal_162))
				{
					delete_ped(&iLocal_162);
				}
				if (func_74(iLocal_147))
				{
					delete_vehicle(&iLocal_147);
				}
				if (does_entity_exist(iLocal_183))
				{
					delete_object(&iLocal_183);
				}
				func_208();
				iLocal_111 = 0;
				func_27();
				set_model_as_no_longer_needed(joaat("prop_phone_ing"));
				set_model_as_no_longer_needed(joaat("dubsta"));
				iVar5 = 0;
				while (iVar5 < Local_113.f_0)
				{
					if (!is_ped_injured(Local_113[iVar5 /*33*/]))
					{
						stop_ped_speaking(Local_113[iVar5 /*33*/], false);
					}
					iVar5++;
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-6.3f, 1f);
				if (does_entity_exist(iLocal_84))
				{
					if (is_vehicle_driveable(iLocal_84, false))
					{
						freeze_entity_position(iLocal_84, false);
						if (is_this_model_a_plane(get_entity_model(iLocal_84)))
						{
							set_entity_velocity(iLocal_84, Local_112);
							set_ped_into_vehicle(player_ped_id(), iLocal_84, -1);
						}
						set_vehicle_engine_on(iLocal_84, true, true, false);
						if (is_this_model_a_heli(get_entity_model(iLocal_84)))
						{
							set_entity_rotation(iLocal_84, 0f, 0f, get_entity_heading(iLocal_84), 2, true);
							set_heli_blades_full_speed(iLocal_84);
							set_entity_velocity(iLocal_84, 1f, 1f, 1f);
							set_ped_into_vehicle(player_ped_id(), iLocal_84, -1);
						}
						if (iLocal_378 == 0)
						{
							set_ped_into_vehicle(player_ped_id(), iLocal_84, -1);
						}
						set_entity_visible(iLocal_84, true, false);
					}
				}
				set_entity_visible(player_ped_id(), true, false);
				special_ability_fill_meter(player_id(), true, 0);
				end_srl();
				if (is_screen_faded_out())
				{
					do_screen_fade_in(1000);
				}
				cascade_shadows_enable_entity_tracker(true);
				func_182(11);
			}
			break;
	}
}

void func_208()
{
	int iVar0;
	
	if (does_entity_exist(iLocal_145))
	{
		delete_vehicle(&iLocal_145);
	}
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (does_entity_exist(Local_113[iVar0 /*33*/]))
		{
			delete_ped(&(Local_113[iVar0 /*33*/]));
		}
		if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
		{
			delete_object(&(Local_113[iVar0 /*33*/].f_20));
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (does_pickup_exist(iLocal_168))
	{
		remove_pickup(iLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (does_pickup_exist(iLocal_169[iVar0]))
		{
			remove_pickup(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_170)
	{
		if (does_entity_exist(iLocal_170[iVar0]))
		{
			delete_object(&(iLocal_170[iVar0]));
		}
		iVar0++;
	}
	func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
}

void func_209(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam5, int iParam6)
{
	int iVar0;
	
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	Local_71 = { Param4 };
	fLocal_72 = fParam5;
	Local_77 = { *uParam1 };
	cLocal_78 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_53 = false;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_56 = false;
	iLocal_57 = 0;
	bLocal_75 = true;
	iLocal_74 = 0;
	iLocal_58 = 0;
	iLocal_60 = 0;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	block_decision_maker_event(joaat("DEFAULT"), 31);
	iLocal_52 = 0;
}

bool func_210()
{
	bool bVar0;
	
	bVar0 = has_cutscene_loaded();
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
		}
	}
	return bVar0;
}

void func_211(bool bParam0)
{
	if (bParam0)
	{
		func_217();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			set_bit(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_216(0))
		{
			func_212(0);
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

void func_212(int iParam0)
{
	if (func_215())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_214())
		{
			func_213(1, 1);
		}
		else
		{
			func_213(0, 0);
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
	if (!func_45())
	{
		Global_20266.f_1 = 3;
	}
}

void func_213(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_216(0))
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

bool func_214()
{
	return BitTest(Global_1958711, 5);
}

bool func_215()
{
	return BitTest(Global_1958711, 19);
}

int func_216(int iParam0)
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

void func_217()
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_218(int* iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_222(iParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (does_blip_exist(iParam0->f_1[bVar0]))
		{
			remove_blip(&(iParam0->f_1[bVar0]));
		}
		func_221(bVar0, iParam0);
		func_220(bVar0, iParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			clear_bit(&(iParam0->f_13), bVar0);
			clear_bit(&(iParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!is_ped_injured(iParam0->f_17[bVar0]))
		{
			set_ped_can_play_ambient_anims(iParam0->f_17[bVar0], true);
			set_ped_can_play_ambient_base_anims(iParam0->f_17[bVar0], true);
			if (bParam2)
			{
				set_ped_config_flag(iParam0->f_17[bVar0], 32, true);
				set_ped_config_flag(iParam0->f_17[bVar0], 305, false);
			}
			set_ped_config_flag(iParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (is_ped_group_member(iParam0->f_17[bVar0], func_219()) && iParam0->f_17[bVar0] != player_ped_id())
				{
					remove_ped_from_group(iParam0->f_17[bVar0]);
				}
			}
			if (!BitTest(iParam0->f_13, 29))
			{
				set_ped_using_action_mode(iParam0->f_17[bVar0], false, -1, 0);
			}
			iParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (is_player_playing(player_id()))
	{
		set_ped_can_play_ambient_anims(player_ped_id(), true);
		set_ped_can_play_ambient_base_anims(player_ped_id(), true);
	}
	if (is_player_playing(player_id()))
	{
		if (bParam2)
		{
			set_ped_config_flag(player_ped_id(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_219()
{
	return get_player_group(get_player_index());
}

void func_220(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(&(uParam1->f_13), 17);
			break;
		
		case 1:
			clear_bit(&(uParam1->f_13), 18);
			break;
		
		case 2:
			clear_bit(&(uParam1->f_13), 19);
			break;
	}
}

void func_221(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(&(uParam1->f_13), 14);
			break;
		
		case 1:
			clear_bit(&(uParam1->f_13), 15);
			break;
		
		case 2:
			clear_bit(&(uParam1->f_13), 16);
			break;
	}
}

void func_222(var uParam0)
{
	if (does_blip_exist(uParam0->f_5))
	{
		remove_blip(&(uParam0->f_5));
	}
}

float func_223(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_224()
{
	int iVar0;
	
	func_176(1, 4);
	func_166(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_166(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 1, 2, 2, 1, 0, 1, 0);
	func_203(3, 0, 0, 1, 0);
	if ((func_73(player_ped_id(), 2458.223f, 4986.042f, 49.05241f, 0) < 107.9f || is_entity_in_angled_area(player_ped_id(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, false, false, 0)) || is_entity_in_angled_area(player_ped_id(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, false, false, 0))
	{
		if (does_blip_exist(Local_184.f_5))
		{
			set_blip_route(Local_184.f_6, false);
		}
		func_182(11);
	}
	else
	{
		switch (iLocal_150)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_268(5, -20);
				set_wanted_level_multiplier(0f);
				set_max_wanted_level(0);
				iLocal_150++;
				break;
			
			case 1:
				if (func_228(&Local_184, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					_0x293220DA1B46CEBC(6f, 6f, 3);
					iLocal_150++;
					func_218(&Local_184, 1, 0);
					func_31(3, 1);
					if (is_audio_scene_active("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						stop_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (is_audio_scene_active("CHI_2_DRIVE_ROCK_RADIO"))
					{
						stop_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (is_ped_in_any_vehicle(player_ped_id(), false))
				{
					iVar0 = get_vehicle_ped_is_using(player_ped_id());
					if (func_226(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_225(5) > 2)
						{
							iLocal_150++;
						}
					}
				}
				else
				{
					iLocal_150++;
				}
				break;
			
			case 3:
				if (func_228(&Local_184, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (is_audio_scene_active("CHI_2_DRIVE_ROCK_RADIO"))
					{
						stop_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
					}
					_0x293220DA1B46CEBC(5f, 10f, 4);
					func_182(11);
				}
				if (does_blip_exist(Local_184.f_5))
				{
					set_blip_route(Local_184.f_6, false);
				}
				break;
			}
	}
}

int func_225(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return Local_153[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_226(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_227(iParam0);
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

void func_227(int iParam0)
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

bool func_228(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, char* sParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_229(iParam0, Param1, Param2, func_267(), func_267(), bParam3, 1, 0, 0, 0, 0, sParam4, func_173(), func_173(), func_173(), func_173(), func_173(), 0, bParam5, func_173(), 0, 0, bParam6, iParam7, 0, 0, 0, 1, 1065353216);
}

int func_229(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_266(iParam0);
	func_265(iParam0);
	func_264();
	if (func_248(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_247(sParam12);
		func_247(sParam13);
		func_247(sParam14);
		func_247(sParam15);
		if (is_screen_faded_in())
		{
			bVar1 = false;
			if (is_vehicle_driveable(iParam10, false))
			{
				if (is_ped_in_vehicle(player_ped_id(), iParam10, false))
				{
					set_bit(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						clear_bit(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						clear_bit(&(iParam0->f_13), 23);
					}
					set_bit(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_245(iParam0, iParam21))
				{
					set_bit(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						clear_bit(&(iParam0->f_13), 4);
					}
					set_bit(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_247(sParam16);
				func_247(sParam19);
				func_247("MORE_SEATS");
				if (bParam18 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(iParam0->f_5))
					{
						remove_blip(&(iParam0->f_5));
						func_247(sParam11);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_242(iParam0, 1) && !func_241(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_240(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(&(iParam0->f_13), false);
						clear_bit(&(iParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_247("LOSE_WANTED");
						clear_bit(&(iParam0->f_13), false);
						set_bit(&(iParam0->f_13), true);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_242(iParam0, 1))
						{
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(&(iParam0->f_13), true);
						}
					}
					if (!does_blip_exist(iParam0->f_5))
					{
						if (does_blip_exist(*iParam0))
						{
							remove_blip(iParam0);
						}
						iParam0->f_5 = func_5(Var3, 0);
						if (!iParam23 == -1)
						{
							set_blip_sprite(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_237(iParam0->f_5, iParam0);
						}
					}
					else if (!func_236(Var3, get_blip_coords(iParam0->f_5), 0.1f, 0))
					{
						set_blip_coords(iParam0->f_5, Var3);
						if (bParam27)
						{
							func_237(iParam0->f_5, iParam0);
						}
					}
					if (!func_242(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							func_240(iParam0, sParam11, 0);
							set_bit(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						is_entity_at_coord(player_ped_id(), Param1, Param2, bParam5, bVar4, iVar5);
						if (is_entity_in_angled_area(player_ped_id(), Param3, Param4, fParam28, false, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (is_entity_at_coord(player_ped_id(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!is_ped_injured(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
									if (!is_ped_in_vehicle(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!is_ped_in_vehicle(iParam0->f_17[iVar2], iParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!is_ped_group_member(iParam0->f_17[iVar2], func_219()) || !func_234(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_231(iParam0))
							{
								func_247(sParam11);
								func_247(sParam16);
								func_247(sParam12);
								func_247(sParam13);
								func_247(sParam14);
								func_247(sParam15);
								func_247("LOSE_WANTED");
								func_247("MORE_SEATS");
								func_247(sParam19);
								func_218(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (does_entity_exist(iParam10))
			{
				if ((bParam18 && is_player_wanted_level_greater(player_id(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					func_247(sParam16);
					func_247(sParam19);
					if (does_blip_exist(iParam0->f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(&(iParam0->f_5));
						remove_blip(iParam0);
						func_247(sParam11);
					}
					if ((!func_242(iParam0, 1) && !func_241(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_240(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(&(iParam0->f_13), false);
						clear_bit(&(iParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_247("LOSE_WANTED");
						clear_bit(&(iParam0->f_13), false);
						set_bit(&(iParam0->f_13), true);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_242(iParam0, 1))
						{
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_238(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(&(iParam0->f_13), true);
						}
					}
					if (is_vehicle_driveable(iParam10, false))
					{
						if (!does_blip_exist(*iParam0))
						{
							if (does_blip_exist(iParam0->f_5))
							{
								remove_blip(&(iParam0->f_5));
								func_247(sParam11);
							}
							*iParam0 = func_230(iParam10, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								func_237(*iParam0, iParam0);
							}
						}
						if (!func_242(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								func_240(iParam0, sParam16, 0);
								set_bit(&(iParam0->f_13), 3);
								clear_bit(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!is_string_null(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										func_240(iParam0, sParam19, 0);
										set_bit(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									func_240(iParam0, sParam16, 0);
									set_bit(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!is_ped_injured(iParam0->f_17[0]))
									{
										func_238(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									set_bit(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(iParam0->f_5))
				{
					remove_blip(&(iParam0->f_5));
					func_247(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_242(iParam0, 2))
						{
							if (is_ped_sitting_in_any_vehicle(player_ped_id()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!is_ped_injured(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = get_random_int_in_range(0, iVar6);
									if (!is_ped_injured(iParam0->f_17[iVar7]))
									{
										func_238(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_240(iParam0, "MORE_SEATS", 0);
									set_bit(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								func_240(iParam0, sParam16, 0);
								set_bit(&(iParam0->f_13), 3);
								clear_bit(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									func_240(iParam0, sParam19, 0);
									set_bit(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_242(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							func_240(iParam0, sParam16, 0);
							set_bit(&(iParam0->f_13), 3);
							clear_bit(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!is_string_null(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									func_240(iParam0, sParam19, 0);
									set_bit(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								func_240(iParam0, sParam16, 0);
								set_bit(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			clear_bit(&(iParam0->f_13), false);
		}
		func_247(sParam11);
		func_247(sParam16);
		func_247(sParam19);
		func_247(sParam16);
		func_247("LOSE_WANTED");
		if (does_blip_exist(iParam0->f_5))
		{
			remove_blip(&(iParam0->f_5));
		}
		if (does_blip_exist(*iParam0))
		{
			remove_blip(iParam0);
		}
	}
	clear_bit(&(iParam0->f_13), 11);
	clear_bit(&(iParam0->f_13), 12);
	return 0;
}

int func_230(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_231(int* iParam0)
{
	if (BitTest(iParam0->f_13, 12))
	{
		if (func_233(player_ped_id()))
		{
			if (func_232(1, 0, 1) || BitTest(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_232(1, 0, 1) || BitTest(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_232(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return 0;
	}
	if (bParam0)
	{
		if (is_entity_dead(player_ped_id(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
		{
			return 0;
		}
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (bParam0)
		{
			if (is_entity_dead(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!is_entity_dead(iVar0, false))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1, false) != player_ped_id())
				{
					return 0;
				}
			}
		}
		if (!is_entity_dead(iVar0, false))
		{
			if (get_entity_upright_value(iVar0) < 0.95f || get_entity_upright_value(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!is_player_ready_for_cutscene(player_id()))
	{
		return 0;
	}
	if (!can_player_start_mission(player_id()))
	{
		return 0;
	}
	return 1;
}

int func_233(int iParam0)
{
	float fVar0;
	
	if (!is_ped_injured(iParam0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(player_ped_id()) && iParam1)
		{
			if (func_235(player_ped_id(), iParam0))
			{
				set_group_separation_range(func_219(), 50f);
				return 1;
			}
		}
		else if (is_ped_group_member(iParam0, func_219()))
		{
			set_group_separation_range(func_219(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(iParam0))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, false);
			if (is_vehicle_driveable(iVar0, false))
			{
				if (!is_ped_injured(iParam1))
				{
					if (is_ped_sitting_in_vehicle(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_236(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (absf((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (absf((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (absf((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (absf((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (absf((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_237(int iParam0, int* iParam1)
{
	if (does_blip_exist(iParam0))
	{
		if (does_blip_exist(iParam1->f_6))
		{
			set_blip_route(iParam1->f_6, false);
		}
		set_gps_multi_route_render(false);
		clear_gps_multi_route();
		iParam1->f_6 = iParam0;
		set_blip_route(iParam0, true);
	}
}

void func_238(int iParam0, char* sParam1, int iParam2)
{
	play_ped_ambient_speech_native(iParam0, sParam1, func_239(iParam2), 1);
}

int func_239(int iParam0)
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

void func_240(int* iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_156(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = get_game_timer();
}

int func_241(int* iParam0)
{
	if (!is_ped_injured(iParam0->f_16))
	{
		if (is_ambient_speech_playing(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int* iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return 1;
		}
		if (func_244(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_65() && !func_243())
		{
			return 1;
		}
	}
	return 0;
}

int func_243()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_game_timer();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_245(var uParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (func_246(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_246(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (does_entity_exist(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!is_seat_warp_only(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!is_seat_warp_only(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_247(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

int func_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!is_ped_injured(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!is_ped_injured(uParam0->f_17[iVar0]))
				{
					set_ped_using_action_mode(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					set_bit(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!is_ped_injured(uParam0->f_17[iVar0]))
			{
				set_ped_using_action_mode(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				clear_bit(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!does_entity_exist(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = get_closest_vehicle(get_entity_coords(player_ped_id(), true), 50f, 0, iVar16);
			if (is_vehicle_driveable(iVar15, false))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (is_vehicle_driveable(uParam0->f_21, false))
		{
			if (vdist2(get_entity_coords(player_ped_id(), true), get_entity_coords(uParam0->f_21, true)) < 400f)
			{
				if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					if (!is_player_wanted_level_greater(player_id(), 0) || !bParam17)
					{
						if (func_246(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!is_ped_injured(uParam0->f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(uParam0->f_17[iVar0], 1f);
									if (is_ped_group_member(uParam0->f_17[iVar0], func_219()))
									{
										remove_ped_from_group(uParam0->f_17[iVar0]);
									}
									if (get_script_task_status(uParam0->f_17[iVar0], -1794415470) == 7 && !func_263(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!is_ped_ragdoll(uParam0->f_17[iVar0]) && !is_ped_getting_up(uParam0->f_17[iVar0]))
										{
											set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], true);
											task_enter_vehicle(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											set_ped_group_member_passenger_index(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			clear_bit(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!is_ped_injured(uParam0->f_17[iVar0]))
				{
					if (!is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						clear_ped_tasks(uParam0->f_17[iVar0]);
					}
					if (!is_ped_group_member(uParam0->f_17[iVar0], func_219()))
					{
						if (func_261(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(uParam0->f_17[iVar0], func_219());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_260(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id())) && !does_entity_exist(iParam10))
		{
			iVar10 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (is_vehicle_driveable(iVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_242(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!is_ped_injured(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = get_random_int_in_range(0, iVar17);
						if (!is_ped_injured(uParam0->f_17[iVar18]))
						{
							func_238(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_240(uParam0, "MORE_SEATS", 0);
						set_bit(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			clear_bit(&(uParam0->f_13), 13);
			func_247("MORE_SEATS");
		}
		if (!does_entity_exist(iParam10))
		{
			if ((!is_ped_injured(uParam0->f_17[0]) || !is_ped_injured(uParam0->f_17[1])) || !is_ped_injured(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) && !func_242(uParam0, 2))
					{
						iVar10 = get_vehicle_ped_is_in(player_ped_id(), false);
						if (func_259(iVar10, uParam0))
						{
							func_240(uParam0, "CMN_VEHSUIT", 0);
							set_bit(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					clear_bit(&(uParam0->f_13), 31);
					func_247("CMN_VEHSUIT");
				}
			}
		}
		if (is_vehicle_driveable(iParam10, false))
		{
			if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
			{
				if (is_control_just_pressed(0, 75))
				{
					set_bit(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				clear_bit(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (does_entity_exist(uParam0->f_17[iVar0]))
			{
				if (!is_ped_injured(uParam0->f_17[iVar0]))
				{
					if (!is_ped_group_member(uParam0->f_17[iVar0], func_219()))
					{
						set_ped_dies_in_water(uParam0->f_17[iVar0], true);
					}
					else
					{
						set_ped_dies_in_water(uParam0->f_17[iVar0], false);
					}
					if (is_ped_sitting_in_any_vehicle(player_ped_id()))
					{
						iVar10 = get_vehicle_ped_is_in(player_ped_id(), false);
						if (is_vehicle_driveable(iVar10, false))
						{
							if (is_ped_group_member(uParam0->f_17[iVar0], func_219()))
							{
								if (!func_260(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id()))
								{
									if (!func_258(uParam0->f_17[iVar0]))
									{
										remove_ped_from_group(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !is_entity_dead(iVar10, false))
						{
							if (is_ped_sitting_in_vehicle(uParam0->f_17[iVar0], iVar10))
							{
								if (is_entity_in_water(iVar10) && !is_vehicle_on_all_wheels(iVar10))
								{
									Var19 = { get_entity_coords(iVar10, true) };
									if (Var19.f_2 < -1f)
									{
										task_leave_vehicle(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!is_ped_group_member(uParam0->f_17[iVar0], func_219()))
					{
						if (is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0]))
						{
							iVar10 = get_vehicle_ped_is_in(uParam0->f_17[iVar0], false);
							if (!is_entity_dead(iVar10, false))
							{
								if (is_vehicle_driveable(iParam10, false))
								{
									if (iVar10 != iParam10)
									{
										if (!is_ped_sitting_in_vehicle(player_ped_id(), iVar10))
										{
											if (get_entity_speed(iVar10) > 5f)
											{
												task_leave_vehicle(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												task_leave_vehicle(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (is_ped_sitting_in_any_vehicle(player_ped_id()))
									{
										iVar20 = get_vehicle_ped_is_in(player_ped_id(), false);
									}
									if (is_vehicle_driveable(iVar20, false))
									{
										if (iVar10 != iVar20)
										{
											if (get_entity_speed(iVar10) > 5f)
											{
												task_leave_vehicle(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												task_leave_vehicle(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (is_ped_group_member(uParam0->f_17[iVar0], func_219()))
					{
						iVar21 = get_vehicle_ped_is_using(player_ped_id());
						if (does_entity_exist(iVar21))
						{
							if (func_246(iVar21, uParam0, 0))
							{
								if (func_257(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									set_ped_group_member_passenger_index(uParam0->f_17[iVar0], iVar0);
									func_220(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										set_bit(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_257(iVar0, uParam0))
							{
								if (get_entity_model(iVar21) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 2);
								}
								func_256(iVar0, uParam0);
							}
						}
					}
					if ((!is_ped_group_member(uParam0->f_17[iVar0], func_219()) && !func_255(uParam0->f_17[iVar0], iParam10)) && !func_254(uParam0->f_17[iVar0], iParam10))
					{
						if (func_261(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!is_ped_group_member(uParam0->f_17[iVar0], func_219()))
							{
								if (((!is_ped_ragdoll(uParam0->f_17[iVar0]) && !is_ped_getting_up(uParam0->f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0])) && !is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0]))
								{
									iVar11 = get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										clear_ped_tasks(uParam0->f_17[iVar0]);
									}
									set_ped_as_group_member(uParam0->f_17[iVar0], func_219());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!does_blip_exist(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = get_game_timer();
								uParam0->f_1[iVar0] = func_230(uParam0->f_17[iVar0], 0, 0);
								set_blip_display(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_237(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(uParam0->f_1[iVar0]))
					{
						if (((func_234(uParam0->f_17[iVar0], 1) || func_255(uParam0->f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, false) && !is_ped_in_vehicle(player_ped_id(), iParam10, false)))
						{
							if (does_blip_exist(uParam0->f_1[iVar0]))
							{
								remove_blip(&(uParam0->f_1[iVar0]));
								func_247(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_237(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (is_vehicle_driveable(iParam10, false))
					{
						if (!is_ped_sitting_in_vehicle(uParam0->f_17[iVar0], iParam10))
						{
							if ((is_entity_at_entity(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, false, true, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && is_player_wanted_level_greater(player_id(), 0)) && !is_ped_in_vehicle(player_ped_id(), iParam10, false)))
							{
								if (is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0]))
								{
									if (!is_ped_in_vehicle(uParam0->f_17[iVar0], iParam10, false))
									{
										if (!func_234(uParam0->f_17[iVar0], 1))
										{
											if (func_233(uParam0->f_17[iVar0]))
											{
												iVar11 = get_script_task_status(uParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													task_leave_any_vehicle(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (is_ped_group_member(uParam0->f_17[iVar0], func_219()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) && !is_ped_ragdoll(uParam0->f_17[iVar0])) && !is_ped_getting_up(uParam0->f_17[iVar0])) && !is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_263(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(player_ped_id())) && !func_253(uParam0->f_17[iVar0], 2f)) && !is_ped_ragdoll(uParam0->f_17[iVar0])) && !is_ped_getting_up(uParam0->f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], true);
											if (BitTest(uParam0->f_13, 10))
											{
												set_ped_max_move_blend_ratio(uParam0->f_17[iVar0], 1f);
											}
											task_enter_vehicle(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											set_ped_get_out_upside_down_vehicle(uParam0->f_17[iVar0], false);
										}
									}
									else if (is_ped_in_vehicle(player_ped_id(), iParam10, false))
									{
										uParam0->f_1[iVar0] = func_230(uParam0->f_17[iVar0], 0, 0);
										set_blip_display(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(uParam0->f_17[iVar0], func_219()))
							{
								if (func_261(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!is_ped_ragdoll(uParam0->f_17[iVar0]) && !is_ped_getting_up(uParam0->f_17[iVar0]))
									{
										iVar11 = get_script_task_status(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											clear_ped_tasks(uParam0->f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], false);
										set_ped_as_group_member(uParam0->f_17[iVar0], func_219());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
						{
							if (!is_ped_group_member(uParam0->f_17[iVar0], func_219()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									set_ped_as_group_member(uParam0->f_17[iVar0], func_219());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								remove_ped_from_group(uParam0->f_17[iVar0]);
								set_bit(&(uParam0->f_13), 21);
							}
						}
						else if (is_ped_group_member(uParam0->f_17[iVar0], func_219()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(uParam0->f_1[iVar0]))
				{
					remove_blip(&(uParam0->f_1[iVar0]));
					func_247(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (does_blip_exist(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_242(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!is_ped_injured(uParam0->f_17[iVar0]))
						{
							if (func_258(uParam0->f_17[iVar0]) || is_entity_at_entity(uParam0->f_17[iVar0], player_ped_id(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!is_ped_injured(uParam0->f_17[iVar0]))
					{
						if (!is_entity_at_entity(uParam0->f_17[iVar0], player_ped_id(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_258(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = get_game_timer();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_240(uParam0, sParam7, 0);
								set_bit(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_252(iVar0, uParam0))
									{
										if (!is_string_null(uVar13[iVar0]))
										{
											if (!are_strings_equal(uVar13[iVar0], ""))
											{
												func_250(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_249(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_252(iVar0, uParam0))
										{
											func_240(uParam0, uVar12[iVar0], 0);
											func_249(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		clear_bit(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (does_blip_exist(uParam0->f_1[iVar0]))
				{
					remove_blip(&(uParam0->f_1[iVar0]));
					func_247(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_247("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_249(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(&(uParam1->f_13), 14);
			break;
		
		case 1:
			set_bit(&(uParam1->f_13), 15);
			break;
		
		case 2:
			set_bit(&(uParam1->f_13), 16);
			break;
	}
}

void func_250(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_251(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = get_game_timer();
}

void func_251(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	begin_text_command_print(sParam0);
	add_text_component_substring_text_label(sParam1);
	end_text_command_print(iParam2, true);
}

int func_252(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_253(int iParam0, float fParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, false);
		if (!is_entity_dead(iVar0, false))
		{
			if (get_entity_speed(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_219()))
		{
			iVar0 = get_vehicle_ped_is_entering(iParam0);
			if (is_vehicle_driveable(iParam1, false))
			{
				if (is_entity_at_entity(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (does_entity_exist(iParam1))
		{
			if (is_vehicle_driveable(iParam1, false))
			{
				if (is_ped_sitting_in_vehicle(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_256(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(&(uParam1->f_13), 17);
			break;
		
		case 1:
			set_bit(&(uParam1->f_13), 18);
			break;
		
		case 2:
			set_bit(&(uParam1->f_13), 19);
			break;
	}
}

int func_257(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_player_playing(player_id()))
	{
		iVar0 = get_vehicle_ped_is_using(player_ped_id());
		if (is_vehicle_driveable(iVar0, false))
		{
			if (!is_ped_injured(iParam0))
			{
				iVar1 = get_vehicle_ped_is_using(iParam0);
				if (is_vehicle_driveable(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (is_entity_at_entity(player_ped_id(), iParam0, 20f, 20f, 20f, false, true, 0) && is_entity_at_entity(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
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

int func_259(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		if (get_entity_model(iParam0) == joaat("bus") || get_entity_model(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!is_ped_injured(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = get_ped_in_vehicle_seat(iParam0, 0, false);
			if (!is_ped_injured(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = get_ped_in_vehicle_seat(iParam0, 1, false);
			if (!is_ped_injured(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = get_ped_in_vehicle_seat(iParam0, 2, false);
			if (!is_ped_injured(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_260(var uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (func_246(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_261(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!is_ped_injured(iParam1))
	{
		if (is_ped_sitting_in_any_vehicle(iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam1, false);
			if (!is_entity_dead(iVar0, false))
			{
				if (is_vehicle_driveable(iVar0, false))
				{
					if (is_ped_sitting_in_vehicle(player_ped_id(), iVar0))
					{
						if (func_260(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = get_vehicle_ped_is_using(player_ped_id());
				if (does_entity_exist(iVar0))
				{
					if (func_246(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, false))
						{
							if (func_262(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262(int iParam0)
{
	float fVar0;
	
	if (!is_entity_dead(iParam0, false))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_vehicle_driveable(iParam1, false))
		{
			iVar0 = get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_264()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(player_ped_id(), true))
	{
		iVar0 = get_vehicle_ped_is_entering(player_ped_id());
		if (is_vehicle_driveable(iVar0, false))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, 0, false);
			if (!is_ped_injured(iVar1))
			{
				if (iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, player_ped_id()))
						{
							task_look_at_entity(iVar1, player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_265(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (is_player_playing(player_id()))
		{
			set_ped_config_flag(player_ped_id(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (does_entity_exist(uParam0->f_17[iVar0]))
			{
				if (!is_ped_injured(uParam0->f_17[iVar0]))
				{
					set_ped_config_flag(uParam0->f_17[iVar0], 32, false);
					set_ped_config_flag(uParam0->f_17[iVar0], 305, true);
					set_ped_config_flag(uParam0->f_17[iVar0], 268, true);
					set_ped_get_out_upside_down_vehicle(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		set_bit(&(uParam0->f_13), 25);
	}
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(uParam0->f_17[iVar0]))
		{
			if (!is_ped_injured(uParam0->f_17[iVar0]))
			{
				if (is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0]))
				{
					set_ped_can_play_ambient_anims(uParam0->f_17[iVar0], false);
					set_ped_can_play_ambient_base_anims(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_sitting_in_any_vehicle(player_ped_id()))
			{
				set_ped_can_play_ambient_anims(player_ped_id(), false);
				set_ped_can_play_ambient_base_anims(player_ped_id(), false);
			}
		}
	}
}

Vector3 func_267()
{
	struct<3> Var0;
	
	return Var0;
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			if (Local_153[iVar0 /*6*/].f_1 == 1)
			{
				Local_153[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_269()
{
	int iVar0;
	int iVar1;
	
	set_ped_density_multiplier_this_frame(0f);
	set_scenario_ped_density_multiplier_this_frame(0f, 0f);
	switch (iLocal_150)
	{
		case 0:
			iLocal_144 = get_players_last_vehicle();
			set_player_control(player_id(), false, 0);
			if (func_210())
			{
				request_anim_dict("MISSChinese2_crystalMazeMCS1_IG");
				request_model(joaat("ig_old_man2"));
				request_model(joaat("ig_old_man1a"));
				request_model(joaat("ig_janet"));
				request_model(joaat("ig_taocheng"));
				request_model(joaat("ig_taostranslator"));
				request_anim_dict("misschinese2_crystalmaze");
				request_anim_dict("missrampageintrooutro");
				set_ped_stealth_movement(player_ped_id(), false, 0);
				func_192(1, 1, 1, 0, 0, 0, 0);
				if (does_entity_exist(Global_96938.f_9[0]))
				{
					Local_113[14 /*33*/] = Global_96938.f_9[2];
					Local_113[13 /*33*/] = Global_96938.f_9[1];
					Local_113[11 /*33*/] = Global_96938.f_9[4];
					Local_113[10 /*33*/] = Global_96938.f_9[3];
					Local_113[12 /*33*/] = Global_96938.f_9[0];
					set_entity_as_mission_entity(Local_113[14 /*33*/], true, true);
					set_entity_as_mission_entity(Local_113[13 /*33*/], true, true);
					set_entity_as_mission_entity(Local_113[11 /*33*/], true, true);
					set_entity_as_mission_entity(Local_113[10 /*33*/], true, true);
					set_entity_as_mission_entity(Local_113[12 /*33*/], true, true);
					if (!is_ped_injured(Local_113[13 /*33*/]))
					{
						register_entity_for_cutscene(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!is_ped_injured(Local_113[14 /*33*/]))
					{
						register_entity_for_cutscene(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!is_ped_injured(Local_113[11 /*33*/]))
					{
						register_entity_for_cutscene(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!is_ped_injured(Local_113[10 /*33*/]))
					{
						register_entity_for_cutscene(Local_113[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!is_ped_injured(Local_113[12 /*33*/]))
					{
						register_entity_for_cutscene(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_113[13 /*33*/] = create_ped(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					register_entity_for_cutscene(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_113[14 /*33*/] = create_ped(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					register_entity_for_cutscene(Local_113[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (does_entity_exist(Local_113[11 /*33*/]))
					{
						if (!is_ped_injured(Local_113[11 /*33*/]))
						{
							register_entity_for_cutscene(Local_113[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						register_entity_for_cutscene(Local_113[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					register_entity_for_cutscene(Local_113[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_113[12 /*33*/] = create_ped(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					register_entity_for_cutscene(Local_113[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_271();
				start_cutscene(0);
				_0x48621C9FCA3EBD28(4);
				clear_area_of_peds(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				clear_area_of_projectiles(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				add_scenario_blocking_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), false, true, true, true);
				set_ped_non_creation_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_576 = 0;
				iLocal_150++;
			}
			break;
		
		case 1:
			if (is_cutscene_playing())
			{
				if (is_screen_faded_out())
				{
					do_screen_fade_in(1000);
				}
				iLocal_150++;
			}
			break;
		
		case 2:
			if (is_cutscene_playing())
			{
				if (iLocal_576 == 0)
				{
					func_270(13);
					iLocal_576++;
				}
			}
			if (!does_entity_exist(Local_113[13 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Old_Man1A", 0))
				{
					Local_113[13 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Old_Man1A", 0));
				}
			}
			if (!does_entity_exist(Local_113[14 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Old_Man2", 0))
				{
					Local_113[14 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Old_Man2", 0));
				}
			}
			if (!does_entity_exist(Local_113[11 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("tao", 0))
				{
					Local_113[11 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("tao", 0));
				}
			}
			if (!does_entity_exist(Local_113[10 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Taos_Translator", 0))
				{
					Local_113[10 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Taos_Translator", 0));
				}
			}
			if (!does_entity_exist(Local_113[12 /*33*/]))
			{
				if (can_set_exit_state_for_registered_entity("Janet", 0))
				{
					Local_113[12 /*33*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Janet", 0));
				}
			}
			if (can_set_exit_state_for_registered_entity("tao", 0))
			{
				if (!is_ped_injured(Local_113[11 /*33*/]))
				{
					set_ped_relationship_group_hash(Local_113[11 /*33*/], iLocal_118);
					set_ped_can_be_targetted(Local_113[11 /*33*/], false);
					iVar0 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					task_synchronized_scene(Local_113[11 /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Taos_Translator", 0))
			{
				if (!is_ped_injured(Local_113[10 /*33*/]))
				{
					set_ped_relationship_group_hash(Local_113[10 /*33*/], iLocal_118);
					set_ped_can_be_targetted(Local_113[10 /*33*/], false);
					iVar1 = create_synchronized_scene(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					task_synchronized_scene(Local_113[10 /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (can_set_exit_state_for_registered_entity("Trevor", 0))
			{
				iLocal_144 = get_players_last_vehicle();
				if (func_74(iLocal_144) && func_73(iLocal_144, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
				{
					set_ped_into_vehicle(player_ped_id(), iLocal_144, -1);
					force_ped_ai_and_animation_update(player_ped_id(), false, false);
					remove_vehicle_asset(get_entity_model(iLocal_144));
				}
				else if (has_anim_dict_loaded("missrampageintrooutro"))
				{
					set_entity_coords(player_ped_id(), 1992.135f, 3057.467f, 46.06f, true, false, false, true);
					set_entity_heading(player_ped_id(), 325.4678f);
					task_play_anim(player_ped_id(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, false, false, false);
					force_ped_ai_and_animation_update(player_ped_id(), true, false);
				}
				else
				{
					set_entity_coords(player_ped_id(), 1992.919f, 3057.906f, 46.0567f, true, false, false, true);
					set_entity_heading(player_ped_id(), 337.2537f);
					force_ped_motion_state(player_ped_id(), joaat("MotionState_Walk"), false, 0, false);
					set_ped_min_move_blend_ratio(player_ped_id(), 1f);
					force_ped_ai_and_animation_update(player_ped_id(), true, false);
				}
			}
			if (can_set_exit_state_for_camera(false))
			{
				_0xE3E2C1B4C59DBC77(6);
				func_192(0, 1, 1, 0, 0, 0, 0);
				set_player_control(player_id(), true, 0);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				if (is_screen_faded_out())
				{
					load_scene(1992.135f, 3057.467f, 46.06f);
				}
				_0x81CBAE94390F9F89();
				_0x293220DA1B46CEBC(0f, 7f, 3);
				func_182(11);
			}
			break;
	}
}

void func_270(int iParam0)
{
	if (Global_97363 != -1)
	{
		if (iParam0 == Global_97363)
		{
			Global_97367 = 1;
			return;
		}
	}
}

void func_271()
{
	int iVar0;
	
	if (!is_entity_dead(player_ped_id(), false))
	{
		set_entity_proofs(player_ped_id(), false, false, false, false, false, false, false, false);
		set_ped_config_flag(player_ped_id(), 157, true);
		set_entity_invincible(player_ped_id(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_97810[iVar0]))
		{
			if (!is_entity_dead(Global_97810[iVar0], false))
			{
				set_entity_proofs(Global_97810[iVar0], false, false, false, false, false, false, false, false);
				set_entity_invincible(Global_97810[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_43052 != 0 && Global_43052 != 3) && Global_43052 != 2)
	{
		set_max_wanted_level(5);
		set_wanted_level_multiplier(1f);
	}
}

void func_272()
{
	int iVar0;
	
	switch (iLocal_150)
	{
		case 0:
			request_additional_text("FRMCHSE", 0);
			while (!has_additional_text_loaded(0))
			{
				func_28(27, 1);
			}
			func_62(&uLocal_203, 0, player_ped_id(), "TREVOR", 0, 1);
			func_62(&uLocal_203, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_379();
			stop_fire_in_range(2442.69f, 4970.348f, 46.33f, 30f);
			set_weather_type_overtime_persist("EXTRASUNNY", 120f);
			Local_384[0 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			Local_384[1 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			Local_384[2 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			Local_384[3 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			Local_384[4 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			Local_384[5 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			Local_384[6 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			Local_384[7 /*3*/] = { 2434f, 4963.04f, 41.53f };
			Local_384[8 /*3*/] = { 2435.637f, 4969.699f, 42.19639f };
			Local_109[0 /*5*/] = { 2450.376f, 4955.83f, 43.9394f };
			Local_109[1 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_109[2 /*5*/] = { 2449.606f, 4957.675f, 44.0646f };
			Local_109[3 /*5*/] = { 2449.739f, 4958.731f, 44.1544f };
			Local_109[4 /*5*/] = { 2450.141f, 4959.745f, 44.2487f };
			Local_109[5 /*5*/] = { 2450.685f, 4960.582f, 44.3219f };
			Local_109[6 /*5*/] = { 2451.492f, 4961.333f, 44.4439f };
			Local_109[7 /*5*/] = { 2452.174f, 4962.099f, 44.5787f };
			Local_109[8 /*5*/] = { 2452.717f, 4962.906f, 44.9141f };
			Local_109[9 /*5*/] = { 2453.35f, 4963.579f, 45.3558f };
			Local_109[10 /*5*/] = { 2453.754f, 4964.565f, 45.5766f };
			Local_109[11 /*5*/] = { 2453.226f, 4965.539f, 45.5766f };
			Local_109[12 /*5*/] = { 2452.472f, 4966.293f, 45.5766f };
			Local_109[13 /*5*/] = { 2451.869f, 4967.104f, 45.5766f };
			Local_109[14 /*5*/] = { 2451.529f, 4968.083f, 45.5766f };
			Local_109[15 /*5*/] = { 2452.327f, 4968.712f, 45.5766f };
			Local_109[16 /*5*/] = { 2452.796f, 4969.643f, 45.8107f };
			Local_109[17 /*5*/] = { 2453.261f, 4970.541f, 45.8106f };
			Local_109[18 /*5*/] = { 2453.58f, 4971.548f, 45.8104f };
			Local_109[19 /*5*/] = { 2452.808f, 4972.267f, 45.8306f };
			Local_109[20 /*5*/] = { 2452.049f, 4972.928f, 45.8306f };
			Local_109[21 /*5*/] = { 2451.241f, 4973.599f, 45.8306f };
			Local_109[22 /*5*/] = { 2450.248f, 4973.889f, 45.8306f };
			Local_109[23 /*5*/] = { 2449.207f, 4973.784f, 45.8105f };
			Local_109[24 /*5*/] = { 2448.172f, 4973.814f, 45.8106f };
			Local_109[25 /*5*/] = { 2447.153f, 4973.771f, 45.8106f };
			Local_109[26 /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_109[27 /*5*/] = { 2445.128f, 4973.689f, 45.8106f };
			Local_109[28 /*5*/] = { 2444.256f, 4973.056f, 45.8106f };
			Local_109[29 /*5*/] = { 2443.669f, 4972.194f, 45.8106f };
			Local_109[30 /*5*/] = { 2443.119f, 4971.275f, 45.8106f };
			Local_109[31 /*5*/] = { 2442.661f, 4970.359f, 45.8106f };
			Local_109[32 /*5*/] = { 2442.267f, 4969.425f, 45.8106f };
			Local_109[33 /*5*/] = { 2441.708f, 4968.502f, 45.8306f };
			Local_109[34 /*5*/] = { 2441.264f, 4967.534f, 45.8106f };
			Local_109[35 /*5*/] = { 2440.873f, 4966.538f, 45.8106f };
			Local_109[36 /*5*/] = { 2440.382f, 4965.634f, 45.8106f };
			Local_109[37 /*5*/] = { 2439.71f, 4964.882f, 45.8106f };
			Local_109[38 /*5*/] = { 2438.933f, 4964.146f, 45.8106f };
			Local_109[39 /*5*/] = { 2438.166f, 4963.502f, 45.8106f };
			Local_109[40 /*5*/] = { 2437.555f, 4962.709f, 45.8106f };
			Local_109[41 /*5*/] = { 2436.901f, 4961.95f, 45.8106f };
			Local_109[42 /*5*/] = { 2436.075f, 4961.257f, 45.8106f };
			Local_109[43 /*5*/] = { 2435.08f, 4961.004f, 45.8118f };
			Local_109[44 /*5*/] = { 2434.066f, 4960.713f, 45.8181f };
			Local_109[45 /*5*/] = { 2433.045f, 4960.594f, 45.8192f };
			Local_109[46 /*5*/] = { 2432.065f, 4960.25f, 45.813f };
			Local_109[47 /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_109[48 /*5*/] = { 2430.575f, 4961.574f, 45.5917f };
			Local_109[49 /*5*/] = { 2429.889f, 4962.028f, 44.9345f };
			Local_109[50 /*5*/] = { 2429.26f, 4962.595f, 44.2774f };
			Local_109[51 /*5*/] = { 2428.691f, 4963.279f, 43.6202f };
			Local_109[52 /*5*/] = { 2428.073f, 4963.911f, 42.9631f };
			Local_109[53 /*5*/] = { 2428.239f, 4964.922f, 42.9631f };
			Local_109[54 /*5*/] = { 2428.961f, 4965.455f, 42.3059f };
			Local_109[55 /*5*/] = { 2429.45f, 4966.224f, 41.8679f };
			Local_109[56 /*5*/] = { 2430.073f, 4966.82f, 41.3476f };
			Local_109[57 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_109[58 /*5*/] = { 2431.89f, 4966.403f, 41.3476f };
			Local_109[59 /*5*/] = { 2432.768f, 4965.902f, 41.3476f };
			Local_109[60 /*5*/] = { 2433.776f, 4965.613f, 41.3476f };
			Local_136[0 /*6*/].f_3 = "Table Flames";
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/].f_3 = "Table Explosion";
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/].f_3 = "House Explosion";
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/].f_3 = "Cam Shake";
			Local_136[3 /*6*/] = 0;
			Local_136[4 /*6*/].f_3 = "Position player";
			Local_136[4 /*6*/] = 0;
			Local_136[5 /*6*/].f_3 = "Slow mo";
			Local_136[5 /*6*/] = 0;
			Local_136[0 /*6*/].f_1 = 2;
			Local_136[0 /*6*/].f_2 = 1000f;
			Local_136[1 /*6*/].f_1 = 2;
			Local_136[1 /*6*/].f_2 = 4200f;
			Local_136[2 /*6*/].f_1 = 3;
			Local_136[2 /*6*/].f_2 = 0f;
			Local_136[3 /*6*/].f_1 = 3;
			Local_136[3 /*6*/].f_2 = 0f;
			Local_136[4 /*6*/].f_1 = 3;
			Local_136[4 /*6*/].f_2 = 3200f;
			Local_136[5 /*6*/].f_1 = 3;
			Local_136[5 /*6*/].f_2 = 700f;
			Local_137[0 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_137[0 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_137[0 /*18*/].f_14 = 39.703f;
			Local_137[0 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_137[0 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_137[0 /*18*/].f_15 = 39.703f;
			Local_137[0 /*18*/].f_12 = 2500f;
			Local_137[0 /*18*/].f_13 = 2500f;
			Local_137[0 /*18*/].f_16 = 0;
			Local_137[0 /*18*/].f_17 = 18;
			Local_137[1 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_137[1 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_137[1 /*18*/].f_14 = 58.9114f;
			Local_137[1 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_137[1 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_137[1 /*18*/].f_15 = 58.9114f;
			Local_137[1 /*18*/].f_12 = 3200f;
			Local_137[1 /*18*/].f_13 = 1900f;
			Local_137[1 /*18*/].f_16 = 0;
			Local_137[1 /*18*/].f_17 = 34;
			Local_137[2 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_137[2 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_14 = 35.1297f;
			Local_137[2 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_137[2 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_15 = 35.1297f;
			Local_137[2 /*18*/].f_12 = 3500f;
			Local_137[2 /*18*/].f_13 = 4500f;
			Local_137[2 /*18*/].f_16 = 3;
			Local_137[2 /*18*/].f_17 = 49;
			Local_137[3 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_137[3 /*18*/].f_14 = 33.1297f;
			Local_137[3 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_137[3 /*18*/].f_15 = 33.1297f;
			Local_137[3 /*18*/].f_12 = 3500f;
			Local_137[3 /*18*/].f_13 = 3500f;
			Local_137[3 /*18*/].f_16 = 0;
			Local_137[3 /*18*/].f_17 = -1;
			fLocal_157 = 0.06f;
			func_172(1);
			Local_142[0 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			Local_142[1 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			Local_142[2 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			Local_142[3 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			Local_142[4 /*3*/] = { 2430.53f, 4962.47f, 42f };
			Local_142[5 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			Local_142[6 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			Local_142[7 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			Local_142[8 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			Local_142[9 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			Local_142[10 /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			Local_142[11 /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			Local_142[12 /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			Local_130[0 /*3*/] = { 2552.692f, 4978.566f, 45.32309f };
			Local_130[1 /*3*/] = { 2562.534f, 5013.502f, 47.46302f };
			Local_130[2 /*3*/] = { 2553.885f, 4945.661f, 47.49305f };
			Local_130[3 /*3*/] = { 2515.545f, 4936.428f, 42.88382f };
			Local_130[4 /*3*/] = { 2497.318f, 4967.818f, 43.59557f };
			Local_130[5 /*3*/] = { 2481.376f, 4951.766f, 43.99859f };
			Local_130[6 /*3*/] = { 2522.044f, 4956.372f, 43.71605f };
			Local_130[7 /*3*/] = { 2529.048f, 4985.627f, 43.86848f };
			Local_130[8 /*3*/] = { 2502.503f, 4987.245f, 46.62669f };
			Local_130[9 /*3*/] = { 2464.891f, 4939.949f, 44.25646f };
			Local_130[10 /*3*/] = { 2447.16f, 4940.272f, 44.15766f };
			Local_130[11 /*3*/] = { 2376.537f, 4946.399f, 41.77232f };
			Local_130[12 /*3*/] = { 2395.232f, 4995.63f, 44.68909f };
			Local_130[13 /*3*/] = { 2419.819f, 4991.936f, 45.36976f };
			Local_130[14 /*3*/] = { 2436.319f, 5011.725f, 45.84694f };
			Local_130[15 /*3*/] = { 2407.765f, 5023.079f, 47.77091f };
			Local_130[16 /*3*/] = { 2479.016f, 5028.829f, 42.98806f };
			Local_130[17 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			Local_130[18 /*3*/] = { 2513.93f, 5039.333f, 51.02121f };
			Local_130[19 /*3*/] = { 2477.882f, 4986.437f, 44.99511f };
			Local_130[20 /*3*/] = { 2450.058f, 5011.858f, 44.89032f };
			func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
			func_378(&Local_120, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_378(&Local_121, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_378(&Local_125, "CHI2_nope", 8, "ONEILGUARD1");
			func_378(&Local_122, "SEETREVOR", 3, "chin2goon1");
			func_378(&Local_123, "CHI2_hear", 8, "ONEILGUARD1");
			func_378(&Local_124, "CHI2_hear", 8, "ONEILGUARD1");
			func_378(&Local_126, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_378(&Local_127, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_378(&Local_128, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_378(&Local_129, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_144 = get_last_driven_vehicle();
			set_vehicle_model_is_suppressed(joaat("bodhi2"), true);
			add_relationship_group("TAOGROUP", &iLocal_118);
			set_relationship_between_groups(1, iLocal_118, joaat("player"));
			set_relationship_between_groups(1, joaat("player"), iLocal_118);
			func_17(0, -1);
			set_scenario_group_enabled("Chinese2_Lunch", false);
			set_scenario_group_enabled("CHINESE2_HILLBILLIES", false);
			if (func_377())
			{
				iVar0 = func_376();
				if (Global_94618 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_273(2, 1, 0);
						do_screen_fade_in(1000);
						break;
					
					case 1:
						if (Global_94618 == 1)
						{
							func_273(3, 1, 0);
						}
						else
						{
							func_273(4, 1, 0);
							do_screen_fade_in(1000);
						}
						break;
					
					case 2:
						func_273(6, 1, 0);
						do_screen_fade_in(1000);
						break;
					
					case 3:
						func_273(7, 1, 0);
						do_screen_fade_in(1000);
						break;
					
					case 4:
						if (Global_94618 == 1)
						{
							func_273(8, 1, 0);
						}
						else
						{
							func_273(9, 1, 0);
							do_screen_fade_in(1000);
						}
						break;
					
					case 5:
						func_273(10, 1, 0);
						do_screen_fade_in(1000);
						func_150();
						break;
				}
			}
			else if (func_147(0))
			{
				func_273(1, 0, 1);
			}
			else
			{
				func_182(11);
			}
			break;
	}
}

void func_273(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	func_371(3);
	func_32(6, 0);
	iLocal_150 = 0;
	iLocal_149 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			request_model(joaat("ig_old_man2"));
			request_model(joaat("ig_old_man1a"));
			request_model(joaat("ig_janet"));
			request_model(joaat("ig_taocheng"));
			request_model(joaat("ig_taostranslator"));
			request_cutscene("chinese_2_int", 8);
			while (((((!has_model_loaded(joaat("ig_old_man2")) || !has_model_loaded(joaat("ig_old_man1a"))) || !has_model_loaded(joaat("ig_janet"))) || !has_model_loaded(joaat("ig_taocheng"))) || !has_model_loaded(joaat("ig_taostranslator"))) || !has_cutscene_loaded())
			{
				func_28(323, 1);
			}
			while (!func_368(&(Local_113[11 /*33*/]), 21, 1985.666f, 3052.661f, 46.2151f, 0, 1))
			{
				wait(0);
			}
			set_entity_coords(player_ped_id(), 1992.878f, 3057.846f, 46.0568f, true, false, false, true);
			set_entity_heading(player_ped_id(), 311f);
			set_ped_component_variation(Local_113[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_367(1992.878f, 3057.846f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_74(iLocal_144))
				{
					set_entity_coords(iLocal_144, 1994.387f, 3061.94f, 46.0491f, true, false, false, true);
					set_entity_heading(iLocal_144, 50.7724f);
				}
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(1992.878f, 3057.846f, 46.0568f);
			}
			add_scenario_blocking_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), false, true, true, true);
			set_ped_non_creation_area(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			clear_area(1984.997f, 3052.905f, 46.8556f, 10f, true, false, false, false);
			func_285(1, 0, bParam2);
			request_model(joaat("ig_taocheng"));
			request_model(joaat("ig_taostranslator"));
			request_model(joaat("ig_old_man1a"));
			request_model(joaat("ig_old_man2"));
			request_model(joaat("ig_janet"));
			request_anim_dict("misschinese2_crystalmaze");
			while (((((!has_model_loaded(joaat("ig_taocheng")) || !has_model_loaded(joaat("ig_taostranslator"))) || !has_model_loaded(joaat("ig_old_man1a"))) || !has_model_loaded(joaat("ig_old_man2"))) || !has_model_loaded(joaat("ig_janet"))) || !has_anim_dict_loaded("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_74(iLocal_144))
				{
					set_ped_into_vehicle(player_ped_id(), iLocal_144, -1);
					set_entity_coords(iLocal_144, 1994.387f, 3061.94f, 46.0491f, true, false, false, true);
					set_entity_heading(iLocal_144, 50.7724f);
				}
				else
				{
					set_entity_coords(player_ped_id(), 1992.878f, 3057.846f, 46.0568f, true, false, false, true);
					set_entity_heading(player_ped_id(), 311f);
				}
			}
			func_28(85, 1);
			func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_175(2, 41) != 900)
			{
				func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_74(iLocal_144))
				{
					func_282(iLocal_144, -1, 1);
				}
				else
				{
					func_282(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_367(2574.049f, 4981.824f, 50.44f, 50f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, false, true, false, true);
				set_entity_heading(player_ped_id(), 98.21f);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(2458.508f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			set_wanted_level_multiplier(0f);
			func_285(0, 0, 0);
			prefetch_srl("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_232(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!is_srl_loaded())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_153(10, 5))
			{
				func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_367(func_281(), func_280(), 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2570.543f, 4982.002f, 50.6795f, false, true, false, true);
				set_entity_heading(player_ped_id(), 98.21f);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			func_285(0, 1, 0);
			set_wanted_level_multiplier(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_279(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (has_ped_got_weapon(player_ped_id(), iVar0, false))
				{
					set_current_ped_weapon(player_ped_id(), iVar0, true);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((does_entity_exist(iLocal_144) && is_vehicle_driveable(iLocal_144, false)) && func_278())
				{
					func_282(iLocal_144, -1, 1);
					if (is_vehicle_driveable(iLocal_144, false))
					{
						set_vehicle_engine_on(iLocal_144, true, true, false);
						if (is_this_model_a_plane(get_entity_model(iLocal_144)))
						{
							set_vehicle_forward_speed(iLocal_144, 15f);
						}
						if (is_this_model_a_heli(get_entity_model(iLocal_144)))
						{
							set_heli_blades_full_speed(iLocal_144);
							set_entity_velocity(iLocal_144, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_282(0, -1, 1);
				}
			}
			if (get_distance_between_coords(func_281(), 2570.538f, 4982.031f, 50.6239f, true) < 10f)
			{
				set_entity_coords(player_ped_id(), 2570.538f, 4982.031f, 50.6239f, true, false, false, true);
				set_entity_heading(player_ped_id(), 98f);
			}
			if (!is_ped_in_any_vehicle(player_ped_id(), false))
			{
				func_276(player_ped_id(), get_entity_coords(player_ped_id(), true));
			}
			break;
		
		case 5:
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			set_entity_coords(player_ped_id(), 2572.01f, 4981.678f, 50.6698f, true, false, false, true);
			set_entity_heading(player_ped_id(), 90.3911f);
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			set_wanted_level_multiplier(0f);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_285(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_275(0, 1, 1);
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(-7f, 1f);
			break;
		
		case 6:
			if (bParam1)
			{
				func_367(2450.871f, 4960.999f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2450.871f, 4960.999f, 44.3759f, false, true, false, true);
				set_entity_heading(player_ped_id(), 351.3911f);
				load_scene(2432.982f, 4964.823f, 41.3476f);
				func_28(325, 1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			func_285(0, 0, 0);
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			wait(1);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			set_wanted_level_multiplier(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_275(0, 1, 1);
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			if (!is_ped_in_any_vehicle(player_ped_id(), false))
			{
				func_276(player_ped_id(), get_entity_coords(player_ped_id(), true));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_367(2435.319f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2435.319f, 4966.153f, 41.3476f, true, false, false, true);
				set_entity_heading(player_ped_id(), 104.2964f);
				load_scene(2432.982f, 4964.823f, 41.3476f);
				wait(1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			func_172(1);
			func_285(0, 0, 0);
			freeze_entity_position(player_ped_id(), true);
			iLocal_179 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
			while (!is_valid_interior(iLocal_179))
			{
				iLocal_179 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!is_interior_ready(iLocal_179))
			{
				func_28(15, 1);
			}
			set_interior_active(iLocal_179, true);
			unpin_interior(iLocal_179);
			iLocal_179 = 0;
			request_weapon_asset(joaat("weapon_petrolcan"), 31, 0);
			request_anim_dict("misschinese2_crystalmaze");
			while (!has_weapon_asset_loaded(joaat("weapon_petrolcan")) || !has_anim_dict_loaded("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			freeze_entity_position(player_ped_id(), false);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			set_wanted_level_multiplier(0f);
			request_model(joaat("blazer"));
			while (!has_model_loaded(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_274(0, 7, 1);
			give_weapon_to_ped(player_ped_id(), joaat("weapon_petrolcan"), 4500, true, true);
			func_169(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_367(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2453.124f, 4952.071f, 45.125f, true, false, false, true);
				set_entity_heading(player_ped_id(), 285.8625f);
				load_scene(2453.124f, 4952.071f, 45.125f);
				wait(1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			func_285(0, 0, 0);
			if (!is_srl_loaded())
			{
				prefetch_srl("chinese2_explosion_cutscene");
			}
			set_vehicle_population_budget(1);
			set_ped_population_budget(1);
			request_model(joaat("blazer"));
			while (!has_model_loaded(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_146 = create_vehicle(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
			set_vehicle_on_ground_properly(iLocal_146, 5f);
			iLocal_179 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
			while (!is_valid_interior(iLocal_179))
			{
				iLocal_179 = get_interior_at_coords(2432.982f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!is_interior_ready(iLocal_179))
			{
				func_28(22, 1);
			}
			iLocal_166 = 3;
			set_interior_active(iLocal_179, true);
			unpin_interior(iLocal_179);
			iLocal_179 = 0;
			while (!has_model_loaded(joaat("blazer")) || !is_srl_loaded())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			while (!load_stream("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_367(2472.3f, 4948.181f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2472.3f, 4948.181f, 44.0937f, true, false, false, true);
				set_entity_heading(player_ped_id(), 220.8569f);
				load_scene(2453.124f, 4952.071f, 45.125f);
				wait(1);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
			}
			func_31(6, 0);
			set_vehicle_population_budget(3);
			set_ped_population_budget(3);
			request_model(joaat("blazer"));
			while ((!has_model_loaded(joaat("blazer")) || !request_script_audio_bank("FARMHOUSE_FIRE", false, -1)) || !request_script_audio_bank("FARMHOUSE_FIRE_BG", false, -1))
			{
				func_28(25, 1);
			}
			iLocal_146 = create_vehicle(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
			set_vehicle_on_ground_properly(iLocal_146, 5f);
			func_285(0, 0, 0);
			load_scene(2453.124f, 4952.071f, 45.125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			iLocal_173 = get_rayfire_map_object(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!does_rayfire_map_object_exist(iLocal_173))
			{
				func_28(161, 1);
			}
			set_state_of_rayfire_map_object(iLocal_173, 9);
			remove_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), false);
			remove_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), false);
			remove_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_367(2625.776f, 4802.217f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				set_entity_coords(player_ped_id(), 2625.776f, 4802.217f, 32.5747f, true, false, false, true);
				set_entity_heading(player_ped_id(), 206.4254f);
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(-7f, 1f);
				load_scene(2625.776f, 4802.217f, 32.5747f);
			}
			set_vehicle_population_budget(3);
			set_ped_population_budget(3);
			set_state_of_rayfire_map_object(iLocal_173, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_282(0, -1, 1);
			}
			break;
	}
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	Local_389[iParam0 /*4*/].f_1 = iParam2;
	Local_389[iParam0 /*4*/] = iParam1;
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	Local_390[iParam0 /*7*/].f_1 = iParam2;
	Local_390[iParam0 /*7*/] = iParam1;
}

Vector3 func_276(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (get_ground_z_for_3d_coord(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (func_277(iParam0))
	{
		set_entity_coords(iParam0, Param1, true, false, false, true);
	}
	return Param1;
}

bool func_277(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	return !is_entity_dead(iParam0, false);
}

bool func_278()
{
	return Global_106934.f_2890.f_8;
}

var func_279(int iParam0)
{
	if (Global_100478 > 0)
	{
		return Global_106934.f_21[iParam0];
	}
	return Global_103950.f_21[iParam0];
}

float func_280()
{
	return Global_106934.f_2884.f_3;
}

Vector3 func_281()
{
	return Global_106934.f_2884;
}

void func_282(int iParam0, int iParam1, int iParam2)
{
	if (func_377() && func_284())
	{
		while (Global_100436 != 6)
		{
			wait(0);
		}
		set_game_paused(false);
		if (does_entity_exist(player_ped_id()))
		{
			if (!is_ped_injured(player_ped_id()))
			{
				clear_ped_wetness(player_ped_id());
			}
		}
		if (iParam0 != 0)
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (does_entity_exist(iParam0))
				{
					if (is_vehicle_driveable(iParam0, false))
					{
						if (!is_ped_in_vehicle(player_ped_id(), iParam0, false))
						{
							set_ped_into_vehicle(player_ped_id(), iParam0, iParam1);
							set_gameplay_cam_relative_pitch(0f, 1f);
							set_gameplay_cam_relative_heading(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (is_player_playing(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		animpostfx_stop_all();
		func_283(0);
	}
}

void func_283(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&(Global_100441.f_20), 13);
	}
	else
	{
		clear_bit(&(Global_100441.f_20), 13);
	}
}

var func_284()
{
	return BitTest(Global_100441.f_20, 13);
}

void func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (func_366())
		{
			if (func_363(func_365(), 10f, 20f, 9f, 1))
			{
				func_362();
				while (!func_361())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_144 = func_360(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_144 = func_360(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_359())
	{
		func_357();
		while (!func_356())
		{
			func_28(544, 1);
		}
		iLocal_144 = func_286(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_278())
		{
			if (is_vehicle_driveable(iLocal_144, false))
			{
				set_ped_into_vehicle(player_ped_id(), iLocal_144, -1);
			}
		}
	}
}

int func_286(struct<3> Param0, float fParam1)
{
	return func_287(&(Global_106934.f_2890), Param0, fParam1, 0);
}

int func_287(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_355(uParam0))
	{
		if (func_168(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (is_point_in_angled_area(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_354(uParam0))
		{
			clear_area(Param1, 5f, true, false, false, false);
			func_353(Param1, 5f, 0);
			iVar0 = create_vehicle(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (does_entity_exist(iVar0))
			{
				Var1 = { get_entity_coords(iVar0, true) };
				if (vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					set_entity_coords_no_offset(iVar0, Param1, false, false, true);
				}
				func_327(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (is_this_model_a_boat(uParam0->f_12.f_66) || is_this_model_a_jetski(uParam0->f_12.f_66))
				{
					if (!test_probe_against_water(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					set_vehicle_on_ground_properly(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (is_this_model_a_car(get_entity_model(iVar0)))
						{
							func_326(uParam0->f_11, 1);
						}
						else if (is_this_model_a_bike(get_entity_model(iVar0)))
						{
							func_326(uParam0->f_11, 2);
						}
					}
					_0xAB04325045427AAE(iVar0, false);
					set_vehicle_can_save_in_garage(iVar0, false);
					set_vehicle_has_strong_axles(iVar0, true);
					func_325(iVar0, uParam0->f_11);
				}
				else if ((!func_323(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && are_strings_equal(get_this_script_name(), "startup_positioning"))
				{
					iVar4 = func_322(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_315(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (get_hash_key(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_312(24, 0);
							func_315(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_288(iVar0, uParam0->f_11);
				}
				set_model_as_no_longer_needed(uParam0->f_12.f_66);
				Var1 = { get_entity_coords(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_288(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_294(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1, false);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (does_entity_exist(iVar0) && !is_ped_injured(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (get_entity_model(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (get_entity_model(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (get_entity_model(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_289(iParam0, &(Global_113386.f_32749.f_5510));
}

void func_289(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		func_293(uParam1);
		uParam1->f_66 = get_entity_model(iParam0);
		StringCopy(&(uParam1->f_1), get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		get_vehicle_extra_colours(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		get_vehicle_tyre_smoke_color(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = get_vehicle_window_tint(iParam0);
		uParam1->f_67 = get_vehicle_livery(iParam0);
		uParam1->f_69 = get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		_get_vehicle_neon_lights_colour(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			set_bit(&(uParam1->f_77), 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(&(uParam1->f_77), 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(&(uParam1->f_77), 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_292(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, false))
		{
			uParam1->f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(uParam1->f_66))
		{
			if (is_plane_landing_gear_intact(iParam0))
			{
				switch (get_landing_gear_state(iParam0))
				{
					case 3:
					case 0:
						clear_bit(&(uParam1->f_77), 23);
						set_bit(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						clear_bit(&(uParam1->f_77), 23);
						clear_bit(&(uParam1->f_77), 22);
						break;
					
					case 5:
						set_bit(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				set_bit(&(uParam1->f_77), 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(&(uParam1->f_77), 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(&(uParam1->f_77), 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(&(uParam1->f_77), 13);
			get_vehicle_custom_primary_colour(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(&(uParam1->f_77), 12);
		}
		func_291(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(&(uParam1->f_77), func_290(iVar0 + 1));
			}
			iVar0++;
		}
		if (does_vehicle_have_crew_emblem(iParam0, 0))
		{
			set_bit(&(uParam1->f_77), 11);
		}
		else
		{
			clear_bit(&(uParam1->f_77), 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(&(uParam1->f_77), 27);
		}
		else
		{
			clear_bit(&(uParam1->f_77), 27);
		}
	}
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_291(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, false))
	{
		return 0;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				switch (_get_vehicle_xenon_lights_color(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_293(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_294(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, false)) || func_78(iParam0, 0, 0)) || func_78(iParam0, 1, 0)) || func_78(iParam0, 2, 0)) || func_311(iParam0) != 145) || func_310(iParam0)) || func_309(iParam0)) || func_308(iParam0)) || func_307(iParam0)) || !func_295(get_entity_model(iParam0)))
	{
		if (func_309(iParam0))
		{
		}
		if (func_309(iParam0))
		{
		}
		if (func_78(iParam0, 0, 0))
		{
		}
		if (func_78(iParam0, 1, 0))
		{
		}
		if (func_78(iParam0, 2, 0))
		{
		}
		if (func_311(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_295(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_296(iParam0, 0))
	{
		return 0;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_296(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !network_is_game_in_progress()) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress()))
	{
		if (!func_306())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (is_content_item_locked(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_305() && !func_304()) && !func_303()) && !func_302()) && !func_306())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_301() || is_pc_version()) || func_300())
		{
		}
		else if (!func_303())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_299(iParam0))
		{
			return 0;
		}
	}
	if (!func_297(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_297(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_298())
	{
		return 1;
	}
	_net_gameserver_get_transaction_manager_data(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!_net_gameserver_catalog_item_exists(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_298()
{
	if (is_pc_version())
	{
		return _net_gameserver_use_server_transactions();
	}
	return 0;
}

int func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = get_cloud_time_as_int();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15214558)
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -754687673)
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -768236378)
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 40817712)
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -64075878)
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -10917683)
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -294678663)
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1855505138)
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 775514032)
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -893984159)
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 274946574)
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -165394758)
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758379524)
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -994371320)
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1706945532)
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1356880839)
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -477831899)
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -505223465)
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_300()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

bool func_301()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

int func_302()
{
	return 0;
}

int func_303()
{
	return 1;
}

int func_304()
{
	return 1;
}

int func_305()
{
	if (is_dlc_present(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_306()
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
					set_bit(&iVar0, false);
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

int func_307(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_296(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_97772[iVar0]) && is_vehicle_driveable(Global_97772[iVar0], false))
			{
				if (Global_97772[iVar0] == iParam0 && get_entity_model(Global_97772[iVar0]) == get_entity_model(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_312(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_314(iParam0, 0))
		{
			func_313(iParam0, 1, 0);
			func_313(iParam0, 2, 0);
			func_313(iParam0, 3, 0);
			func_313(iParam0, 4, 0);
			func_313(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_313(iParam0, 0, 0);
	}
}

void func_313(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		set_bit(&(Global_113386.f_32749[iParam0]), bParam1);
	}
	else
	{
		clear_bit(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

int func_314(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_315(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_319(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_vehicle_driveable(Global_77137.f_139[iParam0], false))
				{
					if (is_ped_in_vehicle(player_ped_id(), Global_77137.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				set_entity_as_mission_entity(Global_77137.f_139[iParam0], true, true);
				delete_vehicle(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_314(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_317(0, Global_77137.f_555[0 /*21*/].f_12) || !func_317(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_316(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_312(iParam0, 0);
		}
	}
}

void func_316(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_318(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_296(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_318(var uParam0)
{
	return *uParam0;
}

int func_319(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_320(0, 1);
			uParam0->f_12 = 0;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_320(0, 1);
			uParam0->f_12 = 0;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_320(1, 1);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_320(1, 2);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 19);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_320(1, 1);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_320(1, 2);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 19);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_320(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_320(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_320(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			set_bit(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			set_bit(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 28);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 28);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 14);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 28);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 27);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 27);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 12);
			set_bit(&(uParam0->f_9), 7);
			set_bit(&(uParam0->f_9), 27);
			set_bit(&(uParam0->f_9), 24);
			set_bit(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 11);
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			set_bit(&(uParam0->f_9), 10);
			set_bit(&(uParam0->f_9), 11);
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			set_bit(&(uParam0->f_9), 9);
			set_bit(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			set_bit(&(uParam0->f_9), 9);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			set_bit(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), 30);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), 22);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_306())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), true);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_306())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			set_bit(&(uParam0->f_9), 13);
			set_bit(&(uParam0->f_9), 2);
			set_bit(&(uParam0->f_9), true);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			set_bit(&(uParam0->f_9), false);
			set_bit(&(uParam0->f_9), 21);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 6);
			set_bit(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			set_bit(&(uParam0->f_9), 30);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			set_bit(&(uParam0->f_9), 30);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_168(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_168(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_168(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_320(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_321(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_321(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((does_entity_exist(Global_77137.f_484[iVar0]) && !is_entity_dead(Global_77137.f_484[iVar0], false)) && is_vehicle_driveable(Global_77137.f_484[iVar0], false))
		{
			get_vehicle_colours(iParam0, &iVar1, &iVar2);
			get_vehicle_colours(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((get_entity_model(iParam0) == get_entity_model(Global_77137.f_484[iVar0]) && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_323(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_324(iParam0, Global_77137.f_139[38], 0))
			{
				func_315(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_324(iParam0, Global_77137.f_139[43], 1))
			{
				func_315(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = get_ped_nearby_vehicles(player_ped_id(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_324(iParam0, uVar1[iVar3], 1) && func_236(get_entity_coords(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_168(Param1, 0f, 0f, 0f, 0)) || get_distance_between_coords(get_entity_coords(iParam0, true), get_entity_coords(uVar1[iVar3], true), true) < 10f)
					{
						delete_vehicle(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((does_entity_exist(Global_77137.f_484[14]) && is_vehicle_driveable(iParam0, false)) && is_vehicle_driveable(Global_77137.f_484[14], false))
			{
				if (get_entity_model(Global_77137.f_484[14]) == joaat("luxor2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_77137.f_484[14]))
				{
					func_315(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((does_entity_exist(Global_77137.f_484[20]) && is_vehicle_driveable(iParam0, false)) && is_vehicle_driveable(Global_77137.f_484[20], false))
			{
				if (get_entity_model(Global_77137.f_484[20]) == joaat("swift2") && get_vehicle_livery(iParam0) == get_vehicle_livery(Global_77137.f_484[20]))
				{
					func_315(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_324(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((does_entity_exist(iParam1) && !is_entity_dead(iParam1, false)) && is_vehicle_driveable(iParam1, false))
	{
		if (bParam2)
		{
			get_vehicle_colours(iParam0, &iVar0, &iVar1);
			get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_325(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = iParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = get_entity_model(iParam0);
			if (is_this_model_a_car(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_326(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || get_entity_model(Global_97772[iVar0]) == func_320(iParam0, iParam1))
				{
					if (!is_ped_in_vehicle(player_ped_id(), Global_97772[iVar0], false))
					{
						set_entity_as_mission_entity(Global_97772[iVar0], false, true);
						delete_vehicle(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_327(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_345(iParam0))
		{
			if (get_hash_key(&(uParam1->f_1)) != 0)
			{
				set_vehicle_number_plate_text(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
			{
				set_vehicle_number_plate_text_index(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_290(iVar0 + 1)))
			{
			}
			else
			{
				set_bit(&(uParam1->f_77), func_290(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_290(iVar1 + 1)))
			{
			}
			else
			{
				set_bit(&(uParam1->f_77), func_290(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_290(iVar2)))
				{
				}
				else
				{
					set_bit(&(uParam1->f_77), func_290(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_290(iVar3)))
				{
				}
				else
				{
					set_bit(&(uParam1->f_77), func_290(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_290(iVar4)))
					{
					}
					else
					{
						set_bit(&(uParam1->f_77), func_290(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_290(4)))
			{
			}
			else
			{
				set_bit(&(uParam1->f_77), func_290(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (get_vehicle_mod(iParam0, 10) != 0)
			{
				set_bit(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			set_bit(&(uParam1->f_77), func_290(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_290(iVar5)))
				{
				}
				else
				{
					set_bit(&(uParam1->f_77), func_290(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			_set_disable_vehicle_window_collisions(iParam0, false);
			if (get_vehicle_mod(iParam0, 5) != -1)
			{
				_set_disable_vehicle_window_collisions(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_343(uParam1->f_5) || func_343(uParam1->f_6))
			{
			}
			else
			{
				set_vehicle_colours(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_342(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_341())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_292(uParam1->f_66))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			set_vehicle_tyres_can_burst(iParam0, false);
			_set_drift_tyres_enabled(iParam0, false);
		}
		if (bParam2)
		{
			set_vehicle_doors_locked(iParam0, uParam1->f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, BitTest(uParam1->f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, BitTest(uParam1->f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, BitTest(uParam1->f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, BitTest(uParam1->f_77, 31));
		set_vehicle_is_stolen(iParam0, BitTest(uParam1->f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			set_vehicle_livery(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!is_this_model_a_bicycle(get_entity_model(iParam0)))
			{
				if (is_this_model_a_bike(get_entity_model(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_340(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_340(iParam0, uParam1->f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				raise_convertible_roof(iParam0, true);
			}
			else
			{
				lower_convertible_roof(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_333(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!is_this_model_a_heli(uParam1->f_66) && !is_this_model_a_boat(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_290(iVar6 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar6 + 1))
					{
						set_vehicle_extra(iParam0, iVar6 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar6 + 1))
				{
					set_vehicle_extra(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((get_entity_model(iParam0) == joaat("sheava") || get_entity_model(iParam0) == joaat("omnis")) || get_entity_model(iParam0) == joaat("le7b"))
		{
			if (get_vehicle_mod(iParam0, 0) == -1)
			{
				set_vehicle_extra(iParam0, 1, false);
			}
		}
		if (((func_328() && is_this_model_a_plane(uParam1->f_66)) && _does_vehicle_have_landing_gear(iParam0)) && !is_vehicle_model(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					control_landing_gear(iParam0, 2);
				}
				else
				{
					control_landing_gear(iParam0, 3);
				}
			}
			else
			{
				control_landing_gear(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_328()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_331(7))
	{
		if (func_330(Global_2703735.f_4.f_16) || func_329(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_329(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_41(iParam0, 9);
	}
	return 0;
}

bool func_331(int iParam0)
{
	return func_332(&(Global_2703735.f_169), iParam0);
}

var func_332(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_333(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, false))
	{
		return 0;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return 0;
	}
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			toggle_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				toggle_vehicle_mod(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					_set_vehicle_xenon_lights_color(*iParam0, 255);
				}
				else
				{
					_set_vehicle_xenon_lights_color(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				toggle_vehicle_mod(*iParam0, iVar1, false);
			}
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_338(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_337(get_entity_model(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_336(*iParam0, ((*uParam1)[38] - 1)))
	{
		set_vehicle_mod(*iParam0, 24, func_336(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_335(iParam0);
	if (func_334(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return 1;
}

int func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 32);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_335(var uParam0)
{
	switch (get_entity_model(*uParam0))
	{
		case joaat("starling"):
			if (get_vehicle_mod(*uParam0, 4) == 0)
			{
				set_vehicle_mod(*uParam0, 13, 0, false);
			}
			else
			{
				remove_vehicle_mod(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			set_vehicle_mod(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_336(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
	{
		switch (get_entity_model(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
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
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_337(int iParam0, int iParam1)
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

int func_338(var uParam0, int iParam1, int iParam2)
{
	if (!func_339() && unk_0x00834EAC4A96E010(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_339()
{
	return 0;
}

void func_340(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		bVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (get_entity_model(iParam0) == joaat("tornado6") || get_entity_model(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

bool func_341()
{
	return is_dlc_present(joaat("mpindependence"));
}

int func_342(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_343(int iParam0)
{
	if (!func_339() && func_344(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_345(int iParam0)
{
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		if (!func_351(player_id(), -1))
		{
			iParam0 = get_vehicle_ped_is_in(player_ped_id(), false);
		}
	}
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0, false))
	{
		return 0;
	}
	if (!is_vehicle_driveable(iParam0, false))
	{
		return 0;
	}
	if (func_347(player_id()) == 3)
	{
		if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
		{
			if (func_346(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	if (decor_is_registered_as_type("FMDeliverableID", 3))
	{
		if (decor_exist_on(iParam0, "FMDeliverableID"))
		{
			return decor_get_int(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_347(int iParam0)
{
	if (func_350(iParam0) == 233)
	{
		return func_348(iParam0);
	}
	return -1;
}

int func_348(int iParam0)
{
	if (func_349(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_349(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_350(int iParam0)
{
	if (func_349(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_351(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_352(iParam0, 1, 1))
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

int func_352(int iParam0, bool bParam1, bool bParam2)
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

void func_353(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_319(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (get_distance_between_coords(Param0, Global_77137.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_315(iVar0);
			}
		}
		iVar0++;
	}
}

int func_354(var uParam0)
{
	if (func_355(uParam0))
	{
		if (has_model_loaded(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_355(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_296(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_236(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_356()
{
	return func_354(&(Global_106934.f_2890));
}

void func_357()
{
	func_358(&(Global_106934.f_2890));
}

void func_358(var uParam0)
{
	if (func_355(uParam0))
	{
		request_model(uParam0->f_12.f_66);
	}
}

bool func_359()
{
	return func_355(&(Global_106934.f_2890));
}

int func_360(struct<3> Param0, float fParam1)
{
	return func_287(&(Global_103950.f_2890), Param0, fParam1, 0);
}

bool func_361()
{
	return func_354(&(Global_103950.f_2890));
}

void func_362()
{
	func_358(&(Global_103950.f_2890));
}

int func_363(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_364() };
	}
	get_model_dimensions(iParam0, &Var0, &Var1);
	if ((Var1.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_364()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_365()
{
	return Global_103950.f_2890.f_12.f_66;
}

bool func_366()
{
	return func_355(&(Global_103950.f_2890));
}

void func_367(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_377())
	{
		set_this_script_can_be_paused(false);
		clear_bit(&(Global_100441.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = fParam1;
		Global_100436 = 1;
		if (iParam2 == 1)
		{
			set_bit(&(Global_100441.f_20), 14);
		}
		else
		{
			clear_bit(&(Global_100441.f_20), 14);
		}
		if (iParam3 == 1)
		{
			set_bit(&(Global_100441.f_20), 24);
		}
		else
		{
			clear_bit(&(Global_100441.f_20), 24);
		}
		func_283(1);
	}
}

int func_368(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_50(iParam1))
	{
		iVar0 = func_370(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, Param2, fParam3, false, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_369(*iParam0, iParam1);
			if (bParam4)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_369(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_370(int iParam0)
{
	if (!func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_371(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_184();
	func_185();
	func_186();
	func_183();
	end_srl();
	set_vehicle_population_budget(3);
	set_ped_population_budget(3);
	iLocal_392 = 0;
	iLocal_167 = 0;
	iLocal_163 = 0;
	iLocal_150 = 0;
	iLocal_114 = 0;
	iLocal_164 = 0;
	iLocal_374 = 0;
	iLocal_375 = 0;
	while (is_cutscene_active())
	{
		if (is_cutscene_playing())
		{
			stop_cutscene(true);
		}
		else
		{
			remove_cutscene();
		}
		func_28(0, 0);
	}
	if (does_pickup_exist(iLocal_168))
	{
		remove_pickup(iLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (does_pickup_exist(iLocal_169[iVar0]))
		{
			remove_pickup(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	sLocal_406 = "";
	sLocal_407 = "";
	func_190();
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	set_special_ability_multiplier(1f);
	func_375();
	render_script_cams(false, false, 3000, true, false, 0);
	destroy_all_cams(false);
	func_192(0, 1, 1, 0, 0, 0, 0);
	func_28(32, 0);
	set_time_scale(1f);
	clear_prints();
	func_218(&Local_184, 1, 0);
	func_72();
	func_70();
	remove_scenario_blocking_areas();
	set_instance_priority_hint(0);
	set_roads_back_to_original(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
		create_model_hide(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
		Global_40787 = 1;
	}
	set_ambient_zone_list_state("AZL_CHN2_METH_LAB_FARM_FIRE", false, true);
	if (iParam0 != 3)
	{
		set_scenario_group_enabled("Chinese2_Lunch", true);
		set_scenario_group_enabled("CHINESE2_HILLBILLIES", false);
	}
	set_player_control(player_id(), true, 0);
	if (iLocal_379 != -1)
	{
		if (does_navmesh_blocking_object_exist(iLocal_379))
		{
			remove_navmesh_blocking_object(iLocal_379);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_373(player_ped_id(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (iVar0 == 14)
		{
		}
		if (does_entity_exist(Local_113[iVar0 /*33*/]))
		{
			if (!is_ped_injured(Local_113[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					clear_ped_tasks_immediately(Local_113[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!is_ped_injured(Local_113[iVar0 /*33*/]))
				{
					set_ped_keep_task(Local_113[iVar0 /*33*/], true);
					set_ped_as_no_longer_needed(&(Local_113[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				delete_ped(&(Local_113[iVar0 /*33*/]));
			}
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		if (does_entity_exist(Local_113[iVar0 /*33*/].f_20))
		{
			delete_object(&(Local_113[iVar0 /*33*/].f_20));
		}
		remove_relationship_group(Local_113[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_372();
	}
	else
	{
		func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
	}
	if (does_entity_exist(iLocal_373))
	{
		delete_object(&iLocal_373);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		clear_area(2438.433f, 4970.416f, 53.1778f, 450f, true, false, false, false);
		stop_fire_in_range(2442.69f, 4970.348f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if ((Local_153[iVar0 /*6*/].f_1 == 1 && Local_153[iVar0 /*6*/].f_3 == 0) || Local_153[iVar0 /*6*/].f_3 == 0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			Local_153[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (does_blip_exist(iLocal_178))
	{
		remove_blip(&iLocal_178);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_170)
	{
		if (does_entity_exist(iLocal_170[iVar1]))
		{
			delete_object(&(iLocal_170[iVar1]));
		}
		iVar1++;
	}
	if (does_entity_exist(iLocal_144))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (is_vehicle_driveable(iLocal_144, false))
			{
				if (does_entity_belong_to_this_script(iLocal_144, true))
				{
					if (is_ped_injured(player_ped_id()))
					{
						set_vehicle_as_no_longer_needed(&iLocal_144);
					}
					else
					{
						set_vehicle_as_no_longer_needed(&iLocal_144);
					}
				}
			}
		}
	}
	if (does_entity_exist(iLocal_145))
	{
		if (iParam0 != 0)
		{
			if (is_ped_injured(player_ped_id()))
			{
				set_vehicle_as_no_longer_needed(&iLocal_145);
			}
			else
			{
				set_vehicle_as_no_longer_needed(&iLocal_145);
			}
		}
		else
		{
			set_vehicle_as_no_longer_needed(&iLocal_145);
		}
	}
	if (does_entity_exist(iLocal_146))
	{
		if (func_74(iLocal_146))
		{
			set_vehicle_as_no_longer_needed(&iLocal_146);
		}
	}
	if (does_pickup_exist(iLocal_176))
	{
		remove_pickup(iLocal_176);
	}
	if (iParam0 == 0)
	{
		if (does_entity_exist(iLocal_181))
		{
			freeze_entity_position(iLocal_181, false);
			set_object_as_no_longer_needed(&iLocal_181);
		}
		if (does_entity_exist(iLocal_182))
		{
			freeze_entity_position(iLocal_182, false);
			set_object_as_no_longer_needed(&iLocal_182);
		}
	}
	if (does_entity_exist(iLocal_160))
	{
		delete_ped(&iLocal_160);
	}
	remove_decals_in_range(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (does_entity_exist(Local_113[12 /*33*/]))
		{
			delete_ped(&(Local_113[12 /*33*/]));
		}
		if (does_entity_exist(Local_113[13 /*33*/]))
		{
			delete_ped(&(Local_113[13 /*33*/]));
		}
		if (does_entity_exist(Local_113[14 /*33*/]))
		{
			delete_ped(&(Local_113[14 /*33*/]));
		}
		if (does_entity_exist(Local_113[11 /*33*/]))
		{
			delete_ped(&(Local_113[11 /*33*/]));
		}
		if (does_entity_exist(Local_113[10 /*33*/]))
		{
			delete_ped(&(Local_113[10 /*33*/]));
		}
	}
	set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_01"));
	set_model_as_no_longer_needed(joaat("a_m_m_hillbilly_02"));
	set_model_as_no_longer_needed(joaat("prop_cs_fertilizer"));
	set_model_as_no_longer_needed(joaat("burrito"));
	set_model_as_no_longer_needed(joaat("ig_janet"));
	set_model_as_no_longer_needed(joaat("ig_old_man1a"));
	set_model_as_no_longer_needed(joaat("ig_old_man2"));
	set_model_as_no_longer_needed(joaat("ig_taocheng"));
	set_model_as_no_longer_needed(joaat("ig_taostranslator"));
	set_model_as_no_longer_needed(joaat("ig_janet"));
	remove_anim_set("move_m@gangster@var_e");
	remove_anim_set("move_m@gangster@var_f");
	remove_anim_set("move_m@gangster@generic");
	remove_anim_dict("misschinese2_barrelRoll");
	remove_anim_dict("reaction@male_stand@big_variations@b");
	remove_anim_dict("reaction@male_stand@big_intro@left");
	remove_anim_dict("reaction@male_stand@big_intro@right");
	remove_anim_dict("reaction@male_stand@big_intro@backward");
	remove_anim_dict("misschinese2_bank1");
	remove_anim_dict("misschinese2_bank5");
	remove_anim_dict("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
		{
			remove_weapon_from_ped(player_ped_id(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_159 = 0;
	iLocal_111 = 0;
	if (is_audio_scene_active("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		stop_audio_scene("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (is_audio_scene_active("CHI_2_DRIVE_ROCK_RADIO"))
	{
		stop_audio_scene("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (is_audio_scene_active("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		stop_audio_scene("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (is_audio_scene_active("CHI_2_SHOOTOUT_STEALTH"))
	{
		stop_audio_scene("CHI_2_SHOOTOUT_STEALTH");
	}
	if (is_audio_scene_active("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		stop_audio_scene("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (is_audio_scene_active("CHI_2_POUR_GAS"))
	{
		stop_audio_scene("CHI_2_POUR_GAS");
	}
	if (is_audio_scene_active("CHI_2_SHOOT_GAS"))
	{
		stop_audio_scene("CHI_2_SHOOT_GAS");
	}
	if (is_audio_scene_active("CHI_2_GAS_TRAIL_FIRE"))
	{
		stop_audio_scene("CHI_2_GAS_TRAIL_FIRE");
	}
	if (is_audio_scene_active("CHI_2_RAYFIRE"))
	{
		stop_audio_scene("CHI_2_RAYFIRE");
	}
	stop_stream();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_173());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_172(0);
	}
	if (iParam0 != 0)
	{
		iLocal_173 = get_rayfire_map_object(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_174)
		{
			if (does_rayfire_map_object_exist(iLocal_173))
			{
				set_state_of_rayfire_map_object(iLocal_173, 2);
			}
			iLocal_174 = 0;
		}
	}
}

void func_372()
{
	unblock_decision_maker_event(joaat("DEFAULT"), 31);
}

void func_373(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (does_entity_exist(iParam0))
	{
		if (get_current_ped_weapon(iParam0, &iVar0, false))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_374(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_100478 > 0)
	{
		Global_106934.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_103950.f_21[iParam1] = iVar0;
	}
}

int func_374(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_100478 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_375()
{
	int iVar0;
	
	Global_63183 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63184[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_376()
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

int func_377()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

void func_378(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_379()
{
	add_relationship_group("MYFRIEND", &iLocal_115);
	add_relationship_group("FOE", &iLocal_116);
	add_relationship_group("IGNORE", &iLocal_117);
	add_relationship_group("BARpeds", &iLocal_154);
	set_relationship_between_groups(3, iLocal_154, joaat("player"));
	set_relationship_between_groups(5, get_ped_relationship_group_hash(player_ped_id()), iLocal_116);
	set_relationship_between_groups(5, iLocal_116, get_ped_relationship_group_hash(player_ped_id()));
	set_relationship_between_groups(2, iLocal_115, iLocal_117);
	set_relationship_between_groups(2, iLocal_116, iLocal_117);
	set_relationship_between_groups(2, iLocal_117, get_ped_relationship_group_hash(player_ped_id()));
	set_relationship_between_groups(2, iLocal_117, iLocal_116);
}

void func_380()
{
	switch (iLocal_575)
	{
		case 0:
			if (iLocal_149 >= 4)
			{
				func_381(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 1:
			if (iLocal_149 >= 4 && iLocal_149 < 7)
			{
				if (func_93(12) || iLocal_149 == 6)
				{
					func_381(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 == 7)
			{
				if (has_ped_got_weapon(player_ped_id(), joaat("weapon_petrolcan"), false))
				{
					func_381(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 > 7)
			{
				func_381(2, "Inside House", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 2:
			if (iLocal_149 >= 7)
			{
				func_381(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		
		case 3:
			if (iLocal_149 == 9)
			{
				func_381(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_575++;
			}
			break;
	}
}

void func_381(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!are_strings_equal("FinaleC2", get_this_script_name()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_453(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = func_451(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_449(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			playstats_mission_checkpoint(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = func_444(get_this_script_name(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_443(iVar4)}, 4);
				playstats_mission_checkpoint(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = func_442(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_382(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_382(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_383(&Global_106934, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_383(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_48();
	uParam0->f_1 = func_431();
	_get_weather_type_transition(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!is_ped_injured(player_ped_id()))
	{
		func_407(&(uParam0->f_2884), 0);
		func_406(player_ped_id());
		func_399(player_ped_id(), 0);
		get_current_ped_weapon(player_ped_id(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == func_398())
		{
			func_392(player_ped_id(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				stat_get_int(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				stat_get_int(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				stat_get_int(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				stat_get_int(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				stat_get_int(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				stat_get_int(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				stat_get_int(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				stat_get_int(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				stat_get_int(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				stat_get_int(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				stat_get_int(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				stat_get_int(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				stat_get_int(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				stat_get_int(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				stat_get_int(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				stat_get_int(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				stat_get_int(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				stat_get_int(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				stat_get_int(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				stat_get_int(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				stat_get_int(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				stat_get_int(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				stat_get_int(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				stat_get_int(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stat_get_int(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	stat_get_int(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	stat_get_int(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_385(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_384(var uParam0)
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_385(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = player_ped_id();
	}
	if (does_entity_exist(iParam2))
	{
		uParam1->f_5 = func_51(iParam2);
	}
	if (func_391(iParam2, &iVar0, iParam3, iParam5))
	{
		func_386(uParam0, uParam1, iVar0, iParam4);
	}
	else if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0, false))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(player_ped_id(), iVar0, false))
			{
				func_386(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_386(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, false))
	{
		func_388(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_387(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100441.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_388(var uParam0, int iParam1, int iParam2)
{
	func_289(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_390(iParam1, 145, 0);
	uParam0->f_11 = func_311(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_389(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { get_entity_coords(iParam1, true) };
		uParam0->f_6 = get_entity_heading(iParam1);
		uParam0->f_3 = { get_entity_velocity(iParam1) };
		if (is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78042 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_389(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_77137.f_484[iVar0]))
		{
			if (iParam0 == Global_77137.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!is_vehicle_driveable(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (does_entity_exist(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || get_entity_model(iParam0) == func_320(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_391(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam0 == player_ped_id())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, true);
			}
			if (does_entity_exist(*uParam1))
			{
				if (is_vehicle_driveable(*uParam1, false))
				{
					if (iParam2 == 0 || get_distance_between_coords(get_entity_coords(*uParam1, true), get_entity_coords(iParam0, true), true) < 100f)
					{
						if (is_vehicle_model(*uParam1, joaat("taxi")))
						{
							if (get_ped_in_vehicle_seat(*uParam1, -1, false) != iParam0 && get_ped_in_vehicle_seat(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_78(*uParam1, func_48(), 1))
						{
							sVar0 = get_this_script_name();
							if (!are_strings_equal(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!is_ped_in_any_vehicle(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (decor_exist_on(*uParam1, "IgnoredByQuickSave"))
							{
								if (decor_get_bool(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (is_vehicle_model(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_392(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_51(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_397(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_396(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_50(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			if (func_395(161, iParam3))
			{
				uParam1->f_59 = func_393(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_393(753, iParam3, 0);
			}
			uParam1->f_60 = func_393(754, iParam3, 0);
			uParam1->f_61 = func_393(755, iParam3, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_395(161, iParam3))
			{
				uParam1->f_59 = func_393(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_393(753, iParam3, 0);
			}
		}
	}
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_394(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_394(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_196();
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

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_394(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_396(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_prop_index(iParam0, iParam1);
		*uParam3 = get_ped_prop_texture_index(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (is_ped_wearing_helmet(iParam0) && get_ped_helmet_stored_hat_prop_index(iParam0) != -1)
				{
					*uParam2 = get_ped_helmet_stored_hat_prop_index(iParam0);
					*uParam3 = get_ped_helmet_stored_hat_tex_index(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_397(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_drawable_variation(iParam0, iParam1);
		*uParam3 = get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = get_ped_palette_variation(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_398()
{
	func_49();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_399(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_400(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = _hud_weapon_wheel_get_slot_hash(iVar2);
				if (bParam1)
				{
					iVar1 = _hud_weapon_wheel_get_selected_hash();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			get_player_parachute_pack_tint_index(player_id(), &iVar3);
			if (iVar0 == 0)
			{
				stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, true);
			}
		}
	}
}

void func_400(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	bool bVar10;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_405(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = get_ped_weapontype_in_slot(iParam0, func_405(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = get_ammo_in_ped_weapon(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = get_ped_weapon_tint_index(iParam0, Var4.f_0);
					Var4.f_4 = _0xA2C9AC24B4061285(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!get_max_ammo(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_403(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, Var4.f_0, iVar2))
						{
							set_bit(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_403(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = _get_num_dlc_weapons_sp();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((_get_dlc_weapon_data_sp(iVar5, &Var7) && !func_402(Var7.f_1)) && iVar9 < 51)
			{
				if (!is_content_item_locked(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = get_ammo_in_ped_weapon(iParam0, Var4.f_0);
					if (has_ped_got_weapon(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = get_ped_weapon_tint_index(iParam0, Var4.f_0);
						Var4.f_4 = _0xA2C9AC24B4061285(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!get_max_ammo(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					bVar10 = false;
					bVar1 = false;
					while (bVar1 < _get_num_dlc_weapon_components_sp(iVar5))
					{
						if (_get_dlc_weapon_component_data_sp(iVar5, bVar1, &Var8))
						{
							if (!func_401(Var8.f_3))
							{
								if (has_ped_got_weapon_component(iParam0, Var4.f_0, Var8.f_3))
								{
									set_bit(&(Var4.f_2), bVar10);
								}
								bVar10++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!has_ped_got_weapon(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_402(int iParam0)
{
	if (network_is_game_in_progress())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case -610080759:
			case 1853742572:
			case -774507221:
				return 1;
				break;
			}
	}
	return 0;
}

int func_403(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_404(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iVar2, &Var5))
						{
							if (!func_401(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_404(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_405(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_406(int iParam0)
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !is_ped_injured(iParam0))
	{
		Global_113386.f_2363.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_407(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { get_entity_coords(player_ped_id(), true) };
	uParam0->f_3 = get_entity_heading(player_ped_id());
	uParam0->f_5 = get_ped_parachute_state(player_ped_id());
	if (is_player_playing(player_id()))
	{
		uParam0->f_4 = get_player_wanted_level(player_id());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (_get_number_of_references_of_script_with_name_hash(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(player_ped_id()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_410(&iVar0))
		{
			if (func_409(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = func_48();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_408(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_408(struct<3> Param0, char* sParam1, struct<3> Param2)
{
	int iVar0;
	int iVar1;
	
	if (!is_collision_marked_outside(Param0))
	{
		iVar0 = get_interior_at_coords_with_type(Param2, sParam1);
		if (!is_valid_interior(iVar0))
		{
			return 0;
		}
		iVar1 = get_interior_from_collision(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_409(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_168(*uParam1, 0f, 0f, 0f, 0);
}

int func_410(var uParam0)
{
	if (!is_entity_dead(player_ped_id(), false) && !is_ped_injured(player_ped_id()))
	{
		if (func_34())
		{
			*uParam0 = func_415(get_entity_coords(player_ped_id(), false), 6, -1, 0, 1, -1);
			if (func_414(*uParam0) && !func_411(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_411(int iParam0)
{
	return func_412(iParam0, 0, 1);
}

int func_412(int iParam0, int iParam1, bool bParam2)
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
		if (func_25() == 0)
		{
			return BitTest(func_393(func_413(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_413(int iParam0)
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

int func_414(int iParam0)
{
	return func_412(iParam0, 5, 1);
}

int func_415(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == func_430(iVar0))
		{
			if (!bParam3 || func_429(iVar0))
			{
				fVar1 = get_distance_between_coords(Param0, func_416(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_416(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_426(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_42())
			{
				if (func_425(Global_1853185))
				{
					return func_418(2, 2);
				}
				else if (func_417(Global_1853185))
				{
					return func_418(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1966112;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2689235[player_id() /*453*/].f_318.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_417(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_418(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_42())
	{
		if (iParam1 == 3)
		{
			if (func_419(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_419(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_419(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_419(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_424(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_424(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_422(iParam0) };
	}
	else
	{
		Var2 = { func_421(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_420(Var3, -Var0.f_3.f_2) };
	Var3 = { func_420(Var3, Var1.f_3.f_2) };
	*uParam2 = { _get_object_offset_from_coords(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_420(struct<3> Param0, float fParam1)
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

struct<6> func_421(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_422(int iParam0)
{
	return func_423(iParam0);
}

struct<6> func_423(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_424(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_42())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_426(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_427() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_427()
{
	return func_428(player_id());
}

int func_428(int iParam0)
{
	return get_bits_in_range(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_429(int iParam0)
{
	return func_412(iParam0, 0, 0);
}

int func_430(int iParam0)
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

var func_431()
{
	var uVar0;
	
	func_441(&uVar0, get_clock_seconds());
	func_440(&uVar0, get_clock_minutes());
	func_439(&uVar0, get_clock_hours());
	func_434(&uVar0, get_clock_day_of_month());
	func_433(&uVar0, get_clock_month());
	func_432(&uVar0, get_clock_year());
	return uVar0;
}

void func_432(var uParam0, int iParam1)
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

void func_433(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_434(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_438(*uParam0);
	iVar1 = func_436(*uParam0);
	if (iParam1 < 1 || iParam1 > func_435(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_435(int iParam0, int iParam1)
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

var func_436(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_437(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_437(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_438(var uParam0)
{
	return uParam0 & 15;
}

void func_439(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_440(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_441(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_442(char* sParam0)
{
	if (are_strings_equal("BailBond1", sParam0))
	{
		return 0;
	}
	else if (are_strings_equal("BailBond2", sParam0))
	{
		return 1;
	}
	else if (are_strings_equal("BailBond3", sParam0))
	{
		return 2;
	}
	else if (are_strings_equal("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_443(int iParam0)
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

int func_444(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = get_hash_key(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_445(iVar0, &sVar1);
		if (get_hash_key(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_445(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_446(uParam1, "Abigail1", func_448(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 1:
			func_446(uParam1, "Abigail2", func_448(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 2:
			func_446(uParam1, "Barry1", func_448(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 3:
			func_446(uParam1, "Barry2", func_448(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_447(iParam0), 1, 1);
			break;
		
		case 4:
			func_446(uParam1, "Barry3", func_448(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 5:
			func_446(uParam1, "Barry3A", func_448(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 6:
			func_446(uParam1, "Barry3C", func_448(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 7:
			func_446(uParam1, "Barry4", func_448(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_447(iParam0), 0, 0);
			break;
		
		case 8:
			func_446(uParam1, "Dreyfuss1", func_448(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 9:
			func_446(uParam1, "Epsilon1", func_448(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 10:
			func_446(uParam1, "Epsilon2", func_448(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 11:
			func_446(uParam1, "Epsilon3", func_448(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 12:
			func_446(uParam1, "Epsilon4", func_448(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 13:
			func_446(uParam1, "Epsilon5", func_448(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 14:
			func_446(uParam1, "Epsilon6", func_448(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 15:
			func_446(uParam1, "Epsilon7", func_448(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 16:
			func_446(uParam1, "Epsilon8", func_448(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 17:
			func_446(uParam1, "Extreme1", func_448(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 18:
			func_446(uParam1, "Extreme2", func_448(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 19:
			func_446(uParam1, "Extreme3", func_448(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 20:
			func_446(uParam1, "Extreme4", func_448(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 21:
			func_446(uParam1, "Fanatic1", func_448(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_447(iParam0), 1, 0);
			break;
		
		case 22:
			func_446(uParam1, "Fanatic2", func_448(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_447(iParam0), 1, 0);
			break;
		
		case 23:
			func_446(uParam1, "Fanatic3", func_448(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_447(iParam0), 0, 1);
			break;
		
		case 24:
			func_446(uParam1, "Hao1", func_448(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_447(iParam0), 0, 1);
			break;
		
		case 25:
			func_446(uParam1, "Hunting1", func_448(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 26:
			func_446(uParam1, "Hunting2", func_448(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 27:
			func_446(uParam1, "Josh1", func_448(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 28:
			func_446(uParam1, "Josh2", func_448(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_447(iParam0), 1, 1);
			break;
		
		case 29:
			func_446(uParam1, "Josh3", func_448(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_447(iParam0), 1, 1);
			break;
		
		case 30:
			func_446(uParam1, "Josh4", func_448(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 31:
			func_446(uParam1, "Maude1", func_448(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 32:
			func_446(uParam1, "Minute1", func_448(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 33:
			func_446(uParam1, "Minute2", func_448(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 34:
			func_446(uParam1, "Minute3", func_448(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 35:
			func_446(uParam1, "MrsPhilips1", func_448(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 36:
			func_446(uParam1, "MrsPhilips2", func_448(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 37:
			func_446(uParam1, "Nigel1", func_448(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 38:
			func_446(uParam1, "Nigel1A", func_448(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_447(iParam0), 1, 1);
			break;
		
		case 39:
			func_446(uParam1, "Nigel1B", func_448(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_447(iParam0), 1, 1);
			break;
		
		case 40:
			func_446(uParam1, "Nigel1C", func_448(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_447(iParam0), 1, 1);
			break;
		
		case 41:
			func_446(uParam1, "Nigel1D", func_448(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_447(iParam0), 1, 1);
			break;
		
		case 42:
			func_446(uParam1, "Nigel2", func_448(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_447(iParam0), 1, 1);
			break;
		
		case 43:
			func_446(uParam1, "Nigel3", func_448(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_447(iParam0), 1, 1);
			break;
		
		case 44:
			func_446(uParam1, "Omega1", func_448(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 45:
			func_446(uParam1, "Omega2", func_448(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 46:
			func_446(uParam1, "Paparazzo1", func_448(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 47:
			func_446(uParam1, "Paparazzo2", func_448(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 48:
			func_446(uParam1, "Paparazzo3", func_448(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 49:
			func_446(uParam1, "Paparazzo3A", func_448(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 50:
			func_446(uParam1, "Paparazzo3B", func_448(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 51:
			func_446(uParam1, "Paparazzo4", func_448(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 52:
			func_446(uParam1, "Rampage1", func_448(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 54:
			func_446(uParam1, "Rampage3", func_448(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 55:
			func_446(uParam1, "Rampage4", func_448(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 56:
			func_446(uParam1, "Rampage5", func_448(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_447(iParam0), 0, 0);
			break;
		
		case 53:
			func_446(uParam1, "Rampage2", func_448(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_447(iParam0), 1, 0);
			break;
		
		case 57:
			func_446(uParam1, "TheLastOne", func_448(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 58:
			func_446(uParam1, "Tonya1", func_448(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 59:
			func_446(uParam1, "Tonya2", func_448(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 60:
			func_446(uParam1, "Tonya3", func_448(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 61:
			func_446(uParam1, "Tonya4", func_448(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		case 62:
			func_446(uParam1, "Tonya5", func_448(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_447(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_446(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_447(int iParam0)
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

struct<2> func_448(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_443(iParam0) };
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

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_450(Global_113386.f_9085.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_450(Global_113386.f_9085.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_450(Global_113386.f_9085.f_99.f_205[11]);
			break;
		
		case 90:
			return func_450(Global_113386.f_9085.f_99.f_205[7]);
			break;
		
		case 93:
			return func_450(Global_113386.f_9085.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_451(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_452(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_452(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91229[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_453(bool bParam0)
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

void func_454(int iParam0)
{
	func_371(iParam0);
	cascade_shadows_enable_entity_tracker(true);
	set_all_vehicle_generators_active();
	set_wanted_level_multiplier(1f);
	set_max_wanted_level(5);
	enable_dispatch_service(3, true);
	func_211(0);
	func_94();
	clear_prints();
	if (does_navmesh_blocking_object_exist(iLocal_148))
	{
		remove_navmesh_blocking_object(iLocal_148);
	}
	if (!is_ped_injured(player_ped_id()))
	{
		remove_weapon_from_ped(player_ped_id(), joaat("weapon_petrolcan"));
		clear_ped_tasks(player_ped_id());
	}
	if (!is_ped_injured(player_ped_id()))
	{
		if (get_interior_from_entity(player_ped_id()) != 0)
		{
			if (func_73(player_ped_id(), 2444.098f, 4977.795f, 48.9959f, 1) < 100f)
			{
				set_entity_coords(player_ped_id(), 2463.811f, 4961.747f, 44.176f, true, false, false, true);
				set_entity_heading(player_ped_id(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	terminate_this_thread();
}

void func_455()
{
	int iVar0;
	
	if (has_script_loaded("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_147(0))
	{
		if (!func_456())
		{
			iVar0 = func_146();
			if (iVar0 != -1)
			{
				if (!func_140(iVar0))
				{
					return;
				}
				set_bit(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_145();
		}
	}
}

int func_456()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

