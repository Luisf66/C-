#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    // variáveis //
    int opcao = 0;
    queue<string> tarefas;
    queue<string> tarefas2 = tarefas;
    string texto;
    //----------------------------------------------//
    do
    {
        //----------------------------------------------//
        cout << "---------------------------------" << endl;
        cout << "Escolha uma das opções abaixo\n";
        cout << "1 - Adicionar Tarefa\n";
        cout << "2 - Remover Tarefa\n";
        cout << "3 - Listar Tarefas\n";
        cout << "4 - Informações das Tarefas\n";
        cout << "---------------------------------" << endl;
        //----------------------------------------------//
        cin >> opcao;
        cout << "Opção escolhida: " << opcao << endl;
        cin.ignore();
        //----------------------------------------------//

        switch (opcao)
        {
        case 1:
            cout << "Adicionar Tarefa na fila\n";
            cout << "---------------------------------" << endl;
            getline(cin, texto);
            tarefas.push(texto);
            cout << "---------------------------------" << endl;
            cout << "Tarefa Adicionada\n";
            break;
        case 2:
            cout << "Remover Tarefa\n";
            tarefas.pop();
            break;
        case 3:
            tarefas2 = tarefas;
            cout << "Listar Tarefa\n";
            cout << "---------------------------------" << endl;
            while (!tarefas2.empty())
            {
                cout << tarefas2.front() << endl;
                tarefas2.pop();
            }
            break;
        case 4:
            cout << "Sua Primeira Tarefa é\n";
            cout << "---------------------------------" << endl;
            cout << tarefas.front() << endl;
            cout << "---------------------------------" << endl;
            cout << "Sua Última Tarefa é\n";
            cout << "---------------------------------" << endl;
            cout << tarefas.back() << endl;
            cout << "---------------------------------" << endl;
            cout << "Quantidade de Tarefas\n";
            cout << tarefas.size() << endl;
            break;
        default:
            cout << "Escolha uma opção válida\n";
            break;
        }
    } while (opcao != 0);
}