/*
 *  File: select_page.cpp
 *  Author: Seth Jennnings <ash.snaray@gmail.com>
 *
 *  Renders insides of the various labs and conecting modules
 *  Main part of the program, phew!
 */
#include "cus_header.h"

void drawDestiny(void);

void renderScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(120.0f, (GLfloat)scnWidth / (GLfloat)scnHeight, 1, 500.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	glEnable(GL_DEPTH_TEST);

	gluLookAt(view[0], view[1], view[2], 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

	/*
	 *  Just render node 1 Unity for now
	 */
	drawDestiny();
}

void drawDestiny()
{
	//Facing wall
	glBegin(GL_POLYGON);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(-30.0, 0.0, -50.0);
		glVertex3f(-30.0, 30.0, -50.0);
		glVertex3f(30.0, 30.0, -50.0);
		glVertex3f(30.0, 0.0, -50.0);
	glEnd();

	//Left Wall
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(-30.0, 0.0, -52.0);
		glVertex3f(-30.0, 30.0, -50.0);
		glVertex3f(-30.0, 30.0, 10.0);
		glVertex3f(-30.0, 0.0, 10.0);
	glEnd();

	//Right wall
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(30.0, 30.0, -50.0);
		glVertex3f(30.0, 0.0, -50.0);
		glVertex3f(30.0, 0.0, 10.0);
		glVertex3f(30.0, 30.0, 10.0);
	glEnd();

	//Top wall
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-30.0, 30.0, -50.0);
		glVertex3f(30.0, 30.0, -50.0);
		glVertex3f(30.0, 30.0, 10.0);
		glVertex3f(-30.0, 30.0, 10.0);
	glEnd();

	//Floor wall?
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-30.0, 0.0, -50.0);
		glVertex3f(30.0, 0.0, -50.0);
		glVertex3f(30.0, 0.0, 10.0);
		glVertex3f(-30.0, 0.0, 10.0);
	glEnd();
}