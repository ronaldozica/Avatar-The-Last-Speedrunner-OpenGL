
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaQuadroFundo()
{
	if(posicao_fundo > 0)
	{
		posicao_fundo -= VELOCIDADE_FUNDO;
	}

	else
	{
		posicao_fundo = JPOSX;
	}

	distancia ++;
}