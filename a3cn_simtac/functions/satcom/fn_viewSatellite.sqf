//script for launch the SATCOM camera

PXS_SatelliteActive = true; //SATCOM is activated

//set view distance
PXS_ViewDistance = viewDistance;
setViewDistance PXS_ViewDistanceNew;
setObjectViewDistance [PXS_ViewDistanceNew,800];

//view dialog interface
//PXS_SatelliteDialog = createDialog "PXS_RscSatellite";

//spawn info functions
[] spawn simtac_fnc_keyMain;
//[] spawn PXS_timeView;
[] spawn simtac_fnc_coordinatesView;

//create satellite camera
PXS_SatelliteCamera = "camera" camCreate [0,0,0];
PXS_SatelliteCamera cameraEffect ["internal","back"];
call simtac_fnc_updateCamera;

showCinemaBorder false;

//camera effect
ppEffectDestroy PXS_ppColor;
ppEffectDestroy PXS_ppInversion;
ppEffectDestroy PXS_ppGrain;

PXS_ppGrain = ppEffectCreate ["filmGrain",2005];
PXS_ppGrain ppEffectEnable true;
PXS_ppGrain ppEffectAdjust [0.02,1,1,0,1];
PXS_ppGrain ppEffectCommit 0;

