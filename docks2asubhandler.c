#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (has_force_cleanup_occurred(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3.f_0;
	iLocal_1 = ScriptParam_3.f_1;
	while (!BitTest(uLocal_2, 1))
	{
		if (!BitTest(uLocal_2, 0))
		{
			if (does_entity_exist(iLocal_0))
			{
				if (is_vehicle_driveable(iLocal_0, false))
				{
					set_entity_as_mission_entity(iLocal_0, false, true);
					freeze_entity_position(iLocal_0, true);
					set_entity_proofs(iLocal_0, true, true, true, true, true, false, false, false);
					if (does_entity_exist(iLocal_1))
					{
						set_entity_as_mission_entity(iLocal_1, false, true);
						freeze_entity_position(iLocal_1, true);
						set_entity_proofs(iLocal_1, true, true, true, true, true, false, false, false);
					}
					set_bit(&uLocal_2, 0);
				}
			}
		}
		else if (!is_entity_dead(player_ped_id(), false))
		{
			if (is_vehicle_driveable(iLocal_0, false))
			{
				fVar0 = vdist2(get_entity_coords(player_ped_id(), true), get_entity_coords(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					set_bit(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !is_entity_on_screen(iLocal_0))
				{
					set_bit(&uLocal_2, 1);
				}
			}
			else
			{
				set_bit(&uLocal_2, 1);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	set_vehicle_as_no_longer_needed(&iLocal_0);
	set_entity_as_no_longer_needed(&iLocal_1);
	terminate_this_thread();
}

