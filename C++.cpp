#include <iostream>
#include <string>
using namespace std;

class IMC {
    public:
        double peso;
        double altura;
        IMC() {
            cout << "Calculo de IMC" << endl;
        }
};

double calcula_imc(double peso,double altura){
    double imc;
    imc = peso / (altura*altura);
    cout << "IMC = " << imc << endl;
    return imc;
}


int main(){
    IMC calculo_1;
    cout << "Digite o seu peso:" << endl;
    cin >> calculo_1.peso;
    cout << "Digite a sua altura:" << endl;
    cin >> calculo_1.altura;
    calcula_imc(calculo_1.peso,calculo_1.altura);
    return 0;
}