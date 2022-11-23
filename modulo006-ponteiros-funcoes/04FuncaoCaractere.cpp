#include <stdio.h>
#include <stdlib.h>

char retornaLetra();

int main(){

    char letra;

    letra = retornaLetra();

    printf("%c", letra);

    return 0;
}

char retornaLetra(){
    return 'x';
}