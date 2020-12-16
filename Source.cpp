#include<gl/GLUT.h>
#include<GL/glu.h>
#include<iostream>
void display_cylinder ()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glLoadIdentity();
	GLUquadricObj* obj = gluNewQuadric();
	gluQuadricDrawStyle(obj,GLU_LINE);
	glTranslated(1.0, 0.0, 0.0);
	glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
	gluCylinder(obj,3.0f, 3.0f, 3.0f, 32, 32);


		glEnd();
		glFlush();	
}

void myinit()
{
	glEnable(GL_DEPTH_TEST);
	glLoadIdentity();
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
	glColor3f(1.0, 0.0, 0.0);
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);

	glutCreateWindow("Translation and animation");
	glutDisplayFunc(display_cylinder);
	myinit();
	glutMainLoop();
	return 0;
}