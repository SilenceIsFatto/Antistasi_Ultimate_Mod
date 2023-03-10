///////////////////////////
//   Rebel Information   //
///////////////////////////

["name", "Mandalorian"] call _fnc_saveToTemplate;

["flag", "ls_flag_mandalorian"] call _fnc_saveToTemplate;
["flagTexture", "\LS_statics_props\flags\data\flag_mandalorian.paa"] call _fnc_saveToTemplate;
["flagMarkerType", "mando_marker_red"] call _fnc_saveToTemplate;

["vehicleBasic", "CW_Quadbike"] call _fnc_saveToTemplate;
["vehicleLightUnarmed", "CW_Offroad_Mando"] call _fnc_saveToTemplate;
["vehicleLightArmed", "CW_Offroad_Mando_HMG"] call _fnc_saveToTemplate; 
["vehicleTruck", "CW_Mando_argon_transport"] call _fnc_saveToTemplate; 
["vehicleAT", "CW_Offroad_Mando_AT"] call _fnc_saveToTemplate;
["vehicleAA", "CW_Ifrit_Mando_HMG"] call _fnc_saveToTemplate; 

["vehicleBoat", "I_C_Boat_Transport_02_F"] call _fnc_saveToTemplate;
["vehicleRepair", "CW_Mando_argon_repair"] call _fnc_saveToTemplate;
// ["vehicleFuel", "CW_Mando_argon_fuel"] call _fnc_saveToTemplate; no longer needed

["vehiclePlane", "I_C_Plane_Civil_01_F"] call _fnc_saveToTemplate;

["vehicleCivCar", "C_Offroad_01_F"] call _fnc_saveToTemplate;
["vehicleCivTruck", "C_Van_01_transport_F"] call _fnc_saveToTemplate;
["vehicleCivHeli", "ls_heli_laatle_transportGunship"] call _fnc_saveToTemplate;
["vehicleCivBoat", "C_Rubberboat"] call _fnc_saveToTemplate;

["staticMG", "3AS_HeavyRepeater_Unarmoured"] call _fnc_saveToTemplate;
["staticAT", "I_static_AT_F"] call _fnc_saveToTemplate;
["staticAA", "I_static_AA_F"] call _fnc_saveToTemplate;
["staticMortar", "ls_merc_mortar"] call _fnc_saveToTemplate;
["staticMortarMagHE", "8Rnd_82mm_Mo_shells"] call _fnc_saveToTemplate;
["staticMortarMagSmoke", "8Rnd_82mm_Mo_Smoke_white"] call _fnc_saveToTemplate;

["mineAT", ["ATMine_Range_Mag", "SLAMDirectionalMine_Wire_Mag"]] call _fnc_saveToTemplate;
["mineAPERS", ["ClaymoreDirectionalMine_Remote_Mag","APERSMine_Range_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag"]] call _fnc_saveToTemplate;

["breachingExplosivesAPC", [["SWLW_clones_spec_demo_mag", 1], ["SWLW_clones_spec_breach_mag", 1]]] call _fnc_saveToTemplate;
["breachingExplosivesTank", [["SWLW_clones_spec_demo_mag", 1], ["SWLW_clones_spec_breach_mag", 2]]] call _fnc_saveToTemplate;

///////////////////////////
//  Rebel Starting Gear  //
///////////////////////////

private _rebHeadgear = [
    "ls_mandalorian_traditional_helmet",
    "ls_mandalorian_armorer_helmet",
    "ls_mandalorian_elite_helmet",
    "ls_mandalorian_executioner_helmet",
    "ls_mandalorian_nightowl_helmet",
    "ls_mandalorian_stalker_helmet"
];

private _initialRebelEquipment = [
    "SWLW_Westar35SA","rhs_weap_tt33","SWLW_westar35c","SWLW_Westar35S",
    ["ls_weapon_rps6_disposable", 50],
    ["IEDUrbanSmall_Remote_Mag", 10], ["IEDLandSmall_Remote_Mag", 10], ["IEDUrbanBig_Remote_Mag", 3], ["IEDLandBig_Remote_Mag", 3],
    "SWLW_Westar35S_Mag","SWLW_westar35c_Mag","SWLW_westar35sa_Mag","3AS_ThermalDetonator",
    "ls_mandalorian_standard_backpack","ls_mandalorian_light_backpack","ls_mandalorian_demo_backpack","ls_mandalorian_heavy_backpack","ls_mandalorian_medic_backpack",
    "ls_mandalorian_traditional_vest","SWLB_clone_officer_armor",
    "SWLB_clone_commander_binocular_night"
];

