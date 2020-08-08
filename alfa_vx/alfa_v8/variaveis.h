
#include "defines.h"

#ifndef VARIAVEIS_H
#define VARIAVEIS_H

	GLuint idTexturaFundo;
	GLuint idTexturaAquiles;

	signed short int flag_aquiles;
	signed short int cont_frames_aquiles;
	signed short int pulo;

	int posicao_fundo;
	int altura_aquiles;

	unsigned long int distancia;

	float quadro_aquiles[4];
	float quadro_fundo[4];

	int pos_inimigo[INIMIGOS_FASE_1];
	short int tipo_inimigo[INIMIGOS_FASE_1];

	int contador_inimigos;

#endif