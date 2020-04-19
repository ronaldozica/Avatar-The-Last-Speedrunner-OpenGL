
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaCena(int periodo)
{
	glutPostRedisplay();
	atualizaQuadroAquiles();
    glutTimerFunc(periodo, atualizaCena, periodo);
}