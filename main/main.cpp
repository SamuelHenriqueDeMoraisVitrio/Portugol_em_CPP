#include "../complements/I\O.hpp"

int main(int argc, char* argv[]) {
  escreva("Hello Word", '\n');

  string ler;
  short idade;

  leia("Qual seu nome: ", ler);
  escreva('\n');
  leia("Qual sua idade: ", idade);
  escreva('\n');

  escreva("\n\tSeu nome é: ", ler, "\n\tE sua idade é: ", idade);

  return 0;
}
