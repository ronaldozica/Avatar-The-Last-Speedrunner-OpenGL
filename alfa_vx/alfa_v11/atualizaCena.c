
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaCena(int periodo)
{
	if(parar == 0)
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
}