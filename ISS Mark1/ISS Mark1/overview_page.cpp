/*
 *  File: overview_page.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  File renders a full overview of the space station, user wil be able to select any of 
 *  the available module sto enter and floateract with  
*/
#include "cus_header.h"

void overviewScn(void)
{
	GLfloat a, b;
	int i=0,j;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-500, 500, -500, 500, -500, 500);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.0, 0.0, 0.0, 1.0);

	glEnable(GL_DEPTH_TEST);

	/*
	 *  Rendering of the whole station form the outside goes here
	 */
	//Overall rotation and translation needed 

	/*
	 *  Background for this page to go here
	 */
	while (i<400) {
		i++;
		a = rand() % 600;
		b = rand() % 600;
		j = i % 3;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(a, b, -50);
		glEnd();

		a = rand() % 600;
		b = rand() % 600;
		j = i % 3;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(-a, b, -50);
		glEnd();

		a = rand() % 600;
		b = rand() % 600;
		j = i % 3;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(a, -b, -50);
		glEnd();

		a = rand() % 600;
		b = rand() % 600;
		j = i % 3;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(-a, -b, -50);
		glEnd();
	}

	//Remove once click to render is implemented on overview
	glColor3f(1.0, 1.0, 1.0);
	dispText(100, 100, "Press C to continue");
}