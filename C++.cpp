#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    // variáveis //
    int opcao = 0;
    stack<string> tarefas;
    stack<string> tarefas2 = tarefas;
    string texto;
    //----------------------------------------------//
    do
    {
        //----------------------------------------------//
        cout << "Escolha uma das opções abaixo\n";
        cout << "1 - Adicionar Tarefa\n";
        cout << "2 - Remover Tarefa\n";
        cout << "3 - Listar Tarefas\n";
        cout << "4 - Copiar pilha 1 para 2\n";
        //----------------------------------------------//
        cin >> opcao;
        cout << "Opção escolhida: " << opcao << endl;
        cin.ignore();
        //----------------------------------------------//

        switch (opcao)
        {
        case 1:
            cout << "Adicionar Tarefa\n";
            getline(cin, texto);
            tarefas.push(texto);
            cout << "Tarefa Adicionada\n";
            break;
        case 2:
            cout << "Remover Tarefa\n";
            tarefas.pop();
            break;
        case 3:
            cout << "Listar Tarefa\n";
            while (!tarefas2.empty())
            {
                cout << tarefas2.top() << endl;
                tarefas2.pop();
            }
            break;
        case 4:
            cout << "Copiando pilha\n";
            tarefas2 = tarefas;
            break;
        default:
            cout << "Escolha uma opção válida\n";
            break;
        }
    } while (opcao != 0);
}