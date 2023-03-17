#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome;
    cout << "Insira seu nome:" << endl;
    getline(cin,nome);
    cout << "Seu nome é:" << nome << endl;
    return 0;
}