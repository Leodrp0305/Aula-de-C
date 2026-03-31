#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int pilha[TAM];

int topo = -1;
int i;

void push(int valor);
void pop();
void exibirPilha();

int main() {

int op,valora,i;
push(55);
push(12);
push(18);
push(11);
push(33);
exibirPilha();

pop();
pop();

exibirPilha();

return 0;
}

void push(int valor) {
	if (topo == TAM-1) {
		printf("\nPilha cheia!");
	}else {
		topo++;
		pilha[topo] = valor;
		printf("Valor %d empilhado\n", valor);
	}
}

void pop() {
	if (topo < 0 || topo >TAM) {
		printf("\n Impossível tirar numeros da pilha");
	}else {
		printf("%d\n",pilha[topo]);
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
