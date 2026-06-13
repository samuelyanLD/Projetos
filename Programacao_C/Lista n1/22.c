/*
 Escreva um programa que leia dois valores reais. Ambos valores deverão ser lidos até que o
usuário digite um número no intervalo de 1 a 100. Apresentar a soma dos dois valores lidos
*/


#include <stdio.h>

int main () {

    int x,y,z,h;

    printf("\n######################\nEste programa realiza a soma de dois valores reais, digitar um numero entre 1 e 100 encerra o programa e mostra o resultado.\n");

    printf("Digite os dois valores [x y] e o intervalo: [1...100] ");

    do {

    scanf("%d %d %d",&x,&y,&z);
    
    if (z < 1 || z > 100) {
        printf("Intervalo digitado invalido!");
        return 0;
    }

    h = x + y;
    printf("O resultado de %d + %d eh igual a %d!\n",x,y,h);
    } while (z > 1 && z < 100);

    getchar();
    getchar();
    return 0;
}
