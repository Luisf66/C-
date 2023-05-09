#include <iostream>
#include <string>
using namespace std;


int main(){
    float num1,num2,maior;

    cout << "Numero 1: " << endl;
    cin >> num1;
    cout << "Numero 2: " << endl;
    cin >> num2;
    if (num1 > num2){
        cout << "Numero 1 é maior" << endl;
    }
    else{
        cout << "Numero 2 é maior" << endl;
    }
}