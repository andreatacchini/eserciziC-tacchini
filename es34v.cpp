
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int somma=0, conta=0;
    int n;
    int r;
      cout << "inserisci il numero di elementi: " << endl;  
    cin >> n;
    int  numeri[n];
   
do{
    int contapari=0, contadispari=0, sommapari=0, sommadispari=0;
    srand(time(0));
    for(int i=0;i<n;i++){
    
        numeri[i]= rand()%100+1;
     }
     int risp=0;
     int rispos=1;

     while(rispos!=0){
 cout << "inserisci il numero dell'operazione da svolgere: " << endl;
  cout << "1.Conta elementi pari" << endl;
   cout << "2. Conta elementi dispari " << endl;
    cout << "3.Somma elementi pari " << endl;
    cout << "4.Somma elementi dispari " << endl;
    cout << "5.Esci " << endl;
cin >> risp;
switch(risp){
    case 1 :
    for(int i=0; i<n;i++){
            if(numeri[i]%2==0){
                contapari++;
            }
        
    }
    cout<<"il numero di numeri pari è"<<contapari<<endl;
    break;
    
    case 2:
    for(int i=0; i<n;i++){
            if(numeri[i]%2!=0){
                contadispari++;
            }
        
    }
    cout<<"il numero di numeri dispari è"<<contadispari<<endl;
    break;
    case 3 :
    for(int i=0; i<n;i++){
            if(numeri[i]%2==0){
                sommapari=sommapari+numeri[i];
            }
        
    }
    cout<<"la somma dei numeri pari è"<<sommapari<<endl;
    break;
    case 4 :
    for(int i=0; i<n;i++){
            if(numeri[i]%2!=0){
                sommadispari=sommadispari+numeri[i];
            }
        
    }
    cout<<"la somma dei numeri dispari è"<<sommadispari<<endl;
    break;
    case 5 :
    cout<<"uscita in corso..."<<endl;
    rispos=0;
    break;
}   


}
for(int i=0; i<n;i++){
        cout << numeri[i] << " ";
    }
cout<<"vuoi cambiare vettore?? se si inserisci un numero diverso da 0"<<endl;
cin>> r;
}while(r!=0);
    return 0;
}