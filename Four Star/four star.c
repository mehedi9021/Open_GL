#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0,255,0);
glBegin(GL_POLYGON);
glVertex2d (50, 200);
glVertex2d (250, 250);
glVertex2d (50, 300);
glVertex2d (0, 500);
glVertex2d (-50, 300);
glVertex2d (-250, 250);
glVertex2d (-50, 200);
glVertex2d (0, 0);
glEnd();


glColor3f (255,0,0);
glBegin(GL_POLYGON);
glVertex2d (-200, 50);
glVertex2d (-250, 250);
glVertex2d (-300, 50);
glVertex2d (-500, 0);
glVertex2d (-300, -50);
glVertex2d (-250, -250);
glVertex2d (-200, -50);
glVertex2d (0, 0);
glEnd();


glColor3f (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2d (50, -200);
glVertex2d (250, -250);
glVertex2d (50, -300);
glVertex2d (0, -500);
glVertex2d (-50, -300);
glVertex2d (-250, -250);
glVertex2d (-50, -200);
glVertex2d (0, 0);
glEnd();


glColor3f (255, 255, 255);
glBegin(GL_POLYGON);
glVertex2d (200, 50);
glVertex2d (250, 250);
glVertex2d (300, 50);
glVertex2d (500, 0);
glVertex2d (300, -50);
glVertex2d (250, -250);
glVertex2d (200, -50);
glVertex2d (0, 0);
glEnd();



glFlush ();
}
void init (void)
{
glClearColor (.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1000, 1000, -1000, 1000);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("171-15-9021");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}

