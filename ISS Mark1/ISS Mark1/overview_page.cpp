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
	int i=0,j;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-500, 500, -500, 500, -500, 500);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	glEnable(GL_DEPTH_TEST);

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
		glutSolidCylinder(20, 50, 5, 10);
	glPopMatrix();

	//Living space, nodes, labs
	glPushMatrix();
		glColor3f(0.65, 0.65, 0.65);

		//Node 1 Unity
		glColor3f(1.0, 0.0, 0.0);
		glTranslatef(-163, -107, -100);
		glRotatef(90, -165.0, -107.0, 0.0);
		glutWireCylinder(22, 30, 44, 10);

		//U.S. Lab Destiny
		glTranslatef(00, 0, 36);
		glutWireCylinder(15, 5, 44, 30);

	/*
	 *  Background for this page to go here
	 */
}