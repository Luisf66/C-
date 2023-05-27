#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{   
    int num[5] = {};
    for (int i = 1; i < 6; i++)
    {
        cout << "Numero " << i << ": "<< endl;
        cin >> num[i];
        int max = 0;
        for (int i = 1; i < 5; i++)
        {
            if (num[i] > max)
            {
                max = num[i];
            }
        }
        cout << "Maior numero: " << max << endl;
    }
}