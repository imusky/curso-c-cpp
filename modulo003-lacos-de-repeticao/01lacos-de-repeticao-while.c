#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 1, b = 10;

//contando ate 10
    while (a <= 10){

        //imprimindo 'a' na tela
        printf("%d\n", a);

        //incremento
        a++; //a = a + 1;
    }
    
    //contagem regressiva
    while(b >= 0){

        printf("%d\n", b);

        b--; //b = b - 1;
    }

system("pause");
}