#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int tam1 = 4;
	int tam2 = 4;
	int mat[tam1][tam2];
	int i,j, sum;
	srand(time(NULL));


	for (i=0;i< tam1; i++) {
		for(j=0;j<tam2;j++) {
			mat[i][j] = rand() % 100;
		}
	}
	printf("\n\n\n+-----------------------------+\n");

	for(i=0; i<tam1; i++){
		for(j=0; j<tam2; j++) {

			if (i == j) {
				printf("\033[1;36m| %d |\t \033[0m", mat[i][j]);
				sum = sum + mat[i][j];
				} else {
				printf("| %d |\t", mat[i][j]);

		
				}
		}	
	printf("\n");

		}
	printf ("a soma dos elementos na diagonal da tabela é de %d \n", sum);
	sum = sum / (tam1*tam2);
	printf ("e a média dos elementos da diagonal da tabela %d \n", sum);
}

