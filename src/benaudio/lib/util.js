
rad=function(a){return a%360*Math.PI/180};
deg=function(a){return a*180/Math.PI%360};
function degcos(a) { return Math.cos((a/360.0)*2*Math.PI); }
function degsin(a) { return Math.sin((a/360.0)*2*Math.PI); }

errmsg = function(s)
{
	alert(s)
}
alerdbg = function(s)
{
	alert(debugprint(s))
}

$=function(sId) { return document.getElementById(sId); }

//found online
function debugprint(obj, maxDepth, prefix){
   var result = '';
   if (!prefix) prefix='';
   for(var key in obj){
       if (typeof obj[key] == 'object'){
           if (maxDepth !== undefined && maxDepth <= 1){
               result += (prefix + key + '=object [max depth reached]\n');
           } else {
               result += debugprint(obj[key], (maxDepth) ? maxDepth - 1: maxDepth, prefix + key + '.');
           }
       } else {
           result += (prefix + key + '=' + obj[key] + '\n');
       }
   }
   return result;
}

String.prototype.startsWith = function(s)
{
return (this.indexOf(s)===0);
}

//consider making a pool object?


Time = {};
Time.createTimer = function() 
{
	return new _Timer();
}
_Timer = function() //intended to be constructed with new.
{
	this.dt = new Date();
}
_Timer.prototype.check = function()
{
	var n = new Date();
	var nDiff = n.getTime() - this.dt.getTime();
	return nDiff;
}

function makeArray(int_n)
{
	if (Float32Array)
	{
		return new Float32Array(int_n);
	}
	else
	{
		errmsg('Warning: typed arrays not available, using slower arrays')
		var ar=[];
		for (var i=0; i<int_n; i++)
			ar[i] = 0.0;
		return ar;
	}
}