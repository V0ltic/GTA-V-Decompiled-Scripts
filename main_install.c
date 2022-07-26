#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	network_set_script_is_safe_for_network_game();
	request_ipl("prologue06_int");
	request_ipl("prologue01");
	request_ipl("prologue02");
	request_ipl("prologue03");
	request_ipl("prologue04");
	request_ipl("prologue05");
	request_ipl("prologue06");
	request_ipl("prologuerd");
	request_ipl("Prologue01c");
	request_ipl("Prologue01d");
	request_ipl("Prologue01e");
	request_ipl("Prologue01f");
	request_ipl("Prologue01g");
	request_ipl("prologue01h");
	request_ipl("prologue01i");
	request_ipl("prologue01j");
	request_ipl("prologue01k");
	request_ipl("prologue01z");
	request_ipl("prologue03b");
	request_ipl("prologue04b");
	request_ipl("prologue05b");
	request_ipl("prologue06b");
	request_ipl("prologuerdb");
	request_ipl("prologue_occl");
	request_ipl("DES_ProTree_start");
	request_ipl("DES_ProTree_start_lod");
	request_ipl("prologue04_cover");
	request_ipl("prologue03_grv_fun");
	remove_ipl("prologue03_grv_dug");
	remove_ipl("prologue_grv_torch");
	set_mapdatacullbox_enabled("prologue", true);
	request_model(joaat("csb_prolsec"));
	while (!has_model_loaded(joaat("csb_prolsec")))
	{
		wait(0);
	}
	set_player_model(player_id(), joaat("csb_prolsec"));
	if (!is_entity_dead(player_ped_id(), false))
	{
		set_entity_coords(player_ped_id(), 5313.8f, -5207.2f, 83.5f, true, false, false, true);
		set_entity_heading(player_ped_id(), 169.2f);
	}
	display_radar(false);
	set_player_control(player_id(), false, 0);
	new_load_scene_start_sphere(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = get_game_timer() + 10000;
	while (!is_new_load_scene_loaded() && get_game_timer() < iVar0)
	{
		wait(0);
	}
	shutdown_loading_screen();
	start_audio_scene("MISSION_FAILED_SCENE");
	do_screen_fade_in(2500);
	new_load_scene_stop();
	request_additional_text("NG_INSTALL", 0);
	while (true)
	{
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(0);
		}
		draw_rect(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
		draw_rect(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, false);
		set_text_scale(0.5f, 0.5f);
		set_text_centre(true);
		if (timera() > 10000 && has_additional_text_loaded(0))
		{
			iLocal_0 = get_random_int_in_range(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		disable_frontend_this_frame();
		if (_has_async_install_finished())
		{
			_cleanup_async_install();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	begin_text_command_display_text(sParam2);
	end_text_command_display_text(fParam0, fParam1, iParam3);
}

