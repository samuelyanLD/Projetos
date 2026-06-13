/*
Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor.
*/

#include <stdio.h>

int main () {
    
    int x[10], nn = 0, np = 0;

    printf("/////////////\nEste programa registra 10 numeros reais, calcula a \nquantidade de numeros negativos e a soma dos números positivos do vetor.\n");
    printf("Digite os 10 numeros: [x -y z...]  ");

    for (int i = 0; i < 10; i++ ) {
 
        if (scanf("%d",&x[i]) != 1) {
            printf("Valor digitado invalido");
            return 0;
        }

        if (x[i] < 0) {
            nn++;
        } else {
            np = np + x[i];
        }

    }

    printf("Quantidade de numeros negativos: %d\nSoma dos numeros positivos: %d\n",nn,np);

    return 0;
}