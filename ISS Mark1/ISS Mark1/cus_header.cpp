/*
 *  File: cus_header.cpp
 *  Author: Seth Jennnings <ash.snaray@gmail.com>
 * 
 *  
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
