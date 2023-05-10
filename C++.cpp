#include <iostream>
#include <string>

using namespace std;


int main(){
    float nota1,nota2,media;

    cout << "Nota 1:" << endl;
    cin >> nota1;
    cout << "Nota 2:" << endl;
    cin >> nota2;
    media = (nota1 + nota2) / 2;
    cout << "Media:" << media << endl;
    if (media == 10){
        cout << "Aprovado com Distincao: " << endl;
    }
    else if(media > 7){
        cout << "Aprovado: " <<  endl;
    }
    else{
        cout << "Reprovado: " << endl;
    }
    
}