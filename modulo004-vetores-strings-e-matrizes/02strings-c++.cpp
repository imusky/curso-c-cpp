#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(){

    //definindo uma string
    string palavra;

    //imprimindo na tela
    cout << "Digite uma palavra\n";

    //lendo uma string
    cin >> palavra;

    //imprimindo uma variavel
    cout << "A palavra eh: "<<palavra;

    system("pause");

    return 0;

}