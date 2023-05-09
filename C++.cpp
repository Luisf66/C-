#include <iostream>
#include <string>
using namespace std;

int main(){
    float area,lata,gasto;
    // 1 lata = 54 m = 80 R$

    cout <<"Area a ser pintada:"<< endl;
    cin >> area;
    lata = area / 54;
    gasto = lata * 80;
    cout << "Quant. latas:" << lata << endl;
    cout << "Gasto total:" << gasto << endl;
}