//Esercizio 1. Chiedi numeri finché l’utente non inserisce 0, poi calcola somma, media, massimo e minimo.
//  Chiedi numeri finché l’utente non digita 0 e somma solo quelli dispari
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a ;
int somma=0, conta=0, max=0, min=999999;
int i=0;
cout << "Inserisci il numero: ";
cin >> a;
while(a!=0){
    i++;
    if(a>max){
        max=a;
    }
    if(a<min){
        min=a;
    }
    somma = somma + a;
    conta++;
    cout << "Inserisci il numero: ";
    cin >> a ;
}


cout << "la somma è "<< somma << endl;
cout << "la media è "<< somma/conta << endl;
cout << "il numero massimo è "<< max << endl;
cout << "il numero minimo è "<< min << endl;
return 0;
}