	class ultimate_assets_sw_ifrit_imperial: O_MRAP_02_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="IFV (Imperial)";
		crew = "JMSLLTE_emp_storm_tank";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\imperial\textures\military\imperial_ifrit_1_co.paa","ultimate_assets_sw\imperial\textures\military\imperial_ifrit_2_co.paa",""};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Ifrit_Empire : ultimate_assets_sw_ifrit_imperial {};

	class ultimate_assets_sw_ifrit_hmg_imperial: O_MRAP_02_hmg_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG IFV (Imperial)";
		crew = "JMSLLTE_emp_storm_tank";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\imperial\textures\military\imperial_ifrit_1_co.paa","ultimate_assets_sw\imperial\textures\military\imperial_ifrit_2_co.paa","ultimate_assets_sw\imperial\textures\military\imperial_ifrit_turret_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Ifrit_Imperial_HMG : ultimate_assets_sw_ifrit_hmg_imperial {};
	class CW_Ifrit_Imperial_AT : ultimate_assets_sw_ifrit_hmg_imperial {}; // not needed anymore, just being safe
	
	class ultimate_assets_sw_offroad_hmg_imperial: I_G_Offroad_01_armed_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG Light IFV (Imperial)";
		crew = "JMSLLTE_emp_storm_scoutL";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\imperial\textures\civ\imperial_offroad_co.paa","ultimate_assets_sw\imperial\textures\civ\imperial_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Offroad_Imperial_HMG : ultimate_assets_sw_offroad_hmg_imperial {};

	class ultimate_assets_sw_offroad_at_imperial: I_G_Offroad_01_AT_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="AT Light IFV (Imperial)";
		crew = "JMSLLTE_emp_storm_scoutL";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\imperial\textures\civ\imperial_offroad_co.paa","ultimate_assets_sw\imperial\textures\civ\imperial_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Offroad_Imperial_AT : ultimate_assets_sw_offroad_at_imperial {};

	class ultimate_assets_sw_offroad_imperial: I_G_Offroad_01_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="Light IFV (Imperial)";
		crew = "JMSLLTE_emp_storm_scoutL";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\imperial\textures\civ\imperial_offroad_co.paa","ultimate_assets_sw\imperial\textures\civ\imperial_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Offroad_Imperial : ultimate_assets_sw_offroad_imperial {};