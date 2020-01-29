function GPS(){
	if(navigator.geolocation){
		navigator.geolocation.getCurrentPosition(mappa_gmaps);
	}else{
		alert('Il broser in uso non supporta la geolocalizzazione');
	}

	}

function mappa_gmaps(map){
		var posizione= new google.maps.LatLng(map.coords.latitude, map.coords.longitude);
		opzioni= {
		zoom:17,
		center: posizione,
		mapTypeId: google.maps.MapTypeId.ROADMAP},
		riquadro= document.getElementById("mappa1"),
		mia_mappa= new google.maps.Map(riquadro,opzioni),
		marker= new google.maps.Marker({
		position:posizione,
		map:mia_mappa,
		title: "Ti trovi qui!"});
	}