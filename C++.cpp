#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <chrono>
using namespace std;

int gerador_aleatorio(){
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<int> dis(1, 50);
    int i = 1;
    while (i<=5){
    int aleatorio = dis(gen);
    cout << "O número aleatório gerado é: " << aleatorio << endl;
    i++;
    }
    return 0;
}

int main() {
    gerador_aleatorio();
}