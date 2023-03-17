#include <iostream>
#include <string>
using namespace std;

int main(){
    int numero_1;
    cin >> numero_1;
    switch (numero_1){
        case 88:
            cout << "Maior" << endl;
            break;
        case 86:
            cout << "Menor" << endl;
            break;
        default:
            cout << "Impossivel comparar" << endl;
    }
    return 0;
}