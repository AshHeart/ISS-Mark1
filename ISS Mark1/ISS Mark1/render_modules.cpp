/*
*  File: select_page.cpp
*  Author: Seth Jennnings <ash.snaray@gmail.com>
*
*  Renders insides of the various labs and conecting modules
*  Main part of the program, phew!
*/
#include "cus_header.h"

GLUquadric *pObj;
GLfloat a, b;
GLint i = 0, j = 0;

void drawDestiny(void);
void drawHarmony(void);
void drawColumbus(void);

void renderScn(void)
{
	pObj = gluNewQuadric();

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(120.0f, /*(GLfloat)scnWidth / (GLfloat)scnHeight*/1, 0.1, 100.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_TEXTURE_2D);

	cameraControl();

	/*
	*  Render all the selected nodes
	*/
	drawDestiny();
	drawHarmony();
	drawColumbus();
}

void drawDestiny()
{
	//Facing wall
	glBegin(GL_POLYGON); //Left
		glVertex3f(-4.0, 0.0, -5.0);
		glVertex3f(-4.0, 5.0, -5.0);
		glVertex3f(-3.0, 5.0, -5.0);
		glVertex3f(-3.0, 0.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 0.0, -5.0);
		glVertex3f(-4.0, 1.0, -5.0);
		glVertex3f(1.0, 1.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON); //Right
		glVertex3f(0.0, 0.0, -5.0);
		glVertex3f(0.0, 5.0, -5.0);
		glVertex3f(1.0, 5.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON);  //Top
		glVertex3f(-4.0, 5.0, -5.0);
		glVertex3f(-4.0, 4.0, -5.0);
		glVertex3f(1.0, 4.0, -5.0);
		glVertex3f(1.0, 5.0, -5.0);
	glEnd();

	//Left Wall
	glBindTexture(GL_TEXTURE_2D, textures[0]);
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glTexCoord2d(0.0, 0.0); glVertex3f(-4.0, 0.0, -5.0);
		glTexCoord2d(0.0, 20.0); glVertex3f(-4.0, 5.0, -5.0);
		glTexCoord2d(10.0, 20.0); glVertex3f(-4.0, 5.0, -1.0);
		glTexCoord2d(10.0, 0.0); glVertex3f(-4.0, 0.0, -1.0);
	glEnd();

	//Right wall
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(1.0, 5.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -1.0);
		glVertex3f(1.0, 5.0, -1.0);
	glEnd();

	//Top wall
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 5.0, -5.0);
		glVertex3f(1.0, 5.0, -5.0);
		glVertex3f(1.0, 5.0, -1.0);
		glVertex3f(-4.0, 5.0, -1.0);
	glEnd();

	//Floor wall?
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -1.0);
		glVertex3f(-4.0, 0.0, -1.0);
	glEnd();

	glColor3f(0.65, 0.65, 0.65);

	//Back wall
	glBegin(GL_POLYGON);
		glVertex3f(-4.0, 0.0, -1.0);
		glVertex3f(-4.0, 5.0, -1.0);
		glVertex3f(1.0, 5.0, -1.0);
		glVertex3f(1.0, 0.0, -1.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);

	//Destiny Connector
	glBegin(GL_POLYGON); //Left 
		glVertex3f(-3.0, 4.0, -5.0);
		glVertex3f(-3.0, 1.0, -5.0);
		glVertex3f(-3.0, 1.0, -6.0);
		glVertex3f(-3.0, 4.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON); //Bottom
		glVertex3f(-3.0, 1.0, -5.0);
		glVertex3f(-3.0, 1.0, -6.0);
		glVertex3f(1.0, 1.0, -6.0);
		glVertex3f(1.0, 1.0, -5.0);
	glEnd();


	glBegin(GL_POLYGON); //Top
		glVertex3f(-3.0, 4.0, -5.0);
		glVertex3f(-3.0, 4.0, -6.0);
		glVertex3f(1.0, 4.0, -6.0);
		glVertex3f(1.0, 4.0, -5.0);
	glEnd();

	glBegin(GL_POLYGON); //Right
		glVertex3f(0.0, 4.0, -5.0);
		glVertex3f(0.0, 1.0, -5.0);
		glVertex3f(0.0, 1.0, -6.0);
		glVertex3f(0.0, 4.0, -6.0);
	glEnd();

	//Items inside
	//Holds
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(0.0, 3.5, -5.0);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-3.0, 3.5, -5.0);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();
	
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 1.1, -5.0);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 3.9, -5.0);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	//Screens
	glPushMatrix();
		glColor3f(0.0, 0.0, 0.0);
		glTranslatef(-3.8, 3.8, -3.0);
		glRotatef(-10, 0.0, 0.0, 1.0);
		glutSolidCube(0.3);

		glTranslatef(0.0, 0.0, 0.4);
		glutSolidCube(0.3);

		glTranslatef(0.0, 0.0, 0.4);
		glutSolidCube(0.3);
	glPopMatrix();

	//Toolbox
	glPushMatrix();
		glColor3f(0.25, 0.25, 0.75);
		glTranslatef(-3.8, 0.8, -3.0);
		gluCylinder(pObj, 1, 1, 0.5, 5, 1);

		gluCylinder(pObj, 1.0, 0.0, 0.1, 5, 1);

		glColor3f(0.25, 0.25, 0.95);
		glTranslatef(0.0, 0.0, 0.45);
		gluCylinder(pObj, 1.0, 0.0, 0.1, 5, 1);
	glPopMatrix();

	//Right wall
	glColor3f(0.15, 0.15, 0.15);
	glPointSize(5.0);
	glBegin(GL_LINES);
		glVertex3f(1.0, 5.0, -3.5);
		glVertex3f(1.0, 0.0, -3.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex3f(1.0, 5.0, -2.5);
		glVertex3f(1.0, 0.0, -2.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex3f(1.0, 5.0, -1.5);
		glVertex3f(1.0, 0.0, -1.5);
	glEnd();

	glBegin(GL_LINES);
		glVertex3f(1.0, 3.0, -5.0);
		glVertex3f(1.0, 3.0, -1.0);
	glEnd();
}

void drawHarmony()
{
	//Holds
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(0.0, 3.5, -6.0);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 1.1, -6.0);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-3.0, 3.5, -5.0);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 3.9, -5.0);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	//left pod
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-3.1, 3.5, -6.4);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 1.5, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-3.1, 3.5, -7.0);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 1.5, 20, 10);
	glPopMatrix();


	//right pod
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(0.0, 3.5, -6.4);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 1.5, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(0.0, 3.5, -7.0);
		glRotatef(90, 1.0, 0.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 1.5, 20, 10);
	glPopMatrix();

	//bottom pod
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 0.8, -7.0);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 0.8, -6.4);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	//top pod
	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 3.25, -7.0);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	glPushMatrix();
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(-2.5, 3.25, -6.4);
		glRotatef(90, 0.0, 1.0, 0.0);
		gluCylinder(pObj, 0.01, 0.01, 2.0, 20, 10);
	glPopMatrix();

	//Tool Table
	glPushMatrix();
			glColor3f(0.25, 0.78, 0.89);
			glTranslatef(0.0, 1.0, -8.0);
			glRotatef(90, 0.0, 1.0, 0.0);
			glRotatef(45,0.0, 0.0, 1.0);
			gluCylinder(pObj, 0.4, 0.4, 1.0, 4, 10);
	glPopMatrix();

	//Sleeping pods
	glPushMatrix();  //Bottom dude's
		glColor3f(0.75, 0.75, 0.75);
		glTranslatef(-2.5, 0.3, -6.7);
		glRotatef(90, 0.0, 1.0, 0.0);
		glRotatef(45, 0.0, 0.0, 1.0);
		gluCylinder(pObj, 0.5, 0.5, 2.0, 4, 10);
	glPopMatrix();

	glPushMatrix();  //Bottom dude's
		glColor3f(0.75, 0.75, 0.75);
		glTranslatef(-2.5, 3.8, -6.7);
		glRotatef(90, 0.0, 1.0, 0.0);
		glRotatef(45, 0.0, 0.0, 1.0);
		gluCylinder(pObj, 0.5, 0.5, 2.0, 4, 10);
	glPopMatrix();

	glPushMatrix();  //Left dude's
		glColor3f(0.75, 0.75, 0.75);
		glTranslatef(-3.5, 3.8, -6.7);
		glRotatef(90, 1.0, 0.0, 0.0);
		glRotatef(45, 0.0, 0.0, 1.0);
		gluCylinder(pObj, 0.5, 0.5, 2.0, 4, 10);
	glPopMatrix();

	glPushMatrix();  //Right dude's
		glColor3f(0.75, 0.75, 0.75);
		glTranslatef(0.5, 3.8, -6.7);
		glRotatef(90, 1.0, 0.0, 0.0);
		glRotatef(45, 0.0, 0.0, 1.0);
		gluCylinder(pObj, 0.5, 0.5, 2.0, 4, 10);
	glPopMatrix();

	//Back wall
	glBegin(GL_POLYGON); //Left
	glColor3f(0.25, 0.25, 0.25);
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(-3.0, 5.0, -6.0);
		glVertex3f(-3.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(-4.0, 1.0, -6.0);
		glVertex3f(1.0, 1.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON); //Right
		glVertex3f(0.0, 0.0, -6.0);
		glVertex3f(0.0, 5.0, -6.0);
		glVertex3f(1.0, 5.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);  //Top
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(-4.0, 4.0, -6.0);
		glVertex3f(1.0, 4.0, -6.0);
		glVertex3f(1.0, 5.0, -6.0);
	glEnd();

	//Right wall
	glBegin(GL_POLYGON);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(1.0, 5.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
		glVertex3f(1.0, 0.0, -9.0);
		glVertex3f(1.0, 5.0, -9.0);
	glEnd();

	//Floor wall?
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(1.0, 0.0, -6.0);
		glVertex3f(1.0, 0.0, -9.0);
		glVertex3f(-4.0, 0.0, -9.0);
	glEnd();

	//Top wall
	glBegin(GL_POLYGON);
		glColor3f(0.89, 0.89, 0.89);
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(1.0, 5.0, -6.0);
		glVertex3f(1.0, 5.0, -9.0);
		glVertex3f(-4.0, 5.0, -9.0);
	glEnd();

	//Facing wall
	glBegin(GL_POLYGON);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(-4.0, 0.0, -9.0);
		glVertex3f(-4.0, 5.0, -9.0);
		glVertex3f(1.0, 5.0, -9.0);
		glVertex3f(1.0, 0.0, -9.0);
	glEnd();

	glColor3f(0.25, 0.25, 0.25);

	//Left Wall
	glBegin(GL_POLYGON);  //Right
	
		glVertex3f(-4.0, 0.0, -9.0);
		glVertex3f(-4.0, 0.0, -8.7);
		glVertex3f(-4.0, 5.0, -8.7);
		glVertex3f(-4.0, 5.0, -9.0);
	glEnd();
	
	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 0.0, -9.0);
		glVertex3f(-4.0, 1.0, -9.0);
		glVertex3f(-4.0, 1.0, -6.0);
		glVertex3f(-4.0, 0.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);  //Left
		glVertex3f(-4.0, 0.0, -6.0);
		glVertex3f(-4.0, 5.0, -6.0);
		glVertex3f(-4.0, 5.0, -7.5);
		glVertex3f(-4.0, 0.0, -7.5);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
		glVertex3f(-4.0, 5.0, -9.0);
		glVertex3f(-4.0, 4.0, -9.0);
		glVertex3f(-4.0, 4.0, -6.0);
		glVertex3f(-4.0, 5.0, -6.0);
	glEnd();

	//Harmony Connector
	glBegin(GL_POLYGON); //Left
	glColor3f(1, 1, 1);
	glVertex3f(-4.0, 1.0, -7.5);
	glVertex3f(-4.5, 1.0, -7.5);
	glVertex3f(-4.5, 4.0, -7.5);
	glVertex3f(-4.0, 4.0, -7.5);
	glEnd();

	glBegin(GL_POLYGON); //Bottom
	
	glVertex3f(-4.0, 1.0, -8.7);
	glVertex3f(-4.5, 1.0, -8.7);
	glVertex3f(-4.5, 1.0, -7.5);
	glVertex3f(-4.0, 1.0, -7.5);
	glEnd();

	glBegin(GL_POLYGON); //Right

	glVertex3f(-4.0, 1.0, -8.7);
	glVertex3f(-4.5, 1.0, -8.7);
	glVertex3f(-4.5, 4.0, -8.7);
	glVertex3f(-4.0, 4.0, -8.7);
	glEnd();

	glBegin(GL_POLYGON); //Top

	glVertex3f(-4.0, 4.0, -8.7);
	glVertex3f(-4.5, 4.0, -8.7);
	glVertex3f(-4.5, 4.0, -7.5);
	glVertex3f(-4.0, 4.0, -7.5);
	glEnd();
}

