/*
 *  File: render.cpp
 *  Author: Seth Jennnings <ash.snaray@gmail.com>
 * 
 *  Main rendering and initialization done here and a proceed to the welcome page
 *  Windows resizing also hendled here
 */
#include "cus_header.h"

int screen = 1;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glEnable(GL_DEPTH_TEST);
}

void render(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	switch (screen) {
	case 1:
		welcomeScn();
		break;

	case 2:
		overviewScn();
		break;

	case 3:
		showDetails();
		break;

	case 4:
		renderScn();
		break;

	case 5:
		infoscn();
		break;
	}

	glutSwapBuffers();
}

void reshape(int w, int h)
{
	if (screen == 1) {
		scnWidth = w;
		scnHeight = h;
		glViewport(0, 0, w, h);

		glMatrixMode(GL_PROJECTION);	//Projection Matrix
		glLoadIdentity();

		glOrtho(-500, 500, -500, 500, -500, 500);	//left, right, bottom, top, near, far

		glMatrixMode(GL_MODELVIEW);		//Modelview Matrix
		glLoadIdentity();
	}
	
	if (screen == 3) {
		scnWidth = w;
		scnHeight = h;
		glViewport(0, 0, w, h);

		glMatrixMode(GL_PROJECTION);	//Projection Matrix
		glLoadIdentity();

		gluPerspective(45.0f, (float)scnWidth / (float)scnHeight, 0.1, 100.0);

		glMatrixMode(GL_MODELVIEW);		//Modelview Matrix
		glLoadIdentity();
	}
}