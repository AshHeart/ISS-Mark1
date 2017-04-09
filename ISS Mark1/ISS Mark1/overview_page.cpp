/*
*  File: overview_page.cpp
*  Author: Seth Jennings <ash.snaray@gmail.com>
*
*  File renders a full overview of the space station, user wil be able to select any of 
*  the available module sto enter and interact with  
*/
#include "cus_header.h"

void overviewScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(-500, 500, -500, 500, -500, 500);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);

	glEnable(GL_DEPTH_TEST);

	/*
	 *  Rendering of the whole station form the outside goes here
	 */

	/*
	 *  Background for this page to go here
	 */
}