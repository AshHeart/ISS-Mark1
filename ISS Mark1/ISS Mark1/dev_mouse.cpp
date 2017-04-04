#include "cus_header.h"

void mouse(int x, int y, int btn, int state)
{
	/*
	 *  Initial check for the continue button on the welcpme page
	 *  in the file welcome_page.cpp
	 */
	if ((y >= -40 && y <= -45) && (x >= -7 && x <= 7) && (btn == GLUT_LEFT_BUTTON)) {
		overview_scn();
	}

	glutPostRedisplay();
}