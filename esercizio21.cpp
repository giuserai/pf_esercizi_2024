#include <iostream>

int main(){

    std::string stringa = "ops mondo";
    std::string sottostringa = "Ciao";
    std::string sottostringa_1 = "mondo";
    
    bool inizia_con;
    bool termina_con;

    if(stringa.find(sottostringa) == 0){
        inizia_con = true;
        std::cout << "La stringa inizia con " << sottostringa <<std::endl;
    }
    if(stringa.rfind(sottostringa_1) == stringa.length() - sottostringa_1.length()){
        termina_con = true;
        std::cout << "La stringa termina con " << sottostringa_1 <<std::endl;
        }

    if((inizia_con = false) && (termina_con = false)){
        std::cout << "La stringa non contiene nessuna delle sottostringhe"<< std::endl;
        return 0;
    }
    
}