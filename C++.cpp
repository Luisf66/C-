#include <iostream>
#include <string>
using namespace std;

class Carro {
    public:
        string nome;
        string cor;
        double peso;
        double preco;
            Carro(string n, string c, double p, double r) {
                cout << "\nVeículos disponíveis:" << endl;
                nome = n;
                cor = c;
                peso = p;
                preco = r;
            }
};

int main(){
    string nome;
    string cor;
    double peso;
    double preco;
    cout << "Digite o nome do veículo:" << endl;
    cin >> nome;
    cout << "Digite a cor do veículo:" << endl;
    cin >> cor;
    cout << "Digite o peso do veículo:" << endl;
    cin >> peso;
    cout << "Digite o valor do veículo:" << endl;
    cin >> preco;

    Carro carro1(nome,cor,peso,preco);
    cout << "Nome do carro:"<< carro1.nome << endl;
    cout << "Cor do carro:"<< carro1.cor << endl;
    cout << "Peso do carro:"<< carro1.peso << endl;
    cout << "Preço do carro:"<< carro1.preco << endl;

    Carro carro2("Tracker","Branco",1247.8,150000);
    cout << "Nome do carro:"<< carro2.nome << endl;
    cout << "Cor do carro:"<< carro2.cor << endl;
    cout << "Peso do carro:"<< carro2.peso << endl;
    cout << "Preço do carro:"<< carro2.preco << endl;
    return 0;
}