function grey(){
	var video = document.getElementById("mioVideo");
	var cambioLabel = document.getElementById("riproduci");
	var cambioTooltip = document.getElementById("riproduci");

	if(video.paused){
		video.play();
		cambioLabel.textContent = "||";
		cambioTooltip.title = "pausa";
	}
	else{
		video.pause();
		cambioLabel.textContent = ">";
		cambioTooltip.title = "riproduci";
	}
}


function reGrey(){
	var video = document.getElementById("mioVideo");
	video.currentTime = 0; 
}

function gottaGoGrey(value){
	var video = document.getElementById("mioVideo");
	video.currentTime += value;
}

function greyUp(value){
	var video = document.getElementById("mioVideo");
	video.volume += 0.1;
}

function greyDown(value){
	var video = document.getElementById("mioVideo");
	video.volume -= 0.1;
}