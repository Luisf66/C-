#include <iostream>
#include <string>
using namespace std;


int main(){
    string letra[] = {"a","e","i","o","u"};
    string letra2;

    cout << "Digite uma letra: " << endl;
    cin >> letra2;
    for (int i = 0; i < 5; i++){
        if (letra2 == letra[i]){
            cout << "Vogal" << endl;
            break;
        }
        else{
            cout << "Consoante" << endl;
        }
    };
}