//2. Chiedi all’utente di inserire n numeri in un array e trova il più piccolo  
#include <iostream> 
#include <string> 
 #include <cstdlib>
 #include <ctime>
using namespace std;
int main(){
int n, x, i=0, b, min=9999;
cout << "Quanti numeri vuoi inserire? ";
cin >> b;
int v[b];

for (int i = 0; i < b; i++) {
cin >> v[i];
if (v[i] < min) {
min = v[i];
}
}

for (int i = 0; i < b; i++) {
cout << v[i] << " ";
}
cout << endl;
cout << "Il numero più piccolo è: " << min;
cout << endl;
return 0;
}