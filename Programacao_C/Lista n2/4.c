/*
Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/

#include <stdio.h>

int main ( ) {

    int x [10],z [10],y = 0;

    printf("/////////////\nEste programa registra 10 valores em umn vetor e retorna quantos valores pares ele possui.\n");
    printf("Digite os 10 numeros: [x y z...]  ");

    for (int i = 0; i < 10; i++) {

        if (scanf("%d",&x [i]) != 1) {
            printf("O valor %d digitado eh invalido!\n",i);
            return 0;
        }
        
        if (x[i] % 2 == 0) {
            z [y] = x [i];
            y++;
        }
    }

    printf("\n%d numeros digitados sao pares, sendo eles: ",y);

    for (int h = 0; h < y ; h++) {
        printf("%d  ",z[h]);
    }

    return 0;
}