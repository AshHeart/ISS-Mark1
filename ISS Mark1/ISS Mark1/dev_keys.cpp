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
	if (key == 27) {
		glutInitWindowPosition(0, 0);
		glutInitWindowSize(350, 150);
		glutCreateWindow("Exit?");

		glutDisplayFunc(renderSub);
	}
}

