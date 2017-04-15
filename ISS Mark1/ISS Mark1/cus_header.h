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
void dispText(float, float, const char*);  //To dispay text on screen
void mouse(int, int, int, int);			  //To handle mouse functions and interactions
void keyboard(unsigned char, int, int);	 //To handle keyboard functions and interactions

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