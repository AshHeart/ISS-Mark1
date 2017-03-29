/*
 *  File: welcome_page.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  To render initial Welcome page for the application 
 */
#include "cus_header.h"

void *font = GLUT_BITMAP_TIMES_ROMAN_24;

void welcomeScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50, 50, -50, 50, -50, 50);	//Values for near, far to be corrected after initial compiling
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	/* 
	 *  Background rendering to go here
	 */
	glBegin(GL_LINES);
		//glColor3f();
	glEnd();

	/*
	 *  Diaply all required tect on welcome screen
	 */
	glColor3f(1.0, 0.0, 0.0);	//Colors to be finalized later
	dispText(-13, 0, "Welcome to the International Space Station");
}

void dispText(float x, float y, const char *text)
{
	unsigned char i, len;
	glRasterPos2f(x, y);

	len = (unsigned char)strlen(text);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, text[i]);
	}
}
