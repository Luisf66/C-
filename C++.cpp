#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string nome;
    int tamanho,idade,salario;
    char sexo,ec;
    do
    {
        cout << "Digite seu nome: " << endl;
        cin >> nome;
        tamanho = nome.length();
    } while (tamanho < 3);
    do
    {
        cout << "Digite sua idade: " << endl;
        cin >> idade;
    } while (idade < 0 || idade > 150);
    do
    {
    cout << "Digite seu salario: " << endl;
    cin >> salario;
    } while (salario < 0);
    do
    {
        cout << "Digite seu sexo f ou m: " << endl;
    cin >> sexo;
    } while (sexo != 'f' && sexo != 'm');
    do
    {
    cout << "Digite seu estado civil s|c|v|d: " << endl;
    cin >> ec;
    } while (ec != 's' && ec != 'c' && ec != 'v' && ec != 'd');
}