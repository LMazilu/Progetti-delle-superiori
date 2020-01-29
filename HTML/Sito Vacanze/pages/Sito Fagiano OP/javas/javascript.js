var gb00 = 0;

function start(){
	gb00 = 0;
}  

function openside(){
if(gb00 == 0){
	document.getElementById("sidebar").style.display = "block";
	gb00 = 1;
}
else{
	document.getElementById("sidebar").style.display = "none";
	gb00 = 0;
}
}

