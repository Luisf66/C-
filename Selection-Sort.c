#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Troca o elemento mínimo encontrado com o elemento atual
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Preenche o vetor com números aleatórios de 0 a 900
    srand(time(0));  // Inicializa a semente do gerador de números aleatórios
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 901;  // Gera um número aleatório entre 0 e 900
    }

    printf("Vetor original: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Vetor ordenado: ");
    printArray(arr, n);

    return 0;
}
