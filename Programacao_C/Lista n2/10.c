/*
Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
*/

#include <stdio.h>

int main () {
    
    int x[10], nn = 0, np = 0;

    printf("/////////////\nEste programa registra 10 numeros e atribui 0 para todos os valores negativos.\n");
    printf("Digite os 10 numeros: [x -y z...]  ");

    for (int i = 0; i < 10; i++ ) {
 
        if (scanf("%d",&x[i]) != 1) {
            printf("Valor digitado invalido");
            return 0;
        }

        if (x[i] < 0) {
            x[i] = 0;
        }

    }

    printf("Os valores digitados foram: ");

    for (int i = 0; i < 10; i++) {
        printf("%d  ",x[i]);
    }

    return 0;
}