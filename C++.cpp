#include <iostream>
#include <string>

using namespace std;

int main(){
    int valor,nota1,nota5,nota10,nota50,nota100;

    cout << "VALOR: " << endl;
    cin >> valor;

    nota1 = valor / 1;
    nota5 = valor / 5;
    nota10 = valor / 10;
    nota50 = valor / 50;
    nota100 = valor / 100;

    cout << "VALOR PARA NOTAS DE 1: " << nota1 << endl;
    cout << "VALOR PARA NOTAS DE 5: " << nota5 << endl;
    cout << "VALOR PARA NOTAS DE 10: " << nota10 << endl;
    cout << "VALOR PARA NOTAS DE 50: " << nota50 << endl;
    cout << "VALOR PARA NOTAS DE 100: " << nota100 << endl;


}