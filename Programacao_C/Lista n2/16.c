/*
 Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas
*/

#include <stdio.h>

int main () {

    int x [4] [4], y [4] [4], z [4] [4];

    printf("/////////////\nEste programa le 2 matrizes 4x4 e retorna uma terceira com\nos maiores valores de cada posicao das matrizes lidas.\n");

    for (int i = 0; i < 4; i++) {

        printf("Digite os 4 valores da linha %d: ",i + 1);

        for (int j = 0; j < 4; j++) {

            if (scanf("%d", &x[i][j]) != 1) {
                printf("Valor digitado invalido!");
                return 0;
            }
        }
    }

    printf("\nAgora com a segunda matriz. \n");

    for (int i = 0; i < 4; i++) {

        printf("Digite os 4 valores da linha %d: ",i + 1);

        for (int j = 0; j < 4; j++) {

            if (scanf("%d", &y[i][j]) != 1) {
                printf("Valor digitado invalido!");
                return 0;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (x[i][j] > y[i][j]) {
                z[i][j] = x[i][j];
            }
            else {
                z[i][j] = y[i][j];
            }
        }
    }

    printf("\nA terceira matriz se da por: \n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",z[i] [j]);
        }
        printf("\n");
    }


    return 0;
}