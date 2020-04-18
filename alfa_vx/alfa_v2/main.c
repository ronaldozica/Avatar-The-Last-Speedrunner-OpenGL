
/*
 *  Projeto: project aquiles
 *  Autor: 
 *  Ronaldo Mendonça Zica
 *	email: rzica42@gmail.com
 *	github: ronaldozica
 *
 */

#include "includes.h"

int main(int argc, char** argv)
{                                                       		  // inicializa o jogo, define condições iniciais
   glutInit(&argc, argv);                                         // inicia a glut

   glutInitContextVersion(1, 1);                                  // escolhe a versão do opengl em que será trabalhado
   glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);                  // modos do display: double para animação e rgba para cores
   glutInitWindowSize(500, 500);                				  // da janela, também informa o tamanho da tela
   glutInitWindowPosition(100, 100);

   glutCreateWindow("project aquiles");                           // cria e nomeia janela

   glutDisplayFunc(desenhaMinhaCena);                             // registra as callbacks
   glutReshapeFunc(redimensionada);
//   glutKeyboardFunc(teclaPressionada);
//   glutSpecialFunc(teclaEspPressionada);
//   glutTimerFunc(0, atualizaCena, PERIODO);      			     // função excencial: responsável por atualizar o jogo à 30FPS

   setup();

   glutMainLoop();                                                // trava o programa aqui e aguarda por interações do usuário

   return 0;
}