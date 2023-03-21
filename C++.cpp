#include <iostream>
#include <string>
using namespace std;

int main(){
    struct cadastro {
        int idade;
        string nome;
        double cpf;
        string cidade;
    };
    cadastro Cadastro;
    cout << "Digite sua idade:" << endl;
    cin >> Cadastro.idade;
    cout << "Digite seu nome:" << endl;
    cin >> Cadastro.nome;
    cout << "Digite seu cpf:" << endl;
    cin >> Cadastro.cpf;
    cout << "Digite sua cidade:" << endl;
    cin >> Cadastro.cidade;
    cout << "Você tem " << Cadastro.idade << "anos" << endl;
    cout << "Seu nome é " << Cadastro.nome << endl;
    cout << "Seu CPF é " << Cadastro.cpf << endl;
    cout << "Você mora em " << Cadastro.cidade << endl;
    return 0;
}