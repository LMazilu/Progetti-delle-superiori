function contaCLICK(){
	var a=eval(document.getElementById("Conta").value);
	a++;
	document.getElementById("Conta").value=a;
}


function ReadONLY(){
	document.getElementById("Conta").readOnly = true;
}