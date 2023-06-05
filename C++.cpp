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
    cout << "Saldo total: " << saldo_total << endl;
    arquivo.close();
    return saldo_mensal;
}

int main()
{   /*
    ////////////////////////
    Processador processador;
    processador.define_modelo();
    processador.define_tipo();
    processador.define_valor();
    ////////////////////////
    Placa_de_video placa_de_video;
    placa_de_video.define_modelo();
    placa_de_video.define_tipo();
    placa_de_video.define_valor();
    ////////////////////////
    Ram ram;
    ram.define_modelo();
    ram.define_tipo();
    ram.define_valor();
    ////////////////////////
    Placa_mae placa_mae;
    placa_mae.define_modelo();
    placa_mae.define_tipo();
    placa_mae.define_valor();
    ////////////////////////
    Armazenamento armazenamento;
    armazenamento.define_modelo();
    armazenamento.define_tipo();
    armazenamento.define_valor();
    ////////////////////////
    Fonte fonte;
    fonte.define_modelo();
    fonte.define_tipo();
    fonte.define_valor();
    ////////////////////////
    Monitor monitor;
    monitor.define_modelo();
    monitor.define_tipo();
    monitor.define_valor();
    ////////////////////////
    Teclado teclado;
    teclado.define_modelo();
    teclado.define_tipo();
    teclado.define_valor();
    ////////////////////////
    Mouse mouse;
    mouse.define_modelo();
    mouse.define_tipo();
    mouse.define_valor();
    ////////////////////////
    Gabinete gabinete;
    gabinete.define_modelo();
    gabinete.define_tipo();
    gabinete.define_valor();
    ////////////////////////
    SO so;
    so.define_modelo();
    so.define_tipo();
    so.define_valor();
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
    };*/
    somar_saldos();
}