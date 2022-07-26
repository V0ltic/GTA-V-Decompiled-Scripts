#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_5 = { 0, 0, 0 } ;
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (has_force_cleanup_occurred(2))
	{
		func_4();
	}
	if (does_entity_exist(iScriptParam_6))
	{
		freeze_entity_position(iScriptParam_6, true);
		Local_4 = { get_entity_coords(iScriptParam_6, true) };
		Local_5 = { get_entity_rotation(iScriptParam_6, 2) };
	}
	while (true)
	{
		wait(0);
		if (does_entity_exist(iScriptParam_6))
		{
			if (is_object_within_brain_activation_range(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (does_entity_have_drawable(iScriptParam_6))
						{
							request_model(joaat("p_abat_roller_1_col"));
							if (has_model_loaded(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = create_object(joaat("p_abat_roller_1_col"), Local_4, true, true, false);
									set_entity_rotation(iLocal_3, Local_5, 2, true);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (does_entity_have_drawable(iScriptParam_6))
						{
							if (_get_number_of_references_of_script_with_name_hash(joaat("michael2")) > 0)
							{
								request_anim_dict("map_objects");
								if (has_anim_dict_loaded("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (does_entity_have_drawable(iScriptParam_6))
						{
							if (_get_number_of_references_of_script_with_name_hash(joaat("michael2")) > 0)
							{
								if (Global_96872)
								{
									if (has_anim_dict_loaded("map_objects"))
									{
										play_entity_anim(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, false, true, false, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (does_entity_exist(iLocal_3))
						{
							Var1 = { get_entity_coords(iLocal_3, true) };
							if (!func_2(Var1, Var0, 0.1f, 0))
							{
								Var2 = { Var0 - Var1 };
								set_entity_coords(iLocal_3, Var1 + func_1(Var2) * FtoV(get_frame_time()) * Vector(fVar3, fVar3, fVar3), true, false, false, true);
							}
							else
							{
								Global_96873 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(struct<3> Param0)
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

int func_2(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

bool func_3(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_4()
{
	if (does_entity_exist(iLocal_3))
	{
		delete_object(&iLocal_3);
	}
	set_model_as_no_longer_needed(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	terminate_this_thread();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

