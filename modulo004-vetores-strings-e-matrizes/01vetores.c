#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){

    int vetor[TAM], cont;

    //passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //exibindo os valores do vetor
    printf("Posicao 0: %d\n", vetor[0]);
    printf("Posicao 1: %d\n", vetor[1]);
    printf("Posicao 2: %d\n", vetor[2]);

    //adicionando 1 para cada posicao
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }

    //imprimindo vetor em um laco de repeticao
    for(cont = 0; cont < TAM; cont++){
        printf("Posicao %d: %d\n", cont, vetor[cont]);
    }

    //lendo 3 valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d\n", &vetor[cont]);
    }

    for(cont = 0; cont < TAM; cont++){
        printf("Posicao %d: %d\n", cont, vetor[cont]);
    }

    system("pause");
}