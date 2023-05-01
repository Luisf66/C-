#include <iostream>
#include <string>
using namespace std;

void troca_valor(int* vetor){
    *(vetor + 0) = 3;
}

int main(){
    int* vetor = new int[10];

    troca_valor(vetor);
    cout << *(vetor + 0) << endl;
}