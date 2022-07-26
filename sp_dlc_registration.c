void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
	start_save_data(&Global_2883692, 1, true);
	register_int_to_save(&Global_2883692, "aFakeSavedInt");
	stop_save_data();
	set_bit(&Global_4542087, 0);
	iVar0 = 1;
	iVar1 = get_size_of_save_data(true);
	if (iVar0 != iVar1)
	{
	}
}

