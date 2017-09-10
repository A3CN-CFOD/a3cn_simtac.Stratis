private["_type","_text"];

_type = _this select 0;

// PP effects
if (_type == 1) then
{
    ppEffectDestroy PXS_ppGrain;
};

if (_type == 2) then
{
	camUseNVG false;
    PXS_ppGrain = ppEffectCreate ["filmGrain",2005];
	PXS_ppGrain ppEffectEnable true;
	PXS_ppGrain ppEffectAdjust [0.02,1,1,0,1];
	PXS_ppGrain ppEffectCommit 0;

};
if (_type == 6) then
{
	PXS_ppGrain = ppEffectCreate ["filmGrain",2005];
	PXS_ppGrain ppEffectEnable true;
	PXS_ppGrain ppEffectAdjust [0.02,1,1,0,1];
	PXS_ppGrain ppEffectCommit 0;

};


// FLIR setting
switch (_type) do
{
	camUseNVG false;
    case 3:	{true setCamUseTi 7;}; //thermograph
	case 4:	{true setCamUseTi 0;};
	case 5:	{true setCamUseTi 1;};
	default
	{
		false setCamUseTi 0;
		false setCamUseTi 1;
	};
};

// FLIR text
_text = "";
switch (_type) do
{
	case 3:	{_text = "T-FLIR";};
	case 4:	{_text = "W-FLIR";};
	case 5:	{_text = "B-FLIR";};
    case 6:	{_text = "INFR";};

	default
	{
		_text = "NRM";
	};
};
ctrlSetText [1090,_text];
