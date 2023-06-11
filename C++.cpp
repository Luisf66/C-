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
    int opcao = 1;
    int* lista_de_componentes = new int[11];
    int i = 0;

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
    do 
    {
        cout << "Digite o componente a ser adiconado: " << endl;
        cin >> opcao;
        lista_de_componentes[i] = opcao;
        i++;

    } while (opcao != 0);

    for (int a = 0; a < i-1; a++)
    {
        cout << "Componentes da lista: " << lista_de_componentes[a] << endl;
    }
    delete[] lista_de_componentes;
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
    /*
    ////////////////////////
    Processador processador;
    processador.definir();
    ////////////////////////
    Placa_de_video placa_de_video;
    placa_de_video.definir();
    ////////////////////////
    Ram ram;
    ram.definir();
    ////////////////////////
    Placa_mae placa_mae;
    placa_mae.definir();
    ////////////////////////
    Armazenamento armazenamento;
    armazenamento.definir();
    ////////////////////////
    Fonte fonte;
    fonte.definir();
    ////////////////////////
    Monitor monitor;
    monitor.definir();
    ////////////////////////
    Teclado teclado;
    teclado.definir();
    ////////////////////////
    Mouse mouse;
    mouse.definir();
    ////////////////////////
    Gabinete gabinete;
    gabinete.definir();
    ////////////////////////
    SO so;
    so.definir();
    ////////////////////////
    ofstream arquivo("PC.txt");
    if (arquivo.is_open())
    {
        processador.salvar_dados(arquivo);
        placa_de_video.salvar_dados(arquivo);
        ram.salvar_dados(arquivo);
        placa_mae.salvar_dados(arquivo);
        armazenamento.salvar_dados(arquivo);
        fonte.salvar_dados(arquivo);
        monitor.salvar_dados(arquivo);
        teclado.salvar_dados(arquivo);
        mouse.salvar_dados(arquivo);
        gabinete.salvar_dados(arquivo);
        so.salvar_dados(arquivo);
        arquivo.close();
    };
    
    somar_saldos();
    */
   tela();
}