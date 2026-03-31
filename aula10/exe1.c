#include <stdio.h>

float cMedia(float n1, float  n2){
	float md = (n1+n2)/2;
	return md;
}

int main(){
	float nota1, nota2, media;
	printf("\n Inf 1a nota: ");
	scanf("%f", &nota1);

	printf("\n Inf 2a nota: ");
	scanf("%f", &nota2);

	media = cMedia(nota2, nota1);
	printf("\n A media %.2f", media);
}

