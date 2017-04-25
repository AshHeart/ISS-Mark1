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
	GLint i=0,j;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-500, 500, -500, 500, -500, 500);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.0, 0.0, 0.0, 1.0);

	/*
	 *  Rendering of the whole station form the outside goes here
	 */
	//Overall rotation and translation needed 
	glRotatef(-20, 0.0, 1.0, 0.0);
	
	//Solar Arrays upper-left bank
	glBegin(GL_QUADS);
		//UL4 Bank
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(-275, 230, -100);
		glVertex3f(-250, 230, -100);
		glVertex3f(-250, -80, 50);
		glVertex3f(-275, -80, 50);

		//UL4-UL3 Connector
		glColor3f(0.6, 0.6, 0.6);
		glVertex3f(-280, 236, -100);
		glVertex3f(-284, 236, -100);
		glVertex3f(-284, -86, 50);
		glVertex3f(-280, -86, 50);

		//UL3 Bank
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(-290, 230, -100);
		glVertex3f(-315, 230, -100);
		glVertex3f(-315, -80, 50);
		glVertex3f(-290, -80, 50);

		//UL2 Bank
		glVertex3f(-335, 230, -100);
		glVertex3f(-360, 230, -100);
		glVertex3f(-360, -80, 50);
		glVertex3f(-335, -80, 50);

		//UL2-UL1 Connector
		glColor3f(0.6, 0.6, 0.6);
		glVertex3f(-369, 236, -100);
		glVertex3f(-365, 236, -100);
		glVertex3f(-365, -86, 50);
		glVertex3f(-369, -86, 50);

		//UL1 Bank
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(-375, 230, -100);
		glVertex3f(-400, 230, -100);
		glVertex3f(-400, -80, 50);
		glVertex3f(-375, -80, 50);
	glEnd();

	//UL1 Bank to Truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-367, -86, -100);
		glRotatef(-20, 0.0, 1.0, 0.0);
		glutSolidCylinder(3.5, 20, 90, 2);
	glPopMatrix();

	//UL2 Bank to Truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-282, -86, -100);
		glRotatef(-20, 0.0, 1.0, 0.0);
		glutSolidCylinder(3.5, 20, 90, 2);
	glPopMatrix();

	//Solar Arrays lower-left bank
	glBegin(GL_QUADS);
		//LL4 Bank
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(-267, -135, -100);
		glVertex3f(-242, -135, -100);
		glVertex3f(-242, -435, 50);
		glVertex3f(-267, -435, 50);

		//LL4-LL3 Connector
		glColor3f(0.6, 0.6, 0.6);
		glVertex3f(-272, -129, -100);
		glVertex3f(-276, -129, -100);
		glVertex3f(-276, -441, 50);
		glVertex3f(-272, -441, 50);

		//LL3 Bank
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(-282, -135, -100);
		glVertex3f(-307, -135, -100);
		glVertex3f(-307, -435, 50);
		glVertex3f(-282, -435, 50);

		//LL2 Bank
		glVertex3f(-327, -135, -100);
		glVertex3f(-352, -135, -100);
		glVertex3f(-352, -435, 50);
		glVertex3f(-327, -435, 50);

		//LL2-LL1 Connector
		glColor3f(0.6, 0.6, 0.6);
		glVertex3f(-361, -129, -100);
		glVertex3f(-357, -129, -100);
		glVertex3f(-357, -441, 50);
		glVertex3f(-361, -441, 50);

		//LL1 Bank
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(-367, -135, -100);
		glVertex3f(-392, -135, -100);
		glVertex3f(-392, -435, 50);
		glVertex3f(-367, -435, 50);
	glEnd();

	//LL1 Bank to Truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-359, -115, -100);
		glRotatef(-20, 0.0, 1.0, 0.0);
		glutSolidCylinder(3.5, 20, 90, 35);
	glPopMatrix();

	//LL3 Bank to Turss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-274.5, -115, -100);
		glRotatef(-20, 0.0, 1.0, 0.0);
		glutSolidCylinder(3.5, 20, 5, 10);
	glPopMatrix();

	//UL-LL to Truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-349, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-329, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-309, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutWireCube(20);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-289, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	//UL_LL to Truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-269, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	//Solar Array truss to main truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-249, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutWireCube(22);
	glPopMatrix();

	//Main Holding Truss unit left
	glPushMatrix();
		glColor3f(0.55, 0.55, 0.55);
		glTranslatef(-237, -107, -100);
		glRotatef(90, 0.0, 1.0, 0.0);
		glutWireCylinder(20, 50, 5, 10);
	glPopMatrix();

	//Living space, nodes, labs
	glPushMatrix();
		glColor3f(0.65, 0.65, 0.65);

		//Node 1 Unity
		glColor3f(1.0, 0.65, 0.65);
		glTranslatef(-163, -107, -100);
		//glRotatef(90, 0.0, 0.0, 0.0);
		glutWireCylinder(22, 30, 44, 10);

		//U.S. Lab Destiny
		//glTranslatef(00, 0, 36);
		//glutSolidCylinder(22, 50, 44, 30);
	glPopMatrix();

	//Main Holding truss unit center
	glPushMatrix();
		glColor3f(0.55, 0.55, 0.55);
		glTranslatef(-143, -107, -100);
		glRotatef(90, 0.0, 1.0, 0.0);
		glutSolidCylinder(20, 50, 5, 10);
	glPopMatrix();

	//Main Holding truss unit right
	glPushMatrix();
		glColor3f(0.55, 0.55, 0.55);
		glTranslatef(-123, -107, -100);
		glRotatef(90, 0.0, 1.0, 0.0);
		glutSolidCylinder(20, 50, 5, 10);
	glPopMatrix();

	//Solar Array truss to main truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-61, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutWireCube(22);
	glPopMatrix();

	//Right Array left to Truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-40, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	//Right Array right to Truss connector
	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(-20, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(0, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutWireCube(20);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(20, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.6, 0.6, 0.6);
		glTranslatef(40, -107, -100);
		glRotatef(-20, 1.0, 0.0, 0.0);
		glutSolidCube(20);
	glPopMatrix();

	//Solar Arrays upper-right bank
	glBegin(GL_QUADS);
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(275, 200, -100);
		glVertex3f(250, 200, -100);
		glVertex3f(250, -100, 50);
		glVertex3f(275, -100, 50);

		glVertex3f(280, 200, -100);
		glVertex3f(305, 200, -100);
		glVertex3f(305, -100, 50);
		glVertex3f(280, -100, 50);

		glVertex3f(320, 200, -100);
		glVertex3f(345, 200, -100);
		glVertex3f(345, -100, 50);
		glVertex3f(320, -100, 50);

		glVertex3f(350, 200, -100);
		glVertex3f(375, 200, -100);
		glVertex3f(375, -100, 50);
		glVertex3f(350, -100, 50);
	glEnd();

	//Solar Arrays lower-right bank
	glBegin(GL_QUADS);
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(275, -135, -100);
		glVertex3f(250, -135, -100);
		glVertex3f(250, -435, 50);
		glVertex3f(275, -435, 50);

		glVertex3f(280, -135, -100);
		glVertex3f(305, -135, -100);
		glVertex3f(305, -435, 50);
		glVertex3f(280, -435, 50);

		glVertex3f(320, -135, -100);
		glVertex3f(345, -135, -100);
		glVertex3f(345, -435, 50);
		glVertex3f(320, -435, 50);

		glVertex3f(350, -135, -100);
		glVertex3f(375, -135, -100);
		glVertex3f(375, -435, 50);
		glVertex3f(350, -435, 50);
	glEnd();

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