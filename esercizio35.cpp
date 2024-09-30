#include <iostream>
using namespace std;

void stampaInversa(char array[], int lunghezza) {
    for (int i = lunghezza - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
}

int main() {
    const int NUM_CARATTERI = 4;
    char caratteri[NUM_CARATTERI] = {'G', 'i', 'u', 's'};

    cout << "Caratteri in ordine inverso: ";
    stampaInversa(caratteri, NUM_CARATTERI);
    cout << endl;

    return 0;
}