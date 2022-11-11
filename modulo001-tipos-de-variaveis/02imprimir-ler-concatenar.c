#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //para podermos utilizar acentuação e também temos que incluir <locale.h>
    setlocale(LC_ALL, "Portuguese");
    //Definindo uma variável
    int a = 5, b;

    //Imprimindo a variável "a" e o "\n" faz pular linha
    printf("%d\n", a);

    //Concatenando
    printf("O valor da var a é: %d\n", a);

    //Mudando o valor de a
    a = 15;

    printf("O valor da var a e é: %d\n", a);

    printf("Escolha um valor para a variável b ");

    //Lendo valores
    scanf("%d", &b);

    printf("O valor da var b e é: %d\n", b);

    system("pause");

}