/*
Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/

#include <stdio.h>

int main () {

    int x[6];
    int i = 0;

    printf("\n///////////////////////\nEste programa le 6 valores inteiros e em seguida os retorna.\n");
    printf("Digite os valores: [x y z...]  ");
    
    do {

        if (scanf("%d",&x [i]) != 1) {
            printf("O valor %d digitado eh invalido!\n",i);
            return 0;
        }
        i++;

    } while (i < 6);

    printf("\nValores digitados:\n");

    i = 0;

    do {

        printf("%d\n", x[i]);
        i++;

    } while (i < 6);

    return 0;
}