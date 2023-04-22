#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <chrono>
using namespace std;
string senha;
char colecao[] = {'a','e','i','o','u'};
int gerador_aleatorio(){
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<int> dis(0, 4);
    int i = 1;
    while (i<=5){
    int aleatorio = dis(gen);
    senha = senha + colecao[aleatorio];
    i++;
    }
    return 0;
}

int main() {
    gerador_aleatorio();
    cout << senha<< endl;
    
}