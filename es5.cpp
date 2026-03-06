
#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a =0,i;
string frase;
cout << "Inserisci il numero: ";
cin >> a ;

for( i=0; i<a; i++){
    if(i%2==0&&i!=0){
        cout << i << endl;
    }
}


return 0;
}
