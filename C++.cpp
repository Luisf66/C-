#include <iostream>
#include <string>

using namespace std;

int main(){
    int dia,mes,ano;

    cout << "Dia: " << endl;
    cin >> dia;
    if (dia < 0 || dia > 31){
        cout << "DIA INVALIDO" << endl;
        exit(0);
    }
    cout << "Mes: " << endl;
    cin >> mes;
    if (mes < 0 || mes > 12){
        cout << "MES INVALIDO" << endl;
        exit(0);
    }
    cout << "Ano: " << endl;
    cin >> ano;
    if (ano < 0 || ano > 2050){
        cout << "ANO INVALIDO" << endl;
        exit(0);
    }

    

}