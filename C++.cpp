#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    string dias[] = {"INVÁLIDO","Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};

    for (int i = 0; i < 7; i++){
        cout << "Digite um numero: " << endl;
        cin >> num;
        if (num > 7){
            cout << "Dia: INVÁLIDO" << endl;
        }
        cout << "Dia: " << dias[num] << endl;
    }
    
}