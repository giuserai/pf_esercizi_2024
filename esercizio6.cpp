#include <iostream>
using namespace std;

int main() {
    const int N = 25;

    for (int i = 0; i < N; i += 5) {
        cout << "Iterazione " << i + 1 << endl;
    }

    return 0;
}