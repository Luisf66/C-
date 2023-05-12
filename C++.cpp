#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int ano;

    cout << "Digite o ano: " << endl;
    cin >> ano;

    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
        cout << "BISSEXTO" << endl;
    }
    else{
        cout << "NORMAL" << endl;
    }
}