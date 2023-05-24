#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    float quantidade_morango,quantidade_maca;
    float valor_morango,valor_maca;

    cout << "Quantidade de Morangos em Kg: " << endl;
    cin >> quantidade_morango;

    cout << "Quantidade de Maca em Kg: " << endl;
    cin >> quantidade_maca;

    if (quantidade_morango > 5)
    {
        valor_morango = quantidade_morango * 2.2;
    }
    else
    {
        valor_morango = quantidade_morango * 2.5;
    }

    if (quantidade_maca > 5)
    {
        valor_maca = quantidade_maca * 1.5;
    }
    else
    {
        valor_maca = quantidade_maca * 1.8;
    }

    if ((quantidade_maca + quantidade_morango) > 8 || (valor_maca + valor_morango) > 25)
    {
        valor_maca = valor_maca - ((valor_maca * 10) / 100);
        valor_morango = valor_morango - ((valor_morango * 10) / 100);
        cout << "Valor Total: " << valor_morango + valor_maca << endl;
    }
}