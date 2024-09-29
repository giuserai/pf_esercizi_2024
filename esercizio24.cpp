#include <iostream>
using namespace std;

int main() {
    double prezzo;
    cout << "Inserisci il prezzo del prodotto: ";
    cin >> prezzo;

    double PrezzoScontato;

    switch (static_cast<int>(prezzo)) {
        case 0 ... 10:
            PrezzoScontato = prezzo * 0.9;
            break;
        case 11 ... 50:
            PrezzoScontato = prezzo * 0.8;
            break;
        case 51 ... 100:
            PrezzoScontato = prezzo * 0.7;
            break;
        default:
            PrezzoScontato = prezzo * 0.6;
            break;
    }

    cout << "Il prezzo scontato del prodotto è: " << PrezzoScontato << endl;

    return 0;
}