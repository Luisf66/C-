#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int escolha = 0;      // variável para seleção das opções
    stack<string> pratos; // pilha de prato
    do
    {
        cout << "Escolha entre:" << endl;
        cout << "1- Adicionar Prato" << endl;
        cout << "2- Remover Prato" << endl;
        cout << "3- Ver tamanho da pilha" << endl;
        cout << "4- Verificar pilha vazia" << endl;
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            pratos.push("Prato Adicionado");
            cout << "Prato Adicionado" << endl;
            break;
        case 2:
            pratos.pop();
            cout << "Prato Removido" << endl;
            break;
        case 3:
            cout << "Tamanho da Pilha: ";
            cout << pratos.size();
            break;
        case 4:
            !pratos.empty() ? cout << "Pilha com Prato\n" : cout << "Pilha vazia\n";
            break;
        default:
            break;
        }
    } while (escolha != 0);
    return 0;
}
