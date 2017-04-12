/*
 *  File: select_page.cpp
 *  Author: Seth Jennnings <ash.snaray@gmail.com>
 *
 *  Renders insides of the various labs and conecting modules
 *  Main part of the program, phew!
 */
#include "cus_header.h"

void drawUnity(void);

void renderScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//glOrtho(-500, 500, -500, 500, -500, 500);
	gluPerspective(120.0f, (GLfloat)scnWidth / (GLfloat)scnHeight, 1, 500.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	glEnable(GL_DEPTH_TEST);

	/*
	 *  Just render node 1 Unity for now
	 */
	drawUnity();
}

void drawUnity()
{
	//Facing wall
	glBegin(GL_POLYGON);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(-10.0, 0.0, -10.0);
		glVertex3f(-10.0, 10.0, -10.0);
		glVertex3f(10.0, 10.0, -10.0);
		glVertex3f(10.0, 0.0, -10.0);
	glEnd();
}