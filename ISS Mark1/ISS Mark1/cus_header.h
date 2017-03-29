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
 * Custom global variable declarations
 */
int scnHeight;	//Screen height
int scnWidth;   //Screen Width

/*
 * Global function decalrations
 * All functions will be defined in their respective files
 * to be updated later
 */
void init(void);	                           //To initialize glut
void render(void);	                          //To render everything
void welcomeScn(void);                       //To display the welcome landing screen
void dispText(float, float, const char*);	//To dispay text on screen