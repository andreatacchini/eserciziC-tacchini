// L’utente inserisce numeri finché non scrive -1. Alla fine il programma calcola la media
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a =0;
int somma=0;
int i=0;
while(a!=-1){
    cout << "Inserisci il numero: ";
    cin >> a ;
    i++;
    somma = somma + a;
}

int media = somma/i;
cout << "la media è "<< media << endl;
return 0;
}

