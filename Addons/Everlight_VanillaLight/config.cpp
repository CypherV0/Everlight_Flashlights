class CfgPatches
{
	class Everlight_VanillaLight
	{
		requiredaddons[]=
		{
			"A3_Weapons_F_Acc",
		};
		requiredversion=0.1;
		units[]={};
		weapons[]={};
		magazines[]={};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class acc_flashlight: ItemCore
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ambient[]={9,7.5,6};
				color[]={1200,1500,1800};
				conefadecoef=100;
				daylight=1;
				direction="flash";
				flaremaxdistance=600;
				flaresize=0.8;
				innerangle=0;
				intensity=1000;
				outerangle=120;
				position="flash dir";
				scale[]={0};
				size=1;
				useflare=1;
				class Attenuation
				{
					constant=50;
					hardlimitend=250;
					hardlimitstart=150;
					linear=50;
					quadratic=0;
					start=0.7;
				};
			};
		};
	};

	class acc_flashlight_pistol: ItemCore
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
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
	};
};
