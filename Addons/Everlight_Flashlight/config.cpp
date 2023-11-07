class CfgPatches
{
    class Everlight_Flashlight_Flashlight
    {
            units[]={};
            weapons[]=
            {
                "Everlight_X2000_point",
                "Everlight_X2000_wide"
            };
            requiredVersion=1.0;
            requiredAddons[]=
            {
                "CBA_Main",
                "CUP_Weapons_West_Attachments"
            };
            version="0.2";
            versionStr="0.2";
            versionAr[]={0,2,0};
            authors[]={"Cypher"};
            authorUrl="Private";
    };
};
class CfgWeapons
{
        class CUP_acc_Flashlight;
        class InventoryFlashLightItem_Base_F;
        class Everlight_X2000_point: CUP_acc_Flashlight
        {
            scope=2;
            author="Cypher";
            _generalMacro="Everlight_X2000_point";
            displayName="X2000 FlashLight (Narrow)";
            descriptionUse="Use Ctrl+MouseWheel to switch modes";
            descriptionShort="Use Ctrl+MouseWheel to switch modes";
            
            class ItemInfo: InventoryFlashLightItem_Base_F
            {
                  mass=2;
                  class FlashLight
                  {
                        ambient[]={9,7.5,6};
                        color[]={1200,1500,1800};
                        intensity=100;
                        size=1;
                        innerangle=0;
                        outerangle=30;
                        conefadecoef=10;
                        direction="flash";
                        position="flash dir";
                        daylight=1;
                        useflare=1;
                        flaresize=0.8;
                        flaremaxdistance=600;
                        scale[]={0};
                        class Attenuation
                        {
                            constant=70;
                            hardlimitend=250;
                            hardlimitstart=150;
                            linear=1;
                            quadratic=0;
                            start=0.1;
                        };
                  };
            };
            inertia=0.1;
        };
        class Everlight_X2000_wide: CUP_acc_Flashlight
        {
            scope=2;
            author="Cypher";
            _generalMacro="Everlight_X2000_wide";
            displayName="X2000 FlashLight (Wide)";
            descriptionUse="Use Ctrl+MouseWheel to switch modes";
            descriptionShort="Use Ctrl+MouseWheel to switch modes";
            
            class ItemInfo: InventoryFlashLightItem_Base_F
            {
                  mass=2;
                  class FlashLight
                  {
                        color[]={1200,1500,1800};
                        ambient[]={9,7.5,6};
                        intensity=300;
                        size=1;
                        innerAngle=0;
                        outerAngle=70;
                        coneFadeCoef=5;
                        direction="flash";
                        position="flash dir";
                        dayLight=1;
                        useFlare=1;
                        flareSize=1;
                        flareMaxDistance=600;
                        scale[]={0};
                        class Attenuation
                        {
                            start=0.1;
                            constant=80;
                            linear=60;
                            quadratic=0;
                            hardLimitStart=20;
                            hardLimitEnd=60;
                        };
                  };
            };
            inertia=0.1;
        };
};
class CfgSounds
{
        class Everlight_Extra_Toggle_Attachment
        {
            name="Toggle_Attachment";
            sound[]=
            {
                  "Everlight_Flashlight\switch_mod_04",
                  1,
                  1,
                  25
            };
            titles[]={};
        };
};
class CfgFunctions
{
        class Everlight_Flashlight
        {
            class Flashlight
            {
                  file="Everlight_Flashlight";
                  class Hint
                  {
                  };
                  class flashlightInit
                  {
                        postInit=1;
                  };
                  class switchAttachment
                  {
                  };
            };
        };
};

#include "CfgJointRails.hpp"