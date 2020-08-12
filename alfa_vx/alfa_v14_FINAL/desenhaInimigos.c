
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaPedra(long int posicao_inimigo)
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaInimigos);

    glPushMatrix();

    glTranslatef(posicao_inimigo, PEDRA_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_inimigos[0], quadro_inimigos[2]);
        glVertex2f(-PEDRA_LARG/2, -PEDRA_ALT/2);

        glTexCoord2f(quadro_inimigos[1], quadro_inimigos[2]);
        glVertex2f( PEDRA_LARG/2, -PEDRA_ALT/2);

        glTexCoord2f(quadro_inimigos[1], quadro_inimigos[3]);
        glVertex2f( PEDRA_LARG/2,  PEDRA_ALT/2);

        glTexCoord2f(quadro_inimigos[0], quadro_inimigos[3]);
        glVertex2f(-PEDRA_LARG/2,  PEDRA_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void desenhaArbusto(long int posicao_inimigo)
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaInimigos);

    glPushMatrix();

    glTranslatef(posicao_inimigo, ARBUSTO_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_inimigos[0], quadro_inimigos[2]);
        glVertex2f(-ARBUSTO_LARG/2, -ARBUSTO_ALT/2);

        glTexCoord2f(quadro_inimigos[1], quadro_inimigos[2]);
        glVertex2f( ARBUSTO_LARG/2, -ARBUSTO_ALT/2);

        glTexCoord2f(quadro_inimigos[1], quadro_inimigos[3]);
        glVertex2f( ARBUSTO_LARG/2,  ARBUSTO_ALT/2);

        glTexCoord2f(quadro_inimigos[0], quadro_inimigos[3]);
        glVertex2f(-ARBUSTO_LARG/2,  ARBUSTO_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void desenhaArvore(long int posicao_inimigo)
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaInimigos);

    glPushMatrix();

    glTranslatef(posicao_inimigo, ARVORE_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_inimigos[0], quadro_inimigos[2]);
        glVertex2f(-ARVORE_LARG/2, -ARVORE_ALT/2);

        glTexCoord2f(quadro_inimigos[1], quadro_inimigos[2]);
        glVertex2f( ARVORE_LARG/2, -ARVORE_ALT/2);

        glTexCoord2f(quadro_inimigos[1], quadro_inimigos[3]);
        glVertex2f( ARVORE_LARG/2,  ARVORE_ALT/2);

        glTexCoord2f(quadro_inimigos[0], quadro_inimigos[3]);
        glVertex2f(-ARVORE_LARG/2,  ARVORE_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}