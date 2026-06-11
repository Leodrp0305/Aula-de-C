#include <stdio.h>

int main(void){
	int i,j,aux;
	int vetor[] = {17,22,11,33,18,9}; 
	int n = 6;
	int pesquisa;


	for (i=0; i < n-1; i++){
		for(j = i; j<n; j++){
		if (vetor[i]>vetor[j]) {
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
			}
		}
	}
	for (i=0; i < n; i++) {
		printf("\n%d\n",vetor[i]);
		}
	
}
