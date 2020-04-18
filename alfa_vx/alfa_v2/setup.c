
#include "includes.h"

void setup()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);							// define a cor do fundo como branco

    glEnable(GL_BLEND );
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);  

    carregaTexturas();
}