#include <stdio.h>

#define MAX 5

typedef struct lista{
	int dados[MAX];
	int tamanho;
}lista;

int inserir(lista *L, int valor) {
	if (L->tamanho >=MAX) {
		printf("Lista cheia \n");
		return 0;
	}
L->dados[L->tamanho++] = valor;
return 1;
}

void imprimir(lista *L) {
	if (L->tamanho ==0) {
		printf("Lista Vazia \n");
		return;
	}
	printf("Lista: \n");
	for (int i = 0; i < L-> tamanho; i ++) {
		printf("\n%d", L->dados[i]);
	}
	printf("\n");
}

	int remover (lista *L, int valor){
		int i, encontrado = 0;
		for(i = 0;i<=L->tamanho; i++) {
			if(L->dados[i] == valor) {
			encontrado = 1; 
			break;
			}
		}
		if (encontrado == 0) {
			printf("Valor %d nao foi encontrado\n",valor);
			return 0;
			}
		for(; i < L->tamanho; i++){
			L->dados[i] = L->dados[i+1];
			}
		
		L->tamanho--;
		printf("Valor %d removido com sucesso. \n", valor);
		return 1;
	}

int main() {

lista Lista1;

Lista1.tamanho = 0;
for (int i = 0; i < MAX; i++) {
inserir(&Lista1, i);
}

imprimir(&Lista1);
remover(&Lista1,2);
imprimir(&Lista1);
}
