class Templates
{

    #define ALLCLIMATES#{"temperate","tropical","arid"};
    class CW_Base
    {
        requiredAddons[] = {}; // required addons (cfgPatches) to be loaded for this to show up?
        logo = "ultimate_core\Templates\CW\images\clone_wars_ca.paa";
        basepath = "ultimate_core\Templates\CW"; // the path to the template folder
        priority = 1; // this is the priority for load order in UI I presume
        equipFlags[] = {}; // these are things like "don't use modern stuff" etc, this is VN's equipFlags below

        // equipFlags[] = {"lowTech","replaceCompass","replaceWatch"};

        // maps[] = {"altis"}; not needed in this context, but i'm presuming this is an array of all maps this template can be used on
    };

    class CW_Droids_Standard : CW_Base
    {
        side = "Inv";
        flagTexture = "ultimate_core\Templates\CW\images\flag_cis_co.paa";
        name = "Clone Wars - CIS";
        file = "CW_AI_CIS_Temperate";
        climate[]=ALLCLIMATES
    };

    class CW_Clones_Standard : CW_Base
    {
        side = "Occ";
        flagTexture = "ultimate_core\Templates\CW\images\flag_republic_co.paa";
        name = "Clone Wars - Republic";
        file = "CW_AI_Republic_Temperate";
        climate[]=ALLCLIMATES
    };

    class CW_Mandalorians_Standard : CW_Base
    {
        side = "Reb";
        flagTexture = "ultimate_core\Templates\CW\images\flag_mando_co.paa";
        name = "Clone Wars - Mandalorian";
        file = "CW_Reb_Mando";
    };

    class CW_Civ : CW_Base
    {
        side = "Civ";
        flagTexture = "";
        name = "Clone Wars - Civilians";
        file = "CW_Civ";
    };
};