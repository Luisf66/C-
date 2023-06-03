#include <iostream>
#include <string>
#include <fstream>

using namespace std;
    class componente 
    {
        private:
        string tipo;
        string modelo;
        string valor;
        public:
        void define_tipo ()
        {
            cout << "Tipo de componente: " << endl;
            getline(cin,tipo);
        }
        void define_modelo ()
        {
            cout << "Modelo do componente: " << endl;
            getline(cin,modelo);
        }
        void define_valor ()
        {
            cout << "Valor do componente: " << endl;
            getline(cin,valor);
        } 
        void salvar_dados(ofstream& arquivo)
        {
        arquivo << "Tipo: " << tipo << endl;
        arquivo << "Modelo: " << modelo << endl;
        arquivo << "Valor: " << valor << endl;
        arquivo << endl;
        }
    };

    class Processador : public componente
    {
        public:
        Processador (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações da CPU: " << endl;
            cout << "----------------------" << endl;
        }
    };

    class Placa_de_video : public componente
    {
        public:
        Placa_de_video (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações da GPU: " << endl;
            cout << "----------------------" << endl;
        }
    };

    class Ram : public componente
    {
        public:
        Ram (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações da RAM: " << endl;
            cout << "----------------------" << endl;
        }};

    class Placa_mae : public componente
    {
        public:
        Placa_mae (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações da placa mãe: " << endl;
            cout << "----------------------" << endl;
        }
    };

    class Armazenamento : public componente
    {
        public:
        Armazenamento (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações do armazenamento: " << endl;
            cout << "----------------------" << endl;
        }};

    class Fonte : public componente
    {
        public:
        Fonte (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações da fonte: " << endl;
            cout << "----------------------" << endl;
        }};

    class Monitor : public componente
    {
        public:
        Monitor (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações do monitor: " << endl;
            cout << "----------------------" << endl;
        }};

    class Teclado : public componente
    {
        public:
        Teclado (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações do teclado: " << endl;
            cout << "----------------------" << endl;
        }};

    class Mouse : public componente
    {
        public:
        Mouse (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações do mouse: " << endl;
            cout << "----------------------" << endl;
        }};

    class Gabinete : public componente
    {
        public:
        Gabinete (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações do gabinete: " << endl;
            cout << "----------------------" << endl;
        }};

    class SO : public componente
    {
        public:
        SO (): componente() {
            cout << "----------------------" << endl;
            cout << "Informações do Sistema Operacional: " << endl;
            cout << "----------------------" << endl;
        }};

int main()
{   
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
    if (arquivo.is_open()) {
        processador.salvar_dados(arquivo);
        placa_de_video.salvar_dados(arquivo);
        ram.salvar_dados(arquivo);
        armazenamento.salvar_dados(arquivo);
        fonte.salvar_dados(arquivo);
        monitor.salvar_dados(arquivo);
        teclado.salvar_dados(arquivo);
        mouse.salvar_dados(arquivo);
        gabinete.salvar_dados(arquivo);
        so.salvar_dados(arquivo);

        arquivo.close();
};
}