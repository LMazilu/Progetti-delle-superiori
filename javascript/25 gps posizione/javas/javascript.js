function GPS(){
	if(navigator.geolocation){
		navigator.geolocation.getCurrentPosition(mappa_gmaps);
	}else{
		alert('Il browser in uso non supporta la geolocalizzazione');
	}

	}


var image = 'prova.bmp';

function mappa_gmaps(map){
		var posizione= new google.maps.LatLng(map.coords.latitude, map.coords.longitude);
		var posizione2= new google.maps.LatLng(map.coords.latitude+0.5, map.coords.longitude+0.5);
		opzioni= {
		zoom:17,
		center: posizione,
		mapTypeId: google.maps.MapTypeId.ROADMAP},
		riquadro= document.getElementById("mappa1"),
		mia_mappa= new google.maps.Map(riquadro,opzioni),


		marker= new google.maps.Marker({
		position:posizione,
		map:mia_mappa,
		icon: image,
		title: "Ti trovi qui!"});


		marker= new google.maps.Marker({
		position:posizione2,
		map:mia_mappa,
		icon: image,
		title: "Ti trovi qui!"});
	}
	
function georeferenzia(){
	var indirizzo = document.getElementById('indirizzo');
	var geocoder = new google.maps.Geocoder();
	geocoder.geocode({'address': indirizzo}, funzioneCallback)
}

function funzioneCallback(risultati, status){
	if(status == google.maps.GeocoderStatus.OK){
		var coord = risultati[0].geometry.location;
		map.setCenter(coord);
		document.getElementById('latitutdine').value = coord.lat();
		document.getElementById('longitudine').value = coord.lng();
	}
	else alert("Error:"+ status);
}