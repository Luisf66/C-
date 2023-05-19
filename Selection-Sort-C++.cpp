#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Uso: programa <tamanho_do_vetor> <valor_adicionado> <valor_final_do_vetor>" << endl;
        return 1;
    }

    int tamanhoInicial = stoi(argv[1]);
    int valorAdicionado = stoi(argv[2]);
    int valorFinal = stoi(argv[3]);

    ofstream arquivo("tempos_execucao.txt", ios::app); // Abre o arquivo no modo de append

    for (int tamanho = tamanhoInicial; tamanho <= valorFinal; tamanho += valorAdicionado) {
        int* vetor = new int[tamanho];
        for (int i = 0; i < tamanho; ++i) {
            vetor[i] = i;
        }

        auto start = high_resolution_clock::now(); // Marca o tempo de início

        selectionSort(vetor, tamanho); // Executa o Selection Sort no vetor

        auto stop = high_resolution_clock::now(); // Marca o tempo de término
        auto duration = duration_cast<nanoseconds>(stop - start); // Calcula a duração em nanossegundos

        arquivo << duration.count() << endl; // Grava o tempo de execução no arquivo

        delete[] vetor; // Libera a memória alocada para o vetor
    }

    arquivo.close(); // Fecha o arquivo

    return 0;
}
