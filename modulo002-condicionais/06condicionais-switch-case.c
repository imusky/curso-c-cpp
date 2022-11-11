#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 1;
    char b = 'x';

    if(a == 1){
        printf("Opcao escolhida: 1\n");
    }else if(a == 2){
        printf("Opcao escolhida: 2\n");
    }else if(a == 3){
        printf("Opcao escolhida: 3\n");
    }else{
        printf("Opcao invalida\n");
    }

    switch(a){
        case 1:
            printf("Opcao escolhida: 1\n");
            break;
        case 2:
            printf("Opcao escolhida: 2\n");
            break;
        case 3:
            printf("Opcao escolhida: 3\n");
            break;
        default:
                printf("Opcao invalida\n");
                break;
    }

    switch(b){
        case'x':
            printf("A letra eh x\n");
        default:
        printf("A opcao eh invalida\n");
        break;
    }

    system("pause");
}