
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void decideBoss()
{
	if(distancia == DISTANCIA_FASE)
	{
		for(int i = 0; i < INIMIGOS_FASE_1; i ++)
		{
			pos_inimigo[i] += DISTANCIA_FASE;
		}
	}

	if(distancia > DISTANCIA_FASE)
	{
		desenhaBoss();
	}
}