function hour_change(){
	d = new Date();
	//assegnazione di ore,minuti,secondi,millisecondi nelle variabili
	h = d.getHours();
	m = d.getMinutes();
	s = d.getSeconds();
	ms = d.getMilliseconds();
	s += ms/1000;
	m += s/60;
	h += m/60;
	var canvas = document.getElementById("MyCanvas");
	var context = canvas.getContext("2d");
	//Disegna il quadrante(cerchio)
	context.beginPath();
	context.arc(200,200,150,0,2*Math.PI,false);
	context.closePath();
	context.fillStyle = "black";
	context.fill();
	context.lineWidth = 1;
	context.strokeStyle = "white";
	context.stroke();
	//seconds
	var sangle = s * Math.PI / 30;
	var sx = 200+140*Math.sin(sangle);
	var sy = 200-140*Math.cos(sangle);
	context.beginPath();
	context.moveTo(200,200);
	context.lineTo(sx,sy);
	context.closePath();
	context.lineWidth = 1;
	context.stroke();
	//minutes
	var mangle= m*Math.PI/30;
	var mx = 200+145*Math.sin(mangle);
	var my = 200-145*Math.cos(mangle);
	context.beginPath();
	context.moveTo(200,200);
	context.lineTo(mx,my);
	context.closePath();
	context.lineWidth = 3;
	context.stroke();
	//hour
	var hangle=h*Math.PI/6;
	var hx= 200+100*Math.sin(hangle);
	var hy= 200-100*Math.cos(hangle);
	context.beginPath();
	context.moveTo(200,200);
	context.lineTo(hx,hy);
	context.closePath();
	context.lineWidth = 5;
	context.stroke();
	//timeout
	setTimeout("hour_change()",25);
	//write
	context.font = "32pt Comics sans";
	context.strokeText("3",314,200);
	context.strokeText("6",188,340);
	context.strokeText("9",60,204);
	context.strokeText("12",171,100);

}