#include <stdio.h>

int main() {
	int idade = 47;
	int *ptr;

	ptr = &idade;
	
	printf("Valor de var = %d\n",idade);
	
	printf("Endereço de var = %p\n", &idade);

	printf("Conteudo de ptr = %p\n", ptr);

	printf("Valor apontado por ptr = %d\n", *ptr);
	
	return 0;
}

