/*
 *  File: dev_keys.cpp
 *  Author: Seth Jennings <ash.snaray@gmail.com>
 *
 *  File implements keyboard functions for the whole application
 *  user will be able to interact with the environment and move around the environment 
 *  using keys on the keyboard
 *  Controls to be appended here after completion
 */
#include "cus_header.h"

GLint view[] = { 0.0, 0.0, 5.0 };
GLint axis = 0;
GLfloat theta[3] = { 0.0, 0.0, 0.0 };

/*
 *  Global keyboard interaction and events handler
 */
void keyboard(unsigned char key, int x, int y) {
	/*
	 *  If ESC is pressed give the user an option to quit out of the application from anywhere
	 *  decision if just text is needed or a whole new window will bw experimanted on this branch
	 */
	if (key == 27) {
		exit(0);
	}

	if (key == 'c' && screen == 2) {
			screen = 3;
	}

	if (screen == 2 || screen == 3 || screen == 4) {
		if (key == 'w')	view[1] += 1;	  //y view
		if (key == 'a') view[0] += 1;	 //x view
		if (key == 'j')	view[2] += 1;	//z view

		if (key == 's') view[1] -= 1;     //-y view
		if (key == 'd') view[0] -= 1;    //-x view
		if (key == 'l') view[2] -= 1;	//-z view

		if (key == 'v') axis = 0;
		if (key == 'b') axis = 1;
		if (key == 'n') axis = 2;
		
		theta[axis] += 1.0;
		if (theta[axis] > 360.0) theta[axis] -= 360.0;
		overviewScn();
	}

	glutPostRedisplay();
}

