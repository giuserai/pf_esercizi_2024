#include <iostream>

int somma (int a, int b){
    return a + b;
}

int main(){
    int num1 = 5;
    int num2 = 9;

    int risultato = somma(num1,num2);

    std::cout << "Il risultato della somma è: " << risultato <<std::endl;
    
    return 0;
}
