#include <iostream>
#include <string>
#include <fstream>

using namespace std;

   class PC
   {
        //ATRIBUTOS
        private:
        string processador;
        string placa_de_video;
        string ram;
        string placa_mae; 
        string armazenamento;
        string fonte;
        string monitor;
        string teclado;
        string mouse;
        string gabinete;
        string SO;
        string valor;
        //MÉTODOS
        public:
        PC () 
        {
            cout << "Preencha abaixo os campos com as especificações do seu PC: " << endl;
        }
        void define_processador ()
        {
            cout << "Qual processador você deseja utilizar: " << endl;
            getline(cin,processador);
        }
        void define_placa_de_video ()
        {
            cout << "Qual placa de video você deseja utilizar: " << endl;
            getline(cin,placa_de_video);
        }
        void define_ram ()
        {
            cout << "Qual memoria RAM você deseja utilizar: " << endl;
            getline(cin,ram);
        }
        void define_placa_mae ()
        {
            cout << "Qual placa mae você deseja utilizar: " << endl;
            getline(cin,placa_mae);
        }
        void define_armazenamento ()
        {
            cout << "Qual armazenamento você deseja utilizar: " << endl;
            getline(cin,armazenamento);
        }
        void define_fonte ()
        {
            cout << "Qual fonte você deseja utilizar: " << endl;
            getline(cin,fonte);
        }
        void define_monitor ()
        {
            cout << "Qual monitor você deseja utilizar: " << endl;
            getline(cin,monitor);
        }
        void define_teclado ()
        {
            cout << "Qual teclado você deseja utilizar: " << endl;
            getline(cin,teclado);
        }
        void define_mouse ()
        {
            cout << "Qual mouse você deseja utilizar: " << endl;
            getline(cin,mouse);
        }
        void define_gabinete ()
        {
            cout << "Qual gabinete você deseja utilizar: " << endl;
            getline(cin,gabinete);
        }
        void define_SO ()
        {
            cout << "Qual SO você deseja utilizar: " << endl;
            getline(cin,SO);
        }
        void define_valor ()
        {
            cout << "Valor gasto: " << endl;
            getline(cin,valor);
        }
        void exibir ()
        {
            cout << "Processador: " << processador << endl;
            cout << "Placa de video: " << placa_de_video << endl;
            cout << "RAM: " << ram << endl;
            cout << "Placa mae: " << placa_mae << endl;
            cout << "Armazenamento: " << armazenamento << endl;
            cout << "Fonte: " << fonte << endl;
            cout << "Monitor: " << monitor << endl;
            cout << "Teclado: " << teclado << endl;
            cout << "Mouse: " << mouse << endl;
            cout << "Gabinete: " << gabinete << endl;
            cout << "Sistema Operacional: " << SO << endl;
            cout << "Valor: " << valor << endl;

        }
        void salvar ()
        {
            ofstream especificacoes("PC.txt");
            if (especificacoes.is_open())
            {
                especificacoes << "Componentes Do PC" << endl;
                especificacoes << "Processador: " << processador << endl;
                especificacoes << "Placa de video: " << placa_de_video << endl;
                especificacoes << "RAM: " << ram << endl;
                especificacoes << "Placa mae: " << placa_mae << endl;
                especificacoes << "Armazenamento: " << armazenamento << endl;
                especificacoes << "Fonte: " << fonte << endl;
                especificacoes << "Monitor: " << monitor << endl;
                especificacoes << "Teclado: " << teclado << endl;
                especificacoes << "Mouse: " << mouse << endl;
                especificacoes << "Gabinete: " << gabinete << endl;
                especificacoes << "Sistema Operacional: " << SO << endl;
                especificacoes << "Valor: " << valor << endl;
                especificacoes.close();
            }
            else
            {
                cout << "Dados não cadastrados..." << endl;
            }
        }
    };

int main()
{   
    PC meuPC;

    meuPC.define_processador();
    meuPC.define_placa_de_video();
    meuPC.define_ram();
    meuPC.define_placa_mae();
    meuPC.define_armazenamento();
    meuPC.define_fonte();
    meuPC.define_monitor();
    meuPC.define_teclado();
    meuPC.define_mouse();
    meuPC.define_gabinete();
    meuPC.define_SO();
    meuPC.define_valor();
    meuPC.salvar();
}