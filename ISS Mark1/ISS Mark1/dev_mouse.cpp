/*
*  File: dev_mouse.cpp
*  Author: Seth Jennings <ash.snaray@gmail.com>
*
*  File performs as a handler for global mouse events that may and will occur throughout the application
*  as interactions on various screens
*/
#include "cus_header.h"
#include <iostream>

float scX, scY;	                                //Screen values
float lastX = 0, lastY = 0, lastZ = 0;		   //Last x, y and z values
float diffX, diffY, diffZ;			          //Difference of x, y and z values
float camLrRot, camUdRot;		             //Camera rotation Left Right Up Down
float camX = -1.0, camY = 2.0, camZ = -1.0; //Camera Postitons
float rotSpeed = 0.5;			           //Rotation speed is .5x

void mouse(int button, int state, int x, int y)
{
	scX = (float(x) / float(scnWidth) - 0.5f) * 100;
	scY = -(float(y) / float(scnHeight) - 0.5f) * 100;

	/*
	*  Initial check for the continue button on the welcpme page
	*  in the file welcome_page.cpp
	*/
	if (screen == 1) {
		if (scX >= -6 && scX <= 6 && scY <= -39 && scY >= -45)
			screen = 2;
	}

	/*
	*   To enter the selected module
	*/
	if (screen == 3) {
		if (scX >= 16.0 && scX <= 29.0 && scY <= -32.8 && scY >= -40.9) {
			screen = 4;
			lastX = x;
			lastY = y;
		}
	}

	glutPostRedisplay();
}

void moveMouse(int x, int y)
{
	/*
	*	To register movemet	in module details page
	*/
	if (screen == 3 || screen == 4) {
		//Calculate differences in x and y values
		diffX = lastX - x;
		diffY = y - lastY;

		//Save new values
		lastX = x;
		lastY = y;

		camLrRot += diffX * rotSpeed;
		camUdRot += diffY * rotSpeed;
	}

	glutPostRedisplay();
}
