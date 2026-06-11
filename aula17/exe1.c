#include <stdio.h>

#define MAX 20

//Estruturando a fila
typedef struct {
	int dados[MAX];
	int  fim;
} Fila;

//Inicializa a fila
void iniciar(Fila*f) {
	f-> fim =-1;
}

//Verificar se está vazia
int vazia(Fila*f) {
	return f ->fim == -1;
}

//Verificar se está cheia
int cheia(Fila*f) {
	return f->fim == MAX - 1;
}

//Insere no final 
void inserir(Fila *f, int valor) {
	if(cheia(f)) {
		printf("Fila cheia!\n");
		return;
	}
	f->fim++;
	f->dados[f->fim] = valor;
	printf("Inseriu: %d\n", valor);
}

//Remover do incio (desloca todos os elementos)
int remover(Fila*f){
	if(vazia(f)){
		printf("Fila vazia!\n");
		return -1;
	}
	int i;
	int valor = f->dados[0];

	//Desloca todos os elementos uma posição para frente
	for (int i = 0; i < f->fim; i++); {
		f-> dados[i] = f->dados[i+1];
	}

	f->fim--;
	printf("Removeu: %d\n", valor);
	return valor;
}

//Mostrar a fila
void mostrar(Fila*f) {
	if(vazia(f)) {
		printf("Fila vazia!\n");
		return;
	}
	
	printf("Fila:\n");
	for(int i = 0; i <= f->fim; i++) {
			printf("%d ", f->dados[i]);
		}
	printf("\n");
}

//Programa Principal
int main() {
	Fila fila;
	iniciar (&fila);

	printf("Inserindo elementos \n");
	inserir(&fila, 10);
	inserir(&fila, 20);
	inserir(&fila, 50);
	mostrar(&fila);

	printf("\n Removendo elementos \n");
	remover(&fila);
	mostrar(&fila);
}
