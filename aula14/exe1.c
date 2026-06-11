#include <stdio.h>

struct Inscricao{
	char nome[30];
	char curso[20];
	int ano;
	float nota;
};

struct Inscricao vestibular[5];

int main() {
	int i;
	for(i = 0; i<5; i++) {
	fflush(stdin);
	printf("Informe o nome do candidato: \n");
	fgets(vestibular[i].nome, sizeof(vestibular[i].nome), stdin);
	printf("Informe o curso desejado: \n");
	fgets(vestibular[i].curso, sizeof(vestibular[i].curso), stdin);
	printf("Digite o ano atual: (exemplo 2025)\n");
	scanf("%d", &vestibular[i].ano);
	printf("Avaliacao obtida: \n");
	scanf("%f", &vestibular[i].nota);
	}
	for(i=0; i<5;i++){
		printf("\nCandidatos %d :", i+1);
		printf("\n%s", vestibular[i].nome);
		printf("\n%s", vestibular[i].curso);
		printf("\n%d", vestibular[i].ano);	
		printf("\n%f", vestibular[i].nota);
	}
}
