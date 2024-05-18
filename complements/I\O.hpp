//#include <sys/types.h>

#include <iostream>
#include <sstream>
#include <string>

using std::string;

void leia();
void escreva();

template <typename value>
void leia(const string& requestValue, value& outputValue) {
  string input;

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
void leia<string>(const string& requestValue, string& outputValue) {
  std::cout << requestValue;
  std::getline(std::cin, outputValue);
}
*/

template <>
void leia<bool>(const string& requestValue, bool& outputValue) {
  while (true) {
    string input;
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
