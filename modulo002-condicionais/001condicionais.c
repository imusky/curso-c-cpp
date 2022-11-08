#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 4, opcao = 5;
    float b = 2.5;
    char c = 'x';

    if (a == 5){
        printf("A variavel a = 5\n");
    }

    if(b == 2.5){
        printf("A varaivel b = 2.5\n");
    }

    if(c == 'x'){
        printf("A variavel c = letra x\n");
    }

    //numero par ou impar
    if (a % 2 == 1){
        printf("A variavel a eh impar\n");
    }else{
        printf("A variavel eh par\n");
    }

    //condicional composta
    if(opcao == 1){
        printf("A opcao = 1\n");
    }else if(opcao  == 2){
        printf("A opcao = 2\n");
    }else{
        printf("A opcao nao eh igual a 1 e nem 2\n");
        }

    system("pause");
}