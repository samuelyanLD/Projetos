/*
Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento
e a posição que ele se encontra
*/

#include <stdio.h>

int main ( ) {

    int x[10], vmaior, vmenor, pmaior;

    printf("/////////////\nEste programa registra 10 valores em umn vetor e retorna o maior e o menor valor digitado.\n");
    printf("Digite os 10 numeros: [x y z...]  ");

    for (int i = 0; i < 10; i++) {

        if (scanf("%d", &x[i]) != 1) {
            printf("O valor %d digitado eh invalido!\n", i);
            return 0;
        }

        if (i == 0) {
            vmaior = x[i];
            vmenor = x[i];
            pmaior = i;
        }

        if (x[i] > vmaior) {
            vmaior = x[i];
            pmaior = i;
        }

        else if (x[i] < vmenor) {
            vmenor = x[i];
        }
    }

    printf("\nValores do vetor:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", x[i]);
    }

    printf("\n\nMaior valor: %d", vmaior);

    printf("\nPosicao do maior valor: %d", pmaior + 1);

    return 0;
}