#include <iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    int x1,y1,x2,y2,dx,dy,p,n;
    cout << "enter the x1 and y1 value";
    cin>> x1>>y1;

    cout << "enter the x2 and y2 value";
    cin >> x2>>y2;

    dx=x2-x1;
    dy=y2-y1;

    p=2*dy-dx;

    putpixel(x1,y1,WHITE);

    if(x2<y2)
        n=x2;
    else
        n=y2;
        for(int i=0;i<=n;i++)
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
            putpixel(x1,y1,WHITE);
        }
    getch();
    closegraph();
}
