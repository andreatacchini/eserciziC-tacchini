 //Chiedi un numero all’utente e conta quante cifre ha.
 #include <iostream> 
#include <string> 
using namespace std;
int main(){
string a;
int b=0,i;

cout << "Inserisci il numero : ";
cin >> a;
for( i=0; i<a.length(); i++){
    b++;
}
cout << "il numero di cifre è "<< b << endl;
return 0;
}   
   