#include <iostream>
#include <string>
using namespace std;


int main(){
    string letra;

    cout << "Digite uma letra: " << endl;
    cin >> letra;
    if (letra == "F" || letra == "f"){
        cout << "Feminino" << endl; 
    }
    else if (letra == "M" || letra == "m"){
        cout << "Masculino" << endl; 
    }
    else{
        cout << "Indefinido" << endl; 
    }
}