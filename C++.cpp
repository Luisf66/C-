#include <iostream>
#include <string>
using namespace std;

int main(){
    struct {
        int idade;
        string nome;
        double cpf;
        string cidade;
    } cadastro;
    cout << "Digite sua idade:" << endl;
    cin >> cadastro.idade;
    cout << "Digite seu nome:" << endl;
    cin >> cadastro.nome;
    cout << "Digite seu cpf:" << endl;
    cin >> cadastro.cpf;
    cout << "Digite sua cidade:" << endl;
    cin >> cadastro.cidade;
    cout << "Você tem " << cadastro.idade << "anos" << endl;
    cout << "Seu nome é " << cadastro.nome << endl;
    cout << "Seu CPF é " << cadastro.cpf << endl;
    cout << "Você mora em " << cadastro.cidade << endl;
    return 0;
}