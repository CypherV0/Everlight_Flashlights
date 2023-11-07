// ================================================================
// *
// *	AUTHOR: Cypher
// *
// *	Description:
// *		Displays a hint message for specific time
// *
// *	Usage:
// *		["Text", Display Time] call Everlight_Flashlight_Fnc_Hint;
// *		["Hello", 5] call Everlight_Flashlight_Fnc_Hint;
// *
// *	Parameters:
// *		0:	String or Array:	Text
// *		1:	Number:	Time the hint is active
// *
// *	Returning Value:
// *		None
// *
// ================================================================


/* <- Remove this if on-screen hint when switching mode is desired

private ["_Text","_Time"];

_this Spawn {
	_Text = [_this, 0, "Error", ["",[]]] call BIS_fnc_param;
	_Time = [_this, 1, -1, [0]] call BIS_fnc_param;
		if (typeName _Text == "STRING") then {
			hintSilent _Text;
		};
		if (typeName _Text == "ARRAY") then {
			hintSilent format _Text;
		};
		Sleep _Time;
		hintSilent "";
};

*/
