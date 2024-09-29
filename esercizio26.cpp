#include <iostream>

int main(){
    int base;
    std::cout <<"Inserisci un numero intero per la base: ";
    std::cin >> base;

    int esponente;
    std::cout <<"Inserisci un numero intero per l'esponente: ";
    std::cin >> esponente;

    int risultato =1;

    for(int i=1; i <= esponente; i++){
    risultato *=base;
    }
    std::cout << "Il risultato è: " << risultato <<std::endl;

    return 0;
}