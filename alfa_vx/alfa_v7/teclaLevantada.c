
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void teclaLevantada(unsigned char key, int x, int y)
{
    switch(key)
    {

      case 32:
      
      	if(altura_aquiles > ALTURA_MINIMA_CANCELA_PULO)
      	{
	      	if(pulo == 1)
	      	{
	      		pulo = -1;      		
	      	}
	    }

      break;
    }


}
