#include <iostream>

int main(){
    int contatore = 0;
    for(int i=3; i < 100; i +=3){
     
    std::cout << i <<std::endl;
    contatore++;
    }
    std::cout << "Il numero totale di multipli di 3 è: " << contatore <<std::endl;
    

    return 0;
}