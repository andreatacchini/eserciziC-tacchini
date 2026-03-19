//3. Costruisci un vettore di N elementi e scambiare il primo elemento 
//con l’ultimo elemento di un vettore ( senza usare un altro vettore)
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
       
            cout << numeri[i] << " ";
        }
        cout << endl;
    int temp = numeri[0];
    int ultimo = numeri[n-1];
    numeri[0] = ultimo;
    numeri[n-1] = temp;
   
    for(int i=0; i<n;i++){
       
            cout << numeri[i] << " ";
        }
   
    return 0;
        }