
/*
 *  Projeto: project aquiles
 *  Autor: 
 *  Ronaldo Mendonça Zica
 *	email: rzica42@gmail.com
 *	github: ronaldozica
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

   glutCreateWindow("project aquiles");

   glutDisplayFunc(desenhaMinhaCena);
   glutReshapeFunc(redimensionada);
   glutKeyboardFunc(teclaPressionada);
//   glutSpecialFunc(teclaEspPressionada);
   glutTimerFunc(0, atualizaCena, PERIODO);

   setup();

   glutMainLoop();

   return 0;
}