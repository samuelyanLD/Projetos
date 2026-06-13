/*
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.
*/

#include <stdio.h>

int main ( ) {
    
    int x[3] [3],soma = 0,i,j;

    printf("/////////////\nEste programa le uma matriz 3x3 e calcula a soma dos elementos na diagonal principal.");
    
    printf("\nDigite a matriz\n");
    for (int i = 0; i < 3; i++ ) {
        
        printf("Digite os 3 valores da linha %d: ",i + 1);

        for (int j = 0; j < 3; j++) {
            if (scanf("%d",&x[i][j]) != 1) {
                printf("Valor digitado invalido");
            return 0;
            }
            if (i == j) {
                soma += x[i][j];
            }
        }
    }
    printf("\nO resultado da soma da diagonal principal eh de %d.\n",soma);


    return 0;
}