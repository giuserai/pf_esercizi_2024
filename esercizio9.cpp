#include <iostream>
#include <cmath>

int main(){

int x; //definisco le variabili intere
int y;

std::cout << "Inserisci x: ";
std::cin >> x ;

std::cout << "Inserisci y: ";
std::cin >> y ;

bool condizione = pow(x, y) > pow(y, x) ;

std::cout << std::boolalpha; //per covertire 0 e 1 in false e true
// std::cout << y <<std::endl; per stampare a schermo il valore booleano di y

std::cout << "Condizione: " << condizione <<std::endl;

}
