/*
 *	File: main.cpp
 *	Author: Seth Jennings <ash.snaray@gmail.com>
 *	GitHub: AshHeart/ISS-Mark1
 *
 *	Entry point for app, main.cpp defines main() to handle overall functions of the application
 */
#include "cus_header.h"

 /*
  * Custom global variable declarations
  */
int scnHeight;	//Screen height
int scnWidth;   //Screen Width
int mainWindow; //Window code for creating subwindows

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);

	/*
	 * Get window parameters and create initial window
	 */
	scnWidth = glutGet(GLUT_SCREEN_WIDTH);
	scnHeight = glutGet(GLUT_SCREEN_HEIGHT);

	glutInitWindowSize(scnWidth, scnHeight);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("International Space Station- Welcome");

	init();
	glutDisplayFunc(render);
	glutReshapeFunc(reshape);
	glutFullScreenToggle();
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);

	glutMainLoop();

	return 0;
}