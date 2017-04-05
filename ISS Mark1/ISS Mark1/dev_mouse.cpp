/*
 *  File: dev_mouse.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  File performs as a handler for global mouse events that may and will occur throughout the application 
 *  as interactions on various screens
 */
#include "cus_header.h"
#include <iostream>

using namespace std;

void mouse(int x, int y, int button, int state)
{
	float scx, scy;
	scx = (float(x) / float(scnWidth) - 0.5f) * 100;
	scy = -(float(y) / float(scnHeight) - 0.5f) * 100;

	/*
	 *  Initial check for the continue button on the welcpme page
	 *  in the file welcome_page.cpp
	 */
	if ((scy >= -40 && scy <= -45) && (scx >= -7 && scx <= 7) && (button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN)) {
		overview_scn();
	}
}

void subMouse(int x, int y, int button, int state)
{

}