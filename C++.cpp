#include <iostream>
#include <string>
using namespace std;


int main(){
    float tamanhoMB,velocidadeMB,tempo;

    cout << "Tamanho do arquivo: " << endl;
    cin >> tamanhoMB;
    cout << "Velocidade da conexão: " << endl;
    cin >> velocidadeMB;
    tempo = (tamanhoMB * 8 ) / velocidadeMB;
    cout << "Tempo estimado:" << tempo <<  endl;
}