#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int dados;
	struct no* prox;
} No;

int main() {
No *pNode1 = malloc(sizeof(No));
No *pNode2 = malloc(sizeof(No));
No *pNode3 = malloc(sizeof(No));

pNode1->dados =10;
pNode2->dados =20;
pNode3->dados =30;

pNode1->prox=pNode2;
pNode2->prox=pNode3;
pNode3->prox=NULL;

printf("\n==========================================\n");
printf("               Primeira Lista");
printf("\n==========================================\n\n");



No* L = pNode1;

	while(L != NULL) {
		printf(" ==> %d\n",L->dados);
	L = L->prox;	
	}

No *pNode4 = malloc(sizeof(No));
No *pNode5 = malloc(sizeof(No));

pNode4->dados =40;
pNode5->dados =50;

pNode3->prox=pNode4;
pNode4->prox=pNode5;
pNode5->prox=NULL;

printf("\n==========================================\n");
printf("               Segunda Lista");
printf("\n==========================================\n\n");

L = pNode1;
	while(L != NULL) {
		printf(" ==> %d\n",L->dados);
	L = L->prox;	
	}



printf("\n --> %d %p",pNode1->dados,(void*)pNode1->prox);

free(pNode1);
free(pNode2);
free(pNode3);
free(pNode4);
free(pNode5);
}

