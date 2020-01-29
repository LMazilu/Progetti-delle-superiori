var gb00 = 0;

function start(){
	gb00 = 0;
}  

function openside(){
if(gb00 == 0){

		
	document.getElementById("sidebar").style.width = "150px";
    document.body.style.backgroundColor = "rgba(0,0,0,0.7)";
	gb00 = 1;
}
else{
	document.getElementById("sidebar").style.width = "0";
    document.body.style.backgroundColor = "white";
	gb00 = 0;
}
}


function cambiaimmagine(clicked_id){
	if(clicked_id=="b1"){
	document.getElementById("ImmagineDaCambiare").src = "img/home.jpg";
	}
	if(clicked_id=="b2"){
	document.getElementById("ImmagineDaCambiare").src = "img/img2.jpg";
	}
	if(clicked_id=="b3"){
	document.getElementById("ImmagineDaCambiare").src = "img/img3.jpg";
	}
	if(clicked_id=="b4"){
	document.getElementById("ImmagineDaCambiare").src = "img/img4.jpg";
	}
	if(clicked_id=="b5"){
	document.getElementById("ImmagineDaCambiare").src = "img/img5.jpg";	
	}
	if(clicked_id=="b6"){
	document.getElementById("ImmagineDaCambiare").src = "img/img6.jpg";	
	}
	if(clicked_id=="b7"){
	document.getElementById("ImmagineDaCambiare").src = "img/img7.jpg";
	}
}
