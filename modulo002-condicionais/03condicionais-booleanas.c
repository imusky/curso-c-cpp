#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    bool a = true, b = false;

    //se A for verdadeiro
    if(a){
        printf("A eh verdadeiro\n");
    }

    //comparando o B
    if(b){
        printf("B eh verdadeiro\n");
    }else{
        printf("B eh falso\n");
    }

    //comparando uma falsidade
    if (!b){
        printf("B eh falso\n");
    }

    system("pause");
}