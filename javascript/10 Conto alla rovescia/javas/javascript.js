function set(){
	m=eval(document.getElementById("minuti").value);
	s=0;
	document.getElementById("tempo").innerHTML=m+":00";
	angolo = 2*Math.PI;
	secondi= m*60;

}

function start(){
	if(s!=0){
		s--;
	}else{
		s=59;
		m--;
	}
	angolo-=2*Math.PI/secondi;
	mioCanvas=document.getElementById("canvasRovescia");
	context=mioCanvas.getContext("2d");
	context.beginPath();
	context.clearRect(0,0,400,400);
	context.arc(200,200,100,0,angolo,false);
	context.lineWidth=150;
	context.strokeStyle="blue";
	context.stroke();
	document.getElementById("tempo").innerHTML=m+":"+s;
	if(s!=0 || m!=0){
		setTimeout("start()",1000);
	}else{
		alert("Tempo scaduto!");

	}

	}

function stop(){
	s=1;
	m=0;

}