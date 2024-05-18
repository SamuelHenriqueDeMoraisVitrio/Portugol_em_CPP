#ifndef __I_O_HPP__
#define __I_O_HPP__

//#include <sys/types.h>

//function main
#define inicio() main()
//Loop conditional
#define enquato while
#define para for
//conditional
#define se if
#define senao else
#define escolha switch
#define caso case
#define casocontrario default
//structs of recurrence
#define pare break
#define continua continue
#define retorne return

#include <iostream>
#include <sstream>
#include <string>

using inteiro = int;
using pequeno = short;
using longo = long;
using real = float;
using duplo = double;
using caracter = char;
using cadeia = std::string;  //std::string == string
using boleano = bool;

void leia();
void escreva();

template <typename value>  // tipename value
void leia(const cadeia& requestValue, value& outputValue) {
  cadeia input;

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
void leia<cadeia>(const string& requestValue, string& outputValue) {
  std::cout << requestValue;
  std::getline(std::cin, outputValue);
}
*/

template <>
void leia<bool>(const cadeia& requestValue, bool& outputValue) {  // case bool
  while (true) {
    cadeia input;
    std::cout << requestValue;
    std::getline(std::cin, input);

    if (input == "1" || input == "verdadeiro" || input == "Verdadeiro" || input == "VERDADEIRO" ||
        input == "verdade" || input == "Verdade" || input == "VERDADE" || input == "true" ||
        input == "True" || input == "TRUE" || input == "sim" || input == "Sim" || input == "SIM") {
      outputValue = true;
      break;
    } else if (input == "0" || input == "false" || input == "False" || input == "FALSE" ||
               input == "falso" || input == "Falso" || input == "FALSO" || input == "Mentira" ||
               input == "mentira" || input == "MENTIRA" || input == "não" || input == "Não" ||
               input == "NÃO" || input == "nao" || input == "NAO" || input == "Nao") {
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
