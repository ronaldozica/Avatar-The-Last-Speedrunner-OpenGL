
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

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
}