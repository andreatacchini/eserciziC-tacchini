//Chiedi all’utente il prezzo originale e la percentuale di sconto. 
//Calcola il prezzo finale e stampalo. Ripeti finché l’utente non inserisce 0 come prezzo.
#include <iostream>         
#include <string>
using namespace std;
int main(){
int prezzo, sconto;
float prezzoFinale;
cout << "Inserisci il prezzo originale (0 per terminare): ";
cin >> prezzo;
while(prezzo!=0){
    cout << "Inserisci la percentuale di sconto: ";
    cin >> sconto;
    prezzoFinale = prezzo - (prezzo * (sconto / 100.0

    ));
    cout << "Il prezzo finale è: " << prezzoFinale << endl;
    cout << "Inserisci il prezzo originale (0 per terminare): ";

    cin >> prezzo;
}
return 0;
}
