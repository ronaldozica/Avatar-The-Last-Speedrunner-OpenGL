
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void atualizaCena(int periodo);

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

      case 'w':
      case 'W':

        if(tiro == 0)
        {
          tiro = 1;
        }

      break;

      case 'p':
      case 'P':

        if(pausa == 1)
        {
          pausa = 0;
        }

        else
        {
          pausa = 1;
        }

      break;

      case 'r':
      case 'R':

        if(parar == 2)
        {
          parar = 0;
          ja_bateu = 0;
          setup();
          glutTimerFunc(PERIODO, atualizaCena, PERIODO);
        }

      break;
    }
}
