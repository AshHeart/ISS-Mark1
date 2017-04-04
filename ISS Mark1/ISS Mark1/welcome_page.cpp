/*
 *  File: welcome_page.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  To render initial Welcome page for the application 
 */
#include "cus_header.h"

void *font = GLUT_BITMAP_TIMES_ROMAN_24;	//Selected font

void welcomeScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50, 50, -50, 50);	//Values for x and y 
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
	 *  Diaply all required text on welcome screen
	 */
	glColor3f(1.0, 1.0, 1.0);	//Colors to be finalized later
	dispText(-10, 45, "Srinivas Institute of Technology");
	dispText(-10, 40, "Valachil, Mangaluru- 574143");
	dispText(-15, 35, "Department of Computer Science and Engineering");

	glColor3f(1.0, 1.0, 1.0);
	dispText(-11, 20, "Computer Graphics and Visualization");
	dispText(-3, 16, "Mini Project");
	dispText(-0, 12, "On");
	dispText(-8, 8, "3D-Environment Exploration");
	dispText(-8.5, 3, "The International Space Station");

	glColor3f(1.0, 1.0, 1.0);
	dispText(-46, -20, "Project Guide");
	dispText(-46, -20, "___________");
	dispText(-45, -25, "Ms. Vijetha");
	dispText(-45, -30, "Asst. Prof.");
	dispText(-45, -35, "CSE Dept.");
	dispText(29, -20, "Project Coordinator");
	dispText(29, -20, "_______________");
	dispText(30, -25, "  Mr. Aravind Naik");
	dispText(32, -30, "Asst. Prof.");
	dispText(31.8, -35, " CSE Dept.");
	dispText(-5, -20, " Team Members");
	dispText(-5, -20, " ____________");
	dispText(-9, -25, "Ashweyth Sunil  4SN14CS022");
	dispText(-9, -30, "Jayasooryan T M  4SN14CS048");
	dispText(-5, -35, "CSE Dept. 6 CS-A");

	/*
	 *	Button rendering to move forward to next screen
	 */
	glColor3f(1.0, 1.0, 1.0);
	dispText(-3, -43.5, "Click Here");

	glBegin(GL_POLYGON);
		glColor3f(0.025, 0.025, 0.75);
		glVertex2f(-6.7, -40.3);
		glVertex2f(6.7, -40.3);
		glVertex2f(6.7, -44.8);
		glVertex2f(-6.7, -44.8);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(-7, -40);
		glVertex2f(7, -40);
		glVertex2f(7, -45);
		glVertex2f(-7, -45);
	glEnd();
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
