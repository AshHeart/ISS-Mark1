/*
 *  File: render.cpp
 *  Author: Seth Jennnings <ash.snaray@gmail.com>
 * 
 *  Main rendering and initialization done here and a proceed to the welcome page
 */
#include "cus_header.h"

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glEnable(GL_DEPTH_TEST);
}

void render(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	welcomeScn();

	glFlush();
	glutSwapBuffers();
}

void renderSub(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluOrtho2D(-100, 100, -100, 100);

	glColor3f(1.0, 1.0, 1.0);
	dispText(-40, 40, "Are you sure?");

	//Yes button
	glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(-70, -30);
		glVertex2f(-10, -30);
		glVertex2f(-10, -80);
		glVertex2f(-70, -80);

		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(-69, -32);
		glVertex2f(-11.5, -32);
		glVertex2f(-11.5, -79);
		glVertex2f(-69, -79);
	glEnd();

	//No button
	glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(70, -30);
		glVertex2f(10, -30);
		glVertex2f(10, -80);
		glVertex2f(70, -80);

		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(68.8, -32);
		glVertex2f(11, -32);
		glVertex2f(11, -79);
		glVertex2f(68.8, -79);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	dispText(-52, -65, "Yes");
	dispText(31, -65, "No");

	glutMouseFunc(subMouse);

	glutSwapBuffers();
}