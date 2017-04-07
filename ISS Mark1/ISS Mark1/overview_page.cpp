/*
*  File: overview_page.cpp
*  Author: Seth Jennings <ash.snaray@gmail.com>
*
*  File renders a full overview of the space station, user wil be able to select any of 
*  the available module sto enter and interact with  
*/
#include "cus_header.h"

void overview_scn(void)
{
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	glOrtho(-150, 150, -150, 150, -150, 150);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	/*
	 *  Rendering of the whole station form the outside goes here
	 */
	glBegin(GL_POLYGON);
	glEnd();

	/*
	 *  Background for this page to go here
	 */
}