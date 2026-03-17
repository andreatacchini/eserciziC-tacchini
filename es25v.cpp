//Esercizio 3: Genera un vettore di 12 nomi casuali e conta quante volte appare "Sara. 
// I nomi possibili da generare sono:  nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"}



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0, conta=0;
    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
    string nomi[12];
    srand(time(0));

    for(int i=0;i<12;i++){
        nomi[i] = nomiPossibili[rand() % 5];
    }
    for(int i=0; i<12;i++){
        cout << nomi[i] << " ";    
    }
cout << endl;
    for(int i=0; i<12;i++){
        if(nomi[i] == "Sara"){
            conta++;
            
        }
    }
    cout << "Sara appare " << conta << " volte." << endl;

    return 0;
        }