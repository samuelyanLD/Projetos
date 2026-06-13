/*
Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include <stdio.h>

int main () {
    
    int x[4][4], c = 0;

    printf("/////////////\nEste programa registra uma matriz 4x4 e retorna quantos valores sao maiores que 10.\n");
    
    for (int i = 0; i < 4; i++) {

        printf("Digite os 4 valores da linha %d: ",i + 1);

        for (int j = 0; j < 4; j++) {

            if (scanf("%d", &x[i][j]) != 1) {
                printf("Valor digitado invalido!");
                return 0;
            }

            if (x[i][j] > 10) {
                c++;
            }
        }
    }

    printf("A quantidade de valores maiores que 10 eh igual a %d.",c);

    return 0;
}