#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{   
    float media;
    int soma = 0;
    int num[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cout << "Numero " << i << ": "<< endl;
        cin >> num[i];
        soma = soma + num[i];
        cout << "Soma: " << soma;
    }
    media = soma / 5;
    cout << "Media: " << media;
}