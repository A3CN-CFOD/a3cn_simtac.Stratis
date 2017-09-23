params["_command"];

#define FACTOR 50


switch (_command) do
{
    case "CenterOn":
    {
        PXS_SatelliteTarget setPos (getPos player);
        call simtac_fnc_updateCamera;
    };
    
    
    case "MoveForward":
    {
        PXS_SatelliteTarget setPos [((getPos PXS_SatelliteTarget) select 0) - PXS_movementDelta,((getPos PXS_SatelliteTarget) select 1) + PXS_movementDelta,(getPos PXS_SatelliteTarget) select 2];
        call simtac_fnc_updateCamera;
    };
    
    case "MoveBack":
    {
        PXS_SatelliteTarget setPos [((getPos PXS_SatelliteTarget) select 0) + PXS_movementDelta,((getPos PXS_SatelliteTarget) select 1) - PXS_movementDelta,(getPos PXS_SatelliteTarget) select 2];
        call simtac_fnc_updateCamera;
    };
    

    case "TurnLeft":
    {
        PXS_SatelliteTarget setPos [((getPos PXS_SatelliteTarget) select 0) - PXS_movementDelta,((getPos PXS_SatelliteTarget) select 1) - PXS_movementDelta,(getPos PXS_SatelliteTarget) select 2];
        call simtac_fnc_updateCamera;
    };
    
    case "TurnRight":
    {
        PXS_SatelliteTarget setPos [((getPos PXS_SatelliteTarget) select 0) + PXS_movementDelta,((getPos PXS_SatelliteTarget) select 1) + PXS_movementDelta,(getPos PXS_SatelliteTarget) select 2];
        call simtac_fnc_updateCamera;
    };
    
    case "ZoomIn":
    {
        if ((PXS_SatelliteZoom + (0.02 * FACTOR)) <= 47) then
        {
            PXS_SatelliteFOV = PXS_SatelliteFOV - (0.0005 * FACTOR);
            PXS_SatelliteZoom = PXS_SatelliteZoom + (0.02 * FACTOR);
            call simtac_fnc_updateCamera;
        };
    };
    
    case "ZoomOut":
    {
        if ((PXS_SatelliteZoom - (0.02 * FACTOR)) >= 0.1) then
        {
            PXS_SatelliteFOV = PXS_SatelliteFOV + (0.0005 * FACTOR);
            PXS_SatelliteZoom = PXS_SatelliteZoom - (0.02 * FACTOR);
            call simtac_fnc_updateCamera;
        };
    };
    default
    {
        _return = false;
    };
};


/*["itemAdd",["inputLoop",{
    if(inputAction "User1" > 0) then {
        hint "we're pressing User1!";
    };
}]] call BIS_fnc_loop;*/
