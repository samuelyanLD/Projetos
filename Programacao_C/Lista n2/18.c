/*
Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa
matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a
matriz original e a matriz transformada
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int x[4] [4];

    printf("/////////////\nEste programa gera uma matriz 4x4 num intervalo de 1 a 20, a transforma\nnuma matriz triangular inferior e retorna as 2 matrizes.");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            x [i] [j] = (rand() % 20) + 1;
        }
    }

    printf("\nMatriz gerada: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d  ",x [i] [j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j > i) {
                x[i][j] = 0;
            }
        }
    }

    printf("\nNova matriz: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d  ",x [i] [j]);
        }
        printf("\n");
    }

    return 0;
}