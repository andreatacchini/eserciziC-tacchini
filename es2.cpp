#include <iostream> 
#include <string> 
using namespace std;
int main(){
int a, b,area;
cout << "Inserisci il primo numero : ";
cin >> a ;
cout << "Inserisci il secondo numero : ";
cin >> b;
if(a>=0&&b>=0){
 area = a * b; 
 cout << "L'area è: " << area << endl;
}else{
    cout << "valore errato" << endl;
}

}