/*
Leia uma matriz 4 x 4, imprima a matriz e retorne à localização (linha e a coluna) do maior valor.
*/

#include <stdio.h>

int main () {
    
    int x[4] [4],g,k,h = 0;

    printf("/////////////\nEste programa le uma matriz 4x4 e retorna\na localizacao (linha e coluna) do maior valor.\n");
    
    for (int i = 0; i < 4; i++) {

        printf("Digite os 4 valores da linha %d: ",i + 1);

        for (int j = 0; j < 4; j++) {

            if (scanf("%d", &x[i][j]) != 1) {
                printf("Valor digitado invalido!");
                return 0;
            }

            if (h < x [i] [j]) {
                g = i;
                k = j;
                h = x [i] [j];
            }
        }
    }

    printf("O maior valor eh %d e ele esta na linha %d na coluna %d",h,g + 1,k + 1);

    return 0;
}