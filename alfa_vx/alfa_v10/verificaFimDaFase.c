
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void verificaColisao()
{
	int i, altura_real;

	altura_real = altura_aquiles - OFFSET_ALTURA;

	for(i = 0; i < INIMIGOS_FASE_1; i ++)
	{
		if(pos_inimigo[i] - OFFSET_LARGURA == distancia)
		{
			//printf("\npos_inimigo[%d] = %d igual a distancia: %ld\n", i, pos_inimigo[i], distancia);
			//printf("altura aquiles: %d - altura objeto max: %d", altura_aquiles, ARVORE_ALT);

			switch(tipo_inimigo[i])
			{
				case 0:
				case 1:
				case 2:
					
					if(altura_real <= ARVORE_ALT)
					{
						printf("bateu\n");
						//exit(0);
					}

					break;

				case 3:
					
					if(altura_real <= PEDRA_ALT)
					{
						printf("bateu\n");
						//exit(0);
					}

					break;

				case 4:
					
					if(altura_real <= ARBUSTO_ALT)
					{
						printf("bateu\n");
						//exit(0);
					}

					break;
			}
		}
	}
}

void verificaFimDaFase()
{
	if(distancia >= DISTANCIA_FASE)
	{
		exit(0);
	}
}