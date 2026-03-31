#include <stdio.h>

void incrementa(int *p){
	(*p)++; // incrementa o valor apontado por p
	
}

int main() {
	int numero = 5;
	int sim = 1;
	do {
	incrementa(&numero); //passa endereço de numero
	
	printf("Valor incrementado: %d\n", numero);

	printf("Voce gostaria de continuar incrementando?(1 para continuar)");
	scanf("%d", &sim);
	}while(sim == 1);
	return 0;
}
