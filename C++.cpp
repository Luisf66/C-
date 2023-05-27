#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{   
    int num1,num2;

    cout << "Numero 1: " << endl;
    cin >> num1;
    cout << "Numero 2: " << endl;
    cin >> num2;

    for (int i = num1 + 1; i < num2; i++)
    {
        cout << i << endl;
    }
}