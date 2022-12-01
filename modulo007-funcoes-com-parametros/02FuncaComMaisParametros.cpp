#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor);
int retornaSoma(int primeiroValor, int segundoValor);

int main(){

    int a = 5, b = 7;

    //funcao que mostra a soma
    mostraSoma(a,b);

    //exibe o resuldado da soma retornando pela funcao
    printf("A soma entre %d e %d eh de: %d", a, b, retornaSoma(a, b));

    return 0;
}

void mostraSoma(int primeiroValor, int segundoValor){
    printf("A soma entre %d e %d eh de: %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}