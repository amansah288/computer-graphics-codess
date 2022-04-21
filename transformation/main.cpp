#include <iostream>
#include<math.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
   // for(int i=0;i<3;i++)
    //{
    int gd=DETECT,gm,ch,tx,ty,theta,sx,sy;
    initgraph(&gd,&gm,"");

    cout<< "\n  Transformation ---\n" << "\n1. Translation\n" << "\n2. Rotation\n" << "\n3. Scaling\n" ;
    cout <<"\nenter your choice\n";
    cin >> ch;
    switch(ch)
    {
        case 1:{
                   cout << "Its translaion\n" << endl;
                   rectangle(200,200,300,300);
                   cout << "enter translation amount";
                   cin >> tx>>ty;
                   rectangle(200+tx,300+ty,400+tx,500+ty);
                   break;
               }

        case 2: {
                 cout << "Its rotation"<< endl;
                 line(100,100,200,100);
                 line(100,100,150,50);
                 line(150,50,200,100);

                 cout << "enter the rotation\n";
                 cin>> theta;

                 int rx1=100*cos(theta)+100*sin(theta);
                 int rx2=200*cos(theta)+100*sin(theta);
                 int rx3=150*cos(theta)+50*sin(theta);
                 int ry1=100*sin(theta)-100*cos(theta);
                 int ry2=200*sin(theta)-100*cos(theta);
                 int ry3=150*sin(theta)-50*cos(theta);

                 line(rx1,ry1,rx2,ry2);
                 line(rx2,ry2,rx3,ry3);
                 line(rx3,ry3,rx1,ry1);


                 break;
                 }
        case 3: {
                     cout << "Its Scaling"<< endl;
                     line(150,100,200,200);
                     line(200,200,100,200);
                     line(100,200,150,100);
                     cout << "enter Scaling factors";
                     cin >> sx>>sy;
                     line(150*sx,100*sy,200*sx,200*sy);
                     line(200*sx,200*sy,100*sx,200*sy);
                     line(100*sx,200*sy,150*sx,100*sy);


                     break;
                }

        default :
                {
                   cout << "wrong choice";
                   break;
                }
    }
    //}
    getch();
    closegraph();
}
