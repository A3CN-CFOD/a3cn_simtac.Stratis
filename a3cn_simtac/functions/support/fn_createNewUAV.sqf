/*
	Author: Jonathan "Toaster" Pereira

	Description:
    Provides a new UAV for operators in the field using the map.

	Parameter(s):
		0: ARRAY - Position of the UAV to be spawned in
		
	Returns:
	OBJECT
*/

params["_positionFromMap"];




if (count arrUAV < allowedUAVs) then {

_position = _positionFromMap ctrlMapScreenToWorld [ (_this select 2), (_this select 3) ];

_randomnumber = floor random 100000;
_name = "UAV" + (str _randomnumber);
_markerstr = createMarkerLocal [_name, [_position select 0, _position select 1]];
_markerstr setMarkerShapeLocal "ICON";
_markerstr setMarkerTypeLocal "SELECT";

_dir = random 360;
_radius = 1000;
_height = 200;

_spawnUAV = [(_position select 0) + (sin _dir *_radius), (_position select 1) + (cos _dir *_radius), _height];

_uav = createVehicle ["B_UAV_01_F", _spawnUAV, [], 0, "FLY"];
createVehicleCrew _uav;
_uav flyInHeight _height;

_uavGroup = group _uav;
_wp =_uavGroup addWaypoint [_position, 0];
_wp setWaypointType "LOITER";

arrUAV pushBack [_name];

_uav setVariable ["uavName",_name, false];

_uav addEventHandler ["Killed", {
    arrUAV deleteAt (arrUAV find [(_this select 0) getVariable ["uavName",nil]]); 
    deleteMarkerLocal ((_this select 0) getVariable ["uavName",nil]);
}];


} else {
    hint "Você já tem drone no ar"; //TODO
};


