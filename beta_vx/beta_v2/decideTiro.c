
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void verificaColisaoTiroBoss();

void decideTiro()
{
    if(tiro == 2)
    {
        desenhaTiro();

        if(tiro_x <= FIM_TIRO)
        {
            tiro_x += VELOCIDADE_TIRO;
        }

        else
        {
            tiro_x = INICIO_TIRO;
            tiro = 0;
        }
    }

    if(tiro == 3)
    {
        tiro_x = INICIO_TIRO;
        tiro = 0;
    }
}

void decideTiroBoss()
{
    if(tiro_boss == 2)
    {
        desenhaTiroBoss();

        if(tiro_boss_x >= 0)
        {
            tiro_boss_x -= VELOCIDADE_TIRO;
        }

        else
        {
            tiro_boss_x = OFFSET_BOSS;
            tiro_boss = 0;
        }

        verificaColisaoTiroBoss();

        //printf("\nboss atirou - tiro_boss = %d, tiro_boss_x = %d \n", tiro_boss, tiro_boss_x);                           //debug
    }
}

void verificaColisaoTiroBoss()
{
    int altura_real = altura_aquiles + AQUILES_ALT - OFFSET_ALTURA;

    if(tiro_boss_x <= AQUILES_X + LARG_HITBOX)
    {
        if(altura_real <= AQUILES_ALT)
        {
            parar = 1;
            ja_bateu = 1;
        }
    }
}