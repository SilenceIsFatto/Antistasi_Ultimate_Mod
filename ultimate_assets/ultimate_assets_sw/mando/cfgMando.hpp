    class ultimate_assets_sw_ifrit_mando: O_MRAP_02_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 2;
		faction = "LS_MANDALORIAN";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="IFV (Mando)";
		crew = "ls_mandalorian_assault_traditional";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\mando\textures\military\mando_ifrit_1_co.paa","ultimate_assets_sw\mando\textures\military\mando_ifrit_2_co.paa",""};
		typicalCargo[] = {"ls_mandalorian_assault_traditional"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Ifrit_Mando : ultimate_assets_sw_ifrit_mando {};

	class ultimate_assets_sw_ifrit_hmg_mando: O_MRAP_02_hmg_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 2;
		faction = "LS_MANDALORIAN";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG IFV (Mando)";
		crew = "ls_mandalorian_assault_traditional";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\mando\textures\military\mando_ifrit_1_co.paa","ultimate_assets_sw\mando\textures\military\mando_ifrit_2_co.paa", "ultimate_assets_sw\mando\textures\military\mando_ifrit_turret_co.paa"};
		typicalCargo[] = {"ls_mandalorian_assault_traditional"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Ifrit_Mando_HMG : ultimate_assets_sw_ifrit_hmg_mando {};

	class ultimate_assets_sw_offroad_mando: I_G_Offroad_01_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 2;
		faction = "LS_MANDALORIAN";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="Light IFV (Mando)";
		crew = "ls_mandalorian_assault_traditional";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\mando\textures\civ\mando_offroad_co.paa","ultimate_assets_sw\mando\textures\civ\mando_offroad_co.paa"};
		typicalCargo[] = {"ls_mandalorian_assault_traditional"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Offroad_Mando : ultimate_assets_sw_offroad_mando {};

	class ultimate_assets_sw_offroad_hmg_mando: I_G_Offroad_01_armed_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 2;
		faction = "LS_MANDALORIAN";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="HMG Light IFV (Mando)";
		crew = "ls_mandalorian_assault_traditional";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\mando\textures\civ\mando_offroad_co.paa","ultimate_assets_sw\mando\textures\civ\mando_offroad_co.paa"};
		typicalCargo[] = {"ls_mandalorian_assault_traditional"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Offroad_Mando_HMG : ultimate_assets_sw_offroad_hmg_mando {};

	class ultimate_assets_sw_offroad_at_mando: I_G_Offroad_01_AT_F
	{
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 2;
		faction = "LS_MANDALORIAN";
		editorSubcategory = "ls_vehicles_speeder";
		displayName="AT Light IFV (Mando)";
		crew = "ls_mandalorian_assault_traditional";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"ultimate_assets_sw\mando\textures\civ\mando_offroad_co.paa","ultimate_assets_sw\mando\textures\civ\mando_offroad_co.paa"};
		typicalCargo[] = {"ls_mandalorian_assault_traditional"};
		availableForSupportTypes[] = {"Transport"};
	};
    class CW_Offroad_Mando_AT : ultimate_assets_sw_offroad_at_mando {};

	// class CW_SUV_Mando: C_SUV_01_F
	// {
	// 	author = "Silence";
	// 	_generalMacro = "C_SUV_01_F";
	// 	scope = 2;
	// 	side = 2;
	// 	faction = "LS_MANDALORIAN";
	// 	editorSubcategory = "ls_vehicles_speeder";
	// 	displayName="[CW] SUV Mando";
	// 	crew = "ls_mandalorian_assault_traditional";
	// 	hiddenSelections[] = {"camo"};
	// 	hiddenSelectionsTextures[] = {"ultimate_assets_sw\vehicletex\suv_mando.paa"};
	// 	typicalCargo[] = {"ls_mandalorian_assault_traditional"};
	// 	availableForSupportTypes[] = {"Transport"};
	// 	textureList[] = {"SUV_Mando", 1};
	// 	class textureSources
	// 	{
	// 		// _this texture source will be available for every defined factions
	// 		class SUV_Mando
	// 		{
	// 			// Display name of the texture, use 
	// 			displayName = "Mandalorian";
	// 			// Author of the texture
	// 			author = "Silence";
	// 			// Textures, in the same order as the hidden selection names
	// 			textures[] =
	// 			{
	// 				"ultimate_assets_sw\vehicletex\suv_mando.paa",
	// 			};
	// 			materials[] = {}; // if such is needed
	// 			// _this source should be available for the following factions
	// 			factions[] = 
	// 			{
	// 				"BLU_F", "BLU_G_F", // Side Blufor
	// 				"OPF_F", "OPF_G_F", // Side Opfor
	// 				"IND_F", "IND_G_F", // Side independent
	// 				"CIV_F", "LS_MANDALORIAN" // side civilian
	// 			};
	// 		};
	// 	};
	// };