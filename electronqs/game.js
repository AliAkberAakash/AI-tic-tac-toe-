// author : Md. Mubdiur Rahman
// milestone: player info, event control, menu


var fs = require('fs');


fs.writeFile('./e2c.txt', 'nnnnnnnnn10\n', 'utf8', (err) => {});
fs.writeFile('./c2e.txt', 'nnnxnnnnn0\n', 'utf8', (err) => {});


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

	var boxstr = fs.readFileSync('./c2e.txt', 'utf8');
	// examples:
	//var boxnom = null;
	for (var i = 0 ; i< 9 ; i++) {
		if (boxstr[i]==='x') {
			var indexY = floor(((i)/3)+1);
			var indexX = floor(((i)%3)+1);
			drawCross(boxX[indexX], boxY[indexY]);
		}
		else if(boxstr[i]==='o') {
			var indexY = floor(((i)/3)+1);
			var indexX = floor(((i)%3)+1);
			drawCircle(boxX[indexX], boxY[indexY]);
		}
	}
}
// w/h = 128
var calx = null;
var caly = null;
function mouseClicked() {
	console.log("clicked");
	if((mouseX>200 && mouseX<700) && (mouseY>50 && mouseY<550)) {
		calx = floor(((mouseX-200)/167)+1);
		caly = floor(((mouseY-50)/167)+1);
		var gg = ((caly*3) + calx) - 4;
		var gottext = fs.readFileSync('./c2e.txt', 'utf8');
		console.log(gottext);
		if(gottext[gg] === 'n')
		{
			gottext = setCharAt(gottext, gg, 'x');
			fs.writeFileSync('./c2e.txt', gottext, 'utf8');
			console.log(gottext[gg]);
		}
	}
}

function drawCross(x,y) {
	line(x, y, x+125, y+125);
	line(x, y+125, x+125, y);
}

function drawCircle(x,y) {
	ellipse(x+63, y+63, 125, 125);
}

function setCharAt(str,index,chr) {
    if(index > str.length-1) return str;
    return str.substr(0,index) + chr + str.substr(index+1);
}

var boxX = {1:221, 2:387, 3:554};
var boxY = {1:71, 2:238, 3:405};
