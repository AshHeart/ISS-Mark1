/*
 *  File: render_details.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  Renders details abotu selected module and gives an option to enter for exploration
 */
#include "cus_header.h"

GLUquadric *obj;

void renderDestiny();
void renderColumbus();

void showDetails(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-500, 500, -500, 500, -500, 500);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	renderColumbus();

	/*
     *	Enter button
	 */
	glColor3f(0.0, 0.0, 0.0);
	dispText3D(185, -380, 100, "Enter Module");

	glBegin(GL_LINE_LOOP);
		glVertex3f(160, -340, 100);
		glVertex3f(160, -410, 100);
		glVertex3f(290, -410, 100);
		glVertex3f(290, -340, 100);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(150, -330, 100);
		glVertex3f(150, -420, 100);
		glVertex3f(300, -420, 100);
		glVertex3f(300, -330, 100);
	glEnd();

	/*
	 *  Grid for the table
	 */
	glBegin(GL_QUADS);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(30, 340, 100);
		glVertex3f(430, 340, 100);
		glVertex3f(430, 343, 100);
		glVertex3f(30, 343, 100);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(30, 240, 100);
		glVertex3f(430, 240, 100);
		glVertex3f(430, 242.5, 100);
		glVertex3f(30, 242.5, 100);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(30, 130, 100);
		glVertex3f(430, 130, 100);
		glVertex3f(430, 133, 100);
		glVertex3f(30, 133, 100);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(30, 20, 100);
		glVertex3f(430, 20, 100);
		glVertex3f(430, 23, 100);
		glVertex3f(30, 23, 100);
	glEnd();

	/*glBegin(GL_QUADS);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(30, -100, 100);
		glVertex3f(430, -100, 100);
		glVertex3f(430, -103, 100);
		glVertex3f(30, -103, 100);
	glEnd();

	/*glBegin(GL_QUADS);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(30, -190, 100);
		glVertex3f(430, -190, 100);
		glVertex3f(430, -193, 100);
		glVertex3f(30, -193, 100);
	glEnd();*/

	glBegin(GL_QUADS);
		glColor3f(0.65, 0.65, 0.65);
		glVertex3f(220, 430, 100);
		glVertex3f(222, 430, 100);
		glVertex3f(222, -80, 100);
		glVertex3f(220, -80, 100);
	glEnd();

	glBegin(GL_QUADS);
		glColor3f(0.25, 0.25, 0.25);
		glVertex3f(10, 450, 100);
		glVertex3f(450, 450, 100);
		glVertex3f(450, -100, 100);
		glVertex3f(10, -100, 100);
	glEnd();

	/*
	 *	Background for the page
	 */
}

void renderDestiny()
{
	glColor3f(1.0, 1.0, 1.0);
	dispText3D(-350, 420, -150, "U.S Laboratory Module- Destiny");
	dispText3D(-330, 380, -150, "NASA/Boeing");

	dispText3D(50, 380, 100, "Length");
	dispText3D(260, 380, 100, "8.5m (28ft)");

	dispText3D(50, 280, 100, "Width");
	dispText3D(260, 280, 100, "3.4m Diameter (14ft)");

	dispText3D(50, 180, 100, "Launch Mass");
	dispText3D(260, 180, 100, "14,515 kg (32,000lb)");

	dispText3D(50, 80, 100, "Exterior");
	dispText3D(260, 80, 100, "Aluminum, 3 cylindrical");
	dispText3D(260, 50, 100, "sections 2 endcones");

	dispText3D(50, -40, 100, "Number of Racks");
	dispText3D(260, -40, 100, "24 (13 scientific and");
	dispText3D(260, -70, 100, "11 system)");

	dispText3D(50, -160, 100, "Windows");
	dispText3D(260, -160, 100, "1, diameter 50.9cm (20in)");

	dispText3D(50, -250, 100, "Launch Date");
	dispText3D(260, -250, 100, "February 7, 2001");

	glPushMatrix();
		glTranslatef(view[0], view[1], view[2]);
		cameraControl();

		obj = gluNewQuadric();
		gluQuadricDrawStyle(obj, GLU_LINE);

		glColor3f(1.0, 0.95, 0.95);
		glRotatef(90, 0.0, 1.0, 0.0);
		glRotatef(45, 0.0, 1.0, 0.0);

		//Body
		glTranslatef(450, 0, 100);
		gluCylinder(obj, 100, 100, 200, 100, 5);

		//Body to front hatch connector
		glTranslatef(0.0, 0.0, -3.0);
		gluCylinder(obj, 50, 100, 3, 100, 5);

		//Front hatch
		glTranslatef(0.0, 0.0, -11.0);
		gluCylinder(obj, 50, 50, 10, 100, 1);

		//Hatch cover front
		gluCylinder(obj, 50, 0, 1, 30, 5);

		//Body to back hatch connector
		glTranslatef(0.0, 0.0, 214.0);
		gluCylinder(obj, 100, 50, 3, 100, 5);

		//Back Hatch
		glTranslatef(0.0, 0.0, 3.0);
		gluCylinder(obj, 50, 50, 10, 100, 1);

		//Hatch cover Back
		glTranslatef(0.0, 0.0, 10);
		gluCylinder(obj, 50, 0, 1, 30, 5);
	glPopMatrix();
}

