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
//mostrar informações do usuário
void mostrar_meumes(int escolher_mes,double renda,double gasto,double saldo){
    cout << "Mês escolhido:" << escolher_mes << endl;
    cout << "Renda mensal:" << renda << endl;
    cout << "Gasto mensal:" << gasto << endl;
    cout << "Seu saldo mensal é de:" << saldo << endl;
}
//função principal
int main(){
    MeuMes meumes;
    int escolher_mes = funcao_mes(escolher_mes);
    double renda = cadastrar_renda(renda);
    double gasto = cadastrar_gasto(gasto);
    double saldo = calcular_saldo(renda,gasto,saldo);
    mostrar_meumes(escolher_mes,renda,gasto,saldo);
}