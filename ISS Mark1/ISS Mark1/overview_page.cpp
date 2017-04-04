#include "cus_header.h"

void overview_scn(void)
{
	glMatrixMode(GL_PROJECTION);
	glOrtho(-150, 150, -150, 150, -150, 150);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	/*
	 *  Rendering of the whole station form the outside goes here
	 */
	glBegin(GL_POLYGON);
	glEnd();
}