//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("LL_Browse_100_TCHomePage");
	truclient_step("1", "Navigate to p_url", "snapshot=Action_1.inf");
	truclient_step("2", "Wait until Liquidlogic is the UK’s... exists", "snapshot=Action_2.inf");
	lr_end_transaction("LL_Browse_100_TCHomePage",0);

	return 0;
}
