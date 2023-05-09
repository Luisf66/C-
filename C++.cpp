#include <iostream>
#include <string>
using namespace std;


int main(){
    float num1;

    cout << "Numero 1: " << endl;
    cin >> num1;
    if (num1 >= 0){
        cout << "Positivo" << endl; 
    }
    else{
        cout << "Negativo" << endl; 
    }
}