/*
*  File: overview_page.cpp
*  Author: Seth Jennings <ash.snaray@gmail.com>
*
*  File renders a full overview of the space station, user wil be able to select any of
*  the available modules to enter and interact with
*/
#include "cus_header.h"

void overviewScn(void)
{
	GLUquadric *ITS, *ITS2, *Labs, *arr;
	GLfloat a, b;
	GLint i = 0, j;
	GLfloat ambLight[] = { 0.65, 0.65, 0.65, 0.0 };

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(60.0f, (GLdouble)(scnWidth / scnHeight), 1.0, 500.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.0, 0.0, 0.0, 1.0);

	glEnable(GL_LIGHTING);
	glEnable(GL_COLOR_MATERIAL);

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambLight);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);

	glLightf(GL_LIGHT0, GL_AMBIENT, *ambLight);
	glEnable(GL_LIGHT0);

	/*
	*  Rendering of the whole station form the outside goes here
	*
	*  Legend for comments:
	*		ITS- Integrated Truss Segment
	*      JEM- Japanese Experiment Module
	*      ELM- Experiment Logistics Module
	*      ERL- European Research Laboratory
	*      PMM- Permanent Multipurpose Module
	*		SA-  Solar Arrays
	*
	*		S- Starboard
	*		P- Port
	*		T- Top
	*		B- Bottom
	*
	*	Example: P6 ITS- Integrated Truss Segment Port side 6
	*/
	glPushMatrix();
	ITS = gluNewQuadric();
	gluQuadricDrawStyle(ITS, GLU_FILL);

	ITS2 = gluNewQuadric();
	gluQuadricDrawStyle(ITS2, GLU_LINE);

	Labs = gluNewQuadric();
	gluQuadricDrawStyle(Labs, GLU_FILL);

	arr = gluNewQuadric();
	gluQuadricDrawStyle(arr, GLU_FILL);

	////glRotatef(theta[0], 1.0, 0.0, 0.0);
	//glRotatef(theta[1], 0.0, 1.0, 0.0);
	////glRotatef(theta[2], 0.0, 0.0, 1.0);

	glTranslatef(view[0], view[1], view[2]);

	glColor3f(0.0, 0.0, 1.0);

	//ST SA Bank 1
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D, textures[1]);
	glTranslatef(-31.5, 9.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	glTexCoord2d(0.0, 0.0); gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.65);

	glPushMatrix();
	glTranslatef(-29.5, 8.3, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.07, 0.07, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(-27.5, 9.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	//ST SA Bank 2
	glPushMatrix();
	glTranslatef(-22.0, 9.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	glPushMatrix();
	glTranslatef(-20, 8.7, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.1, 0.1, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(-18.05, 9.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	//SB SA Bank 1
	glPushMatrix();
	glTranslatef(-31.5, -38.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	glPushMatrix();
	glTranslatef(-29.5, -38.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.1, 0.1, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(-27.5, -38.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	//SB SA Bank 2
	glPushMatrix();
	glTranslatef(-22.0, -38.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	glPushMatrix();
	glTranslatef(-20, -39.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.1, 0.1, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(-18.05, -38.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	//S6 ITS
	glPushMatrix();
	glTranslatef(-32.8, 5.5, -100.0);
	glRotatef(45, 1.0, 0.0, 0.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(ITS, 4, 4, 7, 4, 6);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.65);

	//S5 ITS
	glPushMatrix();
	glTranslatef(-25.7, 5.0, -100.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(ITS2, 3.5, 3.5, 2, 3, 6);
	glPopMatrix();

	//S4 ITS
	glPushMatrix();
	glTranslatef(-20.3, 5.5, -100.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	glutSolidCube(6.5);
	glPopMatrix();

	//S3 ITS
	glPushMatrix();
	glTranslatef(-17.7, 5.0, -100.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(ITS2, 3.5, 3.5, 4, 3, 6);
	glPopMatrix();

	//S1 ITS
	glPushMatrix();
	glTranslatef(-13.5, 5.5, -100.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(ITS, 3, 3, 7, 5, 10);
	glPopMatrix();

	glColor3f(0.5, 0.5, 0.5);

	//Node 1 Unity
	glPushMatrix();
	glTranslatef(-3.2, 0.0, -100.0);
	gluCylinder(Labs, 3, 3, 7, 60, 10);

	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, 7.0);
	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	gluCylinder(Labs, 2, 2, 2, 60, 5);

	gluCylinder(Labs, 1.8, 1.8, 1, 4, 1);
	glPopMatrix();

	//U.S. Lab Destiny
	glPushMatrix();
	glTranslatef(-3.2, 0.0, -91.8);
	gluCylinder(Labs, 3, 3, 9, 60, 10);

	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, 9.0);
	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	gluCylinder(Labs, 2, 2, 2, 60, 1);
	glPopMatrix();

	//Node 2 Harmony
	glPushMatrix();
	glTranslatef(-3.2, 0.0, -80.8);
	gluCylinder(Labs, 3, 3, 7, 60, 10);

	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, 7.0);
	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	gluCylinder(Labs, 2, 2, 2, 60, 1);

	gluCylinder(Labs, 1.8, 1.8, 1, 4, 1);
	glPopMatrix();

	//Node 3 Tranquility
	glPushMatrix();
	glTranslatef(0.0, 0.0, -97.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(Labs, 3, 3, 5, 60, 10);

	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, 5.0);
	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	gluCylinder(Labs, 2, 2, 0.5, 60, 1);

	glTranslatef(0.0, 0.0, -5.5);
	gluCylinder(Labs, 2, 2, 0.5, 60, 1);

	glTranslatef(-3.5, 0.0, 3.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(Labs, 1.5, 1.5, 0.5, 60, 1);
	glPopMatrix();

	//PMM
	glPushMatrix();
	glTranslatef(3.0, 0.0, -94.0);
	gluCylinder(Labs, 3, 3, 5, 60, 10);

	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, 5.0);
	gluCylinder(Labs, 3, 0.5, 1.5, 60, 1);

	glTranslatef(0.0, 0.0, 1.5);
	gluCylinder(Labs, 0.5, 0, 0.1, 60, 1);
	glPopMatrix();

	//JEM Kibo (Hope)
	glPushMatrix();
	glTranslatef(0.5, 0.0, -78.5);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(Labs, 3, 3, 7, 60, 10);

	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, -1.4);
	gluCylinder(Labs, 2, 2, 2, 60, 1);
	glPopMatrix();

	//JEM ELM Pressurised Section
	glPushMatrix();
	glTranslatef(4.4, 3.1, -78.5);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(Labs, 2, 2, 4.5, 60, 10);

	gluCylinder(Labs, 2, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, -0.6);
	gluCylinder(Labs, 1.5, 1.5, 0.5, 60, 1);

	glTranslatef(0.0, 0.0, 5.0);
	gluCylinder(Labs, 2, 0, 0.5, 60, 1);
	glPopMatrix();

	//JEM Exposed Section
	glPushMatrix();
	glTranslatef(7.5, -2.7, -78.5);
	glRotatef(90, 0.0, 1.0, 0.0);
	glRotatef(45, 0.0, 0.0, 1.0);
	gluCylinder(Labs, 2, 2, 4, 4, 1);

	glTranslatef(-2.3, 1.2, 3.5);
	glRotatef(45, 0.0, 0.0, 1.0);
	glutSolidCube(1);
	glTranslatef(0.0, 0.0, -1.1);
	glutSolidCube(1);
	glTranslatef(0.0, 0.0, -1.1);
	glutSolidCube(1);
	glTranslatef(0.0, 0.0, -1.1);
	glutSolidCube(1);

	glTranslatef(2.8, -2.0, 3.0);
	glutSolidCube(1.3);
	glTranslatef(0.0, -1.6, 0.0);
	glutSolidCube(1.3);

	glTranslatef(2.0, 1.0, -3.0);
	glRotatef(30, 0.0, 1.0, 0.0);
	gluCylinder(Labs, 0.2, 0.2, 3, 60, 1);

	glutSolidCube(0.5);

	glTranslatef(0.0, 0.0, 3.0);
	glRotatef(-20, 1.0, 0.0, 0.0);
	glRotatef(-70, 0.0, 1.0, 0.0);
	gluCylinder(Labs, 0.2, 0.2, 2, 60, 1);

	glutSolidCube(0.5);
	glPopMatrix();

	//ERL Columbus
	glPushMatrix();
	glTranslatef(-7.0, 0.0, -78.5);
	glRotatef(-90, 0.0, 1.0, 0.0);
	gluCylinder(Labs, 3, 3, 5, 60, 10);

	gluCylinder(Labs, 3, 0, 0.1, 60, 1);

	glTranslatef(0.0, 0.0, 5.0);
	gluCylinder(Labs, 3, 1, 0.5, 60, 1);

	glTranslatef(0.0, 0.0, -7.0);
	gluCylinder(Labs, 2, 2, 2, 60, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.65);

	//S0 ITS
	glPushMatrix();
	glTranslatef(-6.5, 5.5, -100.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(ITS, 3, 3, 7, 5, 10);
	glPopMatrix();

	//P1 ITS
	glPushMatrix();
	glTranslatef(0.5, 5.5, -100.0);
	glRotatef(90, 0.0, 1.0, 0.0);
	gluCylinder(ITS, 3, 3, 7, 5, 10);
	glPopMatrix();

	//P3 ITS
	glPushMatrix();
	glTranslatef(11.5, 5.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	gluCylinder(ITS2, 3.5, 3.5, 4, 3, 6);
	glPopMatrix();

	//P4 ITS
	glPushMatrix();
	glTranslatef(14.9, 5.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glutSolidCube(6.5);
	glPopMatrix();

	//P5 ITS
	glPushMatrix();
	glTranslatef(20.0, 5.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	gluCylinder(ITS2, 3.5, 3.5, 2, 3, 6);
	glPopMatrix();

	//P6 ITS
	glPushMatrix();
	glTranslatef(27.0, 5.5, -100.0);
	glRotatef(45, 1.0, 0.0, 0.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	gluCylinder(ITS, 4, 4, 7, 4, 6);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	//PA SA Bank1
	glPushMatrix();
	glTranslatef(21.5, 9.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	glPushMatrix();
	glTranslatef(23.5, 8.3, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.1, 0.1, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(25.5, 9.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	//PA SA Bank2
	glPushMatrix();
	glTranslatef(12.5, 9.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	glPushMatrix();
	glTranslatef(14.5, 8.7, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.1, 0.1, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(16.5, 9.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	//PA SB Bank1
	glPushMatrix();
	glTranslatef(21.5, -38.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	glPushMatrix();
	glTranslatef(23.5, -38.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.1, 0.1, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(25.5, -38.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	//PB SB Bank2
	glPushMatrix();
	glTranslatef(12.5, -38.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();

	glColor3f(0.65, 0.65, 0.650);

	glPushMatrix();
	glTranslatef(14.5, -39.0, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 0.1, 0.1, 40.5, 20, 1);

	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);

	glTranslatef(0.0, 0.0, 40.5);
	gluCylinder(arr, 0.5, 0.5, 0.7, 20, 1);
	glPopMatrix();

	glColor3f(0.0, 0.0, 1.0);

	glPushMatrix();
	glTranslatef(16.5, -38.5, -100.0);
	glRotatef(-90, 0.0, 1.0, 0.0);
	glRotatef(-90, 1.0, 0.0, 0.0);
	gluCylinder(arr, 1.6, 1.6, 40, 2, 1);
	glPopMatrix();
	glPopMatrix();

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
		glVertex3f(a, b, -200);
		glEnd();

		a = rand() % 600;
		b = rand() % 600;
		j = i % 3;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(-a, b, -200);
		glEnd();

		a = rand() % 600;
		b = rand() % 600;
		j = i % 3;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(a, -b, -200);
		glEnd();

		a = rand() % 600;
		b = rand() % 600;
		j = i % 3;
		glPointSize(j);
		glBegin(GL_POINTS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(-a, -b, -200);
		glEnd();
	}

	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHTING);

	//Remove once click to render is implemented on overview
	glColor3f(1.0, 1.0, 1.0);
	dispText3D(10, -25, -50, "Press C to continue");
}