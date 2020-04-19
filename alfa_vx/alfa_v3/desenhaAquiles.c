
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaAquiles()
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaAquiles);

    glPushMatrix();

    glTranslatef(AQUILES_X, AQUILES_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_aquiles[0], quadro_aquiles[2]);
        glVertex2f(-AQUILES_LARG/2, -AQUILES_ALT/2);

        glTexCoord2f(quadro_aquiles[1], quadro_aquiles[2]);
        glVertex2f( AQUILES_LARG/2, -AQUILES_ALT/2);

        glTexCoord2f(quadro_aquiles[1], quadro_aquiles[3]);
        glVertex2f( AQUILES_LARG/2,  AQUILES_ALT/2);

        glTexCoord2f(quadro_aquiles[0], quadro_aquiles[3]);
        glVertex2f(-AQUILES_LARG/2,  AQUILES_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}