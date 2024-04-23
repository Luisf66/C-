#include <iostream>
using namespace std;

//PROTOTIPO
    int fatorial(int num);
//PROTOTIPO

int main()
{
    int fat = 0;
    fat = fatorial(3);
    cout << fat << endl;
    return 0;
}

// FATORIAL
int fatorial(int num) 
{
    return (num == 0) ?  1 :  num * fatorial(num - 1);  
}
// FATORIAL