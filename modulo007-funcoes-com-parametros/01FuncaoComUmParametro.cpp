#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int parametroUm);
int retornaAntecessor(int parametroUm);

int main(){

    int a;

    printf("Digite um valor: ");

    scanf("%d", &a);

    /*printf("O sucessor de %d eh %d", a, a + 1);*/

    mostraSucessor(a);

    printf("O antecessor de %d eh %d\n", a, retornaAntecessor(a)); 

    return 0;
}

void mostraSucessor(int parametroUm){
    printf("O sucessor de %d eh %d\n", parametroUm, parametroUm + 1);
}

int retornaAntecessor(int parametroUm){
    return parametroUm - 1;
}