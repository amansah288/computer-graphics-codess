#include <iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    triangle(100,200,100);


    return 0;
}
