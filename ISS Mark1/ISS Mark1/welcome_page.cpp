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

	gluOrtho2D(-500, 500, -500, 500);	//Values for top, bottom, left and right
  
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.0, 0.0, 0.0, 1.0);
	
	/*
	 *  Diaply all required text on welcome screen
	 */
	glColor3f(1.0, 1.0, 1.0);	//Colors to be finalized later
	dispText(-102.0, 450.0, "Srinivas Institute of Technology");
	dispText(-98.0, 400.0, "Valachil, Mangaluru- 574143");
	dispText(-160.0, 350.0, "Department of Computer Science and Engineering");

	dispText(-118.0, 200.0, "Computer Graphics and Visualization");
	dispText(-38.0, 160.0, "Mini Project");
	dispText(-10.0, 120.0, "On");
	//dispText(-93.0, 80.0, "3D-Environment Exploration");
	dispText(-130.0, 30.0, "3D International Space Station Exploration");
	
	dispText(290.0, -200.0, "Project Guide");
	dispText(290.0, -200.0, "___________");
	dispText(290.0, -250.0, "Ms. Vijetha");
	dispText(290.0, -290.0, "Asst. Professor");
	dispText(290.0, -330, "CSE Department");
	//dispText(290.0, -200.0, "Project Coordinator");
	//dispText(290.0, -200.0, "_______________");
	//dispText(290.0, -250.0, "  Mr. Aravind Naik");
	//dispText(320.0, -300.0, "Asst. Prof.");
	//dispText(315.8, -350, " CSE Dept.");
	dispText(-400.0, -200.0, " Team Members");
	dispText(-400.0, -200.0, " ____________");
	dispText(-400.0, -250.0, "Ashweyth Sunil  4SN14CS022");
	dispText(-400.0, -290.0, "Jayasooryan T M  4SN14CS048");
	dispText(-400.0, -330.0, "CSE Dept. VI CS-A");

	/*
	 *	Button rendering to move forward to next screen
	 */
	glColor3f(1.0, 1.0, 1.0);
	dispText(-25, -437, "Continue");

	glBegin(GL_POLYGON);
		glColor3f(0.025, 0.025, 0.75);
		glVertex2f(-60.7, -400.8);
		glVertex2f(60.7, -400.8);
		glVertex2f(60.7, -455.8);
		glVertex2f(-60.7, -455.8);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(-62, -398);
		glVertex2f(62, -398);
		glVertex2f(62, -460);
		glVertex2f(-62, -460);
	glEnd();

	/*
	 *  Background rendering code. cool gradients generated
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

void dispText(GLfloat x, GLfloat y, const char *text)
{
	unsigned char i, len;
	glRasterPos2f(x, y);

	len = (unsigned char)strlen(text);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, text[i]);
	}
}