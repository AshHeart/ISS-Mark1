/*
 *  File: dev_mouse.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  File performs as a handler for global mouse events that may and will occur throughout the application 
 *  as interactions on various screens
 */
#include "cus_header.h"
#include <iostream>

void mouse(int button, int state, int x, int y)
{
	float scx, scy;
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