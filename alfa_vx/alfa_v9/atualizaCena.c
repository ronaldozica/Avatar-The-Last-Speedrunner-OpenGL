
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaCena(int periodo)
{
	glutPostRedisplay();

	atualizaQuadroAquiles();
	atualizaQuadroFundo();
	atualizaAlturaAquiles();
	decideInimigos();

	verificaColisao();
	verificaFimDaFase();

    glutTimerFunc(periodo, atualizaCena, periodo);
}