function disegna(){
	m=eval(document.getElementById("maschi").value);
	f=eval(document.getElementById("femmine").value);
	context=document.getElementById("canvas").getContext("2d");
	tot=m+f;
	angolo=2*Math.PI;
	percf=(f*angolo)/tot;
	percm=(m*angolo)/tot;


	context.beginPath();
	context.clearRect(0,0,800,800);
	context.arc(200,200,100,0,percf,false);
	context.lineTo(200,200);
	context.closePath();
	context.fillStyle="red";
	context.fill();

	context.beginPath();
	context.arc(200,200,100,percf,percf+percm,false);
	context.lineTo(200,200);
	context.closePath();
	context.fillStyle="blue";
	context.fill();

}