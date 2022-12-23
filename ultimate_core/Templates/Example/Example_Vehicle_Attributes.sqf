["attributesVehicles", [
    // Light attack helis
    ["O_Heli_Light_02_dynamicLoadout_F", ["cost", 100]], // [_classname, [_type, _integer]],
    ["O_Heli_Light_02_F", ["cost", 100]],
    ["B_Heli_Light_01_armed_F", ["cost", 100]],
    ["B_Heli_Light_01_dynamicLoadout_F", ["cost", 100]],
    ["I_E_Heli_light_03_dynamicLoadout_F", ["cost", 100]],

    // Jets
    ["I_Plane_Fighter_03_dynamicLoadout_F", ["cost", 200]]

]] call _fnc_saveToTemplate;

// Technically this could go in the main template, but i'm presuming it's #include'd for readability/easy access?