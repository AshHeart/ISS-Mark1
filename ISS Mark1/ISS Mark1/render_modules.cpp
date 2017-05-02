/*
*  File: select_page.cpp
*  Author: Seth Jennnings <ash.snaray@gmail.com>
*
*  Renders insides of the various labs and conecting modules
*  Main part of the program, phew!
*/
#include "cus_header.h"

void drawDestiny(void);
void drawHarmony(void);

void renderScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(120.0f, /*(GLfloat)scnWidth / (GLfloat)scnHeight*/1, 0.1, 100.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glEnable(GL_DEPTH_TEST);

	cameraControl();

	/*
	*  Render all the selected nodes
	*/
	drawDestiny();
	drawHarmony();
}

void drawDestiny()
{
	//Facing wall
	glBegin(GL_POLYGON); //Left
		glVertex3f(-4.0, 0.0, -5.0);
		glVertex3f(-4.0, 5.0, -5.0);
		glVertex3f(-3.0, 5.0, -5.0);
		glVertex3f(-3.0, 0.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 0.0, -5.0);
		glVertex3f(-4.0, 1.0, -5.0);
		glVertex3f(1.0, 1.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON); //Right
		glVertex3f(0.0, 0.0, -5.0);
		glVertex3f(0.0, 5.0, -5.0);
		glVertex3f(1.0, 5.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON);  //Top
		glVertex3f(-4.0, 5.0, -5.0);
		glVertex3f(-4.0, 4.0, -5.0);
		glVertex3f(1.0, 4.0, -5.0);
		glVertex3f(1.0, 5.0, -5.0);
	glEnd();

	//Left Wall
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(-4.0, 0.0, -5.0);
		glVertex3f(-4.0, 5.0, -5.0);
		glVertex3f(-4.0, 5.0, -1.0);
		glVertex3f(-4.0, 0.0, -1.0);
	glEnd();

	//Right wall
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(1.0, 5.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -1.0);
		glVertex3f(1.0, 5.0, -1.0);
	glEnd();

	//Top wall
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 5.0, -5.0);
		glVertex3f(1.0, 5.0, -5.0);
		glVertex3f(1.0, 5.0, -1.0);
		glVertex3f(-4.0, 5.0, -1.0);
	glEnd();

	//Floor wall?
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -1.0);
		glVertex3f(-4.0, 0.0, -1.0);
	glEnd();

	//Back wall
	glBegin(GL_POLYGON);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(-4.0, 0.0, -1.0);
		glVertex3f(-4.0, 5.0, -1.0);
		glVertex3f(1.0, 5.0, -1.0);
		glVertex3f(1.0, 0.0, -1.0);
	glEnd();

	//Destiny Connector
	glBegin(GL_POLYGON); //Left 
		glVertex3f(-3.0, 4.0, -5.0);
		glVertex3f(-3.0, 1.0, -5.0);
		glVertex3f(-3.0, 1.0, -6.0);
		glVertex3f(-3.0, 4.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON); //Bottom
		glVertex3f(-3.0, 1.0, -5.0);
		glVertex3f(-3.0, 1.0, -6.0);
		glVertex3f(1.0, 1.0, -6.0);
		glVertex3f(1.0, 1.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON); //Right
		glVertex3f(1.0, 4.0, -5.0);
		glVertex3f(1.0, 1.0, -5.0);
		glVertex3f(1.0, 1.0, -6.0);
		glVertex3f(1.0, 4.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON); //Top
		glVertex3f(-3.0, 4.0, -5.0);
		glVertex3f(-3.0, 4.0, -6.0);
		glVertex3f(1.0, 4.0, -6.0);
		glVertex3f(1.0, 4.0, -5.0);
	glEnd();

	//Items inside
}

void drawHarmony()
{
	//Back wall
	glBegin(GL_POLYGON); //Left
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(-3.0, 5.0, -6.0);
		glVertex3f(-3.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(-4.0, 1.0, -6.0);
		glVertex3f(1.0, 1.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON); //Right
		glVertex3f(0.0, 0.0, -6.0);
		glVertex3f(0.0, 5.0, -6.0);
		glVertex3f(1.0, 5.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);  //Top
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(-4.0, 4.0, -6.0);
		glVertex3f(1.0, 4.0, -6.0);
		glVertex3f(1.0, 5.0, -6.0);
	glEnd();

	//Right wall
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(1.0, 5.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
		glVertex3f(1.0, 0.0, -9.0);
		glVertex3f(1.0, 5.0, -9.0);
	glEnd();

	//Floor wall?
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
		glVertex3f(1.0, 0.0, -9.0);
		glVertex3f(-4.0, 0.0, -9.0);
	glEnd();

	//Top wall
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(1.0, 5.0, -6.0);
		glVertex3f(1.0, 5.0, -9.0);
		glVertex3f(-4.0, 5.0, -9.0);
	glEnd();

	//Facing wall
	glBegin(GL_POLYGON);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(-4.0, 0.0, -9.0);
		glVertex3f(-4.0, 5.0, -9.0);
		glVertex3f(1.0, 5.0, -9.0);
		glVertex3f(1.0, 0.0, -9.0);
	glEnd();

	//Left Wall
	glBegin(GL_POLYGON);  //Right
		glVertex3f(-4.0, 0.0, -9.0);
		glVertex3f(-4.0, 0.0, -8.7);
		glVertex3f(-4.0, 5.0, -8.7);
		glVertex3f(-4.0, 5.0, -9.0);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 0.0, -9.0);
		glVertex3f(-4.0, 1.0, -9.0);
		glVertex3f(-4.0, 1.0, -6.0);
		glVertex3f(-4.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);  //Left
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(-4.0, 5.0, -7.5);
		glVertex3f(-4.0, 0.0, -7.5);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 5.0, -9.0);
		glVertex3f(-4.0, 4.0, -9.0);
		glVertex3f(-4.0, 4.0, -6.0);
		glVertex3f(-4.0, 5.0, -6.0);
	glEnd();
}