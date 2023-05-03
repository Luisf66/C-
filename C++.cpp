#include <iostream>
#include <string>
using namespace std;

typedef struct carro {
    string cor;
    int ano;
    string modelo;
}Carro;

int main(){
    Carro carro_um;
    carro_um.ano = 1987;
    carro_um.cor = "Amarelo";
    carro_um.modelo = "Mustang";

    cout << carro_um.modelo << endl;
    cout << carro_um.cor << endl;
    cout << carro_um.ano << endl;
}