#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    int a = 20;

    printf("Valor de a: %d\n", a);

    //lendo o endereco de uma variavel
    printf("Endereco de a: %d \n", &a);

    //VARIAVEIS ARMAZENAM VALORES
    int b = 10;

    //PONTEIROS ARMAZENAM POSICOES DA MEMORIA
    int *ponteiro;

    //PONTEIRO RECEBENDO A POSICAO NA MEMORIA DA VARIAVEL b
    ponteiro = &b;

    //imprimindo o valor de uma variavel
    printf("Valor de b: %d\n", b);

    // * pode ser lido como "CONTEUDO APONTADO POR"
    *ponteiro = 40;

    //imprimindo o valor de uma variavel
    printf("Valor de b: %d", b);

    return 0;
}


/*
VARIAVEL
[VALOR QUE ARMAZENA]
[POSICAO NA MEMORIA]

PONTEIRO
[POSICAO DA MEMORIA QUE ESTA ARMAZENANDO]
[POSICAO NA MEMORIA]
*/