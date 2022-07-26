#region Local Var
	int iLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	int iLocal_2 = 0;
	float fLocal_3 = 0f;
	bool bLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	bLocal_4 = true;
	set_mission_flag(true);
	if (has_force_cleanup_occurred(3))
	{
		func_1();
	}
	set_random_trains(false);
	delete_all_trains();
	if (!is_ped_injured(player_ped_id()))
	{
		set_entity_coords(player_ped_id(), 626.68f, 6442.31f, 30.88f, true, false, false, true);
		set_entity_heading(player_ped_id(), -177f);
		set_gameplay_cam_relative_heading(0f);
	}
	request_model(joaat("freight"));
	request_model(joaat("freightcar"));
	request_model(joaat("freightgrain"));
	request_model(joaat("freightcont1"));
	request_model(joaat("freightcont2"));
	request_model(joaat("tankercar"));
	request_model(joaat("metrotrain"));
	while ((((((!has_model_loaded(joaat("freight")) || !has_model_loaded(joaat("freightcar"))) || !has_model_loaded(joaat("freightgrain"))) || !has_model_loaded(joaat("freightcont1"))) || !has_model_loaded(joaat("freightcont2"))) || !has_model_loaded(joaat("tankercar"))) || !has_model_loaded(joaat("metrotrain")))
	{
		wait(0);
	}
	while (true)
	{
		wait(0);
		if (!is_ped_injured(player_ped_id()))
		{
			if (iLocal_5)
			{
				if (does_entity_exist(iLocal_0))
				{
					delete_mission_train(&iLocal_0);
				}
				iLocal_0 = create_mission_train(iLocal_2, Local_1, bLocal_4, 0, 0);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				Local_1 = { get_final_rendered_cam_coord() };
				iLocal_7 = 0;
			}
			if (is_vehicle_driveable(iLocal_0, false) && !is_entity_dead(iLocal_0, false))
			{
				set_train_speed(iLocal_0, fLocal_3);
				set_train_cruise_speed(iLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	set_random_trains(true);
	terminate_this_thread();
}

