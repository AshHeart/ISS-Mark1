/*
 *  File: dev_mouse.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  File performs as a handler for global mouse events that may and will occur throughout the application 
 *  as interactions on various screens
 */
#include "cus_header.h"
#include <iostream>

float scx, scy;	      //Screen values
float globx, globy;  //Global values
float lastx = 0, lasty = 0, lastz = 0;		//Last x, y and z values
float diffx, diffy, diffz;			//Difference of x, y and zvalues
float camLrRot, camUdRot;		//Camera rotation Left Right Up Down
float rotSpeed = 0.2;			//Rotation speed is .2x

void mouse(int button, int state, int x, int y)
{
	scx = (float(x) / float(scnWidth) - 0.5f) * 100;
	scy = -(float(y) / float(scnHeight) - 0.5f) * 100;

	/*
	 *  Initial check for the continue button on the welcpme page
	 *  in the file welcome_page.cpp
	 */
	if (scx >= -6 && scx <= 6 && scy <= -39 && scy >= -45) {
		if(screen == 1)
			screen = 2;
	}

	/*
	 *  Check for which part of the station is clicked on the overview
	 *  in the file overview_page.cpp
	 */
	/*if (1) {
		screen = 3;
	}*/

	/*
	 *   To enter the selected module
	 */
	if(scx >= 16.0 && scx <= 29.0 && scy <= -32.8 && scy >= -40.9) {
		if (screen == 3)
			screen = 4;
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
		diffx = lastx - x;
		diffy = y - lasty;

		//Save new values
		lastx = x;
		lasty = y;

		camLrRot += diffx * rotSpeed;
		camUdRot += diffy * rotSpeed;
	}
	else if (screen == 4) {
		//Calculate difference in x, y and z values

		//Save new values
	}
	glutPostRedisplay();
}
