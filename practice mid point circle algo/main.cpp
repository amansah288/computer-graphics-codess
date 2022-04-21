#include <iostream>
#include<graphics.h>
using namespace std;
int main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    int r,p0,pk,fcircle,x,y;

    cout << "enter the circle of radius";
    cin>> r;
    circle(200,200,r);
  /*
    p0= 1-r;
    pk=p0;
    x=0;
    y=r;
    //putpixel(0,r,WHITE);
    for(int i=1;i<=r;i++)
    {
        if( pk <0 )
        {
            x++;
            // putpixel(0,x,WHITE);
        }
       else
       {
           if(pk>=0)
           {
               x++;
               y--;
           }
       }
        putpixel(x,y,WHITE);
    }
    */
    getch();
    closegraph();
}
