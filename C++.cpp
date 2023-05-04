#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//classe contendo informações do usuário
class MeuMes {
    double renda;
    double gasto;
    double saldo;
    int escolher_mes;
};
//cadastro do dinheiro ganho por mês
double cadastrar_renda(double renda){
    cout << "-----------------" << endl;
    cout << "Dinheiro ganho no mês:" << endl;
    cin >> renda;
    return renda;
}
//cadastro do dinheiro gasto por mês
double cadastrar_gasto(double gasto){
    cout << "-----------------" << endl;
    cout << "Dinheiro gasto no mês:" << endl;
    cin >> gasto;
    return gasto;
}
//escolha do mês
int define_mes(int escolher_mes){
    cout << "-----------------" << endl;
    cout << "Informe o mês" << endl;
    cin >> escolher_mes;
    return escolher_mes;
}
//calculo do saldo do usuário naquele mês
double calcular_saldo(double renda,double gasto,double saldo){
    saldo = renda - gasto;
    return saldo;
}
//criar arquivo .TXT
void criar_arquivo(int escolher_mes,double renda,double gasto,double saldo){
    ofstream arquivo("receita.txt",ios::app);
    arquivo << "-----------------" << endl;
    arquivo << "Mês escolhido:" << escolher_mes << endl;
    arquivo << "-----------------" << endl;
    arquivo << "Renda mensal:" << renda << endl;
    arquivo << "-----------------" << endl;
    arquivo << "Gasto mensal:" << gasto << endl;
    arquivo << "-----------------" << endl;
    arquivo << "Saldo mensal:" << saldo << endl;
    arquivo.close();
}
//ler arquivo .TXT
void ler_arquivo(){
    string texto;
    ifstream arquivo("receita.txt");
    while (getline(arquivo,texto)){
        cout << texto << endl;
    }
    arquivo.close();
}
//buscar mês no arquivo
int buscar_mes(int mes_escolhido){
    string linha;
    ifstream arquivo("receita.txt");
    bool mes_encontrado = false;
    cout << "Infrome o mês desejado:" << endl;
    cin >> mes_escolhido;
    while (getline(arquivo, linha)){
        if (linha.find("Mês escolhido:" + to_string(mes_escolhido)) != string::npos){
            cout << linha << endl;
            for (int i = 0; i < 6; i++){
                getline(arquivo, linha);
                cout << linha << endl;
            }
            mes_encontrado = true;
            break;
        }
    }
    if (!mes_encontrado){
        cout << "Mês não encontrado." << endl;
    }
    arquivo.close();
    return mes_encontrado;
}
//somar saldos
double somar_saldos(){
    string linha;
    ifstream arquivo("receita.txt");
    double saldo_mensal;
    double saldo_total = 0;
    while (getline(arquivo, linha)){
        if (linha.find("Saldo mensal:") != string::npos){
            int pos = linha.find(":") + 1;
            saldo_mensal = stod(linha.substr(pos));
            saldo_total = saldo_total + saldo_mensal;
        }
    }
    cout << "Saldo total: " << saldo_total << endl;
    arquivo.close();
    return saldo_mensal;
}
//interface
int interface(){
    int opcao;
    cout << "----------------------" << endl;
    cout << "| Programa de Gestão |" << endl;
    cout << "|     De Finanças    |" << endl;
    cout << "----------------------" << endl;
    cout << "| 1- EXECUTAR        |" << endl;
    cout << "| 2- BUSCAR MÊS      |" << endl;
    cout << "| 3- LER ARQUIVO     |" << endl;
    cout << "| 4- DELETAR ARQUIVO |" << endl;
    cout << "----------------------" << endl;
    cin >> opcao;
    switch (opcao){
        case 1:
            int escolher_mes;
            escolher_mes = define_mes(escolher_mes);
            double renda;
            renda = cadastrar_renda(renda);
            double gasto;
            gasto = cadastrar_gasto(gasto);
            double saldo;
            saldo = calcular_saldo(renda,gasto,saldo);
            criar_arquivo(escolher_mes,renda,gasto,saldo);
            break;
        case 2:
            int busca_mes;
            busca_mes = buscar_mes(escolher_mes);
            break;
        case 3:
            ler_arquivo();
            break;
        case 4:
            double saldo_total;
            saldo_total = somar_saldos();
            break;
        default:
            cout << "Nenhuma opção válida selecionada" << endl;
            break;
    }
    return 0;
}
//função principal
int main(){
    int repetir;
    MeuMes meumes;
    do{
        interface();
        cout << "Executar novamente 1=Sim 0=Não:" << endl;
        cin >> repetir;
    }while ( repetir != 0);
}