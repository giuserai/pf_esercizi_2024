#include <iostream>

int main (){
    int i= 1;
    int somma=0;

    while (i<=100){
     somma+= i;
     i++;
    }
   
    std::cout << "la somma dei numeri da 1 a 100 è: " <<somma <<std::endl;

    return 0;
}