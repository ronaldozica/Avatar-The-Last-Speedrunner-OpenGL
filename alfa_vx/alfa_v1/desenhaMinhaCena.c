
#include "includes.h"

void desenhaMinhaCena()
{
	glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 1.0, 0.0);
    // Desenha um polígono por seus vértices

    glBegin(GL_TRIANGLE_FAN);
        // NOVIDADE: antes os valores eram -0.5, 0.5
        glVertex3f(20.0, 20.0, 0.0);
        glVertex3f(80.0, 20.0, 0.0);
        glVertex3f(80.0, 80.0, 0.0);
        glVertex3f(20.0, 80.0, 0.0);
    glEnd();

    glutSwapBuffers();
}