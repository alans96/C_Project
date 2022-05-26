#include <iostream>
#include <string>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++){ //i++ == i+=1 
    
        int x=-10;
        cout << "Digite um numero: ";
        cin >> x;

        if (x > 0){
            cout << "X eh maior do que zero!\n";
        }
        else if (x < 0){
            cout << "X eh negativo\n";
        }
        else {
            cout << "X eh zero!\n";
        }
    }
}