#include <iostream>
#include <string>

using namespace std;

int main(){
    float hora_t,valor_t,salario,IR,INSS,FGTS;
    
    cout << "Horas trabalhada: " << endl;
    cin >> hora_t;
    cout << "Valor ganho por hora: " << endl;
    cin >> valor_t;
    salario = valor_t * hora_t;
    cout << "Salario Bruto: " << salario << endl;
    
    FGTS = (salario * 11)/100;
    INSS = (salario * 10)/100;
    IR = (salario * 5)/100;

    cout << "FGTS: " << FGTS << endl;
    cout << "INSS: " << INSS << endl;
    cout << "IR: " << IR << endl;

    salario = salario - FGTS - INSS - IR;
    cout << "Salario Liquido: " << salario << endl;
}