#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano()
{
    return true;
}

int main()
{

    bool variavelBooleana;

    // variavel recebendo booleana
    variavelBooleana = retornaBooleano();

    printf("%d ", variavelBooleana);

    //se for verdadiro executa o priemiro bloco
    if(variavelBooleana){
        printf("Eh verdadeiro!");
    }//senao, executa o segundo bloco
    else{
        printf("Eh falso!");
    }

    return 0;
}