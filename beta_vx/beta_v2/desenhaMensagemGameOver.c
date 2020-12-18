
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaMensagemGameOver()
{
	glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaMsgGameOver1);

    glPushMatrix();

    glTranslatef(MENSAGEM_GO_X, MENSAGEM_GO_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);


    //---------------------------------------------------------------------------------------------

    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaMsgGameOver2);

    glPushMatrix();

    glTranslatef(MENSAGEM_GO2_X, MENSAGEM_GO2_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

//*************************************************************************************************

void desenhaMensagemPausa()
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaMsgPausa1);

    glPushMatrix();

    glTranslatef(MENSAGEM_GO_X, MENSAGEM_GO_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);


    //--------------------------------------------------------------------------------------

    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaMsgPausa2);

    glPushMatrix();

    glTranslatef(MENSAGEM_GO2_X, MENSAGEM_GO2_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( MENSAGEM_LARG/2, -MENSAGEM_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-MENSAGEM_LARG/2,  MENSAGEM_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

//*************************************************************************************************

void desenhaMensagemVitoria()
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaMsgVitoria);

    glPushMatrix();

    glTranslatef(MENSAGEM_VIT_X, MENSAGEM_VIT_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-MENSAGEM_VIT_LARG/2, -MENSAGEM_VIT_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( MENSAGEM_VIT_LARG/2, -MENSAGEM_VIT_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( MENSAGEM_VIT_LARG/2,  MENSAGEM_VIT_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-MENSAGEM_VIT_LARG/2,  MENSAGEM_VIT_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}