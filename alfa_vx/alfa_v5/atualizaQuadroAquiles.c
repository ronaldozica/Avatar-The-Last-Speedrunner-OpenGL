
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaQuadroAquiles()
{
	switch(flag_aquiles)
	{
		case 1:

			if(cont_frames_aquiles < VELOCIDADE_AQUILES)
			{
				cont_frames_aquiles ++;
				break;
			}

			cont_frames_aquiles = 0;
			quadro_aquiles[0] = 0.00;
			quadro_aquiles[1] = 0.25;

			flag_aquiles = 2;
		break;

		case 2:

			if(cont_frames_aquiles < VELOCIDADE_AQUILES)
			{
				cont_frames_aquiles ++;
				break;
			}

			cont_frames_aquiles = 0;
			quadro_aquiles[0] = 0.25;
			quadro_aquiles[1] = 0.50;

			flag_aquiles = 3;
		break;

		case 3:

			if(cont_frames_aquiles < VELOCIDADE_AQUILES)
			{
				cont_frames_aquiles ++;
				break;
			}

			cont_frames_aquiles = 0;
			quadro_aquiles[0] = 0.50;
			quadro_aquiles[1] = 0.75;

			flag_aquiles = 4;
		break;

		case 4:

			if(cont_frames_aquiles < VELOCIDADE_AQUILES)
			{
				cont_frames_aquiles ++;
				break;
			}

			cont_frames_aquiles = 0;
			quadro_aquiles[0] = 0.75;
			quadro_aquiles[1] = 1.00;

			flag_aquiles = 1;
		break;

		default:
		break;
	}
}