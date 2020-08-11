
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaQuadroAquiles()
{
	if(pulo == 0)
	{
		if(tiro == 1)
		{
			switch(flag_aquiles)
			{
				case 13:

					if(cont_frames_aquiles < DELAY_TIRO)
					{	
						if(cont_frames_aquiles == 0)
						{
							quadro_aquiles[0] = 0.227;
							quadro_aquiles[1] = 0.273;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 14;

				break;

				case 14:

					if(cont_frames_aquiles < DELAY_TIRO)
					{
						if(cont_frames_aquiles == 0)
						{
							quadro_aquiles[0] = 0.273;
							quadro_aquiles[1] = 0.318;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 15;

				break;

				case 15:

					if(cont_frames_aquiles < DELAY_TIRO)
					{
						if(cont_frames_aquiles == 0)
						{
							quadro_aquiles[0] = 0.318;
							quadro_aquiles[1] = 0.364;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 1;

					tiro = 2;

				break;

				default:
					flag_aquiles = 13;
				break;
			}
		}

		else
		{
			switch(flag_aquiles)
			{
				case 1:

					if(cont_frames_aquiles < VELOCIDADE_AQUILES)
					{
						if(cont_frames_aquiles == 0)
						{
							quadro_aquiles[0] = 0.000;
							quadro_aquiles[1] = 0.045;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 2;

				break;

				case 2:

					if(cont_frames_aquiles < VELOCIDADE_AQUILES)
					{
						if(cont_frames_aquiles == 0)
						{
							quadro_aquiles[0] = 0.045;
							quadro_aquiles[1] = 0.090;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 3;

				break;

				case 3:

					if(cont_frames_aquiles < VELOCIDADE_AQUILES)
					{
						if(cont_frames_aquiles == 0)
						{
							quadro_aquiles[0] = 0.090;
							quadro_aquiles[1] = 0.135;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 4;

				break;

				case 4:

					if(cont_frames_aquiles < VELOCIDADE_AQUILES)
					{
						if(cont_frames_aquiles == 0)
						{
							quadro_aquiles[0] = 0.135;
							quadro_aquiles[1] = 0.180;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 1;

				break;

				default:

					if(cont_frames_aquiles < DELAY_RECUPERACAO)
					{
						if(cont_frames_aquiles < ( DELAY_RECUPERACAO / 4) )
						{
							quadro_aquiles[0] = 0.500;
							quadro_aquiles[1] = 0.545;
						}

						else if(cont_frames_aquiles <  ( ( DELAY_RECUPERACAO / 4) * 2 ) )
						{
							quadro_aquiles[0] = 0.455;
							quadro_aquiles[1] = 0.500;
						}

						else if(cont_frames_aquiles < ( ( DELAY_RECUPERACAO / 4) * 3 ) )
						{
							quadro_aquiles[0] = 0.411;
							quadro_aquiles[1] = 0.455;
						}

						else if(cont_frames_aquiles < DELAY_RECUPERACAO )
						{
							quadro_aquiles[0] = 0.545;
							quadro_aquiles[1] = 0.591;
						}

						cont_frames_aquiles ++;
						break;
					}

					cont_frames_aquiles = 0;
					flag_aquiles = 1;

				break;
			}
		}
	}

	else
	{
		switch(flag_aquiles)
		{
			case 1:
			case 2:
			case 3:
			case 4:

				flag_aquiles = 5;

			break;

			case 5:

				if(cont_frames_aquiles < DELAY_PULO)
				{	
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.411;
						quadro_aquiles[1] = 0.455;
					}

					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 6;

			break;

			case 6:

				if(cont_frames_aquiles < DELAY_PULO)
				{
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.455;
						quadro_aquiles[1] = 0.500;
					}

					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 7;

			break;

			case 7:

				if(cont_frames_aquiles < DELAY_PULO)
				{
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.500;
						quadro_aquiles[1] = 0.545;
					}

					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 8;

			break;

			case 8:

				if(cont_frames_aquiles < DELAY_PULO)
				{
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.545;
						quadro_aquiles[1] = 0.591;
					}

					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 9;

			break;

			case 9:

				if(cont_frames_aquiles < DELAY_PULO)
				{
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.591;
						quadro_aquiles[1] = 0.646;
					}

					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 10;

			break;

			case 10:

				if(cont_frames_aquiles < DELAY_PULO)
				{
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.681;
						quadro_aquiles[1] = 0.737;
					}

					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 11;

			break;

			case 11:

				if(cont_frames_aquiles < DELAY_PULO)
				{
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.772;
						quadro_aquiles[1] = 0.828;
					}


					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 12;

			break;

			case 12:

				if(cont_frames_aquiles < DELAY_PULO)
				{
					if(cont_frames_aquiles == 0)
					{
						quadro_aquiles[0] = 0.863;
						quadro_aquiles[1] = 0.919;
					}

					cont_frames_aquiles ++;
					break;
				}

				cont_frames_aquiles = 0;
				flag_aquiles = 9;

			break;

			default:
				flag_aquiles = 1;
			break;
		}
	}
}