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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	char[] cLocal_51[8] = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<2> Local_53[4];
	struct<10> Local_54[8];
	struct<5> Local_55[4];
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<2> Local_57[9];
	struct<6> Local_58 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_59 = 0;
	var uLocal_60 = 1092616192;
	var uLocal_61 = 1101004800;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 3;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 16;
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
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	struct<3> Local_276 = { 0, 0, 0 } ;
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	float fLocal_280 = 0f;
	int iLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	float fLocal_283 = 0f;
	int iLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	float fLocal_286 = 0f;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	int iLocal_290 = 0;
	struct<3> Local_291 = { 0, 0, 0 } ;
	float fLocal_292 = 0f;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 30;
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
	var uLocal_460 = 10;
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
	var uLocal_511 = 10;
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
	var uLocal_581 = 0;
	var uLocal_582 = 20;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 20;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 30;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 5;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 7;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 5;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 3;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 21;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 10;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 5;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 5;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 8;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 12;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 12;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 12;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 9;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 9;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 12;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 12;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 12;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 9;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 9;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 12;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 12;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 12;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 9;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 9;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 12;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 12;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 12;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 9;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 9;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 12;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 12;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 12;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 9;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 9;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 12;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 12;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 12;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 9;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 9;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 12;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 12;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 12;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 9;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 9;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 12;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 12;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 12;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 9;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 9;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	float fLocal_1983 = 0f;
	int iLocal_1984 = 0;
	int iLocal_1985 = 0;
	int iLocal_1986 = 0;
	int iLocal_1987[2] = { 0, 0 };
	int iLocal_1988 = 0;
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
	iLocal_46 = get_standard_blip_enum_id();
	iLocal_47 = get_waypoint_blip_enum_id();
	cLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_50 = "cellphone@str";
	cLocal_51 = "missheistdocksprep1ig_1";
	Local_52 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_261 = -1;
	Local_276 = { 327.263f, -2968.799f, -3f };
	fLocal_277 = 358.5f;
	iLocal_278 = joaat("prop_dock_crane_02_ld");
	Local_279 = { 305.053f, -2971.395f, 4.99f };
	fLocal_280 = 90f;
	iLocal_281 = joaat("prop_dock_crane_02_cab");
	Local_282 = { 0f, 0f, 19.907f };
	fLocal_283 = 0f;
	iLocal_284 = joaat("prop_dock_crane_02_hook");
	Local_285 = { -0.005f, -22.139f, -15f };
	fLocal_286 = 0f;
	Local_288 = { -0.005f, -22.139f, 32.825f };
	Local_289 = { 0f, 0f, 0.68f };
	Local_291 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_1983 = 3f;
	if (has_force_cleanup_occurred(3))
	{
		trigger_music_event("DHP1_FAIL");
		func_337();
		func_335();
		if (is_cutscene_active())
		{
			set_cutscene_fade_values(false, false, false, false);
		}
		func_332();
	}
	set_mission_flag(true);
	func_327();
	while (true)
	{
		_0x208784099002BC30("M_ThePortOfLSHeistPrep1", 0);
		func_326(&uLocal_309);
		func_324(&uLocal_1319);
		func_323();
		func_296();
		if (!iLocal_1981)
		{
			func_280();
			func_1();
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_1977)
	{
		case 0:
			func_229();
			break;
		
		case 1:
			func_194();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_1978)
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			set_gameplay_cam_relative_heading(180f);
			iLocal_1978++;
			break;
		
		case 1:
			if (is_screen_faded_in())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_4(0, 0);
	func_332();
}

void func_4(bool bParam0, int iParam1)
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
		if ((func_7(0) && Global_78565.f_1 == 1) && func_6(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_7(0))
	{
		iVar0 = func_5();
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
		set_bit(&Global_78567, 1);
		Global_78583 = uVar2;
		Global_78584 = get_game_timer();
	}
}

int func_5()
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

int func_6(int iParam0)
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

