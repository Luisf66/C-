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

    Carro chevrolet;
    chevrolet.nome = "Tracker";
    chevrolet.cor = "Branco";
    chevrolet.peso = 1204.6;

    cout << "Nome do carro:"<< chevrolet.nome << endl;
    cout << "Cor do carro:"<< chevrolet.cor << endl;
    cout << "Peso do carro:"<< chevrolet.peso << endl;
    return 0;
}