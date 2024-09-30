#include <iostream>

int sommaArray(int array[], int lunghezza){
    int somma=0;
    
    for(int i=0; i<lunghezza; i++){
        somma+=array[i];
    }
return somma;

}

int main(){
    const int NUM_ELEMENTI = 3;
    int numeri[NUM_ELEMENTI] = {7, 10, 21};

    int risultato = sommaArray(numeri, NUM_ELEMENTI);

    std::cout << "La somma degli elementi dell'array è: " <<risultato <<std::endl;

    return 0;
}