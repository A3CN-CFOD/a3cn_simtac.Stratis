


params["_positionFromMap"];

_position = _positionFromMap ctrlMapScreenToWorld [ (_this select 2), (_this select 3) ];

PXS_SatelliteTarget = "Logic" createVehicleLocal _position; //PXS_SATCOM_Logic
PXS_SatelliteTarget setDir 0;

call simtac_fnc_viewSatellite;
ctrlShow [1010, false ];
ctrlShow [3000, false ];


