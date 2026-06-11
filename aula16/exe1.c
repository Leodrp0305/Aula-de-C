#include <stdio.h>

#define MAX 5

int fila[MAX];
int inicio = 0;
int fim = 0;

//Inserir na fila
void inserir(int valor){
	if (fim == MAX) {
		printf("Fila cheia! \n");
		return;
	}

	fila[fim] = valor;
	fim++;
}
//Remover da fila
void remover() {
        if (inicio== fim) {
                printf("Fila vazia!\n");
                return;
        }

        printf("\n valor removido da fila: %d\n", fila[inicio]);
        inicio++;
}


//Mostrar a fila

void mostrar() {
	if (inicio == fim) {
		printf("Fila vazia!\n");
		return;
	}
	
	printf("\nFila: \n");
	for (int i = inicio; i < fim; i++){
		printf("%d\n", fila[i]);
	}
}
int main() {
	inserir(10);
	inserir(20);
	inserir(30);

	mostrar();

	remover();
	mostrar();

	inserir(40);
	inserir(50);
	inserir(60);

	mostrar();
	
	return 0;

}
