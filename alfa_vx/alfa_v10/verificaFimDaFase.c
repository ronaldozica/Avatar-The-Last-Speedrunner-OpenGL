
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void verificaColisao()
{
	int i, altura_real, posicao_inimigo;

	altura_real = altura_aquiles + AQUILES_ALT - OFFSET_ALTURA;

	for(i = 0; i < INIMIGOS_FASE_1; i ++)
	{
		posicao_inimigo = pos_inimigo[i];

        if(distancia == posicao_inimigo - LARG_HITBOX)
        {
	        switch(tipo_inimigo[i])
			{
				case 0:
				case 1:
				case 2:

					if(altura_real <= ARVORE_ALT)
					{
						if(ja_bateu == 0)
						{	
							printf("bateu no inimigo %d\n", i);
							printf("altura: %d - altura do inimigo %d\n", altura_real, ARVORE_ALT);
							printf("distancia: %ld\n", distancia);
							parar = 1;
							ja_bateu = 1;
						}
					}

				break;

				case 3:

					if(altura_real <= PEDRA_ALT)
					{
						if(ja_bateu == 0)
						{	
							printf("bateu no inimigo %d\n", i);
							printf("altura: %d - altura do inimigo %d\n", altura_real, PEDRA_ALT);
							printf("distancia: %ld\n", distancia);
							parar = 1;
							ja_bateu = 1;
						}
					}

				break;

				case 4:

					if(altura_real <= ARBUSTO_ALT)
					{
						if(ja_bateu == 0)
						{	
							printf("bateu no inimigo %d\n", i);
							printf("altura: %d - altura do inimigo %d\n", altura_real, ARBUSTO_ALT);
							printf("distancia: %ld\n", distancia);
							parar = 1;
							ja_bateu = 1;
						}
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
		parar = 1;
	}
}