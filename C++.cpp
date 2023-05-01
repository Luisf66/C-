#include <iostream>
#include <string>
using namespace std;

void troca_valor(int* valor){
    *valor = 55;
}

int main(){
    int variavel = 10;
    troca_valor(&variavel);
    cout << variavel << endl;
}