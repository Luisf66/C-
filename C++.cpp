#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uso de classes
    class Estudante
    {
    private:
        string nome;
        string curso;
        int idade = 0;

    public:
        void Preencher_dados()
        {
            cout << "Nome: " << endl;
            cin >> nome;
            cout << "Curso: " << endl;
            cin >> curso;
            cout << "Idade: " << endl;
            cin >> idade;
        }
        void Exibir_dados()
        {
            cout << nome << " estuda no curso de " << curso << " e tem " << idade << " anos";
        }
    };
    //-------------------------------------------------------------------------------------------------------//
    class Trabalhador : public Estudante
    {
    public:
        void Trabalho()
        {
            cout << " e tambem trabalha" << endl;
        }
    };
    //-------------------------------------------------------------------------------------------------------//
    Trabalhador aluno;
    aluno.Preencher_dados();
    aluno.Exibir_dados();
    aluno.Trabalho();
}
