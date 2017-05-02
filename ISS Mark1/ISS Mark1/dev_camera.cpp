/*
*	File: dev_camera.cpp
*	Author: Seth Jennings <ash.snaray@gmail.com>
*
*  Handle all camera functions including rotation of outer view, details view
*	and inside the modules
*/
#include "cus_header.h"

float transAng, transX, transY, transZ;

void cameraControl()
{

	if (specKey[GLUT_KEY_UP]) {
		camZ -= 0.1;
	}
	else if (specKey[GLUT_KEY_DOWN]) {
		camZ += 0.1;
	}
	else if (specKey[GLUT_KEY_LEFT]) {
		camX -= 0.1;
	}
	else if (specKey[GLUT_KEY_RIGHT]) {
		camX += 0.1;
	}
	else if (specKey[GLUT_KEY_ALT_R]) {
		camY -= 0.1;
	}
	else if (specKey[GLUT_KEY_CTRL_R]) {
		camY += 0.1;
	}

	transX = -camX;
	transY = -camY;
	transZ = -camZ;

	if (camLrRot > 360)
		camLrRot -= 360;
	else if (camLrRot < 0)
		camLrRot += 360;

	transAng = 360 - camUdRot;

	glRotatef(camLrRot, 0.0, 1.0, 0.0);
	glRotatef(transAng, 1.0, 0.0, 0.0);

	glTranslatef(transX, transY, transZ);
}