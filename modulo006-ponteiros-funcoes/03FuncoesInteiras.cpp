#include <stdio.h>
#include <stdlib.h>

//definindo que a funcao existe
int retornaDez();
float retornaQuebrado();

int main(){

    int a;

    //passando o retorno de uma funcao para uma variavel
    a = retornaDez();

    printf("%d\n", a);

    float b;

    b = retornaQuebrado();

    printf("%.1f\n", b);

    return 0;
}


int retornaDez(){
    printf("Oi galera! \n");
    int numero = 100;
    return numero * 10;
}

//retorna um numero quebrado
float retornaQuebrado(){
    return 5.5;
}