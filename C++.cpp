#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    float alcool = 1.9;
    float gasolina = 2.5;
    float quantidade,valortotal = 0;
    char resposta;

    cout << "Digite o tipo de combustivel: " << endl;
    cin >> resposta;

    cout << "Digite a quantidade de combustivel: " << endl;
    cin >> quantidade;

    if (resposta == 'A'){
        valortotal = quantidade * alcool;
        if (quantidade < 20){
            valortotal = valortotal - ((valortotal * 3) / 100);
        }
        else{
            valortotal = valortotal - ((valortotal * 5) / 100);
        }
    }
    else if (resposta == 'G'){
        valortotal = quantidade * gasolina;
        if (quantidade < 20){
            valortotal = valortotal - ((valortotal * 4) / 100);
        }
        else{
            valortotal = valortotal - ((valortotal * 6) / 100);
        }
    }
    cout << "Valor Total: " << valortotal << endl;
}