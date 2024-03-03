#include <iostream>

using namespace std;

int main()
{
     int DDD = 0;
     bool achado = false;
     cin >> DDD;
     int DDDs[] = {61, 71, 11, 21, 32, 19, 27, 31};
     string cidades[] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};

     for (int i = 0; i < 8; i++)
     {
          if (DDD == DDDs[i])
          {
               cout << cidades[i] << endl;
               achado = true;
          }
     }
     if (achado != true) {
          cout << "DDD nao cadastrado" << endl;
     }

     return 0;
}