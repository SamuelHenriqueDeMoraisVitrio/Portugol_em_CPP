#include "mainComplet/intutivLanguage.hpp"

inteiro main(inteiro argc, caracter* argv[]) {
  escreva("Hello Word", '\n');

  cadeia ler;
  pequeno idade;
  boleano condition = true;

  leia("Qual seu nome: ", ler);
  escreva('\n');
  leia("Qual sua idade: ", idade);
  escreva('\n');

  escreva("\n\tSeu nome é: ", ler, "\n\tE sua idade é: ", idade);

  enquato(condition) {
    leia("\n\tValor bool\t", condition);
    escreva(condition);
  }

  return 0;
}
