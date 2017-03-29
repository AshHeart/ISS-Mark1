/*
 *	File: main.cpp
 *	Author: Seth Jennings <ash.snaray@gmail.com>
 *	GitHub: AshHeart/ISS-Mark1
 *
 *	Entry point for app, main.cpp defines main() to handle overall functions of the application
 */
#include "cus_header.h"

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);

	/*
	 * Get window parameters and create initial window
	 */
	scnWidth = glutGet(GLUT_SCREEN_WIDTH);
	scnHeight = glutGet(GLUT_SCREEN_HEIGHT);
	scnHeight /= 1.09;
	scnWidth /= 1.005;

	glutInitWindowSize(scnWidth, scnHeight);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("International Space Station- Welcome");

	init();
	glutDisplayFunc(render);

	glutMainLoop();

	return 0;
}