function set(){

	context=document.getElementById("canvas").getContext("2d");
	a=eval(document.getElementById("primo").value);
	b=eval(document.getElementById("secondo").value);
	c=eval(document.getElementById("terzo").value);
	
	if(!isNaN(a) && !isNaN(b) && !isNaN(c))
	 {
   if(a>=0 && a<401 && b>=0 && b<401 && c>=0 && c<401){
	context.clearRect(0, 0, document.getElementById("canvas").width, document.getElementById("canvas").height);
	context.fillStyle="green";
	context.fillRect(150,400,22,-a);
	context.fill();
	context.fillStyle="white";
	context.fillRect(200,400,22,-b);
	context.fill();
	context.fillStyle="red";
	context.fillRect(250,400,22,-c);
	context.fill();
	}else{
		alert("valori troppo grandi/piccoli");
	}
	}
	else{
   alert("non e' un numero");
	}
}
