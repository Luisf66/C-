#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    float valor;

    cout << "VALOR: " << endl;
    cin >> valor;

    if (floor(valor) == valor){
        cout << "INTEIRO" << endl;
    }
    else {
        cout << "DECIMAL" << endl;
    }
}