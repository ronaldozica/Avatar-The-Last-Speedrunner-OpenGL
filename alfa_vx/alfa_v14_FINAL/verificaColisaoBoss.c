
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void verificaColisaoBoss()
{
	if(boss_vida > 0)
	{
		if(tiro == 2)
		{
			if(tiro_x >= pos_boss[0])
			{
				boss_vida --;

				tiro = 3;

				if(boss_vida <= 0)
				{
					morte_boss = 1;

					printf("matou\n");
				}

				printf("colidiu com o boss\n");
			}
		}
	}
}