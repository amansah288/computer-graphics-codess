#include <iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;


int main()
{


    for(int c=0;c<=12;c++)
    {
    int gd=DETECT, gm;
    initgraph(&gd,&gm," ");


    circle(250,250,95);

    setfillstyle(c,1);     // ( patern, color)
    floodfill(251,253,15);  // (x,y, boarder)
    }
    getch();
    closegraph();
}
