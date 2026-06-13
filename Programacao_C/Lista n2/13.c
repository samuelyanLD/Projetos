/*
Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a
matriz obtida.
*/

#include <stdio.h>

int main ( ) {
    
    int x[5] [5],i,j;

    printf("/////////////\nEste programa declara uma matriz 5x5, preenche a diagonal\nprincipal com 1 e com 0 os demais elementos, ao final retorna a matriz.\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            
            if (i != j) {
                x [i] [j] = 0;
            } else {
                x [i] [j] = 1;
            }
        }
    }

    printf("Resultado da matriz: \n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ",x [i] [j]);
        }
        printf("\n");
    }

    return 0;
}