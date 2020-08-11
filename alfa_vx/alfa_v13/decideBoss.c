
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void decideBoss()
{
	if(distancia == DISTANCIA_FASE - TEMPO_INTRODUCAO)
	{
		introducao_boss = 1;
	}


	if( (distancia >= DISTANCIA_FASE - TEMPO_INTRODUCAO) && (distancia < DISTANCIA_FASE) )
	{
		pos_boss[0] -= INCREMENTO_INTRODUCAO;
	}

	if(distancia == DISTANCIA_FASE)
	{
		introducao_boss = 0;

		printf("pos_boss[0] = %d\n",pos_boss[0]);

		boss_vida = QUANTIDADE_VIDA_BOSS;

		for(int i = 0; i < INIMIGOS_FASE_1; i ++)
		{
			pos_inimigo[i] += DISTANCIA_FASE;
		}
	}

	if( (distancia > DISTANCIA_FASE - TEMPO_INTRODUCAO) && (morte_boss < 5) )
	{
		desenhaBoss();
	}
}