#include <bits/stdc++.h>
using namespace std;

int main()
{
    //uso de classes
    class Linguagem {
        string nome;
        int ano_lancamento;

        public:
        void mensagem(string name, int ano){
            nome = name;
            ano_lancamento = ano;
            cout << "A linguagem " << nome << " foi criada em " << ano_lancamento << endl;
        };
    };

    Linguagem cplus;
    cplus.mensagem("C++", 1979);

}
