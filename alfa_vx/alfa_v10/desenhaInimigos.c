
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

void decideArvore(int cont)
{
    if(tipo_arvore[cont] == 0)
    {
        tipo_arvore[cont] = (rand() % 3) + 1;
    }

    switch(tipo_arvore[cont])
    {
        case 1:

            quadro_inimigos[0] = 0.00;
            quadro_inimigos[1] = 0.25;
            quadro_inimigos[2] = 0.34;
            quadro_inimigos[3] = 0.64;

            break;

        case 2:

            quadro_inimigos[0] = 0.25;
            quadro_inimigos[1] = 0.50;
            quadro_inimigos[2] = 0.34;
            quadro_inimigos[3] = 0.64;

            break;

        case 3:

            quadro_inimigos[0] = 0.50;
            quadro_inimigos[1] = 0.75;
            quadro_inimigos[2] = 0.34;
            quadro_inimigos[3] = 0.64;
            break;
    }
}

void decideArbusto()
{
    quadro_inimigos[0] = 0.80;
    quadro_inimigos[1] = 0.95;
    quadro_inimigos[2] = 0.40;
    quadro_inimigos[3] = 0.60;
}

void decidePedra()
{
    quadro_inimigos[0] = 0.75;
    quadro_inimigos[1] = 1.00;
    quadro_inimigos[2] = 0.00;
    quadro_inimigos[3] = 0.34;
}

void decideInimigos()
{
    int cont_tela;                                  // contador de inimigos na tela
    long int posicao_inimigo;

    for(cont_tela = 0; cont_tela < INIMIGOS_FASE_1; cont_tela ++)
    {
        posicao_inimigo = (pos_inimigo[cont_tela] - distancia);

        if( (posicao_inimigo > X_MIN_INIMIGO) && (posicao_inimigo < X_MAX_INIMIGO) )
        {
            posicao_inimigo *= 10;

            switch(tipo_inimigo[cont_tela])
            {
                case 0:
                case 1:
                case 2:

                    decideArvore(cont_tela);
                    desenhaArvore(posicao_inimigo);

                    break;

                case 3:

                    decidePedra();
                    desenhaPedra(posicao_inimigo);

                    break;

                case 4:

                    decideArbusto();
                    desenhaArbusto(posicao_inimigo);

                    break;
            }
        }
    }
}