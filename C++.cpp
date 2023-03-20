#include <iostream>
#include <string>
using namespace std;

int main(){
    string operacoes[4] = {"Adição","Subtração","Divisão","Multiplicação"};
    int numero;
    do{
        cout << "Digite um número de 0 a 3:" << endl;
        cin >> numero;
        switch (numero)
        {
        case 0:
            cout << operacoes[0] << endl;
            break;
        case 1:
            cout << operacoes[1] << endl;
            break;
        case 2:
            cout << operacoes[2] << endl;
            break;
        case 3:
            cout << operacoes[3] << endl;
            break;
        default:
            cout << "Número inválido" << endl;
            break;
        }
    } while (numero != 5);
    return 0;
}