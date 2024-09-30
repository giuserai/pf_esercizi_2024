#include <iostream>
#include <cstring>

int lunghezza_stringa(char stringa[]){
    return strlen(stringa);
    
}

int main (){
    char testo[]= "Ciao Mondo";

    int lunghezza = lunghezza_stringa(testo);

    std::cout <<"La lunghezza della stringa è: " <<lunghezza <<std::endl;

    return 0;
}