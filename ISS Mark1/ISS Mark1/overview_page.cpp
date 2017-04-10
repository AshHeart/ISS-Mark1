/*
*  File: overview_page.cpp
*  Author: Seth Jennings <ash.snaray@gmail.com>
*
*  File renders a full overview of the space station, user wil be able to select any of 
*  the available module sto enter and interact with  
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

	glClearColor(0.01, 0.0, 0.1, 1.0);

	glEnable(GL_DEPTH_TEST);

	/*
	 *  Rendering of the whole station form the outside goes here
	 */

	 /*
	  *  Background for this page to go here
	  */

	while (i < 1000)
	{
		j = i % 3;

		a = rand() % 500;
		b = rand() % 500;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1, 1, 1);
		glVertex2f(a, b);
		glEnd();
		glFlush();

		a = rand() % 500;
		b = rand() % 500;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1, 1, 1);
		glVertex2f(-a, -b);
		glEnd();
		glFlush();

		a = rand() % 500;
		b = rand() % 500;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1, 1, 1);
		glVertex2f(-a, b);
		glEnd();
		glFlush();

		a = rand() % 500;
		b = rand() % 500;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1, 1, 1);
		glVertex2f(a, -b);
		glEnd();
		glFlush();
		i++;
	}
}
