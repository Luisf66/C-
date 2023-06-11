#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "classes.h"

//ADICIONAR:
//ESCOLHER CAMPOS
//EDITAR 


void tela ()
{
    cout << "----------------------------" << endl;
    cout << "|-| 1-Processador        |-|" << endl;
    cout << "|-| 2-Placa de video     |-|" << endl;
    cout << "|-| 3-Ram                |-|" << endl;
    cout << "|-| 4-Placa mae          |-|" << endl;
    cout << "|-| 5-Armazenamento      |-|" << endl;
    cout << "|-| 6-Fonte              |-|" << endl;
    cout << "|-| 7-Monitor            |-|" << endl;
    cout << "|-| 8-Teclado            |-|" << endl;
    cout << "|-| 9-Mouse              |-|" << endl;
    cout << "|-| 10-Gabinete          |-|" << endl;
    cout << "|-| 11-SO                |-|" << endl;
    cout << "----------------------------" << endl;
}

void escolha ()
{   
    Processador processador;
    Placa_de_video placa_de_video;
    Ram ram;
    Placa_mae placa_mae;
    Armazenamento armazenamento;
    Fonte fonte;
    Monitor monitor;
    Teclado teclado;
    Mouse mouse;
    Gabinete gabinete;
    SO so;
    int opcao;
    ofstream arquivo("PC.txt");
    do
    {
    cout << "O que você deseja adicionar: " << endl;
    cin >> opcao;
    cin.ignore();
    
    switch (opcao)
    {
    case 1:
        processador.definir();
        processador.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 2:
        placa_de_video.definir();
        placa_de_video.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 3:
        ram.definir();
        ram.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 4:
        placa_mae.definir();
        placa_mae.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 5:
        armazenamento.definir();
        armazenamento.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 6:
        fonte.definir();
        fonte.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 7:
        monitor.definir();
        monitor.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 8:
        teclado.definir();
        teclado.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 9:
        mouse.definir();
        mouse.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 10:
        gabinete.definir();
        gabinete.salvar_dados(arquivo);
        arquivo.close();
    break;

    case 11:
        so.definir();
        so.salvar_dados(arquivo);
        arquivo.close();
    break;
    default:
        cout << "Opção inválida" << endl;
    break;
    }
    } while (opcao != 0);
}

double somar_saldos()
{
    string linha;
    ifstream arquivo("PC.txt");
    double saldo_mensal, saldo_total = 0;
    while (getline(arquivo, linha))
    {
        if (linha.find("Valor: ") != string::npos)
        {
            int pos = linha.find(":") + 1;
            saldo_mensal = stod(linha.substr(pos));
            saldo_total = saldo_total + saldo_mensal;
        }
    }
    cout << "Seu PC irá custar: " << saldo_total << endl;
    arquivo.close();
    return saldo_mensal;
}

int main()
{   
    tela();
    escolha();
    somar_saldos();
}