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
	line(200, 217, 700, 207);
	line(200, 384, 700, 374);


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
	line(x, y, x+128, y+128);
	line(x, y+128, x+128, y);
}

function drawCircle(x,y) {
	ellipse(x+64, y+64, 128, 128);
}
var boxX = {1:218, 2:385, 3:552};
var boxY = {1:67, 2:229, 3:400};
