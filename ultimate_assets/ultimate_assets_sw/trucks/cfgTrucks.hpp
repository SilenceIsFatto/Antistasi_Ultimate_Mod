	// I refuse to re-do all of these classnames aswell.

	class O_Truck_03_transport_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_device_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_repair_F;
	// Imperial
	class CW_argon_transport: O_Truck_03_transport_F
	{
		class transportItems
		{
			class ace_earplugs
			{
				name="ACE_EarPlugs";
				count=20;
			};
			class ace_clacker
			{
				name="ACE_Clacker";
				count=2;
			};
			class ace_binocular
			{
				name="swlb_clone_binocular";
				count=5;
			};
		};
		class transportMagazines
		{
			class SWLW_beltgrenade_mag
			{
				magazine="SWLW_beltgrenade_mag";
				count=10;
			};
			class smokeshellblue
			{
				magazine="smokeshellblue";
				count=10;
			};
			class smokeshellred
			{
				magazine="smokeshellred";
				count=10;
			};
			class smokeshell
			{
				magazine="smokeshell";
				count=10;
			};
			class ace_m14
			{
				magazine="ace_m14";
				count=10;
			};
			class chemlight_blue
			{
				magazine="chemlight_blue";
				count=10;
			};
			class chemlight_red
			{
				magazine="chemlight_red";
				count=10;
			};
			class democharge_remote_mag
			{
				magazine="democharge_remote_mag";
				count=2;
			};
		};
		side=0;
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Kobra Mod Team/Silence";
		faction="ls_cis";
		editorSubcategory="ls_vehicles_speeder";
		crew="JMSLLTE_emp_storm_tank";
		typicalCargo[]=
		{
			"JMSLLTE_emp_storm_tank"
		};
		displayName="Argon Transport";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		textureList[]={};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\imperial_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\imperial_truck_cargo_co.paa"
		};
		ace_cargo_space=16;
		ace_interaction_bodyWidth=3;
		getInRadius=5;
	};
	class CW_argon_covered: O_Truck_03_covered_F
	{
		class transportItems
		{
			class ace_earplugs
			{
				name="ACE_EarPlugs";
				count=20;
			};
			class ace_clacker
			{
				name="ACE_Clacker";
				count=2;
			};
			class ace_binocular
			{
				name="swlb_clone_binocular";
				count=5;
			};
		};
		class transportMagazines
		{
			class SWLW_beltgrenade_mag
			{
				magazine="SWLW_beltgrenade_mag";
				count=10;
			};
			class smokeshellblue
			{
				magazine="smokeshellblue";
				count=10;
			};
			class smokeshellred
			{
				magazine="smokeshellred";
				count=10;
			};
			class smokeshell
			{
				magazine="smokeshell";
				count=10;
			};
			class ace_m14
			{
				magazine="ace_m14";
				count=10;
			};
			class chemlight_blue
			{
				magazine="chemlight_blue";
				count=10;
			};
			class chemlight_red
			{
				magazine="chemlight_red";
				count=10;
			};
			class democharge_remote_mag
			{
				magazine="democharge_remote_mag";
				count=2;
			};
		};
		side=0;
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Kobra Mod Team + 'Airstrike' Ivanov/ Silence";
		faction="ls_cis";
		editorSubcategory="ls_vehicles_speeder";
		crew="JMSLLTE_emp_storm_tank";
		typicalCargo[]=
		{
			"JMSLLTE_emp_storm_tank"
		};
		displayName="Argon Covered Transport";
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\imperial_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\imperial_truck_cargo_co.paa",
			"ultimate_assets_sw\trucks\imperial_truck_cover_co.paa"
		};
		ace_cargo_space=16;
		ace_interaction_bodyWidth=3;
		getInRadius=5;
	};
	class CW_argon_ammo: O_Truck_03_ammo_F
	{
		class transportMagazines
		{
			class SWLW_beltgrenade_mag
			{
				magazine="SWLW_beltgrenade_mag";
				count=30;
			};
			class smokeshellblue
			{
				magazine="smokeshellblue";
				count=30;
			};
			class smokeshellred
			{
				magazine="smokeshellred";
				count=30;
			};
			class smokeshell
			{
				magazine="smokeshell";
				count=30;
			};
			class ace_m14
			{
				magazine="ace_m14";
				count=30;
			};
			class chemlight_blue
			{
				magazine="chemlight_blue";
				count=30;
			};
			class chemlight_red
			{
				magazine="chemlight_red";
				count=30;
			};
			class democharge_remote_mag
			{
				magazine="democharge_remote_mag";
				count=6;
			};
		};
		side=0;
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Kobra Mod Team + 'Airstrike' Ivanov/ Silence";
		faction="ls_cis";
		editorSubcategory="ls_vehicles_speeder";
		crew="JMSLLTE_emp_storm_tank";
		typicalCargo[]=
		{
			"JMSLLTE_emp_storm_tank"
		};
		displayName="Argon Ammo Truck";
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\imperial_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\imperial_truck_cargo_co.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		ace_cargo_space=20;
		ace_interaction_bodyWidth=3;
		getInRadius=5;
	};
	class CW_argon_device: O_Truck_03_device_F
	{
		class transportItems
		{
			class ace_earplugs
			{
				name="ACE_EarPlugs";
				count=20;
			};
			class ace_clacker
			{
				name="ACE_Clacker";
				count=2;
			};
			class ace_binocular
			{
				name="swlb_clone_binocular";
				count=5;
			};
		};
		class transportMagazines
		{
			class SWLW_beltgrenade_mag
			{
				magazine="SWLW_beltgrenade_mag";
				count=10;
			};
			class smokeshellblue
			{
				magazine="smokeshellblue";
				count=10;
			};
			class smokeshellred
			{
				magazine="smokeshellred";
				count=10;
			};
			class smokeshell
			{
				magazine="smokeshell";
				count=10;
			};
			class ace_m14
			{
				magazine="ace_m14";
				count=10;
			};
			class chemlight_blue
			{
				magazine="chemlight_blue";
				count=10;
			};
			class chemlight_red
			{
				magazine="chemlight_red";
				count=10;
			};
			class democharge_remote_mag
			{
				magazine="democharge_remote_mag";
				count=2;
			};
		};
		side=0;
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Kobra Mod Team + 'Airstrike' Ivanov/ Silence";
		faction="ls_cis";
		editorSubcategory="ls_vehicles_speeder";
		crew="JMSLLTE_emp_storm_tank";
		typicalCargo[]=
		{
			"JMSLLTE_emp_storm_tank"
		};
		displayName="Argon Device Carrier";
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\imperial_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\imperial_truck_cargo_co.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		ace_cargo_space=8;
		ace_interaction_bodyWidth=3;
		getInRadius=5;
	};
	class CW_argon_fuel: O_Truck_03_fuel_F
	{
		class transportItems
		{
			class ace_earplugs
			{
				name="ACE_EarPlugs";
				count=20;
			};
			class ace_clacker
			{
				name="ACE_Clacker";
				count=2;
			};
			class ace_binocular
			{
				name="swlb_clone_binocular";
				count=5;
			};
		};
		class transportMagazines
		{
			class SWLW_beltgrenade_mag
			{
				magazine="SWLW_beltgrenade_mag";
				count=10;
			};
			class smokeshellblue
			{
				magazine="smokeshellblue";
				count=10;
			};
			class smokeshellred
			{
				magazine="smokeshellred";
				count=10;
			};
			class smokeshell
			{
				magazine="smokeshell";
				count=10;
			};
			class ace_m14
			{
				magazine="ace_m14";
				count=10;
			};
			class chemlight_blue
			{
				magazine="chemlight_blue";
				count=10;
			};
			class chemlight_red
			{
				magazine="chemlight_red";
				count=10;
			};
			class democharge_remote_mag
			{
				magazine="democharge_remote_mag";
				count=2;
			};
		};
		side=0;
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Kobra Mod Team + 'Airstrike' Ivanov/ Silence";
		faction="ls_cis";
		editorSubcategory="ls_vehicles_speeder";
		crew="JMSLLTE_emp_storm_tank";
		typicalCargo[]=
		{
			"JMSLLTE_emp_storm_tank"
		};
		displayName="Argon Fuel Truck";
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\imperial_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\imperial_truck_fuel_co.paa"
		};
		ace_cargo_space=8;
		ace_interaction_bodyWidth=3;
		getInRadius=5;
	};
	class CW_argon_repair: O_Truck_03_repair_F
	{
		class transportItems
		{
			class ace_toolkit
			{
				name="Toolkit";
				count=6;
			};
		};
		side=0;
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Kobra Mod Team + 'Airstrike' Ivanov/ Silence";
		faction="ls_cis";
		editorSubcategory="ls_vehicles_speeder";
		crew="JMSLLTE_emp_storm_tank";
		typicalCargo[]=
		{
			"JMSLLTE_emp_storm_tank"
		};
		displayName="Argon Repair Truck";
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\imperial_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\imperial_truck_repair_co.paa"
		};
		ace_cargo_space=8;
		ace_interaction_bodyWidth=3;
		getInRadius=5;
	};
	class CW_argon_medical: O_Truck_03_covered_F
	{
		class transportItems
		{
			class ace_fielddressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class ace_elastic
			{
				name="ACE_elasticbandage";
				count=20;
			};
			class ace_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class ace_blood
			{
				name="ACE_bloodIV";
				count=5;
			};
			class ace_blood250
			{
				name="ACE_bloodIV_250";
				count=5;
			};
			class ace_blood500
			{
				name="ACE_bloodIV_500";
				count=5;
			};
			class ace_bodybag
			{
				name="ACE_bodyBag";
				count=10;
			};
			class ace_epi
			{
				name="ACE_Epinephrine";
				count=20;
			};
			class ace_morphine
			{
				name="ACE_morphine";
				count=20;
			};
			class ace_packing
			{
				name="ACE_packingBandage";
				count=20;
			};
			class ace_pak
			{
				name="ACE_personalAidKit";
				count=20;
			};
			class ace_surgical
			{
				name="ACE_surgicalKit";
				count=5;
			};
			class ace_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
			class ace_splint
			{
				name="adv_aceSplint_splint";
				count=20;
			};
			class ace_aed
			{
				name="adv_aceCPR_AED";
				count=5;
			};
			class ace_accuvac
			{
				name="KAT_accuvac";
				count=20;
			};
			class ace_x_aed
			{
				name="KAT_X_AED";
				count=5;
			};
			class ace_chestseal
			{
				name="KAT_ChestSeal";
				count=20;
			};
			class ace_guedel
			{
				name="KAT_guedel";
				count=20;
			};
			class ace_larynx
			{
				name="KAT_larynx";
				count=20;
			};
			class ace_pulseoximeter
			{
				name="KAT_Pulseoximeter";
				count=5;
			};
		};
		side=0;
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		author="Kobra Mod Team + 'Airstrike' Ivanov/ Silence";
		faction="ls_cis";
		editorSubcategory="ls_vehicles_speeder";
		crew="JMSLLTE_emp_storm_tank";
		typicalCargo[]=
		{
			"JMSLLTE_emp_storm_tank"
		};
		displayName="Argon Medical Truck";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\imperial_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\imperial_truck_cargo_co.paa",
			"ultimate_assets_sw\trucks\imperial_truck_cover_m_co.paa"
		};
		ace_cargo_space=8;
		ace_interaction_bodyWidth=3;
		getInRadius=5;
	};
	// Rebel
	class CW_rebel_argon_transport : CW_argon_transport
	{
		displayName="Argon Transport Truck (Rebel)";
		attendant=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		textureList[]={};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\rebel_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\rebel_truck_cargo_co.paa"
		};
	};
	class CW_rebel_argon_covered : CW_argon_covered
	{
		displayName="Argon Transport Truck Covered (Rebel)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\rebel_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\rebel_truck_cargo_co.paa",
			"ultimate_assets_sw\trucks\rebel_truck_cover_co.paa"
		};
	};
	class CW_rebel_argon_ammo : CW_argon_ammo
	{
		displayName="Argon Ammo Truck (Rebel)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\rebel_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\rebel_truck_cargo_co.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
	};
	class CW_rebel_argon_device : CW_argon_device
	{
		displayName="Argon Device Truck (Rebel)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\rebel_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\rebel_truck_cargo_co.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
	};
	class CW_rebel_argon_fuel : CW_argon_fuel
	{
		displayName="Argon Fuel Truck (Rebel)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\rebel_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\rebel_truck_fuel_co.paa"
		};
	};
	class CW_rebel_argon_repair : CW_argon_repair
	{
		displayName="Argon Repair Truck (Rebel)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\rebel_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\rebel_truck_repair_co.paa"
		};
	};
	class CW_rebel_argon_medical : CW_argon_medical
	{
		displayName="Argon Medical Truck (Rebel)";
		attendant=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\rebel_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\rebel_truck_cargo_co.paa",
			"ultimate_assets_sw\trucks\rebel_truck_cover_m_co.paa"
		};
	};
	// Mando
	class CW_Mando_argon_transport : CW_argon_transport
	{
		displayName="Argon Transport Truck (Mando)";
		attendant=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		textureList[]={};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\Mando_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\Mando_truck_cargo_co.paa"
		};
	};
	class CW_Mando_argon_covered : CW_argon_covered
	{
		displayName="Argon Transport Truck Covered (Mando)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\Mando_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\Mando_truck_cargo_co.paa",
			"ultimate_assets_sw\trucks\Mando_truck_cover_co.paa"
		};
	};
	class CW_Mando_argon_ammo : CW_argon_ammo
	{
		displayName="Argon Ammo Truck (Mando)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\Mando_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\Mando_truck_cargo_co.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
	};
	class CW_Mando_argon_device : CW_argon_device
	{
		displayName="Argon Device Truck (Mando)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\Mando_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\Mando_truck_cargo_co.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
	};
	class CW_Mando_argon_fuel : CW_argon_fuel
	{
		displayName="Argon Fuel Truck (Mando)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\Mando_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\Mando_truck_fuel_co.paa"
		};
	};
	class CW_Mando_argon_repair : CW_argon_repair
	{
		displayName="Argon Repair Truck (Mando)";
		attendant=1;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\Mando_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\Mando_truck_repair_co.paa"
		};
	};
	class CW_Mando_argon_medical : CW_argon_medical
	{
		displayName="Argon Medical Truck (Mando)";
		attendant=1;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ultimate_assets_sw\trucks\Mando_truck_body_co.paa",
			"",
			"ultimate_assets_sw\trucks\Mando_truck_cargo_co.paa",
			"ultimate_assets_sw\trucks\Mando_truck_cover_m_co.paa"
		};
	};