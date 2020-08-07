
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaCena(int periodo)
{
	glutPostRedisplay();

	atualizaQuadroAquiles();
	atualizaQuadroFundo();
	atualizaAlturaAquiles();
	desenhaInimigos();

	verificaFimDaFase();

    glutTimerFunc(periodo, atualizaCena, periodo);
}