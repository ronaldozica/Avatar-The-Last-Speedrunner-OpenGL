
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void setup()
{
	srand(time(0));											// inicializa o gerador de números aleatórios com o horário atual

    glClearColor(0.0, 0.0, 0.0, 0.0);

    glEnable(GL_BLEND );
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); 

    carregaTexturas();

    inicializaVariaveis();

    criaInimigos();
}