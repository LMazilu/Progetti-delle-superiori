function disegna(){
	m=eval(document.getElementById("maschi").value);
	f=eval(document.getElementById("femmine").value);
	tot=m+f;
	percf=(f*100)/tot;
	percm=(m*100)/tot;
	mcanvas=(400/100)*percm;
	fcanvas=(400/100)*percf;
	canvas=document.getElementById("canvas");
	context=canvas.getContext("2d");
	context.clearRect(0,0,400,400);
	context.beginPath();
	context.fillRect(250,400,22,-mcanvas);
	context.fillRect(200,400,22,-fcanvas);
	context.stroke();
	context.closePath();

}