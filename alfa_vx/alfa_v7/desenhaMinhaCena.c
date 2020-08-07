
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);

    desenhaFundo();
    desenhaAquiles();
    desenhaInimigos();

    glutSwapBuffers();
}