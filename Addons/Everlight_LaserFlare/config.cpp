class CfgPatches
{
    class Everlight_LaserFlare
    {
            units[]={};
            weapons[]={};
            requiredVersion=1.0;
            requiredAddons[]=
            {
                "A3_Weapons_F_Acc"
            };
            authors[]={"Cypher"};
            authorUrl="Private";
    };
};
class CfgWeapons
{
        class ItemCore;
        class InventoryFlashLightItem_Base_F;
        class acc_pointer_ir: ItemCore
        {
            class ItemInfo: InventoryFlashLightItem_Base_F
            {
                class Pointer
                {};
                class Flashlight 
                {
                    color[] = {1, 1, 1, 1};
                    ambient[] = {1, 1, 1, 1};
                    size = 1;
                    innerAngle = 0;
                    outerAngle = 180;
                    position = "laser pos";
                    direction = "laser dir";
                    useFlare = 1;
                    flareSize = .2;
                    flareMaxDistance = 600;
                    scale[] = {0};
                    coneFadeCoef = 100;
                    intensity = 200;
                    irLight = 1;

                class Attenuation 
                    {
                        constant = 1;
                        linear = 100;
                        quadratic = 0.2;
                        start = 0.1;
                        hardLimitStart = 0.2;
                        hardLimitEnd = 0.3;
                    };
                };
            };    
            inertia=0.1;
        };
};