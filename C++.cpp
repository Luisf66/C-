#include <iostream>
using namespace std;

int main(){
    string texto = "Criando tipos e valores...";
    cout << "Digite os valores para o calculo" << endl;
    int x;
    int y;
    cin >> x;
    cin >> y;
    int soma = x + y;
    cout << "Resultado:" << soma << endl;
    return 0;
}