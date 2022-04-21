#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;

    int gdriver = DETECT, gmode;
    int xmax, ymax;
    initgraph(&gdriver, &gmode," ");
    setcolor(getmaxcolor());
    xmax = getmaxx();
    ymax = getmaxy();
    line(xmax/2,0,xmax/2,ymax);
    line(0,ymax/2,xmax,ymax/2);


    cout << "enter the x1 & y1 value : ";
    cin >> x1 >> y1;
    cout << "enter the x2 & y2 value : ";
    cin >> x2 >> y2;

    setlinestyle(3,0,1);
    line((xmax/2)+x1,(ymax/2)-y1,(xmax/2)+x2,(ymax/2)-y2);


    getch();
    closegraph();
    return 0;
}
