#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string nome,senha;
    do{
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite sua senha: " << endl;
    cin >> senha;
    if (senha == nome)
    {
        cout << "O nome não deve ser igual a senha" << endl;
    }
    } while (nome == senha);

}