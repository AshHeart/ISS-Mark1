/*
*	File: textures.cpp
*	Author: Seth Jennings <ash.snaray@gmail.com>
*
*  To handle all texturing and to store texture data
*
*/
#include "cus_header.h"

GLuint textures[10];

bool loadTextures(GLuint *texture, char *filePath, GLint width, GLint height) {
	unsigned char *data;
	FILE *file;

	fopen_s(&file, filePath, "rb"); //Open file
	if (file == NULL)				//Failed to open file does not exist
	{
		return FALSE;
	}

	data = (unsigned char *)malloc(width * height * 3); //Assign memory space for storing data
	if (data == NULL)				//Failed to reserve memory needed
	{
		fclose(file);
		return FALSE;
	}

	fread(data, width * height * 3, 1, file); //Read data from file
	fclose(file);					//Close file after reading

	glGenTextures(1, texture);		//Generate texture with loaded data
	glBindTexture(GL_TEXTURE_2D, *texture);  //Bind texture
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE); //Set texture environment parameters
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); //Quality when texture is near the view
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR); //Quality when texture is far from the view
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data); //Generate the texture

	free(data);						//Free memory allocated for data
	return TRUE;					//Successfully loaded textur
}

void setupTextures()
{
	loadTextures(&textures[0], "Textures/solarPanel.bmp", 256, 256);
}

void freeTextures()
{
	glDeleteTextures(1, &textures[0]);
}