#include <iostream>

int main(){
    int numero;
    std::cout << "Inserisci un numero: ";
    std::cin >> numero;

    int i=1;

    while(i<=10){
        std::cout <<numero <<" x " << i <<" = " << numero*i <<std::endl;
        i++;
    }
return 0;
}