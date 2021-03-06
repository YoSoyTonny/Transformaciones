// Plantilla OpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC 

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include <math.h>

using namespace std;

void dibujarLineas() {
	glBegin(GL_LINES);

	glColor3f(1, 1, 1);

	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.4, 0);

	glVertex3f(0.2, 0.4, 0);
	glVertex3f(-0.2, 0.4, 0);

	glEnd();

}

void dibujarLineContinua() {
	glBegin(GL_LINE_STRIP);

	glColor3f(0, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, -0.2, 0);
	glVertex3f(0.3, -0.2, 0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0, 0, 0);

	glEnd();
}

void dibujarCuadrado() {
	glBegin(GL_QUADS);

	glColor3f(0, 1, 0.5);

	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);
	glVertex3f(1, -0.2, 0);
	glVertex3f(-1, -0.2, 0);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.7, 0.4, 0);

	glVertex3f(0.2, -0.4, 0);
	glVertex3f(0.2, 0.1, 0);
	glVertex3f(0.7, 0.1, 0);
	glVertex3f(0.7, -0.4, 0);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0, 0.6, 1);

	glVertex3f(0.27, 0, 0);
	glVertex3f(0.27, -0.1, 0);
	glVertex3f(0.4, -0.1, 0);
	glVertex3f(0.4, 0, 0);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0, 0.6, 1);

	glVertex3f(0.6, 0, 0);
	glVertex3f(0.6, -0.1, 0);
	glVertex3f(0.5, -0.1, 0);
	glVertex3f(0.5, 0, 0);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.5, 0.3, 0);

	glVertex3f(0.4, -0.4, 0);
	glVertex3f(0.4, -0.2, 0);
	glVertex3f(0.5, -0.2, 0);
	glVertex3f(0.5, -0.4, 0);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.5, 0.3, 0);

	glVertex3f(-0.5, -0.4, 0);
	glVertex3f(-0.5, 0.1, 0);
	glVertex3f(-0.6, 0.1, 0);
	glVertex3f(-0.6, -0.4, 0);

	glEnd();
}

void dibujarPoligonos() {
	glBegin(GL_POLYGON);

	glColor3f(1, 0.8, 0);

	for (int i = 0; i < 360; i++)
	{
		glVertex3f(0.2 * cos((double)i*3.14159/180.0) - 0.7 , 0.2 * sin((double)i*3.14159/180.0) + 0.7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0.2);

	for (int i = 0; i < 360; i++)
	{
		glVertex3f(0.2 * cos((double)i*3.14159 / 180.0) - 0.55, 0.2 * sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}
	glEnd();


	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);

	for (int o = 0; o < 360; o++)
	{
		glVertex3f(0.1 * cos((double)o*3.14159 / 180.0) - 0.2, 0.1 * sin((double)o*3.14159 / 180.0) + 0.7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);

	for (int o = 0; o < 360; o++)
	{
		glVertex3f(0.1 * cos((double)o*3.14159 / 180.0) - 0.1, 0.1 * sin((double)o*3.14159 / 180.0) + 0.7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);

	for (int o = 0; o < 360; o++)
	{
		glVertex3f(0.1 * cos((double)o*3.14159 / 180.0) + 0.3, 0.1 * sin((double)o*3.14159 / 180.0) + 0.7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);

	for (int o = 0; o < 360; o++)
	{
		glVertex3f(0.1 * cos((double)o*3.14159 / 180.0) + 0.4, 0.1 * sin((double)o*3.14159 / 180.0) + 0.7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);

	for (int o = 0; o < 360; o++)
	{
		glVertex3f(0.1 * cos((double)o*3.14159 / 180.0) + 0.5, 0.1 * sin((double)o*3.14159 / 180.0) + 0.7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0.4);

	for (int i = 0; i < 360; i++)
	{
		glVertex3f(0.1 * cos((double)i*3.14159 / 180.0) - 0.6, 0.1 * sin((double)i*3.14159 / 180.0) , 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0.4);

	for (int i = 0; i < 360; i++)
	{
		glVertex3f(0.08 * cos((double)i*3.14159 / 180.0) - 0.6, 0.08 * sin((double)i*3.14159 / 180.0) + 0.1, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0.4);

	for (int i = 0; i < 360; i++)
	{
		glVertex3f(0.08 * cos((double)i*3.14159 / 180.0) - 0.5, 0.08 * sin((double)i*3.14159 / 180.0) + 0.1, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0.4);

	for (int i = 0; i < 360; i++)
	{
		glVertex3f(0.08 * cos((double)i*3.14159 / 180.0) - 0.55, 0.08 * sin((double)i*3.14159 / 180.0) + 0.15, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0, 1, 0.4);

	for (int i = 0; i < 360; i++)
	{
		glVertex3f(0.1 * cos((double)i*3.14159 / 180.0) - 0.47, 0.1 * sin((double)i*3.14159 / 180.0), 0);
	}
	glEnd();
}

void dibujarTriangulos() {
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);
	glVertex3f(0.7, 0.1, 0);
	glVertex3f(0.45, 0.4, 0);
	glVertex3f(0.2, 0.1, 0);

	glEnd();

}

float posicionXTriangulo = 0;
float posicionYTriangulo = 0;
float angulo = 0.0f;

enum Direccion {Izquierda, Derecha, Arriba, Abajo};
Direccion direccionTRiangulo = Direccion::Izquierda;
Direccion direccionTriangulo = Direccion::Abajo;

void dibujarUnTriangulo()
{
	//Utiliza matriz identidad
	glPushMatrix();
	//Transformacion
	glTranslatef(posicionXTriangulo, posicionYTriangulo, 0.0f);
	glRotatef(angulo, 1.0f, 1.0f, 1.0f);
	
	//Dibuja los vertices
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.8f, 0.0f);
	glVertex3f(-0.2f, -0.2f, 0);
	glVertex3f(0.2f, -0.2f, 0);
	glVertex3f(0.0f, 0.2f, 0);
	glEnd();

	//Soltar matriz
	glPopMatrix();

}

void dibujar() {
	dibujarUnTriangulo();
	//dibujarTriangulos();
	//dibujarPoligonos();
	//dibujarCuadrado();
}

void actualizar() {

	if (angulo >= 360) {
		angulo = 0.0f;
	}
	angulo += 0.1f;

	//Movimiento horizontal
	if (direccionTRiangulo == Direccion::Izquierda) {
		if (posicionXTriangulo > -0.8f) {
			posicionXTriangulo -= 0.001f;
		}
		else {
			direccionTRiangulo = Direccion::Derecha;
		}
	}

	if (direccionTRiangulo == Direccion::Derecha) {
		if (posicionXTriangulo < 0.8f) {
			posicionXTriangulo += 0.001f;
		}
		else
		{
			direccionTRiangulo = Direccion::Izquierda;
		}
	}

	//Movimiento Vertical
	if (direccionTriangulo == Direccion::Abajo) {
		if (posicionYTriangulo > -0.99f) {
			posicionYTriangulo -= 0.0002f;
		}
		else {
			direccionTriangulo = Direccion::Arriba;
		}
	}

	if (direccionTriangulo == Direccion::Arriba) {
		if (posicionYTriangulo < 0.99f) {
			posicionYTriangulo += 0.0002f;
		}
		else
		{
			direccionTriangulo = Direccion::Abajo;
		}
	}

}


int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;

	//Si no se pudo iniciar glfw
	//terminamos ejecucion
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar el glfw
	//Entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);
	
	//Si no se puede iniciar la ventana
	//terminamos la ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el control
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto
	//Activa funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(0, 0, 0.2, 0);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los Buffer
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

