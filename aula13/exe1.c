#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main() {

int vetor[5] = {1,10,20,2,3};
bool tem = false;
int i, j, num1;

	printf("Software de Verificação de vetor\n");
	
	printf("Digite um número para verificar se existe no vetor: \n");
	scanf("%d", &num1);
	
	
	
	for(i = 0; i < 2; i++){
		printf("\n Processando variavel");
		fflush(stdout);

		for (j = 0; j < 3; j++){
		        fflush(stdout);
			printf(".");
			usleep(500000);
		}
	}
	for(i = 0; i <= 5; i++){
		if (num1 == vetor[i]) {
			tem = true;
			break;
		}
	}
	if (tem) {
		printf ("\n o número %d existe no vetor", num1);
	} else{
		printf("\n o número %d não existe no vetor", num1);
			}
}


