#include <iostream>
#include <string>

using namespace std;


int main(){
    float num1,num2,num3;

    cout << "Numero 1:" << endl;
    cin >> num1;
    cout << "Numero 2:" << endl;
    cin >> num2;
    cout << "Numero 3:" << endl;
    cin >> num3;
    if (num1 > num2 && num2 > num3){
        cout << "Numero 1 maior " << endl;
        cout << "Numero 3 menor " << endl;
    }
    else if(num2 > num1 && num1 > num3){
        cout << "Numero 2 maior " << endl;
        cout << "Numero 3 menor " << endl;
    }
    else if(num3 > num1 && num1 > num2){
        cout << "Numero 3 maior " << endl;
        cout << "Numero 2 menor " << endl;
    }
    else if(num1 > num3 && num3 > num2){
        cout << "Numero 1 maior " << endl;
        cout << "Numero 2 menor " << endl;
    }
    else if(num2 > num3 && num3 > num1){
        cout << "Numero 2 maior " << endl;
        cout << "Numero 1 menor " << endl;
    }
    else if(num3 > num2 && num2 > num1){
        cout << "Numero 3 maior " << endl;
        cout << "Numero 1 menor " << endl;
    }
}