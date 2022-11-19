#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    //definindo variavies
    int a;
    float b;
    char c;
    bool d;

    //passando valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;

    //imprimindo com C
    printf("Valor: %d\n", a);
    printf("Valor: %.1f\n", b);
    printf("Valor: %c\n", c);
    printf("Valor: %d\n", d);

    //imprimindo com C++
    //std::cout << "oi";  para nao precisar ficar escrevendo std:: toda vez utilizar --> using namespace std;
    cout << "Valor :" << a << "!\n";

    //lendo valores em C
    //scanf("%d", &a);

    //lendo valores com C++
    //std::cin >> a;
    cin >> a;

    cout << "Valor :" << a;

    return 0;
}