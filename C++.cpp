#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    float delta,raizp,raizn;

    cout << "Digite o primeiro valor: " << endl;
    cin >> a;
    if (a == 0){
        cout << "A equação não é de segundo grau" << endl;
        exit(0);
    }

    cout << "Digite o segundo valor: " << endl;
    cin >> b;

    cout << "Digite o terceiro valor: " << endl;
    cin >> c;
    
    delta = (b*b) - (4 * a * c);
    if (delta < 0){
        cout << "A equação não possui raizes" << endl;
        exit(0);
    }
    else if (delta == 0){
        cout << "A equação possui um raiz" << endl;
    }
    else if (delta > 0){
        cout << "A equação possui duas raiz" << endl;
    }
    raizp = (-b) + (sqrt(delta)) / (2 * a);
    raizn = (-b) - (sqrt(delta)) / (2 * a);
    cout << "DELTA: " << delta << endl;
    cout << "RAIZ +: " << raizp << endl;
    cout << "RAIZ -: " << raizn << endl;
}