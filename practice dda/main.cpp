#include <iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
     initgraph(&gd,&gm," ");

    int x1,y1,x2,y2,dx,dy,xinc,yinc,steps;

    cout<< "enter the x1 and y1 value : ";
    cin >>x1>>y1;
    cout<< "enter the x2 and y2 value : ";
    cin >>x2>>y2;

    dx=x2-x1;
    dy=y2-y1;

    if(abs(dx)>abs(dy))
     steps= abs(dx);
     else
        steps=abs(dy);

     xinc = dx/steps;
     yinc = dy/steps;

     for(int i =0;i<=steps;i++)
     {
         putpixel(x1,y1,WHITE);
         x1= x1+xinc;
         y1= y1+yinc;
     }

     getch();
     closegraph();
}
