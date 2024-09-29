#include <iostream>

int main(){

int a = 33;
int b = 4;
int operazione = a | b;
std::cout << "Il risultato dell'operazione OR di a e b è : " << operazione <<std::endl; //l'operazione restituisce 1 se il bit confrontato è 1 in in almeno uno dei casi e 0 negli altri casi
return 0;

}