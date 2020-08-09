
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void teclaPressionada(unsigned char key, int x, int y)
{
    switch(key)
    {
      case 27:

      	exit(0);
      	
      break;

      case 32:

      	if(pulo == 0)
      	{
      		pulo = 1;      		
      	}

      break;
    }


}
