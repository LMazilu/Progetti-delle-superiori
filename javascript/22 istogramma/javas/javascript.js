function set(){

	context=document.getElementById("canvas").getContext("2d");
	a=eval(document.getElementById("primo").value);
	b=eval(document.getElementById("secondo").value);
	c=eval(document.getElementById("terzo").value);
	if(a>=0 && a<401 && b>=0 && b<401 && c>=0 && c<401){

	document.getElementById("invisible").style.visibility = 'visible';
	context.clearRect(0, 0, document.getElementById("canvas").width, document.getElementById("canvas").height);
	context.fillStyle="red";
	context.fillRect(150,400,22,-a);
	context.fill();
	context.fillStyle="green";
	context.fillRect(200,400,22,-b);
	context.fill();
	context.fillStyle="blue";
	context.fillRect(250,400,22,-c);
	context.fill();

	context.beginPath();
	context.moveTo(120,400);
	context.lineTo(400,400);
	context.stroke();
	context.fillText("x",390,395);
	context.lineWidth=1.01;


	context.moveTo(120,400);
	context.lineTo(120,0);
	context.stroke();
	context.fillText("y",110,5);
	context.lineWidth=2;
	context.closePath();

	}

	else{
		alert("valori troppo grandi/piccoli");
	}


}


function invisible(){
	document.getElementById("invisible").style.visibility = 'hidden';
}
