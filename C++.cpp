#include <iostream>
using namespace std;

// Uso do namespace
namespace Funcao {
    int somar(int a, int b) {
        int resultado = a + b;
        cout << "Resultdo: " << resultado;
        return resultado; 
    }
}

int main()
{
    int valor1, valor2 = 0;
    cout << "Digite um valor: " << endl;
    cin >> valor1;
    cout << "Digite outro valor: " << endl;
    cin >> valor2;
    Funcao::somar(valor1,valor2);
}
