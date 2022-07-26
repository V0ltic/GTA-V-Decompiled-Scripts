void __EntryFunction__()
{
	network_set_script_is_safe_for_network_game();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	request_script(sParam0);
	while (!has_script_loaded(sParam0))
	{
		wait(0);
		request_script(sParam0);
	}
	start_new_script(sParam0, iParam1);
}

