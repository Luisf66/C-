#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uso de funções lambda
    auto media = [](vector<double> numeros) -> double
    {
        double somar = 0;

        for (double i: numeros) {
            somar += i;
        }
        return somar / numeros.size();
    };

    cout << "Média : " << media({7, 6.9, 9.1, 8.4, 3.1,9.2}) << endl;
}