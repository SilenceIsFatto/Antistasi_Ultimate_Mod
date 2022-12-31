["attributesVehicles", [
    // Droid Helis
    ["ls_heli_laatle_policeGunship", ["cost", 100]], // [_classname, [_type, _integer]],
    ["3AS_HMP_Transport", ["cost", 100]],
    ["3AS_HMP_Gunship", ["cost", 150]],

    // Droid/Clone Jets
    ["3AS_BTLB_Bomber_Shadow", ["cost", 250]],
    ["3AS_BTLB_Bomber", ["cost", 250]],
    ["3as_Z95_blue", ["cost", 250]],
    ["3as_Z95_Republic", ["cost", 250]],

    // Clone Helis
    ["ls_heli_laatle_transportGunship", ["cost", 100]], // [_classname, [_type, _integer]],
    ["3as_LAAT_Mk2", ["cost", 150]], // [_classname, [_type, _integer]],
    ["3as_LAAT_Mk2Lights", ["cost", 150]], // [_classname, [_type, _integer]],
    ["3as_LAAT_Mk1", ["cost", 200]], // [_classname, [_type, _integer]],
    ["3AS_Nuclass", ["cost", 200]] // [_classname, [_type, _integer]],

]] call _fnc_saveToTemplate;

// Technically this could go in the main template, but i'm presuming it's #include'd for readability/easy access?