#include <stdio.h>

int main(void){
	int i,j,aux;
	int vetor[] = {17,22,11,33,18,9}; 
	int n = 6;
	int pesquisa;

	printf("\nSistema de pesquisa de número:\n\n");
	printf("Digite o número que está procurando:\n");
	scanf("%d", &pesquisa);
	aux = 0;
	for(i=0;i < n; i++){
		if (vetor[i] == pesquisa){
			aux += 1;
		}
	}
	if (aux >= 1) {
	printf("O número %d, se repete %d vezes", pesquisa, aux);
	} else {
		printf("número não encotrado em nossos sitema");
		}
}
