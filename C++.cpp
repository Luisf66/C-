#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero_1;
    int numero_2;
    cin >> numero_1;
    cin >> numero_2;
    if ( numero_1 > numero_2){
        cout << "O número 1 é maior que o 2" << endl;
    } else {
        cout << "O número 1 não é maior que o 2" << endl;
    }
    return 0;
}