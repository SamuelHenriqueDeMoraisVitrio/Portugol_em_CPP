//#include <sys/types.h>

#include <iostream>
#include <sstream>
#include <string>

void leia();
void escreva();

template <typename value>
void leia(const std::string& requestValue, value& outputValue) {
  std::string input;

  while (true) {
    std::cout << requestValue;
    std::getline(std::cin, input);
    std::stringstream inPT(input);

    if (inPT >> outputValue && inPT.eof()) {
      break;
    } else {
      std::cout << "Entrada inválida. Tente novamente.\n";
    }
  }
}

/*
template <>
void leia<std::string>(const std::string& requestValue, std::string& outputValue) {
  std::cout << requestValue;
  std::getline(std::cin, outputValue);
}
*/

template <>
void leia<bool>(const std::string& requestValue, bool& outputValue) {
  while (true) {
    std::string input;
    std::cout << requestValue;
    std::getline(std::cin, input);

    if (input == "1" || input == "true" || input == "True") {
      outputValue = true;
      break;
    } else if (input == "0" || input == "false" || input == "False") {
      outputValue = false;
      break;
    } else {
      std::cout << "Entrada inválida. Digite 1 ou true para verdadeiro, 0 ou false para falso.\n";
    }
  }
}

template <typename... Args>
void escreva(Args... args) {
  (std::cout << ... << args);
}

int main(int argc, char* argv[]) {
  std::cout << "Hello Word" << '\n';

  std::string ler;
  short idade;

  leia("Qual seu nome: ", ler);
  escreva('\n');
  leia("Qual sua idade: ", idade);
  escreva('\n');

  escreva("\n\tSeu nome é: ", ler, "\n\tE sua idade é: ", idade);

  return 0;
}
