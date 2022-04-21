#include <graphics.h>

void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    int curent;
    curent = getpixel(x,y);
	if( (curent != boundary_color) &&  (curent != fill_color))
	{
		putpixel(x, y, fill_color);
		boundaryFill4(x + 1, y, fill_color, boundary_color);
		boundaryFill4(x, y + 1, fill_color, boundary_color);
		boundaryFill4(x - 1, y, fill_color, boundary_color);
		boundaryFill4(x, y - 1, fill_color, boundary_color);
	}
}


int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm," ");

	int x = 250, y = 200, radius = 50;

	circle(x, y, radius);
	boundaryFill4(x, y, 2, 15);

	delay(0.1);
	getch();
	closegraph();

	return 0;
}

