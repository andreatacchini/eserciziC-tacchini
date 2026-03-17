//3. Genera un vettore di 10 numeri casuali tra 1 e 50 e trova il massimo e la sua posizione
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int v[10];
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        v[i] = rand() % 50 + 1;
    }

    // Stampa il vettore
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    int max = v[0];
    int pos = 0;
    for (int i = 1; i < 10; i++) {
        if (v[i] > max) {
            max = v[i];
            pos = i;
        }
    }

    cout << "Il massimo è: " << max << " e si trova in posizione: " << pos << endl;

    return 0;
}