#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    float anos,popA,popB,taxaA,taxaB;

    cout << "Populacao da cidade A: " << endl;
    cin >> popA;
    cout << "Populacao da cidade B: " << endl;
    cin >> popB;
    cout << "Taxa de crescimento A: " << endl;
    cin >> taxaA;
    cout << "Taxa de crescimento B: " << endl;
    cin >> taxaB;
    while (popA < popB)
    {
        popA = popA + (popA * taxaA) / 100; 
        popB = popB + (popB * taxaB) / 100;
        anos ++;
    }
    cout << "Anos: " << anos << endl;
    cout << "Populacao de A:" << popA << endl;
    cout << "Populacao de B:" << popB << endl;
}