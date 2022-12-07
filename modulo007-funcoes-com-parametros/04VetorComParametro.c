#include <stdio.h>
#include <stdlib.h>

void imprimeVetor();
void modificaVetor();

int main(){

    //definindo vetor
    int v[3] = {1,2,3};

    //mostrando vetor
    imprimeVetor(v, 3);

    //modifica o vetor
    modificaVetor(v, 3);

    imprimeVetor(v, 3);

    return 0;
}

void imprimeVetor(int *vetor, int tamanho){

    //variavel contador
    int i;

    //percorrendo o vetor
    for(i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }

}

void modificaVetor(int *vetor, int tamanho){

        //variavel contador
    int i;

    //percorrendo o vetor
    for(i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] + 1;
    }
}