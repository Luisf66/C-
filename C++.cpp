#include <iostream>
#include <string>
using namespace std;


int main(){
    int variavel = 10;
    int* ponteiro_variavel;

    ponteiro_variavel = &variavel;
    *ponteiro_variavel = 15;
    cout << variavel << endl;
    cout << *ponteiro_variavel << endl;
}