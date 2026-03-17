//Esercizio 5:Chiedi un numero all’utente e stampa: "Radice quadrata = ..." se il numero è positivo , "Numero non valido" se è negativo.
// Usa la libreria  #include <cmath> per  la funzione sqrt()

#include <iostream> 
#include <string> 
#include <cmath>
using namespace std;
int main(){
int a;
string cond = "si";

while (cond == "si") {
    cout << "Inserisci il numero: ";
    cin >> a;

    if (a > 0) {
        cout << "Radice quadrata = " << sqrt(a) << endl;
    } else {
        cout << "Numero non valido" << endl;
    }

    cout << "vuoi continuare? (si/no): ";
    cin >> cond;
}
    return 0;
}