/*
 *  File: cus_headers.h
 *  Author: AshHeart <ash.snaray@gmail.com>
 *  
 * Custom header file to imlement all global variables 
 * to be used by the app as well as function declarations.
 * All functions definitions in cus_header.cpp
 */
#pragma once

#include "gl_headers.h"

/*
 * Global function decalrations
 * All functions will be defined in their respective files
 * to be updated later
 */
void init(void);	                             //To initialize glut
void render(void);	                            //To render everything
void reshape(int, int);					       //To handle resizing of the window
void welcomeScn(void);                        //To display the welcome landing screen
void overviewScn(void);					     //To show an overview of the station
void renderScn(void);						//To render all the main modules' inner views
void dispText(GLfloat, GLfloat, const char*);  //To dispay text on screen
void dispText3D(GLfloat, GLfloat, GLfloat, const char *);
void mouse(int, int, int, int);			  //To handle mouse functions and interactions
void moveMouse(int, int);				//To register mouse movement
void keyboard(unsigned char, int, int);	 //To handle keyboard functions and interactions
void cameraControl();					//To handle idle and active camera
void showDetails(void);
//void infoscn(void);				//To display the info about keys and controls

/*
 *  External variables declarations to be 
 *  used in other files
 */
extern int scnHeight;	  //Screen height
extern int scnWidth;	 //Screen Width
extern int screen;		//Screen Number
extern GLint view[3];	//To handle rotation
extern GLint axis;		//For selecting one of three axis
extern GLfloat theta[3]; //To rotate in one of three axis
extern void *font;		//Font used
extern float camLrRot;	//Camera x rotation
extern float camUdRot;  //Camera y rotation