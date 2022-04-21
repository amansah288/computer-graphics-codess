#include <iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x,y,x1,y1,x2,y2,dx,dy,p;
    initgraph(&gd,&gm," ");
    cout << "enter the value x1 and y1" << endl;
    cin >>x1>>y1;
    cout << "enter the value x2 and y2"<< endl;
    cin >> x2 >> y2;

    dx=x2-x1;
    dy=y2-y1;

    p= 2*dy - dx;

    putpixel(x1,y1,RED);
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
        putpixel(x1,y1,RED);
        delay(50);
    }
    getch();
    closegraph();
}
