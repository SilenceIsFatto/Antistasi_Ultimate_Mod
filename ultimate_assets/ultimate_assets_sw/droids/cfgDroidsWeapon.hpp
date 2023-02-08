	// Legion inheritance
    class ls_cis_b1Droid_uniform;
	class ls_cis_b1_helmet;

    // External inheritance
    class UniformItem;
    class ItemCore;
    class Uniform_Base: ItemCore
    { 
        class ItemInfo; 
    };

	class ultimate_assets_sw_droid_mando_uniform: ls_cis_b1Droid_uniform
    {
        scope=2;
        scopeCurator=2;
        displayName="B1 Droid Chassis (Mandalorian)";
        model="\ls_armor_redfor\uniform\cis\b1\ls_cis_b1_uniform_groundholder.p3d";
        class ItemInfo: UniformItem
        {
            uniformClass="ultimate_assets_sw_droid_mando";
            containerClass="Supply150";
            mass=40;
        };
    };
    class ultimate_assets_sw_droid_mando_helmet: ls_cis_b1_helmet
    {
        scope=2;
		scopeCurator=2;
        displayname="B1 Droid Head (Mandalorian)";
        hiddenselections[]=
        {
            "camo1"
        };
        hiddenselectionstextures[]=
        {
            "ultimate_assets_sw\droids\textures\b1_camo1_co.paa"
        };
    };