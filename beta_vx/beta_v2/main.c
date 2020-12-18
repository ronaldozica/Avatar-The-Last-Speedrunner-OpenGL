
/*
 *  Projeto: project aquiles
 *  Autor: 
 *  Ronaldo Mendonça Zica
 *	 email: rzica42@gmail.com
 *	 github: ronaldozica
 *
 */

#include "includes.h"
#include "variaveis.h"
#include "defines.h"

int main(int argc, char** argv)
{
   glutInit(&argc, argv);

   glutInitContextVersion(1, 1);
   glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
   glutInitWindowSize(JTAMX, JTAMY);

   glutCreateWindow("avatar - the last speedrunner");

   glutIgnoreKeyRepeat(1);

   glutDisplayFunc(desenhaMinhaCena);
   glutReshapeFunc(redimensionada);
   glutKeyboardFunc(teclaPressionada);
//   glutKeyboardUpFunc(teclaLevantada);
//   glutSpecialFunc(teclaEspPressionada);
   glutTimerFunc(0, atualizaCena, PERIODO);

   setup();

   glutMainLoop();

   return 0;
}