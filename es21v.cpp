//4. Genera un vettore di 10 numeri casuali e stampali in ordine inverso.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int v[10];
    srand(time(0));

    for(int i=0;i<10;i++){
        v[i] = rand() % 10000 +1;
    }
    for(int i=0; i<10;i++){
        cout << v[i] << " ";    
    }
    cout << endl;   
    for(int i=9; i>=0;i--){
        cout << v[i] << " ";    
    }
    cout << endl;

    return 0;
}