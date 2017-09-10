
while {true} do
{
	if (!(PXS_SatelliteActive)) exitWith {};
	

	ctrlSetText [1091,format ["%1",mapGridPosition getPos PXS_SatelliteTarget]];

	sleep 0.1;
};
