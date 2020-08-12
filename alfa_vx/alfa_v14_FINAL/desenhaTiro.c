
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaTiro()
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaAquiles);

    glPushMatrix();

    glTranslatef(tiro_x, AQUILES_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_tiro[0], quadro_tiro[2]);
        glVertex2f(-AQUILES_LARG/2, -AQUILES_ALT/2);

        glTexCoord2f(quadro_tiro[1], quadro_tiro[2]);
        glVertex2f( AQUILES_LARG/2, -AQUILES_ALT/2);

        glTexCoord2f(quadro_tiro[1], quadro_tiro[3]);
        glVertex2f( AQUILES_LARG/2,  AQUILES_ALT/2);

        glTexCoord2f(quadro_tiro[0], quadro_tiro[3]);
        glVertex2f(-AQUILES_LARG/2,  AQUILES_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}