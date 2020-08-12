
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaQuadroBoss()
{
    switch(morte_boss)
    {
    	case 0:

    		if(introducao_boss != 0)
    		{
    			switch(introducao_boss)
    			{

    				case 1:

						if(cont_frames_boss < DELAY_VELOCIDADE_BOSS)
						{	
							if(cont_frames_boss == 0)
							{
		    					quadro_boss[0] = 0.000;
		   	 					quadro_boss[1] = 0.045;
							}

							cont_frames_boss ++;
							break;
						}

						cont_frames_boss = 0;

   	 					introducao_boss = 2;

    				break;

    				case 2:

						if(cont_frames_boss < DELAY_VELOCIDADE_BOSS)
						{	
							if(cont_frames_boss == 0)
							{
		    					quadro_boss[0] = 0.045;
		   	 					quadro_boss[1] = 0.090;
							}

							cont_frames_boss ++;
							break;
						}

						cont_frames_boss = 0;

   	 					introducao_boss = 3;

    				break;

    				case 3:

						if(cont_frames_boss < DELAY_VELOCIDADE_BOSS)
						{	
							if(cont_frames_boss == 0)
							{
		    					quadro_boss[0] = 0.090;
		   	 					quadro_boss[1] = 0.136;
							}

							cont_frames_boss ++;
							break;
						}

						cont_frames_boss = 0;

   	 					introducao_boss = 4;

    				break;

    				case 4:

						if(cont_frames_boss < DELAY_VELOCIDADE_BOSS)
						{	
							if(cont_frames_boss == 0)
							{
		    					quadro_boss[0] = 0.136;
		   	 					quadro_boss[1] = 0.182;
							}

							cont_frames_boss ++;
							break;
						}

						cont_frames_boss = 0;

   	 					introducao_boss = 5;

    				break;

    				case 5:

						if(cont_frames_boss < DELAY_VELOCIDADE_BOSS)
						{	
							if(cont_frames_boss == 0)
							{
		    					quadro_boss[0] = 0.182;
		   	 					quadro_boss[1] = 0.227;
							}

							cont_frames_boss ++;
							break;
						}

						cont_frames_boss = 0;

   	 					introducao_boss = 6;

    				break;

    				case 6:

						if(cont_frames_boss < DELAY_VELOCIDADE_BOSS)
						{	
							if(cont_frames_boss == 0)
							{
		    					quadro_boss[0] = 0.227;
		   	 					quadro_boss[1] = 0.273;
							}

							cont_frames_boss ++;
							break;
						}

						cont_frames_boss = 0;

   	 					introducao_boss = 1;

    				break;

    				default:
    					introducao_boss = 1;
    				break;
    			}
    		}

    		else
    		{
    			quadro_boss[0] = 0.412;
   	 			quadro_boss[1] = 0.452;
    		}


   	 	break;

		case 1:

		if(quadro_boss[0] == 0.412)
		{
			morte_boss = 2;
			break;
		}

		if(cont_frames_boss < DELAY_MORTE_BOSS)
		{	
			if(cont_frames_boss == 0)
			{
				quadro_boss[0] = 0.412;
				quadro_boss[1] = 0.452;
			}

			cont_frames_boss ++;
			break;
		}

		cont_frames_boss = 0;
		morte_boss = 2;

		break;

		case 2:

		if(cont_frames_boss < DELAY_MORTE_BOSS)
		{	
			if(cont_frames_boss == 0)
			{
				quadro_boss[0] = 0.365;
				quadro_boss[1] = 0.409;
				quadro_boss[3] = 0.420;
			}

			cont_frames_boss ++;
			break;
		}

		cont_frames_boss = 0;
		morte_boss = 3;

		break;

		case 3:

		if(cont_frames_boss < DELAY_MORTE_BOSS)
		{	
			if(cont_frames_boss == 0)
			{
				quadro_boss[0] = 0.320;
				quadro_boss[1] = 0.364;
				quadro_boss[3] = 0.480;
			}

			cont_frames_boss ++;
			break;
		}

		cont_frames_boss = 0;
		morte_boss = 4;

		break;

		case 4:

		if(cont_frames_boss < DELAY_MORTE_BOSS_FINAL)
		{	
			if(cont_frames_boss == 0)
			{
				quadro_boss[0] = 0.273;
				quadro_boss[1] = 0.318;
			}

			cont_frames_boss ++;
			break;
		}

		cont_frames_boss = 0;
		morte_boss = 5;

		break;

		default:
		break;
    }
}
