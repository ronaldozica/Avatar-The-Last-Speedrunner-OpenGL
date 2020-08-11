
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void verificaColisaoBoss()
{
	if(distancia > DISTANCIA_FASE)
	{
		if(tiro == 2)
		{
			if(tiro_x == pos_boss[0])
			{
				printf("matou esse otario\n");
			}
		}
	}
}