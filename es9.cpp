//  Chiedi numeri finché l’utente non digita 0 e somma solo quelli dispari
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a ;
int somma=0;
int i=0;
cout << "Inserisci il numero: ";
cin >> a;
while(a!=0){
    i++;
    if(a%2!=0){
        somma = somma + a;
    }
    cout << "Inserisci il numero: ";
    cin >> a ;
}


cout << "la somma è "<< somma << endl;
return 0;
}