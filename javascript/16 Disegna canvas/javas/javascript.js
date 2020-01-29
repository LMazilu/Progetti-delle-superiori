function set(){

	context=document.getElementById("canvas").getContext("2d");
	var a=eval(document.getElementById("width").value);
	var b=eval(document.getElementById("height").value);
	context.clearRect(0, 0, document.getElementById("canvas").width, document.getElementById("canvas").height);
	context.fillStyle="blue";
	context.fillRect(0,0,a,b);
	context.fill();

}