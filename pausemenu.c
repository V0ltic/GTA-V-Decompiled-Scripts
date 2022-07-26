#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				wait(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	terminate_this_thread();
}

void func_1(int iParam0)
{
	if (begin_scaleform_movie_method_on_frontend("DISPLAY_DATA_SLOT"))
	{
		scaleform_movie_method_add_param_int(iParam0);
		end_scaleform_movie_method();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
	if (begin_scaleform_movie_method_on_frontend("SET_DATA_SLOT"))
	{
		scaleform_movie_method_add_param_int(iParam0);
		scaleform_movie_method_add_param_int(iParam1);
		scaleform_movie_method_add_param_int(iParam2);
		scaleform_movie_method_add_param_int(iParam3);
		scaleform_movie_method_add_param_int(0);
		scaleform_movie_method_add_param_int(0);
		if (bParam4)
		{
			scaleform_movie_method_add_param_int(1);
		}
		else
		{
			scaleform_movie_method_add_param_int(0);
		}
		func_3(sParam5);
		end_scaleform_movie_method();
	}
}

void func_3(char* sParam0)
{
	begin_text_command_scaleform_string(sParam0);
	end_text_command_scaleform_string();
}

