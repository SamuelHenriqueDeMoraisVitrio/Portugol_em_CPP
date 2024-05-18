#ifndef __I_O_hpp__
#define __I_O_hpp__

//#include <sys/types.h>

#include <iostream>
#include <sstream>
#include <string>

using std::string;  //std::string == string

void leia();
void escreva();

template <typename value>  // tipename value
void leia(const string& requestValue, value& outputValue) {
  string input;

  while (true) {                    //While input == NULL or error
    std::cout << requestValue;      // print requestValue
    std::getline(std::cin, input);  //read terminal
    std::stringstream inPT(input);  // create object inPT

    if (inPT >> outputValue &&
        inPT.eof()) {  // if inPT is saved in outputValue and inPT he was correct, break
      break;
    } else {  // else continue
      std::cout << "Entrada inválida. Tente novamente.\n";
    }  // else
  }    // while
}  // void leia

/*
template <>
void leia<string>(const string& requestValue, string& outputValue) {
  std::cout << requestValue;
  std::getline(std::cin, outputValue);
}
*/

template <>
void leia<bool>(const string& requestValue, bool& outputValue) {  // case bool
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

#endif
