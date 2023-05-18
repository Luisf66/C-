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

    QueryPerformanceFrequency(&frequency);

    int n = 3000;
    int arr[3000];
    for (int i = 0; i < 3000; i++) {
        arr[i] = i;
    }

    int repetitions;
    printf("Digite o número de repetições desejado: ");
    scanf("%d", &repetitions);

    FILE *file = fopen("tempos_execucao.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < repetitions; i++) {
        shuffleArray(arr, 3000);

        int vetor[n];
        for (int j = 0; j < n; j++) {
            vetor[j] = arr[j];
        }

        QueryPerformanceCounter(&start);
        selectionSort(vetor, n);
        QueryPerformanceCounter(&end);

        elapsed_time = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

        fprintf(file, "%.6f\n", elapsed_time);
    }

    fclose(file);

    printf("Valores do elapsed_time foram salvos no arquivo tempos_execucao.txt.\n");

    return 0;
}
