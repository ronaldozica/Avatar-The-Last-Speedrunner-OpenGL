
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void redimensionada(int width, int height)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, JPOSX, 0, JPOSY, -1, 1);

    float razaoAspectoJanela = ((float)width)/height;
    float razaoAspectoMundo = ((float) JPOSX)/ JPOSY;

    if (razaoAspectoJanela < razaoAspectoMundo)
    {
        float hViewport = width / razaoAspectoMundo;
        float yViewport = (height - hViewport)/2;
        glViewport(0, yViewport, width, hViewport);
    }

    else if (razaoAspectoJanela > razaoAspectoMundo)
    {
        float wViewport = ((float)height) * razaoAspectoMundo;
        float xViewport = (width - wViewport)/2;
        glViewport(xViewport, 0, wViewport, height);

    }

    else {
        glViewport(0, 0, width, height);
    }

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}