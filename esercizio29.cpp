#include <iostream>

void numeri_pari (int a){
    for(int i=2; i<=a; i+=2){
        std::cout << i <<std::endl; 
    }
}

int main(){
    int num;
    std::cout <<"Inserisci un numero: ";
    std::cin >> num;

    std::cout << "I numeri pari fino a " << num <<" sono: ";
    numeri_pari(num);

    std::cout << std::endl;

    return 0;
}