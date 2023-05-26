#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int popA = 80000;
    int popB = 200000;
    float anos;

    while (popA < popB)
    {
        popA = popA + (popA * 3) / 100; 
        popB = popB + (popA * 1.5) / 100;
        anos ++;
    }
    cout << "Anos: " << anos << endl;
    cout << "Populacao de A:" << popA << endl;
    cout << "Populacao de B:" << popB << endl;
}