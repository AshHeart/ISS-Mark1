/*
 *	File: dev_camera.cpp
 *	Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  Handle all camera functions including rotation of outer view, details view 
 *	and inside the modules
 */
#include "cus_header.h"

float transAng;

void cameraControl()
{
	transAng = 630 - camUdRot;

	//glRotatef(camLrRot, 1.0, 0.0, 0.0);
	
	glRotatef(transAng, 0.0, 1.0, 0.0);
}