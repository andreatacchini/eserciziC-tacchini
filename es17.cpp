//Esercizio 4: Genera 10 numeri casuali tra 1 e 100 e stampa solo quelli pari 
#include <iostream> 
#include <string> 
 #include <cstdlib>
 #include <ctime>
using namespace std;
int main(){
int n, x, i=0;

srand(time(0));


while(i<10){
    i++;
         n= rand() % 100 + 1 ;
    if(n%2==0){
        cout << n << " ";
    }
}
cout << endl;
return 0;
}


