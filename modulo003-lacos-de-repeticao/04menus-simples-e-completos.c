#include <stdio.h>
#include <stdlib.h>

void main(){

    int opcao;

    //confere e valida a opcao
    while(opcao < 1 || opcao >3){
        
        //interface de menu
        printf("Escolha uma opcao:\n");
        printf("1-Opcao 1\n");
        printf("2-Opcao 2\n");
        printf("3-Opcao 3\n");

        //lendo a opcao
        scanf("%d", &opcao);


        switch (opcao){
            case 1:
                printf("Voce escolheu a opcao 1\n");
                break;

            case 2:
                printf("Voce escolheu a opcao 2\n");
                break;
            case 3:
                printf("Voce escolheu a opcao 3\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    }
    system("pause");
}