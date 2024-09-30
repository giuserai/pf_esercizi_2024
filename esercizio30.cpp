#include <iostream>

bool isVocale(char a){
    if(a == 'a' || a== 'e' || a=='i' || a=='o'|| a=='u' ){
       return true;
    }else{
       return false;
    }
}

int main(){
    char carattere = 'd';
    if (isVocale(carattere)){
        std::cout << carattere << " è una vocale" <<std::endl;
    }else{
        std::cout << carattere << " non è una vocale" <<std::endl;
    
    }
    return 0;   
}