/*
*	File: dev_camera.cpp
*	Author: Seth Jennings <ash.snaray@gmail.com>
*
*  Handle all camera functions including rotation of outer view, details view
*	and inside the modules
*/
#include "cus_header.h"
#define PI_OVER_180  0.0174532925f		//PI value

float transAng, transX, transY, transZ;

bool noCollision();

void cameraControl()
{

	if (specKey[GLUT_KEY_UP]) {
		camX -= (float)sin(camLrRot * PI_OVER_180) * 0.1;
		camZ -= (float)cos(camLrRot * PI_OVER_180) * 0.1;

		if (!noCollision()) {
			camX += (float)sin(camLrRot * PI_OVER_180) * 0.1;
			camZ += (float)cos(camLrRot * PI_OVER_180) * 0.1;
		}
	}
	else if (specKey[GLUT_KEY_DOWN]) {
		camX += (float)sin(camLrRot * PI_OVER_180) * 0.1;
		camZ += (float)cos(camLrRot * PI_OVER_180) * 0.1;

		if (!noCollision()) {
			camX -= (float)sin(camLrRot * PI_OVER_180) * 0.1;
			camZ -= (float)cos(camLrRot * PI_OVER_180) * 0.1;
		}
	}
	else if (specKey[GLUT_KEY_LEFT]) {
		camX -= (float)cos((360 - camLrRot) * PI_OVER_180) * 0.1;
		camZ -= (float)sin((360 - camLrRot) * PI_OVER_180) * 0.1;

		if (!noCollision()) {
			camX += (float)cos((360 - camLrRot) * PI_OVER_180) * 0.1;
			camZ += (float)sin((360 - camLrRot) * PI_OVER_180) * 0.1;
		}
	}
	else if (specKey[GLUT_KEY_RIGHT]) {
		camX += (float)cos((360 - camLrRot) * PI_OVER_180) * 0.1;
		camZ += (float)sin((360 - camLrRot) * PI_OVER_180) * 0.1;

		if (!noCollision()) {
			camX -= (float)cos((360 - camLrRot) * PI_OVER_180) * 0.1;
			camZ -= (float)sin((360 - camLrRot) * PI_OVER_180) * 0.1;
		}
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

bool noCollision() {
	if (camX < 5.0 && camX > -5) {	//Inside destiny
		if (camZ < -5 && camZ > 1) {
			if (camY < 5 && camY > 0) {
				return true;
			}
			else {
				return false;
			}
		}
	}

	if (camX < 1 && camX > -3) {	//Between Harmony and Destiny
		if (camZ < -9 && camZ > -6) {
			if (camY < -6 && camY > -5) {
				return true;
			}
			else {
				return false;
			}
		}
	}
	
	if (camX < 5.0 && camX > -5) {	//Inside harmony
		if (camZ < -9 && camZ > -6) {
			if (camY < 5 && camY > 0) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}

void cameraControl1() {
	if (camLrRot > 360)
		camLrRot -= 360;
	else if (camLrRot < 0)
		camLrRot += 360;

	transAng = 360 - camUdRot;

	//glRotatef(camLrRot, 0.0, 1.0, 0.0);
	glRotatef(transAng, 1.0, 0.0, 0.0);
}