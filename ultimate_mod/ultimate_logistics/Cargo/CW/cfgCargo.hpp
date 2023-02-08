class 3AS_Republic_Mortar : A3U_Logistics_Cargo_Base
{
    offset[] = {-0.1,-0.5,0.74};
    rotation[] = {0,1,0};
    size = 2;
    recoil = 2000;
    isWeapon = 1;
};
class 3as_CIS_Mortar : 3AS_Republic_Mortar {};
class ls_merc_mortar : 3AS_Republic_Mortar {}; // both of these have the same values as the first, so just inherit

class 3AS_HeavyRepeater_Unarmoured : A3U_Logistics_Cargo_Base
{
    offset[] = {0.1, 3.2, 2.85};
    rotation[] = {0,0,0};
    size = 4;
    recoil = 100;
    isWeapon = 1;
};

class 3as_ParticleCannon : A3U_Logistics_Cargo_Base
{
    offset[] = {0, -2, 1};
    rotation[] = {-1.5,-2,0};
    size = 4;
    recoil = 1500;
    isWeapon = 1;
};

class CW_Quadbike : A3U_Logistics_Cargo_Base
{
    offset[] = {0, 0, 1.41};
    rotation[] = {0,1,0};
    size = 2;
    recoil = 0;
    isWeapon = 0;
};

class 442_box10 : A3U_Logistics_Cargo_Base
{
    offset[] = {0,0,0.17};
    rotation[] = {0,1,0};
    size = 1;
    recoil = 0;
    isWeapon = 0;
};