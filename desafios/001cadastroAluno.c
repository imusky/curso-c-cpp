#include <stdio.h>
#include <stdlib.h>

void main(){

    char nome[30];
    char bairro[30];
    char cidade[30];
    int idade;
    
    printf("Qual eh o seu nome? ");
    scanf("%s", &nome);

    printf("Qual eh o seu bairro? ");
    scanf("%s", &bairro);

    printf("Qual eh a sua cidade?");
    scanf("%s", &cidade);

    printf("Qual eh a sua idade? ");
    scanf("%d", &idade);

    printf("Seu nome eh %s, seu bairro eh %s, sua cidade eh %s e a sua idade eh %d\n", nome, bairro, cidade, idade);

    system("pause");
}