// C é uma linguagem de proposito geral
// C foi criado em 1972 por Dennis Ritchie, e depois desse ano, continua a ser popular
// C é a mãe de todas as linguagens, e da maior parte dos sistemas operativos (Windows, Linux, Mac OS)
// C é uma das linguagens mais fortes e mais usadas, é maioritariamente usado para criar sistemas operativos, sistemas de bases de dados, aplicações (maioritariamente apps que prioritisam a performance, como o exemplo de jogos, CS GO foi criado em C e C++ etc), etc...

// # é um macro, ou seja, uma regra

// STDIO = STANDART INPUT OUTPUT
#include <stdio.h> // # stdio.h é um ficheiro de biblioteca de cabeçalho, ela tras por exemplo, o printf, o scanf, e por aí vai, então os ficheiros de biblioteca de cabeçalho trazem novas funcionalidades para a linguagem, como por exemplo o math.h que tras as funcionalidades de trabalhar com matemática

int main()
{
  printf("Blablaba"); // o printf é responsavel pelo output, ou seja, mostrar alguma coisa no nosso ecrã

  return 0;
}

// ALGUMAS AJUDAS PARA TRABALHAR COM C

// Usem sempre linhas brancas para organizar o código, já que são ignoradas pelo compilador
// Algumas coisas que aparecem sempre em todos os programas em C, é por exemplo o header stdio.h, a função main, que é a função que o compilador vai procurar para executar o programa
// Sabemos que é uma função quando existe TIPO NOME(PARAMETROS) { }
// Todas as sentenças no C, acabam com ;