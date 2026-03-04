# include <stdio.h>
# include <stdlib.h> //incluindo função de rand
# include <time.h> //incluindo função time

int main(){
	int aposta [6][2]; // Criar variaveis e vetores
	int i,j, med;
	srand(time(NULL));//chamando rand
	for(i=0;i<6;i++) {	//for i e j para preencher o vetor
		for(j=0; j<2; j++){
		aposta[i][j] = rand() % 100; //randomizando cada digito entre 0 a 100
		}
	}
	for(i=0;i<6;i++) { //mesmo esquema do for i e j para preencher, mas agora para imprimir
		for(j=0; j<2; j++){
		printf("|%d| \t",aposta[i][j]);
		med = med + aposta[i][j]; //salvando ambos os números da linha 
		}
	med = med/2; //calculando a média
	printf(" = %d", med); //impressão de média
	med = 0; //zerando a variavel med para a próxima rotação
	printf("\n"); //pulando linha
	}
}
