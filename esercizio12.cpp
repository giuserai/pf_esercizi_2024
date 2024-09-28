#include <iostream>

int main(){

    bool x = true;
    bool y = false;

    //std::cout << ((x && y) ? "True" : "False") << std::endl; //true se entrambi sono true
    // std::cout << ((!x && !y) ? "True" : "False") << std::endl; //true se entrambi sono false
    std::cout << ((x || !y) ? "True" : "False") << std::endl; //true se x è true e y è false
    // std::cout << ((!x || y) ? "True" : "False") << std::endl; //true se x è false e y è true
return 0;
}