#include <iostream>

int main(){

int a;
std::cout << "Inserisci un numero in decimale ";
std::cin >> a;
int b;
std::cout << "Quale bit di questo numero vuoi conoscere? ";
std::cin >> b;
int bit_interessato = 1 << (b - 1);
bool risultato = a & bit_interessato;
std::cout << "Il " << b << "\u00B0" << " bit di " << a << " e' " << risultato <<std::endl; 
return 0;
}