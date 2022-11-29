#include <stdio.h>
#include <stdlib.h>

void limpaTela();

int main(){

    int a;

    printf("Digite um valor para 'a': ");

    scanf("%d", &a);

    //chama a funcao que limpa a tela
    limpaTela();

    printf("O valor digitado foi %d\nFim do Programa!", a);

    return 0;
}

void limpaTela(){
    system("CLS");
}