#include <iostream>
#include <string>
using namespace std;

class Carro {
    public:
        string nome;
        string cor;
        double peso;
        double preco;
            Carro() {
                cout << "\nVeículos disponíveis:" << endl;
            }
};

int main(){
    Carro fiat;
        fiat.nome = "Palio";
        fiat.cor = "Cinza";
        fiat.peso = 748.9;
        fiat.preco = 20000;

    cout << "Nome do carro:"<< fiat.nome << endl;
    cout << "Cor do carro:"<< fiat.cor << endl;
    cout << "Peso do carro:"<< fiat.peso << endl;
    cout << "Preço do carro:"<< fiat.preco << endl;

    Carro chevrolet;
        chevrolet.nome = "Tracker";
        chevrolet.cor = "Branco";
        chevrolet.peso = 1204.6;
        chevrolet.preco = 150000;

    cout << "Nome do carro:"<< chevrolet.nome << endl;
    cout << "Cor do carro:"<< chevrolet.cor << endl;
    cout << "Peso do carro:"<< chevrolet.peso << endl;
    cout << "Preço do carro:"<< chevrolet.preco << endl;
    return 0;
}