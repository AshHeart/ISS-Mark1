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

GLint view[3] = { 0.0, 0.0, 0.0 };
GLint axis = 0;
GLfloat theta[3] = { 0.0, 0.0, 0.0 };
bool specKey[255];
int room;

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

	/*
	*  IF c is pressed go inside the room
	*/
	if (screen == 2) {
		if (key == 'c' || key == 'C') {
			screen = 4;
		}
	}

	/*
	*  While inside the room, if i is
	*  pressed show information about the module
	*/
	if (screen == 4) {
		if (key == 'i' || key == 'I') {
			screen = 3;
			room = 1;
		}
		else if (key == 'o' || key == 'O') {
			screen = 3;
			room = 2;
		}
		else if (key == 'p' || key == 'P') {
			screen = 3;
			room = 3;
		}
	}

	/*
	*  After displaying information is b
	*	is pressed go back inside the room
	*/
	if (screen == 3) {
		if (key == 'b' || key == 'B') {
			screen = 4;
		}
	}

	if (screen == 2) {
		if (key == 'w')	view[1] += 1;	  //y view
		if (key == 'a') view[0] += 1;	 //x view
		if (key == 'j')	view[2] += 1;	//z view

		if (key == 's') view[1] -= 1;     //-y view
		if (key == 'd') view[0] -= 1;    //-x view
		if (key == 'l') view[2] -= 1;	//-z view

		theta[axis] += 1.0;
		if (theta[axis] > 360.0) theta[axis] -= 360.0;
		overviewScn();
	}

	glutPostRedisplay();
}

void specKeys(int key, int x, int y)
{
	if (screen == 4) {
		specKey[key] = true;
	}

	glutPostRedisplay();
}

void specKeysUp(int key, int x, int y)
{
	if (screen == 4) {
		specKey[key] = false;
	}

	glutPostRedisplay();
}
