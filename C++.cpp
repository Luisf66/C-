#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero_1;
    int numero_2;
    cin >> numero_1;
    cin >> numero_2;
    string resultado = ( numero_1 > numero_2) ? "Número 1 é maior" : "Número 1 não é maior";
    cout << resultado << endl;
    return 0;
}