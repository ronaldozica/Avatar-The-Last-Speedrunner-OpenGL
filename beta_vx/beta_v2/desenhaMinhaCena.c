
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaMensagemGameOver();

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    if(pausa == 0)
    {
	    if(parar == 0)
	    {
		    desenhaFundo();
		    desenhaAquiles();
		    decideInimigos();
		    decideTiro();
		    decideBoss();

		    if(mensagemBossMorreu == 1)
		    {
		    	desenhaMensagemVitoria();
		    }
		}

		else if(parar == 1)
		{
			desenhaFundo();
		    desenhaAquiles();
		    decideInimigos();
		    decideTiro();
		    decideBoss();
			desenhaMensagemGameOver();

			parar = 2;
		}
	}

	else
	{
		desenhaFundo();
		desenhaAquiles();
		decideInimigos();
		decideTiro();
		decideBoss();
		desenhaMensagemPausa();
	}

    glutSwapBuffers();
}