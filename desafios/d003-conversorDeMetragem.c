#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;

    printf("------------------------------\n");
    printf("-----CONVERSOR DE MEDIDAS-----\n");
    printf("------------------------------\n");
    printf("Passe uma Medida em Metros: \n");
    scanf("%d", &a);
    printf("------------------------------\n");
    printf("A medida de:\t%dm\n", a);
    printf("Em Metros:\t%d\n", a);
    printf("Em Descimetro:\t%ddm\n", a * 10);
    printf("Em Centimetro:\t%ddm\n", a * 100);
    printf("Em Milimetro:\t%ddm\n", a * 1000);

    return 0;
}