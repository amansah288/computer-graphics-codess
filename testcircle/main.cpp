#include<graphics.h>
int main()
{



    //int gd=DETECT, gm;
    //initgraph(&gd, &gm, (char*)"");
    for(int c=0;c<=4;c++)
    {
        int gdriver = DETECT, gmode;
    int xmax, ymax;
    initgraph(&gdriver, &gmode," ");
    setcolor(getmaxcolor());
    xmax = getmaxx();
    ymax = getmaxy();
    line(xmax/2,0,xmax/2,ymax);
    line(0,ymax/2,xmax,ymax/2);



    setlinestyle(c,0,1);
    circle(320, 240, 200);
    }
    getch();
    closegraph();
    return 0;
}
