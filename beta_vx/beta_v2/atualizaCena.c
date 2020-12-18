
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaCena(int periodo)
{
	if(pausa == 0)
	{
		if(parar == 0)
		{
			glutPostRedisplay();

			atualizaQuadroAquiles();
			atualizaQuadroFundo();
			atualizaAlturaAquiles();
			atualizaQuadroBoss();
			
			verificaColisao();
			verificaColisaoBoss();
			verificaFimDaFase();

	    	glutTimerFunc(periodo, atualizaCena, periodo);
	    }

	    else if(parar == 1)
	    {
			atualizaQuadroAquiles();
			atualizaQuadroFundo();
			atualizaAlturaAquiles();
			atualizaQuadroBoss();
			
			verificaColisao();
			verificaColisaoBoss();
			verificaFimDaFase();

			glutPostRedisplay();
	    }
	}

	else
	{
		glutPostRedisplay();
		glutTimerFunc(periodo, atualizaCena, periodo);
	}
}