#include <stdio.h>
#include <stdlib.h>

void main(){

    int cont;

    //tabuada do 5
    for(cont = 1; cont <= 10; cont++){
        printf(" 5 x %d = %d\n", cont, 5 * cont);
    }

    //contando de 2 em 2
    for(cont = 0; cont <= 10; cont = cont + 2){
        printf("%d\n", cont);
    }

    //contagem regressiva
    for(cont = 10; cont >= 0; cont--){
        printf("%d\n", cont);
    }

    system("pause");
}