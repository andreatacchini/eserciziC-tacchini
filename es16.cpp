//Genera un numero casuale tra 1 e 100. L’utente ha massimo 5 tentativi per indovinarlo.
//Alla fine stampa: "Hai vinto" oppure "Hai perso, il numero era ..."
#include <iostream> 
#include <string> 
 #include <cstdlib>
 #include <ctime>
using namespace std;
int main(){
int n, x, i=0;
string b;
bool vinto=false;
srand(time(0));
 n= rand() % 100 + 1 ;
cout << "Inserisci il numero che ritieni corretto: ";
    cin >> x;
while(x!=n&&i<5){
    i++;
    if(x>n){
        cout << "il numero è troppo alto"<< endl;  }
    if(x<n){
        cout << "il numero è troppo basso"<< endl;  }


        cout << "Inserisci il numero che ritieni corretto: ";
    cin >> x;
}
i++;
      if(i<5){
cout << "hai vinto"<< endl;
      }  else{
          cout << "hai perso, il numero era "<< n << endl;
      }
return 0;
}
