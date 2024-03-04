#include <bits/stdc++.h>
using namespace std;

int main()
{
    //uso de ponteiros

    int numero = 0;
    cout << "Digite o número: " << endl;
    cin >> numero;
    cout << "O valor da variável guardado foi: " << numero << endl;

    int* apontador_numero;
    apontador_numero = &numero;
    cout << "O valor do apontador guardado foi: " << *(static_cast<int*>(apontador_numero)) << endl;
    cout << "O valor do apontador é: " << apontador_numero << endl;
}