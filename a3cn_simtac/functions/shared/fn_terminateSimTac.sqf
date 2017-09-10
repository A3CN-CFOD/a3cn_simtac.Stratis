disableSerialization;

setViewDistance PXS_ViewDistance;

[1] call simtac_fnc_adjustCamera;

(findDisplay 5000) displayRemoveEventHandler ["KeyDown",PXS_keyEventHandler];
//(findDisplay 1000) displayRemoveEventHandler ["MouseZChanged",PXS_mouseWheelEventHandler];

PXS_SatelliteCamera cameraEffect ["terminate","back"];
camDestroy PXS_SatelliteCamera;

closeDialog 5000;

deleteVehicle PXS_SatelliteTarget;

PXS_SatelliteActive = false;
