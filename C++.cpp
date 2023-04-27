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
    cout << "Renda mensal:" << renda << endl;
    return renda;
}
//cadastro do dinheiro gasto por mês
double cadastrar_gasto(double gasto){
    cout << "Dinheiro gasto no mês:" << endl;
    cin >> gasto;
    cout << "Gasto mensal:" << gasto << endl;
    return gasto;
}
//escolha do mês
int funcao_mes(int escolher_mes){
    cout << "Informe o mês" << endl;
    cin >> escolher_mes;
    cout << "Mês escolhido:" << escolher_mes << endl;
    return escolher_mes;
}
//calculo do saldo do usuário naquele mês
double calcular_saldo(double renda,double gasto,double saldo){
    saldo = renda - gasto;
    cout << "Seu saldo mensal é de:" << saldo << endl;
    return 0;
}

//função principal
int main(){
    MeuMes meumes;
    int mes = funcao_mes(mes);
    double renda = cadastrar_renda(renda);
    double gasto = cadastrar_gasto(gasto);
    double saldo = calcular_saldo(renda,gasto,saldo);
}