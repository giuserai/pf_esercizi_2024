#include <iostream>

int main(){

    std::string testo = "Ciao mondo";
    std::string testo_1 = "Mi chiamo Giuseppina";

    std::string testo_risultante = testo + ". " + testo_1;
    std::cout << testo_risultante <<std::endl;
    return 0;
}