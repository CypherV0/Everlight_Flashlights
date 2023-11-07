
	#include "\a3\editor_f\Data\Scripts\dikCodes.h"

	["Everlight Flashlight","Everlight_Flashlight1", "Toggle Flashlight", {_this spawn Everlight_Flashlight_Fnc_switchAttachment}, {}, [DIK_L, [false, true, false]]] call CBA_fnc_addKeybind;
	["Everlight Flashlight","Everlight_Flashlight2", "Toggle Flashlight", {_this spawn Everlight_Flashlight_Fnc_switchAttachment}, {}, [0xF8, [false, true, false]]] call CBA_fnc_addKeybind;
	["Everlight Flashlight","Everlight_Flashlight3", "Toggle Flashlight", {_this spawn Everlight_Flashlight_Fnc_switchAttachment}, {}, [0xF9, [false, true, false]]] call CBA_fnc_addKeybind;
	if (isNil "Everlight_Flashlight_Allow_switchAttachment") then { Everlight_Flashlight_Allow_switchAttachment = true; };
	if (isNil "Everlight_KeyBind_Failcheck") then { Everlight_KeyBind_Failcheck = false; };
	if (Everlight_KeyBind_Failcheck) then {
		profileNamespace setVariable ["cba_keybinding_registry", []];
		saveProfileNamespace;
	};
