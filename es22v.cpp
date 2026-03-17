// Genera un vettore di 12 numeri casuali, chiedi un numero all’utente e stampa la posizione se esiste.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int v[12];
    srand(time(0));

    for(int i=0;i<12;i++){
        v[i] = rand() % 10000 +1;
    }
cout << "dammi la posiozioned del numero che vuoi cercare: ";
int n;
cin >> n;

for(int i=0; i<12;i++){
    if(i == n){        
        cout << "il numero si trova nella posizione che hai cercato è: " << v[i] << endl;
        
        break;
    }
    
    cout << endl;
}
    return 0;
}