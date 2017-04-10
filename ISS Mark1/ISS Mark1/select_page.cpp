/*
*  File: select_page.cpp
*  Author: Seth Jennnings <ash.snaray@gmail.com>
*
*  Shows details about selected module and an option to enter it for exploration
*  
*/
#include "cus_header.h"

void drawUnity();
void cameraControl();

float cam_xpos = 4.5, cam_ypos = .45, cam_zpos = 5.5; //Camera coordinates in inner view
float cam_lrrot = 0, cam_udrot = 0; //Camera rotation in inner view
float pos_speed = 0.015, rot_speed = .50; //Speed of movement and rotation

void selectScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45.0f, (float)scnWidth / (float)scnHeight, 0.1, 100.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST);

	/*
	 *  Just render node 1 Unity for now
	 */
	drawUnity();

	cameraControl();
}

void cameraControl()				//Camera control in inner view
{
	float trans_x = -cam_xpos;						//Camera position coordinates are opposite of viewing coordinates
	float trans_y = -cam_ypos;
	float trans_z = -cam_zpos;

	if (cam_lrrot > 360)
		cam_lrrot -= 360;
	else if (cam_lrrot < 0)
		cam_lrrot += 360;
	float trans_ang = (360.0f - cam_lrrot);

	glRotatef(cam_udrot, 1.0, 0.0, 0.0);			//Up-down rotation
	glRotatef(trans_ang, 0.0, 1.0, 0.0);			//Left-right rotation

	glTranslatef(trans_x, trans_y, trans_z);
}

void drawUnity()
{
	glBegin(GL_POLYGON);
	glVertex3f(3.0, 0.0, 0.0);
	glVertex3f(3.0, 4.0, 0.0);
	glVertex3f(1.0, 4.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glEnd();
}