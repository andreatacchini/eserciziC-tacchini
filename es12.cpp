//Esercizio 2. Sono dati N dipendenti. Per ogni dipendente: stipendio base, tipo contratto. Se:
// Tempo pieno +15% , Part-time  +10% , Stage → +5%. Stampare stipendio finale, totale stipendi.
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a ,n, prezzo,sommaTotale=0;
string b;
int somma=0;
int i=1;
cout << "Inserisci il numero di dipendenti: ";
cin >> n;

while(n>=i){
    
    cout << "Inserisci lo stipendio base del dipendente: "<< endl;
    cin >> prezzo;
    cout << "Inserisci il tipo di  dipendente | tempopieno | part-time | stage :"<< endl;
    cin >> b;
    if(b=="tempopieno"){
        somma = prezzo + (prezzo * 0.15);
    }
   if(b=="part-time"){
        somma = prezzo + (prezzo * 0.10);
    }
    if(b=="stage"){
        somma = prezzo + (prezzo * 0.05);
    }
    cout << "lo stipendio finale del dipendente " << i << " è: "<< somma << endl;
    sommaTotale =sommaTotale + somma;
    i++;
}
cout << "il totale degli stipendi è: "<< sommaTotale << endl;


return 0;
}
