#include <stdio.h>

/*
  O que são variaveis?
  - Variaveis são basicamente "containers", que guardam valores, esses podem ser numeros, caracteres, etc...

  Que tipos temos como variaveis?
  - int - Guarda valores inteiros (numeros completos), sem ponto flutuante, como por exemplo 123, -123
  - float - Guarda valores reais, com ponto flutuante, como por exemplo 19.99 ou -19.99
  - char - Guarda 1 unico caracter, como por exemplo 'a', 'B', os chars geralmente são rodeados por aspas simples
  - etc...

  Como eu crio variaveis?
  TIPO NOME_DA_VARIAVEL = VALOR; Onde o TIPO é um dos tipos de variaveis (int, float, char, etc...)
  O NOME_DA_VARIAVEL pode ser qualquer valor que explique o que a variavel contem, por exemplo, contador, nomeDaPessoa, etc
  é uma boa convençao usar camelCase, começar a primeira palavra não capitalizada, e as restantes capitalizadas
  o simbolo de = é usado para atribuir um valor á variavel

*/

int main()
{
  // Vamos criar por exemplo uma variavel que guarde um tipo inteiro
  int meuNumero = 10;

  // Podemos tambem assinalar o valor após a declaração da variavel, por exemplo
  char meuCaractere;

  meuCaractere = 'B';

  // Tambem podemos imprimir o valor das nossas variaveis no ecra, para isso usamos o printf
  // Uma coisa a notar é que precisamos de usar especificadores de formato
  // Especificadores de formato servem para dizer ao compilador que variavel vamos imprimir
  // Especificadores de formato começam sempre por % e um caracter

  /*
    Quais são os especificadores de formato?
    - %d - Serve para imprimir um numero inteiro
    - %f - Serve para imprimir um float
    - %c - Serve para imprimir um char
  */

  // Quando colocamos um especificador de formato, ele vai ser substituido pela variavel
  printf("%d\n", meuNumero);

  float preco = 19.50;

  printf("%c\n", meuCaractere);
  printf("%f\n", preco);

  // Podemos alterar o valor das variaveis ao decorrer do programa
  preco = 20.00;
  printf("%f\n", preco);

  // Tambem podemos dar o valor de outras variaveis a uma
  char meuSegundoCaractere = meuCaractere;

  printf("%c\n", meuSegundoCaractere);

  // Podemos concatenar variaveis, e dependendo do tipo, tem efeitos diferente, por exemplo int + int, soma

  int meuSegundoNumero = 15;
  int soma = meuNumero + meuSegundoNumero;

  printf("%d\n", soma);

  // Podemos tambem declarar varias variaveis numa unica linha
  int x = 10, y = 11, z = 12;

  printf("%d\n", x + y + z);

  // Podemos fazer cadeias numa unica linha de atribuiçao
  x = y = z = 20;
  printf("%d\n", x + y + z);

  // Um exemplo prático
  int carroMatricula = 1;
  float carroPreco = 25000.00;
  char categoriaNecessariaParaConduzirCarro = 'B';

  printf("Matricula do carro: %d\n", carroMatricula);
  printf("Preço do carro: %f\n", carroPreco);
  printf("Categoria necessaria para conduzir o carro: %c\n", categoriaNecessariaParaConduzirCarro);

  return 0;
}