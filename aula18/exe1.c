#include <stdio.h>
#include <stdlib.h>

struct No {
	int n_Data;
	struct No *prox;
};

void imprimirlista(struct No *L) {
	printf("\n Imprimindo a Lista: \n");
	if (L) {
		while (L != NULL) {
		printf("%d -> ", L->n_Data);
		L = L -> prox;
		}
		printf("NULL\n");
	}else{
	printf("Lista vazia.\n");
	}
}

//Função de remover elementos 
void RemoverElemento(struct No **head, int valor) {
	struct No *atual = *head;
	struct No *anterior = NULL;

	while(atual != NULL){
	if (atual->n_Data == valor){
		if(anterior == NULL) {
		//Removedor do primeiro nó
		*head = atual ->prox;
		} else { 
			anterior ->prox = atual -> prox;
		}
		free(atual);
		printf("\nElemento %d removido\n", valor);
		return;
		}

		anterior = atual;
		atual = atual->prox;
	}

	printf("\n Elemento não encotrado na lista\n");
}

int main(void) {
	struct No *pNode1 = NULL;
	struct No *pNode2 = NULL;
	struct No *pNode3 = NULL;
	struct No *pNode4 = NULL;

	//Alocar espaço para a struct
	pNode1 = (struct No*)malloc(sizeof(struct No));
	pNode1 ->n_Data = 10;

	pNode2 = (struct No*)malloc(sizeof(struct No));	
	pNode2 ->n_Data = 20;

	pNode3 = (struct No*)malloc(sizeof(struct No));	

	pNode3 ->n_Data = 30;

	//Conectando os nós
	pNode1 -> prox = pNode2;
	pNode2 -> prox = pNode3;
	pNode3 -> prox = NULL;

	imprimirlista(pNode1);
	RemoverElemento(&pNode1, 20);
	imprimirlista(pNode1);
	return 0;
}

