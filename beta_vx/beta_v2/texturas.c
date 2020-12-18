
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

GLuint idTexturaFundo;
GLuint idTexturaAquiles;
GLuint idTexturaInimigos;
GLuint idTexturaMsgGameOver1;
GLuint idTexturaMsgGameOver2;
GLuint idTexturaMsgPausa1;
GLuint idTexturaMsgPausa2;
GLuint idTexturaMsgVitoria;

GLuint carregaTextura(const char* arquivo) {
    GLuint idTextura = SOIL_load_OGL_texture(
                           arquivo,
                           SOIL_LOAD_AUTO,
                           SOIL_CREATE_NEW_ID,
                           SOIL_FLAG_INVERT_Y
                       );

    if (idTextura == 0) {
        printf("Erro do SOIL: '%s'\n", SOIL_last_result());
        printf("Erro ao abrir o arquivo: %s\n.", arquivo);
    }

    return idTextura;
}

void carregaTexturas()
{
    idTexturaFundo = carregaTextura("fundo.png");
    idTexturaAquiles = carregaTextura("avatar.png");
    idTexturaInimigos = carregaTextura("inimigos.png");

    idTexturaMsgGameOver1 = carregaTextura("msgGameOver.png");
    idTexturaMsgGameOver2 = carregaTextura("msgGameOver2.png");
    idTexturaMsgPausa1 = carregaTextura("msgPausa1.png");
    idTexturaMsgPausa2 = carregaTextura("msgPausa2.png");
    idTexturaMsgVitoria = carregaTextura("msgVitoria.png");
}