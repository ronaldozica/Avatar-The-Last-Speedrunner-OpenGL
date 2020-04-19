
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void setup()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);

    glEnable(GL_BLEND );
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); 

    carregaTexturas();

    flag_aquiles = 1;
    
    quadro_aquiles[0] = 0.00;
    quadro_aquiles[1] = 0.25;
    quadro_aquiles[2] = 0;
    quadro_aquiles[3] = 1;
}