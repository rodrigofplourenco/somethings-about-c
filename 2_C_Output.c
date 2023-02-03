#include <stdio.h>

// A função responsavel pelo output de valores na consola, é o printf, que vem da lib stdio

int main()
{
  printf("Olá, mundo!\n");
  // Se quisermos, dar um "enter", ou seja, passar para uma nova linha, podemos usar o caracter /n
  // /n basicamente diz ao compilador para passar a linha

  // Nós podemos usar quantos printfs quisermos
  printf("Olá, mundo 2!\n"); // Nunca esquecer do ;

  // Outra coisa que podemos fazer, é ter vários /n apenas numa string, strings são compostas por caracteres e geralmente estão entre aspas duplas
  printf("Olá, mundo 3!\nOlá, mundo 4!\n");
  // Não é indicado, pois o código torna-se menos legivel, tambem podemos ter varios \n seguidos para quebrar varias linhas de uma vez
  printf("Olá mundo 5!\n\n\n");
  printf("Olá mundo 6!\n");

  return 0;
}