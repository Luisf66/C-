#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void shuffleArray(int arr[], int n) {
    srand(time(NULL));
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    LARGE_INTEGER start, end, frequency;
    double elapsed_time;

    // Obter a frequência do contador de desempenho
    QueryPerformanceFrequency(&frequency);

    // Iniciar a contagem do tempo
    QueryPerformanceCounter(&start);

    int n = 3000;
    
    int arr[3000];
    for (int i = 0; i < 3000; i++) {
        arr[i] = i;
    }
    
    shuffleArray(arr, 3000);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        vetor[i] = arr[i];
    }

    //printf("Vetor original: ");
    //printArray(vetor, n);

    selectionSort(vetor, n);

    QueryPerformanceCounter(&end);

    // Calcular o tempo decorrido em segundos
    elapsed_time = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    printf("Tempo de execução: %.6f segundos\n", elapsed_time);

    //printf("Vetor ordenado: ");
    //printArray(vetor, n);

    return 0;
}
