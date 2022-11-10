#include <stdio.h>
#include <stdlib.h>

void main(){

    float nota1, nota2, nota3, media;

    printf("Insita a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Insira a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A sua media eh %.1f\n", media);

    system("pause");
}