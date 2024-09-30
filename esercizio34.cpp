#include <iostream>

float prodotto(float x, float y){
    return x * y;
}

int main(){
    float numero_1 = 5.985432;
    float numero_2 = 7.38824 ;
    
    float risultato= prodotto(numero_1,numero_2);
    std::cout << "Il prodotto di: " <<numero_1 <<" e " << numero_2 <<" è " <<risultato <<std::endl;

    return 0;
}