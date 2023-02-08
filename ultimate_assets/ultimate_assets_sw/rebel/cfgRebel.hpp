	class ultimate_assets_sw_ifrit_rebel: O_MRAP_02_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="IFV (Rebel)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\military\rebel_ifrit_1_co.paa","ultimate_assets_sw\rebel\textures\military\rebel_ifrit_2_co.paa",""};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Ifrit_Rebel : ultimate_assets_sw_ifrit_rebel {};

	class ultimate_assets_sw_ifrit_hmg_rebel: O_MRAP_02_hmg_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG IFV (Rebel)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\military\rebel_ifrit_1_co.paa","ultimate_assets_sw\rebel\textures\military\rebel_ifrit_2_co.paa","ultimate_assets_sw\rebel\textures\military\rebel_ifrit_turret_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Ifrit_Rebel_HMG : ultimate_assets_sw_ifrit_hmg_rebel {};
	
	// Ifrit V2
	
	class ultimate_assets_sw_ifrit_rebel_v2: O_MRAP_02_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="IFV (Rebel V2)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\military\rebel_v2_ifrit_1_co.paa","ultimate_assets_sw\rebel\textures\military\rebel_v2_ifrit_2_co.paa",""};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Ifrit_V2_Rebel : ultimate_assets_sw_ifrit_rebel_v2 {};

	class ultimate_assets_sw_ifrit_hmg_rebel_v2: O_MRAP_02_hmg_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG IFV (Rebel V2)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\military\rebel_v2_ifrit_1_co.paa","ultimate_assets_sw\rebel\textures\military\rebel_v2_ifrit_2_co.paa","ultimate_assets_sw\rebel\textures\military\rebel_v2_ifrit_turret_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Ifrit_V2_Rebel_HMG : ultimate_assets_sw_ifrit_hmg_rebel_v2 {};
	class CW_Ifrit_V2_Rebel_AT : ultimate_assets_sw_ifrit_hmg_rebel_v2 {}; // used to exist, isn't needed anymore. just being safe

	class ultimate_assets_sw_offroad_rebel: I_G_Offroad_01_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="Light IFV (Rebel)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\civ\rebel_offroad_co.paa","ultimate_assets_sw\rebel\textures\civ\rebel_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Offroad_Rebel : ultimate_assets_sw_offroad_rebel {};
	
	class ultimate_assets_sw_offroad_hmg_rebel: I_G_Offroad_01_armed_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG Light IFV (Rebel)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\civ\rebel_offroad_co.paa","ultimate_assets_sw\rebel\textures\civ\rebel_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Offroad_Rebel_HMG : ultimate_assets_sw_offroad_hmg_rebel {};

	class ultimate_assets_sw_offroad_at_rebel: I_G_Offroad_01_AT_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="AT Light IFV (Rebel)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\civ\rebel_offroad_co.paa","ultimate_assets_sw\rebel\textures\civ\rebel_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_Offroad_Rebel_AT : ultimate_assets_sw_offroad_at_rebel {};

	class ultimate_assets_sw_offroad_rebel_v2: I_G_Offroad_01_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="Light IFV (Rebel V2)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\civ\rebel_v2_offroad_co.paa","ultimate_assets_sw\rebel\textures\civ\rebel_v2_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_V2_Offroad_Rebel : ultimate_assets_sw_offroad_rebel_v2 {};
	
	class ultimate_assets_sw_offroad_hmg_rebel_v2: I_G_Offroad_01_armed_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG Light IFV (Rebel V2)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\civ\rebel_v2_offroad_co.paa","ultimate_assets_sw\rebel\textures\civ\rebel_v2_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_V2_Offroad_Rebel_HMG : ultimate_assets_sw_offroad_hmg_rebel_v2 {};

	class ultimate_assets_sw_offroad_at_rebel_v2: I_G_Offroad_01_AT_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="AT Light IFV (Rebel V2)";
		crew = "JMSLLTE_scum_path_trooper";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\rebel\textures\civ\rebel_v2_offroad_co.paa","ultimate_assets_sw\rebel\textures\civ\rebel_v2_offroad_co.paa"};
		typicalCargo[] = {""};
		availableForSupportTypes[] = {"Transport"};
	};
	class CW_V2_Offroad_Rebel_AT : ultimate_assets_sw_offroad_at_rebel_v2 {};