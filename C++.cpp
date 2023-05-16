#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string pergunta[] = {"Telefonou para a vítima?","Esteve no local do crime?","Mora perto da vítima?","Devia para a vítima?","Já trabalhou com a vítima?"};
    int soma = 0;
    for (int i = 0; i < 5; i++){
        int resposta = 0;
        cout << pergunta[i] << endl;
        cout << "Resposta: " << endl;
        cin >> resposta;
        soma += resposta ;
    }
    cout << "Soma das respostas: " << soma << endl;
    if (soma == 2){
        cout << "Suspeito" << endl;
    }
    else if (soma == 3 || soma == 4){
        cout << "Cumplice" << endl;
    }
    else if (soma == 5){
        cout << "Assassino" << endl;
    }
    else{
        cout << "Inocente" << endl;
    }

}