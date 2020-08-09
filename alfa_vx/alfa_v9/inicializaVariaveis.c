
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void inicializaVariaveis()
{  
    flag_aquiles = 1;
    
    quadro_aquiles[0] = 0.00;
    quadro_aquiles[1] = 0.25;
    quadro_aquiles[2] = 0;
    quadro_aquiles[3] = 1;

    cont_frames_aquiles = 0;

    quadro_fundo[0] = 0;
    quadro_fundo[1] = 1;
    quadro_fundo[2] = 0;
    quadro_fundo[3] = 1;

    quadro_inimigos[0] = 0;
    quadro_inimigos[1] = 0.25;
    quadro_inimigos[2] = 0;
    quadro_inimigos[3] = 0.34;

    posicao_fundo = JPOSX;      // VAI VARIAR DE ACORDO COM O VALOR JPOSX!! CUIDADO

    altura_aquiles = AQUILES_Y;

    pulo = 0;

    distancia = 0;

    for(int cont = 0; cont < INIMIGOS_FASE_1; cont ++)
    {
        pos_inimigo[cont] = 0;
        tipo_arvore[cont] = 0;
        tipo_inimigo[cont] = rand() % 5;

        //tipo_inimigo[cont] = 0;                               // SOMENTE ÁRVORES
    }

    contador_inimigos = 0;
}