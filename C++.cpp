#include <iostream>
#include <string>
using namespace std;

class Carro {
    public:
    string nome;
    string cor;
    double peso;
};

int main(){
    Carro fiat;
    fiat.nome = "Palio";
    fiat.cor = "Cinza";
    fiat.peso = 748.9;

    cout << "Nome do carro:"<< fiat.nome << endl;
    cout << "Cor do carro:"<< fiat.cor << endl;
    cout << "Peso do carro:"<< fiat.peso << endl;
    return 0;
}