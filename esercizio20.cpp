#include <iostream>

int main(){

    std::string testo = "giuseppina";
    int contatore_vocali = 0;
    int contatore_consonanti = 0;

    for(int i = 0; i < testo.length(); i++){
       char carattere = testo[i];
       if(carattere == 'a' || carattere == 'e'|| carattere == 'i'|| carattere == 'o'|| carattere == 'u'){
             contatore_vocali++;
      
       }else{
             contatore_consonanti++;
            }
    }

    std::cout << "Il numero di vocali è: " << contatore_vocali <<std::endl;
    std::cout << "Il numero di consonanti è: " << contatore_consonanti <<std::endl;

    return 0;
       
}