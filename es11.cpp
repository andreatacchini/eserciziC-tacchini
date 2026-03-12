//  Sono dati N biglietti. Per ogni biglietto si conoscono: prezzo base, 
//tipo di cliente. Applicare lo sconto: Studente → 30% , 
//Adulto → 5% , Over 65 → 40%. Stampare il totale incassato.
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a ,n, prezzo;
string b;
int somma=0;
int i=1;
cout << "Inserisci il numero di biglietti: ";
cin >> n;

while(n>=i){
    i++;
    cout << "Inserisci il prezzo base dei biglietti: ";
    cin >> prezzo;
    cout << "Inserisci il tipo di cliente | Studente | Adulto | Over65 :";
    cin >> b;
    if(b=="studente"){
        somma = prezzo - (prezzo * 0.3);
    }
   if(b=="adulto"){
        somma = prezzo - (prezzo * 0.05);
    }
    if(b=="over65"){
        somma = prezzo - (prezzo * 0.4);
    }
    cout << "il prezzo scontato è: "<< somma << endl;
    somma=0;
}



return 0;
}
