#include "cus_header.h"

void mouse(int x, int y, int btn, int state)
{
	float scx, scy;
	scx = (float(x) / float(scnWidth) - 0.5f) * 100;
	scy = -(float(y) / float(scnHeight) - 0.5f) * 100;

	/*
	 *  Initial check for the continue button on the welcpme page
	 *  in the file welcome_page.cpp
	 */
	if ((scy >= -40 && scy <= -45) && (scx >= -7 && scx <= 7) && (btn == GLUT_LEFT_BUTTON)) {
		overview_scn();
	}
}