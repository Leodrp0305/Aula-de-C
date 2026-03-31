#include <stdio.h>	

int main(void) {
	int pi[10],i;
	int topo;

	topo = 0;
	pi[topo]=4;
	topo = 1;
	pi[topo] = 12;
	topo = 2;
	pi[topo] = 1;
	topo = 3;
	pi[topo]=9;

	void VerPilha(void){
		for(i=topo;i >= 0;i--){
			printf("%d\n",pi[i]);
		}
	}

VerPilha();
}

