#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5, b = 10, c = 15;
    char d = 'x';

    //maior
    if(a > 2){
        printf("%d eh maior que 2\n", a);
    }

    //maior ou igual
    if(c >= b){
        printf("%d eh maior ou igual a %d\n", c, b);
    }

    //menor
    if(a < 10){
        printf("%d eh menor que 10\n", a);
    }

    //menor ou igual
    if(a <= 10){
        printf("%d eh menor ou igual a 10\n", a);
    }

    //diferente
    if(c != 10){
        printf("%d nao eh 10\n", c);
    }

    if (d != 'a'){
        printf("%c nao eh a\n", d);
    }

    system("pause");
}