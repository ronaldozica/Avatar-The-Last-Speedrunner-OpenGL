
#include "defines.h"

#ifndef VARIAVEIS_H
#define VARIAVEIS_H

	GLuint idTexturaFundo;
	GLuint idTexturaAquiles;

	signed short int flag_aquiles;
	signed short int cont_frames_aquiles;
	signed short int cont_frames_boss;
	signed short int pulo;
	signed short int segura_pulo;

	int posicao_fundo;
	int altura_aquiles;

	unsigned long int distancia;

	float quadro_aquiles[4];
	float quadro_fundo[4];
	float quadro_inimigos[4];
	float quadro_tiro[4];
	float quadro_boss[4];

	int pos_inimigo[INIMIGOS_FASE_1];
	int pos_boss[QUANTIDADE_BOSS];

	short int tipo_inimigo[INIMIGOS_FASE_1];
	short int tipo_arvore[INIMIGOS_FASE_1];

	int contador_inimigos;

	int ja_bateu;

	signed short int parar;

	signed short int tiro;
	
	int tiro_x;

	signed short int boss_vida;
	signed short int morte_boss;

	signed short int introducao_boss;
	
#endif