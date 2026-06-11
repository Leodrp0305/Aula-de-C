#include <stdio.h>

int main() {
	float notaEnem;
	float *ponteiro;
	
	notaEnem = 6.1;
	printf("Nota anterior: %f \n", notaEnem);
	printf("Insira uma nova nota\n");
	scanf("%f", &*ponteiro);
	
	notaEnem = *ponteiro;
	printf("sua nova nota é %f", *ponteiro);
}
