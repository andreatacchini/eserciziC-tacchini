// Chiedi all’utente un numero n e calcola n! Esempio: 5!=5*4*3*2*1=120
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a , b=1, prod=1;
cout << "Inserisci il primo numero : ";
cin >> a ;
while(b<=a){
    prod=prod*b;
 b++;
}
cout << prod<< endl;
}
