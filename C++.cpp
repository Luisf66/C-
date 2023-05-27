#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{   
    int num1 = 0;

    cout << "Numero 1: " << endl;
    cin >> num1;

    for (int i = 0; i < 11; i++)
    {
        cout << num1 << "X" << i << "=";
        cout << i * num1 << endl;
    }
}