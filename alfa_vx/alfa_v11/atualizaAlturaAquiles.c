
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaAlturaAquiles()
{
	if(pulo == 1)
	{
		if(altura_aquiles < ALTURA_PULO)
		{
			altura_aquiles += INCREMENTO_PULO;
		}

		else
		{
			pulo = -1;
		}
	}

	if(pulo == -1)
	{
		if(altura_aquiles > AQUILES_Y)
		{
			altura_aquiles -= INCREMENTO_PULO;
		}

		else
		{
			pulo = 0;
		}
	}
}