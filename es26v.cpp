//Esercizio4: crea un vettore di 10 stringhe e stampa solo le parole con lunghezza maggiore di 4 caratteri.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0, conta=0;
    string parolePossibili[15] = {"Astronave", "Pianoforte", "Sole", "Elicottero", "Altalena", "Libro", "Margherita", "Uovo", "Arcobaleno", "Cattedrale", "Blu", "Fotografia", "Avventura", "Scoiattolo", "Re"};
    string nomi[10];
    srand(time(0));

    for(int i=0;i<10;i++){
        nomi[i] = parolePossibili[rand() % 15];
    }
    for(int i=0; i<10;i++){
        if(nomi[i].length() > 4){
            cout << nomi[i] << " ";
        }
    }

    return 0;
        }