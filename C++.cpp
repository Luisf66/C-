#include <iostream>
#include <string>
using namespace std;


int main(){
    int teste[] = {2,3,5,7};
    int num;
    cout << "Digite um numero: " << endl;
    cin >> num;
    for (int i = 0; i < 4; i++){
        if (num % teste[i] == 0){
            cout << "Normal" << endl;
            break;
        }
        else{
            cout << "Primo" << endl;
        }
    };
}