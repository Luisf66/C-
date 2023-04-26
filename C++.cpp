#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <chrono>
using namespace std;
//
// variavel universal : senha
string senha;
//
// Vetor com componentes da senha
char vogal[] = {'a','e','i','o','u'};
char consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
char numero[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//
//gerador de senha 
int gerador_aleatorio(){
    int i = 1;
    int digitos;
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    mt19937 gen(seed);
    uniform_int_distribution<int> v(0, 4);
    uniform_int_distribution<int> c(0, 20);
    uniform_int_distribution<int> n(0, 9);
    cout << "Como Usar O Programa:" << endl;
    cout << "______________________________" << endl; 
    cout << "|                            |" << endl; 
    cout << "| Digitos = 1 : Tamanho = 3  |" << endl; 
    cout << "| Digitos = 2 : Tamanho = 6  |" << endl;  
    cout << "| Digitos = 3 : Tamanho = 9  |" << endl;  
    cout << "| Digitos = 4 : Tamanho = 12 |" << endl;  
    cout << "| Digitos = 5 : Tamanho = 15 |" << endl;  
    cout << "|____________________________|" << endl; 
    cout << "Insira a quantidade de digitos desejada na senha:" << endl;
    cin >> digitos;
    //scanf("%i", digitos);
    while (i<= digitos){
        int aleatorio_v = v(gen);
        int aleatorio_c = c(gen);
        int aleatorio_n = n(gen);
        senha = senha + vogal[aleatorio_v]+ consoantes[aleatorio_c]+ numero[aleatorio_n];
        i++;
    }
    return 0;
}


int main() {
    gerador_aleatorio();
    cout << senha<< endl;
    
}