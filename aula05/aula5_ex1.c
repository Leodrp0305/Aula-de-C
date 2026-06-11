#include <stdio.h>

int main(void) {
    int n = 5; //iniciando variavel para definição de quantos itens serão varridos
    int i, j, temp; //Iniciando i e j para contagem e temp para guardar temporaria-			mente um número 
    int idade[n];

    for (i = 0; i < n; i++) {
	printf("\n Digite um número:\n");
	scanf("\n %d", &idade[i]);
    }
    // Algoritmo Selection Sort
    for (i = 0; i < n - 1; i++) { //Ambos os fors são utilizados para analizar 2 nu					meros
        for (j = i + 1; j < n; j++) {
            // Se o número atual for maior que o próximo, eles trocam de lugar
            if (idade[i] > idade[j]) { //caso idade[i] seja maior que idade[j]
                temp = idade[i]; //idade[i] será guardade temporariamente em temp
                idade[i] = idade[j]; //idade[j] será guardado em idade[i] no array
                idade[j] = temp; //e colocará o valor de temp em idade[j]
				 // explicação:
	//o primeiro for vai marcar o número que será o menor nesse moment, enquanto j percorrerá todo o array para encontrar o menor número restante para poder substituir, assim diferentemente do bubble sort, ele vai organizar de forma mais direta, comparando por exemplo o primeiro número com todos os outros de uma vez usando o for do j
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

