//#include<gl\glut.h>
#include<graphics.h>
#include<Windows.h>
int x1, y1, x2, y2, ch=0,e;
int dy,dx;
float xi,yi,x,y;
void displayMe(void)
{
    dy=y2-y1;
    dx=x2-x1;
    if(abs(dx)>abs(dy)){
        e=dx;
    }
    else{
        e=dy;
    }
    int z=1;
    while(z<=e){
        z=z*2;
    }
    e=z;
    x=x1*1.0;
    y=y1*1.0;
    xi=1.0* dx/e;
    yi=1.0* dy/e;
     glPointSize(2);
     int a[e];
    a[e/2]=1;
    for(int i=0;i<e/2;i++){
        if(i%2==0){
            a[i]=1;
            a[e-1-i]=1;
        }
        else{
            a[i]=0;
            a[e-1-i]=0;
        }
    }
    glBegin(GL_POINTS);
    for(int i=0;i<e;i++){
    if(a[i]==1){
            glVertex2f(x,y);
        }
        x=x+xi;
        y=y+yi;
    }
    glEnd();
    glFlush();
}
void mouse(int btn, int state, int x, int y) {
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		switch (ch) {
		case 0:
			x1 = x;
			y1 = 400.0 - y;
			ch = 1;
			break;
		case 1:
			x2 = x;
			y2 = 400.0 - y;
			displayMe();
			ch = 0;
			break;
		}
	}
}
void init() {
	glViewport(0, 0, 400.0, 400.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 400.0, 0.0, 400.0,0.0,400.0);
	glMatrixMode(GL_MODELVIEW);
}

void display(void) {
	glColor3f(0.2, 0.3, 0.3);
	glClear(GL_COLOR_BUFFER_BIT);
	 glBegin(GL_LINES);
    glVertex2f(200, 0);
    glVertex2f(200, 400);
    glVertex2f(0, 200);
    glVertex2f(400, 200);
    glEnd();
	//glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400.0, 400.0);
	glutCreateWindow("GlPoints");
	glutDisplayFunc(display);
	init();
	glutMouseFunc(mouse);
	glutMainLoop();
	return 0;
}
