/*
 *  File: welcome_page.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  To render initial Welcome page for the application 
 */
#include "cus_header.h"

void welcomeScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50, 50, -50, 50, -50, 50);	//Values for near, far to be corrected after initial compiling
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	/* 
	 *  Background rendering to go here
	 */
	glBegin(GL_LINES);
		//glColor3f();
	glEnd();
}

void dispText(float x, float y, const char *text)
{
	unsigned char i, len;
	glRasterPos2f(x, y);
}
