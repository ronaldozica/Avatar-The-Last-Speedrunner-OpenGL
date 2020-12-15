
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void criaInimigos()
{
	int quant_inimigos = INIMIGOS_FASE_1 / 2;
	int quant_boss = QUANTIDADE_BOSS;
	int contador_inimigos, i, diferenca;
	
	for(contador_inimigos = 0; contador_inimigos < quant_inimigos; contador_inimigos ++)
	{
		pos_inimigo[contador_inimigos] = (DISTANCIA_FASE / quant_inimigos) * (contador_inimigos + 1);

		//printf("Inimigo %d posição: %d.\n", contador_inimigos, pos_inimigo[contador_inimigos]);		// exibe para debug
	}

	for(contador_inimigos = quant_inimigos; contador_inimigos < (quant_inimigos * 2); contador_inimigos ++)
	{
		pos_inimigo[contador_inimigos] = (rand() % (DISTANCIA_FASE - DISTANCIA_COMECO) + DISTANCIA_COMECO);

		for(i = 0; i < contador_inimigos; i ++)
		{
			if(contador_inimigos != i)
			{
				diferenca = pos_inimigo[contador_inimigos] - pos_inimigo[i];

				if(diferenca < 0)
				{
					diferenca *= -1;
				}

				if( diferenca < DISTANCIA_MINIMA )
				{
					contador_inimigos -= 2;
				}
			}
		}
	}

	contador_inimigos = 0;
}