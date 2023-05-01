#include <iostream>
#include <string>
using namespace std;

void troca_valor(int* vetor){
    for (int i = 0; i < 10; i++){
        int a = 5;
        int soma = soma + a;
        *(vetor + i) = soma;
        cout << *(vetor + i) << endl;
    }
}

int main(){
    int* vetor = new int[10];
    troca_valor(vetor);
}