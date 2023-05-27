#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{   
    int res = 1,num;

    cout << "Num: " << endl;
    cin >> num;

    for (int i = num; i >= 1;i--)
    {
        res *= i;
    }
    cout << res;
}