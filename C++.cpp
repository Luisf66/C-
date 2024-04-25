#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Declaração de Variáveis
    float saldo = 0;    // armazena o saldo do usuário
    float operacao = 0; // armazena os valores para as operações
    int opcao = 0;      // escolhe dentre as opções
    do
    {
        // Opções
        cout << "Escolha uma opção abaixo" << endl;
        cout << "1 - Depositar" << endl;
        cout << "2 - Sacar" << endl;
        cout << "3 - Ver Saldo " << endl;
        cout << "4 - Finalizar" << endl;
        cin >> opcao; // Requisição de uma opção
        // Operações de cada opção
        switch (opcao)
        {
        case 1: // realiza o deposito do valor na variável operacao
            cout << "Seu Saldo é de: " << saldo << endl;
            cout << "Digite o valor do deposito: " << endl;
            cin >> operacao;
            saldo = saldo + operacao;
            cout << "Seu Saldo é de: " << saldo << endl;
            cout << "Operação Finalizada" << endl;
            break;
        case 2: // realiza o saque do valor na variável operacao
            cout << "Seu Saldo é de: " << saldo << endl;
            cout << "Digite o valor do saque: " << endl;
            cin >> operacao;
            if (saldo > operacao) // verifica se há saldo disponível para transação
            {
                saldo = saldo - operacao;
                cout << "Operação Bem Sucedida\n";
            }
            else
            {
                cout << "Operação Não Realizada...\n";
                cout << "Saldo insulficiente\n";
            }
            cout << "Seu Saldo é de: " << saldo << endl;
            cout << "Operação Finalizada" << endl;
            break;
        case 3: // mostra o valor de saldo
            cout << "Seu Saldo é de: " << saldo << endl;
            cout << "Operação Finalizada" << endl;
            break;
        case 4: // encerra o programa
            cout << "Operação Finalizada" << endl;
            break;
        default:
            cout << "Selecione uma opção válida\n";
            break;
        }
    } while (opcao != 4);
    return 0;
}