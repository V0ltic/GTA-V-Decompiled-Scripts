#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	float fLocal_3 = 0f;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (does_entity_exist(iScriptParam_8))
	{
		freeze_entity_position(iScriptParam_8, true);
		Local_2 = { get_offset_from_entity_in_world_coords(iScriptParam_8, 0f, 0f, 0f) };
		fLocal_3 = get_entity_heading(iScriptParam_8);
		set_entity_collision(iScriptParam_8, false, false);
	}
	while (true)
	{
		wait(0);
		if (does_entity_exist(iScriptParam_8))
		{
			if (is_object_within_brain_activation_range(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							set_entity_collision(iScriptParam_8, true, false);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!is_ped_injured(iLocal_1))
						{
							task_cower(iLocal_1, -1);
							set_all_random_peds_flee(player_id(), true);
							set_ped_keep_task(iLocal_1, true);
							terminate_this_thread();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!is_entity_dead(iLocal_1, false))
	{
		if (!is_entity_on_screen(iLocal_1))
		{
			delete_ped(&iLocal_1);
		}
		else
		{
			set_ped_keep_task(iLocal_1, true);
		}
	}
	terminate_this_thread();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!is_ped_injured(player_ped_id()))
	{
		if (!is_ped_injured(iLocal_1))
		{
			if (is_entity_at_entity(player_ped_id(), iLocal_1, Var0, false, true, 0))
			{
				return 1;
			}
			if (has_entity_been_damaged_by_entity(iLocal_1, player_ped_id(), true))
			{
				return 1;
			}
			if (is_entity_touching_entity(player_ped_id(), iLocal_1))
			{
				return 1;
			}
		}
		if (is_ped_shooting(player_ped_id()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!is_ped_injured(iLocal_1))
	{
		if (get_script_task_status(iLocal_1, -2017877118) == 7)
		{
			task_play_anim(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (has_entity_anim_finished(iLocal_1, sLocal_6, sLocal_4, 3))
		{
			task_play_anim(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (!iLocal_7)
		{
			if (is_entity_playing_anim(iLocal_1, sLocal_6, sLocal_4, 3))
			{
				set_entity_anim_current_time(iLocal_1, sLocal_6, sLocal_4, get_random_float_in_range(0f, 1f));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()
{
	if (is_entity_dead(iLocal_1, false))
	{
		iLocal_1 = create_ped(5, iLocal_5, Local_2.f_0, Local_2.f_1, Local_2.f_2, fLocal_3, true, true);
		set_ped_random_component_variation(iLocal_1, 0);
		set_ped_can_be_targetted(iLocal_1, false);
		set_blocking_of_non_temporary_events(iLocal_1, true);
	}
}

int func_5()
{
	request_model(iLocal_5);
	request_anim_dict(sLocal_6);
	if (has_model_loaded(iLocal_5) && has_anim_dict_loaded(sLocal_6))
	{
		return 1;
	}
	else
	{
		request_model(iLocal_5);
		request_anim_dict(sLocal_6);
	}
	return 0;
}

