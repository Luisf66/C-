#include <iostream>
#include <string>

using namespace std;

int main(){
    int valor;

    cout << "VALOR: " << endl;
    cin >> valor;

    if (valor % 2 == 0){
        cout << "PAR" << endl;
    }
    else{
        cout << "IMPAR" << endl;
    }
}