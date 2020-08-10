
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void inicializaVariaveis()
{  
    flag_aquiles = 1;
    
    quadro_aquiles[0] = 0.000;
    quadro_aquiles[1] = 0.045;
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

    quadro_tiro[0] = 0.364;
    quadro_tiro[1] = 0.409;
    quadro_tiro[2] = 0;
    quadro_tiro[3] = 1;

    posicao_fundo = JPOSX;      // VAI VARIAR DE ACORDO COM O VALOR JPOSX!! CUIDADO

    altura_aquiles = AQUILES_Y;

    pulo = 0;
    segura_pulo = 0;

    distancia = 0;

    for(int cont = 0; cont < INIMIGOS_FASE_1; cont ++)
    {
        pos_inimigo[cont] = 0;
        tipo_arvore[cont] = 0;
        tipo_inimigo[cont] = rand() % 5;

        //tipo_inimigo[cont] = 0;                               // SOMENTE ÁRVORES
        //tipo_inimigo[cont] = (rand() % 2) + 3;                // SOMENTE PEDRAS E ARBUSTOS
        //tipo_inimigo[cont] = 3;                               // SOMENTE PEDRAS
        //tipo_inimigo[cont] = 4;                               // SOMENTE ARBUSTOS
    }

    contador_inimigos = 0;

    ja_bateu = 0;

    parar = 0;

    tiro = 0;

    tiro_x = INICIO_TIRO;
}