#include <iostream>
using namespace std;

class Polimorfismo
{
public:
    virtual void Dinamico()
    {
        cout << "Sou um método dinamico e posso ser sobrescrito" << endl;
    }
};

class Sobrescreve : public Polimorfismo
{
public:
    void Dinamico() override
    {
        cout << "Sobrescrevi o método Dinamico da classe Pai" << endl;
    }
};

int main()
{
    Polimorfismo *poli;
    Polimorfismo pai;
    Sobrescreve sobre;

    pai.Dinamico();

    poli = &sobre;
    poli->Dinamico();

    return 0;
}