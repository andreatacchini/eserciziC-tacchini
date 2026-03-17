//Esercizio 2: Genera un vettore di 10 nomi casuali e 
//trova la posizione di "Anna". Prima costruisci un vettore di 5 elementi con i nomi possibili. 
//Ad esempio: string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0;
    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
    string nomi[10];
    srand(time(0));

    for(int i=0;i<10;i++){
        nomi[i] = nomiPossibili[rand() % 5];
    }
    for(int i=0; i<10;i++){
        cout << nomi[i] << " ";    
    }
cout << endl;
    for(int i=0; i<10;i++){
        if(nomi[i] == "Anna"){
            cout << "Posizione di Anna: " << i << endl;
            
        }
    }

    return 0;
        }