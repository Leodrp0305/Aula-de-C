# include <stdio.h>
#include <stdbool.h>

int main () {
   int vet[] = {18, 48, 16, 31, 24};
    int procura;
    bool achou = false;

    printf("\n Informe a idade procurada: ");
    scanf("%d", &procura);

        for(int i = 0; i < 5; i++){
            if(procura == vet[i]) {
                printf("A idade de %d consta no sistema e está na posicao, %d", &procura, &i);
                achou = true;
            }
        }

    if (achou != true) {
        printf ("Idade não encontrada");
    }
        return 0;
}