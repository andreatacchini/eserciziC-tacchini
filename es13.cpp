//Fai generare al programma
// un numero casuale tra 1 e 50. L’utente deve indovinarlo, 
//e il programma dice “troppo alto” o “troppo basso” finché non indovina 
#include <iostream> 
#include <string> 
 #include <cstdlib>
 #include <ctime>
using namespace std;
int main(){
int n, x;
string b;
srand(time(0));
 n= rand() % 50 + 1 ;
cout << "Inserisci il numero che ritieni corretto: ";
    cin >> x;
while(x!=n){
    
    if(x>n){
        cout << "il numero è troppo alto"<< endl;  }
    if(x<n){
        cout << "il numero è troppo basso"<< endl;  }


        cout << "Inserisci il numero che ritieni corretto: ";
    cin >> x;
}
        cout << "hai indovinato il numero"<< endl;
return 0;
}
