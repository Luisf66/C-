#include <iostream>
#include <string>
#include <fstream>

using namespace std;
    class componente 
    {
        private:
        string tipo;
        string modelo;
        double valor;
        public:
        void definir ()
        {
            cout << "Tipo de componente: " << endl;
            getline(cin,tipo);
            cout << "Modelo do componente: " << endl;
            getline(cin,modelo);
            cout << "Valor do componente: " << endl;
            cin >> valor;
            cin.ignore();
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