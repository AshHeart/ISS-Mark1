/*
 *  File: welcome_page.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *	        Jayasooryan TM <jayasooryantm2@gmail.com>
 *
 *  To render initial Welcome page for the application 
 */
#include "cus_header.h"

void *font = GLUT_BITMAP_TIMES_ROMAN_24;	//Selected font

void welcomeScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-500, 500, -500, 500);	//Values for x and y 
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.0, 0.0, 0.0, 1.0);

	
	/*
	 *  Diaply all required text on welcome screen
	 */
	glColor3f(1.0, 1.0, 1.0);	//Colors to be finalized later
	dispText(-13, 45, "Srinivas Institute of Technology");
	dispText(-13, 40, "Valachil, Mangaluru- 574143");
	dispText(-18, 35, "Department of Computer Science and Engineering");

	glColor3f(1.0, 1.0, 1.0);
	dispText(-14, 20, "Computer Graphics and Visualization");
	dispText(-6, 16, "Mini Project");
	dispText(-3, 12, "On");
	dispText(-11, 8, "3D-Environment Exploration");
	dispText(-11.5, 3, "The International Space Station");

	glColor3f(1.0, 1.0, 1.0);
	dispText(-47, -20, "Project Guide");
	dispText(-47, -20, "___________");
	dispText(-45, -25, "Ms. Vijetha");
	dispText(-45, -30, "Asst. Prof");
	dispText(-45, -35, "CSE Dept.");
	dispText(28, -20, "Project Coordinator");
	dispText(28, -20, "_______________");
	dispText(30, -25, "  Mr. Aravind Naik");
	dispText(32, -30, "Asst. Prof");
	dispText(32, -35, " CSE Dept.");
	dispText(-8, -20, " Team Members");
	dispText(-8, -20, " ____________");
	dispText(-11, -25, "Ashweyth Sunil  4SN14CS022");
	dispText(-11, -30, "Jayasooryan T M  4SN14CS048");
	dispText(-7, -35, "CSE Dept. CS-A");

	/*
	 *	Button rendering to move forward to next screen
	 */
	glColor3f(1.0, 1.0, 1.0);
	dispText(-3, -43.5, "Continue");

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

	/*
	*  Background rendering to go here
	*/
	glBegin(GL_TRIANGLES);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(500.0, 100.0);
		glColor3f(0.1, 0.0, 0.5);
		glVertex2f(500.0, -500.0);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(-300.0, -500.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.0, 0.1, 1.0);
		glVertex2f(-500.0, 100.0);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(-500.0, -500.0);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(300.0, -500.0);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(-300.0, -500.0);
		glColor3f(0.0, 0.0, 0.5);
		glVertex2f(0.0, 700.0);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(300.0, -500.0);
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(-500.0, -500.0);
		glColor3f(0.0, 0.0, 0.8);
		glVertex2f(0.0, 800.0);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(500.0, -500.0);
	glEnd();

	glBegin(GL_TRIANGLES);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(-800.0, -500.0);
		glColor3f(0.0, 0.0, 0.8);
		glVertex2f(0.0, 1000.0);
		glColor3f(0.0, 0.0, 0.2);
		glVertex2f(800.0, -500.0);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.0, 0.0, 0.5);
		glVertex2f(-500.0, 500.0);
		glColor3f(0.0, 0.0, 0.5);
		glVertex2f(500.0, 500.0);
		glColor3f(0.0, 0.0, 0.1);
		glVertex2f(500.0, -500.0);
		glColor3f(0.0, 0.0, 0.1);
		glVertex2f(-500.0, -500.0);
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
