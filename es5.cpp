// Chiedi all’utente di inserire una parola e conta quante vocali (a, e, i, o, u) ci sono. (se vuoi inserire una frase devi usare getline(cin,
//frase) perché legge tutta la frase, anche con spazi)
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a ;
string frase;
cout << "Inserisci la frase: ";
cin >> frase;

switch (frase)
{
case "a" :
    a++;
    break;
case "e":
    a++;
    break;
    case "i":
    a++;
    break;
    case "o":
    a++;
    break;
    case "u":
    a++;
    break;
default:
    break;
}
cout << "il numero di volcali è "<< a << endl;
}