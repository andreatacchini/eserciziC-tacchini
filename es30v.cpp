//4. Costruisci un vettore di N 
//elementi (chiedi la dimensione fin quando la dimensione è dispari) e 
//verifica se l’elemento centrale è il più grande.

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
    int max = numeri[0];
    for(int i=0;i<n;i++){
     cout << "inserisci i valori: " << endl;
        cin>>numeri[i];
    }
    for(int i=0; i<n;i++){
        if(numeri[i] > max){
            max = numeri[i];
        }
            cout << numeri[i] << " ";
        }
    cout<< endl;
         if(numeri[n/2]==max){
            cout << "L'elemento centrale è il maggiore di tutti." << endl;
        } else {
            cout << "L'elemento centrale non è il maggiore di tutti." << endl;
        }
    return 0;
        }