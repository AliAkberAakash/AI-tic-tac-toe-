// author : Md. Mubdiur Rahman
// milestone: player info, event control, menu


var fs = require('fs');
var es = require('child_process');
const remote = require('electron').remote;
let w = remote.getCurrentWindow();
var windowpage = null;
var resultPublished = null;
var resultshown = null;
function startGame() {
	fs.writeFileSync('./comfile.txt', 'nnnnnnnnn10N\n', 'utf8', (err) => {});
	//let stdout = execSync('tic.exe "' + 'nnnnnnnnn10N"');
	var stdout = es.execSync('tic.exe ' + '"nnnnnnnnn10N"');
	windowpage = 1;

	//fs.unlinkSync('./temp.txt');
	//console.log(c2e);
	fs.writeFile('./comfile.txt', stdout.toString(), 'utf8', (err) => {});
	resultPublished = 0;
	resultshown = 0;
}

function setup() {
	createCanvas(windowWidth, windowHeight);
}

startGame();

function draw() {
	background(11,11,11);
	noFill();
	stroke(200,200,200);
	strokeWeight(4);
	let x = 500;
	rectMode(CENTER);
	var boxstr = fs.readFileSync('./comfile.txt', 'utf8');
	if((boxstr[10]==='p' || boxstr[10] === 'c' || boxstr[10] === 'd') && resultshown===0 && !(windowpage===2))
	{
		resultPublished = 1;
		windowpage = 3;
	}

	if(windowpage === 1) {
		// followings are for the grid
		rect(450, 300, x, x);
		line(365, 50, 365, 550);
		line(532, 50, 532, 550);
		line(200, 217, 700, 217);
		line(200, 384, 700, 384);
		var boxstr = fs.readFileSync('./comfile.txt', 'utf8');

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
		// Draw menu
		strokeWeight(2);
		rectMode(CORNER);
		rect(770, 245, 800, 90);
		line(770, 275, 1000, 275);
		line(770, 305, 1000, 305);
		noStroke();
		fill(200, 200, 200);
		textSize(20);
		var tx = 770;
		var ty = 245;
		text('New Game', tx+10, ty+22);
		text('About', tx+10, ty+52);
		text('Exit', tx+10, ty+82);
	}
	else if(windowpage === 2) {
		rectMode(CORNER);
		noStroke();
		fill(200, 200, 200);
		textSize(18);
		var tx = 200;
		var ty = 150;
		text('A native executable file written in C++ is working\nas a brain for this game.\nFor every other purpose nodejs has been used along \nwith Electron and P5js.\n\nDevelopers: \n\n    Ali Akber Aakash         (github: AliAkberAakash) \n    Md. Mubdiur Rahman  (github: mubdiur)\n', tx, ty);
		textSize(20);
		text('Go Back', 427, 425);
		noFill();
		strokeWeight(1);
		stroke(200,200,200);
		rect(368, 386, 196, 63);
	}
	else if(windowpage===3) {
		strokeWeight(2);
		rectMode(CORNER);
		rect(770, 245, 800, 90);
		line(770, 275, 1000, 275);
		line(770, 305, 1000, 305);
		noStroke();
		fill(200, 200, 200);
		textSize(20);
		var tx = 770;
		var ty = 245;
		text('New Game', tx+10, ty+22);
		text('About', tx+10, ty+52);
		text('Exit', tx+10, ty+82);
		textSize(50);
		if (boxstr[10]==='p') text('VICTORY!\n', 300, 300);
		else if(boxstr[10]==='c') text('DEFEAT!\n', 360, 300);
		else if(boxstr[10]==='d') text("DRAW!\n", 360, 300)
		textSize(20);
		text('Go Back', 427, 425);
		noFill();
		strokeWeight(1);
		stroke(200,200,200);
		rect(368, 386, 196, 63);
	}


}
// w/h = 128
var calx = null;
var caly = null;
function mouseClicked() {
	if((mouseX>200 && mouseX<700) && (mouseY>50 && mouseY<550) && windowpage===1 && resultPublished === 0) {
		calx = floor(((mouseX-200)/167)+1);
		caly = floor(((mouseY-50)/167)+1);
		var gg = ((caly*3) + calx) - 4;
		var gottext = fs.readFileSync('./comfile.txt', 'utf8');
		//console.log(gottext);
		if(gottext[gg] === 'n')
		{
			gg = gg+1;
			gottext = setCharAt(gottext, 11, gg.toString());
			fs.writeFileSync('./comfile.txt', gottext, 'utf8');
			let stdout = es.execSync('tic.exe "' + gottext + '"');
			//fs.unlinkSync('./temp.txt');
			fs.writeFile('./comfile.txt', stdout.toString(), 'utf8', (err) => {});
		}
	}
	else if((mouseX>770 && mouseX<920) && (mouseY>245 && mouseY<335) && (windowpage===1 || windowpage===3)) {
		if(mouseY<275) newGameFunc();
		else if(mouseY> 275 && mouseY < 305) aboutFunc();
		else exitFunc();
	}
	if(windowpage===2 || windowpage===3) {
		if(mouseX>368 && mouseX<(368+196) && mouseY>386 && mouseY<(386+63)) {
			if(windowpage===3) {
				resultshown = 1;
			}
			windowpage = 1;
		}
	}
}

function newGameFunc() {
	startGame();
}

function aboutFunc() {
	windowpage=2;
}

function exitFunc() {
	w.close();
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
