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

    class Processador : public componente{};

    class Placa_de_video : public componente{};

    class Ram : public componente{};

    class Placa_mae : public componente{};

    class Armazenamento : public componente{};

    class Fonte : public componente{};

    class Monitor : public componente{};

    class Teclado : public componente{};

    class Mouse : public componente{};

    class Gabinete : public componente{};

    class SO : public componente{};