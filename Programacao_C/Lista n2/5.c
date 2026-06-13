/*
Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o
menor elemento do vetor

*/

#include <stdio.h>

int main ( ) {

    int x[10],vmaior,vmenor;


    printf("/////////////\nEste programa registra 10 valores em umn vetor e retorna o maior e o menor valor digitado.\n");
    printf("Digite os 10 numeros: [x y z...]  ");

    for (int i = 0; i < 10; i++) {

        if (scanf("%d",&x [i]) != 1) {
            printf("O valor %d digitado eh invalido!\n",i);
            return 0;
        }

        if (i == 0) {
            vmaior = x[i];
            vmenor = x[i];
        }

        if (x[i] > vmaior) {
            vmaior = x[i];
        }
        
        if (x[i] < vmenor) {
            vmenor = x[i];
        }

    }

    printf("O menor valor eh %d e o maior %d. ",vmenor,vmaior);

    return  0;
}