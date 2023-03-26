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
    if (imc < 18.5){
        cout << "Abaixo do peso " << endl;
    }
    else if (imc > 18.5 && imc < 24.9){
        cout << "Peso ideal " << endl;
    }
    else if (imc > 25 && imc < 29.9){
        cout << "Levemente acima do peso " << endl;
    }
    else if (imc > 30 && imc < 34.9){
        cout << "Obesidade brau I " << endl;
    }
    else if (imc > 35 && imc < 39.9){
        cout << "Obesidade brau II " << endl;
    }
    else if (imc > 40){
        cout << "Obesidade brau III " << endl;
    }
    else{
        cout << "Calculo não realizado...\n" << endl;
    }
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