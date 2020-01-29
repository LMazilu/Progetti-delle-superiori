var gb00 = 0;

function start() {
  gb00 = 0;
}

function openside() {
  if (gb00 == 0) {
    document.getElementById("sidebar").style.width = "150px";
    document.body.style.backgroundColor = "rgba(0,0,0,0.7)";
    gb00 = 1;
  } else {
    document.getElementById("sidebar").style.width = "0";
    document.body.style.backgroundColor = "white";
    gb00 = 0;
  }
}

function cambiaimmagine(clicked_id) {
  sezione = document.getElementById("sezione");
  if (clicked_id == "b1") {
	  sezione.innerHTML='<object type="text/html" data="../index.htm" ></object>';
  }
  if (clicked_id == "b2") {
  }
}
