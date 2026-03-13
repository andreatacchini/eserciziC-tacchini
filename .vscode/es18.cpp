//Esercizio 5:Chiedi un numero all’utente e stampa: "Radice quadrata = ..." se il numero è positivo , "Numero non valido" se è negativo.
// Usa la libreria  #include <cmath> per  la funzione sqrt()

#include <iostream> 
#include <string> 
#include <cmath>
using namespace std;
int main(){
int a ;
double radice;

int i=0;
cout << "Inserisci il numero: ";
cin >> a;

    if(a>0){
      sqrt(a);
        cout << "Radice quadrata = "<< sqrt(a) << endl; 
    }
    else{
        cout << "Numero non valido" << endl;
    }
    return 0;
}