void drawColumbus()
{
	//wall with entry gap
	//Right wall
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-4.5, 0.0, -8.7);
	glVertex3f(-4.5, 0.0, -10.0);
	glVertex3f(-4.5, 5.0, -10.0);
	glVertex3f(-4.5, 5.0, -8.7);
	glEnd();

	//left wall
	glBegin(GL_POLYGON);
	
	glVertex3f(-4.5, 0.0, -6.0);
	glVertex3f(-4.5, 0.0, -7.5);
	glVertex3f(-4.5, 5.0, -7.5);
	glVertex3f(-4.5, 5.0, -6.0);
	glEnd();

	//top wall
	glBegin(GL_POLYGON); 
	glVertex3f(-4.5, 4.0, -8.7);
	glVertex3f(-4.5, 5.0, -8.7);
	glVertex3f(-4.5, 5.0, -7.5);
	glVertex3f(-4.5, 4.0, -7.5);
	glEnd();

	//bottom wall
	glBegin(GL_POLYGON); 
	glVertex3f(-4.5, 1.0, -8.7);
	glVertex3f(-4.5, 0.0, -8.7);
	glVertex3f(-4.5, 0.0, -7.5);
	glVertex3f(-4.5, 1.0, -7.5);
	glEnd();

	//wall with entry gap ends here!


	//right wall
	glBegin(GL_POLYGON); 
	glColor3f(0.65, 0.65, 0.65);
	glVertex3f(-4.5, 0.0, -10.0);
	glVertex3f(-10.0, 0.0, -10.0);
	glVertex3f(-10.0, 5.0, -10.0);
	glVertex3f(-4.5, 5.0, -10.0);
	glEnd();


	//left wall
	glBegin(GL_POLYGON);
	glColor3f(0.65, 0.65, 0.65);
	glVertex3f(-4.5, 0.0, -6.0);
	glVertex3f(-10.0, 0.0, -6.0);
	glVertex3f(-10.0, 5.0, -6.0);
	glVertex3f(-4.5, 5.0, -6.0);
	glEnd();

	//bottom wall
	glBegin(GL_POLYGON); 
	glColor3f(0.93, 0.93, 0.93);
	glVertex3f(-4.5, 0.0, -10.0);
	glVertex3f(-10.0, 0.0, -10.0);
	glVertex3f(-10.0, 0.0, -6.0);
	glVertex3f(-4.5, 0.0, -6.0);
	glEnd();

	//top wall
	glBegin(GL_POLYGON);
	//glColor3f(0.89, 0.89, 0.89);
	glVertex3f(-4.5, 5.0, -10.0);
	glVertex3f(-10.0, 5.0, -10.0);
	glVertex3f(-10.0, 5.0, -6.0);
	glVertex3f(-4.5, 5.0, -6.0);
	glEnd();

	//facing side wall
	glBegin(GL_POLYGON);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-10.0, 0.0, -6.0);
	glVertex3f(-10.0, 0.0, -10.0);
	glVertex3f(-10.0, 5.0, -10.0);
	glVertex3f(-10.0, 5.0, -6.0);
	glEnd();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-9.5,1.0,-9.4);
	glutSolidCube(1);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslated(-5, 0.5, -6.6);
	glutSolidCube(0.8);
	glPopMatrix();
}