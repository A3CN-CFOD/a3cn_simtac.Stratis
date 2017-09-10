//create UI event keyspressed
disableSerialization;

sleep 0.1;

hint "Key triggred";

PXS_keyEventHandler = (findDisplay 5000) displayAddEventHandler ["KeyDown","_this call simtac_fnc_keyFunction"];
/* PXS_mouseWheelEventHandler = (findDisplay 1000) displayAddEventHandler ["MouseZChanged","_this call PXS_mouseZChanged"]; */
