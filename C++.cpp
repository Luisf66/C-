#include <iostream>
#include <string>

using namespace std;

int main(){
    int num1,num2,num3;

    cout << "Digite o primeiro valor: " << endl;
    cin >> num1;
    cout << "Digite o segundo valor: " << endl;
    cin >> num2;
    cout << "Digite o terceiro valor: " << endl;
    cin >> num3;

    if ((num1 + num2) > num3 || (num1 + num3) > num2 || (num2 + num3) > num1){
        cout << "TRIÂNGULO" << endl;
        if(num1 == num2 && num2 == num3){
            cout << "EQUILÁTERO" << endl;
        }
        else if(num1 == num2 || num1 == num3 || num2 == num3){
            cout << "ISÓCILES" << endl;
        }
        else if(num1 != num2 && num1 != num3 && num2 != num3){
            cout << "ESCALENO" << endl;
        }
    }
    else{
        cout << "NÃO É TRIÂNGULO" << endl;
    }
}