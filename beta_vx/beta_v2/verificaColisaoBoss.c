
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaMensagemVitoria();

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
					mensagemBossMorreu = 1;
				}

				//printf("colidiu com o boss\n");
			}
		}
	}
}