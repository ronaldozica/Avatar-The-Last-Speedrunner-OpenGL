
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaQuadroAquiles()
{
	if(!pulo)
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
				quadro_aquiles[1] = 0.20;

				flag_aquiles = 2;
			break;

			case 2:

				if(cont_frames_aquiles < VELOCIDADE_AQUILES)
				{
					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				quadro_aquiles[0] = 0.20;
				quadro_aquiles[1] = 0.40;

				flag_aquiles = 3;
			break;

			case 3:

				if(cont_frames_aquiles < VELOCIDADE_AQUILES)
				{
					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				quadro_aquiles[0] = 0.40;
				quadro_aquiles[1] = 0.60;

				flag_aquiles = 4;
			break;

			case 4:

				if(cont_frames_aquiles < VELOCIDADE_AQUILES)
				{
					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				quadro_aquiles[0] = 0.60;
				quadro_aquiles[1] = 0.80;

				flag_aquiles = 1;
			break;

			default:
			break;
		}
	}
}