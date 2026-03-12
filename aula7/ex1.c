#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int tam1 = 4;
	int tam2 = 4;
	int mat[tam1][tam2];
	int i,j, sum;
	srand(time(NULL));
	printf("\n+-----------------------------+\n");
	for (i=0;i< tam1; i++) {
		for(j=0;j<tam2;j++) {
			mat[i][j] = rand() % 100;
		}
	}
	printf("\n\n\n+-----------------------------+\n");
	for(i=0; i<tam1; i++){
		for(j=0; j<tam2; j++) {
			printf("|%d|", mat[i][j]);
			sum = sum + mat[i][j];
		}	
	printf("\n");

	}
	printf ("a soma de todos os elementos na tabela é de %d \n", sum);
	sum = sum / (tam1*tam2);
	printf ("e a média de todos os elementos é %d \n", sum);
}

