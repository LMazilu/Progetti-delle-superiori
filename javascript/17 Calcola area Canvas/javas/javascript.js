function set(){

	context=document.getElementById("canvas").getContext("2d");
	if(document.getElementById("width").value>=0 && document.getElementById("width").value<401 && document.getElementById("height").value>=0 && document.getElementById("height").value < 401){

		var a=eval(document.getElementById("width").value);
	var b=eval(document.getElementById("height").value);
	context.clearRect(0, 0, document.getElementById("canvas").width, document.getElementById("canvas").height);
	context.fillStyle="blue";
	context.fillRect(0,0,a,b);
	context.fill();
	}
	else{ 
		alert("Numeri troppo grandi/piccoli!")
}

}




function calcolaAREA(){
	var a=eval(document.getElementById("width").value);
	var b=eval(document.getElementById("height").value);
	var c= a * b;
	document.getElementById("calcolaAREA").value=c;

}

function readONLY(){
	document.getElementById("calcolaAREA").readOnly = true;

}