mioCanvas = document.getElementById("canvas1");
context = mioCanvas.getContext("2d");

context.beginPath();
context.fillStyle = "rgba(0, 250, 0, 0.6)";
context.arc(200, 200, 150, 0, Math.PI*2, true);
context.fill();
context.stroke();
context.closePath();

context.beginPath();
context.fillStyle = "rgba(255, 40, 161, 0.6)";
context.arc(150, 250, 150, 0, Math.PI*2, true);
context.fill();
context.stroke();
context.closePath();

context.beginPath();
context.fillStyle = "rgba(100, 90, 230, 0.6)";
context.arc(250, 250, 150, 0, Math.PI*2, true);
context.fill();
context.stroke();
context.closePath();

context.beginPath();
context.fillStyle = "rgba(255, 246, 103, 0.4)";
context.arc(200, 300, 150, 0, Math.PI*2, true);
context.fill();
context.stroke();
context.closePath();