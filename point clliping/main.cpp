#include <iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    int xmin,ymin,xmax,ymax,x1,y1,x2,y2;

    cout << "enter the min and max value : ";
    cin >> xmin>>ymin>>xmax>>ymax;
    rectangle(xmin,ymin,xmax,ymax);  //  rectangle(int left, int top, int right, int bottom)

    cout << "enter the line coordinates : ";
    cin >> x1>>y1>>x2>>y2;
    line(x1,y1,x2,y2);
    if(xmin <=x1 && xmax >= x1 && ymin <=y1 && ymax >=y1)
    {
        if(xmin <=x2 && xmax >= x2 && ymin <=y2 && ymax >=y2)
        cout<< "line has inside the boundary";
     else
        cout << "line has outside the bondary";
    }
    else
        cout << "line has outside the boundary";

    getch();
    closegraph();
}