if (A3A_hasTFAR) then {_initialRebelEquipment append ["tf_microdagr","SWLB_comlink_hush98","tf_anprc154"]};
if (A3A_hasTFAR && startWithLongRangeRadio) then {_initialRebelEquipment pushBack "ls_mandalorian_tro_backpack"};
if (A3A_hasTFARBeta) then {_initialRebelEquipment append ["TFAR_microdagr","JLTS_clone_comlink","TFAR_anprc154"]};
if (A3A_hasTFARBeta && startWithLongRangeRadio) then {_initialRebelEquipment pushBack "JLTS_Clone_ARC_backpack"};

private _rebUniforms = [
    "ls_mandalorian_undersuit_uniform"
];

if (call A3U_fnc_allowDroidEquipment) then {
    _rebUniforms append ["ultimate_assets_sw_droid_mando_uniform"];
    _rebHeadgear append ["ultimate_assets_sw_droid_mando_helmet"];
};

["uniforms", _rebUniforms] call _fnc_saveToTemplate;

["headgear", _rebHeadgear] call _fnc_saveToTemplate;

["initialRebelEquipment", _initialRebelEquipment] call _fnc_saveToTemplate;

/////////////////////
///  Identities   ///
/////////////////////

["faces", ["GreekHead_A3_02","GreekHead_A3_03","GreekHead_A3_04",
"GreekHead_A3_05","GreekHead_A3_06","GreekHead_A3_07","GreekHead_A3_08",
"GreekHead_A3_09","Ioannou","Mavros"]] call _fnc_saveToTemplate;
["voices", ["Male01GRE", "Male02GRE", "Male03GRE", "Male04GRE", "Male05GRE", "Male06GRE"]] call _fnc_saveToTemplate;

//////////////////////////
//       Loadouts       //
//////////////////////////

private _loadoutData = call _fnc_createLoadoutData;
_loadoutData set ["maps", ["ItemMap"]];
_loadoutData set ["watches", ["ItemWatch"]];
_loadoutData set ["compasses", ["ItemCompass"]];
_loadoutData set ["binoculars", ["JLTS_CloneBinocular_black"]];

_loadoutData set ["uniforms", _rebUniforms];

_loadoutData set ["glasses", []];
_loadoutData set ["goggles", []];
_loadoutData set ["facemask", []];

_loadoutData set ["items_medical_basic", ["BASIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_standard", ["STANDARD"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_medical_medic", ["MEDIC"] call A3A_fnc_itemset_medicalSupplies];
_loadoutData set ["items_miscEssentials", [] call A3A_fnc_itemset_miscEssentials];

////////////////////////
//  Rebel Unit Types  //
///////////////////////.

private _squadLeaderTemplate = {
    ["uniforms"] call _fnc_setUniform;
    [selectRandomWeighted [[], 1.25, "glasses", 1, "goggles", 0.75, "facemask", 1]] call _fnc_setFacewear;

    ["items_medical_standard"] call _fnc_addItemSet;
    ["items_miscEssentials"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
    ["binoculars"] call _fnc_addBinoculars;
};

private _riflemanTemplate = {
    ["uniforms"] call _fnc_setUniform;
    [selectRandomWeighted [[], 1.25, "glasses", 1, "goggles", 0.75, "facemask", 1]] call _fnc_setFacewear;
    
    ["items_medical_standard"] call _fnc_addItemSet;
    ["items_miscEssentials"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};

private _prefix = "militia";
private _unitTypes = [
    ["Petros", _squadLeaderTemplate],
    ["SquadLeader", _squadLeaderTemplate],
    ["Rifleman", _riflemanTemplate],
    ["staticCrew", _riflemanTemplate],
    ["Medic", _riflemanTemplate, [["medic", true]]],
    ["Engineer", _riflemanTemplate, [["engineer", true]]],
    ["ExplosivesExpert", _riflemanTemplate, [["explosiveSpecialist", true]]],
    ["Grenadier", _riflemanTemplate],
    ["LAT", _riflemanTemplate],
    ["AT", _riflemanTemplate],
    ["AA", _riflemanTemplate],
    ["MachineGunner", _riflemanTemplate],
    ["Marksman", _riflemanTemplate],
    ["Sniper", _riflemanTemplate],
    ["Unarmed", _riflemanTemplate]
];

[_prefix, _unitTypes, _loadoutData] call _fnc_generateAndSaveUnitsToTemplate;