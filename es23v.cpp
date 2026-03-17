//Genera un vettore di 10 numeri casuali e calcola la somma degli elementi nelle posizioni pari

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0;
    int v[10];
    srand(time(0));

    for(int i=0;i<10;i++){
        v[i] = rand() % 10000 +1;
        if(i%2==0){
            somma = v[i] + somma;
        }
    }
    for(int i=0; i<10;i++){
        cout << v[i] << " ";    
    }
cout << endl;
    cout << "Somma degli elementi nelle posizioni pari: " << somma << endl;

    return 0;
}