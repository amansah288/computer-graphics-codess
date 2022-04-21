#include <iostream>
#include<graphics.h>
using namespace std;


int main(void)
{
    int gdriver = DETECT, gmode;
    int xmax, ymax;
    initgraph(&gdriver, &gmode," ");
    setcolor(getmaxcolor());
    xmax = getmaxx();
    ymax = getmaxy();
    line(xmax/2,0,xmax/2,ymax);
    line(0,ymax/2,xmax,ymax/2);

    //int gd=DETECT,gm;
    int x,y,x1,y1,x2,y2,dx,dy,p;
    //initgraph(&gd,&gm," ");
    cout << "enter the value x1 and y1" << endl;
    cin >>x1>>y1;
    cout << "enter the value x2 and y2"<< endl;
    cin >> x2 >> y2;

    dx=x2-x1;
    dy=y2-y1;

    p= 2*dy - dx;

    setlinestyle(DOTTED_LINE,3,1);
    putpixel((xmax/2)+x1,(ymax/2)-y1,WHITE);
    for(int i=0;i<dx;i++)
    {
        if(p<0)
        {
            x1++;
            p=p+2*dy;
        }
        else
        {
            x1++;
            y1++;
            p=p+2*dy-2*dx;
        }
        setlinestyle(DOTTED_LINE,3,1);
        putpixel((xmax/2)+x1,(ymax/2)-y1,WHITE);
        //delay(50);
    }

    getch();
    closegraph();
    return 0;
}
