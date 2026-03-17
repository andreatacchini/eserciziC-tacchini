//1 .Chiedi all’utente quanti numeri vuole inserire (n) e calcola la loro media usando un array  
#include <iostream> 
#include <string> 
 #include <cstdlib>
 #include <ctime>
using namespace std;
int main(){
int n, x, i=0, b, somma=0;
cout << "Quanti numeri vuoi inserire? ";
cin >> b;
int v[b];

for (int i = 0; i < b; i++) {
cin >> v[i];
somma=somma+v[i];
}

for (int i = 0; i < b; i++) {
cout << v[i] << " ";
}
int media = somma/b;
cout << endl;
cout << "La media è: " << media;
cout << endl;
return 0;
}