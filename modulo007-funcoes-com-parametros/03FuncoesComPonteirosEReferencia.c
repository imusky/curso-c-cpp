#include <stdio.h>
#include <stdlib.h>

int retornaComMaisDez();
void aumentaDez();

int main(){

    int a = 5;

    printf("%d\n", a);

    //aumenta 10
    a = retornaComMaisDez(a);

    printf("%d\n", a);

    //funcao que aumenta dez diretamente
    aumentaDez(&a);

    printf("%d\n", a);

    return 0;
}

int retornaComMaisDez(int numero){
    return numero + 10;
}

void aumentaDez(int *numero){
 *numero = *numero + 10;
}
