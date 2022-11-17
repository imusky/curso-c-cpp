#include <stdio.h>
#include <stdlib.h>

void main(){

    //variaveis
    char palavra[10];

    //instrucao
    printf("Digite uma palavra:\n");

    //limpar o buffer
    setbuf(stdin, 0);

    //ler a string
    fgets(palavra, 255, stdin);

    //limpa as casas nao utilizadas
    palavra[strlen(palavra)-1] = '\0';

    printf("%s\n", palavra);

    system("pause");
}