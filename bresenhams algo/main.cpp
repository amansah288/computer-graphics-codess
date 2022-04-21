#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,dy,dx,p,steps;

    initgraph(&gd,&gm," ");

    cout << "enter the value x1 and y1" << endl;
    cin >> x1>>y1;
    cout << "enter the value x2 and y2" << endl;
    cin >>x2>>y2;

    dx=x2-x1;
    dy=y2-y1;

    if(abs(dx)>abs(dy))
        steps= dx;
    else
    {
        steps=dy;
    }

    p=2*dy-dx;

    putpixel(x1,y1,3);

    for(int i=0;i<=steps;i++)
    {
        putpixel(x1,y1,3);
        if(p<0)
        {
            x1++;
            p=p+2*dy;
        }
        else
        {
            p=p+2*dy-2*dx;
        }
    }
    getch();
    closegraph();
}
