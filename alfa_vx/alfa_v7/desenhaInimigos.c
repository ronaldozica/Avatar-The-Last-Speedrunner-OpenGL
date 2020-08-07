
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaInimigos()
{
    if(1)
    {
        glColor3f(1.0, 1.0, 1.0);

        glEnable(GL_TEXTURE_2D);

        glBindTexture(GL_TEXTURE_2D, idTexturaArvore);

        glPushMatrix();

        glTranslatef( (DISTANCIA_FASE - pos_inimigo[contador_inimigos] ) - (distancia * VELOCIDADE_INIMIGO), ARVORE_Y, 0);

        glBegin(GL_TRIANGLE_FAN);

            glTexCoord2f(0, 0);
            glVertex2f(-ARVORE_LARG/2, -ARVORE_ALT/2);

            glTexCoord2f(1, 0);
            glVertex2f( ARVORE_LARG/2, -ARVORE_ALT/2);

            glTexCoord2f(1, 1);
            glVertex2f( ARVORE_LARG/2,  ARVORE_ALT/2);

            glTexCoord2f(0, 1);
            glVertex2f(-ARVORE_LARG/2,  ARVORE_ALT/2);

        glEnd();

        glPopMatrix();

        glDisable(GL_TEXTURE_2D);
    }
}