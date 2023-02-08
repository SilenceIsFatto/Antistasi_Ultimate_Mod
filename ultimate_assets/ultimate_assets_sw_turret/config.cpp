class cfgPatches
{
	class ultimate_assets_turret
	{
		units[] =
		{
			"ultimate_assets_sw_turret"
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[]={"ultimate_assets"};
	};
};

class cfgVehicles
{
	class DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
	class CfgDestructPos
	{
		scope=1;
		class DelayedDestruction;
		class DelayedDestructionAmmo: DelayedDestruction
		{
			timeBeforeHiding="21";
			hideDuration="10";
		};
	};
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class ultimate_assets_sw_turret_base: StaticMGWeapon
	{
		author="Silence/Zelo";
		_generalMacro="ultimate_assets_sw_turret_base";
		scope=0;
		displayName="Anti Air Turret (Desert)";
		class Armory
		{
			description="AA Turret";
		};
		model="ultimate_assets_sw_turret\turret";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-10;
				maxElev=180;
				minTurn=-360;
				maxTurn=360;
				weapons[]=
				{
					"3AS_Flak_Cannon"
				};
				magazines[]=
				{
					"3AS_FlakCannon_1000Rnd_AA_shells",
					"3AS_FlakCannon_1000Rnd_AA_shells"
				};
				gunnerAction="RepeaterGunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				disableSoundAttenuation=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.125;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				//gunnerRightHandAnimName="Heavygun";
				//gunnerLeftHandAnimName="Heavygun";
				ejectDeadGunner=1;
			};
		};
		// class AnimationSources
		// {
			
		// 	class muzzle_source
		// 	{
		// 		source="reload";
		// 		weapon="3AS_HeavyRepeater_W";
		// 	};
		// 	class muzzle_source_rot
		// 	{
		// 		source="ammorandom";
		// 		weapon="3AS_HeavyRepeater_W";
		// 	};
		// 	class minigun
		// 	{
		// 		source="revolving";
		// 		weapon="3AS_HeavyRepeater_W";
		// 	};
			
		// };
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.00099999993,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622773,
			1,
			5
		};
	};
	class ultimate_assets_sw_turret: ultimate_assets_sw_turret_base
	{
		author="Silence/Zelo";
		editorPreview="\3as\3as_static\images\3AS_HeavyRepeater_Unarmoured.jpg";
		_generalMacro="B_HMG_01_F";
		scope=2;
		scopeCurator=2;
		side=0;
		faction="3AS_CIS";
		crew="JLTS_Droid_B1_Crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"3AS_FlakCannon_1000Rnd_AA_shells",
					"3AS_FlakCannon_1000Rnd_AA_shells"
				};
			};
		};
	};
    class AA_Turret : ultimate_assets_sw_turret {};
}