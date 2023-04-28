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
    cout << "Dinheiro ganho no mês:" << endl;
    cin >> renda;
    return renda;
}
//cadastro do dinheiro gasto por mês
double cadastrar_gasto(double gasto){
    cout << "Dinheiro gasto no mês:" << endl;
    cin >> gasto;
    return gasto;
}
//escolha do mês
int funcao_mes(int escolher_mes){
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
    arquivo << "Renda mensal:" << renda << endl;
    arquivo << "Gasto mensal:" << gasto << endl;
    arquivo << "Seu saldo mensal é de:" << saldo << endl;
    arquivo << "-----------------" << endl;
    arquivo.close();
}
//ler arquivo .TXT
void ler_arquivo(){
    string texto;
    ifstream ler("receita.txt");
    while (getline(ler,texto)){
        cout << texto << endl;
    }
}
//função principal
int main(){
    MeuMes meumes;
    int escolher_mes = funcao_mes(escolher_mes);
    double renda = cadastrar_renda(renda);
    double gasto = cadastrar_gasto(gasto);
    double saldo = calcular_saldo(renda,gasto,saldo);
    criar_arquivo(escolher_mes,renda,gasto,saldo);
    ler_arquivo();
}