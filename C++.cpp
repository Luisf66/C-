#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int raio = 0;
    double volume = 0;
    double pi = 3.14;

    cout << "Valor do raio: " << endl;
    cin >> raio;
    volume = pi * pow(raio, 3) * 4 / 3;
    cout << "Volume = " << volume << endl;
}