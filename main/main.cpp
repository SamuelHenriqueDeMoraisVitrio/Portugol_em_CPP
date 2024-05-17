#include <sys/types.h>

#include <iostream>
#include <string>

enum tips { INTEIRO, PEQUENO, LONGO, REAL, DOBRO, CARACTER, CADEIA, BOLEANO };

void leia(const std::string requestValue, tips typing, void *input) {
  std::cout << requestValue;

  switch (typing) {
    case INTEIRO:
      std::cin >> *static_cast<int *>(input);
      break;
    case PEQUENO:
      std::cin >> *static_cast<short *>(input);
      break;
    case LONGO:
      std::cin >> *static_cast<long *>(input);
      break;
    case REAL:
      std::cin >> *static_cast<float *>(input);
      break;
    case DOBRO:
      std::cin >> *static_cast<double *>(input);
      break;
    case CARACTER:
      std::cin >> *static_cast<char *>(input);
      break;
    case CADEIA:
      std::cin >> *static_cast<std::string *>(input);
      break;
    case BOLEANO:
      std::cin >> *static_cast<bool *>(input);
      break;
  }
}

int main(int argc, char *argv[]) {
  std::cout << "Hello Word" << '\n';

  std::string ler;

  leia("Qual seu nome? ", CADEIA, &ler);

  std::cout << ler << std::endl;

  return 0;
}