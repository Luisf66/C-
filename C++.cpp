#include <iostream>
#include <string>

using namespace std;

int main(){
    string turno;
    cout << "Turno:(M-V-N)" << endl;
    cin >> turno;
    if (turno == "M"){
        cout << "Bom dia" << endl;
    }
    else if (turno == "V"){
        cout << "Boa tarde" << endl;
    }
    else if (turno == "N"){
        cout << "Boa Noite" << endl;
    }
    else{
        cout << "Invalido" << endl;
    }
}