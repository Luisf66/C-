#include <iostream>
#include <string>
using namespace std;

int main(){
    int const taxa = 4;
    int peso;
    float valor;
    cout << "Digite o peso:" << endl;
    cin >> peso;
    cout << "Peso:" << peso << endl;
    if (peso > 50){
        valor = (peso - 50) *taxa; 
        cout << "Valor: " << valor;
    }
}