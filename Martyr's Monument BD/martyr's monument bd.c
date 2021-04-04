#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>
float p;
int r;
float x,y;
void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-400,-70);
    glVertex2d(400,-70);
    glVertex2d(180,70);
    glVertex2d(-180,70);
    glEnd();

    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-390,-60);
    glVertex2d(390,-60);
    glVertex2d(170,60);
    glVertex2d(-170,60);
    glEnd();

    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-380,-50);
    glVertex2d(380,-50);
    glVertex2d(180,50);
    glVertex2d(-180,50);
    glEnd();
    glColor3f(0.0f, 0.1f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-370,-40);
    glVertex2d(370,-40);
    glVertex2d(180,40);
    glVertex2d(-180,40);
    glEnd();

    MidPointCircle(0,200,100);


    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-100,390);
    glVertex2d(100,390);
    glVertex2d(100,370);
    glVertex2d(-100,370);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-100,370);
    glVertex2d(100,370);
    glVertex2d(60,300);
    glVertex2d(-60,300);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-50,350);
    glVertex2d(50,350);
    glVertex2d(30,300);
    glVertex2d(-30,300);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-40,350);
    glVertex2d(40,350);
    glVertex2d(25,300);
    glVertex2d(-25,300);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-60,300);
    glVertex2d(-30,300);
    glVertex2d(-30,0);
    glVertex2d(-60,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-30,300);
    glVertex2d(-25,300);
    glVertex2d(-25,10);
    glVertex2d(-30,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(60,300);
    glVertex2d(30,300);
    glVertex2d(30,0);
    glVertex2d(60,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(30,300);
    glVertex2d(25,300);
    glVertex2d(25,10);
    glVertex2d(30,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(130,280);
    glVertex2d(100,280);
    glVertex2d(100,0);
    glVertex2d(130,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(100,280);
    glVertex2d(93.5,270);
    glVertex2d(93.5,15);
    glVertex2d(100,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(200,280);
    glVertex2d(170,280);
    glVertex2d(170,0);
    glVertex2d(200,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(170,250);
    glVertex2d(160,250);
    glVertex2d(160,10);
    glVertex2d(170,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(170,280);
    glVertex2d(130,280);
    glVertex2d(130,250);
    glVertex2d(170,250);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(170,250);
    glVertex2d(130,250);
    glVertex2d(130,245);
    glVertex2d(160,245);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-130,280);
    glVertex2d(-100,280);
    glVertex2d(-100,0);
    glVertex2d(-130,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-100,280);
    glVertex2d(-93.5,270);
    glVertex2d(-93.5,15);
    glVertex2d(-100,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-200,280);
    glVertex2d(-170,280);
    glVertex2d(-170,0);
    glVertex2d(-200,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-170,250);
    glVertex2d(-160,250);
    glVertex2d(-160,10);
    glVertex2d(-170,0);
    glEnd();

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2d(-170,280);
    glVertex2d(-130,280);
    glVertex2d(-130,250);
    glVertex2d(-170,250);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(-170,250);
    glVertex2d(-130,250);
    glVertex2d(-130,245);
    glVertex2d(-160,245);
    glEnd();

    glFlush();

}
void MidPointCircle(int Xc, int Yc, int rad)
{
    int cntrX = Xc;
    int cntrY = Yc;
    r=rad;
    x=0;
    y=r;
    p=1-r;
    while(x<=y){
        glColor3ub(255,0,0);
        glBegin(GL_POLYGON);
        if(p<0){
            x++;
            p=p+(2*x)+3;
        }
        else{
            x++;
            y--;
             p=p+(2*x)-(2*y)+5;
        }
        glVertex2d(cntrX+x, cntrY+y);
        glVertex2d(cntrX+y, cntrY+x);
        glVertex2d(cntrX-y, cntrY+x);
        glVertex2d(cntrX-x, cntrY+y);
        glVertex2d(cntrX-x, cntrY-y);
        glVertex2d(cntrX-y, cntrY-x);
        glVertex2d(cntrX+x, cntrY-y);
        glVertex2d(cntrX+y, cntrY-x);
        glEnd();
    }

}
void init (void)
      {
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-500,500,-300,700);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("171-15-9021");
    init();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}