int func_7(bool bParam0)
{
	if (!bParam0 && _get_number_of_references_of_script_with_name_hash(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_8()
{
	switch (iLocal_1978)
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			func_108(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (func_107(Local_53[0 /*2*/]))
			{
				set_entity_proofs(Local_53[0 /*2*/], false, false, false, true, false, false, false, false);
			}
			set_vehicle_can_be_visibly_damaged(Local_53[0 /*2*/], false);
			set_vehicle_can_be_visibly_damaged(Local_53[1 /*2*/], false);
			set_ignore_no_gps_flag(true);
			set_gps_disabled_zone(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			set_can_climb_on_entity(Local_53[0 /*2*/], false);
			set_vehicle_is_considered_by_player(Local_53[0 /*2*/], false);
			_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_302 = 0;
			iLocal_303 = 0;
			iLocal_1978++;
			break;
		
		case 1:
			if (func_107(player_ped_id()) && func_107(Local_53[0 /*2*/]))
			{
				if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_53[0 /*2*/], true), true) > 400f && !is_entity_on_screen(Local_53[0 /*2*/]))
				{
					func_93(9);
				}
			}
			if (func_92(player_ped_id(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				func_91(&(Local_57[7 /*2*/]), 0);
				func_91(&(Local_57[8 /*2*/]), 0);
				func_91(&(Local_57[6 /*2*/]), 0);
				func_89(&uLocal_309, joaat("prop_dock_crane_02_ld"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_cab"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_302 && func_92(player_ped_id(), Local_52, 1) < 200f)
			{
				func_88(&uLocal_309, joaat("bison"));
				iLocal_303 = 1;
				iLocal_302 = 1;
			}
			else if (iLocal_302)
			{
				if (func_92(player_ped_id(), Local_52, 1) > 220f)
				{
					func_89(&uLocal_309, joaat("bison"));
					iLocal_303 = 0;
					iLocal_302 = 0;
					if (does_entity_exist(Local_53[3 /*2*/]))
					{
						delete_vehicle(&(Local_53[3 /*2*/]));
					}
				}
				else if (func_92(player_ped_id(), Local_52, 1) < 200f)
				{
					if (iLocal_303 && has_model_loaded(joaat("bison")))
					{
						if (!does_entity_exist(Local_53[3 /*2*/]))
						{
							Local_53[3 /*2*/] = create_vehicle(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, true, true, false);
							set_vehicle_is_considered_by_player(Local_53[3 /*2*/], false);
						}
						iLocal_303 = 0;
					}
				}
			}
			if (is_entity_attached_to_entity(Local_53[1 /*2*/], get_players_last_vehicle()) || ((is_entity_in_angled_area(Local_53[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, false, true, 0) && is_entity_in_angled_area(Local_54[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, false, true, 0)) && is_entity_in_angled_area(Local_53[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, false, true, 0)))
			{
				if (func_107(Local_53[1 /*2*/]))
				{
					set_trailer_inverse_mass_scale(Local_53[1 /*2*/], 0.5f);
				}
				if (does_blip_exist(Local_58.f_5))
				{
					_set_blip_display_indicator_on_blip(Local_58.f_5, true);
				}
				if (does_blip_exist(iLocal_243))
				{
					remove_blip(&iLocal_243);
				}
				if (iLocal_255)
				{
					clear_prints();
					iLocal_255 = 0;
				}
				if (func_48(&Local_58, Local_52, 0.1f, 0.1f, 2f, 1, Local_54[3 /*10*/], 0, 0, get_players_last_vehicle(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (does_blip_exist(Local_58.f_5) && is_entity_in_angled_area(get_players_last_vehicle(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, false, true, 0)))
				{
					remove_scenario_blocking_areas();
					func_46(get_vehicle_ped_is_in(player_ped_id(), false), 7f, -1, 1056964608, 0, 1, 0);
					set_vehicle_is_considered_by_player(get_vehicle_ped_is_in(player_ped_id(), false), false);
					set_vehicle_is_considered_by_player(Local_53[0 /*2*/], false);
					set_vehicle_doors_locked(Local_53[0 /*2*/], 10);
					func_42(&Local_58, 1, 0);
					set_ignore_no_gps_flag(false);
					set_gps_disabled_zone(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_301 = get_game_timer();
					iLocal_257 = 0;
					iLocal_1978++;
				}
			}
			else if (!is_entity_attached_to_entity(Local_53[1 /*2*/], get_players_last_vehicle()))
			{
				func_41(&Local_58);
				if (!does_blip_exist(iLocal_243))
				{
					iLocal_243 = func_38(Local_53[0 /*2*/], 0, 0);
				}
				if (!iLocal_255 && func_36())
				{
					func_35("DKP1_ATTACH", 7500, 1);
					iLocal_255 = 1;
				}
			}
			break;
		
		case 2:
			if (!is_ped_in_any_vehicle(player_ped_id(), false))
			{
				if (func_12(&uLocal_78, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					set_ped_keep_task(Local_54[3 /*10*/], true);
					task_look_at_entity(Local_54[3 /*10*/], player_ped_id(), -1, 2048, 2);
					clear_sequence_task(&iLocal_244);
					open_sequence_task(&iLocal_244);
					task_leave_any_vehicle(0, 0, 0);
					task_go_to_entity(0, player_ped_id(), -1, 3f, 1f, 2f, 0);
					task_turn_ped_to_face_entity(0, player_ped_id(), -1);
					close_sequence_task(iLocal_244);
					task_perform_sequence(Local_54[3 /*10*/], iLocal_244);
					clear_sequence_task(&iLocal_244);
					iLocal_1978++;
				}
			}
			else if ((!iLocal_252 && func_36()) && (get_game_timer() - iLocal_301) > 3000)
			{
				func_35("dkp1_EXIT", 7500, 1);
				_0x293220DA1B46CEBC(10f, 5f, 4);
				iLocal_252 = 1;
			}
			break;
		
		case 3:
			if (!func_11())
			{
				if (func_107(Local_53[3 /*2*/]))
				{
					clear_ped_tasks(Local_54[3 /*10*/]);
					clear_sequence_task(&iLocal_244);
					open_sequence_task(&iLocal_244);
					task_enter_vehicle(0, Local_53[3 /*2*/], -1, -1, 2f, 1, 0);
					task_vehicle_mission_coors_target(0, Local_53[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, true);
					task_vehicle_mission_ped_target(0, Local_53[3 /*2*/], player_ped_id(), 8, 30f, 786468, 1000f, 10f, true);
					close_sequence_task(iLocal_244);
					task_perform_sequence(Local_54[3 /*10*/], iLocal_244);
					clear_sequence_task(&iLocal_244);
				}
				else
				{
					clear_ped_tasks(Local_54[3 /*10*/]);
					task_smart_flee_coord(Local_54[3 /*10*/], Local_52, 300f, -1, false, false);
				}
				iLocal_301 = get_game_timer();
				iLocal_1978++;
			}
			break;
		
		case 4:
			if (func_10(Local_54[3 /*10*/], player_ped_id(), 1) > 70f || (get_game_timer() - iLocal_301) > 20000)
			{
				func_9(&(Local_54[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

void func_9(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_ped_injured(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

float func_10(int iParam0, int iParam1, bool bParam2)
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

int func_11()
{
	if (Global_21605 != 0 || is_scripted_conversation_ongoing())
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
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
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_31();
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
				func_23();
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
				if (func_22())
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
			if (func_21())
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
			func_20();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_19();
		func_14();
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
		func_33();
	}
	return 0;
}

void func_14()
{
	if (!func_15())
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

int func_15()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (player_id() == func_18())
	{
		return 0;
	}
	if (func_16(player_id()))
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

bool func_16(int iParam0)
{
	return func_17(iParam0, 20);
}

var func_17(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_18()
{
	return -1;
}

void func_19()
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

void func_20()
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

int func_21()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_22()
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

void func_23()
{
	if (func_30(14))
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
		Global_20266 = func_24();
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

int func_24()
{
	func_25();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_25()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_28(Global_113386.f_2363.f_539.f_4321) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_27(player_ped_id());
			if (func_26(iVar0) && (!func_30(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_26(Global_113386.f_2363.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_30(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_31()
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

bool func_32(int iParam0, int iParam1)
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

void func_33()
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

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	begin_text_command_print(sParam0);
	end_text_command_print(iParam1, true);
}

int func_36()
{
	if (is_message_being_displayed())
	{
		return 0;
	}
	if (is_subtitle_preference_switched_on())
	{
		if (func_11() && !func_37())
		{
			return 0;
		}
	}
	return 1;
}

int func_37()
{
	if (Global_22616 == 1)
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_39(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_40(network_is_game_in_progress(), 1f, 1f));
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
		set_blip_scale(iVar0, func_40(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, bParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_40(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(int* iParam0)
{
	if (does_blip_exist(iParam0->f_5))
	{
		remove_blip(&(iParam0->f_5));
	}
}

void func_42(int* iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_41(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_blip_exist(iParam0->f_1[iVar0]))
		{
			remove_blip(&(iParam0->f_1[iVar0]));
		}
		func_45(iVar0, iParam0);
		func_44(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			clear_bit(&(iParam0->f_13), iVar0);
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
				if (is_ped_group_member(iParam0->f_17[bVar0], func_43()) && iParam0->f_17[bVar0] != player_ped_id())
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

int func_43()
{
	return get_player_group(get_player_index());
}

void func_44(int iParam0, var uParam1)
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

void func_45(int iParam0, var uParam1)
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

int func_46(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_47(iParam0);
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

void func_47(int iParam0)
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

int func_48(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	return func_49(iParam0, Param1, Param2, func_87(), func_87(), bParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_49(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
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
	func_86(iParam0);
	func_85(iParam0);
	func_84();
	if (func_68(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_67(sParam12);
		func_67(sParam13);
		func_67(sParam14);
		func_67(sParam15);
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
				if (func_65(iParam0, iParam21))
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
				func_67(sParam16);
				func_67(sParam19);
				func_67("MORE_SEATS");
				if (bParam18 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(iParam0->f_5))
					{
						remove_blip(&(iParam0->f_5));
						func_67(sParam11);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_63(iParam0, 1) && !func_62(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(&(iParam0->f_13), 0);
						clear_bit(&(iParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						clear_bit(&(iParam0->f_13), false);
						set_bit(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_63(iParam0, 1))
						{
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
						iParam0->f_5 = func_58(Var3, 0);
						if (!iParam23 == -1)
						{
							set_blip_sprite(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					else if (!func_56(Var3, get_blip_coords(iParam0->f_5), 0.1f, 0))
					{
						set_blip_coords(iParam0->f_5, Var3);
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					if (!func_63(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							func_61(iParam0, sParam11, 0);
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
								else if (!is_ped_group_member(iParam0->f_17[iVar2], func_43()) || !func_54(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_51(iParam0))
							{
								func_67(sParam11);
								func_67(sParam16);
								func_67(sParam12);
								func_67(sParam13);
								func_67(sParam14);
								func_67(sParam15);
								func_67("LOSE_WANTED");
								func_67("MORE_SEATS");
								func_67(sParam19);
								func_42(iParam0, 1, 0);
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
					func_67(sParam16);
					func_67(sParam19);
					if (does_blip_exist(iParam0->f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(&(iParam0->f_5));
						remove_blip(iParam0);
						func_67(sParam11);
					}
					if ((!func_63(iParam0, 1) && !func_62(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(&(iParam0->f_13), 0);
						clear_bit(&(iParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						clear_bit(&(iParam0->f_13), false);
						set_bit(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_63(iParam0, 1))
						{
							if (!is_ped_injured(iParam0->f_17[0]))
							{
								func_59(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
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
								func_67(sParam11);
							}
							*iParam0 = func_50(iParam10, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								func_57(*iParam0, iParam0);
							}
						}
						if (!func_63(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								func_61(iParam0, sParam16, 0);
								set_bit(&(iParam0->f_13), 3);
								clear_bit(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!is_string_null(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										func_61(iParam0, sParam19, 0);
										set_bit(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									func_61(iParam0, sParam16, 0);
									set_bit(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!is_ped_injured(iParam0->f_17[0]))
									{
										func_59(iParam0->f_17[0], "GET_IN_CAR", 3);
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
					func_67(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_63(iParam0, 2))
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
										func_59(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_61(iParam0, "MORE_SEATS", 0);
									set_bit(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								func_61(iParam0, sParam16, 0);
								set_bit(&(iParam0->f_13), 3);
								clear_bit(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									func_61(iParam0, sParam19, 0);
									set_bit(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_63(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							func_61(iParam0, sParam16, 0);
							set_bit(&(iParam0->f_13), 3);
							clear_bit(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!is_string_null(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									func_61(iParam0, sParam19, 0);
									set_bit(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								func_61(iParam0, sParam16, 0);
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
		func_67(sParam11);
		func_67(sParam16);
		func_67(sParam19);
		func_67(sParam16);
		func_67("LOSE_WANTED");
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

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_51(int* iParam0)
{
	if (BitTest(iParam0->f_13, 12))
	{
		if (func_53(player_ped_id()))
		{
			if (func_52(1, 0, 1) || BitTest(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_52(1, 0, 1) || BitTest(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)
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

int func_53(int iParam0)
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

int func_54(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(player_ped_id()) && iParam1)
		{
			if (func_55(player_ped_id(), iParam0))
			{
				set_group_separation_range(func_43(), 50f);
				return 1;
			}
		}
		else if (is_ped_group_member(iParam0, func_43()))
		{
			set_group_separation_range(func_43(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
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

int func_56(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_57(int iParam0, int* iParam1)
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

int func_58(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(Param0);
	set_blip_scale(iVar0, func_40(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, bParam1);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2)
{
	play_ped_ambient_speech_native(iParam0, sParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)
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

void func_61(int* iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = get_game_timer();
}

int func_62(int* iParam0)
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

int func_63(int* iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return 1;
		}
		if (func_64(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_11() && !func_37())
		{
			return 1;
		}
	}
	return 0;
}

int func_64(var uParam0)
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

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (func_66(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0, var uParam1, int iParam2)
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

void func_67(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
						if (func_66(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!is_ped_injured(uParam0->f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(uParam0->f_17[iVar0], 1f);
									if (is_ped_group_member(uParam0->f_17[iVar0], func_43()))
									{
										remove_ped_from_group(uParam0->f_17[iVar0]);
									}
									if (get_script_task_status(uParam0->f_17[iVar0], -1794415470) == 7 && !func_83(uParam0->f_17[iVar0], uParam0->f_21))
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
					if (!is_ped_group_member(uParam0->f_17[iVar0], func_43()))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(uParam0->f_17[iVar0], func_43());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_80(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id())) && !does_entity_exist(iParam10))
		{
			iVar10 = get_vehicle_ped_is_in(player_ped_id(), false);
			if (is_vehicle_driveable(iVar10, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_63(uParam0, 2))
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
							func_59(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_61(uParam0, "MORE_SEATS", 0);
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
			func_67("MORE_SEATS");
		}
		if (!does_entity_exist(iParam10))
		{
			if ((!is_ped_injured(uParam0->f_17[0]) || !is_ped_injured(uParam0->f_17[1])) || !is_ped_injured(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) && !func_63(uParam0, 2))
					{
						iVar10 = get_vehicle_ped_is_in(player_ped_id(), false);
						if (func_79(iVar10, uParam0))
						{
							func_61(uParam0, "CMN_VEHSUIT", 0);
							set_bit(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					clear_bit(&(uParam0->f_13), 31);
					func_67("CMN_VEHSUIT");
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
					if (!is_ped_group_member(uParam0->f_17[iVar0], func_43()))
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
							if (is_ped_group_member(uParam0->f_17[iVar0], func_43()))
							{
								if (!func_80(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id()))
								{
									if (!func_78(uParam0->f_17[iVar0]))
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
					if (!is_ped_group_member(uParam0->f_17[iVar0], func_43()))
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
					if (is_ped_group_member(uParam0->f_17[iVar0], func_43()))
					{
						iVar21 = get_vehicle_ped_is_using(player_ped_id());
						if (does_entity_exist(iVar21))
						{
							if (func_66(iVar21, uParam0, 0))
							{
								if (func_77(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									set_ped_group_member_passenger_index(uParam0->f_17[iVar0], iVar0);
									func_44(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										set_bit(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_77(iVar0, uParam0))
							{
								if (get_entity_model(iVar21) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 2);
								}
								func_76(iVar0, uParam0);
							}
						}
					}
					if ((!is_ped_group_member(uParam0->f_17[iVar0], func_43()) && !func_75(uParam0->f_17[iVar0], iParam10)) && !func_74(uParam0->f_17[iVar0], iParam10))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!is_ped_group_member(uParam0->f_17[iVar0], func_43()))
							{
								if (((!is_ped_ragdoll(uParam0->f_17[iVar0]) && !is_ped_getting_up(uParam0->f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0])) && !is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0]))
								{
									iVar11 = get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										clear_ped_tasks(uParam0->f_17[iVar0]);
									}
									set_ped_as_group_member(uParam0->f_17[iVar0], func_43());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!does_blip_exist(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = get_game_timer();
								uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
								set_blip_display(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_57(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(uParam0->f_1[iVar0]))
					{
						if (((func_54(uParam0->f_17[iVar0], 1) || func_75(uParam0->f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, false) && !is_ped_in_vehicle(player_ped_id(), iParam10, false)))
						{
							if (does_blip_exist(uParam0->f_1[iVar0]))
							{
								remove_blip(&(uParam0->f_1[iVar0]));
								func_67(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_57(uParam0->f_1[iVar0], uParam0);
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
										if (!func_54(uParam0->f_17[iVar0], 1))
										{
											if (func_53(uParam0->f_17[iVar0]))
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
									if (is_ped_group_member(uParam0->f_17[iVar0], func_43()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) && !is_ped_ragdoll(uParam0->f_17[iVar0])) && !is_ped_getting_up(uParam0->f_17[iVar0])) && !is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_83(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(player_ped_id())) && !func_73(uParam0->f_17[iVar0], 2f)) && !is_ped_ragdoll(uParam0->f_17[iVar0])) && !is_ped_getting_up(uParam0->f_17[iVar0])) && !is_entity_on_fire(iParam10))
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
										uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
										set_blip_display(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(uParam0->f_17[iVar0], func_43()))
							{
								if (func_81(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!is_ped_ragdoll(uParam0->f_17[iVar0]) && !is_ped_getting_up(uParam0->f_17[iVar0]))
									{
										iVar11 = get_script_task_status(uParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											clear_ped_tasks(uParam0->f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], false);
										set_ped_as_group_member(uParam0->f_17[iVar0], func_43());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
						{
							if (!is_ped_group_member(uParam0->f_17[iVar0], func_43()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									set_ped_as_group_member(uParam0->f_17[iVar0], func_43());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								remove_ped_from_group(uParam0->f_17[iVar0]);
								set_bit(&(uParam0->f_13), 21);
							}
						}
						else if (is_ped_group_member(uParam0->f_17[iVar0], func_43()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(uParam0->f_1[iVar0]))
				{
					remove_blip(&(uParam0->f_1[iVar0]));
					func_67(uVar12[iVar0]);
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
		if (!func_63(uParam0, 2))
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
							if (func_78(uParam0->f_17[iVar0]) || is_entity_at_entity(uParam0->f_17[iVar0], player_ped_id(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!is_ped_injured(uParam0->f_17[iVar0]))
					{
						if (!is_entity_at_entity(uParam0->f_17[iVar0], player_ped_id(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_78(uParam0->f_17[iVar0]))
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
								func_61(uParam0, sParam7, 0);
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
									if (!func_72(iVar0, uParam0))
									{
										if (!is_string_null(uVar13[iVar0]))
										{
											if (!are_strings_equal(uVar13[iVar0], ""))
											{
												func_70(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_69(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_72(iVar0, uParam0))
										{
											func_61(uParam0, uVar12[iVar0], 0);
											func_69(iVar0, uParam0);
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
					func_67(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_67("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0, var uParam1)
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

void func_70(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_71(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = get_game_timer();
}

void func_71(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	begin_text_command_print(sParam0);
	add_text_component_substring_text_label(sParam1);
	end_text_command_print(iParam2, true);
}

int func_72(int iParam0, var uParam1)
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

int func_73(int iParam0, float fParam1)
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

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_43()))
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

int func_75(int iParam0, int iParam1)
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

void func_76(int iParam0, var uParam1)
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

int func_77(int iParam0, var uParam1)
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

int func_78(int iParam0)
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

int func_79(int iParam0, var uParam1)
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

int func_80(var uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), false);
		if (func_66(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(var uParam0, int iParam1, float fParam2, bool bParam3)
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
						if (func_80(uParam0))
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
					if (func_66(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, false))
						{
							if (func_82(iVar0))
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

int func_82(int iParam0)
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

int func_83(int iParam0, int iParam1)
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

void func_84()
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

void func_85(var uParam0)
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

void func_86(var uParam0)
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

Vector3 func_87()
{
	struct<3> Var0;
	
	return Var0;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_model(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = get_game_timer();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_89(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					set_model_as_no_longer_needed(iParam1);
					func_90(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_1007 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_91(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, true, true);
		}
		if (!bParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			_mark_object_for_deletion(*iParam0);
		}
	}
}

float func_92(int iParam0, struct<3> Param1, bool bParam2)
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

void func_93(int iParam0)
{
	char* sVar0;
	
	trigger_music_event("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		
		case 6:
			sVar0 = "cmn_tdied";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_98(sVar0);
	while (!func_97())
	{
		wait(0);
	}
	if (func_96())
	{
		func_337();
	}
	else if (is_entity_in_angled_area(player_ped_id(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, false, false, 0))
	{
		func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_332();
	terminate_this_thread();
}

void func_94(struct<3> Param0, float fParam1)
{
	if (func_95(Global_78559, 0f, 0f, 0f, 0))
	{
		Global_78559 = { Param0 };
		Global_78562 = fParam1;
	}
}

bool func_95(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_96()
{
	if (Global_100441 == 7)
	{
		return 1;
	}
	return 0;
}

int func_97()
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

void func_98(char* sParam0)
{
	func_106(sParam0);
	func_99(0);
}

void func_99(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_100(iVar0))
		{
			return;
		}
		set_bit(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_105();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_104(iVar1, 1);
	special_ability_charge_on_mission_failed(player_id(), 0);
	special_ability_deactivate(player_id(), 0);
	func_101(&(Global_113386.f_2363.f_539), iVar1);
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

void func_101(var uParam0, int iParam1)
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
			if (!func_103(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_102(&(uParam0->f_2296[iVar0]));
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

void func_102(var uParam0)
{
	*uParam0 = -15;
}

int func_103(int iParam0, var uParam1, float fParam2)
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
			return func_103(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_103(8, uParam1, fParam2);
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

void func_104(int iParam0, bool bParam1)
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

void func_105()
{
	Global_100476 = 1;
	if (is_player_being_arrested(player_id(), true))
	{
		if (is_string_null_or_empty(&Global_78551))
		{
			switch (func_24())
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
			switch (func_24())
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

void func_106(char* sParam0)
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

int func_107(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			if (is_vehicle_driveable(get_vehicle_index_from_entity_index(iParam0), false))
			{
				return 1;
			}
		}
		else if (is_entity_a_ped(iParam0))
		{
			if (!is_ped_injured(get_ped_index_from_entity_index(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_193(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = func_191(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_189(iVar1);
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
			iVar4 = func_184(get_this_script_name(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_183(iVar4)}, 4);
				playstats_mission_checkpoint(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = func_182(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_109(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_109(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_110(&Global_106934, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_110(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_24();
	uParam0->f_1 = func_171();
	_get_weather_type_transition(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!is_ped_injured(player_ped_id()))
	{
		func_145(&(uParam0->f_2884), 0);
		func_144(player_ped_id());
		func_137(player_ped_id(), 0);
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
		if (iVar1 == func_136())
		{
			func_129(player_ped_id(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		func_112(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_111(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_111(var uParam0)
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_112(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = player_ped_id();
	}
	if (does_entity_exist(iParam2))
	{
		uParam1->f_5 = func_27(iParam2);
	}
	if (func_126(iParam2, &iVar0, iParam3, iParam5))
	{
		func_113(uParam0, uParam1, iVar0, iParam4);
	}
	else if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0, false))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(player_ped_id(), iVar0, false))
			{
				func_113(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_113(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, false))
	{
		func_115(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_114(iParam2))
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

int func_114(int iParam0)
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

void func_115(var uParam0, int iParam1, int iParam2)
{
	func_121(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_118(iParam1, 145, 0);
	uParam0->f_11 = func_117(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_116(iParam1);
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

int func_116(int iParam0)
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

int func_117(int iParam0)
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

int func_118(int iParam0, int iParam1, int iParam2)
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
					if (iParam2 == 0 || get_entity_model(iParam0) == func_119(iParam1, iParam2))
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

int func_119(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_26(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_120(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_120(int iParam0, var uParam1, int iParam2)
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

void func_121(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, false))
	{
		func_125(uParam1);
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
		if (uParam1->f_65 == -1 && !func_124(uParam1->f_66))
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
		func_123(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(&(uParam1->f_77), func_122(iVar0 + 1));
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

int func_122(int iParam0)
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

int func_123(int iParam0, var uParam1, var uParam2)
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

int func_124(int iParam0)
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

void func_125(var uParam0)
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

int func_126(int iParam0, var uParam1, int iParam2, int iParam3)
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
						if (func_127(*uParam1, func_24(), 1))
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

int func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_128(iParam1, iVar0, &sVar1, &iVar2))
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

int func_128(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_129(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_27(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_135(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_134(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_26(iVar0))
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
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(753, iParam3, 0);
			}
			uParam1->f_60 = func_130(754, iParam3, 0);
			uParam1->f_61 = func_130(755, iParam3, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(753, iParam3, 0);
			}
		}
	}
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_131(iParam1)];
		if (stat_get_int(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_132();
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

var func_132()
{
	return Global_1574918;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_131(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
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

void func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
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

int func_136()
{
	func_25();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_138(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
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

void func_138(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
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
			iVar3 = func_143(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = get_ped_weapontype_in_slot(iParam0, func_143(iVar0));
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
					iVar1 = 0;
					iVar2 = func_141(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, Var4.f_0, iVar2))
						{
							set_bit(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_141(Var4.f_0, iVar1);
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
			if ((_get_dlc_weapon_data_sp(iVar5, &Var7) && !func_140(Var7.f_1)) && iVar9 < 51)
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
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < _get_num_dlc_weapon_components_sp(iVar5))
					{
						if (_get_dlc_weapon_component_data_sp(iVar5, iVar1, &Var8))
						{
							if (!func_139(Var8.f_3))
							{
								if (has_ped_got_weapon_component(iParam0, Var4.f_0, Var8.f_3))
								{
									set_bit(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
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

int func_139(int iParam0)
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

int func_140(int iParam0)
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

int func_141(int iParam0, int iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iVar2, &Var5))
						{
							if (!func_139(Var5.f_3))
							{
								if (iVar3 == iParam1)
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

int func_142(int iParam0, var* uParam1)
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

int func_143(int iParam0)
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

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !is_ped_injured(iParam0))
	{
		Global_113386.f_2363.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_145(var uParam0, int iParam1)
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
		if (func_148(&iVar0))
		{
			if (func_147(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = func_24();
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
		else if (func_146(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_146(struct<3> Param0, char* sParam1, struct<3> Param2)
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

bool func_147(int iParam0, var uParam1, var uParam2)
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
	return !func_95(*uParam1, 0f, 0f, 0f, 0);
}

int func_148(var uParam0)
{
	if (!is_entity_dead(player_ped_id(), false) && !is_ped_injured(player_ped_id()))
	{
		if (func_170())
		{
			*uParam0 = func_154(get_entity_coords(player_ped_id(), false), 6, -1, 0, 1, -1);
			if (func_153(*uParam0) && !func_149(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_149(int iParam0)
{
	return func_150(iParam0, 0, 1);
}

int func_150(int iParam0, int iParam1, bool bParam2)
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
		if (func_152() == 0)
		{
			return BitTest(func_130(func_151(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_151(int iParam0)
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

int func_152()
{
	return Global_31959;
}

int func_153(int iParam0)
{
	return func_150(iParam0, 5, 1);
}

int func_154(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
		if (iParam1 == 6 || iParam1 == func_169(iVar0))
		{
			if (!bParam3 || func_168(iVar0))
			{
				fVar1 = get_distance_between_coords(Param0, func_155(iVar0, 0), true);
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

Vector3 func_155(int iParam0, bool bParam1)
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
			return func_165(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_18())
			{
				if (func_164(Global_1853185))
				{
					return func_157(2, 2);
				}
				else if (func_156(Global_1853185))
				{
					return func_157(45, 3);
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

int func_156(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_157(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_18())
	{
		if (iParam1 == 3)
		{
			if (func_158(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_158(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_158(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_158(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_163(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_163(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_161(iParam0) };
	}
	else
	{
		Var2 = { func_160(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_159(Var3, -Var0.f_3.f_2) };
	Var3 = { func_159(Var3, Var1.f_3.f_2) };
	*uParam2 = { _get_object_offset_from_coords(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_159(struct<3> Param0, float fParam1)
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

struct<6> func_160(int iParam0)
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

struct<6> func_161(int iParam0)
{
	return func_162(iParam0);
}

struct<6> func_162(int iParam0)
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

int func_163(int iParam0, var uParam1)
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

int func_164(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_165(int iParam0)
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
			if (func_166() == 0)
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

int func_166()
{
	return func_167(player_id());
}

int func_167(int iParam0)
{
	return get_bits_in_range(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_168(int iParam0)
{
	return func_150(iParam0, 0, 0);
}

int func_169(int iParam0)
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

bool func_170()
{
	return Global_100493.f_375 > 0;
}

var func_171()
{
	var uVar0;
	
	func_181(&uVar0, get_clock_seconds());
	func_180(&uVar0, get_clock_minutes());
	func_179(&uVar0, get_clock_hours());
	func_174(&uVar0, get_clock_day_of_month());
	func_173(&uVar0, get_clock_month());
	func_172(&uVar0, get_clock_year());
	return uVar0;
}

void func_172(var uParam0, int iParam1)
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

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 1 || iParam1 > func_175(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_175(int iParam0, int iParam1)
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

var func_176(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_177(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(var uParam0)
{
	return uParam0 & 15;
}

void func_179(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_182(char* sParam0)
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

struct<2> func_183(int iParam0)
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

int func_184(char* sParam0, int iParam1)
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
		func_185(iVar0, &sVar1);
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

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_187(int iParam0)
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

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_183(iParam0) };
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

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_190(Global_113386.f_9085.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_190(Global_113386.f_9085.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_190(Global_113386.f_9085.f_99.f_205[11]);
			break;
		
		case 90:
			return func_190(Global_113386.f_9085.f_99.f_205[7]);
			break;
		
		case 93:
			return func_190(Global_113386.f_9085.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_190(int iParam0)
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

int func_191(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_192(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_192(int iParam0, bool bParam1)
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

void func_193(bool bParam0)
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

void func_194()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1978)
	{
		case 0:
			func_228(&uLocal_309, "PORT_OF_LS_PREP_1");
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			func_226(&Local_58, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (has_model_loaded(joaat("packer")) && has_model_loaded(joaat("armytrailer")))
			{
				func_108(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				func_225(587, 0);
				func_224(&uLocal_78, 1, 0, "FLOYD", 0, 1);
				func_223(6, 0);
				Local_53[2 /*2*/] = create_vehicle(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, true, true, false);
				set_vehicle_is_considered_by_player(Local_53[2 /*2*/], false);
				set_vehicle_has_strong_axles(Local_53[2 /*2*/], true);
				set_vehicle_colour_combination(Local_53[2 /*2*/], 0);
				set_vehicle_tyres_can_burst(Local_53[2 /*2*/], false);
				Local_53[1 /*2*/] = create_vehicle(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, true, true, false);
				attach_vehicle_to_trailer(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
				set_trailer_legs_raised(Local_53[1 /*2*/]);
				set_vehicle_tyres_can_burst(Local_53[1 /*2*/], false);
				set_vehicle_has_strong_axles(Local_53[1 /*2*/], true);
				iLocal_248 = 0;
				add_scenario_blocking_area(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, false, true, true, true);
				iLocal_257 = 1;
				set_audio_flag("OnlyAllowScriptTriggerPoliceScanner", false);
				iLocal_1978++;
			}
			break;
		
		case 1:
			if (func_222())
			{
				func_221(&uLocal_309, cLocal_49);
				func_221(&uLocal_309, cLocal_50);
				iLocal_261 = -1;
				iLocal_262 = 0;
				iLocal_1978++;
			}
			break;
		
		case 2:
			if (is_ped_in_vehicle(player_ped_id(), Local_53[0 /*2*/], false))
			{
				switch (iLocal_262)
				{
					case 0:
						if (!is_help_message_being_displayed())
						{
							if (iLocal_261 == -1)
							{
								iLocal_261 = get_game_timer() + 5000;
							}
							if (get_game_timer() > iLocal_261)
							{
								func_220("DKP1_SUBTURN", -1);
								iLocal_262++;
							}
						}
						break;
					
					case 1:
						if (!is_help_message_being_displayed())
						{
							func_220("SUB_HELP", -1);
							iLocal_262++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_262 == 0)
				{
					iLocal_261 = -1;
				}
				if (is_help_message_being_displayed())
				{
					if (func_219("DKP1_SUBTURN") || func_219("SUB_HELP"))
					{
						clear_help(true);
					}
				}
			}
			if (is_vehicle_stuck_timer_up(Local_53[0 /*2*/], 3, 10000))
			{
				func_93(1);
			}
			if (func_92(player_ped_id(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (load_stream("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_306 = true;
				}
				func_91(&(Local_57[2 /*2*/]), 0);
				func_89(&uLocal_309, joaat("prop_sub_release"));
			}
			else
			{
				stop_stream();
				bLocal_306 = false;
			}
			if (func_107(Local_54[6 /*10*/]))
			{
				if ((is_entity_in_angled_area(player_ped_id(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || is_ped_fleeing(Local_54[6 /*10*/])) || func_10(player_ped_id(), Local_54[6 /*10*/], 1) > 100f)
				{
					clear_ped_tasks(Local_54[6 /*10*/]);
					func_9(&(Local_54[6 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[7 /*10*/]))
			{
				if ((is_entity_in_angled_area(player_ped_id(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || is_ped_fleeing(Local_54[7 /*10*/])) || func_10(player_ped_id(), Local_54[7 /*10*/], 1) > 100f)
				{
					clear_ped_tasks(Local_54[7 /*10*/]);
					func_9(&(Local_54[7 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				if ((is_entity_in_angled_area(player_ped_id(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || is_ped_fleeing(Local_54[4 /*10*/])) || func_10(player_ped_id(), Local_54[4 /*10*/], 1) > 100f)
				{
					clear_ped_tasks(Local_54[4 /*10*/]);
					func_9(&(Local_54[4 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[5 /*10*/]))
			{
				if ((is_entity_in_angled_area(player_ped_id(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || is_ped_fleeing(Local_54[5 /*10*/])) || func_10(player_ped_id(), Local_54[5 /*10*/], 1) > 100f)
				{
					clear_ped_tasks(Local_54[5 /*10*/]);
					func_9(&(Local_54[5 /*10*/]), 1, 0, 1);
				}
			}
			if (func_226(&Local_58, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((does_blip_exist(Local_58.f_5) && is_entity_in_angled_area(Local_53[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, false, true, 0)) && func_218(player_ped_id(), Local_53[0 /*2*/])))
			{
				if (func_107(Local_53[2 /*2*/]) && func_107(Local_53[1 /*2*/]))
				{
					func_217(&Local_58, 0);
					func_216(6, 0);
					trigger_music_event("DHP1_STOP");
					func_215(0, -1);
					set_player_control(player_id(), false, 256);
					iLocal_301 = get_game_timer();
					iLocal_1978++;
				}
			}
			else if (get_player_wanted_level(player_id()) == 0 && does_blip_exist(Local_58.f_5))
			{
				draw_marker(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, false, false, 2, false, 0, 0, false);
			}
			break;
		
		case 3:
			if (func_82(Local_53[0 /*2*/]) || (get_game_timer() - iLocal_301) > 3500)
			{
				iLocal_293 = create_camera_with_params(26379945, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, false, 2);
				set_cam_active(iLocal_293, true);
				shake_cam(iLocal_293, "HAND_SHAKE", 0.4f);
				set_cam_params(iLocal_293, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_209(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				func_88(&uLocal_309, joaat("prop_tarp_strap"));
				set_entity_coords(Local_53[0 /*2*/], Local_276, true, false, false, true);
				set_entity_heading(Local_53[0 /*2*/], fLocal_277);
				iLocal_301 = get_game_timer();
				iLocal_275 = 0;
				_0x293220DA1B46CEBC(8f, 0f, 4);
				iLocal_1978++;
			}
			else
			{
				func_46(Local_53[0 /*2*/], 7f, 1, 1056964608, 0, 1, 0);
			}
			break;
		
		case 4:
			if (func_199())
			{
				iLocal_1978++;
			}
			break;
		
		case 5:
			if (has_cutscene_loaded() && has_model_loaded(joaat("prop_tarp_strap")))
			{
				register_entity_for_cutscene(Local_53[2 /*2*/], "DockHeist_truck", 0, 0, 0);
				register_entity_for_cutscene(Local_53[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				register_entity_for_cutscene(Local_53[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				register_entity_for_cutscene(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				register_entity_for_cutscene(0, "Floyd", 2, joaat("ig_floyd"), 0);
				set_cutscene_ped_component_variation_from_ped("Trevor", player_ped_id(), 0);
				set_vehicle_lights(Local_53[2 /*2*/], 1);
				set_vehicle_is_considered_by_player(Local_53[2 /*2*/], true);
				func_198(0);
				_0x48621C9FCA3EBD28(4);
				set_cutscene_fade_values(false, false, true, false);
				start_cutscene(0);
				iLocal_1978++;
			}
			break;
		
		case 6:
			if (is_cutscene_playing())
			{
				if (is_ipl_active("PO1_08_sub_waterplane"))
				{
					remove_ipl("PO1_08_sub_waterplane");
				}
			}
			if (can_set_exit_state_for_camera(false))
			{
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				display_radar(true);
				display_hud(true);
				_0x81CBAE94390F9F89();
			}
			if (!does_entity_exist(Local_54[3 /*10*/]))
			{
				if (does_entity_exist(get_entity_index_of_registered_entity("Floyd", 0)))
				{
					Local_54[3 /*10*/] = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Floyd", 0));
					func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					set_ped_relationship_group_hash(Local_54[3 /*10*/], iLocal_259);
				}
			}
			if (can_set_exit_state_for_registered_entity("Trevor", 0))
			{
				iLocal_295 = 1;
			}
			if (can_set_exit_state_for_registered_entity("Floyd", 0))
			{
				iLocal_296 = 1;
			}
			if (can_set_exit_state_for_registered_entity("DockHeist_truck", 0))
			{
				set_vehicle_use_cutscene_wheel_compression(Local_53[2 /*2*/], true, false, false);
				set_vehicle_doors_shut(Local_53[2 /*2*/], true);
				iLocal_297 = 1;
			}
			if (can_set_exit_state_for_registered_entity("DockHeist_trailer", 0))
			{
				set_vehicle_use_cutscene_wheel_compression(Local_53[1 /*2*/], true, false, false);
				iLocal_300 = 1;
			}
			if (can_set_exit_state_for_registered_entity("submarine", 0))
			{
				iLocal_298 = 1;
			}
			if (can_set_exit_state_for_registered_entity("sub_cover", 0))
			{
				iLocal_299 = 1;
			}
			else if (!does_entity_exist(Local_57[4 /*2*/]))
			{
				if (does_entity_exist(get_entity_index_of_registered_entity("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_57[4 /*2*/] = get_object_index_from_entity_index(get_entity_index_of_registered_entity("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (get_vehicle_lights_state(Local_53[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (get_cutscene_time() >= 14200)
					{
						set_vehicle_lights(Local_53[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_295 && iLocal_296) && iLocal_297) && iLocal_298) && iLocal_299) && iLocal_300)
			{
				if (is_screen_faded_in() || have_all_streaming_requests_completed(Local_54[3 /*10*/]))
				{
					set_ped_into_vehicle(Local_54[3 /*10*/], Local_53[2 /*2*/], 0);
					set_ped_into_vehicle(player_ped_id(), Local_53[2 /*2*/], -1);
					attach_vehicle_on_to_trailer(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					set_vehicle_is_considered_by_player(Local_53[0 /*2*/], false);
					set_vehicle_doors_shut(Local_53[0 /*2*/], true);
					set_vehicle_doors_locked(Local_53[0 /*2*/], 10);
					set_vehicle_engine_on(Local_53[0 /*2*/], false, true, false);
					set_vehicle_lights(Local_53[0 /*2*/], 1);
					set_vehicle_radio_enabled(Local_53[0 /*2*/], false);
					attach_entity_to_entity(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					Local_57[5 /*2*/] = create_object(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
					attach_entity_to_entity(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					func_197(1, 0, 0, 3000, 0);
					func_196(&uLocal_309);
					iLocal_1978++;
				}
			}
			break;
		
		case 7:
			func_195(2);
			iLocal_1978 = 0;
			break;
	}
	if (does_blip_exist(Local_58.f_5))
	{
		set_blip_route(Local_58.f_5, false);
	}
	if (func_107(player_ped_id()) && func_107(Local_53[0 /*2*/]))
	{
		if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), 324.7653f, -2974.495f, -1f, true) > 2500f)
		{
			func_93(9);
		}
	}
}

int func_195(int iParam0)
{
	if (iLocal_1976 == 0)
	{
		iLocal_1979 = iParam0;
		iLocal_1976 = 1;
		return 1;
	}
	return 0;
}

void func_196(var uParam0)
{
	if (uParam0->f_885)
	{
		if (uParam0->f_885.f_1)
		{
			remove_ptfx_asset();
			func_90(&(uParam0->f_885));
		}
		else
		{
			uParam0->f_885.f_2 = 1;
			uParam0->f_1007 = 1;
		}
	}
}

void func_197(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	display_radar(true);
	display_hud(true);
	set_player_control(player_id(), bParam0, iParam4);
	render_script_cams(bParam1, bParam2, iParam3, true, false, 0);
	if (!bParam1)
	{
		destroy_all_cams(false);
	}
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		set_vehicle_radio_enabled(get_vehicle_ped_is_in(player_ped_id(), false), true);
	}
}

void func_198(int iParam0)
{
	iLocal_295 = iParam0;
	iLocal_296 = iParam0;
	iLocal_297 = iParam0;
	iLocal_299 = iParam0;
	iLocal_298 = iParam0;
	iLocal_300 = iParam0;
}

int func_199()
{
	float fVar0;
	
	switch (iLocal_275)
	{
		case 0:
			func_208();
			set_entity_coords(Local_53[0 /*2*/], Local_276, true, false, false, true);
			set_entity_heading(Local_53[0 /*2*/], fLocal_277);
			freeze_entity_position(Local_53[0 /*2*/], true);
			iLocal_245 = start_particle_fx_looped_on_entity("scr_pls_sub_water_drips", Local_53[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			set_particle_fx_looped_evolution(iLocal_245, "flow", 1f, false);
			request_cutscene("dhp1_mcs_1", 8);
			if (bLocal_306)
			{
				play_stream_frontend();
			}
			if (get_clock_hours() >= 20 || get_clock_hours() <= 7)
			{
				request_ipl("PO1_08_sub_waterplane");
			}
			func_206(&uLocal_309, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_275++;
			break;
		
		case 1:
			Local_287 = { get_entity_coords(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 <= 1f)
			{
				freeze_entity_position(Local_53[0 /*2*/], false);
				set_cam_params(iLocal_293, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				set_cam_params(iLocal_293, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				attach_entity_to_entity(Local_53[0 /*2*/], Local_57[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
				iLocal_275++;
			}
			else
			{
				func_205(1, 2f);
			}
			break;
		
		case 2:
			Local_287 = { get_entity_coords(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 >= 12.5f)
			{
				set_cam_params(iLocal_293, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				set_cam_params(iLocal_293, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_292 = get_cam_near_clip(iLocal_293);
				set_cam_near_clip(iLocal_293, 1.8f);
				iLocal_275++;
			}
			else
			{
				func_205(0, 1f);
			}
			break;
		
		case 3:
			if (fLocal_283 >= 40f)
			{
				set_cam_params(iLocal_293, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				set_cam_params(iLocal_293, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				set_cam_near_clip(iLocal_293, fLocal_292);
				fLocal_283 = 80f;
				detach_entity(Local_57[7 /*2*/], true, true);
				attach_entity_to_entity(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
				set_entity_coords_no_offset(Local_57[8 /*2*/], get_offset_from_entity_in_world_coords(Local_57[7 /*2*/], Local_285), false, false, true);
				iLocal_1984 = get_game_timer();
				iLocal_275++;
			}
			else
			{
				func_204(1, 5.5f);
			}
			break;
		
		case 4:
			if (fLocal_283 >= 108f)
			{
				override_lodscale_this_frame(1f);
				set_cam_params(iLocal_293, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				set_cam_params(iLocal_293, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				set_cam_shake_amplitude(iLocal_293, 0.25f);
				detach_entity(Local_57[7 /*2*/], true, true);
				attach_entity_to_entity(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
				set_entity_coords_no_offset(Local_57[8 /*2*/], get_offset_from_entity_in_world_coords(Local_57[7 /*2*/], Local_285), false, false, true);
				if (does_particle_fx_looped_exist(iLocal_245))
				{
					stop_particle_fx_looped(iLocal_245, false);
				}
				iLocal_275++;
			}
			else
			{
				fVar0 = (1f - func_203((to_float((get_game_timer() - iLocal_1984 + 1500)) / 3000f), 0f, 1f));
				set_particle_fx_looped_evolution(iLocal_245, "flow", fVar0, false);
				func_204(1, 5.5f);
			}
			break;
		
		case 5:
			override_lodscale_this_frame(1f);
			Local_287 = { get_entity_coords(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 <= 11f)
			{
				detach_entity(Local_53[0 /*2*/], true, true);
				iLocal_275++;
			}
			else
			{
				func_205(1, 1f);
			}
			break;
		
		case 6:
			if (has_entity_collided_with_anything(Local_53[0 /*2*/]))
			{
				iLocal_1984 = get_game_timer() + 1000;
				iLocal_275++;
			}
			break;
		
		case 7:
			if (get_game_timer() > iLocal_1984)
			{
				freeze_entity_position(Local_57[8 /*2*/], true);
				iLocal_275++;
			}
			else
			{
				func_204(0, 4f);
				func_205(0, 1f);
			}
			break;
		
		case 8:
			func_202(&uLocal_309);
			return 1;
			break;
	}
	if (is_screen_faded_in())
	{
		if (iLocal_275 > 0 && iLocal_275 < 5)
		{
			if (func_200(1000))
			{
				do_screen_fade_out(800);
			}
		}
	}
	else if (is_screen_faded_out())
	{
		if (does_particle_fx_looped_exist(iLocal_245))
		{
			stop_particle_fx_looped(iLocal_245, false);
		}
		remove_particle_fx_in_range(get_entity_coords(Local_53[0 /*2*/], true), 30f);
		iLocal_1982 = 2;
		iLocal_1981 = 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (is_screen_faded_in())
	{
		if ((get_game_timer() - Global_28) > iParam0)
		{
			Global_27 = get_game_timer();
		}
		Global_28 = get_game_timer();
		if ((get_game_timer() - Global_27) > iParam0)
		{
			if (func_201())
			{
				Global_27 = get_game_timer();
				return 1;
			}
		}
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

void func_202(var uParam0)
{
	if (is_new_load_scene_active())
	{
		new_load_scene_stop();
		func_90(&(uParam0->f_893));
	}
}

float func_203(float fParam0, float fParam1, float fParam2)
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

void func_204(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		fLocal_283 = (fLocal_283 + (fParam1 * timestep()));
	}
	else
	{
		fLocal_283 = (fLocal_283 - (fParam1 * timestep()));
	}
	detach_entity(Local_57[7 /*2*/], true, true);
	attach_entity_to_entity(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
	set_entity_coords_no_offset(Local_57[8 /*2*/], get_offset_from_entity_in_world_coords(Local_57[7 /*2*/], Local_285), false, false, true);
}

void func_205(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		Local_285.f_2 = (Local_285.f_2 - (fParam1 * timestep()));
	}
	else
	{
		Local_285.f_2 = (Local_285.f_2 + (fParam1 * timestep()));
	}
	set_entity_coords_no_offset(Local_57[8 /*2*/], get_offset_from_entity_in_world_coords(Local_57[7 /*2*/], Local_285), false, false, true);
}

int func_206(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_207(Param1) || func_207(Param2))
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if ((func_95(uParam0->f_893.f_4, Param1, 0) && func_95(uParam0->f_893.f_7, Param2, 0)) && uParam0->f_893.f_10 == fParam3)
		{
			uParam0->f_893.f_2 = 0;
			if (!uParam0->f_893.f_1)
			{
				uParam0->f_1007 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		new_load_scene_start(Param1, Param2, fParam3, iParam4);
		uParam0->f_893 = 1;
		uParam0->f_893.f_3 = get_game_timer();
		uParam0->f_893.f_4 = { Param1 };
		uParam0->f_893.f_7 = { Param2 };
		uParam0->f_893.f_10 = fParam3;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_207(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_208()
{
	if (iLocal_248)
	{
		delete_rope(&(Local_55[0 /*5*/]));
		delete_rope(&(Local_55[1 /*5*/]));
		delete_rope(&(Local_55[2 /*5*/]));
		delete_rope(&(Local_55[3 /*5*/]));
		iLocal_248 = 0;
	}
}

void func_209(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	display_radar(false);
	display_hud(false);
	set_player_control(player_id(), bParam0, iParam6);
	clear_prints();
	clear_help(true);
	render_script_cams(bParam2, bParam3, iParam5, true, false, 0);
	if (bParam4)
	{
		clear_area_of_projectiles(Param1, 500f, 0);
	}
	stop_fire_in_range(Param1, 300f);
	if (is_ped_in_any_vehicle(player_ped_id(), false))
	{
		set_vehicle_radio_enabled(get_vehicle_ped_is_in(player_ped_id(), false), false);
	}
	if (bParam7)
	{
		func_210(0);
	}
}

void func_210(int iParam0)
{
	if (func_214())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_213())
		{
			func_211(1, 1);
		}
		else
		{
			func_211(0, 0);
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
	if (!func_21())
	{
		Global_20266.f_1 = 3;
	}
}

void func_211(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_212(0))
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

int func_212(int iParam0)
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

bool func_213()
{
	return BitTest(Global_1958711, 5);
}

bool func_214()
{
	return BitTest(Global_1958711, 19);
}

void func_215(bool bParam0, int iParam1)
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

void func_216(bool bParam0, bool bParam1)
{
	if (BitTest(Global_32118, bParam0))
	{
		if (!bParam1)
		{
			clear_bit(&Global_32118, bParam0);
			StringCopy(&(Global_32119[bParam0 /*6*/]), "NULL", 24);
			Global_32174[bParam0] = bParam1;
		}
	}
}

void func_217(int* iParam0, bool bParam1)
{
	func_42(iParam0, bParam1, 0);
}

int func_218(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0, false))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1, false))
		{
			if (is_ped_sitting_in_vehicle(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_219(char* sParam0)
{
	begin_text_command_is_this_help_message_being_displayed(sParam0);
	return end_text_command_is_this_help_message_being_displayed(0);
}

void func_220(char* sParam0, int iParam1)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, false, true, iParam1);
}

void func_221(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (!is_string_null_or_empty(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_273)
		{
			if (uParam0->f_273[iVar0 /*5*/])
			{
				if (are_strings_equal(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_273[iVar0 /*5*/].f_1)
					{
						remove_anim_dict(sParam1);
						func_90(&(uParam0->f_273[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_273[iVar0 /*5*/].f_2 = 1;
						uParam0->f_1007 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_222()
{
	if (!does_entity_exist(Local_57[6 /*2*/]))
	{
		Local_57[6 /*2*/] = create_object(iLocal_278, Local_279, true, true, false);
		set_entity_coords(Local_57[6 /*2*/], Local_279, true, false, false, true);
		set_entity_heading(Local_57[6 /*2*/], fLocal_280);
		freeze_entity_position(Local_57[6 /*2*/], true);
	}
	if (!does_entity_exist(Local_57[7 /*2*/]))
	{
		Local_57[7 /*2*/] = create_object(iLocal_281, get_offset_from_entity_in_world_coords(Local_57[6 /*2*/], Local_282), true, true, false);
	}
	if (!is_entity_attached_to_entity(Local_57[7 /*2*/], Local_57[6 /*2*/]))
	{
		attach_entity_to_entity(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
	}
	if (!does_entity_exist(Local_57[8 /*2*/]))
	{
		Local_57[8 /*2*/] = create_object(iLocal_284, get_offset_from_entity_in_world_coords(Local_57[7 /*2*/], Local_285), true, true, false);
		_set_entity_cleanup_by_engine(Local_57[8 /*2*/], false);
		attach_entity_to_entity(Local_57[8 /*2*/], Local_57[7 /*2*/], -1, Local_285, 0f, 0f, fLocal_286, false, false, false, false, 2, true, 0);
		detach_entity(Local_57[8 /*2*/], true, false);
		freeze_entity_position(Local_57[8 /*2*/], true);
	}
	if (!iLocal_249)
	{
		if (does_entity_have_physics(Local_57[7 /*2*/]) && does_entity_have_physics(Local_57[8 /*2*/]))
		{
			iLocal_290 = add_rope(get_offset_from_entity_in_world_coords(Local_57[7 /*2*/], Local_288), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, false, false, true, 1f, false, 0);
			_0x36CCB9BE67B970FD(iLocal_290, true);
			rope_set_update_order(iLocal_290, 2);
			rope_draw_shadow_enabled(&iLocal_290, false);
			attach_entities_to_rope(iLocal_290, Local_57[7 /*2*/], Local_57[8 /*2*/], get_offset_from_entity_in_world_coords(Local_57[7 /*2*/], Local_288), get_offset_from_entity_in_world_coords(Local_57[8 /*2*/], Local_289), 70f, false, false, 0, 0);
			iLocal_249 = 1;
			return 1;
		}
		if (!does_entity_have_physics(Local_57[7 /*2*/]))
		{
		}
		if (!does_entity_have_physics(Local_57[8 /*2*/]))
		{
		}
	}
	return 0;
}

void func_223(int iParam0, int iParam1)
{
	set_bit(&Global_32118, iParam0);
	StringCopy(&(Global_32119[iParam0 /*6*/]), get_this_script_name(), 24);
	Global_32174[iParam0] = iParam1;
}

void func_224(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_225(int iParam0, bool bParam1)
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

int func_226(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_49(iParam0, Param1, Param2, func_87(), func_87(), bParam3, 5, 0, 0, 0, iParam4, sParam5, func_227(), func_227(), func_227(), func_227(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

var func_227()
{
	var uVar0;
	
	return uVar0;
}

void func_228(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (are_strings_equal(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_737[iVar0 /*5*/].f_1)
				{
					release_named_script_audio_bank(sParam1);
					func_90(&(uParam0->f_737[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_737[iVar0 /*5*/].f_2 = 1;
					uParam0->f_1007 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_1978)
	{
		case 0:
			if (is_screen_faded_out())
			{
				do_screen_fade_in(800);
			}
			if (func_107(Local_53[0 /*2*/]))
			{
				if (!does_blip_exist(Local_53[0 /*2*/].f_1))
				{
					Local_53[0 /*2*/].f_1 = func_38(Local_53[0 /*2*/], 0, 0);
				}
				Local_56 = { get_cgoffset(Local_53[0 /*2*/]) };
			}
			if (does_entity_exist(Local_57[2 /*2*/]) && !does_blip_exist(iLocal_243))
			{
				iLocal_243 = func_279(Local_57[2 /*2*/]);
			}
			set_blip_name_from_text_file(iLocal_243, "SUBBTN_LABEL");
			if (is_ped_in_any_vehicle(player_ped_id(), false))
			{
				trigger_music_event("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				trigger_music_event("DHP1_START");
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				set_blocking_of_non_temporary_events(Local_54[4 /*10*/], true);
				set_ped_path_can_use_climbovers(Local_54[4 /*10*/], false);
			}
			func_278(&uLocal_309, cLocal_51);
			func_278(&uLocal_309, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_277(&uLocal_309, "PORT_OF_LS_PREP_1");
			func_35("dkp1_sub", 7500, 1);
			iLocal_264 = 0;
			iLocal_265 = 0;
			iLocal_266 = 0;
			iLocal_268 = get_game_timer();
			iLocal_269 = 0;
			iLocal_253 = 0;
			iLocal_263 = 0;
			if (iLocal_1987[0] == -1)
			{
				iLocal_1987[0] = get_sound_id();
			}
			if (iLocal_1987[1] == -1)
			{
				iLocal_1987[1] = get_sound_id();
			}
			iLocal_1978++;
			break;
		
		case 1:
			if (iLocal_248)
			{
				if (((!_0x84DE3B5FB3E666F0(&(Local_55[0 /*5*/])) && !_0x84DE3B5FB3E666F0(&(Local_55[1 /*5*/]))) && !_0x84DE3B5FB3E666F0(&(Local_55[2 /*5*/]))) && !_0x84DE3B5FB3E666F0(&(Local_55[3 /*5*/])))
				{
					rope_convert_to_simple(Local_57[0 /*2*/]);
					rope_convert_to_simple(Local_57[1 /*2*/]);
					if (func_107(Local_53[0 /*2*/]))
					{
						set_cgoffset(Local_53[0 /*2*/], Local_56);
					}
					if (does_blip_exist(iLocal_243))
					{
						remove_blip(&iLocal_243);
					}
					func_273(1);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_278(&uLocal_309, cLocal_49);
					trigger_music_event("DHP1_RELEASED");
					clear_help(true);
					iLocal_301 = get_game_timer();
					iLocal_1978 = 4;
				}
				func_272();
				if ((is_entity_in_angled_area(player_ped_id(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, false, true, 0) && !is_ped_in_any_vehicle(player_ped_id(), true)) && !func_212(0))
				{
					if (is_control_just_pressed(2, 51))
					{
						iLocal_293 = create_camera_with_params(26379945, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, true, 2);
						set_cam_params(iLocal_293, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						shake_cam(iLocal_293, "hand_shake", 0.3f);
						func_209(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
						clear_ped_tasks_immediately(player_ped_id());
						iLocal_246 = create_synchronized_scene(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (get_ped_stealth_movement(player_ped_id()))
						{
							task_synchronized_scene(player_ped_id(), iLocal_246, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							task_synchronized_scene(player_ped_id(), iLocal_246, cLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						force_ped_ai_and_animation_update(player_ped_id(), false, false);
						clear_help(true);
						iVar0 = get_closest_vehicle(1249.787f, -3008.016f, 8.52751f, 5f, 0, 4);
						if (func_107(iVar0))
						{
							set_entity_coords(iVar0, 1250.333f, -3010.219f, 8.3191f, true, false, false, true);
							set_entity_heading(iVar0, 85.8086f);
							set_vehicle_on_ground_properly(iVar0, 5f);
						}
						_0x293220DA1B46CEBC(4f, 0f, 4);
						_0x48621C9FCA3EBD28(4);
						iLocal_294 = 1;
						iLocal_1978++;
					}
					else if (!func_219("DKP1_BTN"))
					{
						func_271("DKP1_BTN");
					}
				}
				else if (func_219("DKP1_BTN"))
				{
					clear_help(true);
				}
			}
			break;
		
		case 2:
			if (!is_synchronized_scene_running(iLocal_246) || get_synchronized_scene_phase(iLocal_246) == 1f)
			{
				_0x81CBAE94390F9F89();
				play_sound_from_coord(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", false, 0, false);
				set_cam_params(iLocal_293, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				set_cam_params(iLocal_293, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				set_cam_shake_amplitude(iLocal_293, 0.1f);
				detach_rope_from_entity(Local_55[0 /*5*/], Local_53[0 /*2*/]);
				detach_rope_from_entity(Local_55[1 /*5*/], Local_53[0 /*2*/]);
				detach_rope_from_entity(Local_55[2 /*5*/], Local_53[0 /*2*/]);
				detach_rope_from_entity(Local_55[3 /*5*/], Local_53[0 /*2*/]);
				rope_convert_to_simple(Local_57[0 /*2*/]);
				rope_convert_to_simple(Local_57[1 /*2*/]);
				if (func_107(Local_53[0 /*2*/]))
				{
					set_cgoffset(Local_53[0 /*2*/], Local_56);
					activate_physics(Local_53[0 /*2*/]);
				}
				iLocal_301 = get_game_timer();
				trigger_music_event("DHP1_RELEASED");
				clear_help(true);
				iLocal_294 = 1;
				iLocal_1978++;
			}
			else if (is_synchronized_scene_running(iLocal_246) && get_synchronized_scene_phase(iLocal_246) >= 0.7f)
			{
				if (get_script_task_status(player_ped_id(), 713668775) != 1)
				{
					task_follow_nav_mesh_to_coord(player_ped_id(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 0.25f, false, 40000f);
				}
			}
			break;
		
		case 3:
			if ((get_game_timer() - iLocal_301) > 1500)
			{
				if (iLocal_294)
				{
					set_cam_params(iLocal_293, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					set_cam_params(iLocal_293, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_294 = 0;
				}
				if ((get_game_timer() - iLocal_301) > 5000 || is_control_just_pressed(2, 201))
				{
					if (does_blip_exist(iLocal_243))
					{
						remove_blip(&iLocal_243);
					}
					func_273(1);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_278(&uLocal_309, cLocal_49);
					set_gameplay_cam_relative_heading(0f);
					set_gameplay_cam_relative_pitch(0f, 1f);
					clear_ped_tasks(player_ped_id());
					func_197(1, 0, 0, 3000, 0);
					iLocal_301 = get_game_timer();
					iLocal_1978++;
				}
			}
			break;
		
		case 4:
			if (!func_270())
			{
				if (func_24() == 2)
				{
					if (!func_267(func_268(0), 0) && !func_267(func_268(1), 0))
					{
						func_266(12);
						iLocal_1978++;
					}
					else if (func_267(func_268(0), 0) && !func_267(func_268(1), 0))
					{
						func_224(&uLocal_78, 0, player_ped_id(), "TREVOR", 0, 1);
						func_224(&uLocal_78, 1, func_268(0), "MICHAEL", 0, 1);
						if (func_263(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							func_266(12);
							iLocal_1978++;
						}
					}
					else if (!func_267(func_268(0), 0) && func_267(func_268(1), 0))
					{
						func_224(&uLocal_78, 0, player_ped_id(), "TREVOR", 0, 1);
						func_224(&uLocal_78, 2, func_268(1), "FRANKLIN", 0, 1);
						if (func_263(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							func_266(12);
							iLocal_1978++;
						}
					}
					else
					{
						func_224(&uLocal_78, 0, player_ped_id(), "TREVOR", 0, 1);
						func_224(&uLocal_78, 1, func_268(0), "MICHAEL", 0, 1);
						func_224(&uLocal_78, 2, func_268(1), "FRANKLIN", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							func_266(12);
							iLocal_1978++;
						}
					}
				}
				else if (func_36())
				{
					func_35("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		
		case 5:
			Var1 = { get_entity_coords(Local_53[0 /*2*/], true) };
			if (get_entity_submerged_level(Local_53[0 /*2*/]) > 0f || Var1.f_2 < -0.5f)
			{
				delete_child_rope(Local_55[0 /*5*/]);
				delete_child_rope(Local_55[1 /*5*/]);
				delete_child_rope(Local_55[2 /*5*/]);
				delete_child_rope(Local_55[3 /*5*/]);
				if (iLocal_1987[0] != -1)
				{
					stop_sound(iLocal_1987[0]);
				}
				if (iLocal_1987[1] != -1)
				{
					stop_sound(iLocal_1987[1]);
				}
			}
			if (is_ped_in_vehicle(player_ped_id(), Local_53[0 /*2*/], false))
			{
				func_230(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (get_player_wanted_level(player_id()) > 0)
				{
					Local_54[6 /*10*/] = create_ped(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, true, true);
					give_weapon_to_ped(Local_54[6 /*10*/], joaat("weapon_pistol"), -1, false, true);
					set_ped_config_flag(Local_54[6 /*10*/], 330, true);
					set_ped_as_cop(Local_54[6 /*10*/], true);
					clear_sequence_task(&iLocal_244);
					open_sequence_task(&iLocal_244);
					task_follow_nav_mesh_to_coord(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
					task_look_at_entity(0, player_ped_id(), -1, 2048, 2);
					task_combat_ped(0, player_ped_id(), 0, 16);
					close_sequence_task(iLocal_244);
					task_perform_sequence(Local_54[6 /*10*/], iLocal_244);
					clear_sequence_task(&iLocal_244);
					Local_54[7 /*10*/] = create_ped(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, true, true);
					set_ped_config_flag(Local_54[7 /*10*/], 330, true);
					give_weapon_to_ped(Local_54[7 /*10*/], joaat("weapon_pistol"), -1, false, true);
					set_ped_as_cop(Local_54[7 /*10*/], true);
					clear_sequence_task(&iLocal_244);
					open_sequence_task(&iLocal_244);
					task_follow_nav_mesh_to_coord(0, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
					task_look_at_entity(0, player_ped_id(), -1, 2048, 2);
					task_combat_ped(0, player_ped_id(), 0, 16);
					close_sequence_task(iLocal_244);
					task_perform_sequence(Local_54[7 /*10*/], iLocal_244);
					clear_sequence_task(&iLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_54[5 /*10*/] = create_ped(26, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, true, true);
					set_blocking_of_non_temporary_events(Local_54[5 /*10*/], true);
					clear_sequence_task(&iLocal_244);
					open_sequence_task(&iLocal_244);
					task_look_at_entity(0, player_ped_id(), -1, 2096, 2);
					task_follow_nav_mesh_to_coord(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
					task_play_anim(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
					task_play_anim(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
					task_smart_flee_coord(0, 1252.876f, -3014.035f, 8.31909f, 300f, -1, false, false);
					close_sequence_task(iLocal_244);
					task_perform_sequence(Local_54[5 /*10*/], iLocal_244);
					clear_sequence_task(&iLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				if (func_107(Local_54[4 /*10*/]))
				{
					clear_ped_tasks(Local_54[4 /*10*/]);
					set_entity_coords(Local_54[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, true, false, false, true);
				}
				else
				{
					Local_54[4 /*10*/] = create_ped(26, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, true, true);
				}
				set_blocking_of_non_temporary_events(Local_54[4 /*10*/], true);
				stop_ped_speaking(Local_54[4 /*10*/], true);
				clear_sequence_task(&iLocal_244);
				open_sequence_task(&iLocal_244);
				task_look_at_entity(0, player_ped_id(), -1, 2096, 2);
				task_follow_nav_mesh_to_coord(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 0.25f, false, 40000f);
				task_play_anim(0, cLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, 0f, false, false, false);
				task_play_anim(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				task_play_anim(0, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				task_play_anim(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				task_play_anim(0, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				task_smart_flee_coord(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, false, false);
				close_sequence_task(iLocal_244);
				task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
				clear_sequence_task(&iLocal_244);
				iLocal_305 = get_game_timer();
				iLocal_308 = 0;
				iLocal_307 = 0;
				clear_help(true);
				trigger_music_event("DHP1_SUB");
				if (does_blip_exist(Local_53[0 /*2*/].f_1))
				{
					remove_blip(&(Local_53[0 /*2*/].f_1));
				}
				set_object_as_no_longer_needed(&(Local_57[3 /*2*/]));
				set_object_as_no_longer_needed(&(Local_57[0 /*2*/]));
				set_object_as_no_longer_needed(&(Local_57[1 /*2*/]));
				func_89(&uLocal_309, joaat("p_amb_phone_01"));
				func_89(&uLocal_309, joaat("s_m_m_dockwork_01"));
				func_89(&uLocal_309, joaat("prop_ld_test_01"));
				func_89(&uLocal_309, joaat("prop_sub_release"));
				func_221(&uLocal_309, cLocal_51);
				remove_waypoint_recording("docksprep1");
				_0x293220DA1B46CEBC(15f, 10f, 4);
				func_195(1);
				iLocal_1978 = 0;
			}
			else if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_53[0 /*2*/], true), true) < 5f && !iLocal_253)
			{
				func_220("DKP1_CLIMB", -1);
				iLocal_253 = 1;
			}
			break;
	}
	if ((!iLocal_263 && func_107(Local_53[0 /*2*/])) && is_entity_in_water(Local_53[0 /*2*/]))
	{
		play_sound_from_entity(-1, "SUB_SPLASH", Local_53[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", false, 0);
		iLocal_263 = 1;
	}
	if (((!iLocal_248 && does_entity_exist(Local_57[0 /*2*/])) && does_entity_exist(Local_57[1 /*2*/])) && func_107(Local_53[0 /*2*/]))
	{
		if (does_entity_have_physics(Local_57[0 /*2*/]) && does_entity_have_physics(Local_57[1 /*2*/]))
		{
			set_cg_at_boundcenter(Local_53[0 /*2*/]);
			Local_55[0 /*5*/] = add_rope(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			attach_entities_to_rope(Local_55[0 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], get_offset_from_entity_in_world_coords(Local_57[0 /*2*/], 0f, 0f, 0f), get_offset_from_entity_in_world_coords(Local_53[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[1 /*5*/] = add_rope(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			attach_entities_to_rope(Local_55[1 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], get_offset_from_entity_in_world_coords(Local_57[0 /*2*/], 0f, 0f, 0f), get_offset_from_entity_in_world_coords(Local_53[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[2 /*5*/] = add_rope(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			attach_entities_to_rope(Local_55[2 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], get_offset_from_entity_in_world_coords(Local_57[1 /*2*/], 0f, 0f, 0f), get_offset_from_entity_in_world_coords(Local_53[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[3 /*5*/] = add_rope(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			attach_entities_to_rope(Local_55[3 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], get_offset_from_entity_in_world_coords(Local_57[1 /*2*/], 0f, 0f, 0f), get_offset_from_entity_in_world_coords(Local_53[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_1983, false, false, 0, 0);
			iLocal_248 = 1;
			iLocal_250 = 0;
			activate_physics(Local_53[0 /*2*/]);
			apply_force_to_entity_center_of_mass(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, false, false, true, false);
		}
	}
	else if (func_107(Local_53[0 /*2*/]))
	{
		if (!iLocal_250)
		{
			activate_physics(Local_53[0 /*2*/]);
			iLocal_250 = 1;
		}
		freeze_entity_position(Local_53[0 /*2*/], false);
		apply_force_to_entity_center_of_mass(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, false, false, true, false);
	}
	if (!iLocal_251)
	{
		if (does_entity_exist(Local_57[3 /*2*/]))
		{
			if (does_entity_have_physics(Local_57[3 /*2*/]))
			{
				attach_entity_to_entity(Local_57[3 /*2*/], Local_54[4 /*10*/], get_ped_bone_index(Local_54[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				iLocal_251 = 1;
			}
		}
	}
	if (does_entity_exist(Local_57[3 /*2*/]) && ((func_107(Local_54[4 /*10*/]) && is_ped_fleeing(Local_54[4 /*10*/])) || !func_107(Local_54[4 /*10*/])))
	{
		if (func_107(Local_54[4 /*10*/]) && is_entity_playing_anim(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
		{
			stop_anim_task(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", -8f);
		}
		if (is_entity_attached_to_any_ped(Local_57[3 /*2*/]))
		{
			detach_entity(Local_57[3 /*2*/], true, true);
		}
	}
	if (func_24() == 2)
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			set_vehicle_is_considered_by_player(Local_53[0 /*2*/], true);
		}
	}
	else if (func_107(Local_53[0 /*2*/]))
	{
		set_vehicle_is_considered_by_player(Local_53[0 /*2*/], false);
	}
}

void func_230(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (does_entity_exist(Global_103950.f_4))
	{
		if (is_vehicle_driveable(Global_103950.f_4, false))
		{
			if (func_262(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_259(get_entity_coords(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_231(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_231(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (does_entity_exist(Global_77137.f_484[25]) && is_vehicle_driveable(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((is_big_vehicle(iParam0) || get_entity_model(iParam0) == joaat("bus")) || get_entity_model(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_258(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_121(iParam0, &Var0);
		if (func_95(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { get_entity_coords(iParam0, true) };
			fParam2 = get_entity_heading(iParam0);
		}
		if (iParam3 == 24)
		{
			if (get_hash_key(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = get_hash_key(get_this_script_name());
			}
		}
		func_252(iParam3, &Var0, Param1, fParam2, func_117(iParam0));
		func_232(iParam3, iParam0, 0);
	}
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_251(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != get_entity_model(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = func_171();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_262(iParam0);
					if ((does_entity_exist(iVar0) && is_vehicle_driveable(iVar0, false)) && iParam1 != iVar0)
					{
						func_233(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_234(iParam0))
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
	func_121(iParam0, &(Global_113386.f_32749.f_5510));
}

int func_234(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, false)) || func_127(iParam0, 0, 0)) || func_127(iParam0, 1, 0)) || func_127(iParam0, 2, 0)) || func_117(iParam0) != 145) || func_250(iParam0)) || func_249(iParam0)) || func_248(iParam0)) || func_247(iParam0)) || !func_235(get_entity_model(iParam0)))
	{
		if (func_249(iParam0))
		{
		}
		if (func_249(iParam0))
		{
		}
		if (func_127(iParam0, 0, 0))
		{
		}
		if (func_127(iParam0, 1, 0))
		{
		}
		if (func_127(iParam0, 2, 0))
		{
		}
		if (func_117(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_235(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_236(iParam0, 0))
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

int func_236(int iParam0, bool bParam1)
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
		if (!func_246())
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
		if ((((!func_245() && !func_244()) && !func_243()) && !func_242()) && !func_246())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_241() || is_pc_version()) || func_240())
		{
		}
		else if (!func_243())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_239(iParam0))
		{
			return 0;
		}
	}
	if (!func_237(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_237(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_238())
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

int func_238()
{
	if (is_pc_version())
	{
		return _net_gameserver_use_server_transactions();
	}
	return 0;
}

int func_239(int iParam0)
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

bool func_240()
{
	return (is_orbis_version() || unk_0x807ABE1AB65C24D2());
}

bool func_241()
{
	return (is_durango_version() || unk_0xC545AB1CF97ABB34());
}

int func_242()
{
	return 0;
}

int func_243()
{
	return 1;
}

int func_244()
{
	return 1;
}

int func_245()
{
	if (is_dlc_present(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_246()
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

int func_247(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_236(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
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

int func_249(int iParam0)
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

int func_250(int iParam0)
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

int func_251(var uParam0, int iParam1)
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
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 19);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			set_bit(&(uParam0->f_9), 19);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			set_bit(&(uParam0->f_9), 20);
			set_bit(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_119(2, 1);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			set_bit(&(uParam0->f_9), 0);
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
			if (func_246())
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
			set_bit(&(uParam0->f_9), 1);
			set_bit(&(uParam0->f_9), 23);
			set_bit(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_246())
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
			set_bit(&(uParam0->f_9), 1);
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
			set_bit(&(uParam0->f_9), 0);
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
		if (!func_95(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_95(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_95(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_252(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_251(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			func_257(iParam0);
			func_256(uParam1, &(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 11))
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_253(iParam0, 1);
		}
	}
}

void func_253(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_255(iParam0, 0))
		{
			func_254(iParam0, 1, 0);
			func_254(iParam0, 2, 0);
			func_254(iParam0, 3, 0);
			func_254(iParam0, 4, 0);
			func_254(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_254(iParam0, 0, 0);
	}
}

void func_254(int iParam0, bool bParam1, bool bParam2)
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

int func_255(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_256(var uParam0, var uParam1)
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

void func_257(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_251(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (does_entity_exist(Global_77137.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_77137.f_139[iParam0], true, true);
			set_vehicle_as_no_longer_needed(&(Global_77137.f_139[iParam0]));
			Global_77137.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			func_253(iParam0, 0);
		}
	}
}

void func_258(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_257(iParam0);
	func_253(iParam0, 0);
}

int func_259(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_260(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_260(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_261(iVar0) || iParam2 == 0)
				{
					fVar1 = get_distance_between_coords(Param0, Global_95479[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_261(int iParam0)
{
	return BitTest(Global_113386.f_7229[iParam0], 0);
}

int func_262(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77137.f_139[iParam0];
}

bool func_263(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_34(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_265(2, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_264(&uVar0, &uVar1, iParam6, 0);
}

int func_264(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam2 > Global_21607)
			{
				if (bParam3 == 0)
				{
					stop_scripted_conversation(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
				}
				else
				{
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_31();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22601 = Global_22602;
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21224.f_370 = Global_22594;
		Global_21601 = Global_21602;
		Global_21603 = Global_21604;
		if (Global_21863 == 0)
		{
			Global_21759[0 /*6*/] = { Global_21785[0 /*6*/] };
			Global_21759[1 /*6*/] = { Global_21785[1 /*6*/] };
			Global_21811[0 /*6*/] = { Global_21837[0 /*6*/] };
			Global_21811[1 /*6*/] = { Global_21837[1 /*6*/] };
			Global_21772[0 /*6*/] = { Global_21798[0 /*6*/] };
			Global_21772[1 /*6*/] = { Global_21798[1 /*6*/] };
			Global_21824[0 /*6*/] = { Global_21850[0 /*6*/] };
			Global_21824[1 /*6*/] = { Global_21850[1 /*6*/] };
		}
		if (Global_21611)
		{
			clear_bit(&Global_8136, 20);
			clear_bit(&Global_8137, 17);
			clear_bit(&Global_8138, false);
			if (bParam3)
			{
				func_23();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_22())
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
					if (Global_21863 == 0)
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
			}
			if (func_21())
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
			}
			func_20();
			Global_21615 = bParam3;
		}
		Global_21607 = iParam2;
		if (Global_21601 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21601)
			{
				StringCopy(&(Global_21224.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21224.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20471 = 0;
		func_19();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21607 || iParam2 == Global_21607)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_33();
	}
	return 0;
}

void func_265(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21602 = iParam0;
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_266(bool bParam0)
{
	set_bit(&Global_96296, iParam0);
}

int func_267(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!is_ped_injured(iParam0))
	{
		bVar0 = func_27(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_268(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == player_ped_id())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_24())
	{
		return player_ped_id();
	}
	return Global_97919[func_269(iParam0)];
}

int func_269(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_270()
{
	if (!network_is_game_in_progress())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_271(char* sParam0)
{
	begin_text_command_display_help(sParam0);
	end_text_command_display_help(0, true, true, -1);
}

void func_272()
{
	int iVar0;
	bool bVar1;
	
	iLocal_247 = 0;
	while (iLocal_247 < Local_55.f_0)
	{
		if (!_0x84DE3B5FB3E666F0(&(Local_55[iLocal_247 /*5*/])))
		{
			if (!Local_55[iLocal_247 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_247++;
	}
	if (bVar1)
	{
		if (((((!_0x84DE3B5FB3E666F0(&(Local_55[0 /*5*/])) && !_0x84DE3B5FB3E666F0(&(Local_55[1 /*5*/]))) && (!Local_55[0 /*5*/].f_4 || !Local_55[1 /*5*/].f_4)) || ((!_0x84DE3B5FB3E666F0(&(Local_55[2 /*5*/])) && !_0x84DE3B5FB3E666F0(&(Local_55[3 /*5*/]))) && (!Local_55[2 /*5*/].f_4 || !Local_55[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_1988 > 0)
			{
				if (iLocal_1987[(iLocal_1988 - 1)] != -1)
				{
					stop_sound(iLocal_1987[(iLocal_1988 - 1)]);
				}
			}
			if (iLocal_1987[iLocal_1988] != -1)
			{
				play_sound_from_coord(iLocal_1987[iLocal_1988], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0, false, 0, false);
				iLocal_1988++;
			}
		}
		else if (iVar0 <= 2)
		{
			play_sound_from_coord(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0, false, 0, false);
		}
		iLocal_247 = 0;
		while (iLocal_247 < Local_55.f_0)
		{
			if (!_0x84DE3B5FB3E666F0(&(Local_55[iLocal_247 /*5*/])))
			{
				if (!Local_55[iLocal_247 /*5*/].f_4)
				{
					play_sound_from_coord(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0, false, 0, false);
				}
				Local_55[iLocal_247 /*5*/].f_4 = 1;
			}
			iLocal_247++;
		}
		if (iVar0 >= 4)
		{
			if (iLocal_1987[0] != -1)
			{
				stop_sound(iLocal_1987[0]);
			}
			if (iLocal_1987[1] != -1)
			{
				stop_sound(iLocal_1987[1]);
			}
		}
	}
}

void func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("prop_ld_test_01"));
			func_88(&uLocal_309, joaat("prop_sub_release"));
			func_88(&uLocal_309, joaat("s_m_m_dockwork_01"));
			func_278(&uLocal_309, cLocal_50);
			func_278(&uLocal_309, cLocal_51);
			func_276(&uLocal_309, "docksprep1");
			func_88(&uLocal_309, joaat("p_amb_phone_01"));
			func_275(&uLocal_309);
			func_277(&uLocal_309, "PORT_OF_LS_PREP_1");
			break;
		
		case 1:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, iLocal_278);
			func_88(&uLocal_309, iLocal_281);
			func_88(&uLocal_309, iLocal_284);
			func_274(&uLocal_309);
			func_275(&uLocal_309);
			break;
		
		case 2:
		case 3:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, joaat("prop_sub_cover_01"));
			func_88(&uLocal_309, joaat("prop_tarp_strap"));
			break;
	}
}

void func_274(var uParam0)
{
	uParam0->f_885.f_2 = 0;
	if (!uParam0->f_885.f_1)
	{
		if (!uParam0->f_885)
		{
			request_ptfx_asset();
			uParam0->f_885 = 1;
		}
		uParam0->f_1007 = 1;
	}
}

void func_275(var uParam0)
{
	uParam0->f_889.f_2 = 0;
	if (!uParam0->f_889.f_1)
	{
		if (!uParam0->f_889)
		{
			rope_load_textures();
			uParam0->f_889 = 1;
		}
		uParam0->f_1007 = 1;
	}
}

int func_276(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (are_strings_equal(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_waypoint_recording(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = get_game_timer();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_277(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (are_strings_equal(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_script_audio_bank(sParam1, false, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = get_game_timer();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_278(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (are_strings_equal(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		request_anim_dict(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = get_game_timer();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

int func_279(int iParam0)
{
	return func_39(iParam0, 1, 0);
}

void func_280()
{
	int iVar0;
	
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (does_entity_exist(Local_54[iLocal_247 /*10*/]))
		{
			if (Local_54[iLocal_247 /*10*/] != Local_54[3 /*10*/])
			{
				if (iLocal_1977 == 0)
				{
					func_295(Local_54[iLocal_247 /*10*/], &(Local_54[iLocal_247 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else if (does_blip_exist(Local_54[iLocal_247 /*10*/].f_2))
				{
					remove_blip(&(Local_54[iLocal_247 /*10*/].f_2));
				}
			}
			if (is_ped_injured(Local_54[iLocal_247 /*10*/]))
			{
				if (Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
				{
					func_93(7);
				}
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_1977 == 2 && Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
			{
				if (func_10(Local_54[3 /*10*/], player_ped_id(), 1) > 300f)
				{
					func_93(11);
				}
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (does_entity_exist(Local_53[iLocal_247 /*2*/]))
		{
			if (!is_vehicle_driveable(Local_53[iLocal_247 /*2*/], false))
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					func_93(1);
				}
				else if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					func_93(2);
				}
				else if (iLocal_247 == 3)
				{
					func_93(8);
				}
				func_294(&(Local_53[iLocal_247 /*2*/]));
			}
			else if (iLocal_257)
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (iLocal_1977 == 2)
					{
						if (get_entity_submerged_level(Local_53[iLocal_247 /*2*/]) > 0.5f)
						{
							func_93(5);
						}
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (func_293(&(Local_53[iLocal_247 /*2*/])))
					{
						func_93(3);
						func_294(&(Local_53[iLocal_247 /*2*/]));
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					if (iLocal_1977 == 1 && iLocal_1978 < 3)
					{
						if (func_293(&(Local_53[iLocal_247 /*2*/])))
						{
							func_93(4);
							func_294(&(Local_53[iLocal_247 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_247++;
	}
	if (func_107(Local_53[0 /*2*/]) && func_107(player_ped_id()))
	{
		if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_53[0 /*2*/], true), true) > 750f)
		{
			func_93(10);
		}
		else if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_53[0 /*2*/], true), true) > 700f)
		{
			if (!iLocal_254 && func_36())
			{
				func_35("DKP1_ABSUB", 7500, 1);
				iLocal_254 = 1;
			}
		}
		else
		{
			iLocal_254 = 0;
		}
	}
	if (func_107(player_ped_id()))
	{
		func_286();
	}
	if (iLocal_1977 == 0 && iLocal_1978 > 0)
	{
		func_283();
	}
	if (iLocal_1977 == 0 || iLocal_1977 == 1)
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			if (!iLocal_1985)
			{
				func_282(Local_53[0 /*2*/], 588);
				iLocal_1985 = 1;
			}
		}
		else if (iLocal_1985)
		{
			func_282(0, 588);
			iLocal_1985 = 0;
		}
	}
	else if (iLocal_1977 == 2)
	{
		if (func_107(Local_53[2 /*2*/]))
		{
			if (!iLocal_1986)
			{
				func_282(Local_53[2 /*2*/], 590);
				iLocal_1986 = 1;
			}
		}
		else if (iLocal_1986)
		{
			func_282(0, 590);
			iLocal_1986 = 0;
		}
	}
	if ((((is_entity_in_angled_area(player_ped_id(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, false, true, 0) || is_entity_in_angled_area(player_ped_id(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, false, true, 0)) || is_entity_in_angled_area(player_ped_id(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, false, true, 0))
	{
		set_radar_as_interior_this_frame(get_hash_key("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (is_ped_in_any_vehicle(player_ped_id(), true))
		{
			iVar0 = get_vehicle_ped_is_in(player_ped_id(), true);
		}
		else
		{
			iVar0 = player_ped_id();
		}
		if ((!is_entity_in_air(iVar0) && !is_entity_in_water(iVar0)) && (!does_entity_exist(Local_53[0 /*2*/]) || !is_entity_touching_entity(iVar0, Local_53[0 /*2*/])))
		{
			if (!iLocal_256)
			{
				func_281(593);
				iLocal_256 = 1;
			}
		}
	}
	if (!iLocal_258)
	{
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			set_audio_flag("OnlyAllowScriptTriggerPoliceScanner", true);
			play_police_report("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_258 = 1;
		}
	}
	if (is_aim_cam_active())
	{
		_0xFD3151CD37EA2245(Local_53[0 /*2*/]);
	}
}

void func_281(int iParam0)
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

void func_282(int iParam0, int iParam1)
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

void func_283()
{
	switch (iLocal_264)
	{
		case 0:
			if (func_107(Local_54[4 /*10*/]))
			{
				if (iLocal_269)
				{
					task_play_anim(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
					if (get_is_waypoint_recording_loaded("docksprep1"))
					{
						task_follow_waypoint_recording(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						request_waypoint_recording("docksprep1");
					}
				}
			}
			iLocal_270 = 0;
			iLocal_264 = 1;
			break;
		
		case 1:
			if (!iLocal_269)
			{
				if ((get_game_timer() - iLocal_268) > 2000 || get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_54[4 /*10*/], true), true) < 10f)
				{
					iLocal_269 = 1;
					iLocal_264 = 0;
				}
			}
			if (is_entity_in_angled_area(player_ped_id(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0))
			{
				if (func_107(Local_54[4 /*10*/]))
				{
					if (can_ped_see_hated_ped(Local_54[4 /*10*/], player_ped_id()))
					{
						clear_ped_tasks(Local_54[4 /*10*/]);
						stop_current_playing_ambient_speech(Local_54[4 /*10*/]);
						func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 2;
					}
					else if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_54[4 /*10*/], true), true) < 12f && get_player_current_stealth_noise(player_id()) > 8.5f)
					{
						stop_current_playing_ambient_speech(Local_54[4 /*10*/]);
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							task_turn_ped_to_face_coord(Local_54[4 /*10*/], get_entity_coords(player_ped_id(), true), 4000);
							task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_54[4 /*10*/], true), true) < 12f && is_ped_in_any_vehicle(player_ped_id(), false))
					{
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							task_turn_ped_to_face_coord(Local_54[4 /*10*/], get_entity_coords(player_ped_id(), true), 4000);
							task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (((is_flash_light_on(player_ped_id()) && (get_clock_hours() >= 19 || get_clock_hours() < 6)) && func_10(player_ped_id(), Local_54[4 /*10*/], 1) < 25f) && (is_player_targetting_entity(player_id(), Local_54[4 /*10*/]) || is_player_free_aiming_at_entity(player_id(), Local_54[4 /*10*/])))
					{
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							task_turn_ped_to_face_coord(Local_54[4 /*10*/], get_entity_coords(player_ped_id(), true), 4000);
							task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (get_distance_between_coords(get_entity_coords(player_ped_id(), true), get_entity_coords(Local_54[4 /*10*/], true), true) < 12f && is_ped_in_any_vehicle(player_ped_id(), false))
					{
						if (!func_285(Local_54[4 /*10*/], 1464580341, 1))
						{
							task_turn_ped_to_face_coord(Local_54[4 /*10*/], get_entity_coords(player_ped_id(), true), 4000);
							task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
				}
				if (iLocal_1978 > 1)
				{
					if (func_107(Local_54[4 /*10*/]))
					{
						if (has_entity_clear_los_to_entity_in_front(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							stop_current_playing_ambient_speech(Local_54[4 /*10*/]);
							func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_264 = 3;
							iLocal_266 = 3;
							clear_ped_tasks_immediately(Local_54[4 /*10*/]);
							task_follow_nav_mesh_to_coord(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, false, -122.93f);
							iLocal_268 = get_game_timer();
							iLocal_269 = 0;
						}
					}
				}
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				if (!is_waypoint_playback_going_on_for_ped(Local_54[4 /*10*/]))
				{
					if (iLocal_269)
					{
						if ((get_script_task_status(Local_54[4 /*10*/], 242628503) != 1 && get_script_task_status(Local_54[4 /*10*/], 713668775) != 1) && get_script_task_status(Local_54[4 /*10*/], 1464580341) != 1)
						{
							if (!is_entity_playing_anim(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
							{
								task_play_anim(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
							}
							if (is_entity_at_coord(Local_54[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, false, true, 0))
							{
								if (get_is_waypoint_recording_loaded("docksprep1"))
								{
									task_follow_waypoint_recording(Local_54[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (get_is_waypoint_recording_loaded("docksprep1"))
							{
								task_follow_waypoint_recording(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((get_game_timer() - iLocal_272) > 10000)
					{
						if (!waypoint_playback_get_is_paused(Local_54[4 /*10*/]))
						{
							if (is_entity_at_coord(Local_54[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								waypoint_playback_pause(Local_54[4 /*10*/], false, false);
							}
							else if (is_entity_at_coord(Local_54[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								waypoint_playback_pause(Local_54[4 /*10*/], false, false);
							}
						}
						else
						{
							iLocal_272 = get_game_timer();
							waypoint_playback_resume(Local_54[4 /*10*/], true, -1, 3000);
						}
					}
					if (!is_ambient_speech_playing(Local_54[4 /*10*/]) && (get_game_timer() - iLocal_273) > 4000)
					{
						func_284(Local_54[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_273 = get_game_timer();
					}
				}
				if (((has_ped_received_event(Local_54[4 /*10*/], 124) || has_ped_received_event(Local_54[4 /*10*/], 125)) || has_ped_received_event(Local_54[4 /*10*/], 126)) || has_ped_received_event(Local_54[4 /*10*/], 118))
				{
					stop_current_playing_ambient_speech(Local_54[4 /*10*/]);
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					task_hands_up(Local_54[4 /*10*/], -1, player_ped_id(), -1, true);
				}
				else if (has_ped_received_event(Local_54[4 /*10*/], 23))
				{
					stop_current_playing_ambient_speech(Local_54[4 /*10*/]);
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					clear_ped_tasks(Local_54[4 /*10*/]);
					task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					task_cower(Local_54[4 /*10*/], -1);
				}
				else if (has_entity_been_damaged_by_entity(Local_54[4 /*10*/], player_ped_id(), true))
				{
					stop_current_playing_ambient_speech(Local_54[4 /*10*/]);
					task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 2:
			if (func_107(Local_54[4 /*10*/]))
			{
				if (!is_ped_headtracking_ped(Local_54[4 /*10*/], player_ped_id()))
				{
					task_look_at_entity(Local_54[4 /*10*/], player_ped_id(), -1, 3104, 2);
				}
			}
			switch (iLocal_265)
			{
				case 0:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							open_sequence_task(&iLocal_244);
							task_go_to_entity(0, player_ped_id(), -1, 4f, 2f, 2f, 0);
							task_turn_ped_to_face_entity(0, player_ped_id(), -1);
							close_sequence_task(iLocal_244);
							task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
							clear_sequence_task(&iLocal_244);
							task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
							iLocal_267 = get_game_timer();
							iLocal_265 = 1;
						}
					}
					break;
				
				case 1:
					if ((get_game_timer() - iLocal_267) > 4000)
					{
						if (func_107(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								open_sequence_task(&iLocal_244);
								task_go_to_entity(0, player_ped_id(), -1, 3f, 1f, 2f, 0);
								task_turn_ped_to_face_entity(0, player_ped_id(), -1);
								close_sequence_task(iLocal_244);
								task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
								clear_sequence_task(&iLocal_244);
								task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
								iLocal_267 = get_game_timer();
								iLocal_265 = 2;
							}
						}
					}
					break;
				
				case 2:
					if ((get_game_timer() - iLocal_267) > 8000)
					{
						if (func_107(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_267 = get_game_timer();
								iLocal_266 = 4;
								iLocal_264 = 3;
							}
						}
					}
					break;
			}
			if (!is_entity_in_angled_area(player_ped_id(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, false, true, 0) || !func_107(Local_54[4 /*10*/]))
			{
				iLocal_264 = 0;
			}
			get_current_ped_weapon(player_ped_id(), &iLocal_271, true);
			if (func_107(Local_54[4 /*10*/]))
			{
				if ((has_ped_received_event(Local_54[4 /*10*/], 124) || has_ped_received_event(Local_54[4 /*10*/], 125)) || has_ped_received_event(Local_54[4 /*10*/], 126))
				{
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					task_hands_up(Local_54[4 /*10*/], -1, player_ped_id(), -1, true);
					task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
				}
				else if (is_player_free_aiming_at_entity(player_id(), Local_54[4 /*10*/]) || is_player_targetting_entity(player_id(), Local_54[4 /*10*/]))
				{
					if (get_weapontype_group(iLocal_271) != joaat("GROUP_MELEE") && iLocal_271 != joaat("weapon_unarmed"))
					{
						func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 3;
						iLocal_266 = 1;
						clear_ped_tasks_immediately(Local_54[4 /*10*/]);
						task_hands_up(Local_54[4 /*10*/], -1, player_ped_id(), -1, false);
					}
				}
				else if (has_ped_received_event(Local_54[4 /*10*/], 23))
				{
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					task_cower(Local_54[4 /*10*/], -1);
					task_play_anim(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
				}
				else if (has_entity_been_damaged_by_entity(Local_54[4 /*10*/], player_ped_id(), true))
				{
					func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 3:
			switch (iLocal_266)
			{
				case 1:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 2:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 3:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (is_entity_at_coord(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, false, true, 0))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_270 = 1;
								iLocal_266 = 4;
							}
						}
						if (!is_ped_headtracking_entity(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							task_look_at_entity(Local_54[4 /*10*/], Local_53[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 4:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (!is_ped_ragdoll(Local_54[4 /*10*/]) && !is_ped_getting_up(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								clear_ped_tasks(Local_54[4 /*10*/]);
								open_sequence_task(&iLocal_244);
								task_play_anim(0, cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
								if (iLocal_270)
								{
									task_follow_nav_mesh_to_coord(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
									task_smart_flee_ped(0, player_ped_id(), 200f, -1, false, false);
								}
								else
								{
									task_follow_nav_mesh_to_coord(0, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 0.25f, false, 40000f);
									task_wander_in_area(0, 1183.287f, -2947.87f, 4.8986f, 100f, 3f, 6f);
								}
								close_sequence_task(iLocal_244);
								task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
								clear_sequence_task(&iLocal_244);
								iLocal_267 = get_game_timer();
								trigger_music_event("DHP1_ATTACKED");
								iLocal_274 = 0;
								iLocal_266 = 5;
							}
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 5:
					if ((get_game_timer() - iLocal_267) > 8000)
					{
						if (!iLocal_274)
						{
							if (get_player_wanted_level(player_id()) < 1)
							{
								set_player_wanted_level_no_drop(player_id(), 1, false);
								set_player_wanted_level_now(player_id(), false);
								iLocal_274 = 1;
							}
						}
						if (func_107(Local_54[4 /*10*/]))
						{
							if (iLocal_270)
							{
								if (!is_ped_fleeing(Local_54[4 /*10*/]))
								{
									task_smart_flee_ped(Local_54[4 /*10*/], player_ped_id(), 200f, -1, false, false);
								}
							}
							else if (get_script_task_status(Local_54[4 /*10*/], 923520851) != 1)
							{
								task_wander_in_area(Local_54[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 3f, 6f);
							}
						}
					}
					if (!iLocal_270)
					{
						get_current_ped_weapon(player_ped_id(), &iLocal_271, true);
						if (func_107(Local_54[4 /*10*/]))
						{
							if ((has_ped_received_event(Local_54[4 /*10*/], 124) || has_ped_received_event(Local_54[4 /*10*/], 125)) || has_ped_received_event(Local_54[4 /*10*/], 126))
							{
								func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									clear_ped_tasks(Local_54[4 /*10*/]);
									open_sequence_task(&iLocal_244);
									task_hands_up(0, 3000, player_ped_id(), -1, false);
									task_follow_nav_mesh_to_coord(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
									task_smart_flee_ped(0, player_ped_id(), 200f, -1, false, false);
									close_sequence_task(iLocal_244);
									task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
									clear_sequence_task(&iLocal_244);
									iLocal_267 = get_game_timer();
									iLocal_270 = 1;
								}
							}
							else if ((is_player_free_aiming_at_entity(player_id(), Local_54[4 /*10*/]) || is_player_targetting_entity(player_id(), Local_54[4 /*10*/])) && is_ped_facing_ped(Local_54[4 /*10*/], player_ped_id(), 160f))
							{
								if (get_weapontype_group(iLocal_271) != joaat("GROUP_MELEE") && iLocal_271 != joaat("weapon_unarmed"))
								{
									func_224(&uLocal_78, 4, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										clear_ped_tasks(Local_54[4 /*10*/]);
										open_sequence_task(&iLocal_244);
										task_hands_up(0, 3000, player_ped_id(), -1, false);
										task_follow_nav_mesh_to_coord(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
										task_smart_flee_ped(0, player_ped_id(), 200f, -1, false, false);
										close_sequence_task(iLocal_244);
										task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
										clear_sequence_task(&iLocal_244);
										iLocal_270 = 1;
										iLocal_267 = get_game_timer();
									}
								}
							}
							else if (has_ped_received_event(Local_54[4 /*10*/], 23))
							{
								func_224(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									clear_ped_tasks(Local_54[4 /*10*/]);
									open_sequence_task(&iLocal_244);
									task_cower(0, -1);
									task_follow_nav_mesh_to_coord(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
									task_smart_flee_ped(0, player_ped_id(), 200f, -1, false, false);
									close_sequence_task(iLocal_244);
									task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
									clear_sequence_task(&iLocal_244);
									iLocal_270 = 1;
								}
							}
							else if (has_entity_been_damaged_by_entity(Local_54[4 /*10*/], player_ped_id(), true))
							{
								clear_ped_tasks(Local_54[4 /*10*/]);
								open_sequence_task(&iLocal_244);
								task_follow_nav_mesh_to_coord(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, false, 40000f);
								task_smart_flee_ped(0, player_ped_id(), 200f, -1, false, false);
								close_sequence_task(iLocal_244);
								task_perform_sequence(Local_54[4 /*10*/], iLocal_244);
								clear_sequence_task(&iLocal_244);
								iLocal_270 = 1;
								iLocal_267 = get_game_timer();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_284(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	play_ped_ambient_speech_with_voice_native(iParam0, sParam1, sParam2, func_60(iParam3), false);
}

int func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_286()
{
	switch (iLocal_308)
	{
		case 0:
			switch (iLocal_307)
			{
				case 0:
					if (func_107(Local_53[0 /*2*/]))
					{
						if ((!is_message_being_displayed() && is_ped_in_vehicle(player_ped_id(), Local_53[0 /*2*/], false)) && get_player_wanted_level(player_id()) == 0)
						{
							func_291();
							iLocal_305 = get_game_timer();
							iLocal_307 = 1;
						}
					}
					break;
				
				case 1:
					if ((get_game_timer() - iLocal_305) > 6000 && is_ped_in_vehicle(player_ped_id(), Local_53[0 /*2*/], false))
					{
						func_224(&uLocal_78, 1, 0, "FLOYD", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					break;
				
				case 2:
					if (func_11())
					{
						if (is_ped_in_vehicle(player_ped_id(), Local_53[0 /*2*/], false))
						{
							if (func_37())
							{
								func_290(0);
							}
						}
						else if (!func_37())
						{
							func_290(1);
						}
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 2;
					iLocal_307 = 0;
					iLocal_305 = get_game_timer();
					break;
			}
			break;
		
		case 2:
			switch (iLocal_307)
			{
				case 0:
					if ((!is_message_being_displayed() && is_ped_in_vehicle(player_ped_id(), Local_53[0 /*2*/], false)) && get_distance_between_coords(get_entity_coords(player_ped_id(), true), 324.7653f, -2974.495f, -1f, true) < 110f)
					{
						func_291();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					if (func_12(&uLocal_78, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (func_11())
					{
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 3;
					iLocal_307 = 0;
					iLocal_305 = get_game_timer();
					break;
			}
			break;
		
		case 3:
			if (func_107(Local_53[2 /*2*/]) && func_107(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (is_ped_in_vehicle(player_ped_id(), Local_53[2 /*2*/], false) && is_ped_in_vehicle(Local_54[3 /*10*/], Local_53[2 /*2*/], false))
						{
							if (func_11())
							{
								func_291();
							}
							else
							{
								iLocal_307 = 1;
							}
						}
						break;
					
					case 1:
						func_284(Local_54[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_307 = 2;
						break;
					
					case 2:
						if (!is_ambient_speech_playing(Local_54[3 /*10*/]))
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 4;
						iLocal_307 = 0;
						iLocal_305 = get_game_timer();
						break;
					}
			}
			break;
		
		case 4:
			if (func_107(Local_53[2 /*2*/]) && func_107(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (((is_ped_in_any_vehicle(player_ped_id(), false) && is_ped_in_vehicle(Local_54[3 /*10*/], get_vehicle_ped_is_in(player_ped_id(), false), false)) && is_entity_attached_to_entity(Local_53[1 /*2*/], get_vehicle_ped_is_in(player_ped_id(), false))) && !is_message_being_displayed())
						{
							func_291();
							iLocal_305 = get_game_timer();
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if ((get_game_timer() - iLocal_305) > 2000)
						{
							func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
							if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_307 = 2;
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if ((is_ped_in_any_vehicle(player_ped_id(), false) && is_ped_in_vehicle(Local_54[3 /*10*/], get_vehicle_ped_is_in(player_ped_id(), false), false)) && is_entity_attached_to_entity(Local_53[1 /*2*/], get_vehicle_ped_is_in(player_ped_id(), false)))
							{
								if (func_37())
								{
									func_290(0);
								}
							}
							else if (!func_37())
							{
								func_290(1);
							}
						}
						else
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 5;
						iLocal_307 = 0;
						iLocal_305 = get_game_timer();
						break;
				}
				if (get_distance_between_coords(get_entity_coords(Local_53[0 /*2*/], true), -323.73f, -2613.702f, 5f, true) < 60f)
				{
					func_289();
					iLocal_307 = 3;
				}
			}
			break;
		
		case 5:
			switch (iLocal_307)
			{
				case 0:
					if ((((is_ped_in_any_vehicle(player_ped_id(), false) && is_ped_in_vehicle(Local_54[3 /*10*/], get_vehicle_ped_is_in(player_ped_id(), false), false)) && is_entity_attached_to_entity(Local_53[1 /*2*/], get_vehicle_ped_is_in(player_ped_id(), false))) && !is_message_being_displayed()) && is_entity_in_angled_area(player_ped_id(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, false, true, 0))
					{
						func_291();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_288();
					func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_287(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_287(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 6;
					iLocal_307 = 0;
					iLocal_305 = get_game_timer();
					break;
			}
			break;
		
		case 6:
			switch (iLocal_307)
			{
				case 0:
					if ((((is_ped_in_any_vehicle(player_ped_id(), false) && is_ped_in_vehicle(Local_54[3 /*10*/], get_vehicle_ped_is_in(player_ped_id(), false), false)) && is_entity_attached_to_entity(Local_53[1 /*2*/], get_vehicle_ped_is_in(player_ped_id(), false))) && !is_message_being_displayed()) && get_distance_between_coords(get_entity_coords(Local_53[0 /*2*/], true), -323.73f, -2613.702f, 5f, true) < 40f)
					{
						func_291();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_288();
					func_224(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_287(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_287(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					break;
			}
			break;
	}
}

bool func_287(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_13(sParam2, iParam4, 0);
}

int func_288()
{
	if (BitTest(get_random_int_in_range(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_289()
{
	Global_20471 = 0;
	func_33();
}

void func_290(int iParam0)
{
	Global_22616 = iParam0;
}

void func_291()
{
	Global_20471 = 0;
	func_292();
}

void func_292()
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

int func_293(var uParam0)
{
	if (is_vehicle_driveable(*uParam0, false))
	{
		if (((is_vehicle_stuck_timer_up(*uParam0, 0, 7000) || is_vehicle_stuck_timer_up(*uParam0, 3, 30000)) || is_vehicle_stuck_timer_up(*uParam0, 2, 30000)) || is_vehicle_stuck_timer_up(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_294(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		is_entity_dead(*iParam0, false);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, true))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

int func_295(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
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

void func_296()
{
	struct<3> Var0;
	float fVar1;
	
	if (iLocal_1981 == 1)
	{
		if (iLocal_1976 == 0)
		{
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(800);
				}
			}
			else
			{
				func_195(iLocal_1982);
			}
		}
		else if (iLocal_1976 == 3)
		{
			render_script_cams(false, false, 3000, true, false, 0);
			set_player_control(player_id(), true, 0);
			func_314();
			if (is_cutscene_active())
			{
				remove_cutscene();
			}
			func_313(&uLocal_309);
			if (!func_312())
			{
				func_311(iLocal_1982, &Var0, &fVar1);
				set_entity_coords(player_ped_id(), Var0, true, false, false, true);
				set_entity_heading(player_ped_id(), fVar1);
				freeze_entity_position(player_ped_id(), true);
				func_310(&uLocal_309, Var0, 50f, 0);
			}
			func_273(iLocal_1977);
			while (!func_308(&uLocal_309))
			{
				wait(0);
			}
			switch (iLocal_1977)
			{
				case 0:
					func_306();
					break;
				
				case 1:
					func_305();
					break;
				
				case 2:
					func_301();
					break;
				
				case 3:
					func_297();
					break;
			}
			set_gameplay_cam_relative_heading(0f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			trigger_music_event("DHP1_START");
			iLocal_1981 = 0;
			if (!func_312())
			{
				func_202(&uLocal_309);
			}
		}
	}
}

void func_297()
{
	if (!func_107(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = create_vehicle(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, true, true, false);
		set_vehicle_is_considered_by_player(Local_53[0 /*2*/], false);
		set_vehicle_engine_on(Local_53[0 /*2*/], false, true, false);
		set_vehicle_lights(Local_53[0 /*2*/], 1);
		set_vehicle_radio_enabled(Local_53[0 /*2*/], true);
		set_can_climb_on_entity(Local_53[0 /*2*/], false);
	}
	if (!func_107(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = create_vehicle(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, true, true, false);
		set_vehicle_is_considered_by_player(Local_53[2 /*2*/], false);
		set_vehicle_colour_combination(Local_53[2 /*2*/], 0);
		set_vehicle_tyres_can_burst(Local_53[2 /*2*/], false);
		set_vehicle_has_strong_axles(Local_53[2 /*2*/], true);
	}
	if (!func_107(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = create_vehicle(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, true, true, false);
		set_vehicle_has_strong_axles(Local_53[1 /*2*/], true);
	}
	attach_vehicle_to_trailer(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	set_trailer_legs_raised(Local_53[1 /*2*/]);
	attach_vehicle_on_to_trailer(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!does_entity_exist(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = create_object(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, true, true, false);
		attach_entity_to_entity(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (!does_entity_exist(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = create_object(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
		attach_entity_to_entity(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (func_312())
	{
		func_298(0, -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
	}
}

void func_298(int iParam0, int iParam1, int iParam2)
{
	if (func_300() && func_312())
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
		func_299(0);
	}
}

void func_299(int iParam0)
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

int func_300()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

void func_301()
{
	if (!func_107(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = create_vehicle(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, true, true, false);
		set_vehicle_can_be_visibly_damaged(Local_53[0 /*2*/], false);
		set_vehicle_engine_on(Local_53[0 /*2*/], false, true, false);
		set_vehicle_lights(Local_53[0 /*2*/], 1);
		set_vehicle_radio_enabled(Local_53[0 /*2*/], true);
		set_can_climb_on_entity(Local_53[0 /*2*/], false);
	}
	if (!func_107(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = create_vehicle(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, true, true, false);
		set_vehicle_colour_combination(Local_53[2 /*2*/], 0);
		set_vehicle_tyres_can_burst(Local_53[2 /*2*/], false);
		set_vehicle_has_strong_axles(Local_53[2 /*2*/], true);
	}
	if (!func_107(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = create_vehicle(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, true, true, false);
		set_vehicle_can_be_visibly_damaged(Local_53[1 /*2*/], false);
		set_vehicle_has_strong_axles(Local_53[1 /*2*/], true);
	}
	attach_vehicle_to_trailer(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	set_trailer_legs_raised(Local_53[1 /*2*/]);
	attach_vehicle_on_to_trailer(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!does_entity_exist(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = create_object(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, true, true, false);
		attach_entity_to_entity(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (!does_entity_exist(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = create_object(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
		attach_entity_to_entity(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	while (!func_302(&(Local_54[3 /*10*/]), 32, Local_53[2 /*2*/], 0, 1))
	{
		wait(0);
	}
	if (func_312())
	{
		func_298(Local_53[2 /*2*/], -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
		set_ped_into_vehicle(player_ped_id(), Local_53[2 /*2*/], -1);
	}
	set_ped_relationship_group_hash(Local_54[3 /*10*/], iLocal_259);
	clear_area(get_entity_coords(player_ped_id(), true), 100f, true, false, false, false);
	iLocal_308 = 3;
	iLocal_307 = 0;
}

int func_302(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_26(iParam1))
	{
		iVar0 = func_304(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			if (does_entity_exist(iParam2) && is_vehicle_driveable(iParam2, false))
			{
				*iParam0 = create_ped_inside_vehicle(iParam2, 26, iVar0, iParam3, false, false);
				set_ped_default_component_variation(*iParam0);
				func_303(*iParam0, iParam1);
				if (bParam4)
				{
					set_model_as_no_longer_needed(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_303(var uParam0, int iParam1)
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

int func_304(int iParam0)
{
	if (!func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_305()
{
	if (!does_entity_exist(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = create_vehicle(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, true, true, false);
		set_vehicle_radio_enabled(Local_53[0 /*2*/], true);
	}
	if (func_312())
	{
		func_298(Local_53[0 /*2*/], -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
		set_ped_into_vehicle(player_ped_id(), Local_53[0 /*2*/], -1);
	}
	clear_area(get_entity_coords(player_ped_id(), true), 100f, true, false, false, false);
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_306()
{
	if (!does_entity_exist(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = create_vehicle(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, true, true, false);
		func_307(Local_53[0 /*2*/], 0);
		freeze_entity_position(Local_53[0 /*2*/], true);
		set_entity_load_collision_flag(Local_53[0 /*2*/], true, 1);
		_set_entity_cleanup_by_engine(Local_53[0 /*2*/], false);
		set_vehicle_radio_enabled(Local_53[0 /*2*/], true);
	}
	if (!does_entity_exist(Local_54[4 /*10*/]))
	{
		Local_54[4 /*10*/] = create_ped(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, true, true);
		task_play_anim(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
		set_ped_flee_attributes(Local_54[4 /*10*/], 512, false);
		set_ped_combat_attributes(Local_54[4 /*10*/], 17, true);
		set_ped_relationship_group_hash(Local_54[4 /*10*/], iLocal_260);
		set_blocking_of_non_temporary_events(Local_54[4 /*10*/], true);
		set_ped_visual_field_center_angle(Local_54[4 /*10*/], 45f);
		set_ped_visual_field_max_angle(Local_54[4 /*10*/], 50f);
		set_ped_visual_field_min_angle(Local_54[4 /*10*/], -50f);
		stop_ped_speaking(Local_54[4 /*10*/], true);
	}
	if (!does_entity_exist(Local_57[0 /*2*/]))
	{
		Local_57[0 /*2*/] = create_object(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, true, true, false);
		freeze_entity_position(Local_57[0 /*2*/], true);
	}
	if (!does_entity_exist(Local_57[1 /*2*/]))
	{
		Local_57[1 /*2*/] = create_object(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, true, true, false);
		freeze_entity_position(Local_57[1 /*2*/], true);
	}
	if (!does_entity_exist(Local_57[2 /*2*/]))
	{
		Local_57[2 /*2*/] = create_object(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, true, true, false);
		set_entity_rotation(Local_57[2 /*2*/], 0f, 0f, 90f, 2, true);
		freeze_entity_position(Local_57[2 /*2*/], true);
	}
	if (!does_entity_exist(Local_57[3 /*2*/]))
	{
		Local_57[3 /*2*/] = create_object(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, true, true, false);
	}
	iLocal_248 = 0;
	request_waypoint_recording("docksprep1");
	while (!get_is_waypoint_recording_loaded("docksprep1"))
	{
		wait(0);
	}
	clear_area(get_entity_coords(player_ped_id(), true), 100f, true, false, false, false);
	if (func_312())
	{
		func_298(0, -1, 1);
	}
	else
	{
		freeze_entity_position(player_ped_id(), false);
	}
	iLocal_268 = get_game_timer();
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_307(var uParam0, int iParam1)
{
	Global_100441.f_22[iParam1] = uParam0;
}

int func_308(var uParam0)
{
	if (func_309(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_309(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1007)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (has_model_loaded((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						set_model_as_no_longer_needed((uParam0[iVar1 /*5*/])->f_4);
						func_90(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (has_anim_dict_loaded(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						remove_anim_dict(uParam0->f_273[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (get_is_waypoint_recording_loaded(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						remove_waypoint_recording(uParam0->f_374[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (has_scaleform_movie_loaded(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						set_scaleform_movie_as_no_longer_needed(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_90(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (has_vehicle_recording_been_loaded(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						remove_vehicle_recording(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_90(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (has_weapon_asset_loaded(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						remove_weapon_asset(uParam0->f_202[iVar1 /*7*/].f_4);
						func_90(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (has_vehicle_asset_loaded(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						remove_vehicle_asset(uParam0->f_151[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (request_script_audio_bank(uParam0->f_737[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						release_named_script_audio_bank(uParam0->f_737[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (is_interior_ready(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unpin_interior(uParam0->f_763[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!is_string_null_or_empty(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = query_movie_mesh_set_state(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_90(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								release_movie_mesh_set(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (is_interior_ready(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = load_movie_mesh_set(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = get_game_timer();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							release_movie_mesh_set(uParam0->f_687[iVar1 /*7*/].f_5);
							func_90(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_90(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_904[iVar1 /*5*/])
			{
				if (!uParam0->f_904[iVar1 /*5*/].f_1)
				{
					if (assisted_movement_is_route_loaded(uParam0->f_904[iVar1 /*5*/].f_4))
					{
						uParam0->f_904[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_904[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_904[iVar1 /*5*/].f_1)
					{
						assisted_movement_remove_route(uParam0->f_904[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_904[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_955[iVar1 /*5*/])
			{
				if (!uParam0->f_955[iVar1 /*5*/].f_1)
				{
					if (prepare_alarm(uParam0->f_955[iVar1 /*5*/].f_4))
					{
						uParam0->f_955[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_955[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_955[iVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_955[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (has_additional_text_loaded(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						clear_additional_text(iVar1, true);
						func_90(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_885)
		{
			if (!uParam0->f_885.f_1)
			{
				if (has_ptfx_asset_loaded())
				{
					uParam0->f_885.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_885.f_2)
			{
				if (uParam0->f_885.f_1)
				{
					remove_ptfx_asset();
					func_90(&(uParam0->f_885));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_889)
		{
			if (!uParam0->f_889.f_1)
			{
				if (rope_are_textures_loaded())
				{
					uParam0->f_889.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_889.f_2)
			{
				if (uParam0->f_889.f_1)
				{
					rope_unload_textures();
					func_90(&(uParam0->f_889));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_893 && is_new_load_scene_active())
		{
			if (!uParam0->f_893.f_1)
			{
				if (is_new_load_scene_loaded())
				{
					uParam0->f_893.f_1 = 1;
					if (uParam0->f_1008)
					{
						freeze_entity_position(player_ped_id(), false);
						func_202(uParam0);
						uParam0->f_1008 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_893.f_2)
			{
				new_load_scene_stop();
				func_90(&(uParam0->f_893));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_981[iVar1 /*5*/])
			{
				if (!uParam0->f_981[iVar1 /*5*/].f_1)
				{
					if (has_streamed_texture_dict_loaded(uParam0->f_981[iVar1 /*5*/].f_4))
					{
						uParam0->f_981[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_981[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_981[iVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_981[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_1007 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_310(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (func_207(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_893)
	{
		if (func_95(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam2)
		{
			uParam0->f_893.f_2 = 0;
			if (!uParam0->f_893.f_1)
			{
				uParam0->f_1007 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	new_load_scene_start_sphere(Param1, fParam2, iParam3);
	uParam0->f_893 = 1;
	uParam0->f_893.f_3 = get_game_timer();
	uParam0->f_893.f_4 = { Param1 };
	uParam0->f_893.f_7 = { 0f, 0f, 0f };
	uParam0->f_893.f_10 = fParam2;
	uParam0->f_1007 = 1;
	return 1;
}

void func_311(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		
		case 1:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		
		case 2:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		
		case 3:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}

bool func_312()
{
	return BitTest(Global_100441.f_20, 13);
}

void func_313(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_904[iVar0 /*5*/])
		{
			uParam0->f_904[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_955[iVar0 /*5*/])
		{
			uParam0->f_955[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_893)
	{
		uParam0->f_893.f_2 = 1;
	}
	if (uParam0->f_885)
	{
		uParam0->f_885.f_2 = 1;
	}
	if (uParam0->f_889)
	{
		uParam0->f_889.f_2 = 1;
	}
}

void func_314()
{
	if (is_cutscene_active())
	{
		stop_cutscene_immediately();
		remove_cutscene();
		while (is_cutscene_active())
		{
			wait(0);
		}
	}
	func_208();
	if (func_107(Local_53[0 /*2*/]))
	{
		set_cgoffset(Local_53[0 /*2*/], Local_56);
	}
	Global_96938.f_357 = 0;
	if (iLocal_249)
	{
		delete_rope(&iLocal_290);
		iLocal_249 = 0;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		func_322(&(Local_54[iLocal_247 /*10*/].f_2));
		if (does_entity_exist(Local_54[iLocal_247 /*10*/]) && !is_ped_injured(Local_54[iLocal_247 /*10*/]))
		{
			if (is_ped_in_any_vehicle(Local_54[iLocal_247 /*10*/], false))
			{
				set_ped_coords_no_gang(Local_54[iLocal_247 /*10*/], get_entity_coords(get_vehicle_ped_is_in(Local_54[iLocal_247 /*10*/], false), true) + Vector(0f, -2f, 0f));
			}
			func_321(&(Local_54[iLocal_247 /*10*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (does_entity_exist(Local_53[iLocal_247 /*2*/]))
		{
			func_320(Local_53[iLocal_247 /*2*/]);
			func_317(&(Local_53[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (does_entity_exist(Local_57[iLocal_247 /*2*/]))
		{
			func_316(&(Local_57[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	if (does_particle_fx_looped_exist(iLocal_245))
	{
		stop_particle_fx_looped(iLocal_245, false);
	}
	func_289();
	func_42(&Local_58, 1, 0);
	func_315(72);
	func_197(1, 0, 0, 3000, 0);
	set_wanted_level_multiplier(1f);
	set_player_control(player_id(), true, 0);
	if (!is_ped_injured(player_ped_id()))
	{
		clear_player_wanted_level(player_id());
		clear_ped_tasks(player_ped_id());
		clear_area(get_entity_coords(player_ped_id(), true), 300f, true, false, false, false);
	}
	clear_area(1219.186f, -2977.9f, 4.8653f, 300f, true, false, false, false);
	iLocal_268 = get_game_timer();
	iLocal_251 = 0;
	iLocal_269 = 0;
	iLocal_264 = 0;
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_307 = 0;
	iLocal_252 = 0;
	func_216(6, 0);
	if (is_ipl_active("PO1_08_sub_waterplane"))
	{
		func_202(&uLocal_309);
		remove_ipl("PO1_08_sub_waterplane");
	}
	stop_stream();
}

void func_315(int iParam0)
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

void func_316(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, true, true);
		}
		delete_object(iParam0);
	}
}

void func_317(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, false);
		}
		if (func_319(*iParam0))
		{
			if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, true))
			{
				if (func_318(player_ped_id()))
				{
					if (is_ped_in_vehicle(player_ped_id(), *iParam0, false))
					{
						set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				delete_vehicle(iParam0);
			}
		}
		else
		{
			if (func_318(player_ped_id()))
			{
				if (is_ped_in_vehicle(player_ped_id(), *iParam0, false))
				{
					set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			delete_vehicle(iParam0);
		}
	}
}

int func_318(int iParam0)
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

int func_319(int iParam0)
{
	if (func_318(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, false))
		{
			iVar0 = get_ped_in_vehicle_seat(iParam0, -1, false);
			if (does_entity_exist(iVar0))
			{
				if (!is_ped_injured(iVar0))
				{
					clear_ped_tasks_immediately(iVar0);
				}
				else
				{
					delete_ped(&iVar0);
				}
			}
			iVar2 = get_vehicle_max_number_of_passengers(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!is_vehicle_seat_free(iParam0, iVar1, false))
				{
					iVar0 = get_ped_in_vehicle_seat(iParam0, iVar1, false);
					if (does_entity_exist(iVar0))
					{
						if (!is_ped_injured(iVar0))
						{
							clear_ped_tasks_immediately(iVar0);
						}
						else
						{
							delete_ped(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_321(int* iParam0)
{
	if (does_entity_exist(*iParam0))
	{
		if (!is_entity_dead(*iParam0, false))
		{
			set_entity_load_collision_flag(*iParam0, false, 1);
		}
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, false);
		}
		delete_ped(iParam0);
	}
}

void func_322(int* iParam0)
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

void func_323()
{
	switch (iLocal_1976)
	{
		case 1:
			iLocal_1976 = 2;
			iLocal_1978 = -1;
			break;
		
		case 2:
			iLocal_1976 = 3;
			iLocal_1978 = 0;
			iLocal_1977 = iLocal_1979;
			break;
		
		case 3:
			iLocal_1979 = -1;
			iLocal_1976 = 0;
			break;
		
		case 0:
			if ((get_game_timer() - iLocal_1980) > 2500)
			{
				iLocal_1980 = get_game_timer();
			}
			break;
	}
}

void func_324(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_cutscene_active())
	{
		if (can_request_assets_for_cutscene_entity())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!is_string_null_or_empty(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] != -1 && (uParam0[iVar0 /*82*/])->f_17[iVar1] != -1)
						{
							set_cutscene_ped_component_variation(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_17.f_13[iVar1], (uParam0[iVar0 /*82*/])->f_17[iVar1], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
							(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
						}
						iVar1++;
					}
					iVar2 = 0;
					while (iVar2 < 9)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] != -1 && (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] != -1)
						{
							set_cutscene_ped_prop_variation(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_17.f_39[iVar2], (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] = -1;
							(uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] = -1;
						}
						iVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_16 = 0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_325(uParam0);
	}
}

void func_325(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!is_string_null_or_empty(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_16 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_326(var uParam0)
{
	func_309(uParam0);
}

void func_327()
{
	struct<3> Var0;
	var uVar1;
	
	if (func_300() || func_7(0))
	{
		if (func_300())
		{
			iLocal_1982 = func_331();
			if (Global_94618)
			{
				iLocal_1982++;
			}
			if (iLocal_1982 >= 3)
			{
				iLocal_1982 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1982 = 0;
		}
		if (func_300())
		{
			func_311(iLocal_1982, &Var0, &uVar1);
			func_330(Var0, uVar1, 1, 0);
		}
		settimera(0);
		iLocal_1981 = 1;
	}
	else
	{
		func_108(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_1977 = 0;
		func_273(0);
	}
	iLocal_1978 = 0;
	if (is_player_playing(player_id()))
	{
		set_player_control(player_id(), true, 0);
	}
	set_weather_type_persist("EXTRASUNNY");
	set_auto_give_scuba_gear_when_exit_vehicle(player_id(), false);
	remove_relationship_group(iLocal_259);
	remove_relationship_group(iLocal_260);
	add_relationship_group("REL_BUDDY", &iLocal_259);
	add_relationship_group("rel_dock", &iLocal_260);
	set_relationship_between_groups(5, iLocal_260, joaat("player"));
	set_relationship_between_groups(1, joaat("player"), iLocal_259);
	set_relationship_between_groups(1, iLocal_259, joaat("player"));
	set_relationship_between_groups(1, iLocal_260, iLocal_260);
	if (!does_entity_exist(Local_53[0 /*2*/]))
	{
		if (does_entity_exist(Global_96938[0]))
		{
			set_entity_as_mission_entity(Global_96938[0], true, true);
			Local_53[0 /*2*/] = Global_96938[0];
			func_307(Local_53[0 /*2*/], 0);
			set_vehicle_radio_enabled(Local_53[0 /*2*/], true);
		}
	}
	if (!does_entity_exist(Local_54[4 /*10*/]))
	{
		if (does_entity_exist(Global_96938.f_9[0]))
		{
			set_entity_as_mission_entity(Global_96938.f_9[0], true, true);
			Local_54[4 /*10*/] = Global_96938.f_9[0];
			set_ped_relationship_group_hash(Local_54[4 /*10*/], iLocal_260);
			set_ped_config_flag(Local_54[4 /*10*/], 208, true);
			set_ped_visual_field_center_angle(Local_54[4 /*10*/], 45f);
			set_ped_visual_field_max_angle(Local_54[4 /*10*/], 50f);
			set_ped_visual_field_min_angle(Local_54[4 /*10*/], -50f);
		}
	}
	if (!does_entity_exist(Local_57[0 /*2*/]))
	{
		if (does_entity_exist(Global_96938.f_28[0]))
		{
			set_entity_as_mission_entity(Global_96938.f_28[0], true, true);
			Local_57[0 /*2*/] = Global_96938.f_28[0];
		}
	}
	if (!does_entity_exist(Local_57[1 /*2*/]))
	{
		if (does_entity_exist(Global_96938.f_28[1]))
		{
			set_entity_as_mission_entity(Global_96938.f_28[1], true, true);
			Local_57[1 /*2*/] = Global_96938.f_28[1];
		}
	}
	if (!does_entity_exist(Local_57[2 /*2*/]))
	{
		if (does_entity_exist(Global_96938.f_28[2]))
		{
			set_entity_as_mission_entity(Global_96938.f_28[2], true, true);
			Local_57[2 /*2*/] = Global_96938.f_28[2];
		}
	}
	if (!does_entity_exist(Local_57[3 /*2*/]))
	{
		if (does_entity_exist(Global_96938.f_28[3]))
		{
			set_entity_as_mission_entity(Global_96938.f_28[3], true, true);
			Local_57[3 /*2*/] = Global_96938.f_28[3];
		}
	}
	if (Global_96938.f_357)
	{
		if (does_rope_exist(&(Global_96938.f_37[0])))
		{
			rope_change_script_owner(Global_96938.f_37[0], true, true);
			Local_55[0 /*5*/] = Global_96938.f_37[0];
			Global_96938.f_37[0] = 0;
		}
		if (does_rope_exist(&(Global_96938.f_37[1])))
		{
			rope_change_script_owner(Global_96938.f_37[1], true, true);
			Local_55[1 /*5*/] = Global_96938.f_37[1];
			Global_96938.f_37[1] = 0;
		}
		if (does_rope_exist(&(Global_96938.f_37[2])))
		{
			rope_change_script_owner(Global_96938.f_37[2], true, true);
			Local_55[2 /*5*/] = Global_96938.f_37[2];
			Global_96938.f_37[2] = 0;
		}
		if (does_rope_exist(&(Global_96938.f_37[3])))
		{
			rope_change_script_owner(Global_96938.f_37[3], true, true);
			Local_55[3 /*5*/] = Global_96938.f_37[3];
			Global_96938.f_37[3] = 0;
		}
		iLocal_248 = 1;
	}
	else
	{
		iLocal_248 = 0;
	}
	request_additional_text("DOCKP1", 0);
	while (!has_additional_text_loaded(0))
	{
		wait(0);
	}
	if (func_107(player_ped_id()))
	{
		func_224(&uLocal_78, 0, player_ped_id(), "TREVOR", 0, 1);
	}
	func_329(1);
	set_max_wanted_level(2);
	set_wanted_level_multiplier(0.5f);
	func_328(72);
}

void func_328(int iParam0)
{
	Global_96296 = 0;
	switch (iParam0)
	{
		case 72:
			func_266(2);
			func_266(4);
			break;
		
		case 73:
			func_266(0);
			func_266(1);
			func_266(7);
			break;
		
		case 92:
			func_266(10);
			func_266(9);
			func_266(13);
			func_266(6);
			break;
		
		case 68:
			func_266(11);
			break;
		
		case 78:
			func_266(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_266(3);
			break;
		
		default:
			break;
	}
}

void func_329(bool bParam0)
{
	if (bParam0)
	{
		Global_21661 = 1;
	}
	else
	{
		Global_21661 = 0;
	}
}

void func_330(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (func_300())
	{
		set_this_script_can_be_paused(false);
		clear_bit(&(Global_100441.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = uParam1;
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
		func_299(1);
	}
}

int func_331()
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

void func_332()
{
	if (is_cutscene_active())
	{
		stop_cutscene_immediately();
		remove_cutscene();
	}
	if (func_107(player_ped_id()))
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			if (is_ped_in_vehicle(player_ped_id(), Local_53[0 /*2*/], false))
			{
				set_ped_coords_no_gang(player_ped_id(), get_entity_coords(Local_53[0 /*2*/], true) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_208();
	if (func_107(Local_53[0 /*2*/]))
	{
		set_cgoffset(Local_53[0 /*2*/], Local_56);
	}
	Global_96938.f_357 = 0;
	if (iLocal_249)
	{
		delete_rope(&iLocal_290);
		iLocal_249 = 0;
	}
	if (does_particle_fx_looped_exist(iLocal_245))
	{
		stop_particle_fx_looped(iLocal_245, false);
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (func_107(Local_54[iLocal_247 /*10*/]))
		{
			func_322(&(Local_54[iLocal_247 /*10*/].f_2));
			if (does_blip_exist(Local_54[iLocal_247 /*10*/].f_1))
			{
				remove_blip(&(Local_54[iLocal_247 /*10*/].f_1));
			}
			if (is_ped_in_group(Local_54[iLocal_247 /*10*/]))
			{
				remove_ped_from_group(Local_54[iLocal_247 /*10*/]);
			}
			if (Local_54[iLocal_247 /*10*/] != player_ped_id())
			{
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (does_blip_exist(Local_53[iLocal_247 /*2*/].f_1))
		{
			remove_blip(&(Local_53[iLocal_247 /*2*/].f_1));
		}
		if (func_107(Local_53[iLocal_247 /*2*/]))
		{
			if (iLocal_247 != 0)
			{
				func_294(&(Local_53[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	func_334(0);
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (does_entity_exist(Local_57[iLocal_247 /*2*/]))
		{
			if (Local_57[iLocal_247 /*2*/] == Local_57[4 /*2*/] || Local_57[iLocal_247 /*2*/] == Local_57[5 /*2*/])
			{
				func_91(&(Local_57[iLocal_247 /*2*/]), 1);
			}
			else
			{
				func_316(&(Local_57[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	if (!is_ped_injured(player_ped_id()))
	{
		set_player_control(player_id(), true, 0);
	}
	set_auto_give_scuba_gear_when_exit_vehicle(player_id(), true);
	clear_weather_type_persist();
	set_wanted_level_multiplier(1f);
	set_max_wanted_level(5);
	display_radar(true);
	display_hud(true);
	func_329(0);
	func_217(&Local_58, 0);
	func_333();
	if (is_ipl_active("PO1_08_sub_waterplane"))
	{
		remove_ipl("PO1_08_sub_waterplane");
	}
	terminate_this_thread();
}

void func_333()
{
	Global_96296 = 0;
}

void func_334(bool bParam0)
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

void func_335()
{
	int iVar0;
	
	if (has_script_loaded("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_7(0))
	{
		if (!func_336())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_100(iVar0))
				{
					return;
				}
				set_bit(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_105();
		}
	}
}

int func_336()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_337()
{
	func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

