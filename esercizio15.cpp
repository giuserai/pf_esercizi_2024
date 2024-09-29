#include <iostream>

int main(){

int a = 12;
int b = 10;
int operazione = a ^ b;
std::cout << "Il risultato dell'operazione XOR di a e b è : " << operazione <<std::endl; //l'operazione restituisce 1 se i bit confrontati sono diversi e 0 negli altri casi
return 0;

}