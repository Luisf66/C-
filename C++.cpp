#include <iostream>
#include <string>
using namespace std;

int main(){
    int num1,num2;
    float num3,R1,R2,R3;

    cout << "Digite um inteiro:" << endl;
    cin >> num1;
    cout << "Digite outro inteiro:" << endl;
    cin >> num2;
    cout << "Digite um real:" << endl;
    cin >> num3;
    R1 = (num1*2) * (num2/2);
    R2 = (num1*3) + num3;
    R3 = num3*num3*num3;
    cout << "Resultado 1: " << R1 << endl;
    cout << "Resultado 2: " << R2 << endl;
    cout << "Resultado 3: " << R3 << endl;
}