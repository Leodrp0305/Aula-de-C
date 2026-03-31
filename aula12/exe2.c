#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 5

int pilha[TAM];

int topo = -1;
int i;

void push(int valor);
void pop();
void exibirPilha();

int main() {

int op,valor,i;
int resposta, var;
bool sim = true;
while(sim) {
printf("\n\n|1 Inserir Valor na Pilha (push)\n");
printf("|2 Retirar Valor da pilha (pop) \n");
printf("|3 Mostrar Pilha \n");
printf("|4 sair\n");
printf("\n Digite sua resposta\n");
scanf("%d",&resposta);

switch (resposta) {
	case 1 :
	printf("\ndigite um número\n");
	scanf("%d", &var);
 	push(var);
	break;
	case 2 :
	pop();
	break;
  case 3 :
	exibirPilha();
	break;
  case 4 :
	 sim = false;
	break;
	}
}

return 0;
}

void push(int valor) {
	if (topo == TAM-1) {
		printf("\nPilha cheia!\n");
	}else {
		topo++;
		pilha[topo] = valor;
		printf("\nValor %d empilhado\n", valor);
	}
}

void pop() {
	if (topo < 0 || topo >TAM) {
		printf("\n Impossível tirar numeros da pilha");
	}else {
		printf("\n%d foi retirado da pilha\n",pilha[topo]);
		pilha[topo] = 0;
		topo--;
	}
}

void exibirPilha() {
	printf("+======================Pilha:======================+\n");
	for(i=topo;i >= 0;i--){
                   printf("%d\n",pilha[i]);
                }
}
