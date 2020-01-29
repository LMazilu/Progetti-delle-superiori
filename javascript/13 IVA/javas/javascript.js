function calcolaIVA(){
	var a=eval(document.getElementById("Prezzo").value);
	var iva= 22;
	var b;
	var c;
	b=a/100;
	b=b*22;
	c=a+b;
	if(a!= null){
		alert("Prezzo prima dell'iva: "+a+" Euro"+"\n Iva: "+iva+" %"+"\n Prezzo dopo l'iva: "+c+" Euro");
	}

	else{
		alert("Uno o piu' campi sono vuoti!")
	}
	
}


function calcolaRAGGIO(){
	var a=eval(document.getElementById("Raggio").value);
	var b=3.14;
	var c=2;
	var d=2*a*b;
	var e=a*a*b;
	d= Math.trunc(d*100) / 100;
	if(a != null){
		alert("Lunghezza circonferenza: "+d+" cm"+"\n Area: "+e+" cm"+"\n Raggio: "+a+" cm");
	}

	else{
		alert("Uno o piu' campi sono vuoti!")
	}
	

}

function calcolaAREA(){
	var a=eval(document.getElementById("Base").value);
	var b=eval(document.getElementById("Altezza").value);
	var c=a*b;
	if(a != null && b != null){
		alert(" Base: "+a+" cm"+"\n Altezza: "+b+" cm"+"\n Area Rettangolo: "+c+" cm");
	}

	else{
		alert("Uno o piu' campi sono vuoti!")
	}
	
}


function calcolaREDDITO(){
	var a=eval(document.getElementById("Reddito").value);
	var b;
	var c;
	if(a<=29999 && a>=0){
		b=a/100;
		b=b*20;
		c=a-b;
		alert(" Reddito: "+a+" Euro"+"\n Imposta(20%): "+b+" Euro"+"\n Reddito con imposta: "+c+" Euro");
	}

	else if (a>=30000){
		b=a/100;
		b=b*30;
		c=a-b;
		alert(" Reddito: "+a+" Euro"+"\n Imposta(30%): "+b+" Euro"+"\n Reddito con imposta: "+c+" Euro");
	}

	else {
		alert("Uno o piu' campi sono vuoti!")
	}

}