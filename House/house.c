#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (192, 192, 192);
glBegin(GL_POLYGON);
glVertex2i (10,10);
glVertex2i (110,10);

glVertex2i (110,10);
glVertex2i (110,60);

glVertex2i (110,60);
glVertex2i (10,60);

glVertex2i (10,60);
glVertex2i (10,10);


glEnd();
//window1
glColor3f (255,0,0);
glBegin(GL_POLYGON);
glVertex2i (20,25);
glVertex2i (40,25);

glVertex2i (40,25);
glVertex2i (40,45);

glVertex2i (40,45);
glVertex2i (20,45);

glVertex2i (20,45);
glVertex2i (20,25);


glEnd();
//window2
glColor3f (255,0,0);
glBegin(GL_POLYGON);
glVertex2i (80,25);
glVertex2i (100,25);

glVertex2i (100,25);
glVertex2i (100,45);

glVertex2i (100,45);
glVertex2i (80,45);

glVertex2i (80,45);
glVertex2i (80,25);


glEnd();
//door
glColor3f (0, 0, 255);
glBegin(GL_POLYGON);
glVertex2i (50,10);
glVertex2i (70,10);

glVertex2i (70,10);
glVertex2i (70,50);

glVertex2i (70,50);
glVertex2i (50,50);

glVertex2i (50,50);
glVertex2i (50,10);


glEnd();
//up
glColor3f (0,128,0);
glBegin(GL_POLYGON);
glVertex2i (10,60);
glVertex2i (110,60);

glVertex2i (110,60);
glVertex2i (60,90);

glVertex2i (60,90);
glVertex2i (10,60);

glEnd();

/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D (0,120,0,110);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 500);
glutInitWindowPosition (100,100);
glutCreateWindow ("171-15-9021");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

