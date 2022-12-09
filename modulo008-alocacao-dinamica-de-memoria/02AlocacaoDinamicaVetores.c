#include <stdio.h>
#include <stdlib.h>

int* alocaVetor();

int main(){

    int *vetor, tamanho, cont;

    //lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //ponteiro recebe o endereco de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    //coloca valores no vetor
    for (cont = 0; cont < tamanho; cont++){
        vetor[cont] = 90;
    }

    //imprimindo vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }

    return 0;
}

int* alocaVetor(int tamanho){

    //criado um ponteiro auxiliar
    int *aux;

    //alocacao dinamica de memoria
    aux = (int*) malloc(tamanho  * sizeof(int) );

    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}