#include <iostream>

int main(){

    char carattere;
    std::cout << "Inserisci un carattere" <<std::endl;
    std::cin >> carattere;

    std::string risultato = (carattere >= 'A' && carattere <= 'Z') ? "Il carattere è una lettera maiuscola" :
      (carattere >= 'a' && carattere <= 'z' ) ? "Il carattere è una lettera minuscola" :
      (carattere >= '0' && carattere <= '9') ? "Il carattere è un numero" : "Il carattere non è valido";

    std::cout << risultato <<std::endl;
    return 0;

}