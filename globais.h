#include <stdio.h>
#include <stdlib.h>

bool paused = false; //Trava as anima��es
int contador = 0; //Aux�lio para quantidade de inimigos mortos
int life = 3; //Vida do jogador
bool continuar = false; //Auxilia na manipula��o do pause
int contadorEnter = 0; //Contador de teclas para mudan�a de telas
int contadorEspera = 0; //Contador de delay
int contadorReset = 0; //Contador do reset para que a anima��o n�o seja chamada novamente, um retorno no tempo
int contadorCena = 0; //Auxilia no Boss
int vidaBoss = 15; //Vida do chef�o
bool setas = false; //Travamento do teclado de setas
bool direcao_boss = true; // Alterna a dire��o x do chef�o
bool mudaDirecao = false; // Alterna as descidas a partir da dire��o seguida
