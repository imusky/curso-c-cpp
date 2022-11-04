#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo uma variável
    int a = 5, b;

    //Imprimindo a variável "a" e o "\n" faz pular linha
    printf("%d\n", a);

    //Concatenando
    printf("O valor da var a eh: %d\n", a);

    //Mudando o valor de a
    a = 15;

    printf("O valor da var a e eh: %d\n", a);

    printf("Escolha um valor para a variavel b ");

    //Lendo valores
    scanf("%d", &b);

    printf("O valor da var b e eh: %d\n", b);

    system("pause");

}