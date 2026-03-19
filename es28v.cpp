//2.  Costruire un vettore di N elementi  e controlla se tutti gli elementi del vettore sono uguali.
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
    int temp = numeri[0];
    bool tuttiUguali = true;
    for(int i=1; i<n; i++){
        if(numeri[i] != temp){
            tuttiUguali = false;
            break;
        }
    }
    if(tuttiUguali){
        cout << "Tutti gli elementi del vettore sono uguali." << endl;
    } else {
        cout << "Non tutti gli elementi del vettore sono uguali." << endl;
    }
    for(int i=0; i<n;i++){
       
            cout << numeri[i] << " ";
        }
   
    return 0;
        }