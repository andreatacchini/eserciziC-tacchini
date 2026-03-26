
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0, conta=0;
    int n;
      cout << "inserisci il numero di elementi: " << endl;  
    cin >> n;
    int  numeri[n];
    int prod=1;
    int max=0;

    for(int i=0;i<n;i++){
    
        numeri[i]= rand()%100+1;
     }
     int risp=0;
     int rispos=1;

     while(rispos!=0){
 cout << "inserisci il numero dell'operazione da svolgere: " << endl;
  cout << "1. Somma tutti gli elementi " << endl;
   cout << "2. Prodotto degli elementi " << endl;
    cout << "3. Trova il massimo. " << endl;
cin >> risp;
switch(risp){
    case 1 :
    for(int i=0; i<n;i++){
            somma = somma + numeri[i];
        
    }
    cout<<"la somma di tutti i valori è"<<somma<<endl;
    break;
    
    case 2:
    for(int i=0; i<n;i++){
            prod = prod * numeri[i];
    }
    cout<<"il prodotto di tutti i valori è"<<prod<<endl;
    break;
    case 3 :
    for(int i=0; i<n;i++){
            if ( numeri[i]>max){
                max=numeri[i];
            } 
    }
    cout<<"il valore massimo è "<<max<<endl;
}
cout<<"vuoi continuare se si inserisci un numero diverso da 0"<<endl;
    cin>>rispos;
}
for(int i=0; i<n;i++){
        cout << numeri[i] << " ";
    }
    return 0;
}