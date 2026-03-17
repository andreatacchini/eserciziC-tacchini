// Chiedi all’utente quanti numeri vuole inserire (n) e calcola la loro media usando un array
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    double somma = 0;

    cout << "Inserisci il numero di numeri da inserire: ";
    cin >> n;

    if (n <= 0) {
        cout << "Numero non valido" << endl;
        return 0;
    }

    vector<double> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        somma += v[i];
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    double media = somma / n;
    cout << "la media e: " << media << endl;

    return 0;
}
