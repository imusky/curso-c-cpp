#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
/*
    vetor = [0][1][2]

    matriz = [0.0][0.1][0.2]
             [1.0][1.1][1.2]
*/
    //criando uma matriz
    int matriz[2][2], i, j;

    //passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;
    /*
    iria ficar assim:
    matriz = [1][2]
             [3][4]
    */

    //imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "\ni = " << i << " , j = " << j;
            cout << matriz[i][j] * 2 << " ";
        }
        cout << "\n";
    }

    //imprimindo valores para a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //scanf("%d", &matriz[i] [j]);  <- isso é na linguagem C
            cin >> matriz[i][j];// <- Isso é em C++
        }
    }

    //imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "\ni = " << i << " , j = " << j;
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    system("pause");
}