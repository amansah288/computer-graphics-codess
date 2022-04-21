#include <iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    float xc,yc,rx,ry,x,y,pk,p1k,p2k;

    initgraph(&gd,&gm," ");

    cout << "enter center of ellipse : \n" << endl;
    cin >> xc >> yc ;
    cout << " enter radius (rx & ry) of ellipse : \n" << endl;
    cin >> rx >> ry;

    x=0;
    y=ry;
    pk=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);

    while((2*ry*ry*x)<(2*rx*rx*y))
    {
        if(pk<=0)
        {
            x=x+1;
            p1k= pk+(2*ry*ry*x)+(ry*ry);
        }
        else
        {
            x=x+1;
            y=y-1;
            p1k= pk+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
        }

        pk=p1k;

        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
    }
    pk=((x+0.5)*(x+0.5)*ry*ry)+((y-1)*(y-1)*rx*rx)-(rx*rx*ry*ry);
    while(y>0)
    {
        if(pk>0)
        {
            y=y-1;
            p1k=pk-(2*rx*rx*y)+(rx*rx);
        }
        else
        {
            x=x+1;
            y=y-1;
            p1k=pk+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);
        }
        pk=p1k;

        putpixel(xc+x,yc+y,WHITE);
        putpixel(xc-x,yc+y,WHITE);
        putpixel(xc+x,yc-y,WHITE);
        putpixel(xc-x,yc-y,WHITE);
    }
    line(xc+rx,yc,xc-rx,yc);
    line(xc,yc+ry,xc,yc-ry);

    getch();

    return 0;
}
