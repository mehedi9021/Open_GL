#include <GL/glut.h>
int radius;
void circleMidPoint()
{
    int x = 0;
    int y = radius;
    int p = 1 - radius;
    while(x<=y)
    {
        x++;
        if(p < 0)
            p =p + 2*x + 1;
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        glBegin(GL_POINTS);
        glVertex2i(x, y);
        glVertex2i(-x, y);
        glVertex2i(x, -y);
        glVertex2i(-x, -y);
        glVertex2i(y, x);
        glVertex2i(-y, x);
        glVertex2i(y, -x);
        glVertex2i(-y, -x);
        glEnd();
    }
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.99f, 0.0f);
    glPointSize(5.0);


    circleMidPoint();
    glFlush();
}
void myinit(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D (-640, 640, -480, 480);
}
int main(int argc,char** argv)
{
    printf("Enter radius: ", radius);
    scanf("%d", &radius);
    glutInit(&argc,argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("171-15-9021");
    circleMidPoint();
    myinit();
    glutDisplayFunc(display);
    glutMainLoop();
}

