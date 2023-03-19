#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero_1;
    int numero_2;
    int operacao;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtração" << endl;
    cout << "3 - Divisão" << endl;
    cout << "4 - Multiplicação" << endl;
    cout << "Digite o número 1:" << endl;
    cin >> numero_1;
    cout << "Digite o número 2:" << endl;
    cin >> numero_2;
    cout << "Digite a operação:" << endl;
    cin >> operacao;
    int soma;
    int subtracao;
    double divisao;
    double multiplicacao;
    switch (operacao){
    case 1:
        soma = numero_1 + numero_2;
        cout << "Soma = " << soma << endl;
        break;
    case 2:
        subtracao = numero_1 - numero_2;
        cout << "subtracao = " << subtracao << endl;
        break;
    case 3:
        divisao = numero_1 / numero_2;
        cout << "divisao = " << divisao << endl;
        break;
    case 4:
        multiplicacao = numero_1 * numero_2;
        cout << "multiplicacao = " << multiplicacao << endl;
        break;
    default:
        cout << "Operação inválida" << endl;
        break;
    }
    return 0;
}