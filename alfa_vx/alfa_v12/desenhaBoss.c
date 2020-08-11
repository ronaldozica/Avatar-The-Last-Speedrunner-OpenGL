
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaBoss()
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaAquiles);

    glPushMatrix();

    glTranslatef(pos_boss[0], BOSS_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(quadro_boss[0], quadro_boss[2]);
        glVertex2f(-BOSS_LARG/2, -BOSS_ALT/2);

        glTexCoord2f(quadro_boss[1], quadro_boss[2]);
        glVertex2f( BOSS_LARG/2, -BOSS_ALT/2);

        glTexCoord2f(quadro_boss[1], quadro_boss[3]);
        glVertex2f( BOSS_LARG/2,  BOSS_ALT/2);

        glTexCoord2f(quadro_boss[0], quadro_boss[3]);
        glVertex2f(-BOSS_LARG/2,  BOSS_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}