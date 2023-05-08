#include <iostream>
#include <string>
using namespace std;

int main(){
    int peso;
    float valor;
    cout << "Digite o peso:" << endl;
    cin >> peso;
    cout << "Peso:" << peso << endl;
    if (peso > 50){
        valor = (peso - 50) * 4; 
        cout << "Valor: " << valor;
    }
}