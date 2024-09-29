#include <iostream>

int main(){

    std::string testo = "mi chiamo giuseppina";

    for (int i = 0; i < testo.length(); i++)
    {
       testo[i]=toupper(testo[i]); //per convertire in minuscolo tolower(testo[i])
    }
    
    std::cout << "La stringa in maiuscolo e': " << testo <<std::endl;
    

    return 0;
}