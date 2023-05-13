#include <iostream>
#include <string>

using namespace std;

int main(){
    int num,dezena,centena,milhar;

    cout << "Numero: " << endl;
    cin >> num;

    dezena = num / 10;
    cout << "DEZENAS: " << dezena << endl;
    centena = num / 100;
    cout << "CENTENAS: " << centena << endl;
    milhar = num / 1000;
    cout << "MILHARES: " << milhar << endl;
}