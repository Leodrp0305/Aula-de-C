#include <stdio.h>

int main() {

	int e[10] = {4,12,1,9,16,8,44,19,20,5}, topo = -1;
	int i, tamanho;
	tamanho = sizeof(e)/sizeof(e[0]);
	
	printf("------------- Impressão da Pilha ------------\n\n");

	for(i = tamanho - 1; i > topo; i--) {
	printf("%d \n",e[i]);
	}
}
