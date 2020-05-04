
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaCena(int periodo)
{
	glutPostRedisplay();
	atualizaQuadroAquiles();
	atualizaQuadroFundo();
	atualizaAlturaAquiles();
	verificaFimDaFase();
    glutTimerFunc(periodo, atualizaCena, periodo);
}