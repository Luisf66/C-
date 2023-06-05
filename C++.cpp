#include <iostream>
#include <string>
#include <fstream>
#include "classes.h"

//ADICIONAR:
//ESCOLHER CAMPOS
//EDITAR 


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
    ofstream arquivo("PC2.txt");
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
}