class Templates
{
    class Example_Base
    {
        requiredAddons[] = {}; // required addons (cfgPatches) to be loaded for this to show up?
        logo = "";
        basepath = "ultimate_core\Templates\Example"; // the path to the template folder
        priority = 10; // this is the priority for load order in UI I presume
        equipFlags[] = {"vanilla"}; // these are things like "don't use modern stuff" etc, this is VN's equipFlags below

        // equipFlags[] = {"lowTech","replaceCompass","replaceWatch"};

        // maps[] = {"altis"}; not needed in this context, but i'm presuming this is an array of all maps this template can be used on
    };

    class Example_CSAT : Example_Base
    {
        side = "Inv";
        flagTexture = "\A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "A3 CSAT Example";
        file = "Example_AI_CSAT_Temperate";
        climate[] = {"arid","temperate","tropical"};
    };

    class Example_NATO : Example_Base
    {
        side = "Occ";
        flagTexture = "\A3\Data_F\Flags\Flag_NATO_CO.paa";
        name = "A3 NATO Example";
        file = "Example_AI_NATO_Temperate";
        climate[] = {"arid","temperate","tropical"};
    };

    class Example_FIA : Example_Base
    {
        side = "Reb";
        flagTexture = "\A3\Data_F\Flags\Flag_FIA_CO.paa";
        name = "A3 FIA Example";
        file = "Example_Reb_FIA";
    };

    class Example_Civ : Example_Base
    {
        side = "Civ";
        flagTexture = "\A3\Data_F\Flags\Flag_AAF_CO.paa";
        name = "A3 Civ Example";
        file = "Example_Civ";
    };
};