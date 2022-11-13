#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 1, b = 10;

    //primeiro confere a condicao. depois repete o bloco se for necessario
    while (a <= 10){

        printf("%d\n", a);

        //incremento
        a++; //a = a + 1;
    }

    //alterando o valor de 'a'
    a = 20;

    //primeiro executa uma vez. depois confere a condicao.
    do{
        printf("%d\n", a);

        a++; //a = a + 1;

    }while(a <= 10);

system("pause");
}