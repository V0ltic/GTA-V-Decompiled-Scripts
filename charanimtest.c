void __EntryFunction__()
{
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	if (has_force_cleanup_occurred(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
	}
}

void func_1()
{
	terminate_this_thread();
}

