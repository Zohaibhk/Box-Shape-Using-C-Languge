#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void Line_A(int , int, int , int , int);
void main () {
int x1 = 1;
int y1 = 1;
int endx = 400;
int endy = 1;
int gd = DETECT,gmode;
initgraph(&gd, &gmode,"C:\\TC\\BGI");
// Upper Diamond
while (endx >= 200) {
		{
		Line_A(x1,y1,endx,endy,15);
		x1 = y1 = endy+= 10;
		endx-= 10;


	}

}

// Lower Diamond
endx = 400;
x1 = 1;
y1 = 400;
endy = 400;

	while (endx <=400) {
		Line_A(x1,y1,endx,endy,15);
		x1 +=10;
		y1 = endx = endy -= 10;
	}
//Left Diamond
endx = 1;
x1 = 1;
y1 = 1;
endy = 400;

	while (endy >=200) {
		Line_A(x1,y1,endx,endy,10);
		x1 += 10;
		y1 += 10;
		endx += 10;
		endy -= 10;
	}
//Right Diamond
endx = 400;
x1 = 400;
y1 = 1;
endy = 400;

	while (endy >=200) {
		Line_A(x1,y1,endx,endy,10);
		x1 -= 10;
		y1 += 10;
		endx -= 10;
		endy -= 10;
	}


getch();
closegraph();
}// ending main method
void Line_A(int x1, int y1,int  x2,int y2 , int color) {
int dx;
int dy;
int xinc;
int yinc;
int steps;
int x;
int y;
int i;
//int gd = DETECT,gmode;
dx = x2-x1;
dy = y2-y1;
	if (abs(dx) > abs(dy))
	steps = dx;
	else
	steps = dy;
xinc = dx/steps;
yinc = dy/steps;

x = x1;
y = y1;

	putpixel(x , y , color);
	for (i = 0; i <= steps; i++) {
		x+=xinc;
		y+=yinc;
		putpixel(x , y , color);
	}

  // getche();
  // closegraph();
}