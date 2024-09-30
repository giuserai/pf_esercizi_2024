#include <iostream>

int quadrato(int x){
    return x * x;
}

int main(){
    int numero = 5;
    int risultato = quadrato(numero);

    std::cout << "Il quadrato di: " <<numero <<" è " <<risultato <<std::endl;

    return 0;
}