/*
Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
*/

#include <stdio.h>

int main ( ) {
    
    int x[15],s = 0;
    float z;

    printf("/////////////\nEste programa registra 15 valores de notas dos \nalunos em um vetor, calcula a media geral e os retorna.\n");
    printf("Digite os 15 numeros: [x y z...]  ");

    for (int i = 0; i < 15; i++) {

        if (scanf("%d",&x [i]) != 1) {
            printf("O valor %d digitado eh invalido!\n",i);
            return 0;
        }

        s = s + x[i];

    }

    z = (float)s / 15;

    printf("O valor da media das 15 notas eh igual a %.2f! ",z);

    return 0;
}