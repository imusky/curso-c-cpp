#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //para podermos utilizar acentua��o e tamb�m temos que incluir <locale.h>
    setlocale(LC_ALL, "Portuguese");
    //Definindo uma vari�vel
    int a = 5, b;

    //Imprimindo a vari�vel "a" e o "\n" faz pular linha
    printf("%d\n", a);

    //Concatenando
    printf("O valor da var a �: %d\n", a);

    //Mudando o valor de a
    a = 15;

    printf("O valor da var a e �: %d\n", a);

    printf("Escolha um valor para a vari�vel b ");

    //Lendo valores
    scanf("%d", &b);

    printf("O valor da var b e �: %d\n", b);

    system("pause");

}