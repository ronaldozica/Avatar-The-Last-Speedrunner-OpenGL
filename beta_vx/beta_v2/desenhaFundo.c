
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaFundo()
{
    float aux;

    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaFundo);

    quadro_fundo[0] = 1 - ((float)posicao_fundo / JPOSX);
    quadro_fundo[1] = 1;

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_fundo[0], quadro_fundo[2]);
        glVertex2f(0, 0);

        glTexCoord2f(quadro_fundo[1], quadro_fundo[2]);
        glVertex2f(posicao_fundo, 0);

        glTexCoord2f(quadro_fundo[1], quadro_fundo[3]);
        glVertex2f(posicao_fundo, JPOSY);

        glTexCoord2f(quadro_fundo[0], quadro_fundo[3]);
        glVertex2f(0,  JPOSY);

    glEnd();

    quadro_fundo[0] = 0;
    quadro_fundo[1] = (float)(JPOSX - posicao_fundo) / JPOSX;

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_fundo[0], quadro_fundo[2]);
        glVertex2f(posicao_fundo, 0);

        glTexCoord2f(quadro_fundo[1], quadro_fundo[2]);
        glVertex2f(JPOSX, 0);

        glTexCoord2f(quadro_fundo[1], quadro_fundo[3]);
        glVertex2f(JPOSX, JPOSY);

        glTexCoord2f(quadro_fundo[0], quadro_fundo[3]);
        glVertex2f(posicao_fundo,  JPOSY);

    glEnd();

    glDisable(GL_TEXTURE_2D);
}
