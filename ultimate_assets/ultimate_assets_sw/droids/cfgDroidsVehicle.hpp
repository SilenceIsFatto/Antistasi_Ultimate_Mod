	class ls_redforDroid_base;
	class ultimate_assets_sw_droid_mando: ls_redforDroid_base
	{
		faction="LS_MANDALORIAN";
		editorSubcategory="ls_cis_standardDroids";
		editorPreview="ultimate_assets_sw\droidtex\droidpreview.jpg";
		scope = 2;
		side = 2;
		displayName = "B1 Droid";
		uniformClass="ultimate_assets_sw_droid_mando_uniform";
		model="\ls_armor_redfor\uniform\cis\b1\ls_cis_b1_uniform.p3d";
		linkedItems[]=
		{
			"ultimate_assets_sw_droid_mando_helmet",
			"SWLB_clone_basic_armor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		respawnLinkedItems[]=
		{
			"ultimate_assets_sw_droid_mando_helmet",
			"SWLB_clone_basic_armor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink_droid"
		};
		items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\droids\textures\b1_camo1_co.paa",
			"ultimate_assets_sw\droids\textures\b1_camo2_co.paa"
		};
		magazines[] = {"SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_RG4D_Mag", "SWLW_RG4D_Mag"};
		respawnMagazines[] = {"SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_westar35c_Mag", "SWLW_RG4D_Mag", "SWLW_RG4D_Mag"};
		weapons[] = {"ls_weapon_westar35c_primary", "SWLW_RG4D"};
		respawnWeapons[] = {"ls_weapon_westar35c_primary", "SWLW_RG4D"};
	};