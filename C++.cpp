#include <iostream>
#include <string>
using namespace std;


int main(){
    float area,lata,gastoL,gastoG,galao;
    // 1 l = 6 m 
    // 1 lata = 18 l = 80 R$ = 108 m^2
    // 1 GALÃO = 3,6 L = 25 R$ = 21,6 m^2

    cout <<"Area a ser pintada:"<< endl;
    cin >> area;
    lata = area / 108;
    galao = area / 21.6;
    gastoL = lata * 80;
    gastoG = galao * 25;
    cout << "Quant. latas:" << lata << endl;
    cout << "Quant. Galao:" << galao << endl;
    cout << "Gasto total L:" << gastoL << endl;
    cout << "Gasto total G:" << gastoG << endl;
}