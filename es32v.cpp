//Genera un vettore di 10 elementi di valore casuali e sostituisci i pari con lo 0
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0, conta=0;
     int n=10;

    int numeri[n];
   
    for(int i=0;i<n;i++){
     if(i%2!=0){
     numeri[i]=0; }
     else{
        numeri[i]= rand()%100+1;
     }
     }
    
    for(int i=0; i<n;i++){
        cout << numeri[i] << " ";
    }
    

    return 0;
    }
