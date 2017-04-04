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

	glClearColor(0.0, 0.0, 0.0, 1.0);

	/* 
	 *  Background rendering to go here
	 */
	glBegin(GL_LINES);
		//glColor3f();
	glEnd();

	/*
	 *  Diaply all required tect on welcome screen
	 */
	glColor3f(1.0, 1.0, 1.0);	//Colors to be finalized later
	dispText(-13, 45, "Srinivas Institute of Technology");
	dispText(-13, 40, "Valachil, Mangaluru- 574143");
	dispText(-18, 35, "Department of Computer Science and Engineering");

	//all coordinates to be updated after first initial compile
	glColor3f(1.0, 1.0, 1.0);
	dispText(-14, 20, "Computer Graphics and Visualization");
	dispText(-6, 16, "Mini Project");
	dispText(-3, 12, "On");
	dispText(-11, 8, "3D-Environment Exploration");
	dispText(-11.5, 3, "The International Space Station");

	glColor3f(1.0, 1.0, 1.0);
	dispText(-47, -25, "PROJECT GUIDE");
	dispText(-47, -25, "_______________");
	dispText(-45, -30, "Ms. Vijetha");
	dispText(-45, -35, "ASST.PROF");
	dispText(-45, -40, "CSE DEPT");
	dispText(28, -25, "PROJECT COORDINATOR");
	dispText(28, -25, "_______________________");
	dispText(30, -30, "  Mr. Aravind Naik");
	dispText(32, -35, "ASST.PROF");
	dispText(32, -40, " CSE DEPT");
	dispText(-8, -25, " TEAM MEMBERS");
	dispText(-8, -25, " _______________");
	dispText(-11, -30, "Ashweyth Sunil  4SN14CS022");
	dispText(-11, -35, "Jayasooryan T M  4SN14CS048");
	dispText(-7, -40, "CSE DEPT CS-A");

	glColor3f(1.0, 1.0, 1.0);
	dispText(-10, -48, "Press any key to continue");
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
