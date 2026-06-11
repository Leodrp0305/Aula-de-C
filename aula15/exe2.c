#include <stdio.h>

struct {
	int RA;
	char nome[30];
	float mediaFinal;
}Aluno;

int main(){

	printf("Insira seu RA: \n");
	scanf("%d", &Aluno.RA);
	
	getchar();

	printf("Insira seu nome: \n");
	fgets(Aluno.nome, sizeof(Aluno.nome), stdin);
	fflush(stdin);
	printf("Digite sua média final: \n");
	scanf("%f", &Aluno.mediaFinal);

	printf("Seu cadastro eh\n");
	printf("\n +=======================================+");
	
	printf("\n");
	
	printf("\n  RA : %d", Aluno.RA);
	printf("\n Nome: %s", Aluno.nome);
	printf(" Media: %.2f", Aluno.mediaFinal);
	
	printf("\n\n\n\n");
	printf("+\n +=======================================+\n");
	return 0;
}
