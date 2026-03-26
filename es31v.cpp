//Costruisci un vettore di N dimensione , moltiplica solo gli elementi con indice dispari.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0, conta=0;
    int n;
      cout << "inserisci il numero di elementi: " << endl;  
    cin >> n;
    int  numeri[n];
    int prodotto = 1;
    for(int i=0;i<n;i++){
     cout << "inserisci i valori: " << endl;
        cin>>numeri[i];
    }
    for(int i=0; i<n;i++){
        if(i % 2 == 1){
            prodotto *= numeri[i];
        }
    }
    cout << "Prodotto degli elementi con indice dispari: " << prodotto << endl;
    return 0;
}