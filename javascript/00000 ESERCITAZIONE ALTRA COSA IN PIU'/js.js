function disegna(){

a=eval(document.getElementById("textcentrox").value);
b=eval(document.getElementById("textcentroy").value);
c=eval(document.getElementById("raggio").value);
w=document.getElementById("canvas").width;
h=document.getElementById("canvas").height;
canvas=document.getElementById("canvas");
context=canvas.getContext("2d");
context.clearRect(0,0,400,400);
context.beginPath();
context.arc(a,b,c,0,2*Math.PI,false);
context.stroke();
context.closePath();

}