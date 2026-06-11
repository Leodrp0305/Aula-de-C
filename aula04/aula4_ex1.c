#include <stdio.h>

int main(void) {
    int idade[] = {35, 22, 17, 48, 11};
    int n = 5;
    int i, j, temp;

    // Algoritmo Selection Sort
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            // Se o número atual for maior que o próximo, eles trocam de lugar
            if (idade[i] > idade[j]) {
                temp = idade[i];
                idade[i] = idade[j];
                idade[j] = temp;
            }
        }
    }

    // Impressão do array ordenado
    printf("Idades ordenadas:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", idade[i]);
    }
    printf("\n");

    return 0;
}

