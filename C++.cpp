#include <iostream>
#include <string>
using namespace std;

int main(){
    float valor_h,salarioB,salarioL;
    int hora_t;
    float taxa1,taxa2,taxa3;

    cout <<"Ganho por hora:"<< endl;
    cin >> valor_h;
    cout <<"Hora trabalhada:"<< endl;
    cin >> hora_t;
    salarioB = valor_h * hora_t;

    taxa1 = (salarioB *11)/100;
    taxa2 =  (salarioB *8)/100;
    taxa3 =  (salarioB *5)/100;
    salarioL = salarioB - taxa1 - taxa2 - taxa3;

    cout << "Salario bruto:" << salarioB << endl;
    cout << "Salario liquido:" << salarioL << endl;


}