/*
 *  File: render_details.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  Renders details abotu selected module and gives an option to enter for exploration
 */
#include "cus_header.h"

void *fontHead = GLUT_BITMAP_HELVETICA_18;

void showDetails(void)
{
	GLUquadric *obj;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(60.0f, (GLdouble)(scnWidth / scnHeight), 1.0, 500.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	glPushMatrix();
		obj = gluNewQuadric();
		gluQuadricDrawStyle(obj, GLU_LINE);

		glColor3f(1.0, 0.0, 0.0);
		glTranslatef(0.0, 0.0, -30);
		gluCylinder(obj, 100, 100, 200, 100, 5);
	glPopMatrix();
	//glColor3f(1.0, 1.0, 1.0);
	//dispText3D(100, 100, -150, "U.S Laboratory Module Destiny");

	/*
	 *	Background for the page
	 */
}

void dispText3D(GLfloat x, GLfloat y, GLfloat z, const char *text)
{
	unsigned char i, len;
	glRasterPos3f(x, y, z);

	len = (unsigned char)strlen(text);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(fontHead, text[i]);
	}
}