#include <iostream>
#include <string>
using namespace std;

int soma (int numero_1, int numero_2){
    return numero_1 + numero_2;
}

int subtracao (int numero_1,int numero_2){
    if (numero_1 > numero_2){
        return numero_1 - numero_2;
    }
    else{
        return numero_2 - numero_1;
    }
}

int main(){
    int numero_1;
    int numero_2;
    string operacao;
    cout << "Digite a operação (A = Adição// S = Subtração):" << endl;
    cin >> operacao;
    cout << "Digite o número 1:" << endl;
    cin >> numero_1;
    cout << "Digite o número 2:" << endl;
    cin >> numero_2;
    if (operacao == "A"){
        cout << soma(numero_1,numero_2);
    }
    else{
        cout << subtracao(numero_1,numero_2);
    }
    return 0;
}