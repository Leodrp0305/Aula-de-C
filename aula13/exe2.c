#include <stdio.h>
#include <unistd.h>	
	
int main() {
	int matriz[4][4];
	int num1, i, j;
	
	printf ("Digite os número para sua matriz\n");
	for(i = 0; i < 4;i++){
		for(j = 0; j < 4; j++){
			printf("Digite um número:\n");
			scanf("%d", &matriz[i][j]);
		}
	}
		 printf("\n Processando variavel");
	        for(i = 0; i < 2; i++){

                for (j = 0; j < 3; j++){
                        fflush(stdout);
                        printf(".");
                        usleep(500000);
                }
		printf("\n");
        }
	printf("\n\n");

	for (i = 0; i < 4; i++){
		for(j = 0; j < 4;j++ ){

			if( i == j) {

		printf("| %d |", matriz[i][j]);
			} else{
		printf("|   |");
			}
		}
		printf("\n");
	}	
}


