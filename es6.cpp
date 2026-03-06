//*Chiedi un numero n e stampa tutti i numeri pari da 2 fino a n 
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a =0,i;
string frase;
cout << "Inserisci la frase: ";
getline(cin, frase);

for( i=0; i<frase.length(); i++){
    char lettera = frase[i];
    switch(lettera){
        case 'a':
        a++;
        break;
        case 'e':
        a++;
        break;
        case 'i':
        a++;
        break;
        case 'o':
        a++;
        break;
        case 'u':
            a++;
            break;
        default:
        break;
            
    }
}
cout << "il numero di volcali è "<< a << endl;
return 0;
}