void renderColumbus()
{
	glColor3f(1.0, 1.0, 1.0);
	dispText3D(-350, 420, -150, "European Research Laboratory Columbus");
	dispText3D(-330, 380, -150, "European Space Agency (ESA)");

	dispText3D(50, 380, 100, "Length");
	dispText3D(260, 380, 100, "6.9 m (22.6 ft)");

	dispText3D(50, 280, 100, "Diameter");
	dispText3D(260, 280, 100, "4.5 m (14.7 ft)");

	dispText3D(50, 180, 100, "Launch Mass");
	dispText3D(260, 180, 100, "10,300 kg (22,700 lb)");

	//dispText3D(50, 80, 100, "Exterior");
	//dispText3D(260, 80, 100, "Aluminum, 3 cylindrical");
	//dispText3D(260, 50, 100, "sections 2 endcones");

	dispText3D(50, 80, 100, "Number of Racks");
	dispText3D(260, 80, 100, "10 International Standard");
	dispText3D(260, 50, 100, "Payload Racks(ISPRs)");


	dispText3D(50, -40, 100, "Launch Date");
	dispText3D(260, -40, 100, "February 7, 2008");

	glPushMatrix();
	glTranslatef(view[0], view[1], view[2]);
	cameraControl();

	obj = gluNewQuadric();
	gluQuadricDrawStyle(obj, GLU_LINE);

	glColor3f(1.0, 0.95, 0.95);
	glRotatef(90, 0.0, 1.0, 0.0);
	glRotatef(45, 0.0, 1.0, 0.0);

	//Body
	glTranslatef(450, 0, 100);
	gluCylinder(obj, 100, 100, 200, 100, 5);

	//Body to front hatch connector
	glTranslatef(0.0, 0.0, -3.0);
	gluCylinder(obj, 50, 100, 3, 100, 5);

	//Front hatch
	glTranslatef(0.0, 0.0, -11.0);
	gluCylinder(obj, 50, 50, 10, 100, 1);

	//Hatch cover front
	gluCylinder(obj, 50, 0, 1, 30, 5);

	//Body to back hatch connector
	glTranslatef(0.0, 0.0, 214.0);
	gluCylinder(obj, 100, 50, 3, 100, 5);

	//Back Hatch
	glTranslatef(0.0, 0.0, 3.0);
	gluCylinder(obj, 50, 50, 10, 100, 1);

	//Hatch cover Back
	glTranslatef(0.0, 0.0, 10);
	gluCylinder(obj, 50, 0, 1, 30, 5);
	glPopMatrix();
}

void dispText3D(GLfloat x, GLfloat y, GLfloat z, const char *text)
{
	unsigned char i, len;
	glRasterPos3f(x, y, z);

	len = (unsigned char)strlen(text);
	for (i = 0; i < len; i++)
	{
		glutBitmapCharacter(font, text[i]);
	}
}