// gcc -c -Wall SIG-CLINIC.c
// gcc SIG-CLINIC.c -o SIG-CLINIC

#include <iostream>
using namespace std;

int main()
{
    int numero = 0;
    int resultado = 1;
    cout << "Fatorial de: " << endl;
    cin >> numero;
    for (int i = numero; i > 0; i--)
    {
        resultado = resultado * i;
    }
    cout << "Resultado: " << resultado << endl;
}