// author : Md. Mubdiur Rahman
// milestone: player info, event control, menu

function setup() {
	createCanvas(windowWidth, windowHeight);
}

function draw() {
	background(11,11,11);
	noFill();
	stroke(200,200,200);
	strokeWeight(4);
	let x = 500;
	rectMode(CENTER)
	rect(450, 300, x, x);
	line(365, 50, 365, 550);
	line(532, 50, 532, 550);
	line(200, 217, 700, 217);
	line(200, 384, 700, 384);


	// draw a cross in first boxe
	var boxnom = 5;
	var indexY = floor(((boxnom-1)/3)+1);
	var indexX = floor(((boxnom-1)%3)+1);
	drawCross(boxX[indexX], boxY[indexY]);
	drawCircle(boxX[1], boxY[1]);
	drawCircle(boxX[1], boxY[3]);

}
// w/h = 128

function drawCross(x,y) {
	line(x, y, x+125, y+125);
	line(x, y+125, x+125, y);
}

function drawCircle(x,y) {
	ellipse(x+64, y+64, 125, 125);
}
var boxX = {1:221, 2:387, 3:554};
var boxY = {1:71, 2:238, 3:405};
