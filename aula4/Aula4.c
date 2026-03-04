# include <stdio.h>
# include <locale.h>
int main(){
    int idade;
    float altura;
    char nome[10];

    printf("\n Informe seu nome:");
    scanf("%s", nome);
    printf("\n Digite sua idade:");
    scanf("%d", &idade);
    printf("\n Digite sua altura:");
    scanf("%f", &altura);

    printf ("\n %s sua idade é %d é sua altura é %.2f  \n", nome, idade, altura);
    return 0;
}
