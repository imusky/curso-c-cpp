#include <stdio.h>
#include <stdlib.h>

void main(){

    //definindo variaveis
    int a = 6, b = 4;

    //soma
    printf("A soma de %d e %d = %d\n", a, b, a + b);

    //subtracao
    printf("A subtracao de %d e %d = %d\n", a, b, a - b);

    //divisao
    printf("A divisao de %d e %d = %d\n", a, b, a / b);

    //multiplicacao
    printf("A multiplicacao de %d e %d = %d\n", a, b, a * b);

    //resto da divisao
    printf("O resto da divisao entre %d e %d = %d\n", a, b, a % b);

    //valor absoluto
    printf("O valor absoludo de -3 = %d\n", abs(-3));

    system("pause");
}