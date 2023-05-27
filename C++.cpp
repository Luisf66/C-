#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    float anos,popA,popB,taxaA,taxaB;

    cout << "Populacao da cidade A: " << endl;
    scanf("%f", &popA);
    cout << "Populacao da cidade B: " << endl;
    scanf("%f", &popB);
    cout << "Taxa de crescimento A: " << endl;
    scanf("%f", &taxaA);
    cout << "Taxa de crescimento B: " << endl;
    scanf("%f", &taxaB);
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