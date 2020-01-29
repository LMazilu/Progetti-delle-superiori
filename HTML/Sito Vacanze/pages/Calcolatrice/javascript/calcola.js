
function piu(){
	
	val1=eval(document.getElementById("display").value);
	op= "piu";
	document.getElementById("display").value='';
}

function meno(){

	val1=eval(document.getElementById("display").value);
	op= "meno";
	document.getElementById("display").value='';
}

function per(){
	
	val1=eval(document.getElementById("display").value);
	op= "per";
	document.getElementById("display").value='';
}

function diviso(){
	
	val1= eval(document.getElementById("display").value);
	op= "diviso";
	document.getElementById("display").value='';
}

function uguale(){
	val2=eval(document.getElementById("display").value);


	switch (op) {
		case "diviso":
		risultato=val1/val2;
		break;
		
		case "per":
		risultato=val1*val2;
		break;
		
		case "piu":
		risultato=val1+val2;
		break;
		
		case "meno":
		risultato=val1-val2;
		break;
		
		default:
		risultato="Errore!";
	}
	document.getElementById("display").value= risultato;
}