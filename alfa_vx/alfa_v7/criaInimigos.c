
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void criaInimigos()
{
	int quant_inimigos = INIMIGOS_FASE_1;
	int contador_inimigos;
	
	for(contador_inimigos = 0; contador_inimigos < quant_inimigos; contador_inimigos ++)
	{
		pos_inimigo[contador_inimigos] = (DISTANCIA_FASE / (quant_inimigos - contador_inimigos) );
	}
}