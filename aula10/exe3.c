#include <stdio.h>

int main(){
	int *ptr;
	int x;

	x = 10;
	ptr = &x;
	x = 20;
	*ptr = 30;
	printf("\n\n x:%d, Endereco de x:%p, ptr:%p", x,&x,ptr);
}	
