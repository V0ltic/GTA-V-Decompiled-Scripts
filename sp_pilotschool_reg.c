void __EntryFunction__()
{
	start_save_data(&Global_3145728, 1, true);
	func_1();
	stop_save_data();
	set_bit(&Global_4542087, 1);
}

void func_1()
{
	register_int_to_save(&Global_3145728, "PILOT_SCHOOL_DUMMY_DATA");
}

