    class ultimate_assets_sw_ifrit_republic: O_MRAP_02_F
	{
		author = "Silence";
		_generalMacro = "ultimate_assets_sw_ifrit_republic";
		scope = 2;
		side = 1;
		faction = "LS_Gar";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="IFV (Republic)";
		crew = "SWLB_clone_assault_base_P2";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\republic\textures\military\rep_ifrit_1_co.paa","ultimate_assets_sw\republic\textures\military\rep_ifrit_2_co.paa",""};
		typicalCargo[] = {"SWLB_clone_assault_base_P2"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Ifrit : ultimate_assets_sw_ifrit_republic {};

	class ultimate_assets_sw_ifrit_hmg_republic: O_MRAP_02_hmg_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "LS_Gar";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG IFV (Republic)";
		crew = "SWLB_clone_assault_base_P2";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\republic\textures\military\rep_ifrit_1_co.paa","ultimate_assets_sw\republic\textures\military\rep_ifrit_2_co.paa","ultimate_assets_sw\republic\textures\military\rep_ifrit_turret_co.paa"};
		typicalCargo[] = {"SWLB_clone_assault_base_P2"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Ifrit_HMG : ultimate_assets_sw_ifrit_hmg_republic {};

    // Offroads

	class ultimate_assets_sw_offroad_republic: I_G_Offroad_01_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "LS_Gar";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="Light IFV (Republic)";
		crew = "SWLB_clone_assault_base_P2";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\republic\textures\civ\rep_offroad_co.paa","ultimate_assets_sw\republic\textures\civ\rep_offroad_co.paa"};
		typicalCargo[] = {"SWLB_clone_assault_base_P2"};
	};
    class CW_Offroad_Rep : ultimate_assets_sw_offroad_republic {};

	class ultimate_assets_sw_offroad_hmg_republic: I_G_Offroad_01_armed_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "LS_Gar";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG Light IFV (Republic)";
		crew = "SWLB_clone_assault_base_P2";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\republic\textures\civ\rep_offroad_co.paa","ultimate_assets_sw\republic\textures\civ\rep_offroad_co.paa"};
		typicalCargo[] = {"SWLB_clone_assault_base_P2"};
	};
    class CW_Offroad_HMG : ultimate_assets_sw_offroad_hmg_republic {};

	class ultimate_assets_sw_offroad_at_republic: I_G_Offroad_01_AT_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "LS_Gar";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="AT Light IFV (Republic)";
		crew = "SWLB_clone_assault_base_P2";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\republic\textures\civ\rep_offroad_co.paa","ultimate_assets_sw\republic\textures\civ\rep_offroad_co.paa"};
		typicalCargo[] = {"SWLB_clone_assault_base_P2"};
	};
    class CW_Offroad_AT : ultimate_assets_sw_offroad_at_republic {};

	// civ stuff, dk why it's in here but it is
	class ultimate_assets_sw_hoverbike: B_Quadbike_01_F
	{
		author = "Silence";
		_generalMacro = "ultimate_assets_sw_hoverbike";
		scope = 2;
		side = 3;
		faction = "LS_Civ";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="Hoverbike";
		crew = "ls_civ_chiss_m_polo1";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",""};
		typicalCargo[] = {"ls_civ_chiss_m_polo1"};
	};
	class CW_Quadbike : ultimate_assets_sw_hoverbike {};