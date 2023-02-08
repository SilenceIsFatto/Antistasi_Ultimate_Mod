	class ultimate_assets_sw_ifrit_cis: O_MRAP_02_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="IFV (CIS)";
		crew = "lsd_cis_oomCrew_standard";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\cis\textures\military\cis_ifrit_1_co.paa","ultimate_assets_sw\cis\textures\military\cis_ifrit_2_co.paa",""};
		typicalCargo[] = {"lsd_cis_oomCrew_standard"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Ifrit_CIS : ultimate_assets_sw_ifrit_cis {};

	class ultimate_assets_sw_ifrit_hmg_cis: O_MRAP_02_hmg_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG IFV (CIS)";
		crew = "lsd_cis_oomCrew_standard";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\cis\textures\military\cis_ifrit_1_co.paa","ultimate_assets_sw\cis\textures\military\cis_ifrit_2_co.paa","ultimate_assets_sw\cis\textures\military\cis_ifrit_turret_co.paa"};
		typicalCargo[] = {"lsd_cis_oomCrew_standard"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Ifrit_CIS_HMG : ultimate_assets_sw_ifrit_hmg_cis {};

	class ultimate_assets_sw_offroad_cis: I_G_Offroad_01_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="Light IFV (CIS)";
		crew = "lsd_cis_oomCrew_standard";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\cis\textures\civ\cis_offroad_co.paa","ultimate_assets_sw\cis\textures\civ\cis_offroad_co.paa"};
		typicalCargo[] = {"lsd_cis_oomCrew_standard"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Offroad_CIS : ultimate_assets_sw_offroad_cis {};

	class ultimate_assets_sw_offroad_hmg_cis: I_G_Offroad_01_armed_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG Light IFV (CIS)";
		crew = "lsd_cis_oomCrew_standard";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\cis\textures\civ\cis_offroad_co.paa","ultimate_assets_sw\cis\textures\civ\cis_offroad_co.paa"};
		typicalCargo[] = {"lsd_cis_oomCrew_standard"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Offroad_CIS_HMG : ultimate_assets_sw_offroad_hmg_cis {};

	class ultimate_assets_sw_offroad_at_cis: I_G_Offroad_01_AT_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 0;
		faction = "LS_CIS";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="AT Light IFV (CIS)";
		crew = "lsd_cis_oomCrew_standard";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\cis\textures\civ\cis_offroad_co.paa","ultimate_assets_sw\cis\textures\civ\cis_offroad_co.paa"};
		typicalCargo[] = {"lsd_cis_oomCrew_standard"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Offroad_CIS_AT : ultimate_assets_sw_offroad_at_cis {};