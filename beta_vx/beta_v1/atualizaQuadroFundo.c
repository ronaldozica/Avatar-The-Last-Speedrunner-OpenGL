
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaQuadroFundo()
{
	if(distancia < DISTANCIA_FASE - TEMPO_INTRODUCAO)
	{
		if(posicao_fundo > 0)
		{
			posicao_fundo -= VELOCIDADE_FUNDO;
		}

		else
		{
			posicao_fundo = JPOSX;
		}
	}

	distancia ++;
}