#include <iostream>

int main(){

    int a;
    std::cout << "Inserisci un numero intero" << std::endl;
    std::cin >> a;

    std::string risultato = ((a % 3)&&(a % 5)) ? "E' divisibile per 3 e per 5" : "Non è divisibile per 3 e per 5";

    std::cout << risultato <<std::endl;
    return 0;
    
}