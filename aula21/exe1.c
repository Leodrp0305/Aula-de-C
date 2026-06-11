#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
struct bairros{
	char cidade[20];
	char bairro[30];
};
struct cidades{
	char cidades[20];
};
struct cidades cid[MAX];
struct bairros bai[MAX];

void imprimirTudo(int x) {
	int i = x;	
	    for(int j=0; j<i; j++){
        printf("Cidade: %s, Bairro: %s\n", bai[j].cidade, bai[j].bairro);
    }
}

void pesquisar() {
	FILE *arquiCid;
	char linha [100];
	char nomeCid[20];
	int i = 0;

	arquiCid = fopen("cidade:s.csv", "r");

	if (arquiCid == NULL) {
		printf("Arquivo cidades.csv está vazio");
		return;
	
	while(fgets(linha, sizeof(linha),arquiCid)!=NULL && i < MAX){
		linha[strcspn(linha, "\n")] = '\0';
		sscanf(linha, "%19[^;];", cid[i].cidades);
		printf("%d",i);
		i++;
	}	
	fclose(arquiCid);
} 
	for(int j=0; j<i; j++){
        	printf("\nCidade: %s", cid[j].cidades);
	}
	printf("\nQual o cidade deseja saber os bairro:\n\n");
	fgets(nomeCid, sizeof(nomeCid), stdin);
		nomeCid[strcspn(nomeCid,"\n")] = '\0';

}
int main(){
	printf("\nBem vindo ao leitor de arquivos\n");

	int i = 0;
	FILE *arquivoCid;
	char linha[100];
	int Loop = 1;

	arquivoCid = fopen("bairros_cid.csv", "r");

	if(arquivoCid == NULL){
		printf("arquivo vazio ou inexistente");
		return 1;
	}

	while(fgets(linha, sizeof(linha),arquivoCid)!=NULL && i < MAX){
		linha[strcspn(linha, "\n")] = '\0';
		sscanf(linha, "%19[^;];%29[^\n]", bai[i].cidade, bai[i].bairro);

		i++;
	}

	fclose(arquivoCid);

	while(Loop != 0) {
		int Res = 0;
		printf("\nPesquisar Bairro        |(1) ");
		printf("\nImprimir todo o arquivo |(2)");
		printf("\nSair                    |(3)\n");
		scanf("%d", &Res);

			switch(Res) {
				case 1:
					pesquisar();
					break;
				case 2:
					imprimirTudo(i);
					break;
	
				case 3:
					Loop = 0;
					break;
				default:
					printf("Digite um dos números citados!");
			}
		}
	return 1;
	}

		

