#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //definindo variaveis
    int a;
    float b;
    char c;
    bool d;

    //passando valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //escrevendo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.1f", b);
    printf("\n o valor de c = %c", c);
    printf("\n o valor de d = %d\n", d);

    //lendo valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    scanf("%d", &d);

    //escrevendo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.2f", b);
    printf("\n o valor de c = %c", c);
    printf("\n o valor de d = %d\n", d);

    //pausando
    system("pause");

}