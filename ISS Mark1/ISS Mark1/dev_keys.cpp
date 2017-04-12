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

	glutPostRedisplay();
}

