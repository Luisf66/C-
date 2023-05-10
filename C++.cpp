#include <iostream>
#include <string>

using namespace std;

int main(){
    float salario,A20,A15,A10,A5;
    
    cout << "Salario: " << endl;
    cin >> salario;
    A20 = (salario * 20)/100;
    A15 = (salario * 15)/100;
    A10 = (salario * 10)/100;
    A5 = (salario * 5)/100;

    if(salario <= 280){
        salario = salario + A20;
        cout << "Salario:"<< salario;
    }
    else if (salario > 280 && salario <= 700){
        salario = salario + A15;
        cout << "Salario:"<< salario;
    }
    else if (salario > 700 && salario <= 1500){
        salario = salario + A10;
        cout << "Salario:"<< salario;
    }
    else if (salario > 1500){
        salario = salario + A5;
        cout << "Salario:"<< salario;
    }
}