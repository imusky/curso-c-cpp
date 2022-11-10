#include <stdlib.h>

void main(){

    int a = 10;

    //conectivo logico E(AND), se UMA COMPRACAO for FALSA, NAO ENTRA no bloco.
    if(a > 5 && a > 15){
        printf("A variavel 'a' esta entre 5 e 15\n");
    }

    //conectivo logico OU(OR), se UMA COMPARACAO for VERDADEIRA, ENTRA no bloco.
    if(a > 5 || a < 20){
        printf("A variaval 'a' eh maior que 5 ou 15\n");
    }

    //misturando conectivos
    if( (a > 5 && a < 15) || a == 20){
        printf("A variavel 'a' esta entre 5 e 15 ou ela vale 20\n");
    }
    

    system("pause");
}