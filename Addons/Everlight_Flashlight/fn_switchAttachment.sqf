
	private ["_enableLight"];
	if !(Everlight_Flashlight_Allow_switchAttachment) exitWith {};
	
	if !(primaryWeapon player == currentWeapon player) exitWith {};

	_enableLight = {
		private ["_active"];
		_active = (player isFlashlightOn (currentWeapon player) || player isIRLaserOn (currentWeapon player));
		if (_active) then {
			player action [format ["%1Off", (_this select 2)], player];
		};
		player removePrimaryWeaponItem (_this select 0);
		playSound "Everlight_Extra_Toggle_Attachment";
		sleep 0.1;
		player addPrimaryWeaponItem (_this select 1);
		if (_active) then {
			player action [format ["%1On", (_this select 2)], player];
		};
	};

	switch (true) do {

		case ("Everlight_X2000_point" in (primaryWeaponItems player)): {
			["Everlight_X2000_point","Everlight_X2000_wide","GunLight"] spawn _enableLight;
			["X2000: Flashlight (Wide-Beam)",3] call Everlight_Flashlight_Fnc_Hint;
		};

		case ("Everlight_X2000_wide" in (primaryWeaponItems player)): {
			["Everlight_X2000_wide","Everlight_X2000_point","GunLight"] spawn _enableLight;
			["X2000: Flashlight (Point-Beam)",3] call Everlight_Flashlight_Fnc_Hint;
		};

		default {
//			["You do not have a multi-purpose flashlight",4] call Everlight_Flashlight_Fnc_Hint;
		};
	};

//	player addPrimaryWeaponItem "Everlight_X2000_point";
//	player addPrimaryWeaponItem "Everlight_X2000_wide";
