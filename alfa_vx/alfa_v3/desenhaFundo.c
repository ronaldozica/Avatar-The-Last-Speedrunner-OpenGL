
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaFundo()
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaFundo);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(0, 0);

        glTexCoord2f(1, 0);
        glVertex2f(JPOSX, 0);

        glTexCoord2f(1, 1);
        glVertex2f(JPOSX, JPOSY);

        glTexCoord2f(0, 1);
        glVertex2f(0,  JPOSY);

    glEnd();

    glDisable(GL_TEXTURE_2D);
}
