/*
*  File: select_page.cpp
*  Author: Seth Jennnings <ash.snaray@gmail.com>
*
*  Shows details about selected module and an option to enter it for exploration
*  
*/
#include "cus_header.h"

void selectScn(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-500, 500, -500, 500, -500, 500);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glEnable(GL_DEPTH_TEST);

	/*
	 *  Just render node 1 Unity for now
	 */



	/*
	 *  Some simple background for this page
	 */
